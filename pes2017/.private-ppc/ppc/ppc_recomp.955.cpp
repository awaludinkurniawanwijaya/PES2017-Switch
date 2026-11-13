#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83CE349C"))) PPC_WEAK_FUNC(sub_83CE349C);
PPC_FUNC_IMPL(__imp__sub_83CE349C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE34A0"))) PPC_WEAK_FUNC(sub_83CE34A0);
PPC_FUNC_IMPL(__imp__sub_83CE34A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3464
	ctx.r3.s64 = ctx.r11.s64 + 3464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE34AC"))) PPC_WEAK_FUNC(sub_83CE34AC);
PPC_FUNC_IMPL(__imp__sub_83CE34AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE34B0"))) PPC_WEAK_FUNC(sub_83CE34B0);
PPC_FUNC_IMPL(__imp__sub_83CE34B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3472
	ctx.r3.s64 = ctx.r11.s64 + 3472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE34BC"))) PPC_WEAK_FUNC(sub_83CE34BC);
PPC_FUNC_IMPL(__imp__sub_83CE34BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE34C0"))) PPC_WEAK_FUNC(sub_83CE34C0);
PPC_FUNC_IMPL(__imp__sub_83CE34C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3480
	ctx.r3.s64 = ctx.r11.s64 + 3480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE34CC"))) PPC_WEAK_FUNC(sub_83CE34CC);
PPC_FUNC_IMPL(__imp__sub_83CE34CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE34D0"))) PPC_WEAK_FUNC(sub_83CE34D0);
PPC_FUNC_IMPL(__imp__sub_83CE34D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3488
	ctx.r3.s64 = ctx.r11.s64 + 3488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE34DC"))) PPC_WEAK_FUNC(sub_83CE34DC);
PPC_FUNC_IMPL(__imp__sub_83CE34DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE34E0"))) PPC_WEAK_FUNC(sub_83CE34E0);
PPC_FUNC_IMPL(__imp__sub_83CE34E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3496
	ctx.r3.s64 = ctx.r11.s64 + 3496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE34EC"))) PPC_WEAK_FUNC(sub_83CE34EC);
PPC_FUNC_IMPL(__imp__sub_83CE34EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE34F0"))) PPC_WEAK_FUNC(sub_83CE34F0);
PPC_FUNC_IMPL(__imp__sub_83CE34F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3504
	ctx.r3.s64 = ctx.r11.s64 + 3504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE34FC"))) PPC_WEAK_FUNC(sub_83CE34FC);
PPC_FUNC_IMPL(__imp__sub_83CE34FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3500"))) PPC_WEAK_FUNC(sub_83CE3500);
PPC_FUNC_IMPL(__imp__sub_83CE3500) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-20420
	ctx.r7.s64 = ctx.r8.s64 + -20420;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-20420(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20420);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-20420(r8)
	PPC_STORE_U32(ctx.r8.u32 + -20420, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE3528"))) PPC_WEAK_FUNC(sub_83CE3528);
PPC_FUNC_IMPL(__imp__sub_83CE3528) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-20424
	ctx.r3.s64 = ctx.r11.s64 + -20424;
	// bl 0x83523120
	ctx.lr = 0x83CE3540;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,3512
	ctx.r3.s64 = ctx.r10.s64 + 3512;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE354C;
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

__attribute__((alias("__imp__sub_83CE355C"))) PPC_WEAK_FUNC(sub_83CE355C);
PPC_FUNC_IMPL(__imp__sub_83CE355C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3560"))) PPC_WEAK_FUNC(sub_83CE3560);
PPC_FUNC_IMPL(__imp__sub_83CE3560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3528
	ctx.r3.s64 = ctx.r11.s64 + 3528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE356C"))) PPC_WEAK_FUNC(sub_83CE356C);
PPC_FUNC_IMPL(__imp__sub_83CE356C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3570"))) PPC_WEAK_FUNC(sub_83CE3570);
PPC_FUNC_IMPL(__imp__sub_83CE3570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3536
	ctx.r3.s64 = ctx.r11.s64 + 3536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE357C"))) PPC_WEAK_FUNC(sub_83CE357C);
PPC_FUNC_IMPL(__imp__sub_83CE357C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3580"))) PPC_WEAK_FUNC(sub_83CE3580);
PPC_FUNC_IMPL(__imp__sub_83CE3580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3544
	ctx.r3.s64 = ctx.r11.s64 + 3544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE358C"))) PPC_WEAK_FUNC(sub_83CE358C);
PPC_FUNC_IMPL(__imp__sub_83CE358C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3590"))) PPC_WEAK_FUNC(sub_83CE3590);
PPC_FUNC_IMPL(__imp__sub_83CE3590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3552
	ctx.r3.s64 = ctx.r11.s64 + 3552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE359C"))) PPC_WEAK_FUNC(sub_83CE359C);
PPC_FUNC_IMPL(__imp__sub_83CE359C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE35A0"))) PPC_WEAK_FUNC(sub_83CE35A0);
PPC_FUNC_IMPL(__imp__sub_83CE35A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3560
	ctx.r3.s64 = ctx.r11.s64 + 3560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE35AC"))) PPC_WEAK_FUNC(sub_83CE35AC);
PPC_FUNC_IMPL(__imp__sub_83CE35AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE35B0"))) PPC_WEAK_FUNC(sub_83CE35B0);
PPC_FUNC_IMPL(__imp__sub_83CE35B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3568
	ctx.r3.s64 = ctx.r11.s64 + 3568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE35BC"))) PPC_WEAK_FUNC(sub_83CE35BC);
PPC_FUNC_IMPL(__imp__sub_83CE35BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE35C0"))) PPC_WEAK_FUNC(sub_83CE35C0);
PPC_FUNC_IMPL(__imp__sub_83CE35C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3576
	ctx.r3.s64 = ctx.r11.s64 + 3576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE35CC"))) PPC_WEAK_FUNC(sub_83CE35CC);
PPC_FUNC_IMPL(__imp__sub_83CE35CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE35D0"))) PPC_WEAK_FUNC(sub_83CE35D0);
PPC_FUNC_IMPL(__imp__sub_83CE35D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3584
	ctx.r3.s64 = ctx.r11.s64 + 3584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE35DC"))) PPC_WEAK_FUNC(sub_83CE35DC);
PPC_FUNC_IMPL(__imp__sub_83CE35DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE35E0"))) PPC_WEAK_FUNC(sub_83CE35E0);
PPC_FUNC_IMPL(__imp__sub_83CE35E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3592
	ctx.r3.s64 = ctx.r11.s64 + 3592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE35EC"))) PPC_WEAK_FUNC(sub_83CE35EC);
PPC_FUNC_IMPL(__imp__sub_83CE35EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE35F0"))) PPC_WEAK_FUNC(sub_83CE35F0);
PPC_FUNC_IMPL(__imp__sub_83CE35F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3600
	ctx.r3.s64 = ctx.r11.s64 + 3600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE35FC"))) PPC_WEAK_FUNC(sub_83CE35FC);
PPC_FUNC_IMPL(__imp__sub_83CE35FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3600"))) PPC_WEAK_FUNC(sub_83CE3600);
PPC_FUNC_IMPL(__imp__sub_83CE3600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3608
	ctx.r3.s64 = ctx.r11.s64 + 3608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE360C"))) PPC_WEAK_FUNC(sub_83CE360C);
PPC_FUNC_IMPL(__imp__sub_83CE360C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3610"))) PPC_WEAK_FUNC(sub_83CE3610);
PPC_FUNC_IMPL(__imp__sub_83CE3610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3616
	ctx.r3.s64 = ctx.r11.s64 + 3616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE361C"))) PPC_WEAK_FUNC(sub_83CE361C);
PPC_FUNC_IMPL(__imp__sub_83CE361C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3620"))) PPC_WEAK_FUNC(sub_83CE3620);
PPC_FUNC_IMPL(__imp__sub_83CE3620) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-20412
	ctx.r7.s64 = ctx.r8.s64 + -20412;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-20412(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20412);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-20412(r8)
	PPC_STORE_U32(ctx.r8.u32 + -20412, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE3648"))) PPC_WEAK_FUNC(sub_83CE3648);
PPC_FUNC_IMPL(__imp__sub_83CE3648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3624
	ctx.r3.s64 = ctx.r11.s64 + 3624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3654"))) PPC_WEAK_FUNC(sub_83CE3654);
PPC_FUNC_IMPL(__imp__sub_83CE3654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3658"))) PPC_WEAK_FUNC(sub_83CE3658);
PPC_FUNC_IMPL(__imp__sub_83CE3658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3632
	ctx.r3.s64 = ctx.r11.s64 + 3632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3664"))) PPC_WEAK_FUNC(sub_83CE3664);
PPC_FUNC_IMPL(__imp__sub_83CE3664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3668"))) PPC_WEAK_FUNC(sub_83CE3668);
PPC_FUNC_IMPL(__imp__sub_83CE3668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3640
	ctx.r3.s64 = ctx.r11.s64 + 3640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3674"))) PPC_WEAK_FUNC(sub_83CE3674);
PPC_FUNC_IMPL(__imp__sub_83CE3674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3678"))) PPC_WEAK_FUNC(sub_83CE3678);
PPC_FUNC_IMPL(__imp__sub_83CE3678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3648
	ctx.r3.s64 = ctx.r11.s64 + 3648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3684"))) PPC_WEAK_FUNC(sub_83CE3684);
PPC_FUNC_IMPL(__imp__sub_83CE3684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3688"))) PPC_WEAK_FUNC(sub_83CE3688);
PPC_FUNC_IMPL(__imp__sub_83CE3688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3656
	ctx.r3.s64 = ctx.r11.s64 + 3656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3694"))) PPC_WEAK_FUNC(sub_83CE3694);
PPC_FUNC_IMPL(__imp__sub_83CE3694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3698"))) PPC_WEAK_FUNC(sub_83CE3698);
PPC_FUNC_IMPL(__imp__sub_83CE3698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3664
	ctx.r3.s64 = ctx.r11.s64 + 3664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE36A4"))) PPC_WEAK_FUNC(sub_83CE36A4);
PPC_FUNC_IMPL(__imp__sub_83CE36A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE36A8"))) PPC_WEAK_FUNC(sub_83CE36A8);
PPC_FUNC_IMPL(__imp__sub_83CE36A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3672
	ctx.r3.s64 = ctx.r11.s64 + 3672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE36B4"))) PPC_WEAK_FUNC(sub_83CE36B4);
PPC_FUNC_IMPL(__imp__sub_83CE36B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE36B8"))) PPC_WEAK_FUNC(sub_83CE36B8);
PPC_FUNC_IMPL(__imp__sub_83CE36B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3680
	ctx.r3.s64 = ctx.r11.s64 + 3680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE36C4"))) PPC_WEAK_FUNC(sub_83CE36C4);
PPC_FUNC_IMPL(__imp__sub_83CE36C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE36C8"))) PPC_WEAK_FUNC(sub_83CE36C8);
PPC_FUNC_IMPL(__imp__sub_83CE36C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3688
	ctx.r3.s64 = ctx.r11.s64 + 3688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE36D4"))) PPC_WEAK_FUNC(sub_83CE36D4);
PPC_FUNC_IMPL(__imp__sub_83CE36D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE36D8"))) PPC_WEAK_FUNC(sub_83CE36D8);
PPC_FUNC_IMPL(__imp__sub_83CE36D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE36E4"))) PPC_WEAK_FUNC(sub_83CE36E4);
PPC_FUNC_IMPL(__imp__sub_83CE36E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE36E8"))) PPC_WEAK_FUNC(sub_83CE36E8);
PPC_FUNC_IMPL(__imp__sub_83CE36E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3704
	ctx.r3.s64 = ctx.r11.s64 + 3704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE36F4"))) PPC_WEAK_FUNC(sub_83CE36F4);
PPC_FUNC_IMPL(__imp__sub_83CE36F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE36F8"))) PPC_WEAK_FUNC(sub_83CE36F8);
PPC_FUNC_IMPL(__imp__sub_83CE36F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3712
	ctx.r3.s64 = ctx.r11.s64 + 3712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3704"))) PPC_WEAK_FUNC(sub_83CE3704);
PPC_FUNC_IMPL(__imp__sub_83CE3704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3708"))) PPC_WEAK_FUNC(sub_83CE3708);
PPC_FUNC_IMPL(__imp__sub_83CE3708) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-20400
	ctx.r3.s64 = ctx.r11.s64 + -20400;
	// bl 0x83523120
	ctx.lr = 0x83CE3720;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,3720
	ctx.r3.s64 = ctx.r10.s64 + 3720;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE372C;
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

__attribute__((alias("__imp__sub_83CE373C"))) PPC_WEAK_FUNC(sub_83CE373C);
PPC_FUNC_IMPL(__imp__sub_83CE373C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3740"))) PPC_WEAK_FUNC(sub_83CE3740);
PPC_FUNC_IMPL(__imp__sub_83CE3740) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-20384
	ctx.r7.s64 = ctx.r8.s64 + -20384;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-20384(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20384);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-20384(r8)
	PPC_STORE_U32(ctx.r8.u32 + -20384, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE3768"))) PPC_WEAK_FUNC(sub_83CE3768);
PPC_FUNC_IMPL(__imp__sub_83CE3768) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,23616
	ctx.r6.s64 = ctx.r7.s64 + 23616;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,23544(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 23544);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-20384(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -20384);
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
	// std r9,23616(r7)
	PPC_STORE_U64(ctx.r7.u32 + 23616, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE37B0"))) PPC_WEAK_FUNC(sub_83CE37B0);
PPC_FUNC_IMPL(__imp__sub_83CE37B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3736
	ctx.r3.s64 = ctx.r11.s64 + 3736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE37BC"))) PPC_WEAK_FUNC(sub_83CE37BC);
PPC_FUNC_IMPL(__imp__sub_83CE37BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE37C0"))) PPC_WEAK_FUNC(sub_83CE37C0);
PPC_FUNC_IMPL(__imp__sub_83CE37C0) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-20376
	ctx.r3.s64 = ctx.r11.s64 + -20376;
	// bl 0x8259af80
	ctx.lr = 0x83CE37D8;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,3752
	ctx.r3.s64 = ctx.r10.s64 + 3752;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE37E4;
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

__attribute__((alias("__imp__sub_83CE37F4"))) PPC_WEAK_FUNC(sub_83CE37F4);
PPC_FUNC_IMPL(__imp__sub_83CE37F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE37F8"))) PPC_WEAK_FUNC(sub_83CE37F8);
PPC_FUNC_IMPL(__imp__sub_83CE37F8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-20396
	ctx.r11.s64 = ctx.r8.s64 + -20396;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,23592(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23592);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,3744
	ctx.r3.s64 = ctx.r6.s64 + 3744;
	// stw r10,-20396(r8)
	PPC_STORE_U32(ctx.r8.u32 + -20396, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3828"))) PPC_WEAK_FUNC(sub_83CE3828);
PPC_FUNC_IMPL(__imp__sub_83CE3828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3760
	ctx.r3.s64 = ctx.r11.s64 + 3760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3834"))) PPC_WEAK_FUNC(sub_83CE3834);
PPC_FUNC_IMPL(__imp__sub_83CE3834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3838"))) PPC_WEAK_FUNC(sub_83CE3838);
PPC_FUNC_IMPL(__imp__sub_83CE3838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3768
	ctx.r3.s64 = ctx.r11.s64 + 3768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3844"))) PPC_WEAK_FUNC(sub_83CE3844);
PPC_FUNC_IMPL(__imp__sub_83CE3844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3848"))) PPC_WEAK_FUNC(sub_83CE3848);
PPC_FUNC_IMPL(__imp__sub_83CE3848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3776
	ctx.r3.s64 = ctx.r11.s64 + 3776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3854"))) PPC_WEAK_FUNC(sub_83CE3854);
PPC_FUNC_IMPL(__imp__sub_83CE3854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3858"))) PPC_WEAK_FUNC(sub_83CE3858);
PPC_FUNC_IMPL(__imp__sub_83CE3858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3784
	ctx.r3.s64 = ctx.r11.s64 + 3784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3864"))) PPC_WEAK_FUNC(sub_83CE3864);
PPC_FUNC_IMPL(__imp__sub_83CE3864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3868"))) PPC_WEAK_FUNC(sub_83CE3868);
PPC_FUNC_IMPL(__imp__sub_83CE3868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3792
	ctx.r3.s64 = ctx.r11.s64 + 3792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3874"))) PPC_WEAK_FUNC(sub_83CE3874);
PPC_FUNC_IMPL(__imp__sub_83CE3874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3878"))) PPC_WEAK_FUNC(sub_83CE3878);
PPC_FUNC_IMPL(__imp__sub_83CE3878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3800
	ctx.r3.s64 = ctx.r11.s64 + 3800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3884"))) PPC_WEAK_FUNC(sub_83CE3884);
PPC_FUNC_IMPL(__imp__sub_83CE3884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3888"))) PPC_WEAK_FUNC(sub_83CE3888);
PPC_FUNC_IMPL(__imp__sub_83CE3888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3808
	ctx.r3.s64 = ctx.r11.s64 + 3808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3894"))) PPC_WEAK_FUNC(sub_83CE3894);
PPC_FUNC_IMPL(__imp__sub_83CE3894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3898"))) PPC_WEAK_FUNC(sub_83CE3898);
PPC_FUNC_IMPL(__imp__sub_83CE3898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3816
	ctx.r3.s64 = ctx.r11.s64 + 3816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE38A4"))) PPC_WEAK_FUNC(sub_83CE38A4);
PPC_FUNC_IMPL(__imp__sub_83CE38A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE38A8"))) PPC_WEAK_FUNC(sub_83CE38A8);
PPC_FUNC_IMPL(__imp__sub_83CE38A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3824
	ctx.r3.s64 = ctx.r11.s64 + 3824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE38B4"))) PPC_WEAK_FUNC(sub_83CE38B4);
PPC_FUNC_IMPL(__imp__sub_83CE38B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE38B8"))) PPC_WEAK_FUNC(sub_83CE38B8);
PPC_FUNC_IMPL(__imp__sub_83CE38B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3832
	ctx.r3.s64 = ctx.r11.s64 + 3832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE38C4"))) PPC_WEAK_FUNC(sub_83CE38C4);
PPC_FUNC_IMPL(__imp__sub_83CE38C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE38C8"))) PPC_WEAK_FUNC(sub_83CE38C8);
PPC_FUNC_IMPL(__imp__sub_83CE38C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3840
	ctx.r3.s64 = ctx.r11.s64 + 3840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE38D4"))) PPC_WEAK_FUNC(sub_83CE38D4);
PPC_FUNC_IMPL(__imp__sub_83CE38D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE38D8"))) PPC_WEAK_FUNC(sub_83CE38D8);
PPC_FUNC_IMPL(__imp__sub_83CE38D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3848
	ctx.r3.s64 = ctx.r11.s64 + 3848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE38E4"))) PPC_WEAK_FUNC(sub_83CE38E4);
PPC_FUNC_IMPL(__imp__sub_83CE38E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE38E8"))) PPC_WEAK_FUNC(sub_83CE38E8);
PPC_FUNC_IMPL(__imp__sub_83CE38E8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-20016
	ctx.r7.s64 = ctx.r8.s64 + -20016;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-20016(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20016);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-20016(r8)
	PPC_STORE_U32(ctx.r8.u32 + -20016, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE3910"))) PPC_WEAK_FUNC(sub_83CE3910);
PPC_FUNC_IMPL(__imp__sub_83CE3910) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,23768
	ctx.r6.s64 = ctx.r7.s64 + 23768;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,23696(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 23696);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-20016(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -20016);
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
	// std r9,23768(r7)
	PPC_STORE_U64(ctx.r7.u32 + 23768, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE3958"))) PPC_WEAK_FUNC(sub_83CE3958);
PPC_FUNC_IMPL(__imp__sub_83CE3958) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-20032
	ctx.r3.s64 = ctx.r11.s64 + -20032;
	// bl 0x83523120
	ctx.lr = 0x83CE3970;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,3856
	ctx.r3.s64 = ctx.r10.s64 + 3856;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE397C;
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

__attribute__((alias("__imp__sub_83CE398C"))) PPC_WEAK_FUNC(sub_83CE398C);
PPC_FUNC_IMPL(__imp__sub_83CE398C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3990"))) PPC_WEAK_FUNC(sub_83CE3990);
PPC_FUNC_IMPL(__imp__sub_83CE3990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3872
	ctx.r3.s64 = ctx.r11.s64 + 3872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE399C"))) PPC_WEAK_FUNC(sub_83CE399C);
PPC_FUNC_IMPL(__imp__sub_83CE399C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE39A0"))) PPC_WEAK_FUNC(sub_83CE39A0);
PPC_FUNC_IMPL(__imp__sub_83CE39A0) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-20008
	ctx.r3.s64 = ctx.r11.s64 + -20008;
	// bl 0x8259af80
	ctx.lr = 0x83CE39B8;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,3888
	ctx.r3.s64 = ctx.r10.s64 + 3888;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE39C4;
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

__attribute__((alias("__imp__sub_83CE39D4"))) PPC_WEAK_FUNC(sub_83CE39D4);
PPC_FUNC_IMPL(__imp__sub_83CE39D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE39D8"))) PPC_WEAK_FUNC(sub_83CE39D8);
PPC_FUNC_IMPL(__imp__sub_83CE39D8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-20028
	ctx.r11.s64 = ctx.r8.s64 + -20028;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,23744(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23744);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,3880
	ctx.r3.s64 = ctx.r6.s64 + 3880;
	// stw r10,-20028(r8)
	PPC_STORE_U32(ctx.r8.u32 + -20028, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3A08"))) PPC_WEAK_FUNC(sub_83CE3A08);
PPC_FUNC_IMPL(__imp__sub_83CE3A08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3896
	ctx.r3.s64 = ctx.r11.s64 + 3896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3A14"))) PPC_WEAK_FUNC(sub_83CE3A14);
PPC_FUNC_IMPL(__imp__sub_83CE3A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3A18"))) PPC_WEAK_FUNC(sub_83CE3A18);
PPC_FUNC_IMPL(__imp__sub_83CE3A18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3904
	ctx.r3.s64 = ctx.r11.s64 + 3904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3A24"))) PPC_WEAK_FUNC(sub_83CE3A24);
PPC_FUNC_IMPL(__imp__sub_83CE3A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3A28"))) PPC_WEAK_FUNC(sub_83CE3A28);
PPC_FUNC_IMPL(__imp__sub_83CE3A28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3912
	ctx.r3.s64 = ctx.r11.s64 + 3912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3A34"))) PPC_WEAK_FUNC(sub_83CE3A34);
PPC_FUNC_IMPL(__imp__sub_83CE3A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3A38"))) PPC_WEAK_FUNC(sub_83CE3A38);
PPC_FUNC_IMPL(__imp__sub_83CE3A38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3920
	ctx.r3.s64 = ctx.r11.s64 + 3920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3A44"))) PPC_WEAK_FUNC(sub_83CE3A44);
PPC_FUNC_IMPL(__imp__sub_83CE3A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3A48"))) PPC_WEAK_FUNC(sub_83CE3A48);
PPC_FUNC_IMPL(__imp__sub_83CE3A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3928
	ctx.r3.s64 = ctx.r11.s64 + 3928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3A54"))) PPC_WEAK_FUNC(sub_83CE3A54);
PPC_FUNC_IMPL(__imp__sub_83CE3A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3A58"))) PPC_WEAK_FUNC(sub_83CE3A58);
PPC_FUNC_IMPL(__imp__sub_83CE3A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3936
	ctx.r3.s64 = ctx.r11.s64 + 3936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3A64"))) PPC_WEAK_FUNC(sub_83CE3A64);
PPC_FUNC_IMPL(__imp__sub_83CE3A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3A68"))) PPC_WEAK_FUNC(sub_83CE3A68);
PPC_FUNC_IMPL(__imp__sub_83CE3A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3944
	ctx.r3.s64 = ctx.r11.s64 + 3944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3A74"))) PPC_WEAK_FUNC(sub_83CE3A74);
PPC_FUNC_IMPL(__imp__sub_83CE3A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3A78"))) PPC_WEAK_FUNC(sub_83CE3A78);
PPC_FUNC_IMPL(__imp__sub_83CE3A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3952
	ctx.r3.s64 = ctx.r11.s64 + 3952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3A84"))) PPC_WEAK_FUNC(sub_83CE3A84);
PPC_FUNC_IMPL(__imp__sub_83CE3A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3A88"))) PPC_WEAK_FUNC(sub_83CE3A88);
PPC_FUNC_IMPL(__imp__sub_83CE3A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3960
	ctx.r3.s64 = ctx.r11.s64 + 3960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3A94"))) PPC_WEAK_FUNC(sub_83CE3A94);
PPC_FUNC_IMPL(__imp__sub_83CE3A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3A98"))) PPC_WEAK_FUNC(sub_83CE3A98);
PPC_FUNC_IMPL(__imp__sub_83CE3A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3968
	ctx.r3.s64 = ctx.r11.s64 + 3968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3AA4"))) PPC_WEAK_FUNC(sub_83CE3AA4);
PPC_FUNC_IMPL(__imp__sub_83CE3AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3AA8"))) PPC_WEAK_FUNC(sub_83CE3AA8);
PPC_FUNC_IMPL(__imp__sub_83CE3AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3976
	ctx.r3.s64 = ctx.r11.s64 + 3976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3AB4"))) PPC_WEAK_FUNC(sub_83CE3AB4);
PPC_FUNC_IMPL(__imp__sub_83CE3AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3AB8"))) PPC_WEAK_FUNC(sub_83CE3AB8);
PPC_FUNC_IMPL(__imp__sub_83CE3AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,3984
	ctx.r3.s64 = ctx.r11.s64 + 3984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3AC4"))) PPC_WEAK_FUNC(sub_83CE3AC4);
PPC_FUNC_IMPL(__imp__sub_83CE3AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3AC8"))) PPC_WEAK_FUNC(sub_83CE3AC8);
PPC_FUNC_IMPL(__imp__sub_83CE3AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-19644
	ctx.r7.s64 = ctx.r8.s64 + -19644;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-19644(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19644);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-19644(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19644, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE3AF0"))) PPC_WEAK_FUNC(sub_83CE3AF0);
PPC_FUNC_IMPL(__imp__sub_83CE3AF0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,23912
	ctx.r6.s64 = ctx.r7.s64 + 23912;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,23840(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 23840);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-19644(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -19644);
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
	// std r9,23912(r7)
	PPC_STORE_U64(ctx.r7.u32 + 23912, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE3B38"))) PPC_WEAK_FUNC(sub_83CE3B38);
PPC_FUNC_IMPL(__imp__sub_83CE3B38) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-19660
	ctx.r3.s64 = ctx.r11.s64 + -19660;
	// bl 0x83523120
	ctx.lr = 0x83CE3B50;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,3992
	ctx.r3.s64 = ctx.r10.s64 + 3992;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE3B5C;
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

__attribute__((alias("__imp__sub_83CE3B6C"))) PPC_WEAK_FUNC(sub_83CE3B6C);
PPC_FUNC_IMPL(__imp__sub_83CE3B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3B70"))) PPC_WEAK_FUNC(sub_83CE3B70);
PPC_FUNC_IMPL(__imp__sub_83CE3B70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4008
	ctx.r3.s64 = ctx.r11.s64 + 4008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3B7C"))) PPC_WEAK_FUNC(sub_83CE3B7C);
PPC_FUNC_IMPL(__imp__sub_83CE3B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3B80"))) PPC_WEAK_FUNC(sub_83CE3B80);
PPC_FUNC_IMPL(__imp__sub_83CE3B80) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-19632
	ctx.r3.s64 = ctx.r11.s64 + -19632;
	// bl 0x8259af80
	ctx.lr = 0x83CE3B98;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,4024
	ctx.r3.s64 = ctx.r10.s64 + 4024;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE3BA4;
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

__attribute__((alias("__imp__sub_83CE3BB4"))) PPC_WEAK_FUNC(sub_83CE3BB4);
PPC_FUNC_IMPL(__imp__sub_83CE3BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3BB8"))) PPC_WEAK_FUNC(sub_83CE3BB8);
PPC_FUNC_IMPL(__imp__sub_83CE3BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-19656
	ctx.r11.s64 = ctx.r8.s64 + -19656;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,23888(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23888);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,4016
	ctx.r3.s64 = ctx.r6.s64 + 4016;
	// stw r10,-19656(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19656, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3BE8"))) PPC_WEAK_FUNC(sub_83CE3BE8);
PPC_FUNC_IMPL(__imp__sub_83CE3BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4032
	ctx.r3.s64 = ctx.r11.s64 + 4032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3BF4"))) PPC_WEAK_FUNC(sub_83CE3BF4);
PPC_FUNC_IMPL(__imp__sub_83CE3BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3BF8"))) PPC_WEAK_FUNC(sub_83CE3BF8);
PPC_FUNC_IMPL(__imp__sub_83CE3BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4040
	ctx.r3.s64 = ctx.r11.s64 + 4040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3C04"))) PPC_WEAK_FUNC(sub_83CE3C04);
PPC_FUNC_IMPL(__imp__sub_83CE3C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3C08"))) PPC_WEAK_FUNC(sub_83CE3C08);
PPC_FUNC_IMPL(__imp__sub_83CE3C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4048
	ctx.r3.s64 = ctx.r11.s64 + 4048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3C14"))) PPC_WEAK_FUNC(sub_83CE3C14);
PPC_FUNC_IMPL(__imp__sub_83CE3C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3C18"))) PPC_WEAK_FUNC(sub_83CE3C18);
PPC_FUNC_IMPL(__imp__sub_83CE3C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4056
	ctx.r3.s64 = ctx.r11.s64 + 4056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3C24"))) PPC_WEAK_FUNC(sub_83CE3C24);
PPC_FUNC_IMPL(__imp__sub_83CE3C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3C28"))) PPC_WEAK_FUNC(sub_83CE3C28);
PPC_FUNC_IMPL(__imp__sub_83CE3C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4064
	ctx.r3.s64 = ctx.r11.s64 + 4064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3C34"))) PPC_WEAK_FUNC(sub_83CE3C34);
PPC_FUNC_IMPL(__imp__sub_83CE3C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3C38"))) PPC_WEAK_FUNC(sub_83CE3C38);
PPC_FUNC_IMPL(__imp__sub_83CE3C38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4072
	ctx.r3.s64 = ctx.r11.s64 + 4072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3C44"))) PPC_WEAK_FUNC(sub_83CE3C44);
PPC_FUNC_IMPL(__imp__sub_83CE3C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3C48"))) PPC_WEAK_FUNC(sub_83CE3C48);
PPC_FUNC_IMPL(__imp__sub_83CE3C48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4080
	ctx.r3.s64 = ctx.r11.s64 + 4080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3C54"))) PPC_WEAK_FUNC(sub_83CE3C54);
PPC_FUNC_IMPL(__imp__sub_83CE3C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3C58"))) PPC_WEAK_FUNC(sub_83CE3C58);
PPC_FUNC_IMPL(__imp__sub_83CE3C58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4088
	ctx.r3.s64 = ctx.r11.s64 + 4088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3C64"))) PPC_WEAK_FUNC(sub_83CE3C64);
PPC_FUNC_IMPL(__imp__sub_83CE3C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3C68"))) PPC_WEAK_FUNC(sub_83CE3C68);
PPC_FUNC_IMPL(__imp__sub_83CE3C68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4096
	ctx.r3.s64 = ctx.r11.s64 + 4096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3C74"))) PPC_WEAK_FUNC(sub_83CE3C74);
PPC_FUNC_IMPL(__imp__sub_83CE3C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3C78"))) PPC_WEAK_FUNC(sub_83CE3C78);
PPC_FUNC_IMPL(__imp__sub_83CE3C78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4104
	ctx.r3.s64 = ctx.r11.s64 + 4104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3C84"))) PPC_WEAK_FUNC(sub_83CE3C84);
PPC_FUNC_IMPL(__imp__sub_83CE3C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3C88"))) PPC_WEAK_FUNC(sub_83CE3C88);
PPC_FUNC_IMPL(__imp__sub_83CE3C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4112
	ctx.r3.s64 = ctx.r11.s64 + 4112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3C94"))) PPC_WEAK_FUNC(sub_83CE3C94);
PPC_FUNC_IMPL(__imp__sub_83CE3C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3C98"))) PPC_WEAK_FUNC(sub_83CE3C98);
PPC_FUNC_IMPL(__imp__sub_83CE3C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4120
	ctx.r3.s64 = ctx.r11.s64 + 4120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3CA4"))) PPC_WEAK_FUNC(sub_83CE3CA4);
PPC_FUNC_IMPL(__imp__sub_83CE3CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3CA8"))) PPC_WEAK_FUNC(sub_83CE3CA8);
PPC_FUNC_IMPL(__imp__sub_83CE3CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-19272
	ctx.r7.s64 = ctx.r8.s64 + -19272;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-19272(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19272);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-19272(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19272, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE3CD0"))) PPC_WEAK_FUNC(sub_83CE3CD0);
PPC_FUNC_IMPL(__imp__sub_83CE3CD0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,24048
	ctx.r6.s64 = ctx.r7.s64 + 24048;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,23976(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 23976);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-19272(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -19272);
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
	// std r9,24048(r7)
	PPC_STORE_U64(ctx.r7.u32 + 24048, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE3D18"))) PPC_WEAK_FUNC(sub_83CE3D18);
PPC_FUNC_IMPL(__imp__sub_83CE3D18) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-19288
	ctx.r3.s64 = ctx.r11.s64 + -19288;
	// bl 0x83523120
	ctx.lr = 0x83CE3D30;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,4128
	ctx.r3.s64 = ctx.r10.s64 + 4128;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE3D3C;
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

__attribute__((alias("__imp__sub_83CE3D4C"))) PPC_WEAK_FUNC(sub_83CE3D4C);
PPC_FUNC_IMPL(__imp__sub_83CE3D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3D50"))) PPC_WEAK_FUNC(sub_83CE3D50);
PPC_FUNC_IMPL(__imp__sub_83CE3D50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4144
	ctx.r3.s64 = ctx.r11.s64 + 4144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3D5C"))) PPC_WEAK_FUNC(sub_83CE3D5C);
PPC_FUNC_IMPL(__imp__sub_83CE3D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3D60"))) PPC_WEAK_FUNC(sub_83CE3D60);
PPC_FUNC_IMPL(__imp__sub_83CE3D60) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-19264
	ctx.r3.s64 = ctx.r11.s64 + -19264;
	// bl 0x8259af80
	ctx.lr = 0x83CE3D78;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,4160
	ctx.r3.s64 = ctx.r10.s64 + 4160;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE3D84;
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

__attribute__((alias("__imp__sub_83CE3D94"))) PPC_WEAK_FUNC(sub_83CE3D94);
PPC_FUNC_IMPL(__imp__sub_83CE3D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3D98"))) PPC_WEAK_FUNC(sub_83CE3D98);
PPC_FUNC_IMPL(__imp__sub_83CE3D98) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-19284
	ctx.r11.s64 = ctx.r8.s64 + -19284;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,24024(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24024);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,4152
	ctx.r3.s64 = ctx.r6.s64 + 4152;
	// stw r10,-19284(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19284, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3DC8"))) PPC_WEAK_FUNC(sub_83CE3DC8);
PPC_FUNC_IMPL(__imp__sub_83CE3DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4168
	ctx.r3.s64 = ctx.r11.s64 + 4168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3DD4"))) PPC_WEAK_FUNC(sub_83CE3DD4);
PPC_FUNC_IMPL(__imp__sub_83CE3DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3DD8"))) PPC_WEAK_FUNC(sub_83CE3DD8);
PPC_FUNC_IMPL(__imp__sub_83CE3DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4176
	ctx.r3.s64 = ctx.r11.s64 + 4176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3DE4"))) PPC_WEAK_FUNC(sub_83CE3DE4);
PPC_FUNC_IMPL(__imp__sub_83CE3DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3DE8"))) PPC_WEAK_FUNC(sub_83CE3DE8);
PPC_FUNC_IMPL(__imp__sub_83CE3DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4184
	ctx.r3.s64 = ctx.r11.s64 + 4184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3DF4"))) PPC_WEAK_FUNC(sub_83CE3DF4);
PPC_FUNC_IMPL(__imp__sub_83CE3DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3DF8"))) PPC_WEAK_FUNC(sub_83CE3DF8);
PPC_FUNC_IMPL(__imp__sub_83CE3DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4192
	ctx.r3.s64 = ctx.r11.s64 + 4192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3E04"))) PPC_WEAK_FUNC(sub_83CE3E04);
PPC_FUNC_IMPL(__imp__sub_83CE3E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3E08"))) PPC_WEAK_FUNC(sub_83CE3E08);
PPC_FUNC_IMPL(__imp__sub_83CE3E08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4200
	ctx.r3.s64 = ctx.r11.s64 + 4200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3E14"))) PPC_WEAK_FUNC(sub_83CE3E14);
PPC_FUNC_IMPL(__imp__sub_83CE3E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3E18"))) PPC_WEAK_FUNC(sub_83CE3E18);
PPC_FUNC_IMPL(__imp__sub_83CE3E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4208
	ctx.r3.s64 = ctx.r11.s64 + 4208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3E24"))) PPC_WEAK_FUNC(sub_83CE3E24);
PPC_FUNC_IMPL(__imp__sub_83CE3E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3E28"))) PPC_WEAK_FUNC(sub_83CE3E28);
PPC_FUNC_IMPL(__imp__sub_83CE3E28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4216
	ctx.r3.s64 = ctx.r11.s64 + 4216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3E34"))) PPC_WEAK_FUNC(sub_83CE3E34);
PPC_FUNC_IMPL(__imp__sub_83CE3E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3E38"))) PPC_WEAK_FUNC(sub_83CE3E38);
PPC_FUNC_IMPL(__imp__sub_83CE3E38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4224
	ctx.r3.s64 = ctx.r11.s64 + 4224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3E44"))) PPC_WEAK_FUNC(sub_83CE3E44);
PPC_FUNC_IMPL(__imp__sub_83CE3E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3E48"))) PPC_WEAK_FUNC(sub_83CE3E48);
PPC_FUNC_IMPL(__imp__sub_83CE3E48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4232
	ctx.r3.s64 = ctx.r11.s64 + 4232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3E54"))) PPC_WEAK_FUNC(sub_83CE3E54);
PPC_FUNC_IMPL(__imp__sub_83CE3E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3E58"))) PPC_WEAK_FUNC(sub_83CE3E58);
PPC_FUNC_IMPL(__imp__sub_83CE3E58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4240
	ctx.r3.s64 = ctx.r11.s64 + 4240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3E64"))) PPC_WEAK_FUNC(sub_83CE3E64);
PPC_FUNC_IMPL(__imp__sub_83CE3E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3E68"))) PPC_WEAK_FUNC(sub_83CE3E68);
PPC_FUNC_IMPL(__imp__sub_83CE3E68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4248
	ctx.r3.s64 = ctx.r11.s64 + 4248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3E74"))) PPC_WEAK_FUNC(sub_83CE3E74);
PPC_FUNC_IMPL(__imp__sub_83CE3E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3E78"))) PPC_WEAK_FUNC(sub_83CE3E78);
PPC_FUNC_IMPL(__imp__sub_83CE3E78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4256
	ctx.r3.s64 = ctx.r11.s64 + 4256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3E84"))) PPC_WEAK_FUNC(sub_83CE3E84);
PPC_FUNC_IMPL(__imp__sub_83CE3E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3E88"))) PPC_WEAK_FUNC(sub_83CE3E88);
PPC_FUNC_IMPL(__imp__sub_83CE3E88) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-18916
	ctx.r7.s64 = ctx.r8.s64 + -18916;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-18916(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18916);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-18916(r8)
	PPC_STORE_U32(ctx.r8.u32 + -18916, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE3EB0"))) PPC_WEAK_FUNC(sub_83CE3EB0);
PPC_FUNC_IMPL(__imp__sub_83CE3EB0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,24196
	ctx.r6.s64 = ctx.r7.s64 + 24196;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,24124(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 24124);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-18916(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -18916);
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
	// std r9,24196(r7)
	PPC_STORE_U64(ctx.r7.u32 + 24196, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE3EF8"))) PPC_WEAK_FUNC(sub_83CE3EF8);
PPC_FUNC_IMPL(__imp__sub_83CE3EF8) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-18920
	ctx.r3.s64 = ctx.r11.s64 + -18920;
	// bl 0x83523120
	ctx.lr = 0x83CE3F10;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,4264
	ctx.r3.s64 = ctx.r10.s64 + 4264;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE3F1C;
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

__attribute__((alias("__imp__sub_83CE3F2C"))) PPC_WEAK_FUNC(sub_83CE3F2C);
PPC_FUNC_IMPL(__imp__sub_83CE3F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3F30"))) PPC_WEAK_FUNC(sub_83CE3F30);
PPC_FUNC_IMPL(__imp__sub_83CE3F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4280
	ctx.r3.s64 = ctx.r11.s64 + 4280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3F3C"))) PPC_WEAK_FUNC(sub_83CE3F3C);
PPC_FUNC_IMPL(__imp__sub_83CE3F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3F40"))) PPC_WEAK_FUNC(sub_83CE3F40);
PPC_FUNC_IMPL(__imp__sub_83CE3F40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4288
	ctx.r3.s64 = ctx.r11.s64 + 4288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3F4C"))) PPC_WEAK_FUNC(sub_83CE3F4C);
PPC_FUNC_IMPL(__imp__sub_83CE3F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3F50"))) PPC_WEAK_FUNC(sub_83CE3F50);
PPC_FUNC_IMPL(__imp__sub_83CE3F50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4296
	ctx.r3.s64 = ctx.r11.s64 + 4296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3F5C"))) PPC_WEAK_FUNC(sub_83CE3F5C);
PPC_FUNC_IMPL(__imp__sub_83CE3F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3F60"))) PPC_WEAK_FUNC(sub_83CE3F60);
PPC_FUNC_IMPL(__imp__sub_83CE3F60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4304
	ctx.r3.s64 = ctx.r11.s64 + 4304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3F6C"))) PPC_WEAK_FUNC(sub_83CE3F6C);
PPC_FUNC_IMPL(__imp__sub_83CE3F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3F70"))) PPC_WEAK_FUNC(sub_83CE3F70);
PPC_FUNC_IMPL(__imp__sub_83CE3F70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4312
	ctx.r3.s64 = ctx.r11.s64 + 4312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3F7C"))) PPC_WEAK_FUNC(sub_83CE3F7C);
PPC_FUNC_IMPL(__imp__sub_83CE3F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3F80"))) PPC_WEAK_FUNC(sub_83CE3F80);
PPC_FUNC_IMPL(__imp__sub_83CE3F80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4320
	ctx.r3.s64 = ctx.r11.s64 + 4320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3F8C"))) PPC_WEAK_FUNC(sub_83CE3F8C);
PPC_FUNC_IMPL(__imp__sub_83CE3F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3F90"))) PPC_WEAK_FUNC(sub_83CE3F90);
PPC_FUNC_IMPL(__imp__sub_83CE3F90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4328
	ctx.r3.s64 = ctx.r11.s64 + 4328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3F9C"))) PPC_WEAK_FUNC(sub_83CE3F9C);
PPC_FUNC_IMPL(__imp__sub_83CE3F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3FA0"))) PPC_WEAK_FUNC(sub_83CE3FA0);
PPC_FUNC_IMPL(__imp__sub_83CE3FA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4336
	ctx.r3.s64 = ctx.r11.s64 + 4336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3FAC"))) PPC_WEAK_FUNC(sub_83CE3FAC);
PPC_FUNC_IMPL(__imp__sub_83CE3FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3FB0"))) PPC_WEAK_FUNC(sub_83CE3FB0);
PPC_FUNC_IMPL(__imp__sub_83CE3FB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4344
	ctx.r3.s64 = ctx.r11.s64 + 4344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3FBC"))) PPC_WEAK_FUNC(sub_83CE3FBC);
PPC_FUNC_IMPL(__imp__sub_83CE3FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3FC0"))) PPC_WEAK_FUNC(sub_83CE3FC0);
PPC_FUNC_IMPL(__imp__sub_83CE3FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4352
	ctx.r3.s64 = ctx.r11.s64 + 4352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3FCC"))) PPC_WEAK_FUNC(sub_83CE3FCC);
PPC_FUNC_IMPL(__imp__sub_83CE3FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3FD0"))) PPC_WEAK_FUNC(sub_83CE3FD0);
PPC_FUNC_IMPL(__imp__sub_83CE3FD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4360
	ctx.r3.s64 = ctx.r11.s64 + 4360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3FDC"))) PPC_WEAK_FUNC(sub_83CE3FDC);
PPC_FUNC_IMPL(__imp__sub_83CE3FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3FE0"))) PPC_WEAK_FUNC(sub_83CE3FE0);
PPC_FUNC_IMPL(__imp__sub_83CE3FE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4368
	ctx.r3.s64 = ctx.r11.s64 + 4368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE3FEC"))) PPC_WEAK_FUNC(sub_83CE3FEC);
PPC_FUNC_IMPL(__imp__sub_83CE3FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE3FF0"))) PPC_WEAK_FUNC(sub_83CE3FF0);
PPC_FUNC_IMPL(__imp__sub_83CE3FF0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-18472
	ctx.r7.s64 = ctx.r8.s64 + -18472;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-18472(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18472);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-18472(r8)
	PPC_STORE_U32(ctx.r8.u32 + -18472, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE4018"))) PPC_WEAK_FUNC(sub_83CE4018);
PPC_FUNC_IMPL(__imp__sub_83CE4018) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,24320
	ctx.r6.s64 = ctx.r7.s64 + 24320;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,24248(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 24248);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-18472(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -18472);
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
	// std r9,24320(r7)
	PPC_STORE_U64(ctx.r7.u32 + 24320, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE4060"))) PPC_WEAK_FUNC(sub_83CE4060);
PPC_FUNC_IMPL(__imp__sub_83CE4060) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-18488
	ctx.r3.s64 = ctx.r11.s64 + -18488;
	// bl 0x83523120
	ctx.lr = 0x83CE4078;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,4376
	ctx.r3.s64 = ctx.r10.s64 + 4376;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE4084;
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

__attribute__((alias("__imp__sub_83CE4094"))) PPC_WEAK_FUNC(sub_83CE4094);
PPC_FUNC_IMPL(__imp__sub_83CE4094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4098"))) PPC_WEAK_FUNC(sub_83CE4098);
PPC_FUNC_IMPL(__imp__sub_83CE4098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4392
	ctx.r3.s64 = ctx.r11.s64 + 4392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE40A4"))) PPC_WEAK_FUNC(sub_83CE40A4);
PPC_FUNC_IMPL(__imp__sub_83CE40A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE40A8"))) PPC_WEAK_FUNC(sub_83CE40A8);
PPC_FUNC_IMPL(__imp__sub_83CE40A8) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-18464
	ctx.r3.s64 = ctx.r11.s64 + -18464;
	// bl 0x8259af80
	ctx.lr = 0x83CE40C0;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,4408
	ctx.r3.s64 = ctx.r10.s64 + 4408;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE40CC;
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

__attribute__((alias("__imp__sub_83CE40DC"))) PPC_WEAK_FUNC(sub_83CE40DC);
PPC_FUNC_IMPL(__imp__sub_83CE40DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE40E0"))) PPC_WEAK_FUNC(sub_83CE40E0);
PPC_FUNC_IMPL(__imp__sub_83CE40E0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-18484
	ctx.r11.s64 = ctx.r8.s64 + -18484;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,24296(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24296);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,4400
	ctx.r3.s64 = ctx.r6.s64 + 4400;
	// stw r10,-18484(r8)
	PPC_STORE_U32(ctx.r8.u32 + -18484, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE4110"))) PPC_WEAK_FUNC(sub_83CE4110);
PPC_FUNC_IMPL(__imp__sub_83CE4110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4416
	ctx.r3.s64 = ctx.r11.s64 + 4416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE411C"))) PPC_WEAK_FUNC(sub_83CE411C);
PPC_FUNC_IMPL(__imp__sub_83CE411C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4120"))) PPC_WEAK_FUNC(sub_83CE4120);
PPC_FUNC_IMPL(__imp__sub_83CE4120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4424
	ctx.r3.s64 = ctx.r11.s64 + 4424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE412C"))) PPC_WEAK_FUNC(sub_83CE412C);
PPC_FUNC_IMPL(__imp__sub_83CE412C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4130"))) PPC_WEAK_FUNC(sub_83CE4130);
PPC_FUNC_IMPL(__imp__sub_83CE4130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4432
	ctx.r3.s64 = ctx.r11.s64 + 4432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE413C"))) PPC_WEAK_FUNC(sub_83CE413C);
PPC_FUNC_IMPL(__imp__sub_83CE413C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4140"))) PPC_WEAK_FUNC(sub_83CE4140);
PPC_FUNC_IMPL(__imp__sub_83CE4140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4440
	ctx.r3.s64 = ctx.r11.s64 + 4440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE414C"))) PPC_WEAK_FUNC(sub_83CE414C);
PPC_FUNC_IMPL(__imp__sub_83CE414C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4150"))) PPC_WEAK_FUNC(sub_83CE4150);
PPC_FUNC_IMPL(__imp__sub_83CE4150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4448
	ctx.r3.s64 = ctx.r11.s64 + 4448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE415C"))) PPC_WEAK_FUNC(sub_83CE415C);
PPC_FUNC_IMPL(__imp__sub_83CE415C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4160"))) PPC_WEAK_FUNC(sub_83CE4160);
PPC_FUNC_IMPL(__imp__sub_83CE4160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4456
	ctx.r3.s64 = ctx.r11.s64 + 4456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE416C"))) PPC_WEAK_FUNC(sub_83CE416C);
PPC_FUNC_IMPL(__imp__sub_83CE416C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4170"))) PPC_WEAK_FUNC(sub_83CE4170);
PPC_FUNC_IMPL(__imp__sub_83CE4170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4464
	ctx.r3.s64 = ctx.r11.s64 + 4464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE417C"))) PPC_WEAK_FUNC(sub_83CE417C);
PPC_FUNC_IMPL(__imp__sub_83CE417C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4180"))) PPC_WEAK_FUNC(sub_83CE4180);
PPC_FUNC_IMPL(__imp__sub_83CE4180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4472
	ctx.r3.s64 = ctx.r11.s64 + 4472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE418C"))) PPC_WEAK_FUNC(sub_83CE418C);
PPC_FUNC_IMPL(__imp__sub_83CE418C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE4190"))) PPC_WEAK_FUNC(sub_83CE4190);
PPC_FUNC_IMPL(__imp__sub_83CE4190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4480
	ctx.r3.s64 = ctx.r11.s64 + 4480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE419C"))) PPC_WEAK_FUNC(sub_83CE419C);
PPC_FUNC_IMPL(__imp__sub_83CE419C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE41A0"))) PPC_WEAK_FUNC(sub_83CE41A0);
PPC_FUNC_IMPL(__imp__sub_83CE41A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4488
	ctx.r3.s64 = ctx.r11.s64 + 4488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE41AC"))) PPC_WEAK_FUNC(sub_83CE41AC);
PPC_FUNC_IMPL(__imp__sub_83CE41AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE41B0"))) PPC_WEAK_FUNC(sub_83CE41B0);
PPC_FUNC_IMPL(__imp__sub_83CE41B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,4496
	ctx.r3.s64 = ctx.r11.s64 + 4496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE41BC"))) PPC_WEAK_FUNC(sub_83CE41BC);
PPC_FUNC_IMPL(__imp__sub_83CE41BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

