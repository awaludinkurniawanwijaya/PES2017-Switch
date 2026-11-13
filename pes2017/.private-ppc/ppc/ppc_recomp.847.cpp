#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C7FF14"))) PPC_WEAK_FUNC(sub_83C7FF14);
PPC_FUNC_IMPL(__imp__sub_83C7FF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7FF18"))) PPC_WEAK_FUNC(sub_83C7FF18);
PPC_FUNC_IMPL(__imp__sub_83C7FF18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10568
	ctx.r3.s64 = ctx.r11.s64 + -10568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7FF24"))) PPC_WEAK_FUNC(sub_83C7FF24);
PPC_FUNC_IMPL(__imp__sub_83C7FF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7FF28"))) PPC_WEAK_FUNC(sub_83C7FF28);
PPC_FUNC_IMPL(__imp__sub_83C7FF28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10560
	ctx.r3.s64 = ctx.r11.s64 + -10560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7FF34"))) PPC_WEAK_FUNC(sub_83C7FF34);
PPC_FUNC_IMPL(__imp__sub_83C7FF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7FF38"))) PPC_WEAK_FUNC(sub_83C7FF38);
PPC_FUNC_IMPL(__imp__sub_83C7FF38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10552
	ctx.r3.s64 = ctx.r11.s64 + -10552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7FF44"))) PPC_WEAK_FUNC(sub_83C7FF44);
PPC_FUNC_IMPL(__imp__sub_83C7FF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7FF48"))) PPC_WEAK_FUNC(sub_83C7FF48);
PPC_FUNC_IMPL(__imp__sub_83C7FF48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10544
	ctx.r3.s64 = ctx.r11.s64 + -10544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7FF54"))) PPC_WEAK_FUNC(sub_83C7FF54);
PPC_FUNC_IMPL(__imp__sub_83C7FF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7FF58"))) PPC_WEAK_FUNC(sub_83C7FF58);
PPC_FUNC_IMPL(__imp__sub_83C7FF58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10536
	ctx.r3.s64 = ctx.r11.s64 + -10536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7FF64"))) PPC_WEAK_FUNC(sub_83C7FF64);
PPC_FUNC_IMPL(__imp__sub_83C7FF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7FF68"))) PPC_WEAK_FUNC(sub_83C7FF68);
PPC_FUNC_IMPL(__imp__sub_83C7FF68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10528
	ctx.r3.s64 = ctx.r11.s64 + -10528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7FF74"))) PPC_WEAK_FUNC(sub_83C7FF74);
PPC_FUNC_IMPL(__imp__sub_83C7FF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7FF78"))) PPC_WEAK_FUNC(sub_83C7FF78);
PPC_FUNC_IMPL(__imp__sub_83C7FF78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10520
	ctx.r3.s64 = ctx.r11.s64 + -10520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7FF84"))) PPC_WEAK_FUNC(sub_83C7FF84);
PPC_FUNC_IMPL(__imp__sub_83C7FF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7FF88"))) PPC_WEAK_FUNC(sub_83C7FF88);
PPC_FUNC_IMPL(__imp__sub_83C7FF88) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,20096
	ctx.r7.s64 = ctx.r8.s64 + 20096;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,20096(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20096);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,20096(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20096, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C7FFB0"))) PPC_WEAK_FUNC(sub_83C7FFB0);
PPC_FUNC_IMPL(__imp__sub_83C7FFB0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,9504
	ctx.r6.s64 = ctx.r7.s64 + 9504;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,9432(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 9432);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,20096(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20096);
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
	// std r9,9504(r7)
	PPC_STORE_U64(ctx.r7.u32 + 9504, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C7FFF8"))) PPC_WEAK_FUNC(sub_83C7FFF8);
PPC_FUNC_IMPL(__imp__sub_83C7FFF8) {
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
	// addi r3,r11,20080
	ctx.r3.s64 = ctx.r11.s64 + 20080;
	// bl 0x83523120
	ctx.lr = 0x83C80010;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-10512
	ctx.r3.s64 = ctx.r10.s64 + -10512;
	// bl 0x831cdcc8
	ctx.lr = 0x83C8001C;
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

__attribute__((alias("__imp__sub_83C8002C"))) PPC_WEAK_FUNC(sub_83C8002C);
PPC_FUNC_IMPL(__imp__sub_83C8002C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80030"))) PPC_WEAK_FUNC(sub_83C80030);
PPC_FUNC_IMPL(__imp__sub_83C80030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10496
	ctx.r3.s64 = ctx.r11.s64 + -10496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8003C"))) PPC_WEAK_FUNC(sub_83C8003C);
PPC_FUNC_IMPL(__imp__sub_83C8003C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80040"))) PPC_WEAK_FUNC(sub_83C80040);
PPC_FUNC_IMPL(__imp__sub_83C80040) {
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
	// addi r3,r11,20104
	ctx.r3.s64 = ctx.r11.s64 + 20104;
	// bl 0x8259af80
	ctx.lr = 0x83C80058;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-10480
	ctx.r3.s64 = ctx.r10.s64 + -10480;
	// bl 0x831cdcc8
	ctx.lr = 0x83C80064;
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

__attribute__((alias("__imp__sub_83C80074"))) PPC_WEAK_FUNC(sub_83C80074);
PPC_FUNC_IMPL(__imp__sub_83C80074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80078"))) PPC_WEAK_FUNC(sub_83C80078);
PPC_FUNC_IMPL(__imp__sub_83C80078) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,20084
	ctx.r11.s64 = ctx.r8.s64 + 20084;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,9480(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9480);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-10488
	ctx.r3.s64 = ctx.r6.s64 + -10488;
	// stw r10,20084(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20084, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C800A8"))) PPC_WEAK_FUNC(sub_83C800A8);
PPC_FUNC_IMPL(__imp__sub_83C800A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10472
	ctx.r3.s64 = ctx.r11.s64 + -10472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C800B4"))) PPC_WEAK_FUNC(sub_83C800B4);
PPC_FUNC_IMPL(__imp__sub_83C800B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C800B8"))) PPC_WEAK_FUNC(sub_83C800B8);
PPC_FUNC_IMPL(__imp__sub_83C800B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10464
	ctx.r3.s64 = ctx.r11.s64 + -10464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C800C4"))) PPC_WEAK_FUNC(sub_83C800C4);
PPC_FUNC_IMPL(__imp__sub_83C800C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C800C8"))) PPC_WEAK_FUNC(sub_83C800C8);
PPC_FUNC_IMPL(__imp__sub_83C800C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10456
	ctx.r3.s64 = ctx.r11.s64 + -10456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C800D4"))) PPC_WEAK_FUNC(sub_83C800D4);
PPC_FUNC_IMPL(__imp__sub_83C800D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C800D8"))) PPC_WEAK_FUNC(sub_83C800D8);
PPC_FUNC_IMPL(__imp__sub_83C800D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10448
	ctx.r3.s64 = ctx.r11.s64 + -10448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C800E4"))) PPC_WEAK_FUNC(sub_83C800E4);
PPC_FUNC_IMPL(__imp__sub_83C800E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C800E8"))) PPC_WEAK_FUNC(sub_83C800E8);
PPC_FUNC_IMPL(__imp__sub_83C800E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10440
	ctx.r3.s64 = ctx.r11.s64 + -10440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C800F4"))) PPC_WEAK_FUNC(sub_83C800F4);
PPC_FUNC_IMPL(__imp__sub_83C800F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C800F8"))) PPC_WEAK_FUNC(sub_83C800F8);
PPC_FUNC_IMPL(__imp__sub_83C800F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10432
	ctx.r3.s64 = ctx.r11.s64 + -10432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80104"))) PPC_WEAK_FUNC(sub_83C80104);
PPC_FUNC_IMPL(__imp__sub_83C80104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80108"))) PPC_WEAK_FUNC(sub_83C80108);
PPC_FUNC_IMPL(__imp__sub_83C80108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10424
	ctx.r3.s64 = ctx.r11.s64 + -10424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80114"))) PPC_WEAK_FUNC(sub_83C80114);
PPC_FUNC_IMPL(__imp__sub_83C80114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80118"))) PPC_WEAK_FUNC(sub_83C80118);
PPC_FUNC_IMPL(__imp__sub_83C80118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10416
	ctx.r3.s64 = ctx.r11.s64 + -10416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80124"))) PPC_WEAK_FUNC(sub_83C80124);
PPC_FUNC_IMPL(__imp__sub_83C80124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80128"))) PPC_WEAK_FUNC(sub_83C80128);
PPC_FUNC_IMPL(__imp__sub_83C80128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10408
	ctx.r3.s64 = ctx.r11.s64 + -10408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80134"))) PPC_WEAK_FUNC(sub_83C80134);
PPC_FUNC_IMPL(__imp__sub_83C80134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80138"))) PPC_WEAK_FUNC(sub_83C80138);
PPC_FUNC_IMPL(__imp__sub_83C80138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10400
	ctx.r3.s64 = ctx.r11.s64 + -10400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80144"))) PPC_WEAK_FUNC(sub_83C80144);
PPC_FUNC_IMPL(__imp__sub_83C80144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80148"))) PPC_WEAK_FUNC(sub_83C80148);
PPC_FUNC_IMPL(__imp__sub_83C80148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10392
	ctx.r3.s64 = ctx.r11.s64 + -10392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80154"))) PPC_WEAK_FUNC(sub_83C80154);
PPC_FUNC_IMPL(__imp__sub_83C80154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80158"))) PPC_WEAK_FUNC(sub_83C80158);
PPC_FUNC_IMPL(__imp__sub_83C80158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10384
	ctx.r3.s64 = ctx.r11.s64 + -10384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80164"))) PPC_WEAK_FUNC(sub_83C80164);
PPC_FUNC_IMPL(__imp__sub_83C80164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80168"))) PPC_WEAK_FUNC(sub_83C80168);
PPC_FUNC_IMPL(__imp__sub_83C80168) {
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
	// addi r3,r11,20448
	ctx.r3.s64 = ctx.r11.s64 + 20448;
	// bl 0x83523120
	ctx.lr = 0x83C80180;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-10376
	ctx.r3.s64 = ctx.r10.s64 + -10376;
	// bl 0x831cdcc8
	ctx.lr = 0x83C8018C;
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

__attribute__((alias("__imp__sub_83C8019C"))) PPC_WEAK_FUNC(sub_83C8019C);
PPC_FUNC_IMPL(__imp__sub_83C8019C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C801A0"))) PPC_WEAK_FUNC(sub_83C801A0);
PPC_FUNC_IMPL(__imp__sub_83C801A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,20464
	ctx.r7.s64 = ctx.r8.s64 + 20464;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,20464(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20464);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,20464(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20464, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C801C8"))) PPC_WEAK_FUNC(sub_83C801C8);
PPC_FUNC_IMPL(__imp__sub_83C801C8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,9632
	ctx.r6.s64 = ctx.r7.s64 + 9632;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,9560(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 9560);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,20464(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20464);
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
	// std r9,9632(r7)
	PPC_STORE_U64(ctx.r7.u32 + 9632, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C80210"))) PPC_WEAK_FUNC(sub_83C80210);
PPC_FUNC_IMPL(__imp__sub_83C80210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10360
	ctx.r3.s64 = ctx.r11.s64 + -10360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8021C"))) PPC_WEAK_FUNC(sub_83C8021C);
PPC_FUNC_IMPL(__imp__sub_83C8021C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80220"))) PPC_WEAK_FUNC(sub_83C80220);
PPC_FUNC_IMPL(__imp__sub_83C80220) {
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
	// addi r3,r11,20472
	ctx.r3.s64 = ctx.r11.s64 + 20472;
	// bl 0x8259af80
	ctx.lr = 0x83C80238;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-10344
	ctx.r3.s64 = ctx.r10.s64 + -10344;
	// bl 0x831cdcc8
	ctx.lr = 0x83C80244;
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

__attribute__((alias("__imp__sub_83C80254"))) PPC_WEAK_FUNC(sub_83C80254);
PPC_FUNC_IMPL(__imp__sub_83C80254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80258"))) PPC_WEAK_FUNC(sub_83C80258);
PPC_FUNC_IMPL(__imp__sub_83C80258) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,20452
	ctx.r11.s64 = ctx.r8.s64 + 20452;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,9608(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9608);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-10352
	ctx.r3.s64 = ctx.r6.s64 + -10352;
	// stw r10,20452(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20452, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80288"))) PPC_WEAK_FUNC(sub_83C80288);
PPC_FUNC_IMPL(__imp__sub_83C80288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10336
	ctx.r3.s64 = ctx.r11.s64 + -10336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80294"))) PPC_WEAK_FUNC(sub_83C80294);
PPC_FUNC_IMPL(__imp__sub_83C80294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80298"))) PPC_WEAK_FUNC(sub_83C80298);
PPC_FUNC_IMPL(__imp__sub_83C80298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10328
	ctx.r3.s64 = ctx.r11.s64 + -10328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C802A4"))) PPC_WEAK_FUNC(sub_83C802A4);
PPC_FUNC_IMPL(__imp__sub_83C802A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C802A8"))) PPC_WEAK_FUNC(sub_83C802A8);
PPC_FUNC_IMPL(__imp__sub_83C802A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10320
	ctx.r3.s64 = ctx.r11.s64 + -10320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C802B4"))) PPC_WEAK_FUNC(sub_83C802B4);
PPC_FUNC_IMPL(__imp__sub_83C802B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C802B8"))) PPC_WEAK_FUNC(sub_83C802B8);
PPC_FUNC_IMPL(__imp__sub_83C802B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10312
	ctx.r3.s64 = ctx.r11.s64 + -10312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C802C4"))) PPC_WEAK_FUNC(sub_83C802C4);
PPC_FUNC_IMPL(__imp__sub_83C802C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C802C8"))) PPC_WEAK_FUNC(sub_83C802C8);
PPC_FUNC_IMPL(__imp__sub_83C802C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10304
	ctx.r3.s64 = ctx.r11.s64 + -10304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C802D4"))) PPC_WEAK_FUNC(sub_83C802D4);
PPC_FUNC_IMPL(__imp__sub_83C802D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C802D8"))) PPC_WEAK_FUNC(sub_83C802D8);
PPC_FUNC_IMPL(__imp__sub_83C802D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10296
	ctx.r3.s64 = ctx.r11.s64 + -10296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C802E4"))) PPC_WEAK_FUNC(sub_83C802E4);
PPC_FUNC_IMPL(__imp__sub_83C802E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C802E8"))) PPC_WEAK_FUNC(sub_83C802E8);
PPC_FUNC_IMPL(__imp__sub_83C802E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10288
	ctx.r3.s64 = ctx.r11.s64 + -10288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C802F4"))) PPC_WEAK_FUNC(sub_83C802F4);
PPC_FUNC_IMPL(__imp__sub_83C802F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C802F8"))) PPC_WEAK_FUNC(sub_83C802F8);
PPC_FUNC_IMPL(__imp__sub_83C802F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10280
	ctx.r3.s64 = ctx.r11.s64 + -10280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80304"))) PPC_WEAK_FUNC(sub_83C80304);
PPC_FUNC_IMPL(__imp__sub_83C80304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80308"))) PPC_WEAK_FUNC(sub_83C80308);
PPC_FUNC_IMPL(__imp__sub_83C80308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10272
	ctx.r3.s64 = ctx.r11.s64 + -10272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80314"))) PPC_WEAK_FUNC(sub_83C80314);
PPC_FUNC_IMPL(__imp__sub_83C80314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80318"))) PPC_WEAK_FUNC(sub_83C80318);
PPC_FUNC_IMPL(__imp__sub_83C80318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10264
	ctx.r3.s64 = ctx.r11.s64 + -10264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80324"))) PPC_WEAK_FUNC(sub_83C80324);
PPC_FUNC_IMPL(__imp__sub_83C80324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80328"))) PPC_WEAK_FUNC(sub_83C80328);
PPC_FUNC_IMPL(__imp__sub_83C80328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10256
	ctx.r3.s64 = ctx.r11.s64 + -10256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80334"))) PPC_WEAK_FUNC(sub_83C80334);
PPC_FUNC_IMPL(__imp__sub_83C80334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80338"))) PPC_WEAK_FUNC(sub_83C80338);
PPC_FUNC_IMPL(__imp__sub_83C80338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10248
	ctx.r3.s64 = ctx.r11.s64 + -10248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80344"))) PPC_WEAK_FUNC(sub_83C80344);
PPC_FUNC_IMPL(__imp__sub_83C80344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80348"))) PPC_WEAK_FUNC(sub_83C80348);
PPC_FUNC_IMPL(__imp__sub_83C80348) {
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
	// addi r3,r11,20816
	ctx.r3.s64 = ctx.r11.s64 + 20816;
	// bl 0x83523120
	ctx.lr = 0x83C80360;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-10240
	ctx.r3.s64 = ctx.r10.s64 + -10240;
	// bl 0x831cdcc8
	ctx.lr = 0x83C8036C;
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

__attribute__((alias("__imp__sub_83C8037C"))) PPC_WEAK_FUNC(sub_83C8037C);
PPC_FUNC_IMPL(__imp__sub_83C8037C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80380"))) PPC_WEAK_FUNC(sub_83C80380);
PPC_FUNC_IMPL(__imp__sub_83C80380) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,20832
	ctx.r7.s64 = ctx.r8.s64 + 20832;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,20832(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20832);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,20832(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20832, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C803A8"))) PPC_WEAK_FUNC(sub_83C803A8);
PPC_FUNC_IMPL(__imp__sub_83C803A8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,9760
	ctx.r6.s64 = ctx.r7.s64 + 9760;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,9688(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 9688);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,20832(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20832);
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
	// std r9,9760(r7)
	PPC_STORE_U64(ctx.r7.u32 + 9760, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C803F0"))) PPC_WEAK_FUNC(sub_83C803F0);
PPC_FUNC_IMPL(__imp__sub_83C803F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10224
	ctx.r3.s64 = ctx.r11.s64 + -10224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C803FC"))) PPC_WEAK_FUNC(sub_83C803FC);
PPC_FUNC_IMPL(__imp__sub_83C803FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80400"))) PPC_WEAK_FUNC(sub_83C80400);
PPC_FUNC_IMPL(__imp__sub_83C80400) {
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
	// addi r3,r11,20840
	ctx.r3.s64 = ctx.r11.s64 + 20840;
	// bl 0x8259af80
	ctx.lr = 0x83C80418;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-10208
	ctx.r3.s64 = ctx.r10.s64 + -10208;
	// bl 0x831cdcc8
	ctx.lr = 0x83C80424;
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

__attribute__((alias("__imp__sub_83C80434"))) PPC_WEAK_FUNC(sub_83C80434);
PPC_FUNC_IMPL(__imp__sub_83C80434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80438"))) PPC_WEAK_FUNC(sub_83C80438);
PPC_FUNC_IMPL(__imp__sub_83C80438) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,20820
	ctx.r11.s64 = ctx.r8.s64 + 20820;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,9736(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9736);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-10216
	ctx.r3.s64 = ctx.r6.s64 + -10216;
	// stw r10,20820(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20820, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80468"))) PPC_WEAK_FUNC(sub_83C80468);
PPC_FUNC_IMPL(__imp__sub_83C80468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10200
	ctx.r3.s64 = ctx.r11.s64 + -10200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80474"))) PPC_WEAK_FUNC(sub_83C80474);
PPC_FUNC_IMPL(__imp__sub_83C80474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80478"))) PPC_WEAK_FUNC(sub_83C80478);
PPC_FUNC_IMPL(__imp__sub_83C80478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10192
	ctx.r3.s64 = ctx.r11.s64 + -10192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80484"))) PPC_WEAK_FUNC(sub_83C80484);
PPC_FUNC_IMPL(__imp__sub_83C80484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80488"))) PPC_WEAK_FUNC(sub_83C80488);
PPC_FUNC_IMPL(__imp__sub_83C80488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10184
	ctx.r3.s64 = ctx.r11.s64 + -10184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80494"))) PPC_WEAK_FUNC(sub_83C80494);
PPC_FUNC_IMPL(__imp__sub_83C80494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80498"))) PPC_WEAK_FUNC(sub_83C80498);
PPC_FUNC_IMPL(__imp__sub_83C80498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10176
	ctx.r3.s64 = ctx.r11.s64 + -10176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C804A4"))) PPC_WEAK_FUNC(sub_83C804A4);
PPC_FUNC_IMPL(__imp__sub_83C804A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C804A8"))) PPC_WEAK_FUNC(sub_83C804A8);
PPC_FUNC_IMPL(__imp__sub_83C804A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10168
	ctx.r3.s64 = ctx.r11.s64 + -10168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C804B4"))) PPC_WEAK_FUNC(sub_83C804B4);
PPC_FUNC_IMPL(__imp__sub_83C804B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C804B8"))) PPC_WEAK_FUNC(sub_83C804B8);
PPC_FUNC_IMPL(__imp__sub_83C804B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10160
	ctx.r3.s64 = ctx.r11.s64 + -10160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C804C4"))) PPC_WEAK_FUNC(sub_83C804C4);
PPC_FUNC_IMPL(__imp__sub_83C804C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C804C8"))) PPC_WEAK_FUNC(sub_83C804C8);
PPC_FUNC_IMPL(__imp__sub_83C804C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10152
	ctx.r3.s64 = ctx.r11.s64 + -10152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C804D4"))) PPC_WEAK_FUNC(sub_83C804D4);
PPC_FUNC_IMPL(__imp__sub_83C804D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C804D8"))) PPC_WEAK_FUNC(sub_83C804D8);
PPC_FUNC_IMPL(__imp__sub_83C804D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10144
	ctx.r3.s64 = ctx.r11.s64 + -10144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C804E4"))) PPC_WEAK_FUNC(sub_83C804E4);
PPC_FUNC_IMPL(__imp__sub_83C804E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C804E8"))) PPC_WEAK_FUNC(sub_83C804E8);
PPC_FUNC_IMPL(__imp__sub_83C804E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10136
	ctx.r3.s64 = ctx.r11.s64 + -10136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C804F4"))) PPC_WEAK_FUNC(sub_83C804F4);
PPC_FUNC_IMPL(__imp__sub_83C804F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C804F8"))) PPC_WEAK_FUNC(sub_83C804F8);
PPC_FUNC_IMPL(__imp__sub_83C804F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10128
	ctx.r3.s64 = ctx.r11.s64 + -10128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80504"))) PPC_WEAK_FUNC(sub_83C80504);
PPC_FUNC_IMPL(__imp__sub_83C80504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80508"))) PPC_WEAK_FUNC(sub_83C80508);
PPC_FUNC_IMPL(__imp__sub_83C80508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10120
	ctx.r3.s64 = ctx.r11.s64 + -10120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80514"))) PPC_WEAK_FUNC(sub_83C80514);
PPC_FUNC_IMPL(__imp__sub_83C80514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80518"))) PPC_WEAK_FUNC(sub_83C80518);
PPC_FUNC_IMPL(__imp__sub_83C80518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10112
	ctx.r3.s64 = ctx.r11.s64 + -10112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80524"))) PPC_WEAK_FUNC(sub_83C80524);
PPC_FUNC_IMPL(__imp__sub_83C80524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80528"))) PPC_WEAK_FUNC(sub_83C80528);
PPC_FUNC_IMPL(__imp__sub_83C80528) {
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
	// addi r3,r11,21184
	ctx.r3.s64 = ctx.r11.s64 + 21184;
	// bl 0x83523120
	ctx.lr = 0x83C80540;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-10104
	ctx.r3.s64 = ctx.r10.s64 + -10104;
	// bl 0x831cdcc8
	ctx.lr = 0x83C8054C;
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

__attribute__((alias("__imp__sub_83C8055C"))) PPC_WEAK_FUNC(sub_83C8055C);
PPC_FUNC_IMPL(__imp__sub_83C8055C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80560"))) PPC_WEAK_FUNC(sub_83C80560);
PPC_FUNC_IMPL(__imp__sub_83C80560) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,21200
	ctx.r7.s64 = ctx.r8.s64 + 21200;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,21200(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21200);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,21200(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21200, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C80588"))) PPC_WEAK_FUNC(sub_83C80588);
PPC_FUNC_IMPL(__imp__sub_83C80588) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,9888
	ctx.r6.s64 = ctx.r7.s64 + 9888;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,9816(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 9816);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,21200(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21200);
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
	// std r9,9888(r7)
	PPC_STORE_U64(ctx.r7.u32 + 9888, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C805D0"))) PPC_WEAK_FUNC(sub_83C805D0);
PPC_FUNC_IMPL(__imp__sub_83C805D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10088
	ctx.r3.s64 = ctx.r11.s64 + -10088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C805DC"))) PPC_WEAK_FUNC(sub_83C805DC);
PPC_FUNC_IMPL(__imp__sub_83C805DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C805E0"))) PPC_WEAK_FUNC(sub_83C805E0);
PPC_FUNC_IMPL(__imp__sub_83C805E0) {
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
	// addi r3,r11,21208
	ctx.r3.s64 = ctx.r11.s64 + 21208;
	// bl 0x8259af80
	ctx.lr = 0x83C805F8;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-10072
	ctx.r3.s64 = ctx.r10.s64 + -10072;
	// bl 0x831cdcc8
	ctx.lr = 0x83C80604;
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

__attribute__((alias("__imp__sub_83C80614"))) PPC_WEAK_FUNC(sub_83C80614);
PPC_FUNC_IMPL(__imp__sub_83C80614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80618"))) PPC_WEAK_FUNC(sub_83C80618);
PPC_FUNC_IMPL(__imp__sub_83C80618) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,21188
	ctx.r11.s64 = ctx.r8.s64 + 21188;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,9864(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9864);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-10080
	ctx.r3.s64 = ctx.r6.s64 + -10080;
	// stw r10,21188(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21188, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80648"))) PPC_WEAK_FUNC(sub_83C80648);
PPC_FUNC_IMPL(__imp__sub_83C80648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10064
	ctx.r3.s64 = ctx.r11.s64 + -10064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80654"))) PPC_WEAK_FUNC(sub_83C80654);
PPC_FUNC_IMPL(__imp__sub_83C80654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80658"))) PPC_WEAK_FUNC(sub_83C80658);
PPC_FUNC_IMPL(__imp__sub_83C80658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10056
	ctx.r3.s64 = ctx.r11.s64 + -10056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80664"))) PPC_WEAK_FUNC(sub_83C80664);
PPC_FUNC_IMPL(__imp__sub_83C80664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80668"))) PPC_WEAK_FUNC(sub_83C80668);
PPC_FUNC_IMPL(__imp__sub_83C80668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10048
	ctx.r3.s64 = ctx.r11.s64 + -10048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80674"))) PPC_WEAK_FUNC(sub_83C80674);
PPC_FUNC_IMPL(__imp__sub_83C80674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80678"))) PPC_WEAK_FUNC(sub_83C80678);
PPC_FUNC_IMPL(__imp__sub_83C80678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10040
	ctx.r3.s64 = ctx.r11.s64 + -10040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80684"))) PPC_WEAK_FUNC(sub_83C80684);
PPC_FUNC_IMPL(__imp__sub_83C80684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80688"))) PPC_WEAK_FUNC(sub_83C80688);
PPC_FUNC_IMPL(__imp__sub_83C80688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10032
	ctx.r3.s64 = ctx.r11.s64 + -10032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80694"))) PPC_WEAK_FUNC(sub_83C80694);
PPC_FUNC_IMPL(__imp__sub_83C80694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80698"))) PPC_WEAK_FUNC(sub_83C80698);
PPC_FUNC_IMPL(__imp__sub_83C80698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10024
	ctx.r3.s64 = ctx.r11.s64 + -10024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C806A4"))) PPC_WEAK_FUNC(sub_83C806A4);
PPC_FUNC_IMPL(__imp__sub_83C806A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C806A8"))) PPC_WEAK_FUNC(sub_83C806A8);
PPC_FUNC_IMPL(__imp__sub_83C806A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10016
	ctx.r3.s64 = ctx.r11.s64 + -10016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C806B4"))) PPC_WEAK_FUNC(sub_83C806B4);
PPC_FUNC_IMPL(__imp__sub_83C806B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C806B8"))) PPC_WEAK_FUNC(sub_83C806B8);
PPC_FUNC_IMPL(__imp__sub_83C806B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10008
	ctx.r3.s64 = ctx.r11.s64 + -10008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C806C4"))) PPC_WEAK_FUNC(sub_83C806C4);
PPC_FUNC_IMPL(__imp__sub_83C806C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C806C8"))) PPC_WEAK_FUNC(sub_83C806C8);
PPC_FUNC_IMPL(__imp__sub_83C806C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10000
	ctx.r3.s64 = ctx.r11.s64 + -10000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C806D4"))) PPC_WEAK_FUNC(sub_83C806D4);
PPC_FUNC_IMPL(__imp__sub_83C806D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C806D8"))) PPC_WEAK_FUNC(sub_83C806D8);
PPC_FUNC_IMPL(__imp__sub_83C806D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9992
	ctx.r3.s64 = ctx.r11.s64 + -9992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C806E4"))) PPC_WEAK_FUNC(sub_83C806E4);
PPC_FUNC_IMPL(__imp__sub_83C806E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C806E8"))) PPC_WEAK_FUNC(sub_83C806E8);
PPC_FUNC_IMPL(__imp__sub_83C806E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9984
	ctx.r3.s64 = ctx.r11.s64 + -9984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C806F4"))) PPC_WEAK_FUNC(sub_83C806F4);
PPC_FUNC_IMPL(__imp__sub_83C806F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C806F8"))) PPC_WEAK_FUNC(sub_83C806F8);
PPC_FUNC_IMPL(__imp__sub_83C806F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9976
	ctx.r3.s64 = ctx.r11.s64 + -9976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80704"))) PPC_WEAK_FUNC(sub_83C80704);
PPC_FUNC_IMPL(__imp__sub_83C80704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80708"))) PPC_WEAK_FUNC(sub_83C80708);
PPC_FUNC_IMPL(__imp__sub_83C80708) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,21592
	ctx.r7.s64 = ctx.r8.s64 + 21592;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,21592(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21592);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,21592(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21592, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C80730"))) PPC_WEAK_FUNC(sub_83C80730);
PPC_FUNC_IMPL(__imp__sub_83C80730) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,10032
	ctx.r6.s64 = ctx.r7.s64 + 10032;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,9960(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 9960);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,21592(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21592);
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
	// std r9,10032(r7)
	PPC_STORE_U64(ctx.r7.u32 + 10032, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C80778"))) PPC_WEAK_FUNC(sub_83C80778);
PPC_FUNC_IMPL(__imp__sub_83C80778) {
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
	// addi r3,r11,21576
	ctx.r3.s64 = ctx.r11.s64 + 21576;
	// bl 0x83523120
	ctx.lr = 0x83C80790;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-9968
	ctx.r3.s64 = ctx.r10.s64 + -9968;
	// bl 0x831cdcc8
	ctx.lr = 0x83C8079C;
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

__attribute__((alias("__imp__sub_83C807AC"))) PPC_WEAK_FUNC(sub_83C807AC);
PPC_FUNC_IMPL(__imp__sub_83C807AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C807B0"))) PPC_WEAK_FUNC(sub_83C807B0);
PPC_FUNC_IMPL(__imp__sub_83C807B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9952
	ctx.r3.s64 = ctx.r11.s64 + -9952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C807BC"))) PPC_WEAK_FUNC(sub_83C807BC);
PPC_FUNC_IMPL(__imp__sub_83C807BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C807C0"))) PPC_WEAK_FUNC(sub_83C807C0);
PPC_FUNC_IMPL(__imp__sub_83C807C0) {
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
	// addi r3,r11,21600
	ctx.r3.s64 = ctx.r11.s64 + 21600;
	// bl 0x8259af80
	ctx.lr = 0x83C807D8;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-9936
	ctx.r3.s64 = ctx.r10.s64 + -9936;
	// bl 0x831cdcc8
	ctx.lr = 0x83C807E4;
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

__attribute__((alias("__imp__sub_83C807F4"))) PPC_WEAK_FUNC(sub_83C807F4);
PPC_FUNC_IMPL(__imp__sub_83C807F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C807F8"))) PPC_WEAK_FUNC(sub_83C807F8);
PPC_FUNC_IMPL(__imp__sub_83C807F8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,21580
	ctx.r11.s64 = ctx.r8.s64 + 21580;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,10008(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10008);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-9944
	ctx.r3.s64 = ctx.r6.s64 + -9944;
	// stw r10,21580(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21580, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80828"))) PPC_WEAK_FUNC(sub_83C80828);
PPC_FUNC_IMPL(__imp__sub_83C80828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9928
	ctx.r3.s64 = ctx.r11.s64 + -9928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80834"))) PPC_WEAK_FUNC(sub_83C80834);
PPC_FUNC_IMPL(__imp__sub_83C80834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80838"))) PPC_WEAK_FUNC(sub_83C80838);
PPC_FUNC_IMPL(__imp__sub_83C80838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9920
	ctx.r3.s64 = ctx.r11.s64 + -9920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80844"))) PPC_WEAK_FUNC(sub_83C80844);
PPC_FUNC_IMPL(__imp__sub_83C80844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80848"))) PPC_WEAK_FUNC(sub_83C80848);
PPC_FUNC_IMPL(__imp__sub_83C80848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9912
	ctx.r3.s64 = ctx.r11.s64 + -9912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80854"))) PPC_WEAK_FUNC(sub_83C80854);
PPC_FUNC_IMPL(__imp__sub_83C80854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80858"))) PPC_WEAK_FUNC(sub_83C80858);
PPC_FUNC_IMPL(__imp__sub_83C80858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9904
	ctx.r3.s64 = ctx.r11.s64 + -9904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80864"))) PPC_WEAK_FUNC(sub_83C80864);
PPC_FUNC_IMPL(__imp__sub_83C80864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80868"))) PPC_WEAK_FUNC(sub_83C80868);
PPC_FUNC_IMPL(__imp__sub_83C80868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9896
	ctx.r3.s64 = ctx.r11.s64 + -9896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80874"))) PPC_WEAK_FUNC(sub_83C80874);
PPC_FUNC_IMPL(__imp__sub_83C80874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80878"))) PPC_WEAK_FUNC(sub_83C80878);
PPC_FUNC_IMPL(__imp__sub_83C80878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9888
	ctx.r3.s64 = ctx.r11.s64 + -9888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80884"))) PPC_WEAK_FUNC(sub_83C80884);
PPC_FUNC_IMPL(__imp__sub_83C80884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80888"))) PPC_WEAK_FUNC(sub_83C80888);
PPC_FUNC_IMPL(__imp__sub_83C80888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9880
	ctx.r3.s64 = ctx.r11.s64 + -9880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80894"))) PPC_WEAK_FUNC(sub_83C80894);
PPC_FUNC_IMPL(__imp__sub_83C80894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80898"))) PPC_WEAK_FUNC(sub_83C80898);
PPC_FUNC_IMPL(__imp__sub_83C80898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9872
	ctx.r3.s64 = ctx.r11.s64 + -9872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C808A4"))) PPC_WEAK_FUNC(sub_83C808A4);
PPC_FUNC_IMPL(__imp__sub_83C808A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C808A8"))) PPC_WEAK_FUNC(sub_83C808A8);
PPC_FUNC_IMPL(__imp__sub_83C808A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9864
	ctx.r3.s64 = ctx.r11.s64 + -9864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C808B4"))) PPC_WEAK_FUNC(sub_83C808B4);
PPC_FUNC_IMPL(__imp__sub_83C808B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C808B8"))) PPC_WEAK_FUNC(sub_83C808B8);
PPC_FUNC_IMPL(__imp__sub_83C808B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9856
	ctx.r3.s64 = ctx.r11.s64 + -9856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C808C4"))) PPC_WEAK_FUNC(sub_83C808C4);
PPC_FUNC_IMPL(__imp__sub_83C808C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C808C8"))) PPC_WEAK_FUNC(sub_83C808C8);
PPC_FUNC_IMPL(__imp__sub_83C808C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9848
	ctx.r3.s64 = ctx.r11.s64 + -9848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C808D4"))) PPC_WEAK_FUNC(sub_83C808D4);
PPC_FUNC_IMPL(__imp__sub_83C808D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C808D8"))) PPC_WEAK_FUNC(sub_83C808D8);
PPC_FUNC_IMPL(__imp__sub_83C808D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9840
	ctx.r3.s64 = ctx.r11.s64 + -9840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C808E4"))) PPC_WEAK_FUNC(sub_83C808E4);
PPC_FUNC_IMPL(__imp__sub_83C808E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C808E8"))) PPC_WEAK_FUNC(sub_83C808E8);
PPC_FUNC_IMPL(__imp__sub_83C808E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9832
	ctx.r3.s64 = ctx.r11.s64 + -9832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C808F4"))) PPC_WEAK_FUNC(sub_83C808F4);
PPC_FUNC_IMPL(__imp__sub_83C808F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C808F8"))) PPC_WEAK_FUNC(sub_83C808F8);
PPC_FUNC_IMPL(__imp__sub_83C808F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9824
	ctx.r3.s64 = ctx.r11.s64 + -9824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80904"))) PPC_WEAK_FUNC(sub_83C80904);
PPC_FUNC_IMPL(__imp__sub_83C80904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80908"))) PPC_WEAK_FUNC(sub_83C80908);
PPC_FUNC_IMPL(__imp__sub_83C80908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9816
	ctx.r3.s64 = ctx.r11.s64 + -9816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80914"))) PPC_WEAK_FUNC(sub_83C80914);
PPC_FUNC_IMPL(__imp__sub_83C80914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80918"))) PPC_WEAK_FUNC(sub_83C80918);
PPC_FUNC_IMPL(__imp__sub_83C80918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9808
	ctx.r3.s64 = ctx.r11.s64 + -9808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80924"))) PPC_WEAK_FUNC(sub_83C80924);
PPC_FUNC_IMPL(__imp__sub_83C80924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80928"))) PPC_WEAK_FUNC(sub_83C80928);
PPC_FUNC_IMPL(__imp__sub_83C80928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9800
	ctx.r3.s64 = ctx.r11.s64 + -9800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80934"))) PPC_WEAK_FUNC(sub_83C80934);
PPC_FUNC_IMPL(__imp__sub_83C80934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80938"))) PPC_WEAK_FUNC(sub_83C80938);
PPC_FUNC_IMPL(__imp__sub_83C80938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9792
	ctx.r3.s64 = ctx.r11.s64 + -9792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80944"))) PPC_WEAK_FUNC(sub_83C80944);
PPC_FUNC_IMPL(__imp__sub_83C80944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80948"))) PPC_WEAK_FUNC(sub_83C80948);
PPC_FUNC_IMPL(__imp__sub_83C80948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9784
	ctx.r3.s64 = ctx.r11.s64 + -9784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80954"))) PPC_WEAK_FUNC(sub_83C80954);
PPC_FUNC_IMPL(__imp__sub_83C80954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80958"))) PPC_WEAK_FUNC(sub_83C80958);
PPC_FUNC_IMPL(__imp__sub_83C80958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9776
	ctx.r3.s64 = ctx.r11.s64 + -9776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80964"))) PPC_WEAK_FUNC(sub_83C80964);
PPC_FUNC_IMPL(__imp__sub_83C80964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80968"))) PPC_WEAK_FUNC(sub_83C80968);
PPC_FUNC_IMPL(__imp__sub_83C80968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9768
	ctx.r3.s64 = ctx.r11.s64 + -9768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80974"))) PPC_WEAK_FUNC(sub_83C80974);
PPC_FUNC_IMPL(__imp__sub_83C80974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80978"))) PPC_WEAK_FUNC(sub_83C80978);
PPC_FUNC_IMPL(__imp__sub_83C80978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9760
	ctx.r3.s64 = ctx.r11.s64 + -9760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80984"))) PPC_WEAK_FUNC(sub_83C80984);
PPC_FUNC_IMPL(__imp__sub_83C80984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80988"))) PPC_WEAK_FUNC(sub_83C80988);
PPC_FUNC_IMPL(__imp__sub_83C80988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9752
	ctx.r3.s64 = ctx.r11.s64 + -9752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80994"))) PPC_WEAK_FUNC(sub_83C80994);
PPC_FUNC_IMPL(__imp__sub_83C80994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80998"))) PPC_WEAK_FUNC(sub_83C80998);
PPC_FUNC_IMPL(__imp__sub_83C80998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9744
	ctx.r3.s64 = ctx.r11.s64 + -9744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C809A4"))) PPC_WEAK_FUNC(sub_83C809A4);
PPC_FUNC_IMPL(__imp__sub_83C809A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C809A8"))) PPC_WEAK_FUNC(sub_83C809A8);
PPC_FUNC_IMPL(__imp__sub_83C809A8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,21980
	ctx.r7.s64 = ctx.r8.s64 + 21980;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,21980(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21980);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,21980(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21980, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C809D0"))) PPC_WEAK_FUNC(sub_83C809D0);
PPC_FUNC_IMPL(__imp__sub_83C809D0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,10272
	ctx.r6.s64 = ctx.r7.s64 + 10272;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,10200(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 10200);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,21980(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21980);
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
	// std r9,10272(r7)
	PPC_STORE_U64(ctx.r7.u32 + 10272, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C80A18"))) PPC_WEAK_FUNC(sub_83C80A18);
PPC_FUNC_IMPL(__imp__sub_83C80A18) {
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
	// addi r3,r11,21964
	ctx.r3.s64 = ctx.r11.s64 + 21964;
	// bl 0x83523120
	ctx.lr = 0x83C80A30;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-9736
	ctx.r3.s64 = ctx.r10.s64 + -9736;
	// bl 0x831cdcc8
	ctx.lr = 0x83C80A3C;
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

__attribute__((alias("__imp__sub_83C80A4C"))) PPC_WEAK_FUNC(sub_83C80A4C);
PPC_FUNC_IMPL(__imp__sub_83C80A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80A50"))) PPC_WEAK_FUNC(sub_83C80A50);
PPC_FUNC_IMPL(__imp__sub_83C80A50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9720
	ctx.r3.s64 = ctx.r11.s64 + -9720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80A5C"))) PPC_WEAK_FUNC(sub_83C80A5C);
PPC_FUNC_IMPL(__imp__sub_83C80A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80A60"))) PPC_WEAK_FUNC(sub_83C80A60);
PPC_FUNC_IMPL(__imp__sub_83C80A60) {
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
	// addi r3,r11,21992
	ctx.r3.s64 = ctx.r11.s64 + 21992;
	// bl 0x8259af80
	ctx.lr = 0x83C80A78;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-9704
	ctx.r3.s64 = ctx.r10.s64 + -9704;
	// bl 0x831cdcc8
	ctx.lr = 0x83C80A84;
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

__attribute__((alias("__imp__sub_83C80A94"))) PPC_WEAK_FUNC(sub_83C80A94);
PPC_FUNC_IMPL(__imp__sub_83C80A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80A98"))) PPC_WEAK_FUNC(sub_83C80A98);
PPC_FUNC_IMPL(__imp__sub_83C80A98) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,21968
	ctx.r11.s64 = ctx.r8.s64 + 21968;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,10248(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10248);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-9712
	ctx.r3.s64 = ctx.r6.s64 + -9712;
	// stw r10,21968(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21968, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80AC8"))) PPC_WEAK_FUNC(sub_83C80AC8);
PPC_FUNC_IMPL(__imp__sub_83C80AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9696
	ctx.r3.s64 = ctx.r11.s64 + -9696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80AD4"))) PPC_WEAK_FUNC(sub_83C80AD4);
PPC_FUNC_IMPL(__imp__sub_83C80AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80AD8"))) PPC_WEAK_FUNC(sub_83C80AD8);
PPC_FUNC_IMPL(__imp__sub_83C80AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9688
	ctx.r3.s64 = ctx.r11.s64 + -9688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80AE4"))) PPC_WEAK_FUNC(sub_83C80AE4);
PPC_FUNC_IMPL(__imp__sub_83C80AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80AE8"))) PPC_WEAK_FUNC(sub_83C80AE8);
PPC_FUNC_IMPL(__imp__sub_83C80AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9680
	ctx.r3.s64 = ctx.r11.s64 + -9680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80AF4"))) PPC_WEAK_FUNC(sub_83C80AF4);
PPC_FUNC_IMPL(__imp__sub_83C80AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80AF8"))) PPC_WEAK_FUNC(sub_83C80AF8);
PPC_FUNC_IMPL(__imp__sub_83C80AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9672
	ctx.r3.s64 = ctx.r11.s64 + -9672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80B04"))) PPC_WEAK_FUNC(sub_83C80B04);
PPC_FUNC_IMPL(__imp__sub_83C80B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80B08"))) PPC_WEAK_FUNC(sub_83C80B08);
PPC_FUNC_IMPL(__imp__sub_83C80B08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9664
	ctx.r3.s64 = ctx.r11.s64 + -9664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80B14"))) PPC_WEAK_FUNC(sub_83C80B14);
PPC_FUNC_IMPL(__imp__sub_83C80B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80B18"))) PPC_WEAK_FUNC(sub_83C80B18);
PPC_FUNC_IMPL(__imp__sub_83C80B18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9656
	ctx.r3.s64 = ctx.r11.s64 + -9656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80B24"))) PPC_WEAK_FUNC(sub_83C80B24);
PPC_FUNC_IMPL(__imp__sub_83C80B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80B28"))) PPC_WEAK_FUNC(sub_83C80B28);
PPC_FUNC_IMPL(__imp__sub_83C80B28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9648
	ctx.r3.s64 = ctx.r11.s64 + -9648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80B34"))) PPC_WEAK_FUNC(sub_83C80B34);
PPC_FUNC_IMPL(__imp__sub_83C80B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80B38"))) PPC_WEAK_FUNC(sub_83C80B38);
PPC_FUNC_IMPL(__imp__sub_83C80B38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9640
	ctx.r3.s64 = ctx.r11.s64 + -9640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80B44"))) PPC_WEAK_FUNC(sub_83C80B44);
PPC_FUNC_IMPL(__imp__sub_83C80B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80B48"))) PPC_WEAK_FUNC(sub_83C80B48);
PPC_FUNC_IMPL(__imp__sub_83C80B48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9632
	ctx.r3.s64 = ctx.r11.s64 + -9632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80B54"))) PPC_WEAK_FUNC(sub_83C80B54);
PPC_FUNC_IMPL(__imp__sub_83C80B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80B58"))) PPC_WEAK_FUNC(sub_83C80B58);
PPC_FUNC_IMPL(__imp__sub_83C80B58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9624
	ctx.r3.s64 = ctx.r11.s64 + -9624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80B64"))) PPC_WEAK_FUNC(sub_83C80B64);
PPC_FUNC_IMPL(__imp__sub_83C80B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80B68"))) PPC_WEAK_FUNC(sub_83C80B68);
PPC_FUNC_IMPL(__imp__sub_83C80B68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9616
	ctx.r3.s64 = ctx.r11.s64 + -9616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80B74"))) PPC_WEAK_FUNC(sub_83C80B74);
PPC_FUNC_IMPL(__imp__sub_83C80B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80B78"))) PPC_WEAK_FUNC(sub_83C80B78);
PPC_FUNC_IMPL(__imp__sub_83C80B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9608
	ctx.r3.s64 = ctx.r11.s64 + -9608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80B84"))) PPC_WEAK_FUNC(sub_83C80B84);
PPC_FUNC_IMPL(__imp__sub_83C80B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80B88"))) PPC_WEAK_FUNC(sub_83C80B88);
PPC_FUNC_IMPL(__imp__sub_83C80B88) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,22340
	ctx.r7.s64 = ctx.r8.s64 + 22340;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,22340(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 22340);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,22340(r8)
	PPC_STORE_U32(ctx.r8.u32 + 22340, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C80BB0"))) PPC_WEAK_FUNC(sub_83C80BB0);
PPC_FUNC_IMPL(__imp__sub_83C80BB0) {
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
	// addi r3,r11,22336
	ctx.r3.s64 = ctx.r11.s64 + 22336;
	// bl 0x83523120
	ctx.lr = 0x83C80BC8;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-9600
	ctx.r3.s64 = ctx.r10.s64 + -9600;
	// bl 0x831cdcc8
	ctx.lr = 0x83C80BD4;
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

__attribute__((alias("__imp__sub_83C80BE4"))) PPC_WEAK_FUNC(sub_83C80BE4);
PPC_FUNC_IMPL(__imp__sub_83C80BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80BE8"))) PPC_WEAK_FUNC(sub_83C80BE8);
PPC_FUNC_IMPL(__imp__sub_83C80BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9584
	ctx.r3.s64 = ctx.r11.s64 + -9584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80BF4"))) PPC_WEAK_FUNC(sub_83C80BF4);
PPC_FUNC_IMPL(__imp__sub_83C80BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80BF8"))) PPC_WEAK_FUNC(sub_83C80BF8);
PPC_FUNC_IMPL(__imp__sub_83C80BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9576
	ctx.r3.s64 = ctx.r11.s64 + -9576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80C04"))) PPC_WEAK_FUNC(sub_83C80C04);
PPC_FUNC_IMPL(__imp__sub_83C80C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80C08"))) PPC_WEAK_FUNC(sub_83C80C08);
PPC_FUNC_IMPL(__imp__sub_83C80C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9568
	ctx.r3.s64 = ctx.r11.s64 + -9568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80C14"))) PPC_WEAK_FUNC(sub_83C80C14);
PPC_FUNC_IMPL(__imp__sub_83C80C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80C18"))) PPC_WEAK_FUNC(sub_83C80C18);
PPC_FUNC_IMPL(__imp__sub_83C80C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9560
	ctx.r3.s64 = ctx.r11.s64 + -9560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80C24"))) PPC_WEAK_FUNC(sub_83C80C24);
PPC_FUNC_IMPL(__imp__sub_83C80C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80C28"))) PPC_WEAK_FUNC(sub_83C80C28);
PPC_FUNC_IMPL(__imp__sub_83C80C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9552
	ctx.r3.s64 = ctx.r11.s64 + -9552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80C34"))) PPC_WEAK_FUNC(sub_83C80C34);
PPC_FUNC_IMPL(__imp__sub_83C80C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80C38"))) PPC_WEAK_FUNC(sub_83C80C38);
PPC_FUNC_IMPL(__imp__sub_83C80C38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9544
	ctx.r3.s64 = ctx.r11.s64 + -9544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80C44"))) PPC_WEAK_FUNC(sub_83C80C44);
PPC_FUNC_IMPL(__imp__sub_83C80C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80C48"))) PPC_WEAK_FUNC(sub_83C80C48);
PPC_FUNC_IMPL(__imp__sub_83C80C48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9536
	ctx.r3.s64 = ctx.r11.s64 + -9536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80C54"))) PPC_WEAK_FUNC(sub_83C80C54);
PPC_FUNC_IMPL(__imp__sub_83C80C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C80C58"))) PPC_WEAK_FUNC(sub_83C80C58);
PPC_FUNC_IMPL(__imp__sub_83C80C58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-9528
	ctx.r3.s64 = ctx.r11.s64 + -9528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C80C64"))) PPC_WEAK_FUNC(sub_83C80C64);
PPC_FUNC_IMPL(__imp__sub_83C80C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

