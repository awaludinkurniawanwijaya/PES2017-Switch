#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83B740A0"))) PPC_WEAK_FUNC(sub_83B740A0);
PPC_FUNC_IMPL(__imp__sub_83B740A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21352
	ctx.r3.s64 = ctx.r11.s64 + 21352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B740AC"))) PPC_WEAK_FUNC(sub_83B740AC);
PPC_FUNC_IMPL(__imp__sub_83B740AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B740B0"))) PPC_WEAK_FUNC(sub_83B740B0);
PPC_FUNC_IMPL(__imp__sub_83B740B0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-15460
	ctx.r7.s64 = ctx.r8.s64 + -15460;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-15460(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15460);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-15460(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15460, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B740D8"))) PPC_WEAK_FUNC(sub_83B740D8);
PPC_FUNC_IMPL(__imp__sub_83B740D8) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-15464
	ctx.r3.s64 = ctx.r11.s64 + -15464;
	// bl 0x83523120
	ctx.lr = 0x83B740F0;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,21360
	ctx.r3.s64 = ctx.r10.s64 + 21360;
	// bl 0x831cdcc8
	ctx.lr = 0x83B740FC;
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

__attribute__((alias("__imp__sub_83B7410C"))) PPC_WEAK_FUNC(sub_83B7410C);
PPC_FUNC_IMPL(__imp__sub_83B7410C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74110"))) PPC_WEAK_FUNC(sub_83B74110);
PPC_FUNC_IMPL(__imp__sub_83B74110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21376
	ctx.r3.s64 = ctx.r11.s64 + 21376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7411C"))) PPC_WEAK_FUNC(sub_83B7411C);
PPC_FUNC_IMPL(__imp__sub_83B7411C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74120"))) PPC_WEAK_FUNC(sub_83B74120);
PPC_FUNC_IMPL(__imp__sub_83B74120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21384
	ctx.r3.s64 = ctx.r11.s64 + 21384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7412C"))) PPC_WEAK_FUNC(sub_83B7412C);
PPC_FUNC_IMPL(__imp__sub_83B7412C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74130"))) PPC_WEAK_FUNC(sub_83B74130);
PPC_FUNC_IMPL(__imp__sub_83B74130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21392
	ctx.r3.s64 = ctx.r11.s64 + 21392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7413C"))) PPC_WEAK_FUNC(sub_83B7413C);
PPC_FUNC_IMPL(__imp__sub_83B7413C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74140"))) PPC_WEAK_FUNC(sub_83B74140);
PPC_FUNC_IMPL(__imp__sub_83B74140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21400
	ctx.r3.s64 = ctx.r11.s64 + 21400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7414C"))) PPC_WEAK_FUNC(sub_83B7414C);
PPC_FUNC_IMPL(__imp__sub_83B7414C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74150"))) PPC_WEAK_FUNC(sub_83B74150);
PPC_FUNC_IMPL(__imp__sub_83B74150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21408
	ctx.r3.s64 = ctx.r11.s64 + 21408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7415C"))) PPC_WEAK_FUNC(sub_83B7415C);
PPC_FUNC_IMPL(__imp__sub_83B7415C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74160"))) PPC_WEAK_FUNC(sub_83B74160);
PPC_FUNC_IMPL(__imp__sub_83B74160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21416
	ctx.r3.s64 = ctx.r11.s64 + 21416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7416C"))) PPC_WEAK_FUNC(sub_83B7416C);
PPC_FUNC_IMPL(__imp__sub_83B7416C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74170"))) PPC_WEAK_FUNC(sub_83B74170);
PPC_FUNC_IMPL(__imp__sub_83B74170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21424
	ctx.r3.s64 = ctx.r11.s64 + 21424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7417C"))) PPC_WEAK_FUNC(sub_83B7417C);
PPC_FUNC_IMPL(__imp__sub_83B7417C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74180"))) PPC_WEAK_FUNC(sub_83B74180);
PPC_FUNC_IMPL(__imp__sub_83B74180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21432
	ctx.r3.s64 = ctx.r11.s64 + 21432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7418C"))) PPC_WEAK_FUNC(sub_83B7418C);
PPC_FUNC_IMPL(__imp__sub_83B7418C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74190"))) PPC_WEAK_FUNC(sub_83B74190);
PPC_FUNC_IMPL(__imp__sub_83B74190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21440
	ctx.r3.s64 = ctx.r11.s64 + 21440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7419C"))) PPC_WEAK_FUNC(sub_83B7419C);
PPC_FUNC_IMPL(__imp__sub_83B7419C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B741A0"))) PPC_WEAK_FUNC(sub_83B741A0);
PPC_FUNC_IMPL(__imp__sub_83B741A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21448
	ctx.r3.s64 = ctx.r11.s64 + 21448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B741AC"))) PPC_WEAK_FUNC(sub_83B741AC);
PPC_FUNC_IMPL(__imp__sub_83B741AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B741B0"))) PPC_WEAK_FUNC(sub_83B741B0);
PPC_FUNC_IMPL(__imp__sub_83B741B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21456
	ctx.r3.s64 = ctx.r11.s64 + 21456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B741BC"))) PPC_WEAK_FUNC(sub_83B741BC);
PPC_FUNC_IMPL(__imp__sub_83B741BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B741C0"))) PPC_WEAK_FUNC(sub_83B741C0);
PPC_FUNC_IMPL(__imp__sub_83B741C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21464
	ctx.r3.s64 = ctx.r11.s64 + 21464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B741CC"))) PPC_WEAK_FUNC(sub_83B741CC);
PPC_FUNC_IMPL(__imp__sub_83B741CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B741D0"))) PPC_WEAK_FUNC(sub_83B741D0);
PPC_FUNC_IMPL(__imp__sub_83B741D0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-15448
	ctx.r7.s64 = ctx.r8.s64 + -15448;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-15448(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15448);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-15448(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15448, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B741F8"))) PPC_WEAK_FUNC(sub_83B741F8);
PPC_FUNC_IMPL(__imp__sub_83B741F8) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-15452
	ctx.r3.s64 = ctx.r11.s64 + -15452;
	// bl 0x83523120
	ctx.lr = 0x83B74210;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,21472
	ctx.r3.s64 = ctx.r10.s64 + 21472;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7421C;
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

__attribute__((alias("__imp__sub_83B7422C"))) PPC_WEAK_FUNC(sub_83B7422C);
PPC_FUNC_IMPL(__imp__sub_83B7422C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74230"))) PPC_WEAK_FUNC(sub_83B74230);
PPC_FUNC_IMPL(__imp__sub_83B74230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-15440
	ctx.r11.s64 = ctx.r11.s64 + -15440;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r9,255
	ctx.r9.s64 = 255;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lfs f0,9008(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stb r8,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B74270"))) PPC_WEAK_FUNC(sub_83B74270);
PPC_FUNC_IMPL(__imp__sub_83B74270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21488
	ctx.r3.s64 = ctx.r11.s64 + 21488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7427C"))) PPC_WEAK_FUNC(sub_83B7427C);
PPC_FUNC_IMPL(__imp__sub_83B7427C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74280"))) PPC_WEAK_FUNC(sub_83B74280);
PPC_FUNC_IMPL(__imp__sub_83B74280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21496
	ctx.r3.s64 = ctx.r11.s64 + 21496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7428C"))) PPC_WEAK_FUNC(sub_83B7428C);
PPC_FUNC_IMPL(__imp__sub_83B7428C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74290"))) PPC_WEAK_FUNC(sub_83B74290);
PPC_FUNC_IMPL(__imp__sub_83B74290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21504
	ctx.r3.s64 = ctx.r11.s64 + 21504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7429C"))) PPC_WEAK_FUNC(sub_83B7429C);
PPC_FUNC_IMPL(__imp__sub_83B7429C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B742A0"))) PPC_WEAK_FUNC(sub_83B742A0);
PPC_FUNC_IMPL(__imp__sub_83B742A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21512
	ctx.r3.s64 = ctx.r11.s64 + 21512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B742AC"))) PPC_WEAK_FUNC(sub_83B742AC);
PPC_FUNC_IMPL(__imp__sub_83B742AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B742B0"))) PPC_WEAK_FUNC(sub_83B742B0);
PPC_FUNC_IMPL(__imp__sub_83B742B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21520
	ctx.r3.s64 = ctx.r11.s64 + 21520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B742BC"))) PPC_WEAK_FUNC(sub_83B742BC);
PPC_FUNC_IMPL(__imp__sub_83B742BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B742C0"))) PPC_WEAK_FUNC(sub_83B742C0);
PPC_FUNC_IMPL(__imp__sub_83B742C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21528
	ctx.r3.s64 = ctx.r11.s64 + 21528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B742CC"))) PPC_WEAK_FUNC(sub_83B742CC);
PPC_FUNC_IMPL(__imp__sub_83B742CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B742D0"))) PPC_WEAK_FUNC(sub_83B742D0);
PPC_FUNC_IMPL(__imp__sub_83B742D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21536
	ctx.r3.s64 = ctx.r11.s64 + 21536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B742DC"))) PPC_WEAK_FUNC(sub_83B742DC);
PPC_FUNC_IMPL(__imp__sub_83B742DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B742E0"))) PPC_WEAK_FUNC(sub_83B742E0);
PPC_FUNC_IMPL(__imp__sub_83B742E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21544
	ctx.r3.s64 = ctx.r11.s64 + 21544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B742EC"))) PPC_WEAK_FUNC(sub_83B742EC);
PPC_FUNC_IMPL(__imp__sub_83B742EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B742F0"))) PPC_WEAK_FUNC(sub_83B742F0);
PPC_FUNC_IMPL(__imp__sub_83B742F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21552
	ctx.r3.s64 = ctx.r11.s64 + 21552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B742FC"))) PPC_WEAK_FUNC(sub_83B742FC);
PPC_FUNC_IMPL(__imp__sub_83B742FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74300"))) PPC_WEAK_FUNC(sub_83B74300);
PPC_FUNC_IMPL(__imp__sub_83B74300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21560
	ctx.r3.s64 = ctx.r11.s64 + 21560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7430C"))) PPC_WEAK_FUNC(sub_83B7430C);
PPC_FUNC_IMPL(__imp__sub_83B7430C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74310"))) PPC_WEAK_FUNC(sub_83B74310);
PPC_FUNC_IMPL(__imp__sub_83B74310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21568
	ctx.r3.s64 = ctx.r11.s64 + 21568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7431C"))) PPC_WEAK_FUNC(sub_83B7431C);
PPC_FUNC_IMPL(__imp__sub_83B7431C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74320"))) PPC_WEAK_FUNC(sub_83B74320);
PPC_FUNC_IMPL(__imp__sub_83B74320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21576
	ctx.r3.s64 = ctx.r11.s64 + 21576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7432C"))) PPC_WEAK_FUNC(sub_83B7432C);
PPC_FUNC_IMPL(__imp__sub_83B7432C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74330"))) PPC_WEAK_FUNC(sub_83B74330);
PPC_FUNC_IMPL(__imp__sub_83B74330) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-15408
	ctx.r3.s64 = ctx.r11.s64 + -15408;
	// bl 0x83523120
	ctx.lr = 0x83B74348;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,21584
	ctx.r3.s64 = ctx.r10.s64 + 21584;
	// bl 0x831cdcc8
	ctx.lr = 0x83B74354;
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

__attribute__((alias("__imp__sub_83B74364"))) PPC_WEAK_FUNC(sub_83B74364);
PPC_FUNC_IMPL(__imp__sub_83B74364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74368"))) PPC_WEAK_FUNC(sub_83B74368);
PPC_FUNC_IMPL(__imp__sub_83B74368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,-10892
	ctx.r4.s64 = ctx.r11.s64 + -10892;
	// lis r7,-31763
	ctx.r7.s64 = -2081619968;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,-15400
	ctx.r3.s64 = ctx.r7.s64 + -15400;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B74398"))) PPC_WEAK_FUNC(sub_83B74398);
PPC_FUNC_IMPL(__imp__sub_83B74398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21600
	ctx.r3.s64 = ctx.r11.s64 + 21600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B743A4"))) PPC_WEAK_FUNC(sub_83B743A4);
PPC_FUNC_IMPL(__imp__sub_83B743A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B743A8"))) PPC_WEAK_FUNC(sub_83B743A8);
PPC_FUNC_IMPL(__imp__sub_83B743A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21608
	ctx.r3.s64 = ctx.r11.s64 + 21608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B743B4"))) PPC_WEAK_FUNC(sub_83B743B4);
PPC_FUNC_IMPL(__imp__sub_83B743B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B743B8"))) PPC_WEAK_FUNC(sub_83B743B8);
PPC_FUNC_IMPL(__imp__sub_83B743B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21616
	ctx.r3.s64 = ctx.r11.s64 + 21616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B743C4"))) PPC_WEAK_FUNC(sub_83B743C4);
PPC_FUNC_IMPL(__imp__sub_83B743C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B743C8"))) PPC_WEAK_FUNC(sub_83B743C8);
PPC_FUNC_IMPL(__imp__sub_83B743C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21624
	ctx.r3.s64 = ctx.r11.s64 + 21624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B743D4"))) PPC_WEAK_FUNC(sub_83B743D4);
PPC_FUNC_IMPL(__imp__sub_83B743D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B743D8"))) PPC_WEAK_FUNC(sub_83B743D8);
PPC_FUNC_IMPL(__imp__sub_83B743D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21632
	ctx.r3.s64 = ctx.r11.s64 + 21632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B743E4"))) PPC_WEAK_FUNC(sub_83B743E4);
PPC_FUNC_IMPL(__imp__sub_83B743E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B743E8"))) PPC_WEAK_FUNC(sub_83B743E8);
PPC_FUNC_IMPL(__imp__sub_83B743E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21640
	ctx.r3.s64 = ctx.r11.s64 + 21640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B743F4"))) PPC_WEAK_FUNC(sub_83B743F4);
PPC_FUNC_IMPL(__imp__sub_83B743F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B743F8"))) PPC_WEAK_FUNC(sub_83B743F8);
PPC_FUNC_IMPL(__imp__sub_83B743F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21648
	ctx.r3.s64 = ctx.r11.s64 + 21648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B74404"))) PPC_WEAK_FUNC(sub_83B74404);
PPC_FUNC_IMPL(__imp__sub_83B74404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74408"))) PPC_WEAK_FUNC(sub_83B74408);
PPC_FUNC_IMPL(__imp__sub_83B74408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21656
	ctx.r3.s64 = ctx.r11.s64 + 21656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B74414"))) PPC_WEAK_FUNC(sub_83B74414);
PPC_FUNC_IMPL(__imp__sub_83B74414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74418"))) PPC_WEAK_FUNC(sub_83B74418);
PPC_FUNC_IMPL(__imp__sub_83B74418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21664
	ctx.r3.s64 = ctx.r11.s64 + 21664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B74424"))) PPC_WEAK_FUNC(sub_83B74424);
PPC_FUNC_IMPL(__imp__sub_83B74424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74428"))) PPC_WEAK_FUNC(sub_83B74428);
PPC_FUNC_IMPL(__imp__sub_83B74428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21672
	ctx.r3.s64 = ctx.r11.s64 + 21672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B74434"))) PPC_WEAK_FUNC(sub_83B74434);
PPC_FUNC_IMPL(__imp__sub_83B74434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74438"))) PPC_WEAK_FUNC(sub_83B74438);
PPC_FUNC_IMPL(__imp__sub_83B74438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21680
	ctx.r3.s64 = ctx.r11.s64 + 21680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B74444"))) PPC_WEAK_FUNC(sub_83B74444);
PPC_FUNC_IMPL(__imp__sub_83B74444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74448"))) PPC_WEAK_FUNC(sub_83B74448);
PPC_FUNC_IMPL(__imp__sub_83B74448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21688
	ctx.r3.s64 = ctx.r11.s64 + 21688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B74454"))) PPC_WEAK_FUNC(sub_83B74454);
PPC_FUNC_IMPL(__imp__sub_83B74454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74458"))) PPC_WEAK_FUNC(sub_83B74458);
PPC_FUNC_IMPL(__imp__sub_83B74458) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-15388
	ctx.r3.s64 = ctx.r11.s64 + -15388;
	// bl 0x83523120
	ctx.lr = 0x83B74470;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,21696
	ctx.r3.s64 = ctx.r10.s64 + 21696;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7447C;
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

__attribute__((alias("__imp__sub_83B7448C"))) PPC_WEAK_FUNC(sub_83B7448C);
PPC_FUNC_IMPL(__imp__sub_83B7448C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74490"))) PPC_WEAK_FUNC(sub_83B74490);
PPC_FUNC_IMPL(__imp__sub_83B74490) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-15384
	ctx.r7.s64 = ctx.r8.s64 + -15384;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-15384(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15384);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-15384(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15384, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B744B8"))) PPC_WEAK_FUNC(sub_83B744B8);
PPC_FUNC_IMPL(__imp__sub_83B744B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,-10632
	ctx.r4.s64 = ctx.r11.s64 + -10632;
	// lis r7,-31763
	ctx.r7.s64 = -2081619968;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,72
	ctx.r5.s64 = ctx.r4.s64 + 72;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,-15376
	ctx.r3.s64 = ctx.r7.s64 + -15376;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B744E8"))) PPC_WEAK_FUNC(sub_83B744E8);
PPC_FUNC_IMPL(__imp__sub_83B744E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-15364
	ctx.r11.s64 = ctx.r11.s64 + -15364;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r9,255
	ctx.r9.s64 = 255;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lfs f0,9008(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stb r8,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B74528"))) PPC_WEAK_FUNC(sub_83B74528);
PPC_FUNC_IMPL(__imp__sub_83B74528) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// addi r4,r11,-10328
	ctx.r4.s64 = ctx.r11.s64 + -10328;
	// addi r3,r10,28800
	ctx.r3.s64 = ctx.r10.s64 + 28800;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83B7454C;
	sub_8259CC28(ctx, base);
	// lis r9,-31793
	ctx.r9.s64 = -2083586048;
	// addi r3,r9,21712
	ctx.r3.s64 = ctx.r9.s64 + 21712;
	// bl 0x831cdcc8
	ctx.lr = 0x83B74558;
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

__attribute__((alias("__imp__sub_83B74568"))) PPC_WEAK_FUNC(sub_83B74568);
PPC_FUNC_IMPL(__imp__sub_83B74568) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31780
	ctx.r7.s64 = -2082734080;
	// lis r5,-31780
	ctx.r5.s64 = -2082734080;
	// addi r6,r7,28828
	ctx.r6.s64 = ctx.r7.s64 + 28828;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,28696(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 28696);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-15384(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -15384);
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
	// std r9,28828(r7)
	PPC_STORE_U64(ctx.r7.u32 + 28828, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B745B0"))) PPC_WEAK_FUNC(sub_83B745B0);
PPC_FUNC_IMPL(__imp__sub_83B745B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21816
	ctx.r3.s64 = ctx.r11.s64 + 21816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B745BC"))) PPC_WEAK_FUNC(sub_83B745BC);
PPC_FUNC_IMPL(__imp__sub_83B745BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B745C0"))) PPC_WEAK_FUNC(sub_83B745C0);
PPC_FUNC_IMPL(__imp__sub_83B745C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21824
	ctx.r3.s64 = ctx.r11.s64 + 21824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B745CC"))) PPC_WEAK_FUNC(sub_83B745CC);
PPC_FUNC_IMPL(__imp__sub_83B745CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B745D0"))) PPC_WEAK_FUNC(sub_83B745D0);
PPC_FUNC_IMPL(__imp__sub_83B745D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21832
	ctx.r3.s64 = ctx.r11.s64 + 21832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B745DC"))) PPC_WEAK_FUNC(sub_83B745DC);
PPC_FUNC_IMPL(__imp__sub_83B745DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B745E0"))) PPC_WEAK_FUNC(sub_83B745E0);
PPC_FUNC_IMPL(__imp__sub_83B745E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21840
	ctx.r3.s64 = ctx.r11.s64 + 21840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B745EC"))) PPC_WEAK_FUNC(sub_83B745EC);
PPC_FUNC_IMPL(__imp__sub_83B745EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B745F0"))) PPC_WEAK_FUNC(sub_83B745F0);
PPC_FUNC_IMPL(__imp__sub_83B745F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21848
	ctx.r3.s64 = ctx.r11.s64 + 21848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B745FC"))) PPC_WEAK_FUNC(sub_83B745FC);
PPC_FUNC_IMPL(__imp__sub_83B745FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74600"))) PPC_WEAK_FUNC(sub_83B74600);
PPC_FUNC_IMPL(__imp__sub_83B74600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21856
	ctx.r3.s64 = ctx.r11.s64 + 21856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7460C"))) PPC_WEAK_FUNC(sub_83B7460C);
PPC_FUNC_IMPL(__imp__sub_83B7460C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74610"))) PPC_WEAK_FUNC(sub_83B74610);
PPC_FUNC_IMPL(__imp__sub_83B74610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21864
	ctx.r3.s64 = ctx.r11.s64 + 21864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7461C"))) PPC_WEAK_FUNC(sub_83B7461C);
PPC_FUNC_IMPL(__imp__sub_83B7461C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74620"))) PPC_WEAK_FUNC(sub_83B74620);
PPC_FUNC_IMPL(__imp__sub_83B74620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21872
	ctx.r3.s64 = ctx.r11.s64 + 21872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7462C"))) PPC_WEAK_FUNC(sub_83B7462C);
PPC_FUNC_IMPL(__imp__sub_83B7462C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74630"))) PPC_WEAK_FUNC(sub_83B74630);
PPC_FUNC_IMPL(__imp__sub_83B74630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21880
	ctx.r3.s64 = ctx.r11.s64 + 21880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7463C"))) PPC_WEAK_FUNC(sub_83B7463C);
PPC_FUNC_IMPL(__imp__sub_83B7463C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74640"))) PPC_WEAK_FUNC(sub_83B74640);
PPC_FUNC_IMPL(__imp__sub_83B74640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21888
	ctx.r3.s64 = ctx.r11.s64 + 21888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7464C"))) PPC_WEAK_FUNC(sub_83B7464C);
PPC_FUNC_IMPL(__imp__sub_83B7464C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74650"))) PPC_WEAK_FUNC(sub_83B74650);
PPC_FUNC_IMPL(__imp__sub_83B74650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21896
	ctx.r3.s64 = ctx.r11.s64 + 21896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7465C"))) PPC_WEAK_FUNC(sub_83B7465C);
PPC_FUNC_IMPL(__imp__sub_83B7465C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74660"))) PPC_WEAK_FUNC(sub_83B74660);
PPC_FUNC_IMPL(__imp__sub_83B74660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21904
	ctx.r3.s64 = ctx.r11.s64 + 21904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7466C"))) PPC_WEAK_FUNC(sub_83B7466C);
PPC_FUNC_IMPL(__imp__sub_83B7466C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74670"))) PPC_WEAK_FUNC(sub_83B74670);
PPC_FUNC_IMPL(__imp__sub_83B74670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21912
	ctx.r3.s64 = ctx.r11.s64 + 21912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7467C"))) PPC_WEAK_FUNC(sub_83B7467C);
PPC_FUNC_IMPL(__imp__sub_83B7467C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74680"))) PPC_WEAK_FUNC(sub_83B74680);
PPC_FUNC_IMPL(__imp__sub_83B74680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21920
	ctx.r3.s64 = ctx.r11.s64 + 21920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7468C"))) PPC_WEAK_FUNC(sub_83B7468C);
PPC_FUNC_IMPL(__imp__sub_83B7468C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74690"))) PPC_WEAK_FUNC(sub_83B74690);
PPC_FUNC_IMPL(__imp__sub_83B74690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21928
	ctx.r3.s64 = ctx.r11.s64 + 21928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7469C"))) PPC_WEAK_FUNC(sub_83B7469C);
PPC_FUNC_IMPL(__imp__sub_83B7469C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B746A0"))) PPC_WEAK_FUNC(sub_83B746A0);
PPC_FUNC_IMPL(__imp__sub_83B746A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21936
	ctx.r3.s64 = ctx.r11.s64 + 21936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B746AC"))) PPC_WEAK_FUNC(sub_83B746AC);
PPC_FUNC_IMPL(__imp__sub_83B746AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B746B0"))) PPC_WEAK_FUNC(sub_83B746B0);
PPC_FUNC_IMPL(__imp__sub_83B746B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21944
	ctx.r3.s64 = ctx.r11.s64 + 21944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B746BC"))) PPC_WEAK_FUNC(sub_83B746BC);
PPC_FUNC_IMPL(__imp__sub_83B746BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B746C0"))) PPC_WEAK_FUNC(sub_83B746C0);
PPC_FUNC_IMPL(__imp__sub_83B746C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21952
	ctx.r3.s64 = ctx.r11.s64 + 21952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B746CC"))) PPC_WEAK_FUNC(sub_83B746CC);
PPC_FUNC_IMPL(__imp__sub_83B746CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B746D0"))) PPC_WEAK_FUNC(sub_83B746D0);
PPC_FUNC_IMPL(__imp__sub_83B746D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21960
	ctx.r3.s64 = ctx.r11.s64 + 21960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B746DC"))) PPC_WEAK_FUNC(sub_83B746DC);
PPC_FUNC_IMPL(__imp__sub_83B746DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B746E0"))) PPC_WEAK_FUNC(sub_83B746E0);
PPC_FUNC_IMPL(__imp__sub_83B746E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21968
	ctx.r3.s64 = ctx.r11.s64 + 21968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B746EC"))) PPC_WEAK_FUNC(sub_83B746EC);
PPC_FUNC_IMPL(__imp__sub_83B746EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B746F0"))) PPC_WEAK_FUNC(sub_83B746F0);
PPC_FUNC_IMPL(__imp__sub_83B746F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21976
	ctx.r3.s64 = ctx.r11.s64 + 21976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B746FC"))) PPC_WEAK_FUNC(sub_83B746FC);
PPC_FUNC_IMPL(__imp__sub_83B746FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74700"))) PPC_WEAK_FUNC(sub_83B74700);
PPC_FUNC_IMPL(__imp__sub_83B74700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21984
	ctx.r3.s64 = ctx.r11.s64 + 21984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7470C"))) PPC_WEAK_FUNC(sub_83B7470C);
PPC_FUNC_IMPL(__imp__sub_83B7470C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74710"))) PPC_WEAK_FUNC(sub_83B74710);
PPC_FUNC_IMPL(__imp__sub_83B74710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,21992
	ctx.r3.s64 = ctx.r11.s64 + 21992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7471C"))) PPC_WEAK_FUNC(sub_83B7471C);
PPC_FUNC_IMPL(__imp__sub_83B7471C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74720"))) PPC_WEAK_FUNC(sub_83B74720);
PPC_FUNC_IMPL(__imp__sub_83B74720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,22000
	ctx.r3.s64 = ctx.r11.s64 + 22000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7472C"))) PPC_WEAK_FUNC(sub_83B7472C);
PPC_FUNC_IMPL(__imp__sub_83B7472C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74730"))) PPC_WEAK_FUNC(sub_83B74730);
PPC_FUNC_IMPL(__imp__sub_83B74730) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-15328
	ctx.r3.s64 = ctx.r11.s64 + -15328;
	// bl 0x83523120
	ctx.lr = 0x83B74748;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,22008
	ctx.r3.s64 = ctx.r10.s64 + 22008;
	// bl 0x831cdcc8
	ctx.lr = 0x83B74754;
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

__attribute__((alias("__imp__sub_83B74764"))) PPC_WEAK_FUNC(sub_83B74764);
PPC_FUNC_IMPL(__imp__sub_83B74764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74768"))) PPC_WEAK_FUNC(sub_83B74768);
PPC_FUNC_IMPL(__imp__sub_83B74768) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-15324
	ctx.r7.s64 = ctx.r8.s64 + -15324;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-15324(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15324);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-15324(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15324, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B74790"))) PPC_WEAK_FUNC(sub_83B74790);
PPC_FUNC_IMPL(__imp__sub_83B74790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,-9180
	ctx.r4.s64 = ctx.r11.s64 + -9180;
	// lis r7,-31763
	ctx.r7.s64 = -2081619968;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,-15316
	ctx.r3.s64 = ctx.r7.s64 + -15316;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B747C0"))) PPC_WEAK_FUNC(sub_83B747C0);
PPC_FUNC_IMPL(__imp__sub_83B747C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,22024
	ctx.r3.s64 = ctx.r11.s64 + 22024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B747CC"))) PPC_WEAK_FUNC(sub_83B747CC);
PPC_FUNC_IMPL(__imp__sub_83B747CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B747D0"))) PPC_WEAK_FUNC(sub_83B747D0);
PPC_FUNC_IMPL(__imp__sub_83B747D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,22032
	ctx.r3.s64 = ctx.r11.s64 + 22032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B747DC"))) PPC_WEAK_FUNC(sub_83B747DC);
PPC_FUNC_IMPL(__imp__sub_83B747DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B747E0"))) PPC_WEAK_FUNC(sub_83B747E0);
PPC_FUNC_IMPL(__imp__sub_83B747E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,22040
	ctx.r3.s64 = ctx.r11.s64 + 22040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B747EC"))) PPC_WEAK_FUNC(sub_83B747EC);
PPC_FUNC_IMPL(__imp__sub_83B747EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B747F0"))) PPC_WEAK_FUNC(sub_83B747F0);
PPC_FUNC_IMPL(__imp__sub_83B747F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,22048
	ctx.r3.s64 = ctx.r11.s64 + 22048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B747FC"))) PPC_WEAK_FUNC(sub_83B747FC);
PPC_FUNC_IMPL(__imp__sub_83B747FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74800"))) PPC_WEAK_FUNC(sub_83B74800);
PPC_FUNC_IMPL(__imp__sub_83B74800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,22056
	ctx.r3.s64 = ctx.r11.s64 + 22056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7480C"))) PPC_WEAK_FUNC(sub_83B7480C);
PPC_FUNC_IMPL(__imp__sub_83B7480C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74810"))) PPC_WEAK_FUNC(sub_83B74810);
PPC_FUNC_IMPL(__imp__sub_83B74810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,22064
	ctx.r3.s64 = ctx.r11.s64 + 22064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7481C"))) PPC_WEAK_FUNC(sub_83B7481C);
PPC_FUNC_IMPL(__imp__sub_83B7481C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74820"))) PPC_WEAK_FUNC(sub_83B74820);
PPC_FUNC_IMPL(__imp__sub_83B74820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,22072
	ctx.r3.s64 = ctx.r11.s64 + 22072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7482C"))) PPC_WEAK_FUNC(sub_83B7482C);
PPC_FUNC_IMPL(__imp__sub_83B7482C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74830"))) PPC_WEAK_FUNC(sub_83B74830);
PPC_FUNC_IMPL(__imp__sub_83B74830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,22080
	ctx.r3.s64 = ctx.r11.s64 + 22080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7483C"))) PPC_WEAK_FUNC(sub_83B7483C);
PPC_FUNC_IMPL(__imp__sub_83B7483C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74840"))) PPC_WEAK_FUNC(sub_83B74840);
PPC_FUNC_IMPL(__imp__sub_83B74840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,22088
	ctx.r3.s64 = ctx.r11.s64 + 22088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7484C"))) PPC_WEAK_FUNC(sub_83B7484C);
PPC_FUNC_IMPL(__imp__sub_83B7484C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74850"))) PPC_WEAK_FUNC(sub_83B74850);
PPC_FUNC_IMPL(__imp__sub_83B74850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,22096
	ctx.r3.s64 = ctx.r11.s64 + 22096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7485C"))) PPC_WEAK_FUNC(sub_83B7485C);
PPC_FUNC_IMPL(__imp__sub_83B7485C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74860"))) PPC_WEAK_FUNC(sub_83B74860);
PPC_FUNC_IMPL(__imp__sub_83B74860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,22104
	ctx.r3.s64 = ctx.r11.s64 + 22104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7486C"))) PPC_WEAK_FUNC(sub_83B7486C);
PPC_FUNC_IMPL(__imp__sub_83B7486C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74870"))) PPC_WEAK_FUNC(sub_83B74870);
PPC_FUNC_IMPL(__imp__sub_83B74870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,22112
	ctx.r3.s64 = ctx.r11.s64 + 22112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7487C"))) PPC_WEAK_FUNC(sub_83B7487C);
PPC_FUNC_IMPL(__imp__sub_83B7487C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74880"))) PPC_WEAK_FUNC(sub_83B74880);
PPC_FUNC_IMPL(__imp__sub_83B74880) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-15300
	ctx.r7.s64 = ctx.r8.s64 + -15300;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-15300(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15300);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-15300(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15300, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B748A8"))) PPC_WEAK_FUNC(sub_83B748A8);
PPC_FUNC_IMPL(__imp__sub_83B748A8) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-15304
	ctx.r3.s64 = ctx.r11.s64 + -15304;
	// bl 0x83523120
	ctx.lr = 0x83B748C0;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,22120
	ctx.r3.s64 = ctx.r10.s64 + 22120;
	// bl 0x831cdcc8
	ctx.lr = 0x83B748CC;
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

__attribute__((alias("__imp__sub_83B748DC"))) PPC_WEAK_FUNC(sub_83B748DC);
PPC_FUNC_IMPL(__imp__sub_83B748DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B748E0"))) PPC_WEAK_FUNC(sub_83B748E0);
PPC_FUNC_IMPL(__imp__sub_83B748E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,22136
	ctx.r3.s64 = ctx.r11.s64 + 22136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B748EC"))) PPC_WEAK_FUNC(sub_83B748EC);
PPC_FUNC_IMPL(__imp__sub_83B748EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B748F0"))) PPC_WEAK_FUNC(sub_83B748F0);
PPC_FUNC_IMPL(__imp__sub_83B748F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,22144
	ctx.r3.s64 = ctx.r11.s64 + 22144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B748FC"))) PPC_WEAK_FUNC(sub_83B748FC);
PPC_FUNC_IMPL(__imp__sub_83B748FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74900"))) PPC_WEAK_FUNC(sub_83B74900);
PPC_FUNC_IMPL(__imp__sub_83B74900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,22152
	ctx.r3.s64 = ctx.r11.s64 + 22152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7490C"))) PPC_WEAK_FUNC(sub_83B7490C);
PPC_FUNC_IMPL(__imp__sub_83B7490C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74910"))) PPC_WEAK_FUNC(sub_83B74910);
PPC_FUNC_IMPL(__imp__sub_83B74910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,22160
	ctx.r3.s64 = ctx.r11.s64 + 22160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7491C"))) PPC_WEAK_FUNC(sub_83B7491C);
PPC_FUNC_IMPL(__imp__sub_83B7491C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74920"))) PPC_WEAK_FUNC(sub_83B74920);
PPC_FUNC_IMPL(__imp__sub_83B74920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,22168
	ctx.r3.s64 = ctx.r11.s64 + 22168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7492C"))) PPC_WEAK_FUNC(sub_83B7492C);
PPC_FUNC_IMPL(__imp__sub_83B7492C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74930"))) PPC_WEAK_FUNC(sub_83B74930);
PPC_FUNC_IMPL(__imp__sub_83B74930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,22176
	ctx.r3.s64 = ctx.r11.s64 + 22176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7493C"))) PPC_WEAK_FUNC(sub_83B7493C);
PPC_FUNC_IMPL(__imp__sub_83B7493C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74940"))) PPC_WEAK_FUNC(sub_83B74940);
PPC_FUNC_IMPL(__imp__sub_83B74940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,22184
	ctx.r3.s64 = ctx.r11.s64 + 22184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7494C"))) PPC_WEAK_FUNC(sub_83B7494C);
PPC_FUNC_IMPL(__imp__sub_83B7494C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74950"))) PPC_WEAK_FUNC(sub_83B74950);
PPC_FUNC_IMPL(__imp__sub_83B74950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,22192
	ctx.r3.s64 = ctx.r11.s64 + 22192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7495C"))) PPC_WEAK_FUNC(sub_83B7495C);
PPC_FUNC_IMPL(__imp__sub_83B7495C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74960"))) PPC_WEAK_FUNC(sub_83B74960);
PPC_FUNC_IMPL(__imp__sub_83B74960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,22200
	ctx.r3.s64 = ctx.r11.s64 + 22200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7496C"))) PPC_WEAK_FUNC(sub_83B7496C);
PPC_FUNC_IMPL(__imp__sub_83B7496C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74970"))) PPC_WEAK_FUNC(sub_83B74970);
PPC_FUNC_IMPL(__imp__sub_83B74970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,22208
	ctx.r3.s64 = ctx.r11.s64 + 22208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7497C"))) PPC_WEAK_FUNC(sub_83B7497C);
PPC_FUNC_IMPL(__imp__sub_83B7497C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74980"))) PPC_WEAK_FUNC(sub_83B74980);
PPC_FUNC_IMPL(__imp__sub_83B74980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,22216
	ctx.r3.s64 = ctx.r11.s64 + 22216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7498C"))) PPC_WEAK_FUNC(sub_83B7498C);
PPC_FUNC_IMPL(__imp__sub_83B7498C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74990"))) PPC_WEAK_FUNC(sub_83B74990);
PPC_FUNC_IMPL(__imp__sub_83B74990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,22224
	ctx.r3.s64 = ctx.r11.s64 + 22224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7499C"))) PPC_WEAK_FUNC(sub_83B7499C);
PPC_FUNC_IMPL(__imp__sub_83B7499C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B749A0"))) PPC_WEAK_FUNC(sub_83B749A0);
PPC_FUNC_IMPL(__imp__sub_83B749A0) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-15292
	ctx.r3.s64 = ctx.r11.s64 + -15292;
	// bl 0x83523120
	ctx.lr = 0x83B749B8;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,22232
	ctx.r3.s64 = ctx.r10.s64 + 22232;
	// bl 0x831cdcc8
	ctx.lr = 0x83B749C4;
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

__attribute__((alias("__imp__sub_83B749D4"))) PPC_WEAK_FUNC(sub_83B749D4);
PPC_FUNC_IMPL(__imp__sub_83B749D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B749D8"))) PPC_WEAK_FUNC(sub_83B749D8);
PPC_FUNC_IMPL(__imp__sub_83B749D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,22248
	ctx.r3.s64 = ctx.r11.s64 + 22248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B749E4"))) PPC_WEAK_FUNC(sub_83B749E4);
PPC_FUNC_IMPL(__imp__sub_83B749E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B749E8"))) PPC_WEAK_FUNC(sub_83B749E8);
PPC_FUNC_IMPL(__imp__sub_83B749E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,22256
	ctx.r3.s64 = ctx.r11.s64 + 22256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B749F4"))) PPC_WEAK_FUNC(sub_83B749F4);
PPC_FUNC_IMPL(__imp__sub_83B749F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B749F8"))) PPC_WEAK_FUNC(sub_83B749F8);
PPC_FUNC_IMPL(__imp__sub_83B749F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,22264
	ctx.r3.s64 = ctx.r11.s64 + 22264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B74A04"))) PPC_WEAK_FUNC(sub_83B74A04);
PPC_FUNC_IMPL(__imp__sub_83B74A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74A08"))) PPC_WEAK_FUNC(sub_83B74A08);
PPC_FUNC_IMPL(__imp__sub_83B74A08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,22272
	ctx.r3.s64 = ctx.r11.s64 + 22272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B74A14"))) PPC_WEAK_FUNC(sub_83B74A14);
PPC_FUNC_IMPL(__imp__sub_83B74A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74A18"))) PPC_WEAK_FUNC(sub_83B74A18);
PPC_FUNC_IMPL(__imp__sub_83B74A18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,22280
	ctx.r3.s64 = ctx.r11.s64 + 22280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B74A24"))) PPC_WEAK_FUNC(sub_83B74A24);
PPC_FUNC_IMPL(__imp__sub_83B74A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74A28"))) PPC_WEAK_FUNC(sub_83B74A28);
PPC_FUNC_IMPL(__imp__sub_83B74A28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,22288
	ctx.r3.s64 = ctx.r11.s64 + 22288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B74A34"))) PPC_WEAK_FUNC(sub_83B74A34);
PPC_FUNC_IMPL(__imp__sub_83B74A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74A38"))) PPC_WEAK_FUNC(sub_83B74A38);
PPC_FUNC_IMPL(__imp__sub_83B74A38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,22296
	ctx.r3.s64 = ctx.r11.s64 + 22296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B74A44"))) PPC_WEAK_FUNC(sub_83B74A44);
PPC_FUNC_IMPL(__imp__sub_83B74A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74A48"))) PPC_WEAK_FUNC(sub_83B74A48);
PPC_FUNC_IMPL(__imp__sub_83B74A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,22304
	ctx.r3.s64 = ctx.r11.s64 + 22304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B74A54"))) PPC_WEAK_FUNC(sub_83B74A54);
PPC_FUNC_IMPL(__imp__sub_83B74A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74A58"))) PPC_WEAK_FUNC(sub_83B74A58);
PPC_FUNC_IMPL(__imp__sub_83B74A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,22312
	ctx.r3.s64 = ctx.r11.s64 + 22312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B74A64"))) PPC_WEAK_FUNC(sub_83B74A64);
PPC_FUNC_IMPL(__imp__sub_83B74A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74A68"))) PPC_WEAK_FUNC(sub_83B74A68);
PPC_FUNC_IMPL(__imp__sub_83B74A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,22320
	ctx.r3.s64 = ctx.r11.s64 + 22320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B74A74"))) PPC_WEAK_FUNC(sub_83B74A74);
PPC_FUNC_IMPL(__imp__sub_83B74A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74A78"))) PPC_WEAK_FUNC(sub_83B74A78);
PPC_FUNC_IMPL(__imp__sub_83B74A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,22328
	ctx.r3.s64 = ctx.r11.s64 + 22328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B74A84"))) PPC_WEAK_FUNC(sub_83B74A84);
PPC_FUNC_IMPL(__imp__sub_83B74A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74A88"))) PPC_WEAK_FUNC(sub_83B74A88);
PPC_FUNC_IMPL(__imp__sub_83B74A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,22336
	ctx.r3.s64 = ctx.r11.s64 + 22336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B74A94"))) PPC_WEAK_FUNC(sub_83B74A94);
PPC_FUNC_IMPL(__imp__sub_83B74A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74A98"))) PPC_WEAK_FUNC(sub_83B74A98);
PPC_FUNC_IMPL(__imp__sub_83B74A98) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-15280
	ctx.r7.s64 = ctx.r8.s64 + -15280;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-15280(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15280);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-15280(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15280, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B74AC0"))) PPC_WEAK_FUNC(sub_83B74AC0);
PPC_FUNC_IMPL(__imp__sub_83B74AC0) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-15284
	ctx.r3.s64 = ctx.r11.s64 + -15284;
	// bl 0x83523120
	ctx.lr = 0x83B74AD8;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,22344
	ctx.r3.s64 = ctx.r10.s64 + 22344;
	// bl 0x831cdcc8
	ctx.lr = 0x83B74AE4;
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

__attribute__((alias("__imp__sub_83B74AF4"))) PPC_WEAK_FUNC(sub_83B74AF4);
PPC_FUNC_IMPL(__imp__sub_83B74AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74AF8"))) PPC_WEAK_FUNC(sub_83B74AF8);
PPC_FUNC_IMPL(__imp__sub_83B74AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,22360
	ctx.r3.s64 = ctx.r11.s64 + 22360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B74B04"))) PPC_WEAK_FUNC(sub_83B74B04);
PPC_FUNC_IMPL(__imp__sub_83B74B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74B08"))) PPC_WEAK_FUNC(sub_83B74B08);
PPC_FUNC_IMPL(__imp__sub_83B74B08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,22368
	ctx.r3.s64 = ctx.r11.s64 + 22368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B74B14"))) PPC_WEAK_FUNC(sub_83B74B14);
PPC_FUNC_IMPL(__imp__sub_83B74B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74B18"))) PPC_WEAK_FUNC(sub_83B74B18);
PPC_FUNC_IMPL(__imp__sub_83B74B18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,22376
	ctx.r3.s64 = ctx.r11.s64 + 22376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B74B24"))) PPC_WEAK_FUNC(sub_83B74B24);
PPC_FUNC_IMPL(__imp__sub_83B74B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74B28"))) PPC_WEAK_FUNC(sub_83B74B28);
PPC_FUNC_IMPL(__imp__sub_83B74B28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,22384
	ctx.r3.s64 = ctx.r11.s64 + 22384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B74B34"))) PPC_WEAK_FUNC(sub_83B74B34);
PPC_FUNC_IMPL(__imp__sub_83B74B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74B38"))) PPC_WEAK_FUNC(sub_83B74B38);
PPC_FUNC_IMPL(__imp__sub_83B74B38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,22392
	ctx.r3.s64 = ctx.r11.s64 + 22392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B74B44"))) PPC_WEAK_FUNC(sub_83B74B44);
PPC_FUNC_IMPL(__imp__sub_83B74B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74B48"))) PPC_WEAK_FUNC(sub_83B74B48);
PPC_FUNC_IMPL(__imp__sub_83B74B48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,22400
	ctx.r3.s64 = ctx.r11.s64 + 22400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B74B54"))) PPC_WEAK_FUNC(sub_83B74B54);
PPC_FUNC_IMPL(__imp__sub_83B74B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74B58"))) PPC_WEAK_FUNC(sub_83B74B58);
PPC_FUNC_IMPL(__imp__sub_83B74B58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,22408
	ctx.r3.s64 = ctx.r11.s64 + 22408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B74B64"))) PPC_WEAK_FUNC(sub_83B74B64);
PPC_FUNC_IMPL(__imp__sub_83B74B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74B68"))) PPC_WEAK_FUNC(sub_83B74B68);
PPC_FUNC_IMPL(__imp__sub_83B74B68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,22416
	ctx.r3.s64 = ctx.r11.s64 + 22416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B74B74"))) PPC_WEAK_FUNC(sub_83B74B74);
PPC_FUNC_IMPL(__imp__sub_83B74B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74B78"))) PPC_WEAK_FUNC(sub_83B74B78);
PPC_FUNC_IMPL(__imp__sub_83B74B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,22424
	ctx.r3.s64 = ctx.r11.s64 + 22424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B74B84"))) PPC_WEAK_FUNC(sub_83B74B84);
PPC_FUNC_IMPL(__imp__sub_83B74B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74B88"))) PPC_WEAK_FUNC(sub_83B74B88);
PPC_FUNC_IMPL(__imp__sub_83B74B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,22432
	ctx.r3.s64 = ctx.r11.s64 + 22432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B74B94"))) PPC_WEAK_FUNC(sub_83B74B94);
PPC_FUNC_IMPL(__imp__sub_83B74B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74B98"))) PPC_WEAK_FUNC(sub_83B74B98);
PPC_FUNC_IMPL(__imp__sub_83B74B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,22440
	ctx.r3.s64 = ctx.r11.s64 + 22440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B74BA4"))) PPC_WEAK_FUNC(sub_83B74BA4);
PPC_FUNC_IMPL(__imp__sub_83B74BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74BA8"))) PPC_WEAK_FUNC(sub_83B74BA8);
PPC_FUNC_IMPL(__imp__sub_83B74BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,22448
	ctx.r3.s64 = ctx.r11.s64 + 22448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B74BB4"))) PPC_WEAK_FUNC(sub_83B74BB4);
PPC_FUNC_IMPL(__imp__sub_83B74BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74BB8"))) PPC_WEAK_FUNC(sub_83B74BB8);
PPC_FUNC_IMPL(__imp__sub_83B74BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-15268
	ctx.r7.s64 = ctx.r8.s64 + -15268;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-15268(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15268);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-15268(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15268, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B74BE0"))) PPC_WEAK_FUNC(sub_83B74BE0);
PPC_FUNC_IMPL(__imp__sub_83B74BE0) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-15272
	ctx.r3.s64 = ctx.r11.s64 + -15272;
	// bl 0x83523120
	ctx.lr = 0x83B74BF8;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,22456
	ctx.r3.s64 = ctx.r10.s64 + 22456;
	// bl 0x831cdcc8
	ctx.lr = 0x83B74C04;
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

__attribute__((alias("__imp__sub_83B74C14"))) PPC_WEAK_FUNC(sub_83B74C14);
PPC_FUNC_IMPL(__imp__sub_83B74C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74C18"))) PPC_WEAK_FUNC(sub_83B74C18);
PPC_FUNC_IMPL(__imp__sub_83B74C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,22472
	ctx.r3.s64 = ctx.r11.s64 + 22472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B74C24"))) PPC_WEAK_FUNC(sub_83B74C24);
PPC_FUNC_IMPL(__imp__sub_83B74C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74C28"))) PPC_WEAK_FUNC(sub_83B74C28);
PPC_FUNC_IMPL(__imp__sub_83B74C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,22480
	ctx.r3.s64 = ctx.r11.s64 + 22480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B74C34"))) PPC_WEAK_FUNC(sub_83B74C34);
PPC_FUNC_IMPL(__imp__sub_83B74C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B74C38"))) PPC_WEAK_FUNC(sub_83B74C38);
PPC_FUNC_IMPL(__imp__sub_83B74C38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,22488
	ctx.r3.s64 = ctx.r11.s64 + 22488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B74C44"))) PPC_WEAK_FUNC(sub_83B74C44);
PPC_FUNC_IMPL(__imp__sub_83B74C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

