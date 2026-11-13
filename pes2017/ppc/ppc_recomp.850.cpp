#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C81E90"))) PPC_WEAK_FUNC(sub_83C81E90);
PPC_FUNC_IMPL(__imp__sub_83C81E90) {
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
	// addi r3,r11,22612
	ctx.r3.s64 = ctx.r11.s64 + 22612;
	// bl 0x83523120
	ctx.lr = 0x83C81EA8;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-7424
	ctx.r3.s64 = ctx.r10.s64 + -7424;
	// bl 0x831cdcc8
	ctx.lr = 0x83C81EB4;
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

__attribute__((alias("__imp__sub_83C81EC4"))) PPC_WEAK_FUNC(sub_83C81EC4);
PPC_FUNC_IMPL(__imp__sub_83C81EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81EC8"))) PPC_WEAK_FUNC(sub_83C81EC8);
PPC_FUNC_IMPL(__imp__sub_83C81EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-7408
	ctx.r3.s64 = ctx.r11.s64 + -7408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81ED4"))) PPC_WEAK_FUNC(sub_83C81ED4);
PPC_FUNC_IMPL(__imp__sub_83C81ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81ED8"))) PPC_WEAK_FUNC(sub_83C81ED8);
PPC_FUNC_IMPL(__imp__sub_83C81ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-7400
	ctx.r3.s64 = ctx.r11.s64 + -7400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81EE4"))) PPC_WEAK_FUNC(sub_83C81EE4);
PPC_FUNC_IMPL(__imp__sub_83C81EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81EE8"))) PPC_WEAK_FUNC(sub_83C81EE8);
PPC_FUNC_IMPL(__imp__sub_83C81EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-7392
	ctx.r3.s64 = ctx.r11.s64 + -7392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81EF4"))) PPC_WEAK_FUNC(sub_83C81EF4);
PPC_FUNC_IMPL(__imp__sub_83C81EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81EF8"))) PPC_WEAK_FUNC(sub_83C81EF8);
PPC_FUNC_IMPL(__imp__sub_83C81EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-7384
	ctx.r3.s64 = ctx.r11.s64 + -7384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81F04"))) PPC_WEAK_FUNC(sub_83C81F04);
PPC_FUNC_IMPL(__imp__sub_83C81F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81F08"))) PPC_WEAK_FUNC(sub_83C81F08);
PPC_FUNC_IMPL(__imp__sub_83C81F08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-7376
	ctx.r3.s64 = ctx.r11.s64 + -7376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81F14"))) PPC_WEAK_FUNC(sub_83C81F14);
PPC_FUNC_IMPL(__imp__sub_83C81F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81F18"))) PPC_WEAK_FUNC(sub_83C81F18);
PPC_FUNC_IMPL(__imp__sub_83C81F18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-7368
	ctx.r3.s64 = ctx.r11.s64 + -7368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81F24"))) PPC_WEAK_FUNC(sub_83C81F24);
PPC_FUNC_IMPL(__imp__sub_83C81F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81F28"))) PPC_WEAK_FUNC(sub_83C81F28);
PPC_FUNC_IMPL(__imp__sub_83C81F28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-7360
	ctx.r3.s64 = ctx.r11.s64 + -7360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81F34"))) PPC_WEAK_FUNC(sub_83C81F34);
PPC_FUNC_IMPL(__imp__sub_83C81F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81F38"))) PPC_WEAK_FUNC(sub_83C81F38);
PPC_FUNC_IMPL(__imp__sub_83C81F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-7352
	ctx.r3.s64 = ctx.r11.s64 + -7352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81F44"))) PPC_WEAK_FUNC(sub_83C81F44);
PPC_FUNC_IMPL(__imp__sub_83C81F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81F48"))) PPC_WEAK_FUNC(sub_83C81F48);
PPC_FUNC_IMPL(__imp__sub_83C81F48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-7344
	ctx.r3.s64 = ctx.r11.s64 + -7344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81F54"))) PPC_WEAK_FUNC(sub_83C81F54);
PPC_FUNC_IMPL(__imp__sub_83C81F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81F58"))) PPC_WEAK_FUNC(sub_83C81F58);
PPC_FUNC_IMPL(__imp__sub_83C81F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-7336
	ctx.r3.s64 = ctx.r11.s64 + -7336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81F64"))) PPC_WEAK_FUNC(sub_83C81F64);
PPC_FUNC_IMPL(__imp__sub_83C81F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81F68"))) PPC_WEAK_FUNC(sub_83C81F68);
PPC_FUNC_IMPL(__imp__sub_83C81F68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-7328
	ctx.r3.s64 = ctx.r11.s64 + -7328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81F74"))) PPC_WEAK_FUNC(sub_83C81F74);
PPC_FUNC_IMPL(__imp__sub_83C81F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81F78"))) PPC_WEAK_FUNC(sub_83C81F78);
PPC_FUNC_IMPL(__imp__sub_83C81F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-7320
	ctx.r3.s64 = ctx.r11.s64 + -7320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81F84"))) PPC_WEAK_FUNC(sub_83C81F84);
PPC_FUNC_IMPL(__imp__sub_83C81F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81F88"))) PPC_WEAK_FUNC(sub_83C81F88);
PPC_FUNC_IMPL(__imp__sub_83C81F88) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,22652
	ctx.r7.s64 = ctx.r8.s64 + 22652;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,22652(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 22652);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,22652(r8)
	PPC_STORE_U32(ctx.r8.u32 + 22652, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C81FB0"))) PPC_WEAK_FUNC(sub_83C81FB0);
PPC_FUNC_IMPL(__imp__sub_83C81FB0) {
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
	// addi r3,r11,22648
	ctx.r3.s64 = ctx.r11.s64 + 22648;
	// bl 0x83523120
	ctx.lr = 0x83C81FC8;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-7312
	ctx.r3.s64 = ctx.r10.s64 + -7312;
	// bl 0x831cdcc8
	ctx.lr = 0x83C81FD4;
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

__attribute__((alias("__imp__sub_83C81FE4"))) PPC_WEAK_FUNC(sub_83C81FE4);
PPC_FUNC_IMPL(__imp__sub_83C81FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81FE8"))) PPC_WEAK_FUNC(sub_83C81FE8);
PPC_FUNC_IMPL(__imp__sub_83C81FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-7296
	ctx.r3.s64 = ctx.r11.s64 + -7296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C81FF4"))) PPC_WEAK_FUNC(sub_83C81FF4);
PPC_FUNC_IMPL(__imp__sub_83C81FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C81FF8"))) PPC_WEAK_FUNC(sub_83C81FF8);
PPC_FUNC_IMPL(__imp__sub_83C81FF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-7288
	ctx.r3.s64 = ctx.r11.s64 + -7288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82004"))) PPC_WEAK_FUNC(sub_83C82004);
PPC_FUNC_IMPL(__imp__sub_83C82004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82008"))) PPC_WEAK_FUNC(sub_83C82008);
PPC_FUNC_IMPL(__imp__sub_83C82008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-7280
	ctx.r3.s64 = ctx.r11.s64 + -7280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82014"))) PPC_WEAK_FUNC(sub_83C82014);
PPC_FUNC_IMPL(__imp__sub_83C82014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82018"))) PPC_WEAK_FUNC(sub_83C82018);
PPC_FUNC_IMPL(__imp__sub_83C82018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-7272
	ctx.r3.s64 = ctx.r11.s64 + -7272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82024"))) PPC_WEAK_FUNC(sub_83C82024);
PPC_FUNC_IMPL(__imp__sub_83C82024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82028"))) PPC_WEAK_FUNC(sub_83C82028);
PPC_FUNC_IMPL(__imp__sub_83C82028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-7264
	ctx.r3.s64 = ctx.r11.s64 + -7264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82034"))) PPC_WEAK_FUNC(sub_83C82034);
PPC_FUNC_IMPL(__imp__sub_83C82034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82038"))) PPC_WEAK_FUNC(sub_83C82038);
PPC_FUNC_IMPL(__imp__sub_83C82038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-7256
	ctx.r3.s64 = ctx.r11.s64 + -7256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82044"))) PPC_WEAK_FUNC(sub_83C82044);
PPC_FUNC_IMPL(__imp__sub_83C82044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82048"))) PPC_WEAK_FUNC(sub_83C82048);
PPC_FUNC_IMPL(__imp__sub_83C82048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-7248
	ctx.r3.s64 = ctx.r11.s64 + -7248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82054"))) PPC_WEAK_FUNC(sub_83C82054);
PPC_FUNC_IMPL(__imp__sub_83C82054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82058"))) PPC_WEAK_FUNC(sub_83C82058);
PPC_FUNC_IMPL(__imp__sub_83C82058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-7240
	ctx.r3.s64 = ctx.r11.s64 + -7240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82064"))) PPC_WEAK_FUNC(sub_83C82064);
PPC_FUNC_IMPL(__imp__sub_83C82064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82068"))) PPC_WEAK_FUNC(sub_83C82068);
PPC_FUNC_IMPL(__imp__sub_83C82068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-7232
	ctx.r3.s64 = ctx.r11.s64 + -7232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82074"))) PPC_WEAK_FUNC(sub_83C82074);
PPC_FUNC_IMPL(__imp__sub_83C82074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82078"))) PPC_WEAK_FUNC(sub_83C82078);
PPC_FUNC_IMPL(__imp__sub_83C82078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-7224
	ctx.r3.s64 = ctx.r11.s64 + -7224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82084"))) PPC_WEAK_FUNC(sub_83C82084);
PPC_FUNC_IMPL(__imp__sub_83C82084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82088"))) PPC_WEAK_FUNC(sub_83C82088);
PPC_FUNC_IMPL(__imp__sub_83C82088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-7216
	ctx.r3.s64 = ctx.r11.s64 + -7216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82094"))) PPC_WEAK_FUNC(sub_83C82094);
PPC_FUNC_IMPL(__imp__sub_83C82094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82098"))) PPC_WEAK_FUNC(sub_83C82098);
PPC_FUNC_IMPL(__imp__sub_83C82098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-7208
	ctx.r3.s64 = ctx.r11.s64 + -7208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C820A4"))) PPC_WEAK_FUNC(sub_83C820A4);
PPC_FUNC_IMPL(__imp__sub_83C820A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C820A8"))) PPC_WEAK_FUNC(sub_83C820A8);
PPC_FUNC_IMPL(__imp__sub_83C820A8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,22688
	ctx.r7.s64 = ctx.r8.s64 + 22688;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,22688(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 22688);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,22688(r8)
	PPC_STORE_U32(ctx.r8.u32 + 22688, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C820D0"))) PPC_WEAK_FUNC(sub_83C820D0);
PPC_FUNC_IMPL(__imp__sub_83C820D0) {
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
	// addi r3,r11,22684
	ctx.r3.s64 = ctx.r11.s64 + 22684;
	// bl 0x83523120
	ctx.lr = 0x83C820E8;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-7200
	ctx.r3.s64 = ctx.r10.s64 + -7200;
	// bl 0x831cdcc8
	ctx.lr = 0x83C820F4;
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

__attribute__((alias("__imp__sub_83C82104"))) PPC_WEAK_FUNC(sub_83C82104);
PPC_FUNC_IMPL(__imp__sub_83C82104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82108"))) PPC_WEAK_FUNC(sub_83C82108);
PPC_FUNC_IMPL(__imp__sub_83C82108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-7184
	ctx.r3.s64 = ctx.r11.s64 + -7184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82114"))) PPC_WEAK_FUNC(sub_83C82114);
PPC_FUNC_IMPL(__imp__sub_83C82114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82118"))) PPC_WEAK_FUNC(sub_83C82118);
PPC_FUNC_IMPL(__imp__sub_83C82118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-7176
	ctx.r3.s64 = ctx.r11.s64 + -7176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82124"))) PPC_WEAK_FUNC(sub_83C82124);
PPC_FUNC_IMPL(__imp__sub_83C82124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82128"))) PPC_WEAK_FUNC(sub_83C82128);
PPC_FUNC_IMPL(__imp__sub_83C82128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-7168
	ctx.r3.s64 = ctx.r11.s64 + -7168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82134"))) PPC_WEAK_FUNC(sub_83C82134);
PPC_FUNC_IMPL(__imp__sub_83C82134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82138"))) PPC_WEAK_FUNC(sub_83C82138);
PPC_FUNC_IMPL(__imp__sub_83C82138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-7160
	ctx.r3.s64 = ctx.r11.s64 + -7160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82144"))) PPC_WEAK_FUNC(sub_83C82144);
PPC_FUNC_IMPL(__imp__sub_83C82144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82148"))) PPC_WEAK_FUNC(sub_83C82148);
PPC_FUNC_IMPL(__imp__sub_83C82148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-7152
	ctx.r3.s64 = ctx.r11.s64 + -7152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82154"))) PPC_WEAK_FUNC(sub_83C82154);
PPC_FUNC_IMPL(__imp__sub_83C82154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82158"))) PPC_WEAK_FUNC(sub_83C82158);
PPC_FUNC_IMPL(__imp__sub_83C82158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-7144
	ctx.r3.s64 = ctx.r11.s64 + -7144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82164"))) PPC_WEAK_FUNC(sub_83C82164);
PPC_FUNC_IMPL(__imp__sub_83C82164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82168"))) PPC_WEAK_FUNC(sub_83C82168);
PPC_FUNC_IMPL(__imp__sub_83C82168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-7136
	ctx.r3.s64 = ctx.r11.s64 + -7136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82174"))) PPC_WEAK_FUNC(sub_83C82174);
PPC_FUNC_IMPL(__imp__sub_83C82174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82178"))) PPC_WEAK_FUNC(sub_83C82178);
PPC_FUNC_IMPL(__imp__sub_83C82178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-7128
	ctx.r3.s64 = ctx.r11.s64 + -7128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82184"))) PPC_WEAK_FUNC(sub_83C82184);
PPC_FUNC_IMPL(__imp__sub_83C82184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82188"))) PPC_WEAK_FUNC(sub_83C82188);
PPC_FUNC_IMPL(__imp__sub_83C82188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-7120
	ctx.r3.s64 = ctx.r11.s64 + -7120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82194"))) PPC_WEAK_FUNC(sub_83C82194);
PPC_FUNC_IMPL(__imp__sub_83C82194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82198"))) PPC_WEAK_FUNC(sub_83C82198);
PPC_FUNC_IMPL(__imp__sub_83C82198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-7112
	ctx.r3.s64 = ctx.r11.s64 + -7112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C821A4"))) PPC_WEAK_FUNC(sub_83C821A4);
PPC_FUNC_IMPL(__imp__sub_83C821A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C821A8"))) PPC_WEAK_FUNC(sub_83C821A8);
PPC_FUNC_IMPL(__imp__sub_83C821A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-7104
	ctx.r3.s64 = ctx.r11.s64 + -7104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C821B4"))) PPC_WEAK_FUNC(sub_83C821B4);
PPC_FUNC_IMPL(__imp__sub_83C821B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C821B8"))) PPC_WEAK_FUNC(sub_83C821B8);
PPC_FUNC_IMPL(__imp__sub_83C821B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-7096
	ctx.r3.s64 = ctx.r11.s64 + -7096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C821C4"))) PPC_WEAK_FUNC(sub_83C821C4);
PPC_FUNC_IMPL(__imp__sub_83C821C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C821C8"))) PPC_WEAK_FUNC(sub_83C821C8);
PPC_FUNC_IMPL(__imp__sub_83C821C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,22700
	ctx.r7.s64 = ctx.r8.s64 + 22700;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,22700(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 22700);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,22700(r8)
	PPC_STORE_U32(ctx.r8.u32 + 22700, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C821F0"))) PPC_WEAK_FUNC(sub_83C821F0);
PPC_FUNC_IMPL(__imp__sub_83C821F0) {
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
	// addi r3,r11,22696
	ctx.r3.s64 = ctx.r11.s64 + 22696;
	// bl 0x83523120
	ctx.lr = 0x83C82208;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-7088
	ctx.r3.s64 = ctx.r10.s64 + -7088;
	// bl 0x831cdcc8
	ctx.lr = 0x83C82214;
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

__attribute__((alias("__imp__sub_83C82224"))) PPC_WEAK_FUNC(sub_83C82224);
PPC_FUNC_IMPL(__imp__sub_83C82224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82228"))) PPC_WEAK_FUNC(sub_83C82228);
PPC_FUNC_IMPL(__imp__sub_83C82228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-7072
	ctx.r3.s64 = ctx.r11.s64 + -7072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82234"))) PPC_WEAK_FUNC(sub_83C82234);
PPC_FUNC_IMPL(__imp__sub_83C82234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82238"))) PPC_WEAK_FUNC(sub_83C82238);
PPC_FUNC_IMPL(__imp__sub_83C82238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-7064
	ctx.r3.s64 = ctx.r11.s64 + -7064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82244"))) PPC_WEAK_FUNC(sub_83C82244);
PPC_FUNC_IMPL(__imp__sub_83C82244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82248"))) PPC_WEAK_FUNC(sub_83C82248);
PPC_FUNC_IMPL(__imp__sub_83C82248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-7056
	ctx.r3.s64 = ctx.r11.s64 + -7056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82254"))) PPC_WEAK_FUNC(sub_83C82254);
PPC_FUNC_IMPL(__imp__sub_83C82254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82258"))) PPC_WEAK_FUNC(sub_83C82258);
PPC_FUNC_IMPL(__imp__sub_83C82258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-7048
	ctx.r3.s64 = ctx.r11.s64 + -7048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82264"))) PPC_WEAK_FUNC(sub_83C82264);
PPC_FUNC_IMPL(__imp__sub_83C82264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82268"))) PPC_WEAK_FUNC(sub_83C82268);
PPC_FUNC_IMPL(__imp__sub_83C82268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-7040
	ctx.r3.s64 = ctx.r11.s64 + -7040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82274"))) PPC_WEAK_FUNC(sub_83C82274);
PPC_FUNC_IMPL(__imp__sub_83C82274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82278"))) PPC_WEAK_FUNC(sub_83C82278);
PPC_FUNC_IMPL(__imp__sub_83C82278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-7032
	ctx.r3.s64 = ctx.r11.s64 + -7032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82284"))) PPC_WEAK_FUNC(sub_83C82284);
PPC_FUNC_IMPL(__imp__sub_83C82284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82288"))) PPC_WEAK_FUNC(sub_83C82288);
PPC_FUNC_IMPL(__imp__sub_83C82288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-7024
	ctx.r3.s64 = ctx.r11.s64 + -7024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82294"))) PPC_WEAK_FUNC(sub_83C82294);
PPC_FUNC_IMPL(__imp__sub_83C82294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82298"))) PPC_WEAK_FUNC(sub_83C82298);
PPC_FUNC_IMPL(__imp__sub_83C82298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-7016
	ctx.r3.s64 = ctx.r11.s64 + -7016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C822A4"))) PPC_WEAK_FUNC(sub_83C822A4);
PPC_FUNC_IMPL(__imp__sub_83C822A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C822A8"))) PPC_WEAK_FUNC(sub_83C822A8);
PPC_FUNC_IMPL(__imp__sub_83C822A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-7008
	ctx.r3.s64 = ctx.r11.s64 + -7008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C822B4"))) PPC_WEAK_FUNC(sub_83C822B4);
PPC_FUNC_IMPL(__imp__sub_83C822B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C822B8"))) PPC_WEAK_FUNC(sub_83C822B8);
PPC_FUNC_IMPL(__imp__sub_83C822B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-7000
	ctx.r3.s64 = ctx.r11.s64 + -7000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C822C4"))) PPC_WEAK_FUNC(sub_83C822C4);
PPC_FUNC_IMPL(__imp__sub_83C822C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C822C8"))) PPC_WEAK_FUNC(sub_83C822C8);
PPC_FUNC_IMPL(__imp__sub_83C822C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6992
	ctx.r3.s64 = ctx.r11.s64 + -6992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C822D4"))) PPC_WEAK_FUNC(sub_83C822D4);
PPC_FUNC_IMPL(__imp__sub_83C822D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C822D8"))) PPC_WEAK_FUNC(sub_83C822D8);
PPC_FUNC_IMPL(__imp__sub_83C822D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6984
	ctx.r3.s64 = ctx.r11.s64 + -6984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C822E4"))) PPC_WEAK_FUNC(sub_83C822E4);
PPC_FUNC_IMPL(__imp__sub_83C822E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C822E8"))) PPC_WEAK_FUNC(sub_83C822E8);
PPC_FUNC_IMPL(__imp__sub_83C822E8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,22712
	ctx.r7.s64 = ctx.r8.s64 + 22712;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,22712(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 22712);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,22712(r8)
	PPC_STORE_U32(ctx.r8.u32 + 22712, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C82310"))) PPC_WEAK_FUNC(sub_83C82310);
PPC_FUNC_IMPL(__imp__sub_83C82310) {
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
	// addi r3,r11,22708
	ctx.r3.s64 = ctx.r11.s64 + 22708;
	// bl 0x83523120
	ctx.lr = 0x83C82328;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-6976
	ctx.r3.s64 = ctx.r10.s64 + -6976;
	// bl 0x831cdcc8
	ctx.lr = 0x83C82334;
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

__attribute__((alias("__imp__sub_83C82344"))) PPC_WEAK_FUNC(sub_83C82344);
PPC_FUNC_IMPL(__imp__sub_83C82344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82348"))) PPC_WEAK_FUNC(sub_83C82348);
PPC_FUNC_IMPL(__imp__sub_83C82348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6960
	ctx.r3.s64 = ctx.r11.s64 + -6960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82354"))) PPC_WEAK_FUNC(sub_83C82354);
PPC_FUNC_IMPL(__imp__sub_83C82354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82358"))) PPC_WEAK_FUNC(sub_83C82358);
PPC_FUNC_IMPL(__imp__sub_83C82358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6952
	ctx.r3.s64 = ctx.r11.s64 + -6952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82364"))) PPC_WEAK_FUNC(sub_83C82364);
PPC_FUNC_IMPL(__imp__sub_83C82364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82368"))) PPC_WEAK_FUNC(sub_83C82368);
PPC_FUNC_IMPL(__imp__sub_83C82368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6944
	ctx.r3.s64 = ctx.r11.s64 + -6944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82374"))) PPC_WEAK_FUNC(sub_83C82374);
PPC_FUNC_IMPL(__imp__sub_83C82374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82378"))) PPC_WEAK_FUNC(sub_83C82378);
PPC_FUNC_IMPL(__imp__sub_83C82378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6936
	ctx.r3.s64 = ctx.r11.s64 + -6936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82384"))) PPC_WEAK_FUNC(sub_83C82384);
PPC_FUNC_IMPL(__imp__sub_83C82384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82388"))) PPC_WEAK_FUNC(sub_83C82388);
PPC_FUNC_IMPL(__imp__sub_83C82388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6928
	ctx.r3.s64 = ctx.r11.s64 + -6928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82394"))) PPC_WEAK_FUNC(sub_83C82394);
PPC_FUNC_IMPL(__imp__sub_83C82394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82398"))) PPC_WEAK_FUNC(sub_83C82398);
PPC_FUNC_IMPL(__imp__sub_83C82398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6920
	ctx.r3.s64 = ctx.r11.s64 + -6920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C823A4"))) PPC_WEAK_FUNC(sub_83C823A4);
PPC_FUNC_IMPL(__imp__sub_83C823A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C823A8"))) PPC_WEAK_FUNC(sub_83C823A8);
PPC_FUNC_IMPL(__imp__sub_83C823A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6912
	ctx.r3.s64 = ctx.r11.s64 + -6912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C823B4"))) PPC_WEAK_FUNC(sub_83C823B4);
PPC_FUNC_IMPL(__imp__sub_83C823B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C823B8"))) PPC_WEAK_FUNC(sub_83C823B8);
PPC_FUNC_IMPL(__imp__sub_83C823B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6904
	ctx.r3.s64 = ctx.r11.s64 + -6904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C823C4"))) PPC_WEAK_FUNC(sub_83C823C4);
PPC_FUNC_IMPL(__imp__sub_83C823C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C823C8"))) PPC_WEAK_FUNC(sub_83C823C8);
PPC_FUNC_IMPL(__imp__sub_83C823C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6896
	ctx.r3.s64 = ctx.r11.s64 + -6896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C823D4"))) PPC_WEAK_FUNC(sub_83C823D4);
PPC_FUNC_IMPL(__imp__sub_83C823D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C823D8"))) PPC_WEAK_FUNC(sub_83C823D8);
PPC_FUNC_IMPL(__imp__sub_83C823D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6888
	ctx.r3.s64 = ctx.r11.s64 + -6888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C823E4"))) PPC_WEAK_FUNC(sub_83C823E4);
PPC_FUNC_IMPL(__imp__sub_83C823E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C823E8"))) PPC_WEAK_FUNC(sub_83C823E8);
PPC_FUNC_IMPL(__imp__sub_83C823E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6880
	ctx.r3.s64 = ctx.r11.s64 + -6880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C823F4"))) PPC_WEAK_FUNC(sub_83C823F4);
PPC_FUNC_IMPL(__imp__sub_83C823F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C823F8"))) PPC_WEAK_FUNC(sub_83C823F8);
PPC_FUNC_IMPL(__imp__sub_83C823F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6872
	ctx.r3.s64 = ctx.r11.s64 + -6872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82404"))) PPC_WEAK_FUNC(sub_83C82404);
PPC_FUNC_IMPL(__imp__sub_83C82404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82408"))) PPC_WEAK_FUNC(sub_83C82408);
PPC_FUNC_IMPL(__imp__sub_83C82408) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,22736
	ctx.r7.s64 = ctx.r8.s64 + 22736;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,22736(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 22736);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,22736(r8)
	PPC_STORE_U32(ctx.r8.u32 + 22736, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C82430"))) PPC_WEAK_FUNC(sub_83C82430);
PPC_FUNC_IMPL(__imp__sub_83C82430) {
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
	// addi r3,r11,22720
	ctx.r3.s64 = ctx.r11.s64 + 22720;
	// bl 0x83523120
	ctx.lr = 0x83C82448;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-6864
	ctx.r3.s64 = ctx.r10.s64 + -6864;
	// bl 0x831cdcc8
	ctx.lr = 0x83C82454;
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

__attribute__((alias("__imp__sub_83C82464"))) PPC_WEAK_FUNC(sub_83C82464);
PPC_FUNC_IMPL(__imp__sub_83C82464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82468"))) PPC_WEAK_FUNC(sub_83C82468);
PPC_FUNC_IMPL(__imp__sub_83C82468) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,15856
	ctx.r6.s64 = ctx.r7.s64 + 15856;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,15772(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 15772);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,22736(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22736);
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
	// std r9,15856(r7)
	PPC_STORE_U64(ctx.r7.u32 + 15856, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C824B0"))) PPC_WEAK_FUNC(sub_83C824B0);
PPC_FUNC_IMPL(__imp__sub_83C824B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6848
	ctx.r3.s64 = ctx.r11.s64 + -6848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C824BC"))) PPC_WEAK_FUNC(sub_83C824BC);
PPC_FUNC_IMPL(__imp__sub_83C824BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C824C0"))) PPC_WEAK_FUNC(sub_83C824C0);
PPC_FUNC_IMPL(__imp__sub_83C824C0) {
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
	// addi r3,r11,22744
	ctx.r3.s64 = ctx.r11.s64 + 22744;
	// bl 0x8259af80
	ctx.lr = 0x83C824D8;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-6832
	ctx.r3.s64 = ctx.r10.s64 + -6832;
	// bl 0x831cdcc8
	ctx.lr = 0x83C824E4;
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

__attribute__((alias("__imp__sub_83C824F4"))) PPC_WEAK_FUNC(sub_83C824F4);
PPC_FUNC_IMPL(__imp__sub_83C824F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C824F8"))) PPC_WEAK_FUNC(sub_83C824F8);
PPC_FUNC_IMPL(__imp__sub_83C824F8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,22724
	ctx.r11.s64 = ctx.r8.s64 + 22724;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,15820(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15820);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-6840
	ctx.r3.s64 = ctx.r6.s64 + -6840;
	// stw r10,22724(r8)
	PPC_STORE_U32(ctx.r8.u32 + 22724, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82528"))) PPC_WEAK_FUNC(sub_83C82528);
PPC_FUNC_IMPL(__imp__sub_83C82528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6824
	ctx.r3.s64 = ctx.r11.s64 + -6824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82534"))) PPC_WEAK_FUNC(sub_83C82534);
PPC_FUNC_IMPL(__imp__sub_83C82534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82538"))) PPC_WEAK_FUNC(sub_83C82538);
PPC_FUNC_IMPL(__imp__sub_83C82538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6816
	ctx.r3.s64 = ctx.r11.s64 + -6816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82544"))) PPC_WEAK_FUNC(sub_83C82544);
PPC_FUNC_IMPL(__imp__sub_83C82544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82548"))) PPC_WEAK_FUNC(sub_83C82548);
PPC_FUNC_IMPL(__imp__sub_83C82548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6808
	ctx.r3.s64 = ctx.r11.s64 + -6808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82554"))) PPC_WEAK_FUNC(sub_83C82554);
PPC_FUNC_IMPL(__imp__sub_83C82554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82558"))) PPC_WEAK_FUNC(sub_83C82558);
PPC_FUNC_IMPL(__imp__sub_83C82558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6800
	ctx.r3.s64 = ctx.r11.s64 + -6800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82564"))) PPC_WEAK_FUNC(sub_83C82564);
PPC_FUNC_IMPL(__imp__sub_83C82564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82568"))) PPC_WEAK_FUNC(sub_83C82568);
PPC_FUNC_IMPL(__imp__sub_83C82568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6792
	ctx.r3.s64 = ctx.r11.s64 + -6792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82574"))) PPC_WEAK_FUNC(sub_83C82574);
PPC_FUNC_IMPL(__imp__sub_83C82574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82578"))) PPC_WEAK_FUNC(sub_83C82578);
PPC_FUNC_IMPL(__imp__sub_83C82578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6784
	ctx.r3.s64 = ctx.r11.s64 + -6784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82584"))) PPC_WEAK_FUNC(sub_83C82584);
PPC_FUNC_IMPL(__imp__sub_83C82584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82588"))) PPC_WEAK_FUNC(sub_83C82588);
PPC_FUNC_IMPL(__imp__sub_83C82588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6776
	ctx.r3.s64 = ctx.r11.s64 + -6776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82594"))) PPC_WEAK_FUNC(sub_83C82594);
PPC_FUNC_IMPL(__imp__sub_83C82594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82598"))) PPC_WEAK_FUNC(sub_83C82598);
PPC_FUNC_IMPL(__imp__sub_83C82598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6768
	ctx.r3.s64 = ctx.r11.s64 + -6768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C825A4"))) PPC_WEAK_FUNC(sub_83C825A4);
PPC_FUNC_IMPL(__imp__sub_83C825A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C825A8"))) PPC_WEAK_FUNC(sub_83C825A8);
PPC_FUNC_IMPL(__imp__sub_83C825A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6760
	ctx.r3.s64 = ctx.r11.s64 + -6760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C825B4"))) PPC_WEAK_FUNC(sub_83C825B4);
PPC_FUNC_IMPL(__imp__sub_83C825B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C825B8"))) PPC_WEAK_FUNC(sub_83C825B8);
PPC_FUNC_IMPL(__imp__sub_83C825B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6752
	ctx.r3.s64 = ctx.r11.s64 + -6752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C825C4"))) PPC_WEAK_FUNC(sub_83C825C4);
PPC_FUNC_IMPL(__imp__sub_83C825C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C825C8"))) PPC_WEAK_FUNC(sub_83C825C8);
PPC_FUNC_IMPL(__imp__sub_83C825C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6744
	ctx.r3.s64 = ctx.r11.s64 + -6744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C825D4"))) PPC_WEAK_FUNC(sub_83C825D4);
PPC_FUNC_IMPL(__imp__sub_83C825D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C825D8"))) PPC_WEAK_FUNC(sub_83C825D8);
PPC_FUNC_IMPL(__imp__sub_83C825D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6736
	ctx.r3.s64 = ctx.r11.s64 + -6736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C825E4"))) PPC_WEAK_FUNC(sub_83C825E4);
PPC_FUNC_IMPL(__imp__sub_83C825E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C825E8"))) PPC_WEAK_FUNC(sub_83C825E8);
PPC_FUNC_IMPL(__imp__sub_83C825E8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,23116
	ctx.r7.s64 = ctx.r8.s64 + 23116;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,23116(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 23116);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,23116(r8)
	PPC_STORE_U32(ctx.r8.u32 + 23116, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C82610"))) PPC_WEAK_FUNC(sub_83C82610);
PPC_FUNC_IMPL(__imp__sub_83C82610) {
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
	// addi r3,r11,23112
	ctx.r3.s64 = ctx.r11.s64 + 23112;
	// bl 0x83523120
	ctx.lr = 0x83C82628;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-6728
	ctx.r3.s64 = ctx.r10.s64 + -6728;
	// bl 0x831cdcc8
	ctx.lr = 0x83C82634;
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

__attribute__((alias("__imp__sub_83C82644"))) PPC_WEAK_FUNC(sub_83C82644);
PPC_FUNC_IMPL(__imp__sub_83C82644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82648"))) PPC_WEAK_FUNC(sub_83C82648);
PPC_FUNC_IMPL(__imp__sub_83C82648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6712
	ctx.r3.s64 = ctx.r11.s64 + -6712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82654"))) PPC_WEAK_FUNC(sub_83C82654);
PPC_FUNC_IMPL(__imp__sub_83C82654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82658"))) PPC_WEAK_FUNC(sub_83C82658);
PPC_FUNC_IMPL(__imp__sub_83C82658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6704
	ctx.r3.s64 = ctx.r11.s64 + -6704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82664"))) PPC_WEAK_FUNC(sub_83C82664);
PPC_FUNC_IMPL(__imp__sub_83C82664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82668"))) PPC_WEAK_FUNC(sub_83C82668);
PPC_FUNC_IMPL(__imp__sub_83C82668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6696
	ctx.r3.s64 = ctx.r11.s64 + -6696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82674"))) PPC_WEAK_FUNC(sub_83C82674);
PPC_FUNC_IMPL(__imp__sub_83C82674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82678"))) PPC_WEAK_FUNC(sub_83C82678);
PPC_FUNC_IMPL(__imp__sub_83C82678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6688
	ctx.r3.s64 = ctx.r11.s64 + -6688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82684"))) PPC_WEAK_FUNC(sub_83C82684);
PPC_FUNC_IMPL(__imp__sub_83C82684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82688"))) PPC_WEAK_FUNC(sub_83C82688);
PPC_FUNC_IMPL(__imp__sub_83C82688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6680
	ctx.r3.s64 = ctx.r11.s64 + -6680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82694"))) PPC_WEAK_FUNC(sub_83C82694);
PPC_FUNC_IMPL(__imp__sub_83C82694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82698"))) PPC_WEAK_FUNC(sub_83C82698);
PPC_FUNC_IMPL(__imp__sub_83C82698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6672
	ctx.r3.s64 = ctx.r11.s64 + -6672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C826A4"))) PPC_WEAK_FUNC(sub_83C826A4);
PPC_FUNC_IMPL(__imp__sub_83C826A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C826A8"))) PPC_WEAK_FUNC(sub_83C826A8);
PPC_FUNC_IMPL(__imp__sub_83C826A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6664
	ctx.r3.s64 = ctx.r11.s64 + -6664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C826B4"))) PPC_WEAK_FUNC(sub_83C826B4);
PPC_FUNC_IMPL(__imp__sub_83C826B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C826B8"))) PPC_WEAK_FUNC(sub_83C826B8);
PPC_FUNC_IMPL(__imp__sub_83C826B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6656
	ctx.r3.s64 = ctx.r11.s64 + -6656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C826C4"))) PPC_WEAK_FUNC(sub_83C826C4);
PPC_FUNC_IMPL(__imp__sub_83C826C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C826C8"))) PPC_WEAK_FUNC(sub_83C826C8);
PPC_FUNC_IMPL(__imp__sub_83C826C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6648
	ctx.r3.s64 = ctx.r11.s64 + -6648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C826D4"))) PPC_WEAK_FUNC(sub_83C826D4);
PPC_FUNC_IMPL(__imp__sub_83C826D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C826D8"))) PPC_WEAK_FUNC(sub_83C826D8);
PPC_FUNC_IMPL(__imp__sub_83C826D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6640
	ctx.r3.s64 = ctx.r11.s64 + -6640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C826E4"))) PPC_WEAK_FUNC(sub_83C826E4);
PPC_FUNC_IMPL(__imp__sub_83C826E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C826E8"))) PPC_WEAK_FUNC(sub_83C826E8);
PPC_FUNC_IMPL(__imp__sub_83C826E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6632
	ctx.r3.s64 = ctx.r11.s64 + -6632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C826F4"))) PPC_WEAK_FUNC(sub_83C826F4);
PPC_FUNC_IMPL(__imp__sub_83C826F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C826F8"))) PPC_WEAK_FUNC(sub_83C826F8);
PPC_FUNC_IMPL(__imp__sub_83C826F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6624
	ctx.r3.s64 = ctx.r11.s64 + -6624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82704"))) PPC_WEAK_FUNC(sub_83C82704);
PPC_FUNC_IMPL(__imp__sub_83C82704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82708"))) PPC_WEAK_FUNC(sub_83C82708);
PPC_FUNC_IMPL(__imp__sub_83C82708) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,23128
	ctx.r7.s64 = ctx.r8.s64 + 23128;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,23128(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 23128);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,23128(r8)
	PPC_STORE_U32(ctx.r8.u32 + 23128, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C82730"))) PPC_WEAK_FUNC(sub_83C82730);
PPC_FUNC_IMPL(__imp__sub_83C82730) {
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
	// addi r3,r11,23124
	ctx.r3.s64 = ctx.r11.s64 + 23124;
	// bl 0x83523120
	ctx.lr = 0x83C82748;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-6616
	ctx.r3.s64 = ctx.r10.s64 + -6616;
	// bl 0x831cdcc8
	ctx.lr = 0x83C82754;
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

__attribute__((alias("__imp__sub_83C82764"))) PPC_WEAK_FUNC(sub_83C82764);
PPC_FUNC_IMPL(__imp__sub_83C82764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82768"))) PPC_WEAK_FUNC(sub_83C82768);
PPC_FUNC_IMPL(__imp__sub_83C82768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6600
	ctx.r3.s64 = ctx.r11.s64 + -6600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82774"))) PPC_WEAK_FUNC(sub_83C82774);
PPC_FUNC_IMPL(__imp__sub_83C82774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82778"))) PPC_WEAK_FUNC(sub_83C82778);
PPC_FUNC_IMPL(__imp__sub_83C82778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6592
	ctx.r3.s64 = ctx.r11.s64 + -6592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82784"))) PPC_WEAK_FUNC(sub_83C82784);
PPC_FUNC_IMPL(__imp__sub_83C82784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82788"))) PPC_WEAK_FUNC(sub_83C82788);
PPC_FUNC_IMPL(__imp__sub_83C82788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6584
	ctx.r3.s64 = ctx.r11.s64 + -6584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82794"))) PPC_WEAK_FUNC(sub_83C82794);
PPC_FUNC_IMPL(__imp__sub_83C82794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82798"))) PPC_WEAK_FUNC(sub_83C82798);
PPC_FUNC_IMPL(__imp__sub_83C82798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6576
	ctx.r3.s64 = ctx.r11.s64 + -6576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C827A4"))) PPC_WEAK_FUNC(sub_83C827A4);
PPC_FUNC_IMPL(__imp__sub_83C827A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C827A8"))) PPC_WEAK_FUNC(sub_83C827A8);
PPC_FUNC_IMPL(__imp__sub_83C827A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6568
	ctx.r3.s64 = ctx.r11.s64 + -6568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C827B4"))) PPC_WEAK_FUNC(sub_83C827B4);
PPC_FUNC_IMPL(__imp__sub_83C827B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C827B8"))) PPC_WEAK_FUNC(sub_83C827B8);
PPC_FUNC_IMPL(__imp__sub_83C827B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6560
	ctx.r3.s64 = ctx.r11.s64 + -6560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C827C4"))) PPC_WEAK_FUNC(sub_83C827C4);
PPC_FUNC_IMPL(__imp__sub_83C827C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C827C8"))) PPC_WEAK_FUNC(sub_83C827C8);
PPC_FUNC_IMPL(__imp__sub_83C827C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6552
	ctx.r3.s64 = ctx.r11.s64 + -6552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C827D4"))) PPC_WEAK_FUNC(sub_83C827D4);
PPC_FUNC_IMPL(__imp__sub_83C827D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C827D8"))) PPC_WEAK_FUNC(sub_83C827D8);
PPC_FUNC_IMPL(__imp__sub_83C827D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6544
	ctx.r3.s64 = ctx.r11.s64 + -6544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C827E4"))) PPC_WEAK_FUNC(sub_83C827E4);
PPC_FUNC_IMPL(__imp__sub_83C827E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C827E8"))) PPC_WEAK_FUNC(sub_83C827E8);
PPC_FUNC_IMPL(__imp__sub_83C827E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6536
	ctx.r3.s64 = ctx.r11.s64 + -6536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C827F4"))) PPC_WEAK_FUNC(sub_83C827F4);
PPC_FUNC_IMPL(__imp__sub_83C827F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C827F8"))) PPC_WEAK_FUNC(sub_83C827F8);
PPC_FUNC_IMPL(__imp__sub_83C827F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6528
	ctx.r3.s64 = ctx.r11.s64 + -6528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82804"))) PPC_WEAK_FUNC(sub_83C82804);
PPC_FUNC_IMPL(__imp__sub_83C82804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82808"))) PPC_WEAK_FUNC(sub_83C82808);
PPC_FUNC_IMPL(__imp__sub_83C82808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6520
	ctx.r3.s64 = ctx.r11.s64 + -6520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82814"))) PPC_WEAK_FUNC(sub_83C82814);
PPC_FUNC_IMPL(__imp__sub_83C82814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82818"))) PPC_WEAK_FUNC(sub_83C82818);
PPC_FUNC_IMPL(__imp__sub_83C82818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6512
	ctx.r3.s64 = ctx.r11.s64 + -6512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82824"))) PPC_WEAK_FUNC(sub_83C82824);
PPC_FUNC_IMPL(__imp__sub_83C82824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82828"))) PPC_WEAK_FUNC(sub_83C82828);
PPC_FUNC_IMPL(__imp__sub_83C82828) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,23140
	ctx.r7.s64 = ctx.r8.s64 + 23140;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,23140(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 23140);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,23140(r8)
	PPC_STORE_U32(ctx.r8.u32 + 23140, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C82850"))) PPC_WEAK_FUNC(sub_83C82850);
PPC_FUNC_IMPL(__imp__sub_83C82850) {
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
	// addi r3,r11,23136
	ctx.r3.s64 = ctx.r11.s64 + 23136;
	// bl 0x83523120
	ctx.lr = 0x83C82868;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-6504
	ctx.r3.s64 = ctx.r10.s64 + -6504;
	// bl 0x831cdcc8
	ctx.lr = 0x83C82874;
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

__attribute__((alias("__imp__sub_83C82884"))) PPC_WEAK_FUNC(sub_83C82884);
PPC_FUNC_IMPL(__imp__sub_83C82884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82888"))) PPC_WEAK_FUNC(sub_83C82888);
PPC_FUNC_IMPL(__imp__sub_83C82888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6488
	ctx.r3.s64 = ctx.r11.s64 + -6488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82894"))) PPC_WEAK_FUNC(sub_83C82894);
PPC_FUNC_IMPL(__imp__sub_83C82894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82898"))) PPC_WEAK_FUNC(sub_83C82898);
PPC_FUNC_IMPL(__imp__sub_83C82898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6480
	ctx.r3.s64 = ctx.r11.s64 + -6480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C828A4"))) PPC_WEAK_FUNC(sub_83C828A4);
PPC_FUNC_IMPL(__imp__sub_83C828A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C828A8"))) PPC_WEAK_FUNC(sub_83C828A8);
PPC_FUNC_IMPL(__imp__sub_83C828A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6472
	ctx.r3.s64 = ctx.r11.s64 + -6472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C828B4"))) PPC_WEAK_FUNC(sub_83C828B4);
PPC_FUNC_IMPL(__imp__sub_83C828B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C828B8"))) PPC_WEAK_FUNC(sub_83C828B8);
PPC_FUNC_IMPL(__imp__sub_83C828B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6464
	ctx.r3.s64 = ctx.r11.s64 + -6464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C828C4"))) PPC_WEAK_FUNC(sub_83C828C4);
PPC_FUNC_IMPL(__imp__sub_83C828C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C828C8"))) PPC_WEAK_FUNC(sub_83C828C8);
PPC_FUNC_IMPL(__imp__sub_83C828C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6456
	ctx.r3.s64 = ctx.r11.s64 + -6456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C828D4"))) PPC_WEAK_FUNC(sub_83C828D4);
PPC_FUNC_IMPL(__imp__sub_83C828D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C828D8"))) PPC_WEAK_FUNC(sub_83C828D8);
PPC_FUNC_IMPL(__imp__sub_83C828D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6448
	ctx.r3.s64 = ctx.r11.s64 + -6448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C828E4"))) PPC_WEAK_FUNC(sub_83C828E4);
PPC_FUNC_IMPL(__imp__sub_83C828E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C828E8"))) PPC_WEAK_FUNC(sub_83C828E8);
PPC_FUNC_IMPL(__imp__sub_83C828E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6440
	ctx.r3.s64 = ctx.r11.s64 + -6440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C828F4"))) PPC_WEAK_FUNC(sub_83C828F4);
PPC_FUNC_IMPL(__imp__sub_83C828F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C828F8"))) PPC_WEAK_FUNC(sub_83C828F8);
PPC_FUNC_IMPL(__imp__sub_83C828F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6432
	ctx.r3.s64 = ctx.r11.s64 + -6432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82904"))) PPC_WEAK_FUNC(sub_83C82904);
PPC_FUNC_IMPL(__imp__sub_83C82904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82908"))) PPC_WEAK_FUNC(sub_83C82908);
PPC_FUNC_IMPL(__imp__sub_83C82908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6424
	ctx.r3.s64 = ctx.r11.s64 + -6424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82914"))) PPC_WEAK_FUNC(sub_83C82914);
PPC_FUNC_IMPL(__imp__sub_83C82914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82918"))) PPC_WEAK_FUNC(sub_83C82918);
PPC_FUNC_IMPL(__imp__sub_83C82918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6416
	ctx.r3.s64 = ctx.r11.s64 + -6416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82924"))) PPC_WEAK_FUNC(sub_83C82924);
PPC_FUNC_IMPL(__imp__sub_83C82924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82928"))) PPC_WEAK_FUNC(sub_83C82928);
PPC_FUNC_IMPL(__imp__sub_83C82928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6408
	ctx.r3.s64 = ctx.r11.s64 + -6408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82934"))) PPC_WEAK_FUNC(sub_83C82934);
PPC_FUNC_IMPL(__imp__sub_83C82934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82938"))) PPC_WEAK_FUNC(sub_83C82938);
PPC_FUNC_IMPL(__imp__sub_83C82938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6400
	ctx.r3.s64 = ctx.r11.s64 + -6400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C82944"))) PPC_WEAK_FUNC(sub_83C82944);
PPC_FUNC_IMPL(__imp__sub_83C82944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C82948"))) PPC_WEAK_FUNC(sub_83C82948);
PPC_FUNC_IMPL(__imp__sub_83C82948) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,23152
	ctx.r7.s64 = ctx.r8.s64 + 23152;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,23152(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 23152);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,23152(r8)
	PPC_STORE_U32(ctx.r8.u32 + 23152, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C82970"))) PPC_WEAK_FUNC(sub_83C82970);
PPC_FUNC_IMPL(__imp__sub_83C82970) {
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
	// addi r3,r11,23148
	ctx.r3.s64 = ctx.r11.s64 + 23148;
	// bl 0x83523120
	ctx.lr = 0x83C82988;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-6392
	ctx.r3.s64 = ctx.r10.s64 + -6392;
	// bl 0x831cdcc8
	ctx.lr = 0x83C82994;
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

__attribute__((alias("__imp__sub_83C829A4"))) PPC_WEAK_FUNC(sub_83C829A4);
PPC_FUNC_IMPL(__imp__sub_83C829A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C829A8"))) PPC_WEAK_FUNC(sub_83C829A8);
PPC_FUNC_IMPL(__imp__sub_83C829A8) {
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
	// addi r3,r11,23160
	ctx.r3.s64 = ctx.r11.s64 + 23160;
	// bl 0x830fe1b0
	ctx.lr = 0x83C829C0;
	sub_830FE1B0(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-6376
	ctx.r3.s64 = ctx.r10.s64 + -6376;
	// bl 0x831cdcc8
	ctx.lr = 0x83C829CC;
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

__attribute__((alias("__imp__sub_83C829DC"))) PPC_WEAK_FUNC(sub_83C829DC);
PPC_FUNC_IMPL(__imp__sub_83C829DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C829E0"))) PPC_WEAK_FUNC(sub_83C829E0);
PPC_FUNC_IMPL(__imp__sub_83C829E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6360
	ctx.r3.s64 = ctx.r11.s64 + -6360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C829EC"))) PPC_WEAK_FUNC(sub_83C829EC);
PPC_FUNC_IMPL(__imp__sub_83C829EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C829F0"))) PPC_WEAK_FUNC(sub_83C829F0);
PPC_FUNC_IMPL(__imp__sub_83C829F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-6352
	ctx.r3.s64 = ctx.r11.s64 + -6352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

