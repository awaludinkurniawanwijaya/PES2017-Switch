#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BDDE7C"))) PPC_WEAK_FUNC(sub_83BDDE7C);
PPC_FUNC_IMPL(__imp__sub_83BDDE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDDE80"))) PPC_WEAK_FUNC(sub_83BDDE80);
PPC_FUNC_IMPL(__imp__sub_83BDDE80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30144
	ctx.r3.s64 = ctx.r11.s64 + 30144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDDE8C"))) PPC_WEAK_FUNC(sub_83BDDE8C);
PPC_FUNC_IMPL(__imp__sub_83BDDE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDDE90"))) PPC_WEAK_FUNC(sub_83BDDE90);
PPC_FUNC_IMPL(__imp__sub_83BDDE90) {
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
	// addi r3,r11,-13512
	ctx.r3.s64 = ctx.r11.s64 + -13512;
	// bl 0x83523120
	ctx.lr = 0x83BDDEA8;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,30152
	ctx.r3.s64 = ctx.r10.s64 + 30152;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDDEB4;
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

__attribute__((alias("__imp__sub_83BDDEC4"))) PPC_WEAK_FUNC(sub_83BDDEC4);
PPC_FUNC_IMPL(__imp__sub_83BDDEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDDEC8"))) PPC_WEAK_FUNC(sub_83BDDEC8);
PPC_FUNC_IMPL(__imp__sub_83BDDEC8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13496
	ctx.r7.s64 = ctx.r8.s64 + -13496;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13496(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13496);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13496(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13496, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDDEF0"))) PPC_WEAK_FUNC(sub_83BDDEF0);
PPC_FUNC_IMPL(__imp__sub_83BDDEF0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-23432
	ctx.r6.s64 = ctx.r7.s64 + -23432;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-23504(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -23504);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-13496(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -13496);
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
	// std r9,-23432(r7)
	PPC_STORE_U64(ctx.r7.u32 + -23432, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDDF38"))) PPC_WEAK_FUNC(sub_83BDDF38);
PPC_FUNC_IMPL(__imp__sub_83BDDF38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30168
	ctx.r3.s64 = ctx.r11.s64 + 30168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDDF44"))) PPC_WEAK_FUNC(sub_83BDDF44);
PPC_FUNC_IMPL(__imp__sub_83BDDF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDDF48"))) PPC_WEAK_FUNC(sub_83BDDF48);
PPC_FUNC_IMPL(__imp__sub_83BDDF48) {
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
	// addi r3,r11,-13488
	ctx.r3.s64 = ctx.r11.s64 + -13488;
	// bl 0x8259af80
	ctx.lr = 0x83BDDF60;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,30184
	ctx.r3.s64 = ctx.r10.s64 + 30184;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDDF6C;
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

__attribute__((alias("__imp__sub_83BDDF7C"))) PPC_WEAK_FUNC(sub_83BDDF7C);
PPC_FUNC_IMPL(__imp__sub_83BDDF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDDF80"))) PPC_WEAK_FUNC(sub_83BDDF80);
PPC_FUNC_IMPL(__imp__sub_83BDDF80) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-13508
	ctx.r11.s64 = ctx.r8.s64 + -13508;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-23456(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23456);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,30176
	ctx.r3.s64 = ctx.r6.s64 + 30176;
	// stw r10,-13508(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13508, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDDFB0"))) PPC_WEAK_FUNC(sub_83BDDFB0);
PPC_FUNC_IMPL(__imp__sub_83BDDFB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30192
	ctx.r3.s64 = ctx.r11.s64 + 30192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDDFBC"))) PPC_WEAK_FUNC(sub_83BDDFBC);
PPC_FUNC_IMPL(__imp__sub_83BDDFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDDFC0"))) PPC_WEAK_FUNC(sub_83BDDFC0);
PPC_FUNC_IMPL(__imp__sub_83BDDFC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30200
	ctx.r3.s64 = ctx.r11.s64 + 30200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDDFCC"))) PPC_WEAK_FUNC(sub_83BDDFCC);
PPC_FUNC_IMPL(__imp__sub_83BDDFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDDFD0"))) PPC_WEAK_FUNC(sub_83BDDFD0);
PPC_FUNC_IMPL(__imp__sub_83BDDFD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30208
	ctx.r3.s64 = ctx.r11.s64 + 30208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDDFDC"))) PPC_WEAK_FUNC(sub_83BDDFDC);
PPC_FUNC_IMPL(__imp__sub_83BDDFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDDFE0"))) PPC_WEAK_FUNC(sub_83BDDFE0);
PPC_FUNC_IMPL(__imp__sub_83BDDFE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30216
	ctx.r3.s64 = ctx.r11.s64 + 30216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDDFEC"))) PPC_WEAK_FUNC(sub_83BDDFEC);
PPC_FUNC_IMPL(__imp__sub_83BDDFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDDFF0"))) PPC_WEAK_FUNC(sub_83BDDFF0);
PPC_FUNC_IMPL(__imp__sub_83BDDFF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30224
	ctx.r3.s64 = ctx.r11.s64 + 30224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDDFFC"))) PPC_WEAK_FUNC(sub_83BDDFFC);
PPC_FUNC_IMPL(__imp__sub_83BDDFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE000"))) PPC_WEAK_FUNC(sub_83BDE000);
PPC_FUNC_IMPL(__imp__sub_83BDE000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30232
	ctx.r3.s64 = ctx.r11.s64 + 30232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE00C"))) PPC_WEAK_FUNC(sub_83BDE00C);
PPC_FUNC_IMPL(__imp__sub_83BDE00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE010"))) PPC_WEAK_FUNC(sub_83BDE010);
PPC_FUNC_IMPL(__imp__sub_83BDE010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30240
	ctx.r3.s64 = ctx.r11.s64 + 30240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE01C"))) PPC_WEAK_FUNC(sub_83BDE01C);
PPC_FUNC_IMPL(__imp__sub_83BDE01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE020"))) PPC_WEAK_FUNC(sub_83BDE020);
PPC_FUNC_IMPL(__imp__sub_83BDE020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30248
	ctx.r3.s64 = ctx.r11.s64 + 30248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE02C"))) PPC_WEAK_FUNC(sub_83BDE02C);
PPC_FUNC_IMPL(__imp__sub_83BDE02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE030"))) PPC_WEAK_FUNC(sub_83BDE030);
PPC_FUNC_IMPL(__imp__sub_83BDE030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30256
	ctx.r3.s64 = ctx.r11.s64 + 30256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE03C"))) PPC_WEAK_FUNC(sub_83BDE03C);
PPC_FUNC_IMPL(__imp__sub_83BDE03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE040"))) PPC_WEAK_FUNC(sub_83BDE040);
PPC_FUNC_IMPL(__imp__sub_83BDE040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30264
	ctx.r3.s64 = ctx.r11.s64 + 30264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE04C"))) PPC_WEAK_FUNC(sub_83BDE04C);
PPC_FUNC_IMPL(__imp__sub_83BDE04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE050"))) PPC_WEAK_FUNC(sub_83BDE050);
PPC_FUNC_IMPL(__imp__sub_83BDE050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30272
	ctx.r3.s64 = ctx.r11.s64 + 30272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE05C"))) PPC_WEAK_FUNC(sub_83BDE05C);
PPC_FUNC_IMPL(__imp__sub_83BDE05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE060"))) PPC_WEAK_FUNC(sub_83BDE060);
PPC_FUNC_IMPL(__imp__sub_83BDE060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30280
	ctx.r3.s64 = ctx.r11.s64 + 30280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE06C"))) PPC_WEAK_FUNC(sub_83BDE06C);
PPC_FUNC_IMPL(__imp__sub_83BDE06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE070"))) PPC_WEAK_FUNC(sub_83BDE070);
PPC_FUNC_IMPL(__imp__sub_83BDE070) {
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
	// addi r3,r11,-13144
	ctx.r3.s64 = ctx.r11.s64 + -13144;
	// bl 0x83523120
	ctx.lr = 0x83BDE088;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,30288
	ctx.r3.s64 = ctx.r10.s64 + 30288;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDE094;
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

__attribute__((alias("__imp__sub_83BDE0A4"))) PPC_WEAK_FUNC(sub_83BDE0A4);
PPC_FUNC_IMPL(__imp__sub_83BDE0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE0A8"))) PPC_WEAK_FUNC(sub_83BDE0A8);
PPC_FUNC_IMPL(__imp__sub_83BDE0A8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13128
	ctx.r7.s64 = ctx.r8.s64 + -13128;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13128(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13128);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13128(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13128, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDE0D0"))) PPC_WEAK_FUNC(sub_83BDE0D0);
PPC_FUNC_IMPL(__imp__sub_83BDE0D0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-23088
	ctx.r6.s64 = ctx.r7.s64 + -23088;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-23160(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -23160);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-13128(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -13128);
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
	// std r9,-23088(r7)
	PPC_STORE_U64(ctx.r7.u32 + -23088, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDE118"))) PPC_WEAK_FUNC(sub_83BDE118);
PPC_FUNC_IMPL(__imp__sub_83BDE118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30304
	ctx.r3.s64 = ctx.r11.s64 + 30304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE124"))) PPC_WEAK_FUNC(sub_83BDE124);
PPC_FUNC_IMPL(__imp__sub_83BDE124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE128"))) PPC_WEAK_FUNC(sub_83BDE128);
PPC_FUNC_IMPL(__imp__sub_83BDE128) {
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
	// addi r3,r11,-13120
	ctx.r3.s64 = ctx.r11.s64 + -13120;
	// bl 0x8259af80
	ctx.lr = 0x83BDE140;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,30320
	ctx.r3.s64 = ctx.r10.s64 + 30320;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDE14C;
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

__attribute__((alias("__imp__sub_83BDE15C"))) PPC_WEAK_FUNC(sub_83BDE15C);
PPC_FUNC_IMPL(__imp__sub_83BDE15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE160"))) PPC_WEAK_FUNC(sub_83BDE160);
PPC_FUNC_IMPL(__imp__sub_83BDE160) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-13140
	ctx.r11.s64 = ctx.r8.s64 + -13140;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-23112(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23112);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,30312
	ctx.r3.s64 = ctx.r6.s64 + 30312;
	// stw r10,-13140(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13140, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE190"))) PPC_WEAK_FUNC(sub_83BDE190);
PPC_FUNC_IMPL(__imp__sub_83BDE190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30328
	ctx.r3.s64 = ctx.r11.s64 + 30328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE19C"))) PPC_WEAK_FUNC(sub_83BDE19C);
PPC_FUNC_IMPL(__imp__sub_83BDE19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE1A0"))) PPC_WEAK_FUNC(sub_83BDE1A0);
PPC_FUNC_IMPL(__imp__sub_83BDE1A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30336
	ctx.r3.s64 = ctx.r11.s64 + 30336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE1AC"))) PPC_WEAK_FUNC(sub_83BDE1AC);
PPC_FUNC_IMPL(__imp__sub_83BDE1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE1B0"))) PPC_WEAK_FUNC(sub_83BDE1B0);
PPC_FUNC_IMPL(__imp__sub_83BDE1B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30344
	ctx.r3.s64 = ctx.r11.s64 + 30344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE1BC"))) PPC_WEAK_FUNC(sub_83BDE1BC);
PPC_FUNC_IMPL(__imp__sub_83BDE1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE1C0"))) PPC_WEAK_FUNC(sub_83BDE1C0);
PPC_FUNC_IMPL(__imp__sub_83BDE1C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30352
	ctx.r3.s64 = ctx.r11.s64 + 30352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE1CC"))) PPC_WEAK_FUNC(sub_83BDE1CC);
PPC_FUNC_IMPL(__imp__sub_83BDE1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE1D0"))) PPC_WEAK_FUNC(sub_83BDE1D0);
PPC_FUNC_IMPL(__imp__sub_83BDE1D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30360
	ctx.r3.s64 = ctx.r11.s64 + 30360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE1DC"))) PPC_WEAK_FUNC(sub_83BDE1DC);
PPC_FUNC_IMPL(__imp__sub_83BDE1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE1E0"))) PPC_WEAK_FUNC(sub_83BDE1E0);
PPC_FUNC_IMPL(__imp__sub_83BDE1E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30368
	ctx.r3.s64 = ctx.r11.s64 + 30368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE1EC"))) PPC_WEAK_FUNC(sub_83BDE1EC);
PPC_FUNC_IMPL(__imp__sub_83BDE1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE1F0"))) PPC_WEAK_FUNC(sub_83BDE1F0);
PPC_FUNC_IMPL(__imp__sub_83BDE1F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30376
	ctx.r3.s64 = ctx.r11.s64 + 30376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE1FC"))) PPC_WEAK_FUNC(sub_83BDE1FC);
PPC_FUNC_IMPL(__imp__sub_83BDE1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE200"))) PPC_WEAK_FUNC(sub_83BDE200);
PPC_FUNC_IMPL(__imp__sub_83BDE200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30384
	ctx.r3.s64 = ctx.r11.s64 + 30384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE20C"))) PPC_WEAK_FUNC(sub_83BDE20C);
PPC_FUNC_IMPL(__imp__sub_83BDE20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE210"))) PPC_WEAK_FUNC(sub_83BDE210);
PPC_FUNC_IMPL(__imp__sub_83BDE210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30392
	ctx.r3.s64 = ctx.r11.s64 + 30392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE21C"))) PPC_WEAK_FUNC(sub_83BDE21C);
PPC_FUNC_IMPL(__imp__sub_83BDE21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE220"))) PPC_WEAK_FUNC(sub_83BDE220);
PPC_FUNC_IMPL(__imp__sub_83BDE220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30400
	ctx.r3.s64 = ctx.r11.s64 + 30400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE22C"))) PPC_WEAK_FUNC(sub_83BDE22C);
PPC_FUNC_IMPL(__imp__sub_83BDE22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE230"))) PPC_WEAK_FUNC(sub_83BDE230);
PPC_FUNC_IMPL(__imp__sub_83BDE230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30408
	ctx.r3.s64 = ctx.r11.s64 + 30408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE23C"))) PPC_WEAK_FUNC(sub_83BDE23C);
PPC_FUNC_IMPL(__imp__sub_83BDE23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE240"))) PPC_WEAK_FUNC(sub_83BDE240);
PPC_FUNC_IMPL(__imp__sub_83BDE240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30416
	ctx.r3.s64 = ctx.r11.s64 + 30416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE24C"))) PPC_WEAK_FUNC(sub_83BDE24C);
PPC_FUNC_IMPL(__imp__sub_83BDE24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE250"))) PPC_WEAK_FUNC(sub_83BDE250);
PPC_FUNC_IMPL(__imp__sub_83BDE250) {
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
	// addi r3,r11,-12776
	ctx.r3.s64 = ctx.r11.s64 + -12776;
	// bl 0x83523120
	ctx.lr = 0x83BDE268;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,30424
	ctx.r3.s64 = ctx.r10.s64 + 30424;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDE274;
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

__attribute__((alias("__imp__sub_83BDE284"))) PPC_WEAK_FUNC(sub_83BDE284);
PPC_FUNC_IMPL(__imp__sub_83BDE284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE288"))) PPC_WEAK_FUNC(sub_83BDE288);
PPC_FUNC_IMPL(__imp__sub_83BDE288) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-12760
	ctx.r7.s64 = ctx.r8.s64 + -12760;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-12760(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12760);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-12760(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12760, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDE2B0"))) PPC_WEAK_FUNC(sub_83BDE2B0);
PPC_FUNC_IMPL(__imp__sub_83BDE2B0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-22952
	ctx.r6.s64 = ctx.r7.s64 + -22952;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-23024(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -23024);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-12760(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12760);
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
	// std r9,-22952(r7)
	PPC_STORE_U64(ctx.r7.u32 + -22952, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDE2F8"))) PPC_WEAK_FUNC(sub_83BDE2F8);
PPC_FUNC_IMPL(__imp__sub_83BDE2F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30440
	ctx.r3.s64 = ctx.r11.s64 + 30440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE304"))) PPC_WEAK_FUNC(sub_83BDE304);
PPC_FUNC_IMPL(__imp__sub_83BDE304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE308"))) PPC_WEAK_FUNC(sub_83BDE308);
PPC_FUNC_IMPL(__imp__sub_83BDE308) {
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
	// addi r3,r11,-12752
	ctx.r3.s64 = ctx.r11.s64 + -12752;
	// bl 0x8259af80
	ctx.lr = 0x83BDE320;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,30456
	ctx.r3.s64 = ctx.r10.s64 + 30456;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDE32C;
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

__attribute__((alias("__imp__sub_83BDE33C"))) PPC_WEAK_FUNC(sub_83BDE33C);
PPC_FUNC_IMPL(__imp__sub_83BDE33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE340"))) PPC_WEAK_FUNC(sub_83BDE340);
PPC_FUNC_IMPL(__imp__sub_83BDE340) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-12772
	ctx.r11.s64 = ctx.r8.s64 + -12772;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-22976(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -22976);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,30448
	ctx.r3.s64 = ctx.r6.s64 + 30448;
	// stw r10,-12772(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12772, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE370"))) PPC_WEAK_FUNC(sub_83BDE370);
PPC_FUNC_IMPL(__imp__sub_83BDE370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30464
	ctx.r3.s64 = ctx.r11.s64 + 30464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE37C"))) PPC_WEAK_FUNC(sub_83BDE37C);
PPC_FUNC_IMPL(__imp__sub_83BDE37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE380"))) PPC_WEAK_FUNC(sub_83BDE380);
PPC_FUNC_IMPL(__imp__sub_83BDE380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30472
	ctx.r3.s64 = ctx.r11.s64 + 30472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE38C"))) PPC_WEAK_FUNC(sub_83BDE38C);
PPC_FUNC_IMPL(__imp__sub_83BDE38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE390"))) PPC_WEAK_FUNC(sub_83BDE390);
PPC_FUNC_IMPL(__imp__sub_83BDE390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30480
	ctx.r3.s64 = ctx.r11.s64 + 30480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE39C"))) PPC_WEAK_FUNC(sub_83BDE39C);
PPC_FUNC_IMPL(__imp__sub_83BDE39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE3A0"))) PPC_WEAK_FUNC(sub_83BDE3A0);
PPC_FUNC_IMPL(__imp__sub_83BDE3A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30488
	ctx.r3.s64 = ctx.r11.s64 + 30488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE3AC"))) PPC_WEAK_FUNC(sub_83BDE3AC);
PPC_FUNC_IMPL(__imp__sub_83BDE3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE3B0"))) PPC_WEAK_FUNC(sub_83BDE3B0);
PPC_FUNC_IMPL(__imp__sub_83BDE3B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30496
	ctx.r3.s64 = ctx.r11.s64 + 30496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE3BC"))) PPC_WEAK_FUNC(sub_83BDE3BC);
PPC_FUNC_IMPL(__imp__sub_83BDE3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE3C0"))) PPC_WEAK_FUNC(sub_83BDE3C0);
PPC_FUNC_IMPL(__imp__sub_83BDE3C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30504
	ctx.r3.s64 = ctx.r11.s64 + 30504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE3CC"))) PPC_WEAK_FUNC(sub_83BDE3CC);
PPC_FUNC_IMPL(__imp__sub_83BDE3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE3D0"))) PPC_WEAK_FUNC(sub_83BDE3D0);
PPC_FUNC_IMPL(__imp__sub_83BDE3D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30512
	ctx.r3.s64 = ctx.r11.s64 + 30512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE3DC"))) PPC_WEAK_FUNC(sub_83BDE3DC);
PPC_FUNC_IMPL(__imp__sub_83BDE3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE3E0"))) PPC_WEAK_FUNC(sub_83BDE3E0);
PPC_FUNC_IMPL(__imp__sub_83BDE3E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30520
	ctx.r3.s64 = ctx.r11.s64 + 30520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE3EC"))) PPC_WEAK_FUNC(sub_83BDE3EC);
PPC_FUNC_IMPL(__imp__sub_83BDE3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE3F0"))) PPC_WEAK_FUNC(sub_83BDE3F0);
PPC_FUNC_IMPL(__imp__sub_83BDE3F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30528
	ctx.r3.s64 = ctx.r11.s64 + 30528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE3FC"))) PPC_WEAK_FUNC(sub_83BDE3FC);
PPC_FUNC_IMPL(__imp__sub_83BDE3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE400"))) PPC_WEAK_FUNC(sub_83BDE400);
PPC_FUNC_IMPL(__imp__sub_83BDE400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30536
	ctx.r3.s64 = ctx.r11.s64 + 30536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE40C"))) PPC_WEAK_FUNC(sub_83BDE40C);
PPC_FUNC_IMPL(__imp__sub_83BDE40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE410"))) PPC_WEAK_FUNC(sub_83BDE410);
PPC_FUNC_IMPL(__imp__sub_83BDE410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30544
	ctx.r3.s64 = ctx.r11.s64 + 30544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE41C"))) PPC_WEAK_FUNC(sub_83BDE41C);
PPC_FUNC_IMPL(__imp__sub_83BDE41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE420"))) PPC_WEAK_FUNC(sub_83BDE420);
PPC_FUNC_IMPL(__imp__sub_83BDE420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30552
	ctx.r3.s64 = ctx.r11.s64 + 30552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE42C"))) PPC_WEAK_FUNC(sub_83BDE42C);
PPC_FUNC_IMPL(__imp__sub_83BDE42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE430"))) PPC_WEAK_FUNC(sub_83BDE430);
PPC_FUNC_IMPL(__imp__sub_83BDE430) {
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
	// addi r3,r11,-12408
	ctx.r3.s64 = ctx.r11.s64 + -12408;
	// bl 0x83523120
	ctx.lr = 0x83BDE448;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,30560
	ctx.r3.s64 = ctx.r10.s64 + 30560;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDE454;
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

__attribute__((alias("__imp__sub_83BDE464"))) PPC_WEAK_FUNC(sub_83BDE464);
PPC_FUNC_IMPL(__imp__sub_83BDE464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE468"))) PPC_WEAK_FUNC(sub_83BDE468);
PPC_FUNC_IMPL(__imp__sub_83BDE468) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-12392
	ctx.r7.s64 = ctx.r8.s64 + -12392;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-12392(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12392);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-12392(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12392, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDE490"))) PPC_WEAK_FUNC(sub_83BDE490);
PPC_FUNC_IMPL(__imp__sub_83BDE490) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-22684
	ctx.r6.s64 = ctx.r7.s64 + -22684;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-22756(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -22756);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-12392(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12392);
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
	// std r9,-22684(r7)
	PPC_STORE_U64(ctx.r7.u32 + -22684, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDE4D8"))) PPC_WEAK_FUNC(sub_83BDE4D8);
PPC_FUNC_IMPL(__imp__sub_83BDE4D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30576
	ctx.r3.s64 = ctx.r11.s64 + 30576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE4E4"))) PPC_WEAK_FUNC(sub_83BDE4E4);
PPC_FUNC_IMPL(__imp__sub_83BDE4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE4E8"))) PPC_WEAK_FUNC(sub_83BDE4E8);
PPC_FUNC_IMPL(__imp__sub_83BDE4E8) {
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
	// addi r3,r11,-12384
	ctx.r3.s64 = ctx.r11.s64 + -12384;
	// bl 0x8259af80
	ctx.lr = 0x83BDE500;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,30592
	ctx.r3.s64 = ctx.r10.s64 + 30592;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDE50C;
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

__attribute__((alias("__imp__sub_83BDE51C"))) PPC_WEAK_FUNC(sub_83BDE51C);
PPC_FUNC_IMPL(__imp__sub_83BDE51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE520"))) PPC_WEAK_FUNC(sub_83BDE520);
PPC_FUNC_IMPL(__imp__sub_83BDE520) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-12404
	ctx.r11.s64 = ctx.r8.s64 + -12404;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-22708(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -22708);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,30584
	ctx.r3.s64 = ctx.r6.s64 + 30584;
	// stw r10,-12404(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12404, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE550"))) PPC_WEAK_FUNC(sub_83BDE550);
PPC_FUNC_IMPL(__imp__sub_83BDE550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30600
	ctx.r3.s64 = ctx.r11.s64 + 30600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE55C"))) PPC_WEAK_FUNC(sub_83BDE55C);
PPC_FUNC_IMPL(__imp__sub_83BDE55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE560"))) PPC_WEAK_FUNC(sub_83BDE560);
PPC_FUNC_IMPL(__imp__sub_83BDE560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30608
	ctx.r3.s64 = ctx.r11.s64 + 30608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE56C"))) PPC_WEAK_FUNC(sub_83BDE56C);
PPC_FUNC_IMPL(__imp__sub_83BDE56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE570"))) PPC_WEAK_FUNC(sub_83BDE570);
PPC_FUNC_IMPL(__imp__sub_83BDE570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30616
	ctx.r3.s64 = ctx.r11.s64 + 30616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE57C"))) PPC_WEAK_FUNC(sub_83BDE57C);
PPC_FUNC_IMPL(__imp__sub_83BDE57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE580"))) PPC_WEAK_FUNC(sub_83BDE580);
PPC_FUNC_IMPL(__imp__sub_83BDE580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30624
	ctx.r3.s64 = ctx.r11.s64 + 30624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE58C"))) PPC_WEAK_FUNC(sub_83BDE58C);
PPC_FUNC_IMPL(__imp__sub_83BDE58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE590"))) PPC_WEAK_FUNC(sub_83BDE590);
PPC_FUNC_IMPL(__imp__sub_83BDE590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30632
	ctx.r3.s64 = ctx.r11.s64 + 30632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE59C"))) PPC_WEAK_FUNC(sub_83BDE59C);
PPC_FUNC_IMPL(__imp__sub_83BDE59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE5A0"))) PPC_WEAK_FUNC(sub_83BDE5A0);
PPC_FUNC_IMPL(__imp__sub_83BDE5A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30640
	ctx.r3.s64 = ctx.r11.s64 + 30640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE5AC"))) PPC_WEAK_FUNC(sub_83BDE5AC);
PPC_FUNC_IMPL(__imp__sub_83BDE5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE5B0"))) PPC_WEAK_FUNC(sub_83BDE5B0);
PPC_FUNC_IMPL(__imp__sub_83BDE5B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30648
	ctx.r3.s64 = ctx.r11.s64 + 30648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE5BC"))) PPC_WEAK_FUNC(sub_83BDE5BC);
PPC_FUNC_IMPL(__imp__sub_83BDE5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE5C0"))) PPC_WEAK_FUNC(sub_83BDE5C0);
PPC_FUNC_IMPL(__imp__sub_83BDE5C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30656
	ctx.r3.s64 = ctx.r11.s64 + 30656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE5CC"))) PPC_WEAK_FUNC(sub_83BDE5CC);
PPC_FUNC_IMPL(__imp__sub_83BDE5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE5D0"))) PPC_WEAK_FUNC(sub_83BDE5D0);
PPC_FUNC_IMPL(__imp__sub_83BDE5D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30664
	ctx.r3.s64 = ctx.r11.s64 + 30664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE5DC"))) PPC_WEAK_FUNC(sub_83BDE5DC);
PPC_FUNC_IMPL(__imp__sub_83BDE5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE5E0"))) PPC_WEAK_FUNC(sub_83BDE5E0);
PPC_FUNC_IMPL(__imp__sub_83BDE5E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30672
	ctx.r3.s64 = ctx.r11.s64 + 30672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE5EC"))) PPC_WEAK_FUNC(sub_83BDE5EC);
PPC_FUNC_IMPL(__imp__sub_83BDE5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE5F0"))) PPC_WEAK_FUNC(sub_83BDE5F0);
PPC_FUNC_IMPL(__imp__sub_83BDE5F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30680
	ctx.r3.s64 = ctx.r11.s64 + 30680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE5FC"))) PPC_WEAK_FUNC(sub_83BDE5FC);
PPC_FUNC_IMPL(__imp__sub_83BDE5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE600"))) PPC_WEAK_FUNC(sub_83BDE600);
PPC_FUNC_IMPL(__imp__sub_83BDE600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30688
	ctx.r3.s64 = ctx.r11.s64 + 30688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE60C"))) PPC_WEAK_FUNC(sub_83BDE60C);
PPC_FUNC_IMPL(__imp__sub_83BDE60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE610"))) PPC_WEAK_FUNC(sub_83BDE610);
PPC_FUNC_IMPL(__imp__sub_83BDE610) {
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
	// addi r3,r11,-12040
	ctx.r3.s64 = ctx.r11.s64 + -12040;
	// bl 0x83523120
	ctx.lr = 0x83BDE628;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,30696
	ctx.r3.s64 = ctx.r10.s64 + 30696;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDE634;
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

__attribute__((alias("__imp__sub_83BDE644"))) PPC_WEAK_FUNC(sub_83BDE644);
PPC_FUNC_IMPL(__imp__sub_83BDE644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE648"))) PPC_WEAK_FUNC(sub_83BDE648);
PPC_FUNC_IMPL(__imp__sub_83BDE648) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-12024
	ctx.r7.s64 = ctx.r8.s64 + -12024;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-12024(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12024);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-12024(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12024, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDE670"))) PPC_WEAK_FUNC(sub_83BDE670);
PPC_FUNC_IMPL(__imp__sub_83BDE670) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-21736
	ctx.r6.s64 = ctx.r7.s64 + -21736;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-21808(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -21808);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-12024(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12024);
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
	// std r9,-21736(r7)
	PPC_STORE_U64(ctx.r7.u32 + -21736, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDE6B8"))) PPC_WEAK_FUNC(sub_83BDE6B8);
PPC_FUNC_IMPL(__imp__sub_83BDE6B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30712
	ctx.r3.s64 = ctx.r11.s64 + 30712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE6C4"))) PPC_WEAK_FUNC(sub_83BDE6C4);
PPC_FUNC_IMPL(__imp__sub_83BDE6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE6C8"))) PPC_WEAK_FUNC(sub_83BDE6C8);
PPC_FUNC_IMPL(__imp__sub_83BDE6C8) {
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
	// addi r3,r11,-12016
	ctx.r3.s64 = ctx.r11.s64 + -12016;
	// bl 0x8259af80
	ctx.lr = 0x83BDE6E0;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,30728
	ctx.r3.s64 = ctx.r10.s64 + 30728;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDE6EC;
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

__attribute__((alias("__imp__sub_83BDE6FC"))) PPC_WEAK_FUNC(sub_83BDE6FC);
PPC_FUNC_IMPL(__imp__sub_83BDE6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE700"))) PPC_WEAK_FUNC(sub_83BDE700);
PPC_FUNC_IMPL(__imp__sub_83BDE700) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-12036
	ctx.r11.s64 = ctx.r8.s64 + -12036;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-21760(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21760);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,30720
	ctx.r3.s64 = ctx.r6.s64 + 30720;
	// stw r10,-12036(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12036, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE730"))) PPC_WEAK_FUNC(sub_83BDE730);
PPC_FUNC_IMPL(__imp__sub_83BDE730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lis r10,-31760
	ctx.r10.s64 = -2081423360;
	// lwz r11,-22368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22368);
	// stw r11,-11672(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11672, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDE744"))) PPC_WEAK_FUNC(sub_83BDE744);
PPC_FUNC_IMPL(__imp__sub_83BDE744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE748"))) PPC_WEAK_FUNC(sub_83BDE748);
PPC_FUNC_IMPL(__imp__sub_83BDE748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30736
	ctx.r3.s64 = ctx.r11.s64 + 30736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE754"))) PPC_WEAK_FUNC(sub_83BDE754);
PPC_FUNC_IMPL(__imp__sub_83BDE754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE758"))) PPC_WEAK_FUNC(sub_83BDE758);
PPC_FUNC_IMPL(__imp__sub_83BDE758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30744
	ctx.r3.s64 = ctx.r11.s64 + 30744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE764"))) PPC_WEAK_FUNC(sub_83BDE764);
PPC_FUNC_IMPL(__imp__sub_83BDE764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE768"))) PPC_WEAK_FUNC(sub_83BDE768);
PPC_FUNC_IMPL(__imp__sub_83BDE768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30752
	ctx.r3.s64 = ctx.r11.s64 + 30752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE774"))) PPC_WEAK_FUNC(sub_83BDE774);
PPC_FUNC_IMPL(__imp__sub_83BDE774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE778"))) PPC_WEAK_FUNC(sub_83BDE778);
PPC_FUNC_IMPL(__imp__sub_83BDE778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30760
	ctx.r3.s64 = ctx.r11.s64 + 30760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE784"))) PPC_WEAK_FUNC(sub_83BDE784);
PPC_FUNC_IMPL(__imp__sub_83BDE784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE788"))) PPC_WEAK_FUNC(sub_83BDE788);
PPC_FUNC_IMPL(__imp__sub_83BDE788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30768
	ctx.r3.s64 = ctx.r11.s64 + 30768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE794"))) PPC_WEAK_FUNC(sub_83BDE794);
PPC_FUNC_IMPL(__imp__sub_83BDE794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE798"))) PPC_WEAK_FUNC(sub_83BDE798);
PPC_FUNC_IMPL(__imp__sub_83BDE798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30776
	ctx.r3.s64 = ctx.r11.s64 + 30776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE7A4"))) PPC_WEAK_FUNC(sub_83BDE7A4);
PPC_FUNC_IMPL(__imp__sub_83BDE7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE7A8"))) PPC_WEAK_FUNC(sub_83BDE7A8);
PPC_FUNC_IMPL(__imp__sub_83BDE7A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30784
	ctx.r3.s64 = ctx.r11.s64 + 30784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE7B4"))) PPC_WEAK_FUNC(sub_83BDE7B4);
PPC_FUNC_IMPL(__imp__sub_83BDE7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE7B8"))) PPC_WEAK_FUNC(sub_83BDE7B8);
PPC_FUNC_IMPL(__imp__sub_83BDE7B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30792
	ctx.r3.s64 = ctx.r11.s64 + 30792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE7C4"))) PPC_WEAK_FUNC(sub_83BDE7C4);
PPC_FUNC_IMPL(__imp__sub_83BDE7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE7C8"))) PPC_WEAK_FUNC(sub_83BDE7C8);
PPC_FUNC_IMPL(__imp__sub_83BDE7C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30800
	ctx.r3.s64 = ctx.r11.s64 + 30800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE7D4"))) PPC_WEAK_FUNC(sub_83BDE7D4);
PPC_FUNC_IMPL(__imp__sub_83BDE7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE7D8"))) PPC_WEAK_FUNC(sub_83BDE7D8);
PPC_FUNC_IMPL(__imp__sub_83BDE7D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30808
	ctx.r3.s64 = ctx.r11.s64 + 30808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE7E4"))) PPC_WEAK_FUNC(sub_83BDE7E4);
PPC_FUNC_IMPL(__imp__sub_83BDE7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE7E8"))) PPC_WEAK_FUNC(sub_83BDE7E8);
PPC_FUNC_IMPL(__imp__sub_83BDE7E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30816
	ctx.r3.s64 = ctx.r11.s64 + 30816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE7F4"))) PPC_WEAK_FUNC(sub_83BDE7F4);
PPC_FUNC_IMPL(__imp__sub_83BDE7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE7F8"))) PPC_WEAK_FUNC(sub_83BDE7F8);
PPC_FUNC_IMPL(__imp__sub_83BDE7F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30824
	ctx.r3.s64 = ctx.r11.s64 + 30824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE804"))) PPC_WEAK_FUNC(sub_83BDE804);
PPC_FUNC_IMPL(__imp__sub_83BDE804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE808"))) PPC_WEAK_FUNC(sub_83BDE808);
PPC_FUNC_IMPL(__imp__sub_83BDE808) {
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
	// addi r3,r11,-11664
	ctx.r3.s64 = ctx.r11.s64 + -11664;
	// bl 0x83523120
	ctx.lr = 0x83BDE820;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,30832
	ctx.r3.s64 = ctx.r10.s64 + 30832;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDE82C;
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

__attribute__((alias("__imp__sub_83BDE83C"))) PPC_WEAK_FUNC(sub_83BDE83C);
PPC_FUNC_IMPL(__imp__sub_83BDE83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE840"))) PPC_WEAK_FUNC(sub_83BDE840);
PPC_FUNC_IMPL(__imp__sub_83BDE840) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-11648
	ctx.r7.s64 = ctx.r8.s64 + -11648;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-11648(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11648);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-11648(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11648, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDE868"))) PPC_WEAK_FUNC(sub_83BDE868);
PPC_FUNC_IMPL(__imp__sub_83BDE868) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-21580
	ctx.r6.s64 = ctx.r7.s64 + -21580;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-21660(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -21660);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-11648(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11648);
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
	// std r9,-21580(r7)
	PPC_STORE_U64(ctx.r7.u32 + -21580, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDE8B0"))) PPC_WEAK_FUNC(sub_83BDE8B0);
PPC_FUNC_IMPL(__imp__sub_83BDE8B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30848
	ctx.r3.s64 = ctx.r11.s64 + 30848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE8BC"))) PPC_WEAK_FUNC(sub_83BDE8BC);
PPC_FUNC_IMPL(__imp__sub_83BDE8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE8C0"))) PPC_WEAK_FUNC(sub_83BDE8C0);
PPC_FUNC_IMPL(__imp__sub_83BDE8C0) {
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
	// addi r3,r11,-11640
	ctx.r3.s64 = ctx.r11.s64 + -11640;
	// bl 0x8259af80
	ctx.lr = 0x83BDE8D8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,30864
	ctx.r3.s64 = ctx.r10.s64 + 30864;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDE8E4;
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

__attribute__((alias("__imp__sub_83BDE8F4"))) PPC_WEAK_FUNC(sub_83BDE8F4);
PPC_FUNC_IMPL(__imp__sub_83BDE8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE8F8"))) PPC_WEAK_FUNC(sub_83BDE8F8);
PPC_FUNC_IMPL(__imp__sub_83BDE8F8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-11660
	ctx.r11.s64 = ctx.r8.s64 + -11660;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-21612(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21612);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,30856
	ctx.r3.s64 = ctx.r6.s64 + 30856;
	// stw r10,-11660(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11660, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE928"))) PPC_WEAK_FUNC(sub_83BDE928);
PPC_FUNC_IMPL(__imp__sub_83BDE928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30872
	ctx.r3.s64 = ctx.r11.s64 + 30872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE934"))) PPC_WEAK_FUNC(sub_83BDE934);
PPC_FUNC_IMPL(__imp__sub_83BDE934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE938"))) PPC_WEAK_FUNC(sub_83BDE938);
PPC_FUNC_IMPL(__imp__sub_83BDE938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30880
	ctx.r3.s64 = ctx.r11.s64 + 30880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE944"))) PPC_WEAK_FUNC(sub_83BDE944);
PPC_FUNC_IMPL(__imp__sub_83BDE944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE948"))) PPC_WEAK_FUNC(sub_83BDE948);
PPC_FUNC_IMPL(__imp__sub_83BDE948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30888
	ctx.r3.s64 = ctx.r11.s64 + 30888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE954"))) PPC_WEAK_FUNC(sub_83BDE954);
PPC_FUNC_IMPL(__imp__sub_83BDE954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE958"))) PPC_WEAK_FUNC(sub_83BDE958);
PPC_FUNC_IMPL(__imp__sub_83BDE958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30896
	ctx.r3.s64 = ctx.r11.s64 + 30896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE964"))) PPC_WEAK_FUNC(sub_83BDE964);
PPC_FUNC_IMPL(__imp__sub_83BDE964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE968"))) PPC_WEAK_FUNC(sub_83BDE968);
PPC_FUNC_IMPL(__imp__sub_83BDE968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30904
	ctx.r3.s64 = ctx.r11.s64 + 30904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE974"))) PPC_WEAK_FUNC(sub_83BDE974);
PPC_FUNC_IMPL(__imp__sub_83BDE974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE978"))) PPC_WEAK_FUNC(sub_83BDE978);
PPC_FUNC_IMPL(__imp__sub_83BDE978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30912
	ctx.r3.s64 = ctx.r11.s64 + 30912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE984"))) PPC_WEAK_FUNC(sub_83BDE984);
PPC_FUNC_IMPL(__imp__sub_83BDE984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE988"))) PPC_WEAK_FUNC(sub_83BDE988);
PPC_FUNC_IMPL(__imp__sub_83BDE988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30920
	ctx.r3.s64 = ctx.r11.s64 + 30920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE994"))) PPC_WEAK_FUNC(sub_83BDE994);
PPC_FUNC_IMPL(__imp__sub_83BDE994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE998"))) PPC_WEAK_FUNC(sub_83BDE998);
PPC_FUNC_IMPL(__imp__sub_83BDE998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30928
	ctx.r3.s64 = ctx.r11.s64 + 30928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE9A4"))) PPC_WEAK_FUNC(sub_83BDE9A4);
PPC_FUNC_IMPL(__imp__sub_83BDE9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE9A8"))) PPC_WEAK_FUNC(sub_83BDE9A8);
PPC_FUNC_IMPL(__imp__sub_83BDE9A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30936
	ctx.r3.s64 = ctx.r11.s64 + 30936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE9B4"))) PPC_WEAK_FUNC(sub_83BDE9B4);
PPC_FUNC_IMPL(__imp__sub_83BDE9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE9B8"))) PPC_WEAK_FUNC(sub_83BDE9B8);
PPC_FUNC_IMPL(__imp__sub_83BDE9B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30944
	ctx.r3.s64 = ctx.r11.s64 + 30944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE9C4"))) PPC_WEAK_FUNC(sub_83BDE9C4);
PPC_FUNC_IMPL(__imp__sub_83BDE9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE9C8"))) PPC_WEAK_FUNC(sub_83BDE9C8);
PPC_FUNC_IMPL(__imp__sub_83BDE9C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30952
	ctx.r3.s64 = ctx.r11.s64 + 30952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE9D4"))) PPC_WEAK_FUNC(sub_83BDE9D4);
PPC_FUNC_IMPL(__imp__sub_83BDE9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE9D8"))) PPC_WEAK_FUNC(sub_83BDE9D8);
PPC_FUNC_IMPL(__imp__sub_83BDE9D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30960
	ctx.r3.s64 = ctx.r11.s64 + 30960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDE9E4"))) PPC_WEAK_FUNC(sub_83BDE9E4);
PPC_FUNC_IMPL(__imp__sub_83BDE9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDE9E8"))) PPC_WEAK_FUNC(sub_83BDE9E8);
PPC_FUNC_IMPL(__imp__sub_83BDE9E8) {
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
	// addi r3,r11,-11272
	ctx.r3.s64 = ctx.r11.s64 + -11272;
	// bl 0x83523120
	ctx.lr = 0x83BDEA00;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,30968
	ctx.r3.s64 = ctx.r10.s64 + 30968;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDEA0C;
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

__attribute__((alias("__imp__sub_83BDEA1C"))) PPC_WEAK_FUNC(sub_83BDEA1C);
PPC_FUNC_IMPL(__imp__sub_83BDEA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDEA20"))) PPC_WEAK_FUNC(sub_83BDEA20);
PPC_FUNC_IMPL(__imp__sub_83BDEA20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-11256
	ctx.r7.s64 = ctx.r8.s64 + -11256;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-11256(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11256);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-11256(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11256, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDEA48"))) PPC_WEAK_FUNC(sub_83BDEA48);
PPC_FUNC_IMPL(__imp__sub_83BDEA48) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-21416
	ctx.r6.s64 = ctx.r7.s64 + -21416;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-21488(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -21488);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-11256(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11256);
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
	// std r9,-21416(r7)
	PPC_STORE_U64(ctx.r7.u32 + -21416, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDEA90"))) PPC_WEAK_FUNC(sub_83BDEA90);
PPC_FUNC_IMPL(__imp__sub_83BDEA90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,30984
	ctx.r3.s64 = ctx.r11.s64 + 30984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDEA9C"))) PPC_WEAK_FUNC(sub_83BDEA9C);
PPC_FUNC_IMPL(__imp__sub_83BDEA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDEAA0"))) PPC_WEAK_FUNC(sub_83BDEAA0);
PPC_FUNC_IMPL(__imp__sub_83BDEAA0) {
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
	// addi r3,r11,-11248
	ctx.r3.s64 = ctx.r11.s64 + -11248;
	// bl 0x8259af80
	ctx.lr = 0x83BDEAB8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,31000
	ctx.r3.s64 = ctx.r10.s64 + 31000;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDEAC4;
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

__attribute__((alias("__imp__sub_83BDEAD4"))) PPC_WEAK_FUNC(sub_83BDEAD4);
PPC_FUNC_IMPL(__imp__sub_83BDEAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDEAD8"))) PPC_WEAK_FUNC(sub_83BDEAD8);
PPC_FUNC_IMPL(__imp__sub_83BDEAD8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-11268
	ctx.r11.s64 = ctx.r8.s64 + -11268;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-21440(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21440);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,30992
	ctx.r3.s64 = ctx.r6.s64 + 30992;
	// stw r10,-11268(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11268, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDEB08"))) PPC_WEAK_FUNC(sub_83BDEB08);
PPC_FUNC_IMPL(__imp__sub_83BDEB08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31104
	ctx.r3.s64 = ctx.r11.s64 + 31104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDEB14"))) PPC_WEAK_FUNC(sub_83BDEB14);
PPC_FUNC_IMPL(__imp__sub_83BDEB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDEB18"))) PPC_WEAK_FUNC(sub_83BDEB18);
PPC_FUNC_IMPL(__imp__sub_83BDEB18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31112
	ctx.r3.s64 = ctx.r11.s64 + 31112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDEB24"))) PPC_WEAK_FUNC(sub_83BDEB24);
PPC_FUNC_IMPL(__imp__sub_83BDEB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDEB28"))) PPC_WEAK_FUNC(sub_83BDEB28);
PPC_FUNC_IMPL(__imp__sub_83BDEB28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31120
	ctx.r3.s64 = ctx.r11.s64 + 31120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDEB34"))) PPC_WEAK_FUNC(sub_83BDEB34);
PPC_FUNC_IMPL(__imp__sub_83BDEB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDEB38"))) PPC_WEAK_FUNC(sub_83BDEB38);
PPC_FUNC_IMPL(__imp__sub_83BDEB38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31128
	ctx.r3.s64 = ctx.r11.s64 + 31128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDEB44"))) PPC_WEAK_FUNC(sub_83BDEB44);
PPC_FUNC_IMPL(__imp__sub_83BDEB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDEB48"))) PPC_WEAK_FUNC(sub_83BDEB48);
PPC_FUNC_IMPL(__imp__sub_83BDEB48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31136
	ctx.r3.s64 = ctx.r11.s64 + 31136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDEB54"))) PPC_WEAK_FUNC(sub_83BDEB54);
PPC_FUNC_IMPL(__imp__sub_83BDEB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDEB58"))) PPC_WEAK_FUNC(sub_83BDEB58);
PPC_FUNC_IMPL(__imp__sub_83BDEB58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31144
	ctx.r3.s64 = ctx.r11.s64 + 31144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDEB64"))) PPC_WEAK_FUNC(sub_83BDEB64);
PPC_FUNC_IMPL(__imp__sub_83BDEB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDEB68"))) PPC_WEAK_FUNC(sub_83BDEB68);
PPC_FUNC_IMPL(__imp__sub_83BDEB68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31152
	ctx.r3.s64 = ctx.r11.s64 + 31152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDEB74"))) PPC_WEAK_FUNC(sub_83BDEB74);
PPC_FUNC_IMPL(__imp__sub_83BDEB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDEB78"))) PPC_WEAK_FUNC(sub_83BDEB78);
PPC_FUNC_IMPL(__imp__sub_83BDEB78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31160
	ctx.r3.s64 = ctx.r11.s64 + 31160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDEB84"))) PPC_WEAK_FUNC(sub_83BDEB84);
PPC_FUNC_IMPL(__imp__sub_83BDEB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDEB88"))) PPC_WEAK_FUNC(sub_83BDEB88);
PPC_FUNC_IMPL(__imp__sub_83BDEB88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31168
	ctx.r3.s64 = ctx.r11.s64 + 31168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDEB94"))) PPC_WEAK_FUNC(sub_83BDEB94);
PPC_FUNC_IMPL(__imp__sub_83BDEB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDEB98"))) PPC_WEAK_FUNC(sub_83BDEB98);
PPC_FUNC_IMPL(__imp__sub_83BDEB98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31176
	ctx.r3.s64 = ctx.r11.s64 + 31176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDEBA4"))) PPC_WEAK_FUNC(sub_83BDEBA4);
PPC_FUNC_IMPL(__imp__sub_83BDEBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDEBA8"))) PPC_WEAK_FUNC(sub_83BDEBA8);
PPC_FUNC_IMPL(__imp__sub_83BDEBA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31184
	ctx.r3.s64 = ctx.r11.s64 + 31184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDEBB4"))) PPC_WEAK_FUNC(sub_83BDEBB4);
PPC_FUNC_IMPL(__imp__sub_83BDEBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDEBB8"))) PPC_WEAK_FUNC(sub_83BDEBB8);
PPC_FUNC_IMPL(__imp__sub_83BDEBB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31192
	ctx.r3.s64 = ctx.r11.s64 + 31192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDEBC4"))) PPC_WEAK_FUNC(sub_83BDEBC4);
PPC_FUNC_IMPL(__imp__sub_83BDEBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDEBC8"))) PPC_WEAK_FUNC(sub_83BDEBC8);
PPC_FUNC_IMPL(__imp__sub_83BDEBC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31200
	ctx.r3.s64 = ctx.r11.s64 + 31200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDEBD4"))) PPC_WEAK_FUNC(sub_83BDEBD4);
PPC_FUNC_IMPL(__imp__sub_83BDEBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDEBD8"))) PPC_WEAK_FUNC(sub_83BDEBD8);
PPC_FUNC_IMPL(__imp__sub_83BDEBD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31208
	ctx.r3.s64 = ctx.r11.s64 + 31208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDEBE4"))) PPC_WEAK_FUNC(sub_83BDEBE4);
PPC_FUNC_IMPL(__imp__sub_83BDEBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDEBE8"))) PPC_WEAK_FUNC(sub_83BDEBE8);
PPC_FUNC_IMPL(__imp__sub_83BDEBE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31216
	ctx.r3.s64 = ctx.r11.s64 + 31216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDEBF4"))) PPC_WEAK_FUNC(sub_83BDEBF4);
PPC_FUNC_IMPL(__imp__sub_83BDEBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDEBF8"))) PPC_WEAK_FUNC(sub_83BDEBF8);
PPC_FUNC_IMPL(__imp__sub_83BDEBF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31224
	ctx.r3.s64 = ctx.r11.s64 + 31224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDEC04"))) PPC_WEAK_FUNC(sub_83BDEC04);
PPC_FUNC_IMPL(__imp__sub_83BDEC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDEC08"))) PPC_WEAK_FUNC(sub_83BDEC08);
PPC_FUNC_IMPL(__imp__sub_83BDEC08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31232
	ctx.r3.s64 = ctx.r11.s64 + 31232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDEC14"))) PPC_WEAK_FUNC(sub_83BDEC14);
PPC_FUNC_IMPL(__imp__sub_83BDEC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDEC18"))) PPC_WEAK_FUNC(sub_83BDEC18);
PPC_FUNC_IMPL(__imp__sub_83BDEC18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31240
	ctx.r3.s64 = ctx.r11.s64 + 31240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDEC24"))) PPC_WEAK_FUNC(sub_83BDEC24);
PPC_FUNC_IMPL(__imp__sub_83BDEC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDEC28"))) PPC_WEAK_FUNC(sub_83BDEC28);
PPC_FUNC_IMPL(__imp__sub_83BDEC28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31248
	ctx.r3.s64 = ctx.r11.s64 + 31248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDEC34"))) PPC_WEAK_FUNC(sub_83BDEC34);
PPC_FUNC_IMPL(__imp__sub_83BDEC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDEC38"))) PPC_WEAK_FUNC(sub_83BDEC38);
PPC_FUNC_IMPL(__imp__sub_83BDEC38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31256
	ctx.r3.s64 = ctx.r11.s64 + 31256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDEC44"))) PPC_WEAK_FUNC(sub_83BDEC44);
PPC_FUNC_IMPL(__imp__sub_83BDEC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDEC48"))) PPC_WEAK_FUNC(sub_83BDEC48);
PPC_FUNC_IMPL(__imp__sub_83BDEC48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31264
	ctx.r3.s64 = ctx.r11.s64 + 31264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDEC54"))) PPC_WEAK_FUNC(sub_83BDEC54);
PPC_FUNC_IMPL(__imp__sub_83BDEC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDEC58"))) PPC_WEAK_FUNC(sub_83BDEC58);
PPC_FUNC_IMPL(__imp__sub_83BDEC58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,31272
	ctx.r3.s64 = ctx.r11.s64 + 31272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDEC64"))) PPC_WEAK_FUNC(sub_83BDEC64);
PPC_FUNC_IMPL(__imp__sub_83BDEC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

