#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C35E80"))) PPC_WEAK_FUNC(sub_83C35E80);
PPC_FUNC_IMPL(__imp__sub_83C35E80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22440
	ctx.r3.s64 = ctx.r11.s64 + 22440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35E8C"))) PPC_WEAK_FUNC(sub_83C35E8C);
PPC_FUNC_IMPL(__imp__sub_83C35E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35E90"))) PPC_WEAK_FUNC(sub_83C35E90);
PPC_FUNC_IMPL(__imp__sub_83C35E90) {
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
	// addi r3,r11,17860
	ctx.r3.s64 = ctx.r11.s64 + 17860;
	// bl 0x83523120
	ctx.lr = 0x83C35EA8;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,22448
	ctx.r3.s64 = ctx.r10.s64 + 22448;
	// bl 0x831cdcc8
	ctx.lr = 0x83C35EB4;
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

__attribute__((alias("__imp__sub_83C35EC4"))) PPC_WEAK_FUNC(sub_83C35EC4);
PPC_FUNC_IMPL(__imp__sub_83C35EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35EC8"))) PPC_WEAK_FUNC(sub_83C35EC8);
PPC_FUNC_IMPL(__imp__sub_83C35EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,17876
	ctx.r7.s64 = ctx.r8.s64 + 17876;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,17876(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17876);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,17876(r8)
	PPC_STORE_U32(ctx.r8.u32 + 17876, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C35EF0"))) PPC_WEAK_FUNC(sub_83C35EF0);
PPC_FUNC_IMPL(__imp__sub_83C35EF0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-26988
	ctx.r6.s64 = ctx.r7.s64 + -26988;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-27060(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -27060);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,17876(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 17876);
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
	// std r9,-26988(r7)
	PPC_STORE_U64(ctx.r7.u32 + -26988, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C35F38"))) PPC_WEAK_FUNC(sub_83C35F38);
PPC_FUNC_IMPL(__imp__sub_83C35F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22464
	ctx.r3.s64 = ctx.r11.s64 + 22464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35F44"))) PPC_WEAK_FUNC(sub_83C35F44);
PPC_FUNC_IMPL(__imp__sub_83C35F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35F48"))) PPC_WEAK_FUNC(sub_83C35F48);
PPC_FUNC_IMPL(__imp__sub_83C35F48) {
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
	// addi r3,r11,17888
	ctx.r3.s64 = ctx.r11.s64 + 17888;
	// bl 0x8259af80
	ctx.lr = 0x83C35F60;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,22480
	ctx.r3.s64 = ctx.r10.s64 + 22480;
	// bl 0x831cdcc8
	ctx.lr = 0x83C35F6C;
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

__attribute__((alias("__imp__sub_83C35F7C"))) PPC_WEAK_FUNC(sub_83C35F7C);
PPC_FUNC_IMPL(__imp__sub_83C35F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35F80"))) PPC_WEAK_FUNC(sub_83C35F80);
PPC_FUNC_IMPL(__imp__sub_83C35F80) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,17864
	ctx.r11.s64 = ctx.r8.s64 + 17864;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-27012(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27012);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,22472
	ctx.r3.s64 = ctx.r6.s64 + 22472;
	// stw r10,17864(r8)
	PPC_STORE_U32(ctx.r8.u32 + 17864, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35FB0"))) PPC_WEAK_FUNC(sub_83C35FB0);
PPC_FUNC_IMPL(__imp__sub_83C35FB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22488
	ctx.r3.s64 = ctx.r11.s64 + 22488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35FBC"))) PPC_WEAK_FUNC(sub_83C35FBC);
PPC_FUNC_IMPL(__imp__sub_83C35FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35FC0"))) PPC_WEAK_FUNC(sub_83C35FC0);
PPC_FUNC_IMPL(__imp__sub_83C35FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22496
	ctx.r3.s64 = ctx.r11.s64 + 22496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35FCC"))) PPC_WEAK_FUNC(sub_83C35FCC);
PPC_FUNC_IMPL(__imp__sub_83C35FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35FD0"))) PPC_WEAK_FUNC(sub_83C35FD0);
PPC_FUNC_IMPL(__imp__sub_83C35FD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22504
	ctx.r3.s64 = ctx.r11.s64 + 22504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35FDC"))) PPC_WEAK_FUNC(sub_83C35FDC);
PPC_FUNC_IMPL(__imp__sub_83C35FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35FE0"))) PPC_WEAK_FUNC(sub_83C35FE0);
PPC_FUNC_IMPL(__imp__sub_83C35FE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22512
	ctx.r3.s64 = ctx.r11.s64 + 22512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35FEC"))) PPC_WEAK_FUNC(sub_83C35FEC);
PPC_FUNC_IMPL(__imp__sub_83C35FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C35FF0"))) PPC_WEAK_FUNC(sub_83C35FF0);
PPC_FUNC_IMPL(__imp__sub_83C35FF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22520
	ctx.r3.s64 = ctx.r11.s64 + 22520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C35FFC"))) PPC_WEAK_FUNC(sub_83C35FFC);
PPC_FUNC_IMPL(__imp__sub_83C35FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36000"))) PPC_WEAK_FUNC(sub_83C36000);
PPC_FUNC_IMPL(__imp__sub_83C36000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22528
	ctx.r3.s64 = ctx.r11.s64 + 22528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3600C"))) PPC_WEAK_FUNC(sub_83C3600C);
PPC_FUNC_IMPL(__imp__sub_83C3600C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36010"))) PPC_WEAK_FUNC(sub_83C36010);
PPC_FUNC_IMPL(__imp__sub_83C36010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22536
	ctx.r3.s64 = ctx.r11.s64 + 22536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3601C"))) PPC_WEAK_FUNC(sub_83C3601C);
PPC_FUNC_IMPL(__imp__sub_83C3601C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36020"))) PPC_WEAK_FUNC(sub_83C36020);
PPC_FUNC_IMPL(__imp__sub_83C36020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22544
	ctx.r3.s64 = ctx.r11.s64 + 22544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3602C"))) PPC_WEAK_FUNC(sub_83C3602C);
PPC_FUNC_IMPL(__imp__sub_83C3602C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36030"))) PPC_WEAK_FUNC(sub_83C36030);
PPC_FUNC_IMPL(__imp__sub_83C36030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22552
	ctx.r3.s64 = ctx.r11.s64 + 22552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3603C"))) PPC_WEAK_FUNC(sub_83C3603C);
PPC_FUNC_IMPL(__imp__sub_83C3603C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36040"))) PPC_WEAK_FUNC(sub_83C36040);
PPC_FUNC_IMPL(__imp__sub_83C36040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22560
	ctx.r3.s64 = ctx.r11.s64 + 22560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3604C"))) PPC_WEAK_FUNC(sub_83C3604C);
PPC_FUNC_IMPL(__imp__sub_83C3604C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36050"))) PPC_WEAK_FUNC(sub_83C36050);
PPC_FUNC_IMPL(__imp__sub_83C36050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22568
	ctx.r3.s64 = ctx.r11.s64 + 22568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3605C"))) PPC_WEAK_FUNC(sub_83C3605C);
PPC_FUNC_IMPL(__imp__sub_83C3605C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36060"))) PPC_WEAK_FUNC(sub_83C36060);
PPC_FUNC_IMPL(__imp__sub_83C36060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22576
	ctx.r3.s64 = ctx.r11.s64 + 22576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3606C"))) PPC_WEAK_FUNC(sub_83C3606C);
PPC_FUNC_IMPL(__imp__sub_83C3606C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36070"))) PPC_WEAK_FUNC(sub_83C36070);
PPC_FUNC_IMPL(__imp__sub_83C36070) {
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
	// addi r3,r11,18236
	ctx.r3.s64 = ctx.r11.s64 + 18236;
	// bl 0x83523120
	ctx.lr = 0x83C36088;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,22584
	ctx.r3.s64 = ctx.r10.s64 + 22584;
	// bl 0x831cdcc8
	ctx.lr = 0x83C36094;
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

__attribute__((alias("__imp__sub_83C360A4"))) PPC_WEAK_FUNC(sub_83C360A4);
PPC_FUNC_IMPL(__imp__sub_83C360A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C360A8"))) PPC_WEAK_FUNC(sub_83C360A8);
PPC_FUNC_IMPL(__imp__sub_83C360A8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,18252
	ctx.r7.s64 = ctx.r8.s64 + 18252;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,18252(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18252);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,18252(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18252, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C360D0"))) PPC_WEAK_FUNC(sub_83C360D0);
PPC_FUNC_IMPL(__imp__sub_83C360D0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-26860
	ctx.r6.s64 = ctx.r7.s64 + -26860;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-26932(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -26932);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,18252(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18252);
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
	// std r9,-26860(r7)
	PPC_STORE_U64(ctx.r7.u32 + -26860, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C36118"))) PPC_WEAK_FUNC(sub_83C36118);
PPC_FUNC_IMPL(__imp__sub_83C36118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22600
	ctx.r3.s64 = ctx.r11.s64 + 22600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C36124"))) PPC_WEAK_FUNC(sub_83C36124);
PPC_FUNC_IMPL(__imp__sub_83C36124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36128"))) PPC_WEAK_FUNC(sub_83C36128);
PPC_FUNC_IMPL(__imp__sub_83C36128) {
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
	// addi r3,r11,18264
	ctx.r3.s64 = ctx.r11.s64 + 18264;
	// bl 0x8259af80
	ctx.lr = 0x83C36140;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,22616
	ctx.r3.s64 = ctx.r10.s64 + 22616;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3614C;
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

__attribute__((alias("__imp__sub_83C3615C"))) PPC_WEAK_FUNC(sub_83C3615C);
PPC_FUNC_IMPL(__imp__sub_83C3615C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36160"))) PPC_WEAK_FUNC(sub_83C36160);
PPC_FUNC_IMPL(__imp__sub_83C36160) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,18240
	ctx.r11.s64 = ctx.r8.s64 + 18240;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-26884(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26884);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,22608
	ctx.r3.s64 = ctx.r6.s64 + 22608;
	// stw r10,18240(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18240, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C36190"))) PPC_WEAK_FUNC(sub_83C36190);
PPC_FUNC_IMPL(__imp__sub_83C36190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22624
	ctx.r3.s64 = ctx.r11.s64 + 22624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3619C"))) PPC_WEAK_FUNC(sub_83C3619C);
PPC_FUNC_IMPL(__imp__sub_83C3619C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C361A0"))) PPC_WEAK_FUNC(sub_83C361A0);
PPC_FUNC_IMPL(__imp__sub_83C361A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22632
	ctx.r3.s64 = ctx.r11.s64 + 22632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C361AC"))) PPC_WEAK_FUNC(sub_83C361AC);
PPC_FUNC_IMPL(__imp__sub_83C361AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C361B0"))) PPC_WEAK_FUNC(sub_83C361B0);
PPC_FUNC_IMPL(__imp__sub_83C361B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22640
	ctx.r3.s64 = ctx.r11.s64 + 22640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C361BC"))) PPC_WEAK_FUNC(sub_83C361BC);
PPC_FUNC_IMPL(__imp__sub_83C361BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C361C0"))) PPC_WEAK_FUNC(sub_83C361C0);
PPC_FUNC_IMPL(__imp__sub_83C361C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22648
	ctx.r3.s64 = ctx.r11.s64 + 22648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C361CC"))) PPC_WEAK_FUNC(sub_83C361CC);
PPC_FUNC_IMPL(__imp__sub_83C361CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C361D0"))) PPC_WEAK_FUNC(sub_83C361D0);
PPC_FUNC_IMPL(__imp__sub_83C361D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22656
	ctx.r3.s64 = ctx.r11.s64 + 22656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C361DC"))) PPC_WEAK_FUNC(sub_83C361DC);
PPC_FUNC_IMPL(__imp__sub_83C361DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C361E0"))) PPC_WEAK_FUNC(sub_83C361E0);
PPC_FUNC_IMPL(__imp__sub_83C361E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22664
	ctx.r3.s64 = ctx.r11.s64 + 22664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C361EC"))) PPC_WEAK_FUNC(sub_83C361EC);
PPC_FUNC_IMPL(__imp__sub_83C361EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C361F0"))) PPC_WEAK_FUNC(sub_83C361F0);
PPC_FUNC_IMPL(__imp__sub_83C361F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22672
	ctx.r3.s64 = ctx.r11.s64 + 22672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C361FC"))) PPC_WEAK_FUNC(sub_83C361FC);
PPC_FUNC_IMPL(__imp__sub_83C361FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36200"))) PPC_WEAK_FUNC(sub_83C36200);
PPC_FUNC_IMPL(__imp__sub_83C36200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22680
	ctx.r3.s64 = ctx.r11.s64 + 22680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3620C"))) PPC_WEAK_FUNC(sub_83C3620C);
PPC_FUNC_IMPL(__imp__sub_83C3620C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36210"))) PPC_WEAK_FUNC(sub_83C36210);
PPC_FUNC_IMPL(__imp__sub_83C36210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22688
	ctx.r3.s64 = ctx.r11.s64 + 22688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3621C"))) PPC_WEAK_FUNC(sub_83C3621C);
PPC_FUNC_IMPL(__imp__sub_83C3621C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36220"))) PPC_WEAK_FUNC(sub_83C36220);
PPC_FUNC_IMPL(__imp__sub_83C36220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22696
	ctx.r3.s64 = ctx.r11.s64 + 22696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3622C"))) PPC_WEAK_FUNC(sub_83C3622C);
PPC_FUNC_IMPL(__imp__sub_83C3622C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36230"))) PPC_WEAK_FUNC(sub_83C36230);
PPC_FUNC_IMPL(__imp__sub_83C36230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22704
	ctx.r3.s64 = ctx.r11.s64 + 22704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3623C"))) PPC_WEAK_FUNC(sub_83C3623C);
PPC_FUNC_IMPL(__imp__sub_83C3623C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36240"))) PPC_WEAK_FUNC(sub_83C36240);
PPC_FUNC_IMPL(__imp__sub_83C36240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22712
	ctx.r3.s64 = ctx.r11.s64 + 22712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3624C"))) PPC_WEAK_FUNC(sub_83C3624C);
PPC_FUNC_IMPL(__imp__sub_83C3624C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36250"))) PPC_WEAK_FUNC(sub_83C36250);
PPC_FUNC_IMPL(__imp__sub_83C36250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22720
	ctx.r3.s64 = ctx.r11.s64 + 22720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3625C"))) PPC_WEAK_FUNC(sub_83C3625C);
PPC_FUNC_IMPL(__imp__sub_83C3625C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36260"))) PPC_WEAK_FUNC(sub_83C36260);
PPC_FUNC_IMPL(__imp__sub_83C36260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22728
	ctx.r3.s64 = ctx.r11.s64 + 22728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3626C"))) PPC_WEAK_FUNC(sub_83C3626C);
PPC_FUNC_IMPL(__imp__sub_83C3626C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36270"))) PPC_WEAK_FUNC(sub_83C36270);
PPC_FUNC_IMPL(__imp__sub_83C36270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22736
	ctx.r3.s64 = ctx.r11.s64 + 22736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3627C"))) PPC_WEAK_FUNC(sub_83C3627C);
PPC_FUNC_IMPL(__imp__sub_83C3627C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36280"))) PPC_WEAK_FUNC(sub_83C36280);
PPC_FUNC_IMPL(__imp__sub_83C36280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22744
	ctx.r3.s64 = ctx.r11.s64 + 22744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3628C"))) PPC_WEAK_FUNC(sub_83C3628C);
PPC_FUNC_IMPL(__imp__sub_83C3628C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36290"))) PPC_WEAK_FUNC(sub_83C36290);
PPC_FUNC_IMPL(__imp__sub_83C36290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22752
	ctx.r3.s64 = ctx.r11.s64 + 22752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3629C"))) PPC_WEAK_FUNC(sub_83C3629C);
PPC_FUNC_IMPL(__imp__sub_83C3629C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C362A0"))) PPC_WEAK_FUNC(sub_83C362A0);
PPC_FUNC_IMPL(__imp__sub_83C362A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22760
	ctx.r3.s64 = ctx.r11.s64 + 22760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C362AC"))) PPC_WEAK_FUNC(sub_83C362AC);
PPC_FUNC_IMPL(__imp__sub_83C362AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C362B0"))) PPC_WEAK_FUNC(sub_83C362B0);
PPC_FUNC_IMPL(__imp__sub_83C362B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22768
	ctx.r3.s64 = ctx.r11.s64 + 22768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C362BC"))) PPC_WEAK_FUNC(sub_83C362BC);
PPC_FUNC_IMPL(__imp__sub_83C362BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C362C0"))) PPC_WEAK_FUNC(sub_83C362C0);
PPC_FUNC_IMPL(__imp__sub_83C362C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22776
	ctx.r3.s64 = ctx.r11.s64 + 22776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C362CC"))) PPC_WEAK_FUNC(sub_83C362CC);
PPC_FUNC_IMPL(__imp__sub_83C362CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C362D0"))) PPC_WEAK_FUNC(sub_83C362D0);
PPC_FUNC_IMPL(__imp__sub_83C362D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22784
	ctx.r3.s64 = ctx.r11.s64 + 22784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C362DC"))) PPC_WEAK_FUNC(sub_83C362DC);
PPC_FUNC_IMPL(__imp__sub_83C362DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C362E0"))) PPC_WEAK_FUNC(sub_83C362E0);
PPC_FUNC_IMPL(__imp__sub_83C362E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22792
	ctx.r3.s64 = ctx.r11.s64 + 22792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C362EC"))) PPC_WEAK_FUNC(sub_83C362EC);
PPC_FUNC_IMPL(__imp__sub_83C362EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C362F0"))) PPC_WEAK_FUNC(sub_83C362F0);
PPC_FUNC_IMPL(__imp__sub_83C362F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22800
	ctx.r3.s64 = ctx.r11.s64 + 22800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C362FC"))) PPC_WEAK_FUNC(sub_83C362FC);
PPC_FUNC_IMPL(__imp__sub_83C362FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36300"))) PPC_WEAK_FUNC(sub_83C36300);
PPC_FUNC_IMPL(__imp__sub_83C36300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22808
	ctx.r3.s64 = ctx.r11.s64 + 22808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3630C"))) PPC_WEAK_FUNC(sub_83C3630C);
PPC_FUNC_IMPL(__imp__sub_83C3630C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36310"))) PPC_WEAK_FUNC(sub_83C36310);
PPC_FUNC_IMPL(__imp__sub_83C36310) {
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
	// addi r3,r11,18624
	ctx.r3.s64 = ctx.r11.s64 + 18624;
	// bl 0x83523120
	ctx.lr = 0x83C36328;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,22816
	ctx.r3.s64 = ctx.r10.s64 + 22816;
	// bl 0x831cdcc8
	ctx.lr = 0x83C36334;
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

__attribute__((alias("__imp__sub_83C36344"))) PPC_WEAK_FUNC(sub_83C36344);
PPC_FUNC_IMPL(__imp__sub_83C36344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36348"))) PPC_WEAK_FUNC(sub_83C36348);
PPC_FUNC_IMPL(__imp__sub_83C36348) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,18640
	ctx.r7.s64 = ctx.r8.s64 + 18640;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,18640(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18640);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,18640(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18640, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C36370"))) PPC_WEAK_FUNC(sub_83C36370);
PPC_FUNC_IMPL(__imp__sub_83C36370) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-26628
	ctx.r6.s64 = ctx.r7.s64 + -26628;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-26700(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -26700);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,18640(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18640);
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
	// std r9,-26628(r7)
	PPC_STORE_U64(ctx.r7.u32 + -26628, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C363B8"))) PPC_WEAK_FUNC(sub_83C363B8);
PPC_FUNC_IMPL(__imp__sub_83C363B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22832
	ctx.r3.s64 = ctx.r11.s64 + 22832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C363C4"))) PPC_WEAK_FUNC(sub_83C363C4);
PPC_FUNC_IMPL(__imp__sub_83C363C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C363C8"))) PPC_WEAK_FUNC(sub_83C363C8);
PPC_FUNC_IMPL(__imp__sub_83C363C8) {
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
	// addi r3,r11,18648
	ctx.r3.s64 = ctx.r11.s64 + 18648;
	// bl 0x8259af80
	ctx.lr = 0x83C363E0;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,22848
	ctx.r3.s64 = ctx.r10.s64 + 22848;
	// bl 0x831cdcc8
	ctx.lr = 0x83C363EC;
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

__attribute__((alias("__imp__sub_83C363FC"))) PPC_WEAK_FUNC(sub_83C363FC);
PPC_FUNC_IMPL(__imp__sub_83C363FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36400"))) PPC_WEAK_FUNC(sub_83C36400);
PPC_FUNC_IMPL(__imp__sub_83C36400) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,18628
	ctx.r11.s64 = ctx.r8.s64 + 18628;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-26652(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26652);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,22840
	ctx.r3.s64 = ctx.r6.s64 + 22840;
	// stw r10,18628(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18628, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C36430"))) PPC_WEAK_FUNC(sub_83C36430);
PPC_FUNC_IMPL(__imp__sub_83C36430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22856
	ctx.r3.s64 = ctx.r11.s64 + 22856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3643C"))) PPC_WEAK_FUNC(sub_83C3643C);
PPC_FUNC_IMPL(__imp__sub_83C3643C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36440"))) PPC_WEAK_FUNC(sub_83C36440);
PPC_FUNC_IMPL(__imp__sub_83C36440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22864
	ctx.r3.s64 = ctx.r11.s64 + 22864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3644C"))) PPC_WEAK_FUNC(sub_83C3644C);
PPC_FUNC_IMPL(__imp__sub_83C3644C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36450"))) PPC_WEAK_FUNC(sub_83C36450);
PPC_FUNC_IMPL(__imp__sub_83C36450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22872
	ctx.r3.s64 = ctx.r11.s64 + 22872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3645C"))) PPC_WEAK_FUNC(sub_83C3645C);
PPC_FUNC_IMPL(__imp__sub_83C3645C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36460"))) PPC_WEAK_FUNC(sub_83C36460);
PPC_FUNC_IMPL(__imp__sub_83C36460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22880
	ctx.r3.s64 = ctx.r11.s64 + 22880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3646C"))) PPC_WEAK_FUNC(sub_83C3646C);
PPC_FUNC_IMPL(__imp__sub_83C3646C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36470"))) PPC_WEAK_FUNC(sub_83C36470);
PPC_FUNC_IMPL(__imp__sub_83C36470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22888
	ctx.r3.s64 = ctx.r11.s64 + 22888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3647C"))) PPC_WEAK_FUNC(sub_83C3647C);
PPC_FUNC_IMPL(__imp__sub_83C3647C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36480"))) PPC_WEAK_FUNC(sub_83C36480);
PPC_FUNC_IMPL(__imp__sub_83C36480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22896
	ctx.r3.s64 = ctx.r11.s64 + 22896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3648C"))) PPC_WEAK_FUNC(sub_83C3648C);
PPC_FUNC_IMPL(__imp__sub_83C3648C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36490"))) PPC_WEAK_FUNC(sub_83C36490);
PPC_FUNC_IMPL(__imp__sub_83C36490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22904
	ctx.r3.s64 = ctx.r11.s64 + 22904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3649C"))) PPC_WEAK_FUNC(sub_83C3649C);
PPC_FUNC_IMPL(__imp__sub_83C3649C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C364A0"))) PPC_WEAK_FUNC(sub_83C364A0);
PPC_FUNC_IMPL(__imp__sub_83C364A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22912
	ctx.r3.s64 = ctx.r11.s64 + 22912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C364AC"))) PPC_WEAK_FUNC(sub_83C364AC);
PPC_FUNC_IMPL(__imp__sub_83C364AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C364B0"))) PPC_WEAK_FUNC(sub_83C364B0);
PPC_FUNC_IMPL(__imp__sub_83C364B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22920
	ctx.r3.s64 = ctx.r11.s64 + 22920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C364BC"))) PPC_WEAK_FUNC(sub_83C364BC);
PPC_FUNC_IMPL(__imp__sub_83C364BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C364C0"))) PPC_WEAK_FUNC(sub_83C364C0);
PPC_FUNC_IMPL(__imp__sub_83C364C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22928
	ctx.r3.s64 = ctx.r11.s64 + 22928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C364CC"))) PPC_WEAK_FUNC(sub_83C364CC);
PPC_FUNC_IMPL(__imp__sub_83C364CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C364D0"))) PPC_WEAK_FUNC(sub_83C364D0);
PPC_FUNC_IMPL(__imp__sub_83C364D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22936
	ctx.r3.s64 = ctx.r11.s64 + 22936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C364DC"))) PPC_WEAK_FUNC(sub_83C364DC);
PPC_FUNC_IMPL(__imp__sub_83C364DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C364E0"))) PPC_WEAK_FUNC(sub_83C364E0);
PPC_FUNC_IMPL(__imp__sub_83C364E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22944
	ctx.r3.s64 = ctx.r11.s64 + 22944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C364EC"))) PPC_WEAK_FUNC(sub_83C364EC);
PPC_FUNC_IMPL(__imp__sub_83C364EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C364F0"))) PPC_WEAK_FUNC(sub_83C364F0);
PPC_FUNC_IMPL(__imp__sub_83C364F0) {
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
	// addi r3,r11,18996
	ctx.r3.s64 = ctx.r11.s64 + 18996;
	// bl 0x83523120
	ctx.lr = 0x83C36508;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,22952
	ctx.r3.s64 = ctx.r10.s64 + 22952;
	// bl 0x831cdcc8
	ctx.lr = 0x83C36514;
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

__attribute__((alias("__imp__sub_83C36524"))) PPC_WEAK_FUNC(sub_83C36524);
PPC_FUNC_IMPL(__imp__sub_83C36524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36528"))) PPC_WEAK_FUNC(sub_83C36528);
PPC_FUNC_IMPL(__imp__sub_83C36528) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,19012
	ctx.r7.s64 = ctx.r8.s64 + 19012;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,19012(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19012);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,19012(r8)
	PPC_STORE_U32(ctx.r8.u32 + 19012, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C36550"))) PPC_WEAK_FUNC(sub_83C36550);
PPC_FUNC_IMPL(__imp__sub_83C36550) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-26500
	ctx.r6.s64 = ctx.r7.s64 + -26500;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-26572(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -26572);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,19012(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19012);
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
	// std r9,-26500(r7)
	PPC_STORE_U64(ctx.r7.u32 + -26500, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C36598"))) PPC_WEAK_FUNC(sub_83C36598);
PPC_FUNC_IMPL(__imp__sub_83C36598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22968
	ctx.r3.s64 = ctx.r11.s64 + 22968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C365A4"))) PPC_WEAK_FUNC(sub_83C365A4);
PPC_FUNC_IMPL(__imp__sub_83C365A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C365A8"))) PPC_WEAK_FUNC(sub_83C365A8);
PPC_FUNC_IMPL(__imp__sub_83C365A8) {
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
	// addi r3,r11,19024
	ctx.r3.s64 = ctx.r11.s64 + 19024;
	// bl 0x8259af80
	ctx.lr = 0x83C365C0;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,22984
	ctx.r3.s64 = ctx.r10.s64 + 22984;
	// bl 0x831cdcc8
	ctx.lr = 0x83C365CC;
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

__attribute__((alias("__imp__sub_83C365DC"))) PPC_WEAK_FUNC(sub_83C365DC);
PPC_FUNC_IMPL(__imp__sub_83C365DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C365E0"))) PPC_WEAK_FUNC(sub_83C365E0);
PPC_FUNC_IMPL(__imp__sub_83C365E0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,19000
	ctx.r11.s64 = ctx.r8.s64 + 19000;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-26524(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26524);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,22976
	ctx.r3.s64 = ctx.r6.s64 + 22976;
	// stw r10,19000(r8)
	PPC_STORE_U32(ctx.r8.u32 + 19000, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C36610"))) PPC_WEAK_FUNC(sub_83C36610);
PPC_FUNC_IMPL(__imp__sub_83C36610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,22992
	ctx.r3.s64 = ctx.r11.s64 + 22992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3661C"))) PPC_WEAK_FUNC(sub_83C3661C);
PPC_FUNC_IMPL(__imp__sub_83C3661C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36620"))) PPC_WEAK_FUNC(sub_83C36620);
PPC_FUNC_IMPL(__imp__sub_83C36620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,23000
	ctx.r3.s64 = ctx.r11.s64 + 23000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3662C"))) PPC_WEAK_FUNC(sub_83C3662C);
PPC_FUNC_IMPL(__imp__sub_83C3662C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36630"))) PPC_WEAK_FUNC(sub_83C36630);
PPC_FUNC_IMPL(__imp__sub_83C36630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,23008
	ctx.r3.s64 = ctx.r11.s64 + 23008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3663C"))) PPC_WEAK_FUNC(sub_83C3663C);
PPC_FUNC_IMPL(__imp__sub_83C3663C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36640"))) PPC_WEAK_FUNC(sub_83C36640);
PPC_FUNC_IMPL(__imp__sub_83C36640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,23016
	ctx.r3.s64 = ctx.r11.s64 + 23016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3664C"))) PPC_WEAK_FUNC(sub_83C3664C);
PPC_FUNC_IMPL(__imp__sub_83C3664C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36650"))) PPC_WEAK_FUNC(sub_83C36650);
PPC_FUNC_IMPL(__imp__sub_83C36650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,23024
	ctx.r3.s64 = ctx.r11.s64 + 23024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3665C"))) PPC_WEAK_FUNC(sub_83C3665C);
PPC_FUNC_IMPL(__imp__sub_83C3665C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36660"))) PPC_WEAK_FUNC(sub_83C36660);
PPC_FUNC_IMPL(__imp__sub_83C36660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,23032
	ctx.r3.s64 = ctx.r11.s64 + 23032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3666C"))) PPC_WEAK_FUNC(sub_83C3666C);
PPC_FUNC_IMPL(__imp__sub_83C3666C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36670"))) PPC_WEAK_FUNC(sub_83C36670);
PPC_FUNC_IMPL(__imp__sub_83C36670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,23040
	ctx.r3.s64 = ctx.r11.s64 + 23040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3667C"))) PPC_WEAK_FUNC(sub_83C3667C);
PPC_FUNC_IMPL(__imp__sub_83C3667C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36680"))) PPC_WEAK_FUNC(sub_83C36680);
PPC_FUNC_IMPL(__imp__sub_83C36680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,23048
	ctx.r3.s64 = ctx.r11.s64 + 23048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3668C"))) PPC_WEAK_FUNC(sub_83C3668C);
PPC_FUNC_IMPL(__imp__sub_83C3668C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36690"))) PPC_WEAK_FUNC(sub_83C36690);
PPC_FUNC_IMPL(__imp__sub_83C36690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,23056
	ctx.r3.s64 = ctx.r11.s64 + 23056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3669C"))) PPC_WEAK_FUNC(sub_83C3669C);
PPC_FUNC_IMPL(__imp__sub_83C3669C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C366A0"))) PPC_WEAK_FUNC(sub_83C366A0);
PPC_FUNC_IMPL(__imp__sub_83C366A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,23064
	ctx.r3.s64 = ctx.r11.s64 + 23064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C366AC"))) PPC_WEAK_FUNC(sub_83C366AC);
PPC_FUNC_IMPL(__imp__sub_83C366AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C366B0"))) PPC_WEAK_FUNC(sub_83C366B0);
PPC_FUNC_IMPL(__imp__sub_83C366B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,23072
	ctx.r3.s64 = ctx.r11.s64 + 23072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C366BC"))) PPC_WEAK_FUNC(sub_83C366BC);
PPC_FUNC_IMPL(__imp__sub_83C366BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C366C0"))) PPC_WEAK_FUNC(sub_83C366C0);
PPC_FUNC_IMPL(__imp__sub_83C366C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,23080
	ctx.r3.s64 = ctx.r11.s64 + 23080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C366CC"))) PPC_WEAK_FUNC(sub_83C366CC);
PPC_FUNC_IMPL(__imp__sub_83C366CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C366D0"))) PPC_WEAK_FUNC(sub_83C366D0);
PPC_FUNC_IMPL(__imp__sub_83C366D0) {
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
	// addi r3,r11,19368
	ctx.r3.s64 = ctx.r11.s64 + 19368;
	// bl 0x83523120
	ctx.lr = 0x83C366E8;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,23088
	ctx.r3.s64 = ctx.r10.s64 + 23088;
	// bl 0x831cdcc8
	ctx.lr = 0x83C366F4;
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

__attribute__((alias("__imp__sub_83C36704"))) PPC_WEAK_FUNC(sub_83C36704);
PPC_FUNC_IMPL(__imp__sub_83C36704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36708"))) PPC_WEAK_FUNC(sub_83C36708);
PPC_FUNC_IMPL(__imp__sub_83C36708) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,19384
	ctx.r7.s64 = ctx.r8.s64 + 19384;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,19384(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19384);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,19384(r8)
	PPC_STORE_U32(ctx.r8.u32 + 19384, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C36730"))) PPC_WEAK_FUNC(sub_83C36730);
PPC_FUNC_IMPL(__imp__sub_83C36730) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-26368
	ctx.r6.s64 = ctx.r7.s64 + -26368;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-26440(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -26440);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,19384(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19384);
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
	// std r9,-26368(r7)
	PPC_STORE_U64(ctx.r7.u32 + -26368, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C36778"))) PPC_WEAK_FUNC(sub_83C36778);
PPC_FUNC_IMPL(__imp__sub_83C36778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,23104
	ctx.r3.s64 = ctx.r11.s64 + 23104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C36784"))) PPC_WEAK_FUNC(sub_83C36784);
PPC_FUNC_IMPL(__imp__sub_83C36784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36788"))) PPC_WEAK_FUNC(sub_83C36788);
PPC_FUNC_IMPL(__imp__sub_83C36788) {
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
	// addi r3,r11,19392
	ctx.r3.s64 = ctx.r11.s64 + 19392;
	// bl 0x8259af80
	ctx.lr = 0x83C367A0;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,23120
	ctx.r3.s64 = ctx.r10.s64 + 23120;
	// bl 0x831cdcc8
	ctx.lr = 0x83C367AC;
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

__attribute__((alias("__imp__sub_83C367BC"))) PPC_WEAK_FUNC(sub_83C367BC);
PPC_FUNC_IMPL(__imp__sub_83C367BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C367C0"))) PPC_WEAK_FUNC(sub_83C367C0);
PPC_FUNC_IMPL(__imp__sub_83C367C0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,19372
	ctx.r11.s64 = ctx.r8.s64 + 19372;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-26392(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26392);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,23112
	ctx.r3.s64 = ctx.r6.s64 + 23112;
	// stw r10,19372(r8)
	PPC_STORE_U32(ctx.r8.u32 + 19372, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C367F0"))) PPC_WEAK_FUNC(sub_83C367F0);
PPC_FUNC_IMPL(__imp__sub_83C367F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,23128
	ctx.r3.s64 = ctx.r11.s64 + 23128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C367FC"))) PPC_WEAK_FUNC(sub_83C367FC);
PPC_FUNC_IMPL(__imp__sub_83C367FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36800"))) PPC_WEAK_FUNC(sub_83C36800);
PPC_FUNC_IMPL(__imp__sub_83C36800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,23136
	ctx.r3.s64 = ctx.r11.s64 + 23136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3680C"))) PPC_WEAK_FUNC(sub_83C3680C);
PPC_FUNC_IMPL(__imp__sub_83C3680C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36810"))) PPC_WEAK_FUNC(sub_83C36810);
PPC_FUNC_IMPL(__imp__sub_83C36810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,23144
	ctx.r3.s64 = ctx.r11.s64 + 23144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3681C"))) PPC_WEAK_FUNC(sub_83C3681C);
PPC_FUNC_IMPL(__imp__sub_83C3681C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36820"))) PPC_WEAK_FUNC(sub_83C36820);
PPC_FUNC_IMPL(__imp__sub_83C36820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,23152
	ctx.r3.s64 = ctx.r11.s64 + 23152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3682C"))) PPC_WEAK_FUNC(sub_83C3682C);
PPC_FUNC_IMPL(__imp__sub_83C3682C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36830"))) PPC_WEAK_FUNC(sub_83C36830);
PPC_FUNC_IMPL(__imp__sub_83C36830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,23160
	ctx.r3.s64 = ctx.r11.s64 + 23160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3683C"))) PPC_WEAK_FUNC(sub_83C3683C);
PPC_FUNC_IMPL(__imp__sub_83C3683C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36840"))) PPC_WEAK_FUNC(sub_83C36840);
PPC_FUNC_IMPL(__imp__sub_83C36840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,23168
	ctx.r3.s64 = ctx.r11.s64 + 23168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3684C"))) PPC_WEAK_FUNC(sub_83C3684C);
PPC_FUNC_IMPL(__imp__sub_83C3684C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36850"))) PPC_WEAK_FUNC(sub_83C36850);
PPC_FUNC_IMPL(__imp__sub_83C36850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,23176
	ctx.r3.s64 = ctx.r11.s64 + 23176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3685C"))) PPC_WEAK_FUNC(sub_83C3685C);
PPC_FUNC_IMPL(__imp__sub_83C3685C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36860"))) PPC_WEAK_FUNC(sub_83C36860);
PPC_FUNC_IMPL(__imp__sub_83C36860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,23184
	ctx.r3.s64 = ctx.r11.s64 + 23184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3686C"))) PPC_WEAK_FUNC(sub_83C3686C);
PPC_FUNC_IMPL(__imp__sub_83C3686C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36870"))) PPC_WEAK_FUNC(sub_83C36870);
PPC_FUNC_IMPL(__imp__sub_83C36870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,23192
	ctx.r3.s64 = ctx.r11.s64 + 23192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3687C"))) PPC_WEAK_FUNC(sub_83C3687C);
PPC_FUNC_IMPL(__imp__sub_83C3687C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36880"))) PPC_WEAK_FUNC(sub_83C36880);
PPC_FUNC_IMPL(__imp__sub_83C36880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,23200
	ctx.r3.s64 = ctx.r11.s64 + 23200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3688C"))) PPC_WEAK_FUNC(sub_83C3688C);
PPC_FUNC_IMPL(__imp__sub_83C3688C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36890"))) PPC_WEAK_FUNC(sub_83C36890);
PPC_FUNC_IMPL(__imp__sub_83C36890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,23208
	ctx.r3.s64 = ctx.r11.s64 + 23208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3689C"))) PPC_WEAK_FUNC(sub_83C3689C);
PPC_FUNC_IMPL(__imp__sub_83C3689C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C368A0"))) PPC_WEAK_FUNC(sub_83C368A0);
PPC_FUNC_IMPL(__imp__sub_83C368A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,23216
	ctx.r3.s64 = ctx.r11.s64 + 23216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C368AC"))) PPC_WEAK_FUNC(sub_83C368AC);
PPC_FUNC_IMPL(__imp__sub_83C368AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C368B0"))) PPC_WEAK_FUNC(sub_83C368B0);
PPC_FUNC_IMPL(__imp__sub_83C368B0) {
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
	// addi r3,r11,19736
	ctx.r3.s64 = ctx.r11.s64 + 19736;
	// bl 0x83523120
	ctx.lr = 0x83C368C8;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,23224
	ctx.r3.s64 = ctx.r10.s64 + 23224;
	// bl 0x831cdcc8
	ctx.lr = 0x83C368D4;
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

__attribute__((alias("__imp__sub_83C368E4"))) PPC_WEAK_FUNC(sub_83C368E4);
PPC_FUNC_IMPL(__imp__sub_83C368E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C368E8"))) PPC_WEAK_FUNC(sub_83C368E8);
PPC_FUNC_IMPL(__imp__sub_83C368E8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,19752
	ctx.r7.s64 = ctx.r8.s64 + 19752;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,19752(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19752);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,19752(r8)
	PPC_STORE_U32(ctx.r8.u32 + 19752, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C36910"))) PPC_WEAK_FUNC(sub_83C36910);
PPC_FUNC_IMPL(__imp__sub_83C36910) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-26240
	ctx.r6.s64 = ctx.r7.s64 + -26240;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-26312(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -26312);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,19752(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19752);
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
	// std r9,-26240(r7)
	PPC_STORE_U64(ctx.r7.u32 + -26240, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C36958"))) PPC_WEAK_FUNC(sub_83C36958);
PPC_FUNC_IMPL(__imp__sub_83C36958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,23240
	ctx.r3.s64 = ctx.r11.s64 + 23240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C36964"))) PPC_WEAK_FUNC(sub_83C36964);
PPC_FUNC_IMPL(__imp__sub_83C36964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36968"))) PPC_WEAK_FUNC(sub_83C36968);
PPC_FUNC_IMPL(__imp__sub_83C36968) {
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
	// addi r3,r11,19760
	ctx.r3.s64 = ctx.r11.s64 + 19760;
	// bl 0x8259af80
	ctx.lr = 0x83C36980;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,23256
	ctx.r3.s64 = ctx.r10.s64 + 23256;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3698C;
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

__attribute__((alias("__imp__sub_83C3699C"))) PPC_WEAK_FUNC(sub_83C3699C);
PPC_FUNC_IMPL(__imp__sub_83C3699C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C369A0"))) PPC_WEAK_FUNC(sub_83C369A0);
PPC_FUNC_IMPL(__imp__sub_83C369A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,19740
	ctx.r11.s64 = ctx.r8.s64 + 19740;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-26264(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26264);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,23248
	ctx.r3.s64 = ctx.r6.s64 + 23248;
	// stw r10,19740(r8)
	PPC_STORE_U32(ctx.r8.u32 + 19740, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C369D0"))) PPC_WEAK_FUNC(sub_83C369D0);
PPC_FUNC_IMPL(__imp__sub_83C369D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,23264
	ctx.r3.s64 = ctx.r11.s64 + 23264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C369DC"))) PPC_WEAK_FUNC(sub_83C369DC);
PPC_FUNC_IMPL(__imp__sub_83C369DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C369E0"))) PPC_WEAK_FUNC(sub_83C369E0);
PPC_FUNC_IMPL(__imp__sub_83C369E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,23272
	ctx.r3.s64 = ctx.r11.s64 + 23272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C369EC"))) PPC_WEAK_FUNC(sub_83C369EC);
PPC_FUNC_IMPL(__imp__sub_83C369EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C369F0"))) PPC_WEAK_FUNC(sub_83C369F0);
PPC_FUNC_IMPL(__imp__sub_83C369F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,23280
	ctx.r3.s64 = ctx.r11.s64 + 23280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C369FC"))) PPC_WEAK_FUNC(sub_83C369FC);
PPC_FUNC_IMPL(__imp__sub_83C369FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36A00"))) PPC_WEAK_FUNC(sub_83C36A00);
PPC_FUNC_IMPL(__imp__sub_83C36A00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,23288
	ctx.r3.s64 = ctx.r11.s64 + 23288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C36A0C"))) PPC_WEAK_FUNC(sub_83C36A0C);
PPC_FUNC_IMPL(__imp__sub_83C36A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36A10"))) PPC_WEAK_FUNC(sub_83C36A10);
PPC_FUNC_IMPL(__imp__sub_83C36A10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,23296
	ctx.r3.s64 = ctx.r11.s64 + 23296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C36A1C"))) PPC_WEAK_FUNC(sub_83C36A1C);
PPC_FUNC_IMPL(__imp__sub_83C36A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36A20"))) PPC_WEAK_FUNC(sub_83C36A20);
PPC_FUNC_IMPL(__imp__sub_83C36A20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,23304
	ctx.r3.s64 = ctx.r11.s64 + 23304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C36A2C"))) PPC_WEAK_FUNC(sub_83C36A2C);
PPC_FUNC_IMPL(__imp__sub_83C36A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36A30"))) PPC_WEAK_FUNC(sub_83C36A30);
PPC_FUNC_IMPL(__imp__sub_83C36A30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,23312
	ctx.r3.s64 = ctx.r11.s64 + 23312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C36A3C"))) PPC_WEAK_FUNC(sub_83C36A3C);
PPC_FUNC_IMPL(__imp__sub_83C36A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36A40"))) PPC_WEAK_FUNC(sub_83C36A40);
PPC_FUNC_IMPL(__imp__sub_83C36A40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,23320
	ctx.r3.s64 = ctx.r11.s64 + 23320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C36A4C"))) PPC_WEAK_FUNC(sub_83C36A4C);
PPC_FUNC_IMPL(__imp__sub_83C36A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36A50"))) PPC_WEAK_FUNC(sub_83C36A50);
PPC_FUNC_IMPL(__imp__sub_83C36A50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,23328
	ctx.r3.s64 = ctx.r11.s64 + 23328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C36A5C"))) PPC_WEAK_FUNC(sub_83C36A5C);
PPC_FUNC_IMPL(__imp__sub_83C36A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36A60"))) PPC_WEAK_FUNC(sub_83C36A60);
PPC_FUNC_IMPL(__imp__sub_83C36A60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,23336
	ctx.r3.s64 = ctx.r11.s64 + 23336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C36A6C"))) PPC_WEAK_FUNC(sub_83C36A6C);
PPC_FUNC_IMPL(__imp__sub_83C36A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36A70"))) PPC_WEAK_FUNC(sub_83C36A70);
PPC_FUNC_IMPL(__imp__sub_83C36A70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,23344
	ctx.r3.s64 = ctx.r11.s64 + 23344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C36A7C"))) PPC_WEAK_FUNC(sub_83C36A7C);
PPC_FUNC_IMPL(__imp__sub_83C36A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36A80"))) PPC_WEAK_FUNC(sub_83C36A80);
PPC_FUNC_IMPL(__imp__sub_83C36A80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,23352
	ctx.r3.s64 = ctx.r11.s64 + 23352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C36A8C"))) PPC_WEAK_FUNC(sub_83C36A8C);
PPC_FUNC_IMPL(__imp__sub_83C36A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36A90"))) PPC_WEAK_FUNC(sub_83C36A90);
PPC_FUNC_IMPL(__imp__sub_83C36A90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,23360
	ctx.r3.s64 = ctx.r11.s64 + 23360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C36A9C"))) PPC_WEAK_FUNC(sub_83C36A9C);
PPC_FUNC_IMPL(__imp__sub_83C36A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36AA0"))) PPC_WEAK_FUNC(sub_83C36AA0);
PPC_FUNC_IMPL(__imp__sub_83C36AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,23368
	ctx.r3.s64 = ctx.r11.s64 + 23368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C36AAC"))) PPC_WEAK_FUNC(sub_83C36AAC);
PPC_FUNC_IMPL(__imp__sub_83C36AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36AB0"))) PPC_WEAK_FUNC(sub_83C36AB0);
PPC_FUNC_IMPL(__imp__sub_83C36AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,23376
	ctx.r3.s64 = ctx.r11.s64 + 23376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C36ABC"))) PPC_WEAK_FUNC(sub_83C36ABC);
PPC_FUNC_IMPL(__imp__sub_83C36ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36AC0"))) PPC_WEAK_FUNC(sub_83C36AC0);
PPC_FUNC_IMPL(__imp__sub_83C36AC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,23384
	ctx.r3.s64 = ctx.r11.s64 + 23384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C36ACC"))) PPC_WEAK_FUNC(sub_83C36ACC);
PPC_FUNC_IMPL(__imp__sub_83C36ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36AD0"))) PPC_WEAK_FUNC(sub_83C36AD0);
PPC_FUNC_IMPL(__imp__sub_83C36AD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,23392
	ctx.r3.s64 = ctx.r11.s64 + 23392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C36ADC"))) PPC_WEAK_FUNC(sub_83C36ADC);
PPC_FUNC_IMPL(__imp__sub_83C36ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36AE0"))) PPC_WEAK_FUNC(sub_83C36AE0);
PPC_FUNC_IMPL(__imp__sub_83C36AE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,23400
	ctx.r3.s64 = ctx.r11.s64 + 23400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C36AEC"))) PPC_WEAK_FUNC(sub_83C36AEC);
PPC_FUNC_IMPL(__imp__sub_83C36AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36AF0"))) PPC_WEAK_FUNC(sub_83C36AF0);
PPC_FUNC_IMPL(__imp__sub_83C36AF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,23408
	ctx.r3.s64 = ctx.r11.s64 + 23408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C36AFC"))) PPC_WEAK_FUNC(sub_83C36AFC);
PPC_FUNC_IMPL(__imp__sub_83C36AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36B00"))) PPC_WEAK_FUNC(sub_83C36B00);
PPC_FUNC_IMPL(__imp__sub_83C36B00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,23416
	ctx.r3.s64 = ctx.r11.s64 + 23416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C36B0C"))) PPC_WEAK_FUNC(sub_83C36B0C);
PPC_FUNC_IMPL(__imp__sub_83C36B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36B10"))) PPC_WEAK_FUNC(sub_83C36B10);
PPC_FUNC_IMPL(__imp__sub_83C36B10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,23424
	ctx.r3.s64 = ctx.r11.s64 + 23424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C36B1C"))) PPC_WEAK_FUNC(sub_83C36B1C);
PPC_FUNC_IMPL(__imp__sub_83C36B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36B20"))) PPC_WEAK_FUNC(sub_83C36B20);
PPC_FUNC_IMPL(__imp__sub_83C36B20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,23432
	ctx.r3.s64 = ctx.r11.s64 + 23432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C36B2C"))) PPC_WEAK_FUNC(sub_83C36B2C);
PPC_FUNC_IMPL(__imp__sub_83C36B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36B30"))) PPC_WEAK_FUNC(sub_83C36B30);
PPC_FUNC_IMPL(__imp__sub_83C36B30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,23440
	ctx.r3.s64 = ctx.r11.s64 + 23440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C36B3C"))) PPC_WEAK_FUNC(sub_83C36B3C);
PPC_FUNC_IMPL(__imp__sub_83C36B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36B40"))) PPC_WEAK_FUNC(sub_83C36B40);
PPC_FUNC_IMPL(__imp__sub_83C36B40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,23448
	ctx.r3.s64 = ctx.r11.s64 + 23448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C36B4C"))) PPC_WEAK_FUNC(sub_83C36B4C);
PPC_FUNC_IMPL(__imp__sub_83C36B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36B50"))) PPC_WEAK_FUNC(sub_83C36B50);
PPC_FUNC_IMPL(__imp__sub_83C36B50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,23456
	ctx.r3.s64 = ctx.r11.s64 + 23456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C36B5C"))) PPC_WEAK_FUNC(sub_83C36B5C);
PPC_FUNC_IMPL(__imp__sub_83C36B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36B60"))) PPC_WEAK_FUNC(sub_83C36B60);
PPC_FUNC_IMPL(__imp__sub_83C36B60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,23464
	ctx.r3.s64 = ctx.r11.s64 + 23464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C36B6C"))) PPC_WEAK_FUNC(sub_83C36B6C);
PPC_FUNC_IMPL(__imp__sub_83C36B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36B70"))) PPC_WEAK_FUNC(sub_83C36B70);
PPC_FUNC_IMPL(__imp__sub_83C36B70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,23472
	ctx.r3.s64 = ctx.r11.s64 + 23472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C36B7C"))) PPC_WEAK_FUNC(sub_83C36B7C);
PPC_FUNC_IMPL(__imp__sub_83C36B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C36B80"))) PPC_WEAK_FUNC(sub_83C36B80);
PPC_FUNC_IMPL(__imp__sub_83C36B80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,23480
	ctx.r3.s64 = ctx.r11.s64 + 23480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C36B8C"))) PPC_WEAK_FUNC(sub_83C36B8C);
PPC_FUNC_IMPL(__imp__sub_83C36B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

