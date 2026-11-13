#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C759B0"))) PPC_WEAK_FUNC(sub_83C759B0);
PPC_FUNC_IMPL(__imp__sub_83C759B0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-3148
	ctx.r11.s64 = ctx.r8.s64 + -3148;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-12168(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12168);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-25408
	ctx.r3.s64 = ctx.r6.s64 + -25408;
	// stw r10,-3148(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3148, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C759E0"))) PPC_WEAK_FUNC(sub_83C759E0);
PPC_FUNC_IMPL(__imp__sub_83C759E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-25392
	ctx.r3.s64 = ctx.r11.s64 + -25392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C759EC"))) PPC_WEAK_FUNC(sub_83C759EC);
PPC_FUNC_IMPL(__imp__sub_83C759EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C759F0"))) PPC_WEAK_FUNC(sub_83C759F0);
PPC_FUNC_IMPL(__imp__sub_83C759F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-25384
	ctx.r3.s64 = ctx.r11.s64 + -25384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C759FC"))) PPC_WEAK_FUNC(sub_83C759FC);
PPC_FUNC_IMPL(__imp__sub_83C759FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C75A00"))) PPC_WEAK_FUNC(sub_83C75A00);
PPC_FUNC_IMPL(__imp__sub_83C75A00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-25376
	ctx.r3.s64 = ctx.r11.s64 + -25376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C75A0C"))) PPC_WEAK_FUNC(sub_83C75A0C);
PPC_FUNC_IMPL(__imp__sub_83C75A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C75A10"))) PPC_WEAK_FUNC(sub_83C75A10);
PPC_FUNC_IMPL(__imp__sub_83C75A10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-25368
	ctx.r3.s64 = ctx.r11.s64 + -25368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C75A1C"))) PPC_WEAK_FUNC(sub_83C75A1C);
PPC_FUNC_IMPL(__imp__sub_83C75A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C75A20"))) PPC_WEAK_FUNC(sub_83C75A20);
PPC_FUNC_IMPL(__imp__sub_83C75A20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-25360
	ctx.r3.s64 = ctx.r11.s64 + -25360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C75A2C"))) PPC_WEAK_FUNC(sub_83C75A2C);
PPC_FUNC_IMPL(__imp__sub_83C75A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C75A30"))) PPC_WEAK_FUNC(sub_83C75A30);
PPC_FUNC_IMPL(__imp__sub_83C75A30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-25352
	ctx.r3.s64 = ctx.r11.s64 + -25352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C75A3C"))) PPC_WEAK_FUNC(sub_83C75A3C);
PPC_FUNC_IMPL(__imp__sub_83C75A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C75A40"))) PPC_WEAK_FUNC(sub_83C75A40);
PPC_FUNC_IMPL(__imp__sub_83C75A40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-25344
	ctx.r3.s64 = ctx.r11.s64 + -25344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C75A4C"))) PPC_WEAK_FUNC(sub_83C75A4C);
PPC_FUNC_IMPL(__imp__sub_83C75A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C75A50"))) PPC_WEAK_FUNC(sub_83C75A50);
PPC_FUNC_IMPL(__imp__sub_83C75A50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-25336
	ctx.r3.s64 = ctx.r11.s64 + -25336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C75A5C"))) PPC_WEAK_FUNC(sub_83C75A5C);
PPC_FUNC_IMPL(__imp__sub_83C75A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C75A60"))) PPC_WEAK_FUNC(sub_83C75A60);
PPC_FUNC_IMPL(__imp__sub_83C75A60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-25328
	ctx.r3.s64 = ctx.r11.s64 + -25328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C75A6C"))) PPC_WEAK_FUNC(sub_83C75A6C);
PPC_FUNC_IMPL(__imp__sub_83C75A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C75A70"))) PPC_WEAK_FUNC(sub_83C75A70);
PPC_FUNC_IMPL(__imp__sub_83C75A70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-25320
	ctx.r3.s64 = ctx.r11.s64 + -25320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C75A7C"))) PPC_WEAK_FUNC(sub_83C75A7C);
PPC_FUNC_IMPL(__imp__sub_83C75A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C75A80"))) PPC_WEAK_FUNC(sub_83C75A80);
PPC_FUNC_IMPL(__imp__sub_83C75A80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-25312
	ctx.r3.s64 = ctx.r11.s64 + -25312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C75A8C"))) PPC_WEAK_FUNC(sub_83C75A8C);
PPC_FUNC_IMPL(__imp__sub_83C75A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C75A90"))) PPC_WEAK_FUNC(sub_83C75A90);
PPC_FUNC_IMPL(__imp__sub_83C75A90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-25304
	ctx.r3.s64 = ctx.r11.s64 + -25304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C75A9C"))) PPC_WEAK_FUNC(sub_83C75A9C);
PPC_FUNC_IMPL(__imp__sub_83C75A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C75AA0"))) PPC_WEAK_FUNC(sub_83C75AA0);
PPC_FUNC_IMPL(__imp__sub_83C75AA0) {
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
	// addi r3,r11,-2784
	ctx.r3.s64 = ctx.r11.s64 + -2784;
	// bl 0x83523120
	ctx.lr = 0x83C75AB8;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-25296
	ctx.r3.s64 = ctx.r10.s64 + -25296;
	// bl 0x831cdcc8
	ctx.lr = 0x83C75AC4;
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

__attribute__((alias("__imp__sub_83C75AD4"))) PPC_WEAK_FUNC(sub_83C75AD4);
PPC_FUNC_IMPL(__imp__sub_83C75AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C75AD8"))) PPC_WEAK_FUNC(sub_83C75AD8);
PPC_FUNC_IMPL(__imp__sub_83C75AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-2768
	ctx.r7.s64 = ctx.r8.s64 + -2768;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-2768(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2768);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-2768(r8)
	PPC_STORE_U32(ctx.r8.u32 + -2768, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C75B00"))) PPC_WEAK_FUNC(sub_83C75B00);
PPC_FUNC_IMPL(__imp__sub_83C75B00) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-12016
	ctx.r6.s64 = ctx.r7.s64 + -12016;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-12088(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -12088);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-2768(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -2768);
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
	// std r9,-12016(r7)
	PPC_STORE_U64(ctx.r7.u32 + -12016, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C75B48"))) PPC_WEAK_FUNC(sub_83C75B48);
PPC_FUNC_IMPL(__imp__sub_83C75B48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-25280
	ctx.r3.s64 = ctx.r11.s64 + -25280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C75B54"))) PPC_WEAK_FUNC(sub_83C75B54);
PPC_FUNC_IMPL(__imp__sub_83C75B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C75B58"))) PPC_WEAK_FUNC(sub_83C75B58);
PPC_FUNC_IMPL(__imp__sub_83C75B58) {
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
	// addi r3,r11,-2760
	ctx.r3.s64 = ctx.r11.s64 + -2760;
	// bl 0x8259af80
	ctx.lr = 0x83C75B70;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-25264
	ctx.r3.s64 = ctx.r10.s64 + -25264;
	// bl 0x831cdcc8
	ctx.lr = 0x83C75B7C;
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

__attribute__((alias("__imp__sub_83C75B8C"))) PPC_WEAK_FUNC(sub_83C75B8C);
PPC_FUNC_IMPL(__imp__sub_83C75B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C75B90"))) PPC_WEAK_FUNC(sub_83C75B90);
PPC_FUNC_IMPL(__imp__sub_83C75B90) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-2780
	ctx.r11.s64 = ctx.r8.s64 + -2780;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-12040(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12040);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-25272
	ctx.r3.s64 = ctx.r6.s64 + -25272;
	// stw r10,-2780(r8)
	PPC_STORE_U32(ctx.r8.u32 + -2780, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C75BC0"))) PPC_WEAK_FUNC(sub_83C75BC0);
PPC_FUNC_IMPL(__imp__sub_83C75BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-25256
	ctx.r3.s64 = ctx.r11.s64 + -25256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C75BCC"))) PPC_WEAK_FUNC(sub_83C75BCC);
PPC_FUNC_IMPL(__imp__sub_83C75BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C75BD0"))) PPC_WEAK_FUNC(sub_83C75BD0);
PPC_FUNC_IMPL(__imp__sub_83C75BD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-25248
	ctx.r3.s64 = ctx.r11.s64 + -25248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C75BDC"))) PPC_WEAK_FUNC(sub_83C75BDC);
PPC_FUNC_IMPL(__imp__sub_83C75BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C75BE0"))) PPC_WEAK_FUNC(sub_83C75BE0);
PPC_FUNC_IMPL(__imp__sub_83C75BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-25240
	ctx.r3.s64 = ctx.r11.s64 + -25240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C75BEC"))) PPC_WEAK_FUNC(sub_83C75BEC);
PPC_FUNC_IMPL(__imp__sub_83C75BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C75BF0"))) PPC_WEAK_FUNC(sub_83C75BF0);
PPC_FUNC_IMPL(__imp__sub_83C75BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-25232
	ctx.r3.s64 = ctx.r11.s64 + -25232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C75BFC"))) PPC_WEAK_FUNC(sub_83C75BFC);
PPC_FUNC_IMPL(__imp__sub_83C75BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C75C00"))) PPC_WEAK_FUNC(sub_83C75C00);
PPC_FUNC_IMPL(__imp__sub_83C75C00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-25224
	ctx.r3.s64 = ctx.r11.s64 + -25224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C75C0C"))) PPC_WEAK_FUNC(sub_83C75C0C);
PPC_FUNC_IMPL(__imp__sub_83C75C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C75C10"))) PPC_WEAK_FUNC(sub_83C75C10);
PPC_FUNC_IMPL(__imp__sub_83C75C10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-25216
	ctx.r3.s64 = ctx.r11.s64 + -25216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C75C1C"))) PPC_WEAK_FUNC(sub_83C75C1C);
PPC_FUNC_IMPL(__imp__sub_83C75C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C75C20"))) PPC_WEAK_FUNC(sub_83C75C20);
PPC_FUNC_IMPL(__imp__sub_83C75C20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-25208
	ctx.r3.s64 = ctx.r11.s64 + -25208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C75C2C"))) PPC_WEAK_FUNC(sub_83C75C2C);
PPC_FUNC_IMPL(__imp__sub_83C75C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C75C30"))) PPC_WEAK_FUNC(sub_83C75C30);
PPC_FUNC_IMPL(__imp__sub_83C75C30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-25200
	ctx.r3.s64 = ctx.r11.s64 + -25200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C75C3C"))) PPC_WEAK_FUNC(sub_83C75C3C);
PPC_FUNC_IMPL(__imp__sub_83C75C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C75C40"))) PPC_WEAK_FUNC(sub_83C75C40);
PPC_FUNC_IMPL(__imp__sub_83C75C40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-25192
	ctx.r3.s64 = ctx.r11.s64 + -25192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C75C4C"))) PPC_WEAK_FUNC(sub_83C75C4C);
PPC_FUNC_IMPL(__imp__sub_83C75C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C75C50"))) PPC_WEAK_FUNC(sub_83C75C50);
PPC_FUNC_IMPL(__imp__sub_83C75C50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-25184
	ctx.r3.s64 = ctx.r11.s64 + -25184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C75C5C"))) PPC_WEAK_FUNC(sub_83C75C5C);
PPC_FUNC_IMPL(__imp__sub_83C75C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C75C60"))) PPC_WEAK_FUNC(sub_83C75C60);
PPC_FUNC_IMPL(__imp__sub_83C75C60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-25176
	ctx.r3.s64 = ctx.r11.s64 + -25176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C75C6C"))) PPC_WEAK_FUNC(sub_83C75C6C);
PPC_FUNC_IMPL(__imp__sub_83C75C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C75C70"))) PPC_WEAK_FUNC(sub_83C75C70);
PPC_FUNC_IMPL(__imp__sub_83C75C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-25168
	ctx.r3.s64 = ctx.r11.s64 + -25168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C75C7C"))) PPC_WEAK_FUNC(sub_83C75C7C);
PPC_FUNC_IMPL(__imp__sub_83C75C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C75C80"))) PPC_WEAK_FUNC(sub_83C75C80);
PPC_FUNC_IMPL(__imp__sub_83C75C80) {
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
	// addi r3,r11,-2416
	ctx.r3.s64 = ctx.r11.s64 + -2416;
	// bl 0x83523120
	ctx.lr = 0x83C75C98;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-25160
	ctx.r3.s64 = ctx.r10.s64 + -25160;
	// bl 0x831cdcc8
	ctx.lr = 0x83C75CA4;
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

__attribute__((alias("__imp__sub_83C75CB4"))) PPC_WEAK_FUNC(sub_83C75CB4);
PPC_FUNC_IMPL(__imp__sub_83C75CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C75CB8"))) PPC_WEAK_FUNC(sub_83C75CB8);
PPC_FUNC_IMPL(__imp__sub_83C75CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-2400
	ctx.r7.s64 = ctx.r8.s64 + -2400;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-2400(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2400);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-2400(r8)
	PPC_STORE_U32(ctx.r8.u32 + -2400, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C75CE0"))) PPC_WEAK_FUNC(sub_83C75CE0);
PPC_FUNC_IMPL(__imp__sub_83C75CE0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-11888
	ctx.r6.s64 = ctx.r7.s64 + -11888;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-11960(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -11960);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-2400(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -2400);
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
	// std r9,-11888(r7)
	PPC_STORE_U64(ctx.r7.u32 + -11888, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C75D28"))) PPC_WEAK_FUNC(sub_83C75D28);
PPC_FUNC_IMPL(__imp__sub_83C75D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-25144
	ctx.r3.s64 = ctx.r11.s64 + -25144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C75D34"))) PPC_WEAK_FUNC(sub_83C75D34);
PPC_FUNC_IMPL(__imp__sub_83C75D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C75D38"))) PPC_WEAK_FUNC(sub_83C75D38);
PPC_FUNC_IMPL(__imp__sub_83C75D38) {
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
	// addi r3,r11,-2392
	ctx.r3.s64 = ctx.r11.s64 + -2392;
	// bl 0x8259af80
	ctx.lr = 0x83C75D50;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-25128
	ctx.r3.s64 = ctx.r10.s64 + -25128;
	// bl 0x831cdcc8
	ctx.lr = 0x83C75D5C;
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

__attribute__((alias("__imp__sub_83C75D6C"))) PPC_WEAK_FUNC(sub_83C75D6C);
PPC_FUNC_IMPL(__imp__sub_83C75D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C75D70"))) PPC_WEAK_FUNC(sub_83C75D70);
PPC_FUNC_IMPL(__imp__sub_83C75D70) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-2412
	ctx.r11.s64 = ctx.r8.s64 + -2412;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-11912(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11912);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-25136
	ctx.r3.s64 = ctx.r6.s64 + -25136;
	// stw r10,-2412(r8)
	PPC_STORE_U32(ctx.r8.u32 + -2412, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C75DA0"))) PPC_WEAK_FUNC(sub_83C75DA0);
PPC_FUNC_IMPL(__imp__sub_83C75DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-25120
	ctx.r3.s64 = ctx.r11.s64 + -25120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C75DAC"))) PPC_WEAK_FUNC(sub_83C75DAC);
PPC_FUNC_IMPL(__imp__sub_83C75DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C75DB0"))) PPC_WEAK_FUNC(sub_83C75DB0);
PPC_FUNC_IMPL(__imp__sub_83C75DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-25112
	ctx.r3.s64 = ctx.r11.s64 + -25112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C75DBC"))) PPC_WEAK_FUNC(sub_83C75DBC);
PPC_FUNC_IMPL(__imp__sub_83C75DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C75DC0"))) PPC_WEAK_FUNC(sub_83C75DC0);
PPC_FUNC_IMPL(__imp__sub_83C75DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-25104
	ctx.r3.s64 = ctx.r11.s64 + -25104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C75DCC"))) PPC_WEAK_FUNC(sub_83C75DCC);
PPC_FUNC_IMPL(__imp__sub_83C75DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C75DD0"))) PPC_WEAK_FUNC(sub_83C75DD0);
PPC_FUNC_IMPL(__imp__sub_83C75DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-25096
	ctx.r3.s64 = ctx.r11.s64 + -25096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C75DDC"))) PPC_WEAK_FUNC(sub_83C75DDC);
PPC_FUNC_IMPL(__imp__sub_83C75DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C75DE0"))) PPC_WEAK_FUNC(sub_83C75DE0);
PPC_FUNC_IMPL(__imp__sub_83C75DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-25088
	ctx.r3.s64 = ctx.r11.s64 + -25088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C75DEC"))) PPC_WEAK_FUNC(sub_83C75DEC);
PPC_FUNC_IMPL(__imp__sub_83C75DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C75DF0"))) PPC_WEAK_FUNC(sub_83C75DF0);
PPC_FUNC_IMPL(__imp__sub_83C75DF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-25080
	ctx.r3.s64 = ctx.r11.s64 + -25080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C75DFC"))) PPC_WEAK_FUNC(sub_83C75DFC);
PPC_FUNC_IMPL(__imp__sub_83C75DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C75E00"))) PPC_WEAK_FUNC(sub_83C75E00);
PPC_FUNC_IMPL(__imp__sub_83C75E00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-25072
	ctx.r3.s64 = ctx.r11.s64 + -25072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C75E0C"))) PPC_WEAK_FUNC(sub_83C75E0C);
PPC_FUNC_IMPL(__imp__sub_83C75E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C75E10"))) PPC_WEAK_FUNC(sub_83C75E10);
PPC_FUNC_IMPL(__imp__sub_83C75E10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-25064
	ctx.r3.s64 = ctx.r11.s64 + -25064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C75E1C"))) PPC_WEAK_FUNC(sub_83C75E1C);
PPC_FUNC_IMPL(__imp__sub_83C75E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C75E20"))) PPC_WEAK_FUNC(sub_83C75E20);
PPC_FUNC_IMPL(__imp__sub_83C75E20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-25056
	ctx.r3.s64 = ctx.r11.s64 + -25056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C75E2C"))) PPC_WEAK_FUNC(sub_83C75E2C);
PPC_FUNC_IMPL(__imp__sub_83C75E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C75E30"))) PPC_WEAK_FUNC(sub_83C75E30);
PPC_FUNC_IMPL(__imp__sub_83C75E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-25048
	ctx.r3.s64 = ctx.r11.s64 + -25048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C75E3C"))) PPC_WEAK_FUNC(sub_83C75E3C);
PPC_FUNC_IMPL(__imp__sub_83C75E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C75E40"))) PPC_WEAK_FUNC(sub_83C75E40);
PPC_FUNC_IMPL(__imp__sub_83C75E40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-25040
	ctx.r3.s64 = ctx.r11.s64 + -25040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C75E4C"))) PPC_WEAK_FUNC(sub_83C75E4C);
PPC_FUNC_IMPL(__imp__sub_83C75E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C75E50"))) PPC_WEAK_FUNC(sub_83C75E50);
PPC_FUNC_IMPL(__imp__sub_83C75E50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-25032
	ctx.r3.s64 = ctx.r11.s64 + -25032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C75E5C"))) PPC_WEAK_FUNC(sub_83C75E5C);
PPC_FUNC_IMPL(__imp__sub_83C75E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C75E60"))) PPC_WEAK_FUNC(sub_83C75E60);
PPC_FUNC_IMPL(__imp__sub_83C75E60) {
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
	// addi r3,r11,-2048
	ctx.r3.s64 = ctx.r11.s64 + -2048;
	// bl 0x83523120
	ctx.lr = 0x83C75E78;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-25024
	ctx.r3.s64 = ctx.r10.s64 + -25024;
	// bl 0x831cdcc8
	ctx.lr = 0x83C75E84;
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

__attribute__((alias("__imp__sub_83C75E94"))) PPC_WEAK_FUNC(sub_83C75E94);
PPC_FUNC_IMPL(__imp__sub_83C75E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C75E98"))) PPC_WEAK_FUNC(sub_83C75E98);
PPC_FUNC_IMPL(__imp__sub_83C75E98) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-2032
	ctx.r7.s64 = ctx.r8.s64 + -2032;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-2032(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2032);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-2032(r8)
	PPC_STORE_U32(ctx.r8.u32 + -2032, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C75EC0"))) PPC_WEAK_FUNC(sub_83C75EC0);
PPC_FUNC_IMPL(__imp__sub_83C75EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-11760
	ctx.r6.s64 = ctx.r7.s64 + -11760;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-11832(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -11832);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-2032(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -2032);
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
	// std r9,-11760(r7)
	PPC_STORE_U64(ctx.r7.u32 + -11760, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C75F08"))) PPC_WEAK_FUNC(sub_83C75F08);
PPC_FUNC_IMPL(__imp__sub_83C75F08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-25008
	ctx.r3.s64 = ctx.r11.s64 + -25008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C75F14"))) PPC_WEAK_FUNC(sub_83C75F14);
PPC_FUNC_IMPL(__imp__sub_83C75F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C75F18"))) PPC_WEAK_FUNC(sub_83C75F18);
PPC_FUNC_IMPL(__imp__sub_83C75F18) {
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
	// addi r3,r11,-2024
	ctx.r3.s64 = ctx.r11.s64 + -2024;
	// bl 0x8259af80
	ctx.lr = 0x83C75F30;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-24992
	ctx.r3.s64 = ctx.r10.s64 + -24992;
	// bl 0x831cdcc8
	ctx.lr = 0x83C75F3C;
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

__attribute__((alias("__imp__sub_83C75F4C"))) PPC_WEAK_FUNC(sub_83C75F4C);
PPC_FUNC_IMPL(__imp__sub_83C75F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C75F50"))) PPC_WEAK_FUNC(sub_83C75F50);
PPC_FUNC_IMPL(__imp__sub_83C75F50) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-2044
	ctx.r11.s64 = ctx.r8.s64 + -2044;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-11784(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11784);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-25000
	ctx.r3.s64 = ctx.r6.s64 + -25000;
	// stw r10,-2044(r8)
	PPC_STORE_U32(ctx.r8.u32 + -2044, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C75F80"))) PPC_WEAK_FUNC(sub_83C75F80);
PPC_FUNC_IMPL(__imp__sub_83C75F80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24984
	ctx.r3.s64 = ctx.r11.s64 + -24984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C75F8C"))) PPC_WEAK_FUNC(sub_83C75F8C);
PPC_FUNC_IMPL(__imp__sub_83C75F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C75F90"))) PPC_WEAK_FUNC(sub_83C75F90);
PPC_FUNC_IMPL(__imp__sub_83C75F90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24976
	ctx.r3.s64 = ctx.r11.s64 + -24976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C75F9C"))) PPC_WEAK_FUNC(sub_83C75F9C);
PPC_FUNC_IMPL(__imp__sub_83C75F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C75FA0"))) PPC_WEAK_FUNC(sub_83C75FA0);
PPC_FUNC_IMPL(__imp__sub_83C75FA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24968
	ctx.r3.s64 = ctx.r11.s64 + -24968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C75FAC"))) PPC_WEAK_FUNC(sub_83C75FAC);
PPC_FUNC_IMPL(__imp__sub_83C75FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C75FB0"))) PPC_WEAK_FUNC(sub_83C75FB0);
PPC_FUNC_IMPL(__imp__sub_83C75FB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24960
	ctx.r3.s64 = ctx.r11.s64 + -24960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C75FBC"))) PPC_WEAK_FUNC(sub_83C75FBC);
PPC_FUNC_IMPL(__imp__sub_83C75FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C75FC0"))) PPC_WEAK_FUNC(sub_83C75FC0);
PPC_FUNC_IMPL(__imp__sub_83C75FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24952
	ctx.r3.s64 = ctx.r11.s64 + -24952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C75FCC"))) PPC_WEAK_FUNC(sub_83C75FCC);
PPC_FUNC_IMPL(__imp__sub_83C75FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C75FD0"))) PPC_WEAK_FUNC(sub_83C75FD0);
PPC_FUNC_IMPL(__imp__sub_83C75FD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24944
	ctx.r3.s64 = ctx.r11.s64 + -24944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C75FDC"))) PPC_WEAK_FUNC(sub_83C75FDC);
PPC_FUNC_IMPL(__imp__sub_83C75FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C75FE0"))) PPC_WEAK_FUNC(sub_83C75FE0);
PPC_FUNC_IMPL(__imp__sub_83C75FE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C75FEC"))) PPC_WEAK_FUNC(sub_83C75FEC);
PPC_FUNC_IMPL(__imp__sub_83C75FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C75FF0"))) PPC_WEAK_FUNC(sub_83C75FF0);
PPC_FUNC_IMPL(__imp__sub_83C75FF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24928
	ctx.r3.s64 = ctx.r11.s64 + -24928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C75FFC"))) PPC_WEAK_FUNC(sub_83C75FFC);
PPC_FUNC_IMPL(__imp__sub_83C75FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76000"))) PPC_WEAK_FUNC(sub_83C76000);
PPC_FUNC_IMPL(__imp__sub_83C76000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24920
	ctx.r3.s64 = ctx.r11.s64 + -24920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7600C"))) PPC_WEAK_FUNC(sub_83C7600C);
PPC_FUNC_IMPL(__imp__sub_83C7600C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76010"))) PPC_WEAK_FUNC(sub_83C76010);
PPC_FUNC_IMPL(__imp__sub_83C76010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24912
	ctx.r3.s64 = ctx.r11.s64 + -24912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7601C"))) PPC_WEAK_FUNC(sub_83C7601C);
PPC_FUNC_IMPL(__imp__sub_83C7601C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76020"))) PPC_WEAK_FUNC(sub_83C76020);
PPC_FUNC_IMPL(__imp__sub_83C76020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24904
	ctx.r3.s64 = ctx.r11.s64 + -24904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7602C"))) PPC_WEAK_FUNC(sub_83C7602C);
PPC_FUNC_IMPL(__imp__sub_83C7602C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76030"))) PPC_WEAK_FUNC(sub_83C76030);
PPC_FUNC_IMPL(__imp__sub_83C76030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24896
	ctx.r3.s64 = ctx.r11.s64 + -24896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7603C"))) PPC_WEAK_FUNC(sub_83C7603C);
PPC_FUNC_IMPL(__imp__sub_83C7603C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76040"))) PPC_WEAK_FUNC(sub_83C76040);
PPC_FUNC_IMPL(__imp__sub_83C76040) {
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
	// addi r3,r11,-1680
	ctx.r3.s64 = ctx.r11.s64 + -1680;
	// bl 0x83523120
	ctx.lr = 0x83C76058;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-24888
	ctx.r3.s64 = ctx.r10.s64 + -24888;
	// bl 0x831cdcc8
	ctx.lr = 0x83C76064;
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

__attribute__((alias("__imp__sub_83C76074"))) PPC_WEAK_FUNC(sub_83C76074);
PPC_FUNC_IMPL(__imp__sub_83C76074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76078"))) PPC_WEAK_FUNC(sub_83C76078);
PPC_FUNC_IMPL(__imp__sub_83C76078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24872
	ctx.r3.s64 = ctx.r11.s64 + -24872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76084"))) PPC_WEAK_FUNC(sub_83C76084);
PPC_FUNC_IMPL(__imp__sub_83C76084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76088"))) PPC_WEAK_FUNC(sub_83C76088);
PPC_FUNC_IMPL(__imp__sub_83C76088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24864
	ctx.r3.s64 = ctx.r11.s64 + -24864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76094"))) PPC_WEAK_FUNC(sub_83C76094);
PPC_FUNC_IMPL(__imp__sub_83C76094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76098"))) PPC_WEAK_FUNC(sub_83C76098);
PPC_FUNC_IMPL(__imp__sub_83C76098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24856
	ctx.r3.s64 = ctx.r11.s64 + -24856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C760A4"))) PPC_WEAK_FUNC(sub_83C760A4);
PPC_FUNC_IMPL(__imp__sub_83C760A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C760A8"))) PPC_WEAK_FUNC(sub_83C760A8);
PPC_FUNC_IMPL(__imp__sub_83C760A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24848
	ctx.r3.s64 = ctx.r11.s64 + -24848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C760B4"))) PPC_WEAK_FUNC(sub_83C760B4);
PPC_FUNC_IMPL(__imp__sub_83C760B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C760B8"))) PPC_WEAK_FUNC(sub_83C760B8);
PPC_FUNC_IMPL(__imp__sub_83C760B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24840
	ctx.r3.s64 = ctx.r11.s64 + -24840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C760C4"))) PPC_WEAK_FUNC(sub_83C760C4);
PPC_FUNC_IMPL(__imp__sub_83C760C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C760C8"))) PPC_WEAK_FUNC(sub_83C760C8);
PPC_FUNC_IMPL(__imp__sub_83C760C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24832
	ctx.r3.s64 = ctx.r11.s64 + -24832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C760D4"))) PPC_WEAK_FUNC(sub_83C760D4);
PPC_FUNC_IMPL(__imp__sub_83C760D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C760D8"))) PPC_WEAK_FUNC(sub_83C760D8);
PPC_FUNC_IMPL(__imp__sub_83C760D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24824
	ctx.r3.s64 = ctx.r11.s64 + -24824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C760E4"))) PPC_WEAK_FUNC(sub_83C760E4);
PPC_FUNC_IMPL(__imp__sub_83C760E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C760E8"))) PPC_WEAK_FUNC(sub_83C760E8);
PPC_FUNC_IMPL(__imp__sub_83C760E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24816
	ctx.r3.s64 = ctx.r11.s64 + -24816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C760F4"))) PPC_WEAK_FUNC(sub_83C760F4);
PPC_FUNC_IMPL(__imp__sub_83C760F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C760F8"))) PPC_WEAK_FUNC(sub_83C760F8);
PPC_FUNC_IMPL(__imp__sub_83C760F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24808
	ctx.r3.s64 = ctx.r11.s64 + -24808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76104"))) PPC_WEAK_FUNC(sub_83C76104);
PPC_FUNC_IMPL(__imp__sub_83C76104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76108"))) PPC_WEAK_FUNC(sub_83C76108);
PPC_FUNC_IMPL(__imp__sub_83C76108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24800
	ctx.r3.s64 = ctx.r11.s64 + -24800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76114"))) PPC_WEAK_FUNC(sub_83C76114);
PPC_FUNC_IMPL(__imp__sub_83C76114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76118"))) PPC_WEAK_FUNC(sub_83C76118);
PPC_FUNC_IMPL(__imp__sub_83C76118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24792
	ctx.r3.s64 = ctx.r11.s64 + -24792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76124"))) PPC_WEAK_FUNC(sub_83C76124);
PPC_FUNC_IMPL(__imp__sub_83C76124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76128"))) PPC_WEAK_FUNC(sub_83C76128);
PPC_FUNC_IMPL(__imp__sub_83C76128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24784
	ctx.r3.s64 = ctx.r11.s64 + -24784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76134"))) PPC_WEAK_FUNC(sub_83C76134);
PPC_FUNC_IMPL(__imp__sub_83C76134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76138"))) PPC_WEAK_FUNC(sub_83C76138);
PPC_FUNC_IMPL(__imp__sub_83C76138) {
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
	// addi r4,r11,28164
	ctx.r4.s64 = ctx.r11.s64 + 28164;
	// addi r3,r10,-11528
	ctx.r3.s64 = ctx.r10.s64 + -11528;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C7615C;
	sub_8259CC28(ctx, base);
	// lis r9,-31787
	ctx.r9.s64 = -2083192832;
	// addi r3,r9,-24736
	ctx.r3.s64 = ctx.r9.s64 + -24736;
	// bl 0x831cdcc8
	ctx.lr = 0x83C76168;
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

__attribute__((alias("__imp__sub_83C76178"))) PPC_WEAK_FUNC(sub_83C76178);
PPC_FUNC_IMPL(__imp__sub_83C76178) {
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
	// addi r3,r11,-1672
	ctx.r3.s64 = ctx.r11.s64 + -1672;
	// bl 0x83523120
	ctx.lr = 0x83C76190;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-24776
	ctx.r3.s64 = ctx.r10.s64 + -24776;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7619C;
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

__attribute__((alias("__imp__sub_83C761AC"))) PPC_WEAK_FUNC(sub_83C761AC);
PPC_FUNC_IMPL(__imp__sub_83C761AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C761B0"))) PPC_WEAK_FUNC(sub_83C761B0);
PPC_FUNC_IMPL(__imp__sub_83C761B0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-1656
	ctx.r7.s64 = ctx.r8.s64 + -1656;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-1656(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -1656);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-1656(r8)
	PPC_STORE_U32(ctx.r8.u32 + -1656, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C761D8"))) PPC_WEAK_FUNC(sub_83C761D8);
PPC_FUNC_IMPL(__imp__sub_83C761D8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-11500
	ctx.r6.s64 = ctx.r7.s64 + -11500;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-11600(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -11600);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-1656(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -1656);
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
	// std r9,-11500(r7)
	PPC_STORE_U64(ctx.r7.u32 + -11500, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C76220"))) PPC_WEAK_FUNC(sub_83C76220);
PPC_FUNC_IMPL(__imp__sub_83C76220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24760
	ctx.r3.s64 = ctx.r11.s64 + -24760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7622C"))) PPC_WEAK_FUNC(sub_83C7622C);
PPC_FUNC_IMPL(__imp__sub_83C7622C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76230"))) PPC_WEAK_FUNC(sub_83C76230);
PPC_FUNC_IMPL(__imp__sub_83C76230) {
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
	// addi r3,r11,-1648
	ctx.r3.s64 = ctx.r11.s64 + -1648;
	// bl 0x8259af80
	ctx.lr = 0x83C76248;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-24744
	ctx.r3.s64 = ctx.r10.s64 + -24744;
	// bl 0x831cdcc8
	ctx.lr = 0x83C76254;
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

__attribute__((alias("__imp__sub_83C76264"))) PPC_WEAK_FUNC(sub_83C76264);
PPC_FUNC_IMPL(__imp__sub_83C76264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76268"))) PPC_WEAK_FUNC(sub_83C76268);
PPC_FUNC_IMPL(__imp__sub_83C76268) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-1668
	ctx.r11.s64 = ctx.r8.s64 + -1668;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-11552(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11552);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-24752
	ctx.r3.s64 = ctx.r6.s64 + -24752;
	// stw r10,-1668(r8)
	PPC_STORE_U32(ctx.r8.u32 + -1668, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76298"))) PPC_WEAK_FUNC(sub_83C76298);
PPC_FUNC_IMPL(__imp__sub_83C76298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24632
	ctx.r3.s64 = ctx.r11.s64 + -24632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C762A4"))) PPC_WEAK_FUNC(sub_83C762A4);
PPC_FUNC_IMPL(__imp__sub_83C762A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C762A8"))) PPC_WEAK_FUNC(sub_83C762A8);
PPC_FUNC_IMPL(__imp__sub_83C762A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24624
	ctx.r3.s64 = ctx.r11.s64 + -24624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C762B4"))) PPC_WEAK_FUNC(sub_83C762B4);
PPC_FUNC_IMPL(__imp__sub_83C762B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C762B8"))) PPC_WEAK_FUNC(sub_83C762B8);
PPC_FUNC_IMPL(__imp__sub_83C762B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24616
	ctx.r3.s64 = ctx.r11.s64 + -24616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C762C4"))) PPC_WEAK_FUNC(sub_83C762C4);
PPC_FUNC_IMPL(__imp__sub_83C762C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C762C8"))) PPC_WEAK_FUNC(sub_83C762C8);
PPC_FUNC_IMPL(__imp__sub_83C762C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24608
	ctx.r3.s64 = ctx.r11.s64 + -24608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C762D4"))) PPC_WEAK_FUNC(sub_83C762D4);
PPC_FUNC_IMPL(__imp__sub_83C762D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C762D8"))) PPC_WEAK_FUNC(sub_83C762D8);
PPC_FUNC_IMPL(__imp__sub_83C762D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24600
	ctx.r3.s64 = ctx.r11.s64 + -24600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C762E4"))) PPC_WEAK_FUNC(sub_83C762E4);
PPC_FUNC_IMPL(__imp__sub_83C762E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C762E8"))) PPC_WEAK_FUNC(sub_83C762E8);
PPC_FUNC_IMPL(__imp__sub_83C762E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24592
	ctx.r3.s64 = ctx.r11.s64 + -24592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C762F4"))) PPC_WEAK_FUNC(sub_83C762F4);
PPC_FUNC_IMPL(__imp__sub_83C762F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C762F8"))) PPC_WEAK_FUNC(sub_83C762F8);
PPC_FUNC_IMPL(__imp__sub_83C762F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24584
	ctx.r3.s64 = ctx.r11.s64 + -24584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76304"))) PPC_WEAK_FUNC(sub_83C76304);
PPC_FUNC_IMPL(__imp__sub_83C76304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76308"))) PPC_WEAK_FUNC(sub_83C76308);
PPC_FUNC_IMPL(__imp__sub_83C76308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24576
	ctx.r3.s64 = ctx.r11.s64 + -24576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76314"))) PPC_WEAK_FUNC(sub_83C76314);
PPC_FUNC_IMPL(__imp__sub_83C76314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76318"))) PPC_WEAK_FUNC(sub_83C76318);
PPC_FUNC_IMPL(__imp__sub_83C76318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24568
	ctx.r3.s64 = ctx.r11.s64 + -24568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76324"))) PPC_WEAK_FUNC(sub_83C76324);
PPC_FUNC_IMPL(__imp__sub_83C76324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76328"))) PPC_WEAK_FUNC(sub_83C76328);
PPC_FUNC_IMPL(__imp__sub_83C76328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24560
	ctx.r3.s64 = ctx.r11.s64 + -24560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76334"))) PPC_WEAK_FUNC(sub_83C76334);
PPC_FUNC_IMPL(__imp__sub_83C76334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76338"))) PPC_WEAK_FUNC(sub_83C76338);
PPC_FUNC_IMPL(__imp__sub_83C76338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24552
	ctx.r3.s64 = ctx.r11.s64 + -24552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76344"))) PPC_WEAK_FUNC(sub_83C76344);
PPC_FUNC_IMPL(__imp__sub_83C76344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76348"))) PPC_WEAK_FUNC(sub_83C76348);
PPC_FUNC_IMPL(__imp__sub_83C76348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24544
	ctx.r3.s64 = ctx.r11.s64 + -24544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76354"))) PPC_WEAK_FUNC(sub_83C76354);
PPC_FUNC_IMPL(__imp__sub_83C76354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76358"))) PPC_WEAK_FUNC(sub_83C76358);
PPC_FUNC_IMPL(__imp__sub_83C76358) {
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
	// addi r3,r11,-1304
	ctx.r3.s64 = ctx.r11.s64 + -1304;
	// bl 0x83523120
	ctx.lr = 0x83C76370;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-24536
	ctx.r3.s64 = ctx.r10.s64 + -24536;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7637C;
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

__attribute__((alias("__imp__sub_83C7638C"))) PPC_WEAK_FUNC(sub_83C7638C);
PPC_FUNC_IMPL(__imp__sub_83C7638C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76390"))) PPC_WEAK_FUNC(sub_83C76390);
PPC_FUNC_IMPL(__imp__sub_83C76390) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-1288
	ctx.r7.s64 = ctx.r8.s64 + -1288;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-1288(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -1288);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-1288(r8)
	PPC_STORE_U32(ctx.r8.u32 + -1288, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C763B8"))) PPC_WEAK_FUNC(sub_83C763B8);
PPC_FUNC_IMPL(__imp__sub_83C763B8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-11372
	ctx.r6.s64 = ctx.r7.s64 + -11372;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-11444(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -11444);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-1288(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -1288);
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
	// std r9,-11372(r7)
	PPC_STORE_U64(ctx.r7.u32 + -11372, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C76400"))) PPC_WEAK_FUNC(sub_83C76400);
PPC_FUNC_IMPL(__imp__sub_83C76400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24520
	ctx.r3.s64 = ctx.r11.s64 + -24520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7640C"))) PPC_WEAK_FUNC(sub_83C7640C);
PPC_FUNC_IMPL(__imp__sub_83C7640C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76410"))) PPC_WEAK_FUNC(sub_83C76410);
PPC_FUNC_IMPL(__imp__sub_83C76410) {
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
	// addi r3,r11,-1280
	ctx.r3.s64 = ctx.r11.s64 + -1280;
	// bl 0x8259af80
	ctx.lr = 0x83C76428;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-24504
	ctx.r3.s64 = ctx.r10.s64 + -24504;
	// bl 0x831cdcc8
	ctx.lr = 0x83C76434;
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

__attribute__((alias("__imp__sub_83C76444"))) PPC_WEAK_FUNC(sub_83C76444);
PPC_FUNC_IMPL(__imp__sub_83C76444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76448"))) PPC_WEAK_FUNC(sub_83C76448);
PPC_FUNC_IMPL(__imp__sub_83C76448) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-1300
	ctx.r11.s64 = ctx.r8.s64 + -1300;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-11396(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11396);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-24512
	ctx.r3.s64 = ctx.r6.s64 + -24512;
	// stw r10,-1300(r8)
	PPC_STORE_U32(ctx.r8.u32 + -1300, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76478"))) PPC_WEAK_FUNC(sub_83C76478);
PPC_FUNC_IMPL(__imp__sub_83C76478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24496
	ctx.r3.s64 = ctx.r11.s64 + -24496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76484"))) PPC_WEAK_FUNC(sub_83C76484);
PPC_FUNC_IMPL(__imp__sub_83C76484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76488"))) PPC_WEAK_FUNC(sub_83C76488);
PPC_FUNC_IMPL(__imp__sub_83C76488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24488
	ctx.r3.s64 = ctx.r11.s64 + -24488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76494"))) PPC_WEAK_FUNC(sub_83C76494);
PPC_FUNC_IMPL(__imp__sub_83C76494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76498"))) PPC_WEAK_FUNC(sub_83C76498);
PPC_FUNC_IMPL(__imp__sub_83C76498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24480
	ctx.r3.s64 = ctx.r11.s64 + -24480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C764A4"))) PPC_WEAK_FUNC(sub_83C764A4);
PPC_FUNC_IMPL(__imp__sub_83C764A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C764A8"))) PPC_WEAK_FUNC(sub_83C764A8);
PPC_FUNC_IMPL(__imp__sub_83C764A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24472
	ctx.r3.s64 = ctx.r11.s64 + -24472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C764B4"))) PPC_WEAK_FUNC(sub_83C764B4);
PPC_FUNC_IMPL(__imp__sub_83C764B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C764B8"))) PPC_WEAK_FUNC(sub_83C764B8);
PPC_FUNC_IMPL(__imp__sub_83C764B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24464
	ctx.r3.s64 = ctx.r11.s64 + -24464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C764C4"))) PPC_WEAK_FUNC(sub_83C764C4);
PPC_FUNC_IMPL(__imp__sub_83C764C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C764C8"))) PPC_WEAK_FUNC(sub_83C764C8);
PPC_FUNC_IMPL(__imp__sub_83C764C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24456
	ctx.r3.s64 = ctx.r11.s64 + -24456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C764D4"))) PPC_WEAK_FUNC(sub_83C764D4);
PPC_FUNC_IMPL(__imp__sub_83C764D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C764D8"))) PPC_WEAK_FUNC(sub_83C764D8);
PPC_FUNC_IMPL(__imp__sub_83C764D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24448
	ctx.r3.s64 = ctx.r11.s64 + -24448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C764E4"))) PPC_WEAK_FUNC(sub_83C764E4);
PPC_FUNC_IMPL(__imp__sub_83C764E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C764E8"))) PPC_WEAK_FUNC(sub_83C764E8);
PPC_FUNC_IMPL(__imp__sub_83C764E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24440
	ctx.r3.s64 = ctx.r11.s64 + -24440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C764F4"))) PPC_WEAK_FUNC(sub_83C764F4);
PPC_FUNC_IMPL(__imp__sub_83C764F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C764F8"))) PPC_WEAK_FUNC(sub_83C764F8);
PPC_FUNC_IMPL(__imp__sub_83C764F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24432
	ctx.r3.s64 = ctx.r11.s64 + -24432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76504"))) PPC_WEAK_FUNC(sub_83C76504);
PPC_FUNC_IMPL(__imp__sub_83C76504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76508"))) PPC_WEAK_FUNC(sub_83C76508);
PPC_FUNC_IMPL(__imp__sub_83C76508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24424
	ctx.r3.s64 = ctx.r11.s64 + -24424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76514"))) PPC_WEAK_FUNC(sub_83C76514);
PPC_FUNC_IMPL(__imp__sub_83C76514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76518"))) PPC_WEAK_FUNC(sub_83C76518);
PPC_FUNC_IMPL(__imp__sub_83C76518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24416
	ctx.r3.s64 = ctx.r11.s64 + -24416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76524"))) PPC_WEAK_FUNC(sub_83C76524);
PPC_FUNC_IMPL(__imp__sub_83C76524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76528"))) PPC_WEAK_FUNC(sub_83C76528);
PPC_FUNC_IMPL(__imp__sub_83C76528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24408
	ctx.r3.s64 = ctx.r11.s64 + -24408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76534"))) PPC_WEAK_FUNC(sub_83C76534);
PPC_FUNC_IMPL(__imp__sub_83C76534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76538"))) PPC_WEAK_FUNC(sub_83C76538);
PPC_FUNC_IMPL(__imp__sub_83C76538) {
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
	// addi r3,r11,-936
	ctx.r3.s64 = ctx.r11.s64 + -936;
	// bl 0x83523120
	ctx.lr = 0x83C76550;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-24400
	ctx.r3.s64 = ctx.r10.s64 + -24400;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7655C;
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

__attribute__((alias("__imp__sub_83C7656C"))) PPC_WEAK_FUNC(sub_83C7656C);
PPC_FUNC_IMPL(__imp__sub_83C7656C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76570"))) PPC_WEAK_FUNC(sub_83C76570);
PPC_FUNC_IMPL(__imp__sub_83C76570) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-932
	ctx.r7.s64 = ctx.r8.s64 + -932;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-932(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -932);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-932(r8)
	PPC_STORE_U32(ctx.r8.u32 + -932, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C76598"))) PPC_WEAK_FUNC(sub_83C76598);
PPC_FUNC_IMPL(__imp__sub_83C76598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24384
	ctx.r3.s64 = ctx.r11.s64 + -24384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C765A4"))) PPC_WEAK_FUNC(sub_83C765A4);
PPC_FUNC_IMPL(__imp__sub_83C765A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C765A8"))) PPC_WEAK_FUNC(sub_83C765A8);
PPC_FUNC_IMPL(__imp__sub_83C765A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24376
	ctx.r3.s64 = ctx.r11.s64 + -24376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C765B4"))) PPC_WEAK_FUNC(sub_83C765B4);
PPC_FUNC_IMPL(__imp__sub_83C765B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C765B8"))) PPC_WEAK_FUNC(sub_83C765B8);
PPC_FUNC_IMPL(__imp__sub_83C765B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24368
	ctx.r3.s64 = ctx.r11.s64 + -24368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C765C4"))) PPC_WEAK_FUNC(sub_83C765C4);
PPC_FUNC_IMPL(__imp__sub_83C765C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C765C8"))) PPC_WEAK_FUNC(sub_83C765C8);
PPC_FUNC_IMPL(__imp__sub_83C765C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24360
	ctx.r3.s64 = ctx.r11.s64 + -24360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C765D4"))) PPC_WEAK_FUNC(sub_83C765D4);
PPC_FUNC_IMPL(__imp__sub_83C765D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C765D8"))) PPC_WEAK_FUNC(sub_83C765D8);
PPC_FUNC_IMPL(__imp__sub_83C765D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24352
	ctx.r3.s64 = ctx.r11.s64 + -24352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C765E4"))) PPC_WEAK_FUNC(sub_83C765E4);
PPC_FUNC_IMPL(__imp__sub_83C765E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C765E8"))) PPC_WEAK_FUNC(sub_83C765E8);
PPC_FUNC_IMPL(__imp__sub_83C765E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24344
	ctx.r3.s64 = ctx.r11.s64 + -24344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C765F4"))) PPC_WEAK_FUNC(sub_83C765F4);
PPC_FUNC_IMPL(__imp__sub_83C765F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C765F8"))) PPC_WEAK_FUNC(sub_83C765F8);
PPC_FUNC_IMPL(__imp__sub_83C765F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24336
	ctx.r3.s64 = ctx.r11.s64 + -24336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76604"))) PPC_WEAK_FUNC(sub_83C76604);
PPC_FUNC_IMPL(__imp__sub_83C76604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76608"))) PPC_WEAK_FUNC(sub_83C76608);
PPC_FUNC_IMPL(__imp__sub_83C76608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24328
	ctx.r3.s64 = ctx.r11.s64 + -24328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76614"))) PPC_WEAK_FUNC(sub_83C76614);
PPC_FUNC_IMPL(__imp__sub_83C76614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76618"))) PPC_WEAK_FUNC(sub_83C76618);
PPC_FUNC_IMPL(__imp__sub_83C76618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24320
	ctx.r3.s64 = ctx.r11.s64 + -24320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76624"))) PPC_WEAK_FUNC(sub_83C76624);
PPC_FUNC_IMPL(__imp__sub_83C76624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76628"))) PPC_WEAK_FUNC(sub_83C76628);
PPC_FUNC_IMPL(__imp__sub_83C76628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24312
	ctx.r3.s64 = ctx.r11.s64 + -24312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76634"))) PPC_WEAK_FUNC(sub_83C76634);
PPC_FUNC_IMPL(__imp__sub_83C76634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76638"))) PPC_WEAK_FUNC(sub_83C76638);
PPC_FUNC_IMPL(__imp__sub_83C76638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24304
	ctx.r3.s64 = ctx.r11.s64 + -24304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76644"))) PPC_WEAK_FUNC(sub_83C76644);
PPC_FUNC_IMPL(__imp__sub_83C76644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76648"))) PPC_WEAK_FUNC(sub_83C76648);
PPC_FUNC_IMPL(__imp__sub_83C76648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24296
	ctx.r3.s64 = ctx.r11.s64 + -24296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76654"))) PPC_WEAK_FUNC(sub_83C76654);
PPC_FUNC_IMPL(__imp__sub_83C76654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76658"))) PPC_WEAK_FUNC(sub_83C76658);
PPC_FUNC_IMPL(__imp__sub_83C76658) {
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
	// addi r3,r11,-924
	ctx.r3.s64 = ctx.r11.s64 + -924;
	// bl 0x83523120
	ctx.lr = 0x83C76670;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-24288
	ctx.r3.s64 = ctx.r10.s64 + -24288;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7667C;
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

__attribute__((alias("__imp__sub_83C7668C"))) PPC_WEAK_FUNC(sub_83C7668C);
PPC_FUNC_IMPL(__imp__sub_83C7668C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76690"))) PPC_WEAK_FUNC(sub_83C76690);
PPC_FUNC_IMPL(__imp__sub_83C76690) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-920
	ctx.r7.s64 = ctx.r8.s64 + -920;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-920(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -920);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-920(r8)
	PPC_STORE_U32(ctx.r8.u32 + -920, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C766B8"))) PPC_WEAK_FUNC(sub_83C766B8);
PPC_FUNC_IMPL(__imp__sub_83C766B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24272
	ctx.r3.s64 = ctx.r11.s64 + -24272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C766C4"))) PPC_WEAK_FUNC(sub_83C766C4);
PPC_FUNC_IMPL(__imp__sub_83C766C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C766C8"))) PPC_WEAK_FUNC(sub_83C766C8);
PPC_FUNC_IMPL(__imp__sub_83C766C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24264
	ctx.r3.s64 = ctx.r11.s64 + -24264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C766D4"))) PPC_WEAK_FUNC(sub_83C766D4);
PPC_FUNC_IMPL(__imp__sub_83C766D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C766D8"))) PPC_WEAK_FUNC(sub_83C766D8);
PPC_FUNC_IMPL(__imp__sub_83C766D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24256
	ctx.r3.s64 = ctx.r11.s64 + -24256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C766E4"))) PPC_WEAK_FUNC(sub_83C766E4);
PPC_FUNC_IMPL(__imp__sub_83C766E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C766E8"))) PPC_WEAK_FUNC(sub_83C766E8);
PPC_FUNC_IMPL(__imp__sub_83C766E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24248
	ctx.r3.s64 = ctx.r11.s64 + -24248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C766F4"))) PPC_WEAK_FUNC(sub_83C766F4);
PPC_FUNC_IMPL(__imp__sub_83C766F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C766F8"))) PPC_WEAK_FUNC(sub_83C766F8);
PPC_FUNC_IMPL(__imp__sub_83C766F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24240
	ctx.r3.s64 = ctx.r11.s64 + -24240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

