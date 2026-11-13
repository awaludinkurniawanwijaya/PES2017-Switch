#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BADEE4"))) PPC_WEAK_FUNC(sub_83BADEE4);
PPC_FUNC_IMPL(__imp__sub_83BADEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BADEE8"))) PPC_WEAK_FUNC(sub_83BADEE8);
PPC_FUNC_IMPL(__imp__sub_83BADEE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26608
	ctx.r3.s64 = ctx.r11.s64 + -26608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BADEF4"))) PPC_WEAK_FUNC(sub_83BADEF4);
PPC_FUNC_IMPL(__imp__sub_83BADEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BADEF8"))) PPC_WEAK_FUNC(sub_83BADEF8);
PPC_FUNC_IMPL(__imp__sub_83BADEF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26600
	ctx.r3.s64 = ctx.r11.s64 + -26600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BADF04"))) PPC_WEAK_FUNC(sub_83BADF04);
PPC_FUNC_IMPL(__imp__sub_83BADF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BADF08"))) PPC_WEAK_FUNC(sub_83BADF08);
PPC_FUNC_IMPL(__imp__sub_83BADF08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26592
	ctx.r3.s64 = ctx.r11.s64 + -26592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BADF14"))) PPC_WEAK_FUNC(sub_83BADF14);
PPC_FUNC_IMPL(__imp__sub_83BADF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BADF18"))) PPC_WEAK_FUNC(sub_83BADF18);
PPC_FUNC_IMPL(__imp__sub_83BADF18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26584
	ctx.r3.s64 = ctx.r11.s64 + -26584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BADF24"))) PPC_WEAK_FUNC(sub_83BADF24);
PPC_FUNC_IMPL(__imp__sub_83BADF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BADF28"))) PPC_WEAK_FUNC(sub_83BADF28);
PPC_FUNC_IMPL(__imp__sub_83BADF28) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-25348
	ctx.r3.s64 = ctx.r11.s64 + -25348;
	// bl 0x83523120
	ctx.lr = 0x83BADF40;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-26576
	ctx.r3.s64 = ctx.r10.s64 + -26576;
	// bl 0x831cdcc8
	ctx.lr = 0x83BADF4C;
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

__attribute__((alias("__imp__sub_83BADF5C"))) PPC_WEAK_FUNC(sub_83BADF5C);
PPC_FUNC_IMPL(__imp__sub_83BADF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BADF60"))) PPC_WEAK_FUNC(sub_83BADF60);
PPC_FUNC_IMPL(__imp__sub_83BADF60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-25332
	ctx.r7.s64 = ctx.r8.s64 + -25332;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-25332(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25332);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-25332(r8)
	PPC_STORE_U32(ctx.r8.u32 + -25332, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BADF88"))) PPC_WEAK_FUNC(sub_83BADF88);
PPC_FUNC_IMPL(__imp__sub_83BADF88) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-27988
	ctx.r6.s64 = ctx.r7.s64 + -27988;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-28060(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -28060);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-25332(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -25332);
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

__attribute__((alias("__imp__sub_83BADFD0"))) PPC_WEAK_FUNC(sub_83BADFD0);
PPC_FUNC_IMPL(__imp__sub_83BADFD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26560
	ctx.r3.s64 = ctx.r11.s64 + -26560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BADFDC"))) PPC_WEAK_FUNC(sub_83BADFDC);
PPC_FUNC_IMPL(__imp__sub_83BADFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BADFE0"))) PPC_WEAK_FUNC(sub_83BADFE0);
PPC_FUNC_IMPL(__imp__sub_83BADFE0) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-25320
	ctx.r3.s64 = ctx.r11.s64 + -25320;
	// bl 0x8259af80
	ctx.lr = 0x83BADFF8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-26544
	ctx.r3.s64 = ctx.r10.s64 + -26544;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAE004;
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

__attribute__((alias("__imp__sub_83BAE014"))) PPC_WEAK_FUNC(sub_83BAE014);
PPC_FUNC_IMPL(__imp__sub_83BAE014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE018"))) PPC_WEAK_FUNC(sub_83BAE018);
PPC_FUNC_IMPL(__imp__sub_83BAE018) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-25344
	ctx.r11.s64 = ctx.r8.s64 + -25344;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-28012(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28012);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-26552
	ctx.r3.s64 = ctx.r6.s64 + -26552;
	// stw r10,-25344(r8)
	PPC_STORE_U32(ctx.r8.u32 + -25344, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE048"))) PPC_WEAK_FUNC(sub_83BAE048);
PPC_FUNC_IMPL(__imp__sub_83BAE048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26536
	ctx.r3.s64 = ctx.r11.s64 + -26536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE054"))) PPC_WEAK_FUNC(sub_83BAE054);
PPC_FUNC_IMPL(__imp__sub_83BAE054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE058"))) PPC_WEAK_FUNC(sub_83BAE058);
PPC_FUNC_IMPL(__imp__sub_83BAE058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26528
	ctx.r3.s64 = ctx.r11.s64 + -26528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE064"))) PPC_WEAK_FUNC(sub_83BAE064);
PPC_FUNC_IMPL(__imp__sub_83BAE064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE068"))) PPC_WEAK_FUNC(sub_83BAE068);
PPC_FUNC_IMPL(__imp__sub_83BAE068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26520
	ctx.r3.s64 = ctx.r11.s64 + -26520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE074"))) PPC_WEAK_FUNC(sub_83BAE074);
PPC_FUNC_IMPL(__imp__sub_83BAE074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE078"))) PPC_WEAK_FUNC(sub_83BAE078);
PPC_FUNC_IMPL(__imp__sub_83BAE078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26512
	ctx.r3.s64 = ctx.r11.s64 + -26512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE084"))) PPC_WEAK_FUNC(sub_83BAE084);
PPC_FUNC_IMPL(__imp__sub_83BAE084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE088"))) PPC_WEAK_FUNC(sub_83BAE088);
PPC_FUNC_IMPL(__imp__sub_83BAE088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26504
	ctx.r3.s64 = ctx.r11.s64 + -26504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE094"))) PPC_WEAK_FUNC(sub_83BAE094);
PPC_FUNC_IMPL(__imp__sub_83BAE094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE098"))) PPC_WEAK_FUNC(sub_83BAE098);
PPC_FUNC_IMPL(__imp__sub_83BAE098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26496
	ctx.r3.s64 = ctx.r11.s64 + -26496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE0A4"))) PPC_WEAK_FUNC(sub_83BAE0A4);
PPC_FUNC_IMPL(__imp__sub_83BAE0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE0A8"))) PPC_WEAK_FUNC(sub_83BAE0A8);
PPC_FUNC_IMPL(__imp__sub_83BAE0A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26488
	ctx.r3.s64 = ctx.r11.s64 + -26488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE0B4"))) PPC_WEAK_FUNC(sub_83BAE0B4);
PPC_FUNC_IMPL(__imp__sub_83BAE0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE0B8"))) PPC_WEAK_FUNC(sub_83BAE0B8);
PPC_FUNC_IMPL(__imp__sub_83BAE0B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26480
	ctx.r3.s64 = ctx.r11.s64 + -26480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE0C4"))) PPC_WEAK_FUNC(sub_83BAE0C4);
PPC_FUNC_IMPL(__imp__sub_83BAE0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE0C8"))) PPC_WEAK_FUNC(sub_83BAE0C8);
PPC_FUNC_IMPL(__imp__sub_83BAE0C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26472
	ctx.r3.s64 = ctx.r11.s64 + -26472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE0D4"))) PPC_WEAK_FUNC(sub_83BAE0D4);
PPC_FUNC_IMPL(__imp__sub_83BAE0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE0D8"))) PPC_WEAK_FUNC(sub_83BAE0D8);
PPC_FUNC_IMPL(__imp__sub_83BAE0D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26464
	ctx.r3.s64 = ctx.r11.s64 + -26464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE0E4"))) PPC_WEAK_FUNC(sub_83BAE0E4);
PPC_FUNC_IMPL(__imp__sub_83BAE0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE0E8"))) PPC_WEAK_FUNC(sub_83BAE0E8);
PPC_FUNC_IMPL(__imp__sub_83BAE0E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26456
	ctx.r3.s64 = ctx.r11.s64 + -26456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE0F4"))) PPC_WEAK_FUNC(sub_83BAE0F4);
PPC_FUNC_IMPL(__imp__sub_83BAE0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE0F8"))) PPC_WEAK_FUNC(sub_83BAE0F8);
PPC_FUNC_IMPL(__imp__sub_83BAE0F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26448
	ctx.r3.s64 = ctx.r11.s64 + -26448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE104"))) PPC_WEAK_FUNC(sub_83BAE104);
PPC_FUNC_IMPL(__imp__sub_83BAE104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE108"))) PPC_WEAK_FUNC(sub_83BAE108);
PPC_FUNC_IMPL(__imp__sub_83BAE108) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-24976
	ctx.r3.s64 = ctx.r11.s64 + -24976;
	// bl 0x83523120
	ctx.lr = 0x83BAE120;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-26440
	ctx.r3.s64 = ctx.r10.s64 + -26440;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAE12C;
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

__attribute__((alias("__imp__sub_83BAE13C"))) PPC_WEAK_FUNC(sub_83BAE13C);
PPC_FUNC_IMPL(__imp__sub_83BAE13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE140"))) PPC_WEAK_FUNC(sub_83BAE140);
PPC_FUNC_IMPL(__imp__sub_83BAE140) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-24960
	ctx.r7.s64 = ctx.r8.s64 + -24960;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-24960(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24960);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-24960(r8)
	PPC_STORE_U32(ctx.r8.u32 + -24960, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAE168"))) PPC_WEAK_FUNC(sub_83BAE168);
PPC_FUNC_IMPL(__imp__sub_83BAE168) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-27852
	ctx.r6.s64 = ctx.r7.s64 + -27852;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-27924(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -27924);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-24960(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -24960);
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
	// std r9,-27852(r7)
	PPC_STORE_U64(ctx.r7.u32 + -27852, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAE1B0"))) PPC_WEAK_FUNC(sub_83BAE1B0);
PPC_FUNC_IMPL(__imp__sub_83BAE1B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26424
	ctx.r3.s64 = ctx.r11.s64 + -26424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE1BC"))) PPC_WEAK_FUNC(sub_83BAE1BC);
PPC_FUNC_IMPL(__imp__sub_83BAE1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE1C0"))) PPC_WEAK_FUNC(sub_83BAE1C0);
PPC_FUNC_IMPL(__imp__sub_83BAE1C0) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-24952
	ctx.r3.s64 = ctx.r11.s64 + -24952;
	// bl 0x8259af80
	ctx.lr = 0x83BAE1D8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-26408
	ctx.r3.s64 = ctx.r10.s64 + -26408;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAE1E4;
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

__attribute__((alias("__imp__sub_83BAE1F4"))) PPC_WEAK_FUNC(sub_83BAE1F4);
PPC_FUNC_IMPL(__imp__sub_83BAE1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE1F8"))) PPC_WEAK_FUNC(sub_83BAE1F8);
PPC_FUNC_IMPL(__imp__sub_83BAE1F8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-24972
	ctx.r11.s64 = ctx.r8.s64 + -24972;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-27876(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27876);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-26416
	ctx.r3.s64 = ctx.r6.s64 + -26416;
	// stw r10,-24972(r8)
	PPC_STORE_U32(ctx.r8.u32 + -24972, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE228"))) PPC_WEAK_FUNC(sub_83BAE228);
PPC_FUNC_IMPL(__imp__sub_83BAE228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26400
	ctx.r3.s64 = ctx.r11.s64 + -26400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE234"))) PPC_WEAK_FUNC(sub_83BAE234);
PPC_FUNC_IMPL(__imp__sub_83BAE234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE238"))) PPC_WEAK_FUNC(sub_83BAE238);
PPC_FUNC_IMPL(__imp__sub_83BAE238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26392
	ctx.r3.s64 = ctx.r11.s64 + -26392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE244"))) PPC_WEAK_FUNC(sub_83BAE244);
PPC_FUNC_IMPL(__imp__sub_83BAE244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE248"))) PPC_WEAK_FUNC(sub_83BAE248);
PPC_FUNC_IMPL(__imp__sub_83BAE248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26384
	ctx.r3.s64 = ctx.r11.s64 + -26384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE254"))) PPC_WEAK_FUNC(sub_83BAE254);
PPC_FUNC_IMPL(__imp__sub_83BAE254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE258"))) PPC_WEAK_FUNC(sub_83BAE258);
PPC_FUNC_IMPL(__imp__sub_83BAE258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26376
	ctx.r3.s64 = ctx.r11.s64 + -26376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE264"))) PPC_WEAK_FUNC(sub_83BAE264);
PPC_FUNC_IMPL(__imp__sub_83BAE264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE268"))) PPC_WEAK_FUNC(sub_83BAE268);
PPC_FUNC_IMPL(__imp__sub_83BAE268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26368
	ctx.r3.s64 = ctx.r11.s64 + -26368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE274"))) PPC_WEAK_FUNC(sub_83BAE274);
PPC_FUNC_IMPL(__imp__sub_83BAE274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE278"))) PPC_WEAK_FUNC(sub_83BAE278);
PPC_FUNC_IMPL(__imp__sub_83BAE278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26360
	ctx.r3.s64 = ctx.r11.s64 + -26360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE284"))) PPC_WEAK_FUNC(sub_83BAE284);
PPC_FUNC_IMPL(__imp__sub_83BAE284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE288"))) PPC_WEAK_FUNC(sub_83BAE288);
PPC_FUNC_IMPL(__imp__sub_83BAE288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26352
	ctx.r3.s64 = ctx.r11.s64 + -26352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE294"))) PPC_WEAK_FUNC(sub_83BAE294);
PPC_FUNC_IMPL(__imp__sub_83BAE294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE298"))) PPC_WEAK_FUNC(sub_83BAE298);
PPC_FUNC_IMPL(__imp__sub_83BAE298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26344
	ctx.r3.s64 = ctx.r11.s64 + -26344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE2A4"))) PPC_WEAK_FUNC(sub_83BAE2A4);
PPC_FUNC_IMPL(__imp__sub_83BAE2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE2A8"))) PPC_WEAK_FUNC(sub_83BAE2A8);
PPC_FUNC_IMPL(__imp__sub_83BAE2A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26336
	ctx.r3.s64 = ctx.r11.s64 + -26336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE2B4"))) PPC_WEAK_FUNC(sub_83BAE2B4);
PPC_FUNC_IMPL(__imp__sub_83BAE2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE2B8"))) PPC_WEAK_FUNC(sub_83BAE2B8);
PPC_FUNC_IMPL(__imp__sub_83BAE2B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26328
	ctx.r3.s64 = ctx.r11.s64 + -26328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE2C4"))) PPC_WEAK_FUNC(sub_83BAE2C4);
PPC_FUNC_IMPL(__imp__sub_83BAE2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE2C8"))) PPC_WEAK_FUNC(sub_83BAE2C8);
PPC_FUNC_IMPL(__imp__sub_83BAE2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26320
	ctx.r3.s64 = ctx.r11.s64 + -26320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE2D4"))) PPC_WEAK_FUNC(sub_83BAE2D4);
PPC_FUNC_IMPL(__imp__sub_83BAE2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE2D8"))) PPC_WEAK_FUNC(sub_83BAE2D8);
PPC_FUNC_IMPL(__imp__sub_83BAE2D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26312
	ctx.r3.s64 = ctx.r11.s64 + -26312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE2E4"))) PPC_WEAK_FUNC(sub_83BAE2E4);
PPC_FUNC_IMPL(__imp__sub_83BAE2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE2E8"))) PPC_WEAK_FUNC(sub_83BAE2E8);
PPC_FUNC_IMPL(__imp__sub_83BAE2E8) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-24608
	ctx.r3.s64 = ctx.r11.s64 + -24608;
	// bl 0x83523120
	ctx.lr = 0x83BAE300;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-26304
	ctx.r3.s64 = ctx.r10.s64 + -26304;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAE30C;
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

__attribute__((alias("__imp__sub_83BAE31C"))) PPC_WEAK_FUNC(sub_83BAE31C);
PPC_FUNC_IMPL(__imp__sub_83BAE31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE320"))) PPC_WEAK_FUNC(sub_83BAE320);
PPC_FUNC_IMPL(__imp__sub_83BAE320) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-24592
	ctx.r7.s64 = ctx.r8.s64 + -24592;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-24592(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24592);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-24592(r8)
	PPC_STORE_U32(ctx.r8.u32 + -24592, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAE348"))) PPC_WEAK_FUNC(sub_83BAE348);
PPC_FUNC_IMPL(__imp__sub_83BAE348) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-27716
	ctx.r6.s64 = ctx.r7.s64 + -27716;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-27788(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -27788);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-24592(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -24592);
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
	// std r9,-27716(r7)
	PPC_STORE_U64(ctx.r7.u32 + -27716, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAE390"))) PPC_WEAK_FUNC(sub_83BAE390);
PPC_FUNC_IMPL(__imp__sub_83BAE390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26288
	ctx.r3.s64 = ctx.r11.s64 + -26288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE39C"))) PPC_WEAK_FUNC(sub_83BAE39C);
PPC_FUNC_IMPL(__imp__sub_83BAE39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE3A0"))) PPC_WEAK_FUNC(sub_83BAE3A0);
PPC_FUNC_IMPL(__imp__sub_83BAE3A0) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-24584
	ctx.r3.s64 = ctx.r11.s64 + -24584;
	// bl 0x8259af80
	ctx.lr = 0x83BAE3B8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-26272
	ctx.r3.s64 = ctx.r10.s64 + -26272;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAE3C4;
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

__attribute__((alias("__imp__sub_83BAE3D4"))) PPC_WEAK_FUNC(sub_83BAE3D4);
PPC_FUNC_IMPL(__imp__sub_83BAE3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE3D8"))) PPC_WEAK_FUNC(sub_83BAE3D8);
PPC_FUNC_IMPL(__imp__sub_83BAE3D8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-24604
	ctx.r11.s64 = ctx.r8.s64 + -24604;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-27740(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27740);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-26280
	ctx.r3.s64 = ctx.r6.s64 + -26280;
	// stw r10,-24604(r8)
	PPC_STORE_U32(ctx.r8.u32 + -24604, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE408"))) PPC_WEAK_FUNC(sub_83BAE408);
PPC_FUNC_IMPL(__imp__sub_83BAE408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26264
	ctx.r3.s64 = ctx.r11.s64 + -26264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE414"))) PPC_WEAK_FUNC(sub_83BAE414);
PPC_FUNC_IMPL(__imp__sub_83BAE414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE418"))) PPC_WEAK_FUNC(sub_83BAE418);
PPC_FUNC_IMPL(__imp__sub_83BAE418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26256
	ctx.r3.s64 = ctx.r11.s64 + -26256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE424"))) PPC_WEAK_FUNC(sub_83BAE424);
PPC_FUNC_IMPL(__imp__sub_83BAE424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE428"))) PPC_WEAK_FUNC(sub_83BAE428);
PPC_FUNC_IMPL(__imp__sub_83BAE428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26248
	ctx.r3.s64 = ctx.r11.s64 + -26248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE434"))) PPC_WEAK_FUNC(sub_83BAE434);
PPC_FUNC_IMPL(__imp__sub_83BAE434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE438"))) PPC_WEAK_FUNC(sub_83BAE438);
PPC_FUNC_IMPL(__imp__sub_83BAE438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26240
	ctx.r3.s64 = ctx.r11.s64 + -26240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE444"))) PPC_WEAK_FUNC(sub_83BAE444);
PPC_FUNC_IMPL(__imp__sub_83BAE444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE448"))) PPC_WEAK_FUNC(sub_83BAE448);
PPC_FUNC_IMPL(__imp__sub_83BAE448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26232
	ctx.r3.s64 = ctx.r11.s64 + -26232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE454"))) PPC_WEAK_FUNC(sub_83BAE454);
PPC_FUNC_IMPL(__imp__sub_83BAE454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE458"))) PPC_WEAK_FUNC(sub_83BAE458);
PPC_FUNC_IMPL(__imp__sub_83BAE458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26224
	ctx.r3.s64 = ctx.r11.s64 + -26224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE464"))) PPC_WEAK_FUNC(sub_83BAE464);
PPC_FUNC_IMPL(__imp__sub_83BAE464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE468"))) PPC_WEAK_FUNC(sub_83BAE468);
PPC_FUNC_IMPL(__imp__sub_83BAE468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26216
	ctx.r3.s64 = ctx.r11.s64 + -26216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE474"))) PPC_WEAK_FUNC(sub_83BAE474);
PPC_FUNC_IMPL(__imp__sub_83BAE474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE478"))) PPC_WEAK_FUNC(sub_83BAE478);
PPC_FUNC_IMPL(__imp__sub_83BAE478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26208
	ctx.r3.s64 = ctx.r11.s64 + -26208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE484"))) PPC_WEAK_FUNC(sub_83BAE484);
PPC_FUNC_IMPL(__imp__sub_83BAE484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE488"))) PPC_WEAK_FUNC(sub_83BAE488);
PPC_FUNC_IMPL(__imp__sub_83BAE488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26200
	ctx.r3.s64 = ctx.r11.s64 + -26200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE494"))) PPC_WEAK_FUNC(sub_83BAE494);
PPC_FUNC_IMPL(__imp__sub_83BAE494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE498"))) PPC_WEAK_FUNC(sub_83BAE498);
PPC_FUNC_IMPL(__imp__sub_83BAE498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26192
	ctx.r3.s64 = ctx.r11.s64 + -26192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE4A4"))) PPC_WEAK_FUNC(sub_83BAE4A4);
PPC_FUNC_IMPL(__imp__sub_83BAE4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE4A8"))) PPC_WEAK_FUNC(sub_83BAE4A8);
PPC_FUNC_IMPL(__imp__sub_83BAE4A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26184
	ctx.r3.s64 = ctx.r11.s64 + -26184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE4B4"))) PPC_WEAK_FUNC(sub_83BAE4B4);
PPC_FUNC_IMPL(__imp__sub_83BAE4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE4B8"))) PPC_WEAK_FUNC(sub_83BAE4B8);
PPC_FUNC_IMPL(__imp__sub_83BAE4B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26176
	ctx.r3.s64 = ctx.r11.s64 + -26176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE4C4"))) PPC_WEAK_FUNC(sub_83BAE4C4);
PPC_FUNC_IMPL(__imp__sub_83BAE4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE4C8"))) PPC_WEAK_FUNC(sub_83BAE4C8);
PPC_FUNC_IMPL(__imp__sub_83BAE4C8) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-24240
	ctx.r3.s64 = ctx.r11.s64 + -24240;
	// bl 0x83523120
	ctx.lr = 0x83BAE4E0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-26168
	ctx.r3.s64 = ctx.r10.s64 + -26168;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAE4EC;
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

__attribute__((alias("__imp__sub_83BAE4FC"))) PPC_WEAK_FUNC(sub_83BAE4FC);
PPC_FUNC_IMPL(__imp__sub_83BAE4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE500"))) PPC_WEAK_FUNC(sub_83BAE500);
PPC_FUNC_IMPL(__imp__sub_83BAE500) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-24224
	ctx.r7.s64 = ctx.r8.s64 + -24224;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-24224(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24224);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-24224(r8)
	PPC_STORE_U32(ctx.r8.u32 + -24224, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAE528"))) PPC_WEAK_FUNC(sub_83BAE528);
PPC_FUNC_IMPL(__imp__sub_83BAE528) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-27528
	ctx.r6.s64 = ctx.r7.s64 + -27528;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-27600(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -27600);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-24224(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -24224);
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
	// std r9,-27528(r7)
	PPC_STORE_U64(ctx.r7.u32 + -27528, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAE570"))) PPC_WEAK_FUNC(sub_83BAE570);
PPC_FUNC_IMPL(__imp__sub_83BAE570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26152
	ctx.r3.s64 = ctx.r11.s64 + -26152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE57C"))) PPC_WEAK_FUNC(sub_83BAE57C);
PPC_FUNC_IMPL(__imp__sub_83BAE57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE580"))) PPC_WEAK_FUNC(sub_83BAE580);
PPC_FUNC_IMPL(__imp__sub_83BAE580) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-24216
	ctx.r3.s64 = ctx.r11.s64 + -24216;
	// bl 0x8259af80
	ctx.lr = 0x83BAE598;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-26136
	ctx.r3.s64 = ctx.r10.s64 + -26136;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAE5A4;
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

__attribute__((alias("__imp__sub_83BAE5B4"))) PPC_WEAK_FUNC(sub_83BAE5B4);
PPC_FUNC_IMPL(__imp__sub_83BAE5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE5B8"))) PPC_WEAK_FUNC(sub_83BAE5B8);
PPC_FUNC_IMPL(__imp__sub_83BAE5B8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-24236
	ctx.r11.s64 = ctx.r8.s64 + -24236;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-27552(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27552);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-26144
	ctx.r3.s64 = ctx.r6.s64 + -26144;
	// stw r10,-24236(r8)
	PPC_STORE_U32(ctx.r8.u32 + -24236, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE5E8"))) PPC_WEAK_FUNC(sub_83BAE5E8);
PPC_FUNC_IMPL(__imp__sub_83BAE5E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26128
	ctx.r3.s64 = ctx.r11.s64 + -26128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE5F4"))) PPC_WEAK_FUNC(sub_83BAE5F4);
PPC_FUNC_IMPL(__imp__sub_83BAE5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE5F8"))) PPC_WEAK_FUNC(sub_83BAE5F8);
PPC_FUNC_IMPL(__imp__sub_83BAE5F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26120
	ctx.r3.s64 = ctx.r11.s64 + -26120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE604"))) PPC_WEAK_FUNC(sub_83BAE604);
PPC_FUNC_IMPL(__imp__sub_83BAE604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE608"))) PPC_WEAK_FUNC(sub_83BAE608);
PPC_FUNC_IMPL(__imp__sub_83BAE608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26112
	ctx.r3.s64 = ctx.r11.s64 + -26112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE614"))) PPC_WEAK_FUNC(sub_83BAE614);
PPC_FUNC_IMPL(__imp__sub_83BAE614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE618"))) PPC_WEAK_FUNC(sub_83BAE618);
PPC_FUNC_IMPL(__imp__sub_83BAE618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26104
	ctx.r3.s64 = ctx.r11.s64 + -26104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE624"))) PPC_WEAK_FUNC(sub_83BAE624);
PPC_FUNC_IMPL(__imp__sub_83BAE624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE628"))) PPC_WEAK_FUNC(sub_83BAE628);
PPC_FUNC_IMPL(__imp__sub_83BAE628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26096
	ctx.r3.s64 = ctx.r11.s64 + -26096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE634"))) PPC_WEAK_FUNC(sub_83BAE634);
PPC_FUNC_IMPL(__imp__sub_83BAE634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE638"))) PPC_WEAK_FUNC(sub_83BAE638);
PPC_FUNC_IMPL(__imp__sub_83BAE638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26088
	ctx.r3.s64 = ctx.r11.s64 + -26088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE644"))) PPC_WEAK_FUNC(sub_83BAE644);
PPC_FUNC_IMPL(__imp__sub_83BAE644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE648"))) PPC_WEAK_FUNC(sub_83BAE648);
PPC_FUNC_IMPL(__imp__sub_83BAE648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26080
	ctx.r3.s64 = ctx.r11.s64 + -26080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE654"))) PPC_WEAK_FUNC(sub_83BAE654);
PPC_FUNC_IMPL(__imp__sub_83BAE654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE658"))) PPC_WEAK_FUNC(sub_83BAE658);
PPC_FUNC_IMPL(__imp__sub_83BAE658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26072
	ctx.r3.s64 = ctx.r11.s64 + -26072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE664"))) PPC_WEAK_FUNC(sub_83BAE664);
PPC_FUNC_IMPL(__imp__sub_83BAE664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE668"))) PPC_WEAK_FUNC(sub_83BAE668);
PPC_FUNC_IMPL(__imp__sub_83BAE668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26064
	ctx.r3.s64 = ctx.r11.s64 + -26064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE674"))) PPC_WEAK_FUNC(sub_83BAE674);
PPC_FUNC_IMPL(__imp__sub_83BAE674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE678"))) PPC_WEAK_FUNC(sub_83BAE678);
PPC_FUNC_IMPL(__imp__sub_83BAE678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26056
	ctx.r3.s64 = ctx.r11.s64 + -26056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE684"))) PPC_WEAK_FUNC(sub_83BAE684);
PPC_FUNC_IMPL(__imp__sub_83BAE684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE688"))) PPC_WEAK_FUNC(sub_83BAE688);
PPC_FUNC_IMPL(__imp__sub_83BAE688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26048
	ctx.r3.s64 = ctx.r11.s64 + -26048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE694"))) PPC_WEAK_FUNC(sub_83BAE694);
PPC_FUNC_IMPL(__imp__sub_83BAE694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE698"))) PPC_WEAK_FUNC(sub_83BAE698);
PPC_FUNC_IMPL(__imp__sub_83BAE698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26040
	ctx.r3.s64 = ctx.r11.s64 + -26040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE6A4"))) PPC_WEAK_FUNC(sub_83BAE6A4);
PPC_FUNC_IMPL(__imp__sub_83BAE6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE6A8"))) PPC_WEAK_FUNC(sub_83BAE6A8);
PPC_FUNC_IMPL(__imp__sub_83BAE6A8) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-23872
	ctx.r3.s64 = ctx.r11.s64 + -23872;
	// bl 0x83523120
	ctx.lr = 0x83BAE6C0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-26032
	ctx.r3.s64 = ctx.r10.s64 + -26032;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAE6CC;
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

__attribute__((alias("__imp__sub_83BAE6DC"))) PPC_WEAK_FUNC(sub_83BAE6DC);
PPC_FUNC_IMPL(__imp__sub_83BAE6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE6E0"))) PPC_WEAK_FUNC(sub_83BAE6E0);
PPC_FUNC_IMPL(__imp__sub_83BAE6E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-23856
	ctx.r7.s64 = ctx.r8.s64 + -23856;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-23856(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23856);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-23856(r8)
	PPC_STORE_U32(ctx.r8.u32 + -23856, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAE708"))) PPC_WEAK_FUNC(sub_83BAE708);
PPC_FUNC_IMPL(__imp__sub_83BAE708) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-27388
	ctx.r6.s64 = ctx.r7.s64 + -27388;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-27460(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -27460);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-23856(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -23856);
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
	// std r9,-27388(r7)
	PPC_STORE_U64(ctx.r7.u32 + -27388, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAE750"))) PPC_WEAK_FUNC(sub_83BAE750);
PPC_FUNC_IMPL(__imp__sub_83BAE750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-26016
	ctx.r3.s64 = ctx.r11.s64 + -26016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE75C"))) PPC_WEAK_FUNC(sub_83BAE75C);
PPC_FUNC_IMPL(__imp__sub_83BAE75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE760"))) PPC_WEAK_FUNC(sub_83BAE760);
PPC_FUNC_IMPL(__imp__sub_83BAE760) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-23848
	ctx.r3.s64 = ctx.r11.s64 + -23848;
	// bl 0x8259af80
	ctx.lr = 0x83BAE778;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-26000
	ctx.r3.s64 = ctx.r10.s64 + -26000;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAE784;
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

__attribute__((alias("__imp__sub_83BAE794"))) PPC_WEAK_FUNC(sub_83BAE794);
PPC_FUNC_IMPL(__imp__sub_83BAE794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE798"))) PPC_WEAK_FUNC(sub_83BAE798);
PPC_FUNC_IMPL(__imp__sub_83BAE798) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-23868
	ctx.r11.s64 = ctx.r8.s64 + -23868;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-27412(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27412);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-26008
	ctx.r3.s64 = ctx.r6.s64 + -26008;
	// stw r10,-23868(r8)
	PPC_STORE_U32(ctx.r8.u32 + -23868, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE7C8"))) PPC_WEAK_FUNC(sub_83BAE7C8);
PPC_FUNC_IMPL(__imp__sub_83BAE7C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-25992
	ctx.r3.s64 = ctx.r11.s64 + -25992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE7D4"))) PPC_WEAK_FUNC(sub_83BAE7D4);
PPC_FUNC_IMPL(__imp__sub_83BAE7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE7D8"))) PPC_WEAK_FUNC(sub_83BAE7D8);
PPC_FUNC_IMPL(__imp__sub_83BAE7D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-25984
	ctx.r3.s64 = ctx.r11.s64 + -25984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE7E4"))) PPC_WEAK_FUNC(sub_83BAE7E4);
PPC_FUNC_IMPL(__imp__sub_83BAE7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE7E8"))) PPC_WEAK_FUNC(sub_83BAE7E8);
PPC_FUNC_IMPL(__imp__sub_83BAE7E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-25976
	ctx.r3.s64 = ctx.r11.s64 + -25976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE7F4"))) PPC_WEAK_FUNC(sub_83BAE7F4);
PPC_FUNC_IMPL(__imp__sub_83BAE7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE7F8"))) PPC_WEAK_FUNC(sub_83BAE7F8);
PPC_FUNC_IMPL(__imp__sub_83BAE7F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-25968
	ctx.r3.s64 = ctx.r11.s64 + -25968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE804"))) PPC_WEAK_FUNC(sub_83BAE804);
PPC_FUNC_IMPL(__imp__sub_83BAE804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE808"))) PPC_WEAK_FUNC(sub_83BAE808);
PPC_FUNC_IMPL(__imp__sub_83BAE808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-25960
	ctx.r3.s64 = ctx.r11.s64 + -25960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE814"))) PPC_WEAK_FUNC(sub_83BAE814);
PPC_FUNC_IMPL(__imp__sub_83BAE814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE818"))) PPC_WEAK_FUNC(sub_83BAE818);
PPC_FUNC_IMPL(__imp__sub_83BAE818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-25952
	ctx.r3.s64 = ctx.r11.s64 + -25952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE824"))) PPC_WEAK_FUNC(sub_83BAE824);
PPC_FUNC_IMPL(__imp__sub_83BAE824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE828"))) PPC_WEAK_FUNC(sub_83BAE828);
PPC_FUNC_IMPL(__imp__sub_83BAE828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-25944
	ctx.r3.s64 = ctx.r11.s64 + -25944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE834"))) PPC_WEAK_FUNC(sub_83BAE834);
PPC_FUNC_IMPL(__imp__sub_83BAE834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE838"))) PPC_WEAK_FUNC(sub_83BAE838);
PPC_FUNC_IMPL(__imp__sub_83BAE838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-25936
	ctx.r3.s64 = ctx.r11.s64 + -25936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE844"))) PPC_WEAK_FUNC(sub_83BAE844);
PPC_FUNC_IMPL(__imp__sub_83BAE844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE848"))) PPC_WEAK_FUNC(sub_83BAE848);
PPC_FUNC_IMPL(__imp__sub_83BAE848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-25928
	ctx.r3.s64 = ctx.r11.s64 + -25928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE854"))) PPC_WEAK_FUNC(sub_83BAE854);
PPC_FUNC_IMPL(__imp__sub_83BAE854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE858"))) PPC_WEAK_FUNC(sub_83BAE858);
PPC_FUNC_IMPL(__imp__sub_83BAE858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-25920
	ctx.r3.s64 = ctx.r11.s64 + -25920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE864"))) PPC_WEAK_FUNC(sub_83BAE864);
PPC_FUNC_IMPL(__imp__sub_83BAE864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE868"))) PPC_WEAK_FUNC(sub_83BAE868);
PPC_FUNC_IMPL(__imp__sub_83BAE868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-25912
	ctx.r3.s64 = ctx.r11.s64 + -25912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE874"))) PPC_WEAK_FUNC(sub_83BAE874);
PPC_FUNC_IMPL(__imp__sub_83BAE874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE878"))) PPC_WEAK_FUNC(sub_83BAE878);
PPC_FUNC_IMPL(__imp__sub_83BAE878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-25904
	ctx.r3.s64 = ctx.r11.s64 + -25904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE884"))) PPC_WEAK_FUNC(sub_83BAE884);
PPC_FUNC_IMPL(__imp__sub_83BAE884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE888"))) PPC_WEAK_FUNC(sub_83BAE888);
PPC_FUNC_IMPL(__imp__sub_83BAE888) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-23504
	ctx.r3.s64 = ctx.r11.s64 + -23504;
	// bl 0x83523120
	ctx.lr = 0x83BAE8A0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-25896
	ctx.r3.s64 = ctx.r10.s64 + -25896;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAE8AC;
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

__attribute__((alias("__imp__sub_83BAE8BC"))) PPC_WEAK_FUNC(sub_83BAE8BC);
PPC_FUNC_IMPL(__imp__sub_83BAE8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE8C0"))) PPC_WEAK_FUNC(sub_83BAE8C0);
PPC_FUNC_IMPL(__imp__sub_83BAE8C0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-23488
	ctx.r7.s64 = ctx.r8.s64 + -23488;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-23488(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23488);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-23488(r8)
	PPC_STORE_U32(ctx.r8.u32 + -23488, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAE8E8"))) PPC_WEAK_FUNC(sub_83BAE8E8);
PPC_FUNC_IMPL(__imp__sub_83BAE8E8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-27252
	ctx.r6.s64 = ctx.r7.s64 + -27252;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-27324(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -27324);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-23488(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -23488);
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
	// std r9,-27252(r7)
	PPC_STORE_U64(ctx.r7.u32 + -27252, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAE930"))) PPC_WEAK_FUNC(sub_83BAE930);
PPC_FUNC_IMPL(__imp__sub_83BAE930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-25880
	ctx.r3.s64 = ctx.r11.s64 + -25880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE93C"))) PPC_WEAK_FUNC(sub_83BAE93C);
PPC_FUNC_IMPL(__imp__sub_83BAE93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE940"))) PPC_WEAK_FUNC(sub_83BAE940);
PPC_FUNC_IMPL(__imp__sub_83BAE940) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-23480
	ctx.r3.s64 = ctx.r11.s64 + -23480;
	// bl 0x8259af80
	ctx.lr = 0x83BAE958;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-25864
	ctx.r3.s64 = ctx.r10.s64 + -25864;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAE964;
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

__attribute__((alias("__imp__sub_83BAE974"))) PPC_WEAK_FUNC(sub_83BAE974);
PPC_FUNC_IMPL(__imp__sub_83BAE974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE978"))) PPC_WEAK_FUNC(sub_83BAE978);
PPC_FUNC_IMPL(__imp__sub_83BAE978) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-23500
	ctx.r11.s64 = ctx.r8.s64 + -23500;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-27276(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27276);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-25872
	ctx.r3.s64 = ctx.r6.s64 + -25872;
	// stw r10,-23500(r8)
	PPC_STORE_U32(ctx.r8.u32 + -23500, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE9A8"))) PPC_WEAK_FUNC(sub_83BAE9A8);
PPC_FUNC_IMPL(__imp__sub_83BAE9A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-25856
	ctx.r3.s64 = ctx.r11.s64 + -25856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE9B4"))) PPC_WEAK_FUNC(sub_83BAE9B4);
PPC_FUNC_IMPL(__imp__sub_83BAE9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE9B8"))) PPC_WEAK_FUNC(sub_83BAE9B8);
PPC_FUNC_IMPL(__imp__sub_83BAE9B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-25848
	ctx.r3.s64 = ctx.r11.s64 + -25848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE9C4"))) PPC_WEAK_FUNC(sub_83BAE9C4);
PPC_FUNC_IMPL(__imp__sub_83BAE9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE9C8"))) PPC_WEAK_FUNC(sub_83BAE9C8);
PPC_FUNC_IMPL(__imp__sub_83BAE9C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-25840
	ctx.r3.s64 = ctx.r11.s64 + -25840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE9D4"))) PPC_WEAK_FUNC(sub_83BAE9D4);
PPC_FUNC_IMPL(__imp__sub_83BAE9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE9D8"))) PPC_WEAK_FUNC(sub_83BAE9D8);
PPC_FUNC_IMPL(__imp__sub_83BAE9D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-25832
	ctx.r3.s64 = ctx.r11.s64 + -25832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE9E4"))) PPC_WEAK_FUNC(sub_83BAE9E4);
PPC_FUNC_IMPL(__imp__sub_83BAE9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE9E8"))) PPC_WEAK_FUNC(sub_83BAE9E8);
PPC_FUNC_IMPL(__imp__sub_83BAE9E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-25824
	ctx.r3.s64 = ctx.r11.s64 + -25824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAE9F4"))) PPC_WEAK_FUNC(sub_83BAE9F4);
PPC_FUNC_IMPL(__imp__sub_83BAE9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAE9F8"))) PPC_WEAK_FUNC(sub_83BAE9F8);
PPC_FUNC_IMPL(__imp__sub_83BAE9F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-25816
	ctx.r3.s64 = ctx.r11.s64 + -25816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAEA04"))) PPC_WEAK_FUNC(sub_83BAEA04);
PPC_FUNC_IMPL(__imp__sub_83BAEA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAEA08"))) PPC_WEAK_FUNC(sub_83BAEA08);
PPC_FUNC_IMPL(__imp__sub_83BAEA08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-25808
	ctx.r3.s64 = ctx.r11.s64 + -25808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAEA14"))) PPC_WEAK_FUNC(sub_83BAEA14);
PPC_FUNC_IMPL(__imp__sub_83BAEA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAEA18"))) PPC_WEAK_FUNC(sub_83BAEA18);
PPC_FUNC_IMPL(__imp__sub_83BAEA18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-25800
	ctx.r3.s64 = ctx.r11.s64 + -25800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAEA24"))) PPC_WEAK_FUNC(sub_83BAEA24);
PPC_FUNC_IMPL(__imp__sub_83BAEA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAEA28"))) PPC_WEAK_FUNC(sub_83BAEA28);
PPC_FUNC_IMPL(__imp__sub_83BAEA28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-25792
	ctx.r3.s64 = ctx.r11.s64 + -25792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAEA34"))) PPC_WEAK_FUNC(sub_83BAEA34);
PPC_FUNC_IMPL(__imp__sub_83BAEA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAEA38"))) PPC_WEAK_FUNC(sub_83BAEA38);
PPC_FUNC_IMPL(__imp__sub_83BAEA38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-25784
	ctx.r3.s64 = ctx.r11.s64 + -25784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAEA44"))) PPC_WEAK_FUNC(sub_83BAEA44);
PPC_FUNC_IMPL(__imp__sub_83BAEA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAEA48"))) PPC_WEAK_FUNC(sub_83BAEA48);
PPC_FUNC_IMPL(__imp__sub_83BAEA48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-25776
	ctx.r3.s64 = ctx.r11.s64 + -25776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAEA54"))) PPC_WEAK_FUNC(sub_83BAEA54);
PPC_FUNC_IMPL(__imp__sub_83BAEA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAEA58"))) PPC_WEAK_FUNC(sub_83BAEA58);
PPC_FUNC_IMPL(__imp__sub_83BAEA58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-25768
	ctx.r3.s64 = ctx.r11.s64 + -25768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAEA64"))) PPC_WEAK_FUNC(sub_83BAEA64);
PPC_FUNC_IMPL(__imp__sub_83BAEA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAEA68"))) PPC_WEAK_FUNC(sub_83BAEA68);
PPC_FUNC_IMPL(__imp__sub_83BAEA68) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-23136
	ctx.r3.s64 = ctx.r11.s64 + -23136;
	// bl 0x83523120
	ctx.lr = 0x83BAEA80;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-25760
	ctx.r3.s64 = ctx.r10.s64 + -25760;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAEA8C;
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

__attribute__((alias("__imp__sub_83BAEA9C"))) PPC_WEAK_FUNC(sub_83BAEA9C);
PPC_FUNC_IMPL(__imp__sub_83BAEA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAEAA0"))) PPC_WEAK_FUNC(sub_83BAEAA0);
PPC_FUNC_IMPL(__imp__sub_83BAEAA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-23120
	ctx.r7.s64 = ctx.r8.s64 + -23120;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-23120(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23120);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-23120(r8)
	PPC_STORE_U32(ctx.r8.u32 + -23120, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAEAC8"))) PPC_WEAK_FUNC(sub_83BAEAC8);
PPC_FUNC_IMPL(__imp__sub_83BAEAC8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-27072
	ctx.r6.s64 = ctx.r7.s64 + -27072;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-27144(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -27144);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-23120(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -23120);
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
	// std r9,-27072(r7)
	PPC_STORE_U64(ctx.r7.u32 + -27072, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAEB10"))) PPC_WEAK_FUNC(sub_83BAEB10);
PPC_FUNC_IMPL(__imp__sub_83BAEB10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-25744
	ctx.r3.s64 = ctx.r11.s64 + -25744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAEB1C"))) PPC_WEAK_FUNC(sub_83BAEB1C);
PPC_FUNC_IMPL(__imp__sub_83BAEB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAEB20"))) PPC_WEAK_FUNC(sub_83BAEB20);
PPC_FUNC_IMPL(__imp__sub_83BAEB20) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-23112
	ctx.r3.s64 = ctx.r11.s64 + -23112;
	// bl 0x8259af80
	ctx.lr = 0x83BAEB38;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-25728
	ctx.r3.s64 = ctx.r10.s64 + -25728;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAEB44;
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

__attribute__((alias("__imp__sub_83BAEB54"))) PPC_WEAK_FUNC(sub_83BAEB54);
PPC_FUNC_IMPL(__imp__sub_83BAEB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAEB58"))) PPC_WEAK_FUNC(sub_83BAEB58);
PPC_FUNC_IMPL(__imp__sub_83BAEB58) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-23132
	ctx.r11.s64 = ctx.r8.s64 + -23132;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-27096(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27096);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-25736
	ctx.r3.s64 = ctx.r6.s64 + -25736;
	// stw r10,-23132(r8)
	PPC_STORE_U32(ctx.r8.u32 + -23132, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAEB88"))) PPC_WEAK_FUNC(sub_83BAEB88);
PPC_FUNC_IMPL(__imp__sub_83BAEB88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-25720
	ctx.r3.s64 = ctx.r11.s64 + -25720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAEB94"))) PPC_WEAK_FUNC(sub_83BAEB94);
PPC_FUNC_IMPL(__imp__sub_83BAEB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAEB98"))) PPC_WEAK_FUNC(sub_83BAEB98);
PPC_FUNC_IMPL(__imp__sub_83BAEB98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-25712
	ctx.r3.s64 = ctx.r11.s64 + -25712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAEBA4"))) PPC_WEAK_FUNC(sub_83BAEBA4);
PPC_FUNC_IMPL(__imp__sub_83BAEBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAEBA8"))) PPC_WEAK_FUNC(sub_83BAEBA8);
PPC_FUNC_IMPL(__imp__sub_83BAEBA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-25704
	ctx.r3.s64 = ctx.r11.s64 + -25704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAEBB4"))) PPC_WEAK_FUNC(sub_83BAEBB4);
PPC_FUNC_IMPL(__imp__sub_83BAEBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAEBB8"))) PPC_WEAK_FUNC(sub_83BAEBB8);
PPC_FUNC_IMPL(__imp__sub_83BAEBB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-25696
	ctx.r3.s64 = ctx.r11.s64 + -25696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAEBC4"))) PPC_WEAK_FUNC(sub_83BAEBC4);
PPC_FUNC_IMPL(__imp__sub_83BAEBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAEBC8"))) PPC_WEAK_FUNC(sub_83BAEBC8);
PPC_FUNC_IMPL(__imp__sub_83BAEBC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-25688
	ctx.r3.s64 = ctx.r11.s64 + -25688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAEBD4"))) PPC_WEAK_FUNC(sub_83BAEBD4);
PPC_FUNC_IMPL(__imp__sub_83BAEBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAEBD8"))) PPC_WEAK_FUNC(sub_83BAEBD8);
PPC_FUNC_IMPL(__imp__sub_83BAEBD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-25680
	ctx.r3.s64 = ctx.r11.s64 + -25680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAEBE4"))) PPC_WEAK_FUNC(sub_83BAEBE4);
PPC_FUNC_IMPL(__imp__sub_83BAEBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAEBE8"))) PPC_WEAK_FUNC(sub_83BAEBE8);
PPC_FUNC_IMPL(__imp__sub_83BAEBE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-25672
	ctx.r3.s64 = ctx.r11.s64 + -25672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAEBF4"))) PPC_WEAK_FUNC(sub_83BAEBF4);
PPC_FUNC_IMPL(__imp__sub_83BAEBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAEBF8"))) PPC_WEAK_FUNC(sub_83BAEBF8);
PPC_FUNC_IMPL(__imp__sub_83BAEBF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-25664
	ctx.r3.s64 = ctx.r11.s64 + -25664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAEC04"))) PPC_WEAK_FUNC(sub_83BAEC04);
PPC_FUNC_IMPL(__imp__sub_83BAEC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAEC08"))) PPC_WEAK_FUNC(sub_83BAEC08);
PPC_FUNC_IMPL(__imp__sub_83BAEC08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-25656
	ctx.r3.s64 = ctx.r11.s64 + -25656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAEC14"))) PPC_WEAK_FUNC(sub_83BAEC14);
PPC_FUNC_IMPL(__imp__sub_83BAEC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAEC18"))) PPC_WEAK_FUNC(sub_83BAEC18);
PPC_FUNC_IMPL(__imp__sub_83BAEC18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-25648
	ctx.r3.s64 = ctx.r11.s64 + -25648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAEC24"))) PPC_WEAK_FUNC(sub_83BAEC24);
PPC_FUNC_IMPL(__imp__sub_83BAEC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAEC28"))) PPC_WEAK_FUNC(sub_83BAEC28);
PPC_FUNC_IMPL(__imp__sub_83BAEC28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-25640
	ctx.r3.s64 = ctx.r11.s64 + -25640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAEC34"))) PPC_WEAK_FUNC(sub_83BAEC34);
PPC_FUNC_IMPL(__imp__sub_83BAEC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAEC38"))) PPC_WEAK_FUNC(sub_83BAEC38);
PPC_FUNC_IMPL(__imp__sub_83BAEC38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-25632
	ctx.r3.s64 = ctx.r11.s64 + -25632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAEC44"))) PPC_WEAK_FUNC(sub_83BAEC44);
PPC_FUNC_IMPL(__imp__sub_83BAEC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAEC48"))) PPC_WEAK_FUNC(sub_83BAEC48);
PPC_FUNC_IMPL(__imp__sub_83BAEC48) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-22768
	ctx.r3.s64 = ctx.r11.s64 + -22768;
	// bl 0x83523120
	ctx.lr = 0x83BAEC60;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-25624
	ctx.r3.s64 = ctx.r10.s64 + -25624;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAEC6C;
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

__attribute__((alias("__imp__sub_83BAEC7C"))) PPC_WEAK_FUNC(sub_83BAEC7C);
PPC_FUNC_IMPL(__imp__sub_83BAEC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAEC80"))) PPC_WEAK_FUNC(sub_83BAEC80);
PPC_FUNC_IMPL(__imp__sub_83BAEC80) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-22752
	ctx.r7.s64 = ctx.r8.s64 + -22752;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-22752(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22752);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-22752(r8)
	PPC_STORE_U32(ctx.r8.u32 + -22752, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAECA8"))) PPC_WEAK_FUNC(sub_83BAECA8);
PPC_FUNC_IMPL(__imp__sub_83BAECA8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-26884
	ctx.r6.s64 = ctx.r7.s64 + -26884;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-26956(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -26956);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-22752(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -22752);
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
	// std r9,-26884(r7)
	PPC_STORE_U64(ctx.r7.u32 + -26884, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAECF0"))) PPC_WEAK_FUNC(sub_83BAECF0);
PPC_FUNC_IMPL(__imp__sub_83BAECF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-25608
	ctx.r3.s64 = ctx.r11.s64 + -25608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAECFC"))) PPC_WEAK_FUNC(sub_83BAECFC);
PPC_FUNC_IMPL(__imp__sub_83BAECFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAED00"))) PPC_WEAK_FUNC(sub_83BAED00);
PPC_FUNC_IMPL(__imp__sub_83BAED00) {
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
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,-22744
	ctx.r3.s64 = ctx.r11.s64 + -22744;
	// bl 0x8259af80
	ctx.lr = 0x83BAED18;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-25592
	ctx.r3.s64 = ctx.r10.s64 + -25592;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAED24;
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

__attribute__((alias("__imp__sub_83BAED34"))) PPC_WEAK_FUNC(sub_83BAED34);
PPC_FUNC_IMPL(__imp__sub_83BAED34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAED38"))) PPC_WEAK_FUNC(sub_83BAED38);
PPC_FUNC_IMPL(__imp__sub_83BAED38) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-22764
	ctx.r11.s64 = ctx.r8.s64 + -22764;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-26908(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26908);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-25600
	ctx.r3.s64 = ctx.r6.s64 + -25600;
	// stw r10,-22764(r8)
	PPC_STORE_U32(ctx.r8.u32 + -22764, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAED68"))) PPC_WEAK_FUNC(sub_83BAED68);
PPC_FUNC_IMPL(__imp__sub_83BAED68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-25584
	ctx.r3.s64 = ctx.r11.s64 + -25584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAED74"))) PPC_WEAK_FUNC(sub_83BAED74);
PPC_FUNC_IMPL(__imp__sub_83BAED74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAED78"))) PPC_WEAK_FUNC(sub_83BAED78);
PPC_FUNC_IMPL(__imp__sub_83BAED78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-25576
	ctx.r3.s64 = ctx.r11.s64 + -25576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAED84"))) PPC_WEAK_FUNC(sub_83BAED84);
PPC_FUNC_IMPL(__imp__sub_83BAED84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAED88"))) PPC_WEAK_FUNC(sub_83BAED88);
PPC_FUNC_IMPL(__imp__sub_83BAED88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-25568
	ctx.r3.s64 = ctx.r11.s64 + -25568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAED94"))) PPC_WEAK_FUNC(sub_83BAED94);
PPC_FUNC_IMPL(__imp__sub_83BAED94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAED98"))) PPC_WEAK_FUNC(sub_83BAED98);
PPC_FUNC_IMPL(__imp__sub_83BAED98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-25560
	ctx.r3.s64 = ctx.r11.s64 + -25560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

