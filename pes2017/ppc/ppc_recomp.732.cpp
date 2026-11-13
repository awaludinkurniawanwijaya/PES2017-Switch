#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C20DD4"))) PPC_WEAK_FUNC(sub_83C20DD4);
PPC_FUNC_IMPL(__imp__sub_83C20DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20DD8"))) PPC_WEAK_FUNC(sub_83C20DD8);
PPC_FUNC_IMPL(__imp__sub_83C20DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9336
	ctx.r3.s64 = ctx.r11.s64 + -9336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20DE4"))) PPC_WEAK_FUNC(sub_83C20DE4);
PPC_FUNC_IMPL(__imp__sub_83C20DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20DE8"))) PPC_WEAK_FUNC(sub_83C20DE8);
PPC_FUNC_IMPL(__imp__sub_83C20DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9328
	ctx.r3.s64 = ctx.r11.s64 + -9328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20DF4"))) PPC_WEAK_FUNC(sub_83C20DF4);
PPC_FUNC_IMPL(__imp__sub_83C20DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20DF8"))) PPC_WEAK_FUNC(sub_83C20DF8);
PPC_FUNC_IMPL(__imp__sub_83C20DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9320
	ctx.r3.s64 = ctx.r11.s64 + -9320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20E04"))) PPC_WEAK_FUNC(sub_83C20E04);
PPC_FUNC_IMPL(__imp__sub_83C20E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20E08"))) PPC_WEAK_FUNC(sub_83C20E08);
PPC_FUNC_IMPL(__imp__sub_83C20E08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9312
	ctx.r3.s64 = ctx.r11.s64 + -9312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20E14"))) PPC_WEAK_FUNC(sub_83C20E14);
PPC_FUNC_IMPL(__imp__sub_83C20E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20E18"))) PPC_WEAK_FUNC(sub_83C20E18);
PPC_FUNC_IMPL(__imp__sub_83C20E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9304
	ctx.r3.s64 = ctx.r11.s64 + -9304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20E24"))) PPC_WEAK_FUNC(sub_83C20E24);
PPC_FUNC_IMPL(__imp__sub_83C20E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20E28"))) PPC_WEAK_FUNC(sub_83C20E28);
PPC_FUNC_IMPL(__imp__sub_83C20E28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9296
	ctx.r3.s64 = ctx.r11.s64 + -9296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20E34"))) PPC_WEAK_FUNC(sub_83C20E34);
PPC_FUNC_IMPL(__imp__sub_83C20E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20E38"))) PPC_WEAK_FUNC(sub_83C20E38);
PPC_FUNC_IMPL(__imp__sub_83C20E38) {
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
	// addi r3,r11,-17388
	ctx.r3.s64 = ctx.r11.s64 + -17388;
	// bl 0x83523120
	ctx.lr = 0x83C20E50;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-9288
	ctx.r3.s64 = ctx.r10.s64 + -9288;
	// bl 0x831cdcc8
	ctx.lr = 0x83C20E5C;
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

__attribute__((alias("__imp__sub_83C20E6C"))) PPC_WEAK_FUNC(sub_83C20E6C);
PPC_FUNC_IMPL(__imp__sub_83C20E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20E70"))) PPC_WEAK_FUNC(sub_83C20E70);
PPC_FUNC_IMPL(__imp__sub_83C20E70) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-17384
	ctx.r7.s64 = ctx.r8.s64 + -17384;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-17384(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17384);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-17384(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17384, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C20E98"))) PPC_WEAK_FUNC(sub_83C20E98);
PPC_FUNC_IMPL(__imp__sub_83C20E98) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,8732
	ctx.r6.s64 = ctx.r7.s64 + 8732;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,8660(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8660);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-17384(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -17384);
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
	// std r9,8732(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8732, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C20EE0"))) PPC_WEAK_FUNC(sub_83C20EE0);
PPC_FUNC_IMPL(__imp__sub_83C20EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9272
	ctx.r3.s64 = ctx.r11.s64 + -9272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20EEC"))) PPC_WEAK_FUNC(sub_83C20EEC);
PPC_FUNC_IMPL(__imp__sub_83C20EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20EF0"))) PPC_WEAK_FUNC(sub_83C20EF0);
PPC_FUNC_IMPL(__imp__sub_83C20EF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9264
	ctx.r3.s64 = ctx.r11.s64 + -9264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20EFC"))) PPC_WEAK_FUNC(sub_83C20EFC);
PPC_FUNC_IMPL(__imp__sub_83C20EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20F00"))) PPC_WEAK_FUNC(sub_83C20F00);
PPC_FUNC_IMPL(__imp__sub_83C20F00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9256
	ctx.r3.s64 = ctx.r11.s64 + -9256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20F0C"))) PPC_WEAK_FUNC(sub_83C20F0C);
PPC_FUNC_IMPL(__imp__sub_83C20F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20F10"))) PPC_WEAK_FUNC(sub_83C20F10);
PPC_FUNC_IMPL(__imp__sub_83C20F10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9248
	ctx.r3.s64 = ctx.r11.s64 + -9248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20F1C"))) PPC_WEAK_FUNC(sub_83C20F1C);
PPC_FUNC_IMPL(__imp__sub_83C20F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20F20"))) PPC_WEAK_FUNC(sub_83C20F20);
PPC_FUNC_IMPL(__imp__sub_83C20F20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9240
	ctx.r3.s64 = ctx.r11.s64 + -9240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20F2C"))) PPC_WEAK_FUNC(sub_83C20F2C);
PPC_FUNC_IMPL(__imp__sub_83C20F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20F30"))) PPC_WEAK_FUNC(sub_83C20F30);
PPC_FUNC_IMPL(__imp__sub_83C20F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9232
	ctx.r3.s64 = ctx.r11.s64 + -9232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20F3C"))) PPC_WEAK_FUNC(sub_83C20F3C);
PPC_FUNC_IMPL(__imp__sub_83C20F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20F40"))) PPC_WEAK_FUNC(sub_83C20F40);
PPC_FUNC_IMPL(__imp__sub_83C20F40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9224
	ctx.r3.s64 = ctx.r11.s64 + -9224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20F4C"))) PPC_WEAK_FUNC(sub_83C20F4C);
PPC_FUNC_IMPL(__imp__sub_83C20F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20F50"))) PPC_WEAK_FUNC(sub_83C20F50);
PPC_FUNC_IMPL(__imp__sub_83C20F50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9216
	ctx.r3.s64 = ctx.r11.s64 + -9216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20F5C"))) PPC_WEAK_FUNC(sub_83C20F5C);
PPC_FUNC_IMPL(__imp__sub_83C20F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20F60"))) PPC_WEAK_FUNC(sub_83C20F60);
PPC_FUNC_IMPL(__imp__sub_83C20F60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9208
	ctx.r3.s64 = ctx.r11.s64 + -9208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20F6C"))) PPC_WEAK_FUNC(sub_83C20F6C);
PPC_FUNC_IMPL(__imp__sub_83C20F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20F70"))) PPC_WEAK_FUNC(sub_83C20F70);
PPC_FUNC_IMPL(__imp__sub_83C20F70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9200
	ctx.r3.s64 = ctx.r11.s64 + -9200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20F7C"))) PPC_WEAK_FUNC(sub_83C20F7C);
PPC_FUNC_IMPL(__imp__sub_83C20F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20F80"))) PPC_WEAK_FUNC(sub_83C20F80);
PPC_FUNC_IMPL(__imp__sub_83C20F80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9192
	ctx.r3.s64 = ctx.r11.s64 + -9192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20F8C"))) PPC_WEAK_FUNC(sub_83C20F8C);
PPC_FUNC_IMPL(__imp__sub_83C20F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20F90"))) PPC_WEAK_FUNC(sub_83C20F90);
PPC_FUNC_IMPL(__imp__sub_83C20F90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9184
	ctx.r3.s64 = ctx.r11.s64 + -9184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20F9C"))) PPC_WEAK_FUNC(sub_83C20F9C);
PPC_FUNC_IMPL(__imp__sub_83C20F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20FA0"))) PPC_WEAK_FUNC(sub_83C20FA0);
PPC_FUNC_IMPL(__imp__sub_83C20FA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9176
	ctx.r3.s64 = ctx.r11.s64 + -9176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C20FAC"))) PPC_WEAK_FUNC(sub_83C20FAC);
PPC_FUNC_IMPL(__imp__sub_83C20FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20FB0"))) PPC_WEAK_FUNC(sub_83C20FB0);
PPC_FUNC_IMPL(__imp__sub_83C20FB0) {
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
	// addi r3,r11,-17376
	ctx.r3.s64 = ctx.r11.s64 + -17376;
	// bl 0x83523120
	ctx.lr = 0x83C20FC8;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-9168
	ctx.r3.s64 = ctx.r10.s64 + -9168;
	// bl 0x831cdcc8
	ctx.lr = 0x83C20FD4;
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

__attribute__((alias("__imp__sub_83C20FE4"))) PPC_WEAK_FUNC(sub_83C20FE4);
PPC_FUNC_IMPL(__imp__sub_83C20FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C20FE8"))) PPC_WEAK_FUNC(sub_83C20FE8);
PPC_FUNC_IMPL(__imp__sub_83C20FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-17372
	ctx.r7.s64 = ctx.r8.s64 + -17372;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-17372(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17372);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-17372(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17372, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C21010"))) PPC_WEAK_FUNC(sub_83C21010);
PPC_FUNC_IMPL(__imp__sub_83C21010) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,8860
	ctx.r6.s64 = ctx.r7.s64 + 8860;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,8788(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8788);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-17372(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -17372);
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
	// std r9,8860(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8860, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C21058"))) PPC_WEAK_FUNC(sub_83C21058);
PPC_FUNC_IMPL(__imp__sub_83C21058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9152
	ctx.r3.s64 = ctx.r11.s64 + -9152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C21064"))) PPC_WEAK_FUNC(sub_83C21064);
PPC_FUNC_IMPL(__imp__sub_83C21064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21068"))) PPC_WEAK_FUNC(sub_83C21068);
PPC_FUNC_IMPL(__imp__sub_83C21068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9144
	ctx.r3.s64 = ctx.r11.s64 + -9144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C21074"))) PPC_WEAK_FUNC(sub_83C21074);
PPC_FUNC_IMPL(__imp__sub_83C21074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21078"))) PPC_WEAK_FUNC(sub_83C21078);
PPC_FUNC_IMPL(__imp__sub_83C21078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9136
	ctx.r3.s64 = ctx.r11.s64 + -9136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C21084"))) PPC_WEAK_FUNC(sub_83C21084);
PPC_FUNC_IMPL(__imp__sub_83C21084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21088"))) PPC_WEAK_FUNC(sub_83C21088);
PPC_FUNC_IMPL(__imp__sub_83C21088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9128
	ctx.r3.s64 = ctx.r11.s64 + -9128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C21094"))) PPC_WEAK_FUNC(sub_83C21094);
PPC_FUNC_IMPL(__imp__sub_83C21094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21098"))) PPC_WEAK_FUNC(sub_83C21098);
PPC_FUNC_IMPL(__imp__sub_83C21098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9120
	ctx.r3.s64 = ctx.r11.s64 + -9120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C210A4"))) PPC_WEAK_FUNC(sub_83C210A4);
PPC_FUNC_IMPL(__imp__sub_83C210A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C210A8"))) PPC_WEAK_FUNC(sub_83C210A8);
PPC_FUNC_IMPL(__imp__sub_83C210A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9112
	ctx.r3.s64 = ctx.r11.s64 + -9112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C210B4"))) PPC_WEAK_FUNC(sub_83C210B4);
PPC_FUNC_IMPL(__imp__sub_83C210B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C210B8"))) PPC_WEAK_FUNC(sub_83C210B8);
PPC_FUNC_IMPL(__imp__sub_83C210B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9104
	ctx.r3.s64 = ctx.r11.s64 + -9104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C210C4"))) PPC_WEAK_FUNC(sub_83C210C4);
PPC_FUNC_IMPL(__imp__sub_83C210C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C210C8"))) PPC_WEAK_FUNC(sub_83C210C8);
PPC_FUNC_IMPL(__imp__sub_83C210C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9096
	ctx.r3.s64 = ctx.r11.s64 + -9096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C210D4"))) PPC_WEAK_FUNC(sub_83C210D4);
PPC_FUNC_IMPL(__imp__sub_83C210D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C210D8"))) PPC_WEAK_FUNC(sub_83C210D8);
PPC_FUNC_IMPL(__imp__sub_83C210D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9088
	ctx.r3.s64 = ctx.r11.s64 + -9088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C210E4"))) PPC_WEAK_FUNC(sub_83C210E4);
PPC_FUNC_IMPL(__imp__sub_83C210E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C210E8"))) PPC_WEAK_FUNC(sub_83C210E8);
PPC_FUNC_IMPL(__imp__sub_83C210E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9080
	ctx.r3.s64 = ctx.r11.s64 + -9080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C210F4"))) PPC_WEAK_FUNC(sub_83C210F4);
PPC_FUNC_IMPL(__imp__sub_83C210F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C210F8"))) PPC_WEAK_FUNC(sub_83C210F8);
PPC_FUNC_IMPL(__imp__sub_83C210F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9072
	ctx.r3.s64 = ctx.r11.s64 + -9072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C21104"))) PPC_WEAK_FUNC(sub_83C21104);
PPC_FUNC_IMPL(__imp__sub_83C21104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21108"))) PPC_WEAK_FUNC(sub_83C21108);
PPC_FUNC_IMPL(__imp__sub_83C21108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9064
	ctx.r3.s64 = ctx.r11.s64 + -9064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C21114"))) PPC_WEAK_FUNC(sub_83C21114);
PPC_FUNC_IMPL(__imp__sub_83C21114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21118"))) PPC_WEAK_FUNC(sub_83C21118);
PPC_FUNC_IMPL(__imp__sub_83C21118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9056
	ctx.r3.s64 = ctx.r11.s64 + -9056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C21124"))) PPC_WEAK_FUNC(sub_83C21124);
PPC_FUNC_IMPL(__imp__sub_83C21124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21128"))) PPC_WEAK_FUNC(sub_83C21128);
PPC_FUNC_IMPL(__imp__sub_83C21128) {
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
	// addi r3,r11,-17364
	ctx.r3.s64 = ctx.r11.s64 + -17364;
	// bl 0x83523120
	ctx.lr = 0x83C21140;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-9048
	ctx.r3.s64 = ctx.r10.s64 + -9048;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2114C;
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

__attribute__((alias("__imp__sub_83C2115C"))) PPC_WEAK_FUNC(sub_83C2115C);
PPC_FUNC_IMPL(__imp__sub_83C2115C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21160"))) PPC_WEAK_FUNC(sub_83C21160);
PPC_FUNC_IMPL(__imp__sub_83C21160) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-17360
	ctx.r7.s64 = ctx.r8.s64 + -17360;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-17360(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17360);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-17360(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17360, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C21188"))) PPC_WEAK_FUNC(sub_83C21188);
PPC_FUNC_IMPL(__imp__sub_83C21188) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,8988
	ctx.r6.s64 = ctx.r7.s64 + 8988;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,8916(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8916);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-17360(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -17360);
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
	// std r9,8988(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8988, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C211D0"))) PPC_WEAK_FUNC(sub_83C211D0);
PPC_FUNC_IMPL(__imp__sub_83C211D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9032
	ctx.r3.s64 = ctx.r11.s64 + -9032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C211DC"))) PPC_WEAK_FUNC(sub_83C211DC);
PPC_FUNC_IMPL(__imp__sub_83C211DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C211E0"))) PPC_WEAK_FUNC(sub_83C211E0);
PPC_FUNC_IMPL(__imp__sub_83C211E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9024
	ctx.r3.s64 = ctx.r11.s64 + -9024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C211EC"))) PPC_WEAK_FUNC(sub_83C211EC);
PPC_FUNC_IMPL(__imp__sub_83C211EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C211F0"))) PPC_WEAK_FUNC(sub_83C211F0);
PPC_FUNC_IMPL(__imp__sub_83C211F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9016
	ctx.r3.s64 = ctx.r11.s64 + -9016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C211FC"))) PPC_WEAK_FUNC(sub_83C211FC);
PPC_FUNC_IMPL(__imp__sub_83C211FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21200"))) PPC_WEAK_FUNC(sub_83C21200);
PPC_FUNC_IMPL(__imp__sub_83C21200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9008
	ctx.r3.s64 = ctx.r11.s64 + -9008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2120C"))) PPC_WEAK_FUNC(sub_83C2120C);
PPC_FUNC_IMPL(__imp__sub_83C2120C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21210"))) PPC_WEAK_FUNC(sub_83C21210);
PPC_FUNC_IMPL(__imp__sub_83C21210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-9000
	ctx.r3.s64 = ctx.r11.s64 + -9000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2121C"))) PPC_WEAK_FUNC(sub_83C2121C);
PPC_FUNC_IMPL(__imp__sub_83C2121C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21220"))) PPC_WEAK_FUNC(sub_83C21220);
PPC_FUNC_IMPL(__imp__sub_83C21220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8992
	ctx.r3.s64 = ctx.r11.s64 + -8992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2122C"))) PPC_WEAK_FUNC(sub_83C2122C);
PPC_FUNC_IMPL(__imp__sub_83C2122C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21230"))) PPC_WEAK_FUNC(sub_83C21230);
PPC_FUNC_IMPL(__imp__sub_83C21230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8984
	ctx.r3.s64 = ctx.r11.s64 + -8984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2123C"))) PPC_WEAK_FUNC(sub_83C2123C);
PPC_FUNC_IMPL(__imp__sub_83C2123C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21240"))) PPC_WEAK_FUNC(sub_83C21240);
PPC_FUNC_IMPL(__imp__sub_83C21240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8976
	ctx.r3.s64 = ctx.r11.s64 + -8976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2124C"))) PPC_WEAK_FUNC(sub_83C2124C);
PPC_FUNC_IMPL(__imp__sub_83C2124C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21250"))) PPC_WEAK_FUNC(sub_83C21250);
PPC_FUNC_IMPL(__imp__sub_83C21250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8968
	ctx.r3.s64 = ctx.r11.s64 + -8968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2125C"))) PPC_WEAK_FUNC(sub_83C2125C);
PPC_FUNC_IMPL(__imp__sub_83C2125C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21260"))) PPC_WEAK_FUNC(sub_83C21260);
PPC_FUNC_IMPL(__imp__sub_83C21260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8960
	ctx.r3.s64 = ctx.r11.s64 + -8960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2126C"))) PPC_WEAK_FUNC(sub_83C2126C);
PPC_FUNC_IMPL(__imp__sub_83C2126C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21270"))) PPC_WEAK_FUNC(sub_83C21270);
PPC_FUNC_IMPL(__imp__sub_83C21270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8952
	ctx.r3.s64 = ctx.r11.s64 + -8952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2127C"))) PPC_WEAK_FUNC(sub_83C2127C);
PPC_FUNC_IMPL(__imp__sub_83C2127C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21280"))) PPC_WEAK_FUNC(sub_83C21280);
PPC_FUNC_IMPL(__imp__sub_83C21280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8944
	ctx.r3.s64 = ctx.r11.s64 + -8944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2128C"))) PPC_WEAK_FUNC(sub_83C2128C);
PPC_FUNC_IMPL(__imp__sub_83C2128C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21290"))) PPC_WEAK_FUNC(sub_83C21290);
PPC_FUNC_IMPL(__imp__sub_83C21290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8936
	ctx.r3.s64 = ctx.r11.s64 + -8936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2129C"))) PPC_WEAK_FUNC(sub_83C2129C);
PPC_FUNC_IMPL(__imp__sub_83C2129C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C212A0"))) PPC_WEAK_FUNC(sub_83C212A0);
PPC_FUNC_IMPL(__imp__sub_83C212A0) {
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
	// addi r3,r11,-17352
	ctx.r3.s64 = ctx.r11.s64 + -17352;
	// bl 0x83523120
	ctx.lr = 0x83C212B8;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-8928
	ctx.r3.s64 = ctx.r10.s64 + -8928;
	// bl 0x831cdcc8
	ctx.lr = 0x83C212C4;
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

__attribute__((alias("__imp__sub_83C212D4"))) PPC_WEAK_FUNC(sub_83C212D4);
PPC_FUNC_IMPL(__imp__sub_83C212D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C212D8"))) PPC_WEAK_FUNC(sub_83C212D8);
PPC_FUNC_IMPL(__imp__sub_83C212D8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-17348
	ctx.r7.s64 = ctx.r8.s64 + -17348;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-17348(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17348);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-17348(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17348, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C21300"))) PPC_WEAK_FUNC(sub_83C21300);
PPC_FUNC_IMPL(__imp__sub_83C21300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8912
	ctx.r3.s64 = ctx.r11.s64 + -8912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2130C"))) PPC_WEAK_FUNC(sub_83C2130C);
PPC_FUNC_IMPL(__imp__sub_83C2130C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21310"))) PPC_WEAK_FUNC(sub_83C21310);
PPC_FUNC_IMPL(__imp__sub_83C21310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8904
	ctx.r3.s64 = ctx.r11.s64 + -8904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2131C"))) PPC_WEAK_FUNC(sub_83C2131C);
PPC_FUNC_IMPL(__imp__sub_83C2131C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21320"))) PPC_WEAK_FUNC(sub_83C21320);
PPC_FUNC_IMPL(__imp__sub_83C21320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8896
	ctx.r3.s64 = ctx.r11.s64 + -8896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2132C"))) PPC_WEAK_FUNC(sub_83C2132C);
PPC_FUNC_IMPL(__imp__sub_83C2132C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21330"))) PPC_WEAK_FUNC(sub_83C21330);
PPC_FUNC_IMPL(__imp__sub_83C21330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8888
	ctx.r3.s64 = ctx.r11.s64 + -8888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2133C"))) PPC_WEAK_FUNC(sub_83C2133C);
PPC_FUNC_IMPL(__imp__sub_83C2133C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21340"))) PPC_WEAK_FUNC(sub_83C21340);
PPC_FUNC_IMPL(__imp__sub_83C21340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8880
	ctx.r3.s64 = ctx.r11.s64 + -8880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2134C"))) PPC_WEAK_FUNC(sub_83C2134C);
PPC_FUNC_IMPL(__imp__sub_83C2134C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21350"))) PPC_WEAK_FUNC(sub_83C21350);
PPC_FUNC_IMPL(__imp__sub_83C21350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8872
	ctx.r3.s64 = ctx.r11.s64 + -8872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2135C"))) PPC_WEAK_FUNC(sub_83C2135C);
PPC_FUNC_IMPL(__imp__sub_83C2135C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21360"))) PPC_WEAK_FUNC(sub_83C21360);
PPC_FUNC_IMPL(__imp__sub_83C21360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8864
	ctx.r3.s64 = ctx.r11.s64 + -8864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2136C"))) PPC_WEAK_FUNC(sub_83C2136C);
PPC_FUNC_IMPL(__imp__sub_83C2136C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21370"))) PPC_WEAK_FUNC(sub_83C21370);
PPC_FUNC_IMPL(__imp__sub_83C21370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8856
	ctx.r3.s64 = ctx.r11.s64 + -8856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2137C"))) PPC_WEAK_FUNC(sub_83C2137C);
PPC_FUNC_IMPL(__imp__sub_83C2137C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21380"))) PPC_WEAK_FUNC(sub_83C21380);
PPC_FUNC_IMPL(__imp__sub_83C21380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8848
	ctx.r3.s64 = ctx.r11.s64 + -8848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2138C"))) PPC_WEAK_FUNC(sub_83C2138C);
PPC_FUNC_IMPL(__imp__sub_83C2138C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21390"))) PPC_WEAK_FUNC(sub_83C21390);
PPC_FUNC_IMPL(__imp__sub_83C21390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8840
	ctx.r3.s64 = ctx.r11.s64 + -8840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2139C"))) PPC_WEAK_FUNC(sub_83C2139C);
PPC_FUNC_IMPL(__imp__sub_83C2139C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C213A0"))) PPC_WEAK_FUNC(sub_83C213A0);
PPC_FUNC_IMPL(__imp__sub_83C213A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8832
	ctx.r3.s64 = ctx.r11.s64 + -8832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C213AC"))) PPC_WEAK_FUNC(sub_83C213AC);
PPC_FUNC_IMPL(__imp__sub_83C213AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C213B0"))) PPC_WEAK_FUNC(sub_83C213B0);
PPC_FUNC_IMPL(__imp__sub_83C213B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8824
	ctx.r3.s64 = ctx.r11.s64 + -8824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C213BC"))) PPC_WEAK_FUNC(sub_83C213BC);
PPC_FUNC_IMPL(__imp__sub_83C213BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C213C0"))) PPC_WEAK_FUNC(sub_83C213C0);
PPC_FUNC_IMPL(__imp__sub_83C213C0) {
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
	// addi r3,r11,-17340
	ctx.r3.s64 = ctx.r11.s64 + -17340;
	// bl 0x83523120
	ctx.lr = 0x83C213D8;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-8816
	ctx.r3.s64 = ctx.r10.s64 + -8816;
	// bl 0x831cdcc8
	ctx.lr = 0x83C213E4;
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

__attribute__((alias("__imp__sub_83C213F4"))) PPC_WEAK_FUNC(sub_83C213F4);
PPC_FUNC_IMPL(__imp__sub_83C213F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C213F8"))) PPC_WEAK_FUNC(sub_83C213F8);
PPC_FUNC_IMPL(__imp__sub_83C213F8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-17336
	ctx.r7.s64 = ctx.r8.s64 + -17336;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-17336(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17336);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-17336(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17336, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C21420"))) PPC_WEAK_FUNC(sub_83C21420);
PPC_FUNC_IMPL(__imp__sub_83C21420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8800
	ctx.r3.s64 = ctx.r11.s64 + -8800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2142C"))) PPC_WEAK_FUNC(sub_83C2142C);
PPC_FUNC_IMPL(__imp__sub_83C2142C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21430"))) PPC_WEAK_FUNC(sub_83C21430);
PPC_FUNC_IMPL(__imp__sub_83C21430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8792
	ctx.r3.s64 = ctx.r11.s64 + -8792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2143C"))) PPC_WEAK_FUNC(sub_83C2143C);
PPC_FUNC_IMPL(__imp__sub_83C2143C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21440"))) PPC_WEAK_FUNC(sub_83C21440);
PPC_FUNC_IMPL(__imp__sub_83C21440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8784
	ctx.r3.s64 = ctx.r11.s64 + -8784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2144C"))) PPC_WEAK_FUNC(sub_83C2144C);
PPC_FUNC_IMPL(__imp__sub_83C2144C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21450"))) PPC_WEAK_FUNC(sub_83C21450);
PPC_FUNC_IMPL(__imp__sub_83C21450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8776
	ctx.r3.s64 = ctx.r11.s64 + -8776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2145C"))) PPC_WEAK_FUNC(sub_83C2145C);
PPC_FUNC_IMPL(__imp__sub_83C2145C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21460"))) PPC_WEAK_FUNC(sub_83C21460);
PPC_FUNC_IMPL(__imp__sub_83C21460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8768
	ctx.r3.s64 = ctx.r11.s64 + -8768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2146C"))) PPC_WEAK_FUNC(sub_83C2146C);
PPC_FUNC_IMPL(__imp__sub_83C2146C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21470"))) PPC_WEAK_FUNC(sub_83C21470);
PPC_FUNC_IMPL(__imp__sub_83C21470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8760
	ctx.r3.s64 = ctx.r11.s64 + -8760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2147C"))) PPC_WEAK_FUNC(sub_83C2147C);
PPC_FUNC_IMPL(__imp__sub_83C2147C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21480"))) PPC_WEAK_FUNC(sub_83C21480);
PPC_FUNC_IMPL(__imp__sub_83C21480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8752
	ctx.r3.s64 = ctx.r11.s64 + -8752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2148C"))) PPC_WEAK_FUNC(sub_83C2148C);
PPC_FUNC_IMPL(__imp__sub_83C2148C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21490"))) PPC_WEAK_FUNC(sub_83C21490);
PPC_FUNC_IMPL(__imp__sub_83C21490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8744
	ctx.r3.s64 = ctx.r11.s64 + -8744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2149C"))) PPC_WEAK_FUNC(sub_83C2149C);
PPC_FUNC_IMPL(__imp__sub_83C2149C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C214A0"))) PPC_WEAK_FUNC(sub_83C214A0);
PPC_FUNC_IMPL(__imp__sub_83C214A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8736
	ctx.r3.s64 = ctx.r11.s64 + -8736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C214AC"))) PPC_WEAK_FUNC(sub_83C214AC);
PPC_FUNC_IMPL(__imp__sub_83C214AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C214B0"))) PPC_WEAK_FUNC(sub_83C214B0);
PPC_FUNC_IMPL(__imp__sub_83C214B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8728
	ctx.r3.s64 = ctx.r11.s64 + -8728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C214BC"))) PPC_WEAK_FUNC(sub_83C214BC);
PPC_FUNC_IMPL(__imp__sub_83C214BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C214C0"))) PPC_WEAK_FUNC(sub_83C214C0);
PPC_FUNC_IMPL(__imp__sub_83C214C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8720
	ctx.r3.s64 = ctx.r11.s64 + -8720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C214CC"))) PPC_WEAK_FUNC(sub_83C214CC);
PPC_FUNC_IMPL(__imp__sub_83C214CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C214D0"))) PPC_WEAK_FUNC(sub_83C214D0);
PPC_FUNC_IMPL(__imp__sub_83C214D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8712
	ctx.r3.s64 = ctx.r11.s64 + -8712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C214DC"))) PPC_WEAK_FUNC(sub_83C214DC);
PPC_FUNC_IMPL(__imp__sub_83C214DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C214E0"))) PPC_WEAK_FUNC(sub_83C214E0);
PPC_FUNC_IMPL(__imp__sub_83C214E0) {
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
	// addi r3,r11,-17328
	ctx.r3.s64 = ctx.r11.s64 + -17328;
	// bl 0x83523120
	ctx.lr = 0x83C214F8;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-8704
	ctx.r3.s64 = ctx.r10.s64 + -8704;
	// bl 0x831cdcc8
	ctx.lr = 0x83C21504;
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

__attribute__((alias("__imp__sub_83C21514"))) PPC_WEAK_FUNC(sub_83C21514);
PPC_FUNC_IMPL(__imp__sub_83C21514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21518"))) PPC_WEAK_FUNC(sub_83C21518);
PPC_FUNC_IMPL(__imp__sub_83C21518) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-17324
	ctx.r7.s64 = ctx.r8.s64 + -17324;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-17324(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17324);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-17324(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17324, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C21540"))) PPC_WEAK_FUNC(sub_83C21540);
PPC_FUNC_IMPL(__imp__sub_83C21540) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,9324
	ctx.r6.s64 = ctx.r7.s64 + 9324;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,9252(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 9252);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-17324(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -17324);
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
	// std r9,9324(r7)
	PPC_STORE_U64(ctx.r7.u32 + 9324, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C21588"))) PPC_WEAK_FUNC(sub_83C21588);
PPC_FUNC_IMPL(__imp__sub_83C21588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8688
	ctx.r3.s64 = ctx.r11.s64 + -8688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C21594"))) PPC_WEAK_FUNC(sub_83C21594);
PPC_FUNC_IMPL(__imp__sub_83C21594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21598"))) PPC_WEAK_FUNC(sub_83C21598);
PPC_FUNC_IMPL(__imp__sub_83C21598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8680
	ctx.r3.s64 = ctx.r11.s64 + -8680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C215A4"))) PPC_WEAK_FUNC(sub_83C215A4);
PPC_FUNC_IMPL(__imp__sub_83C215A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C215A8"))) PPC_WEAK_FUNC(sub_83C215A8);
PPC_FUNC_IMPL(__imp__sub_83C215A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8672
	ctx.r3.s64 = ctx.r11.s64 + -8672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C215B4"))) PPC_WEAK_FUNC(sub_83C215B4);
PPC_FUNC_IMPL(__imp__sub_83C215B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C215B8"))) PPC_WEAK_FUNC(sub_83C215B8);
PPC_FUNC_IMPL(__imp__sub_83C215B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8664
	ctx.r3.s64 = ctx.r11.s64 + -8664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C215C4"))) PPC_WEAK_FUNC(sub_83C215C4);
PPC_FUNC_IMPL(__imp__sub_83C215C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C215C8"))) PPC_WEAK_FUNC(sub_83C215C8);
PPC_FUNC_IMPL(__imp__sub_83C215C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8656
	ctx.r3.s64 = ctx.r11.s64 + -8656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C215D4"))) PPC_WEAK_FUNC(sub_83C215D4);
PPC_FUNC_IMPL(__imp__sub_83C215D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C215D8"))) PPC_WEAK_FUNC(sub_83C215D8);
PPC_FUNC_IMPL(__imp__sub_83C215D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8648
	ctx.r3.s64 = ctx.r11.s64 + -8648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C215E4"))) PPC_WEAK_FUNC(sub_83C215E4);
PPC_FUNC_IMPL(__imp__sub_83C215E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C215E8"))) PPC_WEAK_FUNC(sub_83C215E8);
PPC_FUNC_IMPL(__imp__sub_83C215E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8640
	ctx.r3.s64 = ctx.r11.s64 + -8640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C215F4"))) PPC_WEAK_FUNC(sub_83C215F4);
PPC_FUNC_IMPL(__imp__sub_83C215F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C215F8"))) PPC_WEAK_FUNC(sub_83C215F8);
PPC_FUNC_IMPL(__imp__sub_83C215F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8632
	ctx.r3.s64 = ctx.r11.s64 + -8632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C21604"))) PPC_WEAK_FUNC(sub_83C21604);
PPC_FUNC_IMPL(__imp__sub_83C21604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21608"))) PPC_WEAK_FUNC(sub_83C21608);
PPC_FUNC_IMPL(__imp__sub_83C21608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8624
	ctx.r3.s64 = ctx.r11.s64 + -8624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C21614"))) PPC_WEAK_FUNC(sub_83C21614);
PPC_FUNC_IMPL(__imp__sub_83C21614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21618"))) PPC_WEAK_FUNC(sub_83C21618);
PPC_FUNC_IMPL(__imp__sub_83C21618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8616
	ctx.r3.s64 = ctx.r11.s64 + -8616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C21624"))) PPC_WEAK_FUNC(sub_83C21624);
PPC_FUNC_IMPL(__imp__sub_83C21624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21628"))) PPC_WEAK_FUNC(sub_83C21628);
PPC_FUNC_IMPL(__imp__sub_83C21628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8608
	ctx.r3.s64 = ctx.r11.s64 + -8608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C21634"))) PPC_WEAK_FUNC(sub_83C21634);
PPC_FUNC_IMPL(__imp__sub_83C21634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21638"))) PPC_WEAK_FUNC(sub_83C21638);
PPC_FUNC_IMPL(__imp__sub_83C21638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8600
	ctx.r3.s64 = ctx.r11.s64 + -8600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C21644"))) PPC_WEAK_FUNC(sub_83C21644);
PPC_FUNC_IMPL(__imp__sub_83C21644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21648"))) PPC_WEAK_FUNC(sub_83C21648);
PPC_FUNC_IMPL(__imp__sub_83C21648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8592
	ctx.r3.s64 = ctx.r11.s64 + -8592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C21654"))) PPC_WEAK_FUNC(sub_83C21654);
PPC_FUNC_IMPL(__imp__sub_83C21654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21658"))) PPC_WEAK_FUNC(sub_83C21658);
PPC_FUNC_IMPL(__imp__sub_83C21658) {
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
	// addi r3,r11,-17316
	ctx.r3.s64 = ctx.r11.s64 + -17316;
	// bl 0x83523120
	ctx.lr = 0x83C21670;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-8584
	ctx.r3.s64 = ctx.r10.s64 + -8584;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2167C;
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

__attribute__((alias("__imp__sub_83C2168C"))) PPC_WEAK_FUNC(sub_83C2168C);
PPC_FUNC_IMPL(__imp__sub_83C2168C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21690"))) PPC_WEAK_FUNC(sub_83C21690);
PPC_FUNC_IMPL(__imp__sub_83C21690) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-17312
	ctx.r7.s64 = ctx.r8.s64 + -17312;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-17312(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17312);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-17312(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17312, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C216B8"))) PPC_WEAK_FUNC(sub_83C216B8);
PPC_FUNC_IMPL(__imp__sub_83C216B8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,9452
	ctx.r6.s64 = ctx.r7.s64 + 9452;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,9380(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 9380);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-17312(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -17312);
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
	// std r9,9452(r7)
	PPC_STORE_U64(ctx.r7.u32 + 9452, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C21700"))) PPC_WEAK_FUNC(sub_83C21700);
PPC_FUNC_IMPL(__imp__sub_83C21700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8568
	ctx.r3.s64 = ctx.r11.s64 + -8568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2170C"))) PPC_WEAK_FUNC(sub_83C2170C);
PPC_FUNC_IMPL(__imp__sub_83C2170C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21710"))) PPC_WEAK_FUNC(sub_83C21710);
PPC_FUNC_IMPL(__imp__sub_83C21710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8560
	ctx.r3.s64 = ctx.r11.s64 + -8560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2171C"))) PPC_WEAK_FUNC(sub_83C2171C);
PPC_FUNC_IMPL(__imp__sub_83C2171C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21720"))) PPC_WEAK_FUNC(sub_83C21720);
PPC_FUNC_IMPL(__imp__sub_83C21720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8552
	ctx.r3.s64 = ctx.r11.s64 + -8552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2172C"))) PPC_WEAK_FUNC(sub_83C2172C);
PPC_FUNC_IMPL(__imp__sub_83C2172C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21730"))) PPC_WEAK_FUNC(sub_83C21730);
PPC_FUNC_IMPL(__imp__sub_83C21730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8544
	ctx.r3.s64 = ctx.r11.s64 + -8544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2173C"))) PPC_WEAK_FUNC(sub_83C2173C);
PPC_FUNC_IMPL(__imp__sub_83C2173C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21740"))) PPC_WEAK_FUNC(sub_83C21740);
PPC_FUNC_IMPL(__imp__sub_83C21740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8536
	ctx.r3.s64 = ctx.r11.s64 + -8536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2174C"))) PPC_WEAK_FUNC(sub_83C2174C);
PPC_FUNC_IMPL(__imp__sub_83C2174C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21750"))) PPC_WEAK_FUNC(sub_83C21750);
PPC_FUNC_IMPL(__imp__sub_83C21750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8528
	ctx.r3.s64 = ctx.r11.s64 + -8528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2175C"))) PPC_WEAK_FUNC(sub_83C2175C);
PPC_FUNC_IMPL(__imp__sub_83C2175C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21760"))) PPC_WEAK_FUNC(sub_83C21760);
PPC_FUNC_IMPL(__imp__sub_83C21760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8520
	ctx.r3.s64 = ctx.r11.s64 + -8520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2176C"))) PPC_WEAK_FUNC(sub_83C2176C);
PPC_FUNC_IMPL(__imp__sub_83C2176C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21770"))) PPC_WEAK_FUNC(sub_83C21770);
PPC_FUNC_IMPL(__imp__sub_83C21770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8512
	ctx.r3.s64 = ctx.r11.s64 + -8512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2177C"))) PPC_WEAK_FUNC(sub_83C2177C);
PPC_FUNC_IMPL(__imp__sub_83C2177C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21780"))) PPC_WEAK_FUNC(sub_83C21780);
PPC_FUNC_IMPL(__imp__sub_83C21780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8504
	ctx.r3.s64 = ctx.r11.s64 + -8504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2178C"))) PPC_WEAK_FUNC(sub_83C2178C);
PPC_FUNC_IMPL(__imp__sub_83C2178C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21790"))) PPC_WEAK_FUNC(sub_83C21790);
PPC_FUNC_IMPL(__imp__sub_83C21790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8496
	ctx.r3.s64 = ctx.r11.s64 + -8496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2179C"))) PPC_WEAK_FUNC(sub_83C2179C);
PPC_FUNC_IMPL(__imp__sub_83C2179C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C217A0"))) PPC_WEAK_FUNC(sub_83C217A0);
PPC_FUNC_IMPL(__imp__sub_83C217A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8488
	ctx.r3.s64 = ctx.r11.s64 + -8488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C217AC"))) PPC_WEAK_FUNC(sub_83C217AC);
PPC_FUNC_IMPL(__imp__sub_83C217AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C217B0"))) PPC_WEAK_FUNC(sub_83C217B0);
PPC_FUNC_IMPL(__imp__sub_83C217B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8480
	ctx.r3.s64 = ctx.r11.s64 + -8480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C217BC"))) PPC_WEAK_FUNC(sub_83C217BC);
PPC_FUNC_IMPL(__imp__sub_83C217BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C217C0"))) PPC_WEAK_FUNC(sub_83C217C0);
PPC_FUNC_IMPL(__imp__sub_83C217C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8472
	ctx.r3.s64 = ctx.r11.s64 + -8472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C217CC"))) PPC_WEAK_FUNC(sub_83C217CC);
PPC_FUNC_IMPL(__imp__sub_83C217CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C217D0"))) PPC_WEAK_FUNC(sub_83C217D0);
PPC_FUNC_IMPL(__imp__sub_83C217D0) {
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
	// addi r3,r11,-17304
	ctx.r3.s64 = ctx.r11.s64 + -17304;
	// bl 0x83523120
	ctx.lr = 0x83C217E8;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-8464
	ctx.r3.s64 = ctx.r10.s64 + -8464;
	// bl 0x831cdcc8
	ctx.lr = 0x83C217F4;
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

__attribute__((alias("__imp__sub_83C21804"))) PPC_WEAK_FUNC(sub_83C21804);
PPC_FUNC_IMPL(__imp__sub_83C21804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21808"))) PPC_WEAK_FUNC(sub_83C21808);
PPC_FUNC_IMPL(__imp__sub_83C21808) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-17300
	ctx.r7.s64 = ctx.r8.s64 + -17300;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-17300(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17300);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-17300(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17300, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C21830"))) PPC_WEAK_FUNC(sub_83C21830);
PPC_FUNC_IMPL(__imp__sub_83C21830) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,9580
	ctx.r6.s64 = ctx.r7.s64 + 9580;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,9508(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 9508);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-17300(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -17300);
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
	// std r9,9580(r7)
	PPC_STORE_U64(ctx.r7.u32 + 9580, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C21878"))) PPC_WEAK_FUNC(sub_83C21878);
PPC_FUNC_IMPL(__imp__sub_83C21878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8448
	ctx.r3.s64 = ctx.r11.s64 + -8448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C21884"))) PPC_WEAK_FUNC(sub_83C21884);
PPC_FUNC_IMPL(__imp__sub_83C21884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21888"))) PPC_WEAK_FUNC(sub_83C21888);
PPC_FUNC_IMPL(__imp__sub_83C21888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8440
	ctx.r3.s64 = ctx.r11.s64 + -8440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C21894"))) PPC_WEAK_FUNC(sub_83C21894);
PPC_FUNC_IMPL(__imp__sub_83C21894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21898"))) PPC_WEAK_FUNC(sub_83C21898);
PPC_FUNC_IMPL(__imp__sub_83C21898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8432
	ctx.r3.s64 = ctx.r11.s64 + -8432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C218A4"))) PPC_WEAK_FUNC(sub_83C218A4);
PPC_FUNC_IMPL(__imp__sub_83C218A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C218A8"))) PPC_WEAK_FUNC(sub_83C218A8);
PPC_FUNC_IMPL(__imp__sub_83C218A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8424
	ctx.r3.s64 = ctx.r11.s64 + -8424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C218B4"))) PPC_WEAK_FUNC(sub_83C218B4);
PPC_FUNC_IMPL(__imp__sub_83C218B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C218B8"))) PPC_WEAK_FUNC(sub_83C218B8);
PPC_FUNC_IMPL(__imp__sub_83C218B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8416
	ctx.r3.s64 = ctx.r11.s64 + -8416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C218C4"))) PPC_WEAK_FUNC(sub_83C218C4);
PPC_FUNC_IMPL(__imp__sub_83C218C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C218C8"))) PPC_WEAK_FUNC(sub_83C218C8);
PPC_FUNC_IMPL(__imp__sub_83C218C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8408
	ctx.r3.s64 = ctx.r11.s64 + -8408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C218D4"))) PPC_WEAK_FUNC(sub_83C218D4);
PPC_FUNC_IMPL(__imp__sub_83C218D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C218D8"))) PPC_WEAK_FUNC(sub_83C218D8);
PPC_FUNC_IMPL(__imp__sub_83C218D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8400
	ctx.r3.s64 = ctx.r11.s64 + -8400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C218E4"))) PPC_WEAK_FUNC(sub_83C218E4);
PPC_FUNC_IMPL(__imp__sub_83C218E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C218E8"))) PPC_WEAK_FUNC(sub_83C218E8);
PPC_FUNC_IMPL(__imp__sub_83C218E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8392
	ctx.r3.s64 = ctx.r11.s64 + -8392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C218F4"))) PPC_WEAK_FUNC(sub_83C218F4);
PPC_FUNC_IMPL(__imp__sub_83C218F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C218F8"))) PPC_WEAK_FUNC(sub_83C218F8);
PPC_FUNC_IMPL(__imp__sub_83C218F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8384
	ctx.r3.s64 = ctx.r11.s64 + -8384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C21904"))) PPC_WEAK_FUNC(sub_83C21904);
PPC_FUNC_IMPL(__imp__sub_83C21904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21908"))) PPC_WEAK_FUNC(sub_83C21908);
PPC_FUNC_IMPL(__imp__sub_83C21908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8376
	ctx.r3.s64 = ctx.r11.s64 + -8376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C21914"))) PPC_WEAK_FUNC(sub_83C21914);
PPC_FUNC_IMPL(__imp__sub_83C21914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21918"))) PPC_WEAK_FUNC(sub_83C21918);
PPC_FUNC_IMPL(__imp__sub_83C21918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8368
	ctx.r3.s64 = ctx.r11.s64 + -8368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C21924"))) PPC_WEAK_FUNC(sub_83C21924);
PPC_FUNC_IMPL(__imp__sub_83C21924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21928"))) PPC_WEAK_FUNC(sub_83C21928);
PPC_FUNC_IMPL(__imp__sub_83C21928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8360
	ctx.r3.s64 = ctx.r11.s64 + -8360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C21934"))) PPC_WEAK_FUNC(sub_83C21934);
PPC_FUNC_IMPL(__imp__sub_83C21934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21938"))) PPC_WEAK_FUNC(sub_83C21938);
PPC_FUNC_IMPL(__imp__sub_83C21938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8352
	ctx.r3.s64 = ctx.r11.s64 + -8352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C21944"))) PPC_WEAK_FUNC(sub_83C21944);
PPC_FUNC_IMPL(__imp__sub_83C21944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21948"))) PPC_WEAK_FUNC(sub_83C21948);
PPC_FUNC_IMPL(__imp__sub_83C21948) {
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
	// addi r3,r11,-17292
	ctx.r3.s64 = ctx.r11.s64 + -17292;
	// bl 0x83523120
	ctx.lr = 0x83C21960;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-8344
	ctx.r3.s64 = ctx.r10.s64 + -8344;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2196C;
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

__attribute__((alias("__imp__sub_83C2197C"))) PPC_WEAK_FUNC(sub_83C2197C);
PPC_FUNC_IMPL(__imp__sub_83C2197C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21980"))) PPC_WEAK_FUNC(sub_83C21980);
PPC_FUNC_IMPL(__imp__sub_83C21980) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-17288
	ctx.r7.s64 = ctx.r8.s64 + -17288;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-17288(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17288);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-17288(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17288, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C219A8"))) PPC_WEAK_FUNC(sub_83C219A8);
PPC_FUNC_IMPL(__imp__sub_83C219A8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,9708
	ctx.r6.s64 = ctx.r7.s64 + 9708;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,9636(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 9636);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-17288(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -17288);
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
	// std r9,9708(r7)
	PPC_STORE_U64(ctx.r7.u32 + 9708, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C219F0"))) PPC_WEAK_FUNC(sub_83C219F0);
PPC_FUNC_IMPL(__imp__sub_83C219F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8328
	ctx.r3.s64 = ctx.r11.s64 + -8328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C219FC"))) PPC_WEAK_FUNC(sub_83C219FC);
PPC_FUNC_IMPL(__imp__sub_83C219FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21A00"))) PPC_WEAK_FUNC(sub_83C21A00);
PPC_FUNC_IMPL(__imp__sub_83C21A00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8320
	ctx.r3.s64 = ctx.r11.s64 + -8320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C21A0C"))) PPC_WEAK_FUNC(sub_83C21A0C);
PPC_FUNC_IMPL(__imp__sub_83C21A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C21A10"))) PPC_WEAK_FUNC(sub_83C21A10);
PPC_FUNC_IMPL(__imp__sub_83C21A10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-8312
	ctx.r3.s64 = ctx.r11.s64 + -8312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

