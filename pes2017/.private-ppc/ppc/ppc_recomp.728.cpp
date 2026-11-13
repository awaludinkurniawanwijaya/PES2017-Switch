#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C1DD00"))) PPC_WEAK_FUNC(sub_83C1DD00);
PPC_FUNC_IMPL(__imp__sub_83C1DD00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13448
	ctx.r3.s64 = ctx.r11.s64 + -13448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1DD0C"))) PPC_WEAK_FUNC(sub_83C1DD0C);
PPC_FUNC_IMPL(__imp__sub_83C1DD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1DD10"))) PPC_WEAK_FUNC(sub_83C1DD10);
PPC_FUNC_IMPL(__imp__sub_83C1DD10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13440
	ctx.r3.s64 = ctx.r11.s64 + -13440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1DD1C"))) PPC_WEAK_FUNC(sub_83C1DD1C);
PPC_FUNC_IMPL(__imp__sub_83C1DD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1DD20"))) PPC_WEAK_FUNC(sub_83C1DD20);
PPC_FUNC_IMPL(__imp__sub_83C1DD20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13432
	ctx.r3.s64 = ctx.r11.s64 + -13432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1DD2C"))) PPC_WEAK_FUNC(sub_83C1DD2C);
PPC_FUNC_IMPL(__imp__sub_83C1DD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1DD30"))) PPC_WEAK_FUNC(sub_83C1DD30);
PPC_FUNC_IMPL(__imp__sub_83C1DD30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13424
	ctx.r3.s64 = ctx.r11.s64 + -13424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1DD3C"))) PPC_WEAK_FUNC(sub_83C1DD3C);
PPC_FUNC_IMPL(__imp__sub_83C1DD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1DD40"))) PPC_WEAK_FUNC(sub_83C1DD40);
PPC_FUNC_IMPL(__imp__sub_83C1DD40) {
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
	// addi r3,r11,-18140
	ctx.r3.s64 = ctx.r11.s64 + -18140;
	// bl 0x83523120
	ctx.lr = 0x83C1DD58;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-13416
	ctx.r3.s64 = ctx.r10.s64 + -13416;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1DD64;
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

__attribute__((alias("__imp__sub_83C1DD74"))) PPC_WEAK_FUNC(sub_83C1DD74);
PPC_FUNC_IMPL(__imp__sub_83C1DD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1DD78"))) PPC_WEAK_FUNC(sub_83C1DD78);
PPC_FUNC_IMPL(__imp__sub_83C1DD78) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-18136
	ctx.r7.s64 = ctx.r8.s64 + -18136;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-18136(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18136);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-18136(r8)
	PPC_STORE_U32(ctx.r8.u32 + -18136, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1DDA0"))) PPC_WEAK_FUNC(sub_83C1DDA0);
PPC_FUNC_IMPL(__imp__sub_83C1DDA0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,4372
	ctx.r6.s64 = ctx.r7.s64 + 4372;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,4300(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4300);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-18136(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -18136);
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
	// std r9,4372(r7)
	PPC_STORE_U64(ctx.r7.u32 + 4372, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1DDE8"))) PPC_WEAK_FUNC(sub_83C1DDE8);
PPC_FUNC_IMPL(__imp__sub_83C1DDE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13400
	ctx.r3.s64 = ctx.r11.s64 + -13400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1DDF4"))) PPC_WEAK_FUNC(sub_83C1DDF4);
PPC_FUNC_IMPL(__imp__sub_83C1DDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1DDF8"))) PPC_WEAK_FUNC(sub_83C1DDF8);
PPC_FUNC_IMPL(__imp__sub_83C1DDF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13392
	ctx.r3.s64 = ctx.r11.s64 + -13392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1DE04"))) PPC_WEAK_FUNC(sub_83C1DE04);
PPC_FUNC_IMPL(__imp__sub_83C1DE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1DE08"))) PPC_WEAK_FUNC(sub_83C1DE08);
PPC_FUNC_IMPL(__imp__sub_83C1DE08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13384
	ctx.r3.s64 = ctx.r11.s64 + -13384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1DE14"))) PPC_WEAK_FUNC(sub_83C1DE14);
PPC_FUNC_IMPL(__imp__sub_83C1DE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1DE18"))) PPC_WEAK_FUNC(sub_83C1DE18);
PPC_FUNC_IMPL(__imp__sub_83C1DE18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13376
	ctx.r3.s64 = ctx.r11.s64 + -13376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1DE24"))) PPC_WEAK_FUNC(sub_83C1DE24);
PPC_FUNC_IMPL(__imp__sub_83C1DE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1DE28"))) PPC_WEAK_FUNC(sub_83C1DE28);
PPC_FUNC_IMPL(__imp__sub_83C1DE28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13368
	ctx.r3.s64 = ctx.r11.s64 + -13368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1DE34"))) PPC_WEAK_FUNC(sub_83C1DE34);
PPC_FUNC_IMPL(__imp__sub_83C1DE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1DE38"))) PPC_WEAK_FUNC(sub_83C1DE38);
PPC_FUNC_IMPL(__imp__sub_83C1DE38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13360
	ctx.r3.s64 = ctx.r11.s64 + -13360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1DE44"))) PPC_WEAK_FUNC(sub_83C1DE44);
PPC_FUNC_IMPL(__imp__sub_83C1DE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1DE48"))) PPC_WEAK_FUNC(sub_83C1DE48);
PPC_FUNC_IMPL(__imp__sub_83C1DE48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13352
	ctx.r3.s64 = ctx.r11.s64 + -13352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1DE54"))) PPC_WEAK_FUNC(sub_83C1DE54);
PPC_FUNC_IMPL(__imp__sub_83C1DE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1DE58"))) PPC_WEAK_FUNC(sub_83C1DE58);
PPC_FUNC_IMPL(__imp__sub_83C1DE58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13344
	ctx.r3.s64 = ctx.r11.s64 + -13344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1DE64"))) PPC_WEAK_FUNC(sub_83C1DE64);
PPC_FUNC_IMPL(__imp__sub_83C1DE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1DE68"))) PPC_WEAK_FUNC(sub_83C1DE68);
PPC_FUNC_IMPL(__imp__sub_83C1DE68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13336
	ctx.r3.s64 = ctx.r11.s64 + -13336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1DE74"))) PPC_WEAK_FUNC(sub_83C1DE74);
PPC_FUNC_IMPL(__imp__sub_83C1DE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1DE78"))) PPC_WEAK_FUNC(sub_83C1DE78);
PPC_FUNC_IMPL(__imp__sub_83C1DE78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13328
	ctx.r3.s64 = ctx.r11.s64 + -13328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1DE84"))) PPC_WEAK_FUNC(sub_83C1DE84);
PPC_FUNC_IMPL(__imp__sub_83C1DE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1DE88"))) PPC_WEAK_FUNC(sub_83C1DE88);
PPC_FUNC_IMPL(__imp__sub_83C1DE88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13320
	ctx.r3.s64 = ctx.r11.s64 + -13320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1DE94"))) PPC_WEAK_FUNC(sub_83C1DE94);
PPC_FUNC_IMPL(__imp__sub_83C1DE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1DE98"))) PPC_WEAK_FUNC(sub_83C1DE98);
PPC_FUNC_IMPL(__imp__sub_83C1DE98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13312
	ctx.r3.s64 = ctx.r11.s64 + -13312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1DEA4"))) PPC_WEAK_FUNC(sub_83C1DEA4);
PPC_FUNC_IMPL(__imp__sub_83C1DEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1DEA8"))) PPC_WEAK_FUNC(sub_83C1DEA8);
PPC_FUNC_IMPL(__imp__sub_83C1DEA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13304
	ctx.r3.s64 = ctx.r11.s64 + -13304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1DEB4"))) PPC_WEAK_FUNC(sub_83C1DEB4);
PPC_FUNC_IMPL(__imp__sub_83C1DEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1DEB8"))) PPC_WEAK_FUNC(sub_83C1DEB8);
PPC_FUNC_IMPL(__imp__sub_83C1DEB8) {
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
	// addi r3,r11,-18128
	ctx.r3.s64 = ctx.r11.s64 + -18128;
	// bl 0x83523120
	ctx.lr = 0x83C1DED0;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-13296
	ctx.r3.s64 = ctx.r10.s64 + -13296;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1DEDC;
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

__attribute__((alias("__imp__sub_83C1DEEC"))) PPC_WEAK_FUNC(sub_83C1DEEC);
PPC_FUNC_IMPL(__imp__sub_83C1DEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1DEF0"))) PPC_WEAK_FUNC(sub_83C1DEF0);
PPC_FUNC_IMPL(__imp__sub_83C1DEF0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-18124
	ctx.r7.s64 = ctx.r8.s64 + -18124;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-18124(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18124);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-18124(r8)
	PPC_STORE_U32(ctx.r8.u32 + -18124, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1DF18"))) PPC_WEAK_FUNC(sub_83C1DF18);
PPC_FUNC_IMPL(__imp__sub_83C1DF18) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,4500
	ctx.r6.s64 = ctx.r7.s64 + 4500;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,4428(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4428);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-18124(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -18124);
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
	// std r9,4500(r7)
	PPC_STORE_U64(ctx.r7.u32 + 4500, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1DF60"))) PPC_WEAK_FUNC(sub_83C1DF60);
PPC_FUNC_IMPL(__imp__sub_83C1DF60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13280
	ctx.r3.s64 = ctx.r11.s64 + -13280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1DF6C"))) PPC_WEAK_FUNC(sub_83C1DF6C);
PPC_FUNC_IMPL(__imp__sub_83C1DF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1DF70"))) PPC_WEAK_FUNC(sub_83C1DF70);
PPC_FUNC_IMPL(__imp__sub_83C1DF70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13272
	ctx.r3.s64 = ctx.r11.s64 + -13272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1DF7C"))) PPC_WEAK_FUNC(sub_83C1DF7C);
PPC_FUNC_IMPL(__imp__sub_83C1DF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1DF80"))) PPC_WEAK_FUNC(sub_83C1DF80);
PPC_FUNC_IMPL(__imp__sub_83C1DF80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13264
	ctx.r3.s64 = ctx.r11.s64 + -13264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1DF8C"))) PPC_WEAK_FUNC(sub_83C1DF8C);
PPC_FUNC_IMPL(__imp__sub_83C1DF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1DF90"))) PPC_WEAK_FUNC(sub_83C1DF90);
PPC_FUNC_IMPL(__imp__sub_83C1DF90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13256
	ctx.r3.s64 = ctx.r11.s64 + -13256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1DF9C"))) PPC_WEAK_FUNC(sub_83C1DF9C);
PPC_FUNC_IMPL(__imp__sub_83C1DF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1DFA0"))) PPC_WEAK_FUNC(sub_83C1DFA0);
PPC_FUNC_IMPL(__imp__sub_83C1DFA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13248
	ctx.r3.s64 = ctx.r11.s64 + -13248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1DFAC"))) PPC_WEAK_FUNC(sub_83C1DFAC);
PPC_FUNC_IMPL(__imp__sub_83C1DFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1DFB0"))) PPC_WEAK_FUNC(sub_83C1DFB0);
PPC_FUNC_IMPL(__imp__sub_83C1DFB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13240
	ctx.r3.s64 = ctx.r11.s64 + -13240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1DFBC"))) PPC_WEAK_FUNC(sub_83C1DFBC);
PPC_FUNC_IMPL(__imp__sub_83C1DFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1DFC0"))) PPC_WEAK_FUNC(sub_83C1DFC0);
PPC_FUNC_IMPL(__imp__sub_83C1DFC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13232
	ctx.r3.s64 = ctx.r11.s64 + -13232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1DFCC"))) PPC_WEAK_FUNC(sub_83C1DFCC);
PPC_FUNC_IMPL(__imp__sub_83C1DFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1DFD0"))) PPC_WEAK_FUNC(sub_83C1DFD0);
PPC_FUNC_IMPL(__imp__sub_83C1DFD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13224
	ctx.r3.s64 = ctx.r11.s64 + -13224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1DFDC"))) PPC_WEAK_FUNC(sub_83C1DFDC);
PPC_FUNC_IMPL(__imp__sub_83C1DFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1DFE0"))) PPC_WEAK_FUNC(sub_83C1DFE0);
PPC_FUNC_IMPL(__imp__sub_83C1DFE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13216
	ctx.r3.s64 = ctx.r11.s64 + -13216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1DFEC"))) PPC_WEAK_FUNC(sub_83C1DFEC);
PPC_FUNC_IMPL(__imp__sub_83C1DFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1DFF0"))) PPC_WEAK_FUNC(sub_83C1DFF0);
PPC_FUNC_IMPL(__imp__sub_83C1DFF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13208
	ctx.r3.s64 = ctx.r11.s64 + -13208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1DFFC"))) PPC_WEAK_FUNC(sub_83C1DFFC);
PPC_FUNC_IMPL(__imp__sub_83C1DFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E000"))) PPC_WEAK_FUNC(sub_83C1E000);
PPC_FUNC_IMPL(__imp__sub_83C1E000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13200
	ctx.r3.s64 = ctx.r11.s64 + -13200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E00C"))) PPC_WEAK_FUNC(sub_83C1E00C);
PPC_FUNC_IMPL(__imp__sub_83C1E00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E010"))) PPC_WEAK_FUNC(sub_83C1E010);
PPC_FUNC_IMPL(__imp__sub_83C1E010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13192
	ctx.r3.s64 = ctx.r11.s64 + -13192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E01C"))) PPC_WEAK_FUNC(sub_83C1E01C);
PPC_FUNC_IMPL(__imp__sub_83C1E01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E020"))) PPC_WEAK_FUNC(sub_83C1E020);
PPC_FUNC_IMPL(__imp__sub_83C1E020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13184
	ctx.r3.s64 = ctx.r11.s64 + -13184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E02C"))) PPC_WEAK_FUNC(sub_83C1E02C);
PPC_FUNC_IMPL(__imp__sub_83C1E02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E030"))) PPC_WEAK_FUNC(sub_83C1E030);
PPC_FUNC_IMPL(__imp__sub_83C1E030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13176
	ctx.r3.s64 = ctx.r11.s64 + -13176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E03C"))) PPC_WEAK_FUNC(sub_83C1E03C);
PPC_FUNC_IMPL(__imp__sub_83C1E03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E040"))) PPC_WEAK_FUNC(sub_83C1E040);
PPC_FUNC_IMPL(__imp__sub_83C1E040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13168
	ctx.r3.s64 = ctx.r11.s64 + -13168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E04C"))) PPC_WEAK_FUNC(sub_83C1E04C);
PPC_FUNC_IMPL(__imp__sub_83C1E04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E050"))) PPC_WEAK_FUNC(sub_83C1E050);
PPC_FUNC_IMPL(__imp__sub_83C1E050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13160
	ctx.r3.s64 = ctx.r11.s64 + -13160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E05C"))) PPC_WEAK_FUNC(sub_83C1E05C);
PPC_FUNC_IMPL(__imp__sub_83C1E05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E060"))) PPC_WEAK_FUNC(sub_83C1E060);
PPC_FUNC_IMPL(__imp__sub_83C1E060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13152
	ctx.r3.s64 = ctx.r11.s64 + -13152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E06C"))) PPC_WEAK_FUNC(sub_83C1E06C);
PPC_FUNC_IMPL(__imp__sub_83C1E06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E070"))) PPC_WEAK_FUNC(sub_83C1E070);
PPC_FUNC_IMPL(__imp__sub_83C1E070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13144
	ctx.r3.s64 = ctx.r11.s64 + -13144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E07C"))) PPC_WEAK_FUNC(sub_83C1E07C);
PPC_FUNC_IMPL(__imp__sub_83C1E07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E080"))) PPC_WEAK_FUNC(sub_83C1E080);
PPC_FUNC_IMPL(__imp__sub_83C1E080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13136
	ctx.r3.s64 = ctx.r11.s64 + -13136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E08C"))) PPC_WEAK_FUNC(sub_83C1E08C);
PPC_FUNC_IMPL(__imp__sub_83C1E08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E090"))) PPC_WEAK_FUNC(sub_83C1E090);
PPC_FUNC_IMPL(__imp__sub_83C1E090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13128
	ctx.r3.s64 = ctx.r11.s64 + -13128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E09C"))) PPC_WEAK_FUNC(sub_83C1E09C);
PPC_FUNC_IMPL(__imp__sub_83C1E09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E0A0"))) PPC_WEAK_FUNC(sub_83C1E0A0);
PPC_FUNC_IMPL(__imp__sub_83C1E0A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13120
	ctx.r3.s64 = ctx.r11.s64 + -13120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E0AC"))) PPC_WEAK_FUNC(sub_83C1E0AC);
PPC_FUNC_IMPL(__imp__sub_83C1E0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E0B0"))) PPC_WEAK_FUNC(sub_83C1E0B0);
PPC_FUNC_IMPL(__imp__sub_83C1E0B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13112
	ctx.r3.s64 = ctx.r11.s64 + -13112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E0BC"))) PPC_WEAK_FUNC(sub_83C1E0BC);
PPC_FUNC_IMPL(__imp__sub_83C1E0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E0C0"))) PPC_WEAK_FUNC(sub_83C1E0C0);
PPC_FUNC_IMPL(__imp__sub_83C1E0C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13104
	ctx.r3.s64 = ctx.r11.s64 + -13104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E0CC"))) PPC_WEAK_FUNC(sub_83C1E0CC);
PPC_FUNC_IMPL(__imp__sub_83C1E0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E0D0"))) PPC_WEAK_FUNC(sub_83C1E0D0);
PPC_FUNC_IMPL(__imp__sub_83C1E0D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13096
	ctx.r3.s64 = ctx.r11.s64 + -13096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E0DC"))) PPC_WEAK_FUNC(sub_83C1E0DC);
PPC_FUNC_IMPL(__imp__sub_83C1E0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E0E0"))) PPC_WEAK_FUNC(sub_83C1E0E0);
PPC_FUNC_IMPL(__imp__sub_83C1E0E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13088
	ctx.r3.s64 = ctx.r11.s64 + -13088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E0EC"))) PPC_WEAK_FUNC(sub_83C1E0EC);
PPC_FUNC_IMPL(__imp__sub_83C1E0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E0F0"))) PPC_WEAK_FUNC(sub_83C1E0F0);
PPC_FUNC_IMPL(__imp__sub_83C1E0F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13080
	ctx.r3.s64 = ctx.r11.s64 + -13080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E0FC"))) PPC_WEAK_FUNC(sub_83C1E0FC);
PPC_FUNC_IMPL(__imp__sub_83C1E0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E100"))) PPC_WEAK_FUNC(sub_83C1E100);
PPC_FUNC_IMPL(__imp__sub_83C1E100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13072
	ctx.r3.s64 = ctx.r11.s64 + -13072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E10C"))) PPC_WEAK_FUNC(sub_83C1E10C);
PPC_FUNC_IMPL(__imp__sub_83C1E10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E110"))) PPC_WEAK_FUNC(sub_83C1E110);
PPC_FUNC_IMPL(__imp__sub_83C1E110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13064
	ctx.r3.s64 = ctx.r11.s64 + -13064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E11C"))) PPC_WEAK_FUNC(sub_83C1E11C);
PPC_FUNC_IMPL(__imp__sub_83C1E11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E120"))) PPC_WEAK_FUNC(sub_83C1E120);
PPC_FUNC_IMPL(__imp__sub_83C1E120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13056
	ctx.r3.s64 = ctx.r11.s64 + -13056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E12C"))) PPC_WEAK_FUNC(sub_83C1E12C);
PPC_FUNC_IMPL(__imp__sub_83C1E12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E130"))) PPC_WEAK_FUNC(sub_83C1E130);
PPC_FUNC_IMPL(__imp__sub_83C1E130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13048
	ctx.r3.s64 = ctx.r11.s64 + -13048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E13C"))) PPC_WEAK_FUNC(sub_83C1E13C);
PPC_FUNC_IMPL(__imp__sub_83C1E13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E140"))) PPC_WEAK_FUNC(sub_83C1E140);
PPC_FUNC_IMPL(__imp__sub_83C1E140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13040
	ctx.r3.s64 = ctx.r11.s64 + -13040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E14C"))) PPC_WEAK_FUNC(sub_83C1E14C);
PPC_FUNC_IMPL(__imp__sub_83C1E14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E150"))) PPC_WEAK_FUNC(sub_83C1E150);
PPC_FUNC_IMPL(__imp__sub_83C1E150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13032
	ctx.r3.s64 = ctx.r11.s64 + -13032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E15C"))) PPC_WEAK_FUNC(sub_83C1E15C);
PPC_FUNC_IMPL(__imp__sub_83C1E15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E160"))) PPC_WEAK_FUNC(sub_83C1E160);
PPC_FUNC_IMPL(__imp__sub_83C1E160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13024
	ctx.r3.s64 = ctx.r11.s64 + -13024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E16C"))) PPC_WEAK_FUNC(sub_83C1E16C);
PPC_FUNC_IMPL(__imp__sub_83C1E16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E170"))) PPC_WEAK_FUNC(sub_83C1E170);
PPC_FUNC_IMPL(__imp__sub_83C1E170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13016
	ctx.r3.s64 = ctx.r11.s64 + -13016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E17C"))) PPC_WEAK_FUNC(sub_83C1E17C);
PPC_FUNC_IMPL(__imp__sub_83C1E17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E180"))) PPC_WEAK_FUNC(sub_83C1E180);
PPC_FUNC_IMPL(__imp__sub_83C1E180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13008
	ctx.r3.s64 = ctx.r11.s64 + -13008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E18C"))) PPC_WEAK_FUNC(sub_83C1E18C);
PPC_FUNC_IMPL(__imp__sub_83C1E18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E190"))) PPC_WEAK_FUNC(sub_83C1E190);
PPC_FUNC_IMPL(__imp__sub_83C1E190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-13000
	ctx.r3.s64 = ctx.r11.s64 + -13000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E19C"))) PPC_WEAK_FUNC(sub_83C1E19C);
PPC_FUNC_IMPL(__imp__sub_83C1E19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E1A0"))) PPC_WEAK_FUNC(sub_83C1E1A0);
PPC_FUNC_IMPL(__imp__sub_83C1E1A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12992
	ctx.r3.s64 = ctx.r11.s64 + -12992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E1AC"))) PPC_WEAK_FUNC(sub_83C1E1AC);
PPC_FUNC_IMPL(__imp__sub_83C1E1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E1B0"))) PPC_WEAK_FUNC(sub_83C1E1B0);
PPC_FUNC_IMPL(__imp__sub_83C1E1B0) {
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
	// addi r3,r11,-18108
	ctx.r3.s64 = ctx.r11.s64 + -18108;
	// bl 0x83523120
	ctx.lr = 0x83C1E1C8;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-12984
	ctx.r3.s64 = ctx.r10.s64 + -12984;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1E1D4;
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

__attribute__((alias("__imp__sub_83C1E1E4"))) PPC_WEAK_FUNC(sub_83C1E1E4);
PPC_FUNC_IMPL(__imp__sub_83C1E1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E1E8"))) PPC_WEAK_FUNC(sub_83C1E1E8);
PPC_FUNC_IMPL(__imp__sub_83C1E1E8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-18104
	ctx.r7.s64 = ctx.r8.s64 + -18104;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-18104(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18104);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-18104(r8)
	PPC_STORE_U32(ctx.r8.u32 + -18104, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1E210"))) PPC_WEAK_FUNC(sub_83C1E210);
PPC_FUNC_IMPL(__imp__sub_83C1E210) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,4836
	ctx.r6.s64 = ctx.r7.s64 + 4836;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,4764(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4764);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-18104(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -18104);
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
	// std r9,4836(r7)
	PPC_STORE_U64(ctx.r7.u32 + 4836, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1E258"))) PPC_WEAK_FUNC(sub_83C1E258);
PPC_FUNC_IMPL(__imp__sub_83C1E258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12968
	ctx.r3.s64 = ctx.r11.s64 + -12968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E264"))) PPC_WEAK_FUNC(sub_83C1E264);
PPC_FUNC_IMPL(__imp__sub_83C1E264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E268"))) PPC_WEAK_FUNC(sub_83C1E268);
PPC_FUNC_IMPL(__imp__sub_83C1E268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12960
	ctx.r3.s64 = ctx.r11.s64 + -12960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E274"))) PPC_WEAK_FUNC(sub_83C1E274);
PPC_FUNC_IMPL(__imp__sub_83C1E274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E278"))) PPC_WEAK_FUNC(sub_83C1E278);
PPC_FUNC_IMPL(__imp__sub_83C1E278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12952
	ctx.r3.s64 = ctx.r11.s64 + -12952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E284"))) PPC_WEAK_FUNC(sub_83C1E284);
PPC_FUNC_IMPL(__imp__sub_83C1E284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E288"))) PPC_WEAK_FUNC(sub_83C1E288);
PPC_FUNC_IMPL(__imp__sub_83C1E288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12944
	ctx.r3.s64 = ctx.r11.s64 + -12944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E294"))) PPC_WEAK_FUNC(sub_83C1E294);
PPC_FUNC_IMPL(__imp__sub_83C1E294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E298"))) PPC_WEAK_FUNC(sub_83C1E298);
PPC_FUNC_IMPL(__imp__sub_83C1E298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12936
	ctx.r3.s64 = ctx.r11.s64 + -12936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E2A4"))) PPC_WEAK_FUNC(sub_83C1E2A4);
PPC_FUNC_IMPL(__imp__sub_83C1E2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E2A8"))) PPC_WEAK_FUNC(sub_83C1E2A8);
PPC_FUNC_IMPL(__imp__sub_83C1E2A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12928
	ctx.r3.s64 = ctx.r11.s64 + -12928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E2B4"))) PPC_WEAK_FUNC(sub_83C1E2B4);
PPC_FUNC_IMPL(__imp__sub_83C1E2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E2B8"))) PPC_WEAK_FUNC(sub_83C1E2B8);
PPC_FUNC_IMPL(__imp__sub_83C1E2B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12920
	ctx.r3.s64 = ctx.r11.s64 + -12920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E2C4"))) PPC_WEAK_FUNC(sub_83C1E2C4);
PPC_FUNC_IMPL(__imp__sub_83C1E2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E2C8"))) PPC_WEAK_FUNC(sub_83C1E2C8);
PPC_FUNC_IMPL(__imp__sub_83C1E2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12912
	ctx.r3.s64 = ctx.r11.s64 + -12912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E2D4"))) PPC_WEAK_FUNC(sub_83C1E2D4);
PPC_FUNC_IMPL(__imp__sub_83C1E2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E2D8"))) PPC_WEAK_FUNC(sub_83C1E2D8);
PPC_FUNC_IMPL(__imp__sub_83C1E2D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12904
	ctx.r3.s64 = ctx.r11.s64 + -12904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E2E4"))) PPC_WEAK_FUNC(sub_83C1E2E4);
PPC_FUNC_IMPL(__imp__sub_83C1E2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E2E8"))) PPC_WEAK_FUNC(sub_83C1E2E8);
PPC_FUNC_IMPL(__imp__sub_83C1E2E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12896
	ctx.r3.s64 = ctx.r11.s64 + -12896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E2F4"))) PPC_WEAK_FUNC(sub_83C1E2F4);
PPC_FUNC_IMPL(__imp__sub_83C1E2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E2F8"))) PPC_WEAK_FUNC(sub_83C1E2F8);
PPC_FUNC_IMPL(__imp__sub_83C1E2F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12888
	ctx.r3.s64 = ctx.r11.s64 + -12888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E304"))) PPC_WEAK_FUNC(sub_83C1E304);
PPC_FUNC_IMPL(__imp__sub_83C1E304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E308"))) PPC_WEAK_FUNC(sub_83C1E308);
PPC_FUNC_IMPL(__imp__sub_83C1E308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12880
	ctx.r3.s64 = ctx.r11.s64 + -12880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E314"))) PPC_WEAK_FUNC(sub_83C1E314);
PPC_FUNC_IMPL(__imp__sub_83C1E314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E318"))) PPC_WEAK_FUNC(sub_83C1E318);
PPC_FUNC_IMPL(__imp__sub_83C1E318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12872
	ctx.r3.s64 = ctx.r11.s64 + -12872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E324"))) PPC_WEAK_FUNC(sub_83C1E324);
PPC_FUNC_IMPL(__imp__sub_83C1E324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E328"))) PPC_WEAK_FUNC(sub_83C1E328);
PPC_FUNC_IMPL(__imp__sub_83C1E328) {
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
	// addi r3,r11,-18096
	ctx.r3.s64 = ctx.r11.s64 + -18096;
	// bl 0x83523120
	ctx.lr = 0x83C1E340;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-12864
	ctx.r3.s64 = ctx.r10.s64 + -12864;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1E34C;
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

__attribute__((alias("__imp__sub_83C1E35C"))) PPC_WEAK_FUNC(sub_83C1E35C);
PPC_FUNC_IMPL(__imp__sub_83C1E35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E360"))) PPC_WEAK_FUNC(sub_83C1E360);
PPC_FUNC_IMPL(__imp__sub_83C1E360) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-18080
	ctx.r7.s64 = ctx.r8.s64 + -18080;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-18080(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18080);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-18080(r8)
	PPC_STORE_U32(ctx.r8.u32 + -18080, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1E388"))) PPC_WEAK_FUNC(sub_83C1E388);
PPC_FUNC_IMPL(__imp__sub_83C1E388) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,4964
	ctx.r6.s64 = ctx.r7.s64 + 4964;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,4892(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4892);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-18080(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -18080);
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
	// std r9,4964(r7)
	PPC_STORE_U64(ctx.r7.u32 + 4964, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1E3D0"))) PPC_WEAK_FUNC(sub_83C1E3D0);
PPC_FUNC_IMPL(__imp__sub_83C1E3D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12848
	ctx.r3.s64 = ctx.r11.s64 + -12848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E3DC"))) PPC_WEAK_FUNC(sub_83C1E3DC);
PPC_FUNC_IMPL(__imp__sub_83C1E3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E3E0"))) PPC_WEAK_FUNC(sub_83C1E3E0);
PPC_FUNC_IMPL(__imp__sub_83C1E3E0) {
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
	// addi r3,r11,-18072
	ctx.r3.s64 = ctx.r11.s64 + -18072;
	// bl 0x8259af80
	ctx.lr = 0x83C1E3F8;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-12832
	ctx.r3.s64 = ctx.r10.s64 + -12832;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1E404;
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

__attribute__((alias("__imp__sub_83C1E414"))) PPC_WEAK_FUNC(sub_83C1E414);
PPC_FUNC_IMPL(__imp__sub_83C1E414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E418"))) PPC_WEAK_FUNC(sub_83C1E418);
PPC_FUNC_IMPL(__imp__sub_83C1E418) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-18092
	ctx.r11.s64 = ctx.r8.s64 + -18092;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,4940(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4940);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-12840
	ctx.r3.s64 = ctx.r6.s64 + -12840;
	// stw r10,-18092(r8)
	PPC_STORE_U32(ctx.r8.u32 + -18092, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E448"))) PPC_WEAK_FUNC(sub_83C1E448);
PPC_FUNC_IMPL(__imp__sub_83C1E448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12824
	ctx.r3.s64 = ctx.r11.s64 + -12824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E454"))) PPC_WEAK_FUNC(sub_83C1E454);
PPC_FUNC_IMPL(__imp__sub_83C1E454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E458"))) PPC_WEAK_FUNC(sub_83C1E458);
PPC_FUNC_IMPL(__imp__sub_83C1E458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12816
	ctx.r3.s64 = ctx.r11.s64 + -12816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E464"))) PPC_WEAK_FUNC(sub_83C1E464);
PPC_FUNC_IMPL(__imp__sub_83C1E464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E468"))) PPC_WEAK_FUNC(sub_83C1E468);
PPC_FUNC_IMPL(__imp__sub_83C1E468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12808
	ctx.r3.s64 = ctx.r11.s64 + -12808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E474"))) PPC_WEAK_FUNC(sub_83C1E474);
PPC_FUNC_IMPL(__imp__sub_83C1E474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E478"))) PPC_WEAK_FUNC(sub_83C1E478);
PPC_FUNC_IMPL(__imp__sub_83C1E478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12800
	ctx.r3.s64 = ctx.r11.s64 + -12800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E484"))) PPC_WEAK_FUNC(sub_83C1E484);
PPC_FUNC_IMPL(__imp__sub_83C1E484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E488"))) PPC_WEAK_FUNC(sub_83C1E488);
PPC_FUNC_IMPL(__imp__sub_83C1E488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12792
	ctx.r3.s64 = ctx.r11.s64 + -12792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E494"))) PPC_WEAK_FUNC(sub_83C1E494);
PPC_FUNC_IMPL(__imp__sub_83C1E494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E498"))) PPC_WEAK_FUNC(sub_83C1E498);
PPC_FUNC_IMPL(__imp__sub_83C1E498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12784
	ctx.r3.s64 = ctx.r11.s64 + -12784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E4A4"))) PPC_WEAK_FUNC(sub_83C1E4A4);
PPC_FUNC_IMPL(__imp__sub_83C1E4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E4A8"))) PPC_WEAK_FUNC(sub_83C1E4A8);
PPC_FUNC_IMPL(__imp__sub_83C1E4A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12776
	ctx.r3.s64 = ctx.r11.s64 + -12776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E4B4"))) PPC_WEAK_FUNC(sub_83C1E4B4);
PPC_FUNC_IMPL(__imp__sub_83C1E4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E4B8"))) PPC_WEAK_FUNC(sub_83C1E4B8);
PPC_FUNC_IMPL(__imp__sub_83C1E4B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12768
	ctx.r3.s64 = ctx.r11.s64 + -12768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E4C4"))) PPC_WEAK_FUNC(sub_83C1E4C4);
PPC_FUNC_IMPL(__imp__sub_83C1E4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E4C8"))) PPC_WEAK_FUNC(sub_83C1E4C8);
PPC_FUNC_IMPL(__imp__sub_83C1E4C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12760
	ctx.r3.s64 = ctx.r11.s64 + -12760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E4D4"))) PPC_WEAK_FUNC(sub_83C1E4D4);
PPC_FUNC_IMPL(__imp__sub_83C1E4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E4D8"))) PPC_WEAK_FUNC(sub_83C1E4D8);
PPC_FUNC_IMPL(__imp__sub_83C1E4D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12752
	ctx.r3.s64 = ctx.r11.s64 + -12752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E4E4"))) PPC_WEAK_FUNC(sub_83C1E4E4);
PPC_FUNC_IMPL(__imp__sub_83C1E4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E4E8"))) PPC_WEAK_FUNC(sub_83C1E4E8);
PPC_FUNC_IMPL(__imp__sub_83C1E4E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12744
	ctx.r3.s64 = ctx.r11.s64 + -12744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E4F4"))) PPC_WEAK_FUNC(sub_83C1E4F4);
PPC_FUNC_IMPL(__imp__sub_83C1E4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E4F8"))) PPC_WEAK_FUNC(sub_83C1E4F8);
PPC_FUNC_IMPL(__imp__sub_83C1E4F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12736
	ctx.r3.s64 = ctx.r11.s64 + -12736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E504"))) PPC_WEAK_FUNC(sub_83C1E504);
PPC_FUNC_IMPL(__imp__sub_83C1E504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E508"))) PPC_WEAK_FUNC(sub_83C1E508);
PPC_FUNC_IMPL(__imp__sub_83C1E508) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-17724
	ctx.r7.s64 = ctx.r8.s64 + -17724;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-17724(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17724);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-17724(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17724, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1E530"))) PPC_WEAK_FUNC(sub_83C1E530);
PPC_FUNC_IMPL(__imp__sub_83C1E530) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,5092
	ctx.r6.s64 = ctx.r7.s64 + 5092;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,5020(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 5020);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-17724(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -17724);
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
	// std r9,5092(r7)
	PPC_STORE_U64(ctx.r7.u32 + 5092, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1E578"))) PPC_WEAK_FUNC(sub_83C1E578);
PPC_FUNC_IMPL(__imp__sub_83C1E578) {
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
	// addi r3,r11,-17728
	ctx.r3.s64 = ctx.r11.s64 + -17728;
	// bl 0x83523120
	ctx.lr = 0x83C1E590;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-12728
	ctx.r3.s64 = ctx.r10.s64 + -12728;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1E59C;
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

__attribute__((alias("__imp__sub_83C1E5AC"))) PPC_WEAK_FUNC(sub_83C1E5AC);
PPC_FUNC_IMPL(__imp__sub_83C1E5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E5B0"))) PPC_WEAK_FUNC(sub_83C1E5B0);
PPC_FUNC_IMPL(__imp__sub_83C1E5B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12712
	ctx.r3.s64 = ctx.r11.s64 + -12712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E5BC"))) PPC_WEAK_FUNC(sub_83C1E5BC);
PPC_FUNC_IMPL(__imp__sub_83C1E5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E5C0"))) PPC_WEAK_FUNC(sub_83C1E5C0);
PPC_FUNC_IMPL(__imp__sub_83C1E5C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12704
	ctx.r3.s64 = ctx.r11.s64 + -12704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E5CC"))) PPC_WEAK_FUNC(sub_83C1E5CC);
PPC_FUNC_IMPL(__imp__sub_83C1E5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E5D0"))) PPC_WEAK_FUNC(sub_83C1E5D0);
PPC_FUNC_IMPL(__imp__sub_83C1E5D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12696
	ctx.r3.s64 = ctx.r11.s64 + -12696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E5DC"))) PPC_WEAK_FUNC(sub_83C1E5DC);
PPC_FUNC_IMPL(__imp__sub_83C1E5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E5E0"))) PPC_WEAK_FUNC(sub_83C1E5E0);
PPC_FUNC_IMPL(__imp__sub_83C1E5E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12688
	ctx.r3.s64 = ctx.r11.s64 + -12688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E5EC"))) PPC_WEAK_FUNC(sub_83C1E5EC);
PPC_FUNC_IMPL(__imp__sub_83C1E5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E5F0"))) PPC_WEAK_FUNC(sub_83C1E5F0);
PPC_FUNC_IMPL(__imp__sub_83C1E5F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12680
	ctx.r3.s64 = ctx.r11.s64 + -12680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E5FC"))) PPC_WEAK_FUNC(sub_83C1E5FC);
PPC_FUNC_IMPL(__imp__sub_83C1E5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E600"))) PPC_WEAK_FUNC(sub_83C1E600);
PPC_FUNC_IMPL(__imp__sub_83C1E600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12672
	ctx.r3.s64 = ctx.r11.s64 + -12672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E60C"))) PPC_WEAK_FUNC(sub_83C1E60C);
PPC_FUNC_IMPL(__imp__sub_83C1E60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E610"))) PPC_WEAK_FUNC(sub_83C1E610);
PPC_FUNC_IMPL(__imp__sub_83C1E610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12664
	ctx.r3.s64 = ctx.r11.s64 + -12664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E61C"))) PPC_WEAK_FUNC(sub_83C1E61C);
PPC_FUNC_IMPL(__imp__sub_83C1E61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E620"))) PPC_WEAK_FUNC(sub_83C1E620);
PPC_FUNC_IMPL(__imp__sub_83C1E620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12656
	ctx.r3.s64 = ctx.r11.s64 + -12656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E62C"))) PPC_WEAK_FUNC(sub_83C1E62C);
PPC_FUNC_IMPL(__imp__sub_83C1E62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E630"))) PPC_WEAK_FUNC(sub_83C1E630);
PPC_FUNC_IMPL(__imp__sub_83C1E630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12648
	ctx.r3.s64 = ctx.r11.s64 + -12648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E63C"))) PPC_WEAK_FUNC(sub_83C1E63C);
PPC_FUNC_IMPL(__imp__sub_83C1E63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E640"))) PPC_WEAK_FUNC(sub_83C1E640);
PPC_FUNC_IMPL(__imp__sub_83C1E640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12640
	ctx.r3.s64 = ctx.r11.s64 + -12640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E64C"))) PPC_WEAK_FUNC(sub_83C1E64C);
PPC_FUNC_IMPL(__imp__sub_83C1E64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E650"))) PPC_WEAK_FUNC(sub_83C1E650);
PPC_FUNC_IMPL(__imp__sub_83C1E650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12632
	ctx.r3.s64 = ctx.r11.s64 + -12632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E65C"))) PPC_WEAK_FUNC(sub_83C1E65C);
PPC_FUNC_IMPL(__imp__sub_83C1E65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E660"))) PPC_WEAK_FUNC(sub_83C1E660);
PPC_FUNC_IMPL(__imp__sub_83C1E660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12624
	ctx.r3.s64 = ctx.r11.s64 + -12624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E66C"))) PPC_WEAK_FUNC(sub_83C1E66C);
PPC_FUNC_IMPL(__imp__sub_83C1E66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E670"))) PPC_WEAK_FUNC(sub_83C1E670);
PPC_FUNC_IMPL(__imp__sub_83C1E670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12616
	ctx.r3.s64 = ctx.r11.s64 + -12616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E67C"))) PPC_WEAK_FUNC(sub_83C1E67C);
PPC_FUNC_IMPL(__imp__sub_83C1E67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E680"))) PPC_WEAK_FUNC(sub_83C1E680);
PPC_FUNC_IMPL(__imp__sub_83C1E680) {
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
	// addi r3,r11,-17716
	ctx.r3.s64 = ctx.r11.s64 + -17716;
	// bl 0x83523120
	ctx.lr = 0x83C1E698;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-12608
	ctx.r3.s64 = ctx.r10.s64 + -12608;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1E6A4;
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

__attribute__((alias("__imp__sub_83C1E6B4"))) PPC_WEAK_FUNC(sub_83C1E6B4);
PPC_FUNC_IMPL(__imp__sub_83C1E6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E6B8"))) PPC_WEAK_FUNC(sub_83C1E6B8);
PPC_FUNC_IMPL(__imp__sub_83C1E6B8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-17712
	ctx.r7.s64 = ctx.r8.s64 + -17712;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-17712(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17712);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-17712(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17712, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1E6E0"))) PPC_WEAK_FUNC(sub_83C1E6E0);
PPC_FUNC_IMPL(__imp__sub_83C1E6E0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,5220
	ctx.r6.s64 = ctx.r7.s64 + 5220;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,5148(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 5148);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-17712(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -17712);
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
	// std r9,5220(r7)
	PPC_STORE_U64(ctx.r7.u32 + 5220, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1E728"))) PPC_WEAK_FUNC(sub_83C1E728);
PPC_FUNC_IMPL(__imp__sub_83C1E728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12592
	ctx.r3.s64 = ctx.r11.s64 + -12592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E734"))) PPC_WEAK_FUNC(sub_83C1E734);
PPC_FUNC_IMPL(__imp__sub_83C1E734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E738"))) PPC_WEAK_FUNC(sub_83C1E738);
PPC_FUNC_IMPL(__imp__sub_83C1E738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12584
	ctx.r3.s64 = ctx.r11.s64 + -12584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E744"))) PPC_WEAK_FUNC(sub_83C1E744);
PPC_FUNC_IMPL(__imp__sub_83C1E744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E748"))) PPC_WEAK_FUNC(sub_83C1E748);
PPC_FUNC_IMPL(__imp__sub_83C1E748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12576
	ctx.r3.s64 = ctx.r11.s64 + -12576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E754"))) PPC_WEAK_FUNC(sub_83C1E754);
PPC_FUNC_IMPL(__imp__sub_83C1E754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E758"))) PPC_WEAK_FUNC(sub_83C1E758);
PPC_FUNC_IMPL(__imp__sub_83C1E758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12568
	ctx.r3.s64 = ctx.r11.s64 + -12568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E764"))) PPC_WEAK_FUNC(sub_83C1E764);
PPC_FUNC_IMPL(__imp__sub_83C1E764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E768"))) PPC_WEAK_FUNC(sub_83C1E768);
PPC_FUNC_IMPL(__imp__sub_83C1E768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12560
	ctx.r3.s64 = ctx.r11.s64 + -12560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E774"))) PPC_WEAK_FUNC(sub_83C1E774);
PPC_FUNC_IMPL(__imp__sub_83C1E774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E778"))) PPC_WEAK_FUNC(sub_83C1E778);
PPC_FUNC_IMPL(__imp__sub_83C1E778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12552
	ctx.r3.s64 = ctx.r11.s64 + -12552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E784"))) PPC_WEAK_FUNC(sub_83C1E784);
PPC_FUNC_IMPL(__imp__sub_83C1E784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E788"))) PPC_WEAK_FUNC(sub_83C1E788);
PPC_FUNC_IMPL(__imp__sub_83C1E788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12544
	ctx.r3.s64 = ctx.r11.s64 + -12544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E794"))) PPC_WEAK_FUNC(sub_83C1E794);
PPC_FUNC_IMPL(__imp__sub_83C1E794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E798"))) PPC_WEAK_FUNC(sub_83C1E798);
PPC_FUNC_IMPL(__imp__sub_83C1E798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12536
	ctx.r3.s64 = ctx.r11.s64 + -12536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E7A4"))) PPC_WEAK_FUNC(sub_83C1E7A4);
PPC_FUNC_IMPL(__imp__sub_83C1E7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E7A8"))) PPC_WEAK_FUNC(sub_83C1E7A8);
PPC_FUNC_IMPL(__imp__sub_83C1E7A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12528
	ctx.r3.s64 = ctx.r11.s64 + -12528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E7B4"))) PPC_WEAK_FUNC(sub_83C1E7B4);
PPC_FUNC_IMPL(__imp__sub_83C1E7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E7B8"))) PPC_WEAK_FUNC(sub_83C1E7B8);
PPC_FUNC_IMPL(__imp__sub_83C1E7B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12520
	ctx.r3.s64 = ctx.r11.s64 + -12520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E7C4"))) PPC_WEAK_FUNC(sub_83C1E7C4);
PPC_FUNC_IMPL(__imp__sub_83C1E7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E7C8"))) PPC_WEAK_FUNC(sub_83C1E7C8);
PPC_FUNC_IMPL(__imp__sub_83C1E7C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12512
	ctx.r3.s64 = ctx.r11.s64 + -12512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E7D4"))) PPC_WEAK_FUNC(sub_83C1E7D4);
PPC_FUNC_IMPL(__imp__sub_83C1E7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E7D8"))) PPC_WEAK_FUNC(sub_83C1E7D8);
PPC_FUNC_IMPL(__imp__sub_83C1E7D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12504
	ctx.r3.s64 = ctx.r11.s64 + -12504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E7E4"))) PPC_WEAK_FUNC(sub_83C1E7E4);
PPC_FUNC_IMPL(__imp__sub_83C1E7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E7E8"))) PPC_WEAK_FUNC(sub_83C1E7E8);
PPC_FUNC_IMPL(__imp__sub_83C1E7E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12496
	ctx.r3.s64 = ctx.r11.s64 + -12496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E7F4"))) PPC_WEAK_FUNC(sub_83C1E7F4);
PPC_FUNC_IMPL(__imp__sub_83C1E7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E7F8"))) PPC_WEAK_FUNC(sub_83C1E7F8);
PPC_FUNC_IMPL(__imp__sub_83C1E7F8) {
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
	// addi r3,r11,-17704
	ctx.r3.s64 = ctx.r11.s64 + -17704;
	// bl 0x83523120
	ctx.lr = 0x83C1E810;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,-12488
	ctx.r3.s64 = ctx.r10.s64 + -12488;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1E81C;
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

__attribute__((alias("__imp__sub_83C1E82C"))) PPC_WEAK_FUNC(sub_83C1E82C);
PPC_FUNC_IMPL(__imp__sub_83C1E82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E830"))) PPC_WEAK_FUNC(sub_83C1E830);
PPC_FUNC_IMPL(__imp__sub_83C1E830) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-17700
	ctx.r7.s64 = ctx.r8.s64 + -17700;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-17700(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17700);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-17700(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17700, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C1E858"))) PPC_WEAK_FUNC(sub_83C1E858);
PPC_FUNC_IMPL(__imp__sub_83C1E858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12472
	ctx.r3.s64 = ctx.r11.s64 + -12472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E864"))) PPC_WEAK_FUNC(sub_83C1E864);
PPC_FUNC_IMPL(__imp__sub_83C1E864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E868"))) PPC_WEAK_FUNC(sub_83C1E868);
PPC_FUNC_IMPL(__imp__sub_83C1E868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12464
	ctx.r3.s64 = ctx.r11.s64 + -12464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E874"))) PPC_WEAK_FUNC(sub_83C1E874);
PPC_FUNC_IMPL(__imp__sub_83C1E874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E878"))) PPC_WEAK_FUNC(sub_83C1E878);
PPC_FUNC_IMPL(__imp__sub_83C1E878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12456
	ctx.r3.s64 = ctx.r11.s64 + -12456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E884"))) PPC_WEAK_FUNC(sub_83C1E884);
PPC_FUNC_IMPL(__imp__sub_83C1E884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E888"))) PPC_WEAK_FUNC(sub_83C1E888);
PPC_FUNC_IMPL(__imp__sub_83C1E888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12448
	ctx.r3.s64 = ctx.r11.s64 + -12448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E894"))) PPC_WEAK_FUNC(sub_83C1E894);
PPC_FUNC_IMPL(__imp__sub_83C1E894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E898"))) PPC_WEAK_FUNC(sub_83C1E898);
PPC_FUNC_IMPL(__imp__sub_83C1E898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12440
	ctx.r3.s64 = ctx.r11.s64 + -12440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E8A4"))) PPC_WEAK_FUNC(sub_83C1E8A4);
PPC_FUNC_IMPL(__imp__sub_83C1E8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E8A8"))) PPC_WEAK_FUNC(sub_83C1E8A8);
PPC_FUNC_IMPL(__imp__sub_83C1E8A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12432
	ctx.r3.s64 = ctx.r11.s64 + -12432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E8B4"))) PPC_WEAK_FUNC(sub_83C1E8B4);
PPC_FUNC_IMPL(__imp__sub_83C1E8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C1E8B8"))) PPC_WEAK_FUNC(sub_83C1E8B8);
PPC_FUNC_IMPL(__imp__sub_83C1E8B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,-12424
	ctx.r3.s64 = ctx.r11.s64 + -12424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C1E8C4"))) PPC_WEAK_FUNC(sub_83C1E8C4);
PPC_FUNC_IMPL(__imp__sub_83C1E8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

