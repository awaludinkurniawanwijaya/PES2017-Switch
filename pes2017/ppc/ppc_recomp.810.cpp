#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C60240"))) PPC_WEAK_FUNC(sub_83C60240);
PPC_FUNC_IMPL(__imp__sub_83C60240) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,1100
	ctx.r11.s64 = ctx.r8.s64 + 1100;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,28304(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28304);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,11576
	ctx.r3.s64 = ctx.r6.s64 + 11576;
	// stw r10,1100(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1100, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C60270"))) PPC_WEAK_FUNC(sub_83C60270);
PPC_FUNC_IMPL(__imp__sub_83C60270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,11592
	ctx.r3.s64 = ctx.r11.s64 + 11592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6027C"))) PPC_WEAK_FUNC(sub_83C6027C);
PPC_FUNC_IMPL(__imp__sub_83C6027C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60280"))) PPC_WEAK_FUNC(sub_83C60280);
PPC_FUNC_IMPL(__imp__sub_83C60280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,11600
	ctx.r3.s64 = ctx.r11.s64 + 11600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6028C"))) PPC_WEAK_FUNC(sub_83C6028C);
PPC_FUNC_IMPL(__imp__sub_83C6028C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60290"))) PPC_WEAK_FUNC(sub_83C60290);
PPC_FUNC_IMPL(__imp__sub_83C60290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,11608
	ctx.r3.s64 = ctx.r11.s64 + 11608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6029C"))) PPC_WEAK_FUNC(sub_83C6029C);
PPC_FUNC_IMPL(__imp__sub_83C6029C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C602A0"))) PPC_WEAK_FUNC(sub_83C602A0);
PPC_FUNC_IMPL(__imp__sub_83C602A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,11616
	ctx.r3.s64 = ctx.r11.s64 + 11616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C602AC"))) PPC_WEAK_FUNC(sub_83C602AC);
PPC_FUNC_IMPL(__imp__sub_83C602AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C602B0"))) PPC_WEAK_FUNC(sub_83C602B0);
PPC_FUNC_IMPL(__imp__sub_83C602B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,11624
	ctx.r3.s64 = ctx.r11.s64 + 11624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C602BC"))) PPC_WEAK_FUNC(sub_83C602BC);
PPC_FUNC_IMPL(__imp__sub_83C602BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C602C0"))) PPC_WEAK_FUNC(sub_83C602C0);
PPC_FUNC_IMPL(__imp__sub_83C602C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,11632
	ctx.r3.s64 = ctx.r11.s64 + 11632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C602CC"))) PPC_WEAK_FUNC(sub_83C602CC);
PPC_FUNC_IMPL(__imp__sub_83C602CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C602D0"))) PPC_WEAK_FUNC(sub_83C602D0);
PPC_FUNC_IMPL(__imp__sub_83C602D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,11640
	ctx.r3.s64 = ctx.r11.s64 + 11640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C602DC"))) PPC_WEAK_FUNC(sub_83C602DC);
PPC_FUNC_IMPL(__imp__sub_83C602DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C602E0"))) PPC_WEAK_FUNC(sub_83C602E0);
PPC_FUNC_IMPL(__imp__sub_83C602E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,11648
	ctx.r3.s64 = ctx.r11.s64 + 11648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C602EC"))) PPC_WEAK_FUNC(sub_83C602EC);
PPC_FUNC_IMPL(__imp__sub_83C602EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C602F0"))) PPC_WEAK_FUNC(sub_83C602F0);
PPC_FUNC_IMPL(__imp__sub_83C602F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,11656
	ctx.r3.s64 = ctx.r11.s64 + 11656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C602FC"))) PPC_WEAK_FUNC(sub_83C602FC);
PPC_FUNC_IMPL(__imp__sub_83C602FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60300"))) PPC_WEAK_FUNC(sub_83C60300);
PPC_FUNC_IMPL(__imp__sub_83C60300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,11664
	ctx.r3.s64 = ctx.r11.s64 + 11664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6030C"))) PPC_WEAK_FUNC(sub_83C6030C);
PPC_FUNC_IMPL(__imp__sub_83C6030C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60310"))) PPC_WEAK_FUNC(sub_83C60310);
PPC_FUNC_IMPL(__imp__sub_83C60310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,11672
	ctx.r3.s64 = ctx.r11.s64 + 11672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6031C"))) PPC_WEAK_FUNC(sub_83C6031C);
PPC_FUNC_IMPL(__imp__sub_83C6031C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60320"))) PPC_WEAK_FUNC(sub_83C60320);
PPC_FUNC_IMPL(__imp__sub_83C60320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,11680
	ctx.r3.s64 = ctx.r11.s64 + 11680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6032C"))) PPC_WEAK_FUNC(sub_83C6032C);
PPC_FUNC_IMPL(__imp__sub_83C6032C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60330"))) PPC_WEAK_FUNC(sub_83C60330);
PPC_FUNC_IMPL(__imp__sub_83C60330) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,1464
	ctx.r3.s64 = ctx.r11.s64 + 1464;
	// bl 0x83523120
	ctx.lr = 0x83C60348;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,11688
	ctx.r3.s64 = ctx.r10.s64 + 11688;
	// bl 0x831cdcc8
	ctx.lr = 0x83C60354;
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

__attribute__((alias("__imp__sub_83C60364"))) PPC_WEAK_FUNC(sub_83C60364);
PPC_FUNC_IMPL(__imp__sub_83C60364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60368"))) PPC_WEAK_FUNC(sub_83C60368);
PPC_FUNC_IMPL(__imp__sub_83C60368) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,1480
	ctx.r7.s64 = ctx.r8.s64 + 1480;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,1480(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1480);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,1480(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1480, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C60390"))) PPC_WEAK_FUNC(sub_83C60390);
PPC_FUNC_IMPL(__imp__sub_83C60390) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,28456
	ctx.r6.s64 = ctx.r7.s64 + 28456;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,28384(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 28384);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,1480(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1480);
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
	// std r9,28456(r7)
	PPC_STORE_U64(ctx.r7.u32 + 28456, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C603D8"))) PPC_WEAK_FUNC(sub_83C603D8);
PPC_FUNC_IMPL(__imp__sub_83C603D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,11704
	ctx.r3.s64 = ctx.r11.s64 + 11704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C603E4"))) PPC_WEAK_FUNC(sub_83C603E4);
PPC_FUNC_IMPL(__imp__sub_83C603E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C603E8"))) PPC_WEAK_FUNC(sub_83C603E8);
PPC_FUNC_IMPL(__imp__sub_83C603E8) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,1488
	ctx.r3.s64 = ctx.r11.s64 + 1488;
	// bl 0x8259af80
	ctx.lr = 0x83C60400;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,11720
	ctx.r3.s64 = ctx.r10.s64 + 11720;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6040C;
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

__attribute__((alias("__imp__sub_83C6041C"))) PPC_WEAK_FUNC(sub_83C6041C);
PPC_FUNC_IMPL(__imp__sub_83C6041C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60420"))) PPC_WEAK_FUNC(sub_83C60420);
PPC_FUNC_IMPL(__imp__sub_83C60420) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,1468
	ctx.r11.s64 = ctx.r8.s64 + 1468;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,28432(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28432);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,11712
	ctx.r3.s64 = ctx.r6.s64 + 11712;
	// stw r10,1468(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1468, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C60450"))) PPC_WEAK_FUNC(sub_83C60450);
PPC_FUNC_IMPL(__imp__sub_83C60450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,11728
	ctx.r3.s64 = ctx.r11.s64 + 11728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6045C"))) PPC_WEAK_FUNC(sub_83C6045C);
PPC_FUNC_IMPL(__imp__sub_83C6045C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60460"))) PPC_WEAK_FUNC(sub_83C60460);
PPC_FUNC_IMPL(__imp__sub_83C60460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,11736
	ctx.r3.s64 = ctx.r11.s64 + 11736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6046C"))) PPC_WEAK_FUNC(sub_83C6046C);
PPC_FUNC_IMPL(__imp__sub_83C6046C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60470"))) PPC_WEAK_FUNC(sub_83C60470);
PPC_FUNC_IMPL(__imp__sub_83C60470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,11744
	ctx.r3.s64 = ctx.r11.s64 + 11744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6047C"))) PPC_WEAK_FUNC(sub_83C6047C);
PPC_FUNC_IMPL(__imp__sub_83C6047C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60480"))) PPC_WEAK_FUNC(sub_83C60480);
PPC_FUNC_IMPL(__imp__sub_83C60480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,11752
	ctx.r3.s64 = ctx.r11.s64 + 11752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6048C"))) PPC_WEAK_FUNC(sub_83C6048C);
PPC_FUNC_IMPL(__imp__sub_83C6048C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60490"))) PPC_WEAK_FUNC(sub_83C60490);
PPC_FUNC_IMPL(__imp__sub_83C60490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,11760
	ctx.r3.s64 = ctx.r11.s64 + 11760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6049C"))) PPC_WEAK_FUNC(sub_83C6049C);
PPC_FUNC_IMPL(__imp__sub_83C6049C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C604A0"))) PPC_WEAK_FUNC(sub_83C604A0);
PPC_FUNC_IMPL(__imp__sub_83C604A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,11768
	ctx.r3.s64 = ctx.r11.s64 + 11768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C604AC"))) PPC_WEAK_FUNC(sub_83C604AC);
PPC_FUNC_IMPL(__imp__sub_83C604AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C604B0"))) PPC_WEAK_FUNC(sub_83C604B0);
PPC_FUNC_IMPL(__imp__sub_83C604B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,11776
	ctx.r3.s64 = ctx.r11.s64 + 11776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C604BC"))) PPC_WEAK_FUNC(sub_83C604BC);
PPC_FUNC_IMPL(__imp__sub_83C604BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C604C0"))) PPC_WEAK_FUNC(sub_83C604C0);
PPC_FUNC_IMPL(__imp__sub_83C604C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,11784
	ctx.r3.s64 = ctx.r11.s64 + 11784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C604CC"))) PPC_WEAK_FUNC(sub_83C604CC);
PPC_FUNC_IMPL(__imp__sub_83C604CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C604D0"))) PPC_WEAK_FUNC(sub_83C604D0);
PPC_FUNC_IMPL(__imp__sub_83C604D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,11792
	ctx.r3.s64 = ctx.r11.s64 + 11792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C604DC"))) PPC_WEAK_FUNC(sub_83C604DC);
PPC_FUNC_IMPL(__imp__sub_83C604DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C604E0"))) PPC_WEAK_FUNC(sub_83C604E0);
PPC_FUNC_IMPL(__imp__sub_83C604E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,11800
	ctx.r3.s64 = ctx.r11.s64 + 11800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C604EC"))) PPC_WEAK_FUNC(sub_83C604EC);
PPC_FUNC_IMPL(__imp__sub_83C604EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C604F0"))) PPC_WEAK_FUNC(sub_83C604F0);
PPC_FUNC_IMPL(__imp__sub_83C604F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,11808
	ctx.r3.s64 = ctx.r11.s64 + 11808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C604FC"))) PPC_WEAK_FUNC(sub_83C604FC);
PPC_FUNC_IMPL(__imp__sub_83C604FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60500"))) PPC_WEAK_FUNC(sub_83C60500);
PPC_FUNC_IMPL(__imp__sub_83C60500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,11816
	ctx.r3.s64 = ctx.r11.s64 + 11816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6050C"))) PPC_WEAK_FUNC(sub_83C6050C);
PPC_FUNC_IMPL(__imp__sub_83C6050C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60510"))) PPC_WEAK_FUNC(sub_83C60510);
PPC_FUNC_IMPL(__imp__sub_83C60510) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,1832
	ctx.r3.s64 = ctx.r11.s64 + 1832;
	// bl 0x83523120
	ctx.lr = 0x83C60528;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,11824
	ctx.r3.s64 = ctx.r10.s64 + 11824;
	// bl 0x831cdcc8
	ctx.lr = 0x83C60534;
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

__attribute__((alias("__imp__sub_83C60544"))) PPC_WEAK_FUNC(sub_83C60544);
PPC_FUNC_IMPL(__imp__sub_83C60544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60548"))) PPC_WEAK_FUNC(sub_83C60548);
PPC_FUNC_IMPL(__imp__sub_83C60548) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,1848
	ctx.r7.s64 = ctx.r8.s64 + 1848;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,1848(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1848);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,1848(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1848, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C60570"))) PPC_WEAK_FUNC(sub_83C60570);
PPC_FUNC_IMPL(__imp__sub_83C60570) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,28584
	ctx.r6.s64 = ctx.r7.s64 + 28584;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,28512(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 28512);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,1848(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1848);
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
	// std r9,28584(r7)
	PPC_STORE_U64(ctx.r7.u32 + 28584, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C605B8"))) PPC_WEAK_FUNC(sub_83C605B8);
PPC_FUNC_IMPL(__imp__sub_83C605B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,11840
	ctx.r3.s64 = ctx.r11.s64 + 11840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C605C4"))) PPC_WEAK_FUNC(sub_83C605C4);
PPC_FUNC_IMPL(__imp__sub_83C605C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C605C8"))) PPC_WEAK_FUNC(sub_83C605C8);
PPC_FUNC_IMPL(__imp__sub_83C605C8) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,1856
	ctx.r3.s64 = ctx.r11.s64 + 1856;
	// bl 0x8259af80
	ctx.lr = 0x83C605E0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,11856
	ctx.r3.s64 = ctx.r10.s64 + 11856;
	// bl 0x831cdcc8
	ctx.lr = 0x83C605EC;
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

__attribute__((alias("__imp__sub_83C605FC"))) PPC_WEAK_FUNC(sub_83C605FC);
PPC_FUNC_IMPL(__imp__sub_83C605FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60600"))) PPC_WEAK_FUNC(sub_83C60600);
PPC_FUNC_IMPL(__imp__sub_83C60600) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,1836
	ctx.r11.s64 = ctx.r8.s64 + 1836;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,28560(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28560);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,11848
	ctx.r3.s64 = ctx.r6.s64 + 11848;
	// stw r10,1836(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1836, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C60630"))) PPC_WEAK_FUNC(sub_83C60630);
PPC_FUNC_IMPL(__imp__sub_83C60630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,11864
	ctx.r3.s64 = ctx.r11.s64 + 11864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6063C"))) PPC_WEAK_FUNC(sub_83C6063C);
PPC_FUNC_IMPL(__imp__sub_83C6063C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60640"))) PPC_WEAK_FUNC(sub_83C60640);
PPC_FUNC_IMPL(__imp__sub_83C60640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,11872
	ctx.r3.s64 = ctx.r11.s64 + 11872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6064C"))) PPC_WEAK_FUNC(sub_83C6064C);
PPC_FUNC_IMPL(__imp__sub_83C6064C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60650"))) PPC_WEAK_FUNC(sub_83C60650);
PPC_FUNC_IMPL(__imp__sub_83C60650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,11880
	ctx.r3.s64 = ctx.r11.s64 + 11880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6065C"))) PPC_WEAK_FUNC(sub_83C6065C);
PPC_FUNC_IMPL(__imp__sub_83C6065C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60660"))) PPC_WEAK_FUNC(sub_83C60660);
PPC_FUNC_IMPL(__imp__sub_83C60660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,11888
	ctx.r3.s64 = ctx.r11.s64 + 11888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6066C"))) PPC_WEAK_FUNC(sub_83C6066C);
PPC_FUNC_IMPL(__imp__sub_83C6066C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60670"))) PPC_WEAK_FUNC(sub_83C60670);
PPC_FUNC_IMPL(__imp__sub_83C60670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,11896
	ctx.r3.s64 = ctx.r11.s64 + 11896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6067C"))) PPC_WEAK_FUNC(sub_83C6067C);
PPC_FUNC_IMPL(__imp__sub_83C6067C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60680"))) PPC_WEAK_FUNC(sub_83C60680);
PPC_FUNC_IMPL(__imp__sub_83C60680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,11904
	ctx.r3.s64 = ctx.r11.s64 + 11904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6068C"))) PPC_WEAK_FUNC(sub_83C6068C);
PPC_FUNC_IMPL(__imp__sub_83C6068C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60690"))) PPC_WEAK_FUNC(sub_83C60690);
PPC_FUNC_IMPL(__imp__sub_83C60690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,11912
	ctx.r3.s64 = ctx.r11.s64 + 11912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6069C"))) PPC_WEAK_FUNC(sub_83C6069C);
PPC_FUNC_IMPL(__imp__sub_83C6069C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C606A0"))) PPC_WEAK_FUNC(sub_83C606A0);
PPC_FUNC_IMPL(__imp__sub_83C606A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,11920
	ctx.r3.s64 = ctx.r11.s64 + 11920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C606AC"))) PPC_WEAK_FUNC(sub_83C606AC);
PPC_FUNC_IMPL(__imp__sub_83C606AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C606B0"))) PPC_WEAK_FUNC(sub_83C606B0);
PPC_FUNC_IMPL(__imp__sub_83C606B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,11928
	ctx.r3.s64 = ctx.r11.s64 + 11928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C606BC"))) PPC_WEAK_FUNC(sub_83C606BC);
PPC_FUNC_IMPL(__imp__sub_83C606BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C606C0"))) PPC_WEAK_FUNC(sub_83C606C0);
PPC_FUNC_IMPL(__imp__sub_83C606C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,11936
	ctx.r3.s64 = ctx.r11.s64 + 11936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C606CC"))) PPC_WEAK_FUNC(sub_83C606CC);
PPC_FUNC_IMPL(__imp__sub_83C606CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C606D0"))) PPC_WEAK_FUNC(sub_83C606D0);
PPC_FUNC_IMPL(__imp__sub_83C606D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,11944
	ctx.r3.s64 = ctx.r11.s64 + 11944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C606DC"))) PPC_WEAK_FUNC(sub_83C606DC);
PPC_FUNC_IMPL(__imp__sub_83C606DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C606E0"))) PPC_WEAK_FUNC(sub_83C606E0);
PPC_FUNC_IMPL(__imp__sub_83C606E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,11952
	ctx.r3.s64 = ctx.r11.s64 + 11952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C606EC"))) PPC_WEAK_FUNC(sub_83C606EC);
PPC_FUNC_IMPL(__imp__sub_83C606EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C606F0"))) PPC_WEAK_FUNC(sub_83C606F0);
PPC_FUNC_IMPL(__imp__sub_83C606F0) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,2200
	ctx.r3.s64 = ctx.r11.s64 + 2200;
	// bl 0x83523120
	ctx.lr = 0x83C60708;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,11960
	ctx.r3.s64 = ctx.r10.s64 + 11960;
	// bl 0x831cdcc8
	ctx.lr = 0x83C60714;
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

__attribute__((alias("__imp__sub_83C60724"))) PPC_WEAK_FUNC(sub_83C60724);
PPC_FUNC_IMPL(__imp__sub_83C60724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60728"))) PPC_WEAK_FUNC(sub_83C60728);
PPC_FUNC_IMPL(__imp__sub_83C60728) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,2216
	ctx.r7.s64 = ctx.r8.s64 + 2216;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,2216(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2216);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,2216(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2216, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C60750"))) PPC_WEAK_FUNC(sub_83C60750);
PPC_FUNC_IMPL(__imp__sub_83C60750) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,28712
	ctx.r6.s64 = ctx.r7.s64 + 28712;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,28640(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 28640);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,2216(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2216);
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
	// std r9,28712(r7)
	PPC_STORE_U64(ctx.r7.u32 + 28712, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C60798"))) PPC_WEAK_FUNC(sub_83C60798);
PPC_FUNC_IMPL(__imp__sub_83C60798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,11976
	ctx.r3.s64 = ctx.r11.s64 + 11976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C607A4"))) PPC_WEAK_FUNC(sub_83C607A4);
PPC_FUNC_IMPL(__imp__sub_83C607A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C607A8"))) PPC_WEAK_FUNC(sub_83C607A8);
PPC_FUNC_IMPL(__imp__sub_83C607A8) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,2224
	ctx.r3.s64 = ctx.r11.s64 + 2224;
	// bl 0x8259af80
	ctx.lr = 0x83C607C0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,11992
	ctx.r3.s64 = ctx.r10.s64 + 11992;
	// bl 0x831cdcc8
	ctx.lr = 0x83C607CC;
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

__attribute__((alias("__imp__sub_83C607DC"))) PPC_WEAK_FUNC(sub_83C607DC);
PPC_FUNC_IMPL(__imp__sub_83C607DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C607E0"))) PPC_WEAK_FUNC(sub_83C607E0);
PPC_FUNC_IMPL(__imp__sub_83C607E0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,2204
	ctx.r11.s64 = ctx.r8.s64 + 2204;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,28688(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28688);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,11984
	ctx.r3.s64 = ctx.r6.s64 + 11984;
	// stw r10,2204(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2204, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C60810"))) PPC_WEAK_FUNC(sub_83C60810);
PPC_FUNC_IMPL(__imp__sub_83C60810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12000
	ctx.r3.s64 = ctx.r11.s64 + 12000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6081C"))) PPC_WEAK_FUNC(sub_83C6081C);
PPC_FUNC_IMPL(__imp__sub_83C6081C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60820"))) PPC_WEAK_FUNC(sub_83C60820);
PPC_FUNC_IMPL(__imp__sub_83C60820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12008
	ctx.r3.s64 = ctx.r11.s64 + 12008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6082C"))) PPC_WEAK_FUNC(sub_83C6082C);
PPC_FUNC_IMPL(__imp__sub_83C6082C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60830"))) PPC_WEAK_FUNC(sub_83C60830);
PPC_FUNC_IMPL(__imp__sub_83C60830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12016
	ctx.r3.s64 = ctx.r11.s64 + 12016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6083C"))) PPC_WEAK_FUNC(sub_83C6083C);
PPC_FUNC_IMPL(__imp__sub_83C6083C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60840"))) PPC_WEAK_FUNC(sub_83C60840);
PPC_FUNC_IMPL(__imp__sub_83C60840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12024
	ctx.r3.s64 = ctx.r11.s64 + 12024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6084C"))) PPC_WEAK_FUNC(sub_83C6084C);
PPC_FUNC_IMPL(__imp__sub_83C6084C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60850"))) PPC_WEAK_FUNC(sub_83C60850);
PPC_FUNC_IMPL(__imp__sub_83C60850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12032
	ctx.r3.s64 = ctx.r11.s64 + 12032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6085C"))) PPC_WEAK_FUNC(sub_83C6085C);
PPC_FUNC_IMPL(__imp__sub_83C6085C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60860"))) PPC_WEAK_FUNC(sub_83C60860);
PPC_FUNC_IMPL(__imp__sub_83C60860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12040
	ctx.r3.s64 = ctx.r11.s64 + 12040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6086C"))) PPC_WEAK_FUNC(sub_83C6086C);
PPC_FUNC_IMPL(__imp__sub_83C6086C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60870"))) PPC_WEAK_FUNC(sub_83C60870);
PPC_FUNC_IMPL(__imp__sub_83C60870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12048
	ctx.r3.s64 = ctx.r11.s64 + 12048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6087C"))) PPC_WEAK_FUNC(sub_83C6087C);
PPC_FUNC_IMPL(__imp__sub_83C6087C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60880"))) PPC_WEAK_FUNC(sub_83C60880);
PPC_FUNC_IMPL(__imp__sub_83C60880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6088C"))) PPC_WEAK_FUNC(sub_83C6088C);
PPC_FUNC_IMPL(__imp__sub_83C6088C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60890"))) PPC_WEAK_FUNC(sub_83C60890);
PPC_FUNC_IMPL(__imp__sub_83C60890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12064
	ctx.r3.s64 = ctx.r11.s64 + 12064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6089C"))) PPC_WEAK_FUNC(sub_83C6089C);
PPC_FUNC_IMPL(__imp__sub_83C6089C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C608A0"))) PPC_WEAK_FUNC(sub_83C608A0);
PPC_FUNC_IMPL(__imp__sub_83C608A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12072
	ctx.r3.s64 = ctx.r11.s64 + 12072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C608AC"))) PPC_WEAK_FUNC(sub_83C608AC);
PPC_FUNC_IMPL(__imp__sub_83C608AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C608B0"))) PPC_WEAK_FUNC(sub_83C608B0);
PPC_FUNC_IMPL(__imp__sub_83C608B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12080
	ctx.r3.s64 = ctx.r11.s64 + 12080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C608BC"))) PPC_WEAK_FUNC(sub_83C608BC);
PPC_FUNC_IMPL(__imp__sub_83C608BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C608C0"))) PPC_WEAK_FUNC(sub_83C608C0);
PPC_FUNC_IMPL(__imp__sub_83C608C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12088
	ctx.r3.s64 = ctx.r11.s64 + 12088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C608CC"))) PPC_WEAK_FUNC(sub_83C608CC);
PPC_FUNC_IMPL(__imp__sub_83C608CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C608D0"))) PPC_WEAK_FUNC(sub_83C608D0);
PPC_FUNC_IMPL(__imp__sub_83C608D0) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,2568
	ctx.r3.s64 = ctx.r11.s64 + 2568;
	// bl 0x83523120
	ctx.lr = 0x83C608E8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,12096
	ctx.r3.s64 = ctx.r10.s64 + 12096;
	// bl 0x831cdcc8
	ctx.lr = 0x83C608F4;
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

__attribute__((alias("__imp__sub_83C60904"))) PPC_WEAK_FUNC(sub_83C60904);
PPC_FUNC_IMPL(__imp__sub_83C60904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60908"))) PPC_WEAK_FUNC(sub_83C60908);
PPC_FUNC_IMPL(__imp__sub_83C60908) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,2584
	ctx.r7.s64 = ctx.r8.s64 + 2584;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,2584(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2584);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,2584(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2584, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C60930"))) PPC_WEAK_FUNC(sub_83C60930);
PPC_FUNC_IMPL(__imp__sub_83C60930) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,28840
	ctx.r6.s64 = ctx.r7.s64 + 28840;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,28768(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 28768);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,2584(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2584);
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
	// std r9,28840(r7)
	PPC_STORE_U64(ctx.r7.u32 + 28840, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C60978"))) PPC_WEAK_FUNC(sub_83C60978);
PPC_FUNC_IMPL(__imp__sub_83C60978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12112
	ctx.r3.s64 = ctx.r11.s64 + 12112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C60984"))) PPC_WEAK_FUNC(sub_83C60984);
PPC_FUNC_IMPL(__imp__sub_83C60984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60988"))) PPC_WEAK_FUNC(sub_83C60988);
PPC_FUNC_IMPL(__imp__sub_83C60988) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,2592
	ctx.r3.s64 = ctx.r11.s64 + 2592;
	// bl 0x8259af80
	ctx.lr = 0x83C609A0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,12128
	ctx.r3.s64 = ctx.r10.s64 + 12128;
	// bl 0x831cdcc8
	ctx.lr = 0x83C609AC;
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

__attribute__((alias("__imp__sub_83C609BC"))) PPC_WEAK_FUNC(sub_83C609BC);
PPC_FUNC_IMPL(__imp__sub_83C609BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C609C0"))) PPC_WEAK_FUNC(sub_83C609C0);
PPC_FUNC_IMPL(__imp__sub_83C609C0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,2572
	ctx.r11.s64 = ctx.r8.s64 + 2572;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,28816(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28816);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,12120
	ctx.r3.s64 = ctx.r6.s64 + 12120;
	// stw r10,2572(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2572, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C609F0"))) PPC_WEAK_FUNC(sub_83C609F0);
PPC_FUNC_IMPL(__imp__sub_83C609F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12136
	ctx.r3.s64 = ctx.r11.s64 + 12136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C609FC"))) PPC_WEAK_FUNC(sub_83C609FC);
PPC_FUNC_IMPL(__imp__sub_83C609FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60A00"))) PPC_WEAK_FUNC(sub_83C60A00);
PPC_FUNC_IMPL(__imp__sub_83C60A00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12144
	ctx.r3.s64 = ctx.r11.s64 + 12144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C60A0C"))) PPC_WEAK_FUNC(sub_83C60A0C);
PPC_FUNC_IMPL(__imp__sub_83C60A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60A10"))) PPC_WEAK_FUNC(sub_83C60A10);
PPC_FUNC_IMPL(__imp__sub_83C60A10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12152
	ctx.r3.s64 = ctx.r11.s64 + 12152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C60A1C"))) PPC_WEAK_FUNC(sub_83C60A1C);
PPC_FUNC_IMPL(__imp__sub_83C60A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60A20"))) PPC_WEAK_FUNC(sub_83C60A20);
PPC_FUNC_IMPL(__imp__sub_83C60A20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12160
	ctx.r3.s64 = ctx.r11.s64 + 12160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C60A2C"))) PPC_WEAK_FUNC(sub_83C60A2C);
PPC_FUNC_IMPL(__imp__sub_83C60A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60A30"))) PPC_WEAK_FUNC(sub_83C60A30);
PPC_FUNC_IMPL(__imp__sub_83C60A30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12168
	ctx.r3.s64 = ctx.r11.s64 + 12168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C60A3C"))) PPC_WEAK_FUNC(sub_83C60A3C);
PPC_FUNC_IMPL(__imp__sub_83C60A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60A40"))) PPC_WEAK_FUNC(sub_83C60A40);
PPC_FUNC_IMPL(__imp__sub_83C60A40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12176
	ctx.r3.s64 = ctx.r11.s64 + 12176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C60A4C"))) PPC_WEAK_FUNC(sub_83C60A4C);
PPC_FUNC_IMPL(__imp__sub_83C60A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60A50"))) PPC_WEAK_FUNC(sub_83C60A50);
PPC_FUNC_IMPL(__imp__sub_83C60A50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12184
	ctx.r3.s64 = ctx.r11.s64 + 12184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C60A5C"))) PPC_WEAK_FUNC(sub_83C60A5C);
PPC_FUNC_IMPL(__imp__sub_83C60A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60A60"))) PPC_WEAK_FUNC(sub_83C60A60);
PPC_FUNC_IMPL(__imp__sub_83C60A60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12192
	ctx.r3.s64 = ctx.r11.s64 + 12192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C60A6C"))) PPC_WEAK_FUNC(sub_83C60A6C);
PPC_FUNC_IMPL(__imp__sub_83C60A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60A70"))) PPC_WEAK_FUNC(sub_83C60A70);
PPC_FUNC_IMPL(__imp__sub_83C60A70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12200
	ctx.r3.s64 = ctx.r11.s64 + 12200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C60A7C"))) PPC_WEAK_FUNC(sub_83C60A7C);
PPC_FUNC_IMPL(__imp__sub_83C60A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60A80"))) PPC_WEAK_FUNC(sub_83C60A80);
PPC_FUNC_IMPL(__imp__sub_83C60A80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12208
	ctx.r3.s64 = ctx.r11.s64 + 12208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C60A8C"))) PPC_WEAK_FUNC(sub_83C60A8C);
PPC_FUNC_IMPL(__imp__sub_83C60A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60A90"))) PPC_WEAK_FUNC(sub_83C60A90);
PPC_FUNC_IMPL(__imp__sub_83C60A90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12216
	ctx.r3.s64 = ctx.r11.s64 + 12216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C60A9C"))) PPC_WEAK_FUNC(sub_83C60A9C);
PPC_FUNC_IMPL(__imp__sub_83C60A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60AA0"))) PPC_WEAK_FUNC(sub_83C60AA0);
PPC_FUNC_IMPL(__imp__sub_83C60AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12224
	ctx.r3.s64 = ctx.r11.s64 + 12224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C60AAC"))) PPC_WEAK_FUNC(sub_83C60AAC);
PPC_FUNC_IMPL(__imp__sub_83C60AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60AB0"))) PPC_WEAK_FUNC(sub_83C60AB0);
PPC_FUNC_IMPL(__imp__sub_83C60AB0) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,2936
	ctx.r3.s64 = ctx.r11.s64 + 2936;
	// bl 0x83523120
	ctx.lr = 0x83C60AC8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,12232
	ctx.r3.s64 = ctx.r10.s64 + 12232;
	// bl 0x831cdcc8
	ctx.lr = 0x83C60AD4;
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

__attribute__((alias("__imp__sub_83C60AE4"))) PPC_WEAK_FUNC(sub_83C60AE4);
PPC_FUNC_IMPL(__imp__sub_83C60AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60AE8"))) PPC_WEAK_FUNC(sub_83C60AE8);
PPC_FUNC_IMPL(__imp__sub_83C60AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,2952
	ctx.r7.s64 = ctx.r8.s64 + 2952;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,2952(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2952);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,2952(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2952, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C60B10"))) PPC_WEAK_FUNC(sub_83C60B10);
PPC_FUNC_IMPL(__imp__sub_83C60B10) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,28968
	ctx.r6.s64 = ctx.r7.s64 + 28968;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,28896(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 28896);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,2952(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2952);
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
	// std r9,28968(r7)
	PPC_STORE_U64(ctx.r7.u32 + 28968, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C60B58"))) PPC_WEAK_FUNC(sub_83C60B58);
PPC_FUNC_IMPL(__imp__sub_83C60B58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12248
	ctx.r3.s64 = ctx.r11.s64 + 12248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C60B64"))) PPC_WEAK_FUNC(sub_83C60B64);
PPC_FUNC_IMPL(__imp__sub_83C60B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60B68"))) PPC_WEAK_FUNC(sub_83C60B68);
PPC_FUNC_IMPL(__imp__sub_83C60B68) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,2960
	ctx.r3.s64 = ctx.r11.s64 + 2960;
	// bl 0x8259af80
	ctx.lr = 0x83C60B80;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,12264
	ctx.r3.s64 = ctx.r10.s64 + 12264;
	// bl 0x831cdcc8
	ctx.lr = 0x83C60B8C;
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

__attribute__((alias("__imp__sub_83C60B9C"))) PPC_WEAK_FUNC(sub_83C60B9C);
PPC_FUNC_IMPL(__imp__sub_83C60B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60BA0"))) PPC_WEAK_FUNC(sub_83C60BA0);
PPC_FUNC_IMPL(__imp__sub_83C60BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,2940
	ctx.r11.s64 = ctx.r8.s64 + 2940;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,28944(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28944);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,12256
	ctx.r3.s64 = ctx.r6.s64 + 12256;
	// stw r10,2940(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2940, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C60BD0"))) PPC_WEAK_FUNC(sub_83C60BD0);
PPC_FUNC_IMPL(__imp__sub_83C60BD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12272
	ctx.r3.s64 = ctx.r11.s64 + 12272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C60BDC"))) PPC_WEAK_FUNC(sub_83C60BDC);
PPC_FUNC_IMPL(__imp__sub_83C60BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60BE0"))) PPC_WEAK_FUNC(sub_83C60BE0);
PPC_FUNC_IMPL(__imp__sub_83C60BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12280
	ctx.r3.s64 = ctx.r11.s64 + 12280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C60BEC"))) PPC_WEAK_FUNC(sub_83C60BEC);
PPC_FUNC_IMPL(__imp__sub_83C60BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60BF0"))) PPC_WEAK_FUNC(sub_83C60BF0);
PPC_FUNC_IMPL(__imp__sub_83C60BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12288
	ctx.r3.s64 = ctx.r11.s64 + 12288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C60BFC"))) PPC_WEAK_FUNC(sub_83C60BFC);
PPC_FUNC_IMPL(__imp__sub_83C60BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60C00"))) PPC_WEAK_FUNC(sub_83C60C00);
PPC_FUNC_IMPL(__imp__sub_83C60C00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12296
	ctx.r3.s64 = ctx.r11.s64 + 12296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C60C0C"))) PPC_WEAK_FUNC(sub_83C60C0C);
PPC_FUNC_IMPL(__imp__sub_83C60C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60C10"))) PPC_WEAK_FUNC(sub_83C60C10);
PPC_FUNC_IMPL(__imp__sub_83C60C10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12304
	ctx.r3.s64 = ctx.r11.s64 + 12304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C60C1C"))) PPC_WEAK_FUNC(sub_83C60C1C);
PPC_FUNC_IMPL(__imp__sub_83C60C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60C20"))) PPC_WEAK_FUNC(sub_83C60C20);
PPC_FUNC_IMPL(__imp__sub_83C60C20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12312
	ctx.r3.s64 = ctx.r11.s64 + 12312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C60C2C"))) PPC_WEAK_FUNC(sub_83C60C2C);
PPC_FUNC_IMPL(__imp__sub_83C60C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60C30"))) PPC_WEAK_FUNC(sub_83C60C30);
PPC_FUNC_IMPL(__imp__sub_83C60C30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12320
	ctx.r3.s64 = ctx.r11.s64 + 12320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C60C3C"))) PPC_WEAK_FUNC(sub_83C60C3C);
PPC_FUNC_IMPL(__imp__sub_83C60C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60C40"))) PPC_WEAK_FUNC(sub_83C60C40);
PPC_FUNC_IMPL(__imp__sub_83C60C40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12328
	ctx.r3.s64 = ctx.r11.s64 + 12328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C60C4C"))) PPC_WEAK_FUNC(sub_83C60C4C);
PPC_FUNC_IMPL(__imp__sub_83C60C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60C50"))) PPC_WEAK_FUNC(sub_83C60C50);
PPC_FUNC_IMPL(__imp__sub_83C60C50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12336
	ctx.r3.s64 = ctx.r11.s64 + 12336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C60C5C"))) PPC_WEAK_FUNC(sub_83C60C5C);
PPC_FUNC_IMPL(__imp__sub_83C60C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60C60"))) PPC_WEAK_FUNC(sub_83C60C60);
PPC_FUNC_IMPL(__imp__sub_83C60C60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12344
	ctx.r3.s64 = ctx.r11.s64 + 12344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C60C6C"))) PPC_WEAK_FUNC(sub_83C60C6C);
PPC_FUNC_IMPL(__imp__sub_83C60C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60C70"))) PPC_WEAK_FUNC(sub_83C60C70);
PPC_FUNC_IMPL(__imp__sub_83C60C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12352
	ctx.r3.s64 = ctx.r11.s64 + 12352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C60C7C"))) PPC_WEAK_FUNC(sub_83C60C7C);
PPC_FUNC_IMPL(__imp__sub_83C60C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60C80"))) PPC_WEAK_FUNC(sub_83C60C80);
PPC_FUNC_IMPL(__imp__sub_83C60C80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12360
	ctx.r3.s64 = ctx.r11.s64 + 12360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C60C8C"))) PPC_WEAK_FUNC(sub_83C60C8C);
PPC_FUNC_IMPL(__imp__sub_83C60C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60C90"))) PPC_WEAK_FUNC(sub_83C60C90);
PPC_FUNC_IMPL(__imp__sub_83C60C90) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,3304
	ctx.r3.s64 = ctx.r11.s64 + 3304;
	// bl 0x83523120
	ctx.lr = 0x83C60CA8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,12368
	ctx.r3.s64 = ctx.r10.s64 + 12368;
	// bl 0x831cdcc8
	ctx.lr = 0x83C60CB4;
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

__attribute__((alias("__imp__sub_83C60CC4"))) PPC_WEAK_FUNC(sub_83C60CC4);
PPC_FUNC_IMPL(__imp__sub_83C60CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60CC8"))) PPC_WEAK_FUNC(sub_83C60CC8);
PPC_FUNC_IMPL(__imp__sub_83C60CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,3320
	ctx.r7.s64 = ctx.r8.s64 + 3320;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,3320(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3320);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,3320(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3320, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C60CF0"))) PPC_WEAK_FUNC(sub_83C60CF0);
PPC_FUNC_IMPL(__imp__sub_83C60CF0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,29096
	ctx.r6.s64 = ctx.r7.s64 + 29096;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,29024(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 29024);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,3320(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3320);
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
	// std r9,29096(r7)
	PPC_STORE_U64(ctx.r7.u32 + 29096, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C60D38"))) PPC_WEAK_FUNC(sub_83C60D38);
PPC_FUNC_IMPL(__imp__sub_83C60D38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12384
	ctx.r3.s64 = ctx.r11.s64 + 12384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C60D44"))) PPC_WEAK_FUNC(sub_83C60D44);
PPC_FUNC_IMPL(__imp__sub_83C60D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60D48"))) PPC_WEAK_FUNC(sub_83C60D48);
PPC_FUNC_IMPL(__imp__sub_83C60D48) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,3328
	ctx.r3.s64 = ctx.r11.s64 + 3328;
	// bl 0x8259af80
	ctx.lr = 0x83C60D60;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,12400
	ctx.r3.s64 = ctx.r10.s64 + 12400;
	// bl 0x831cdcc8
	ctx.lr = 0x83C60D6C;
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

__attribute__((alias("__imp__sub_83C60D7C"))) PPC_WEAK_FUNC(sub_83C60D7C);
PPC_FUNC_IMPL(__imp__sub_83C60D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60D80"))) PPC_WEAK_FUNC(sub_83C60D80);
PPC_FUNC_IMPL(__imp__sub_83C60D80) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,3308
	ctx.r11.s64 = ctx.r8.s64 + 3308;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,29072(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29072);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,12392
	ctx.r3.s64 = ctx.r6.s64 + 12392;
	// stw r10,3308(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3308, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C60DB0"))) PPC_WEAK_FUNC(sub_83C60DB0);
PPC_FUNC_IMPL(__imp__sub_83C60DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12408
	ctx.r3.s64 = ctx.r11.s64 + 12408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C60DBC"))) PPC_WEAK_FUNC(sub_83C60DBC);
PPC_FUNC_IMPL(__imp__sub_83C60DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60DC0"))) PPC_WEAK_FUNC(sub_83C60DC0);
PPC_FUNC_IMPL(__imp__sub_83C60DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12416
	ctx.r3.s64 = ctx.r11.s64 + 12416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C60DCC"))) PPC_WEAK_FUNC(sub_83C60DCC);
PPC_FUNC_IMPL(__imp__sub_83C60DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60DD0"))) PPC_WEAK_FUNC(sub_83C60DD0);
PPC_FUNC_IMPL(__imp__sub_83C60DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12424
	ctx.r3.s64 = ctx.r11.s64 + 12424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C60DDC"))) PPC_WEAK_FUNC(sub_83C60DDC);
PPC_FUNC_IMPL(__imp__sub_83C60DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60DE0"))) PPC_WEAK_FUNC(sub_83C60DE0);
PPC_FUNC_IMPL(__imp__sub_83C60DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12432
	ctx.r3.s64 = ctx.r11.s64 + 12432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C60DEC"))) PPC_WEAK_FUNC(sub_83C60DEC);
PPC_FUNC_IMPL(__imp__sub_83C60DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60DF0"))) PPC_WEAK_FUNC(sub_83C60DF0);
PPC_FUNC_IMPL(__imp__sub_83C60DF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12440
	ctx.r3.s64 = ctx.r11.s64 + 12440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C60DFC"))) PPC_WEAK_FUNC(sub_83C60DFC);
PPC_FUNC_IMPL(__imp__sub_83C60DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60E00"))) PPC_WEAK_FUNC(sub_83C60E00);
PPC_FUNC_IMPL(__imp__sub_83C60E00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12448
	ctx.r3.s64 = ctx.r11.s64 + 12448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C60E0C"))) PPC_WEAK_FUNC(sub_83C60E0C);
PPC_FUNC_IMPL(__imp__sub_83C60E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60E10"))) PPC_WEAK_FUNC(sub_83C60E10);
PPC_FUNC_IMPL(__imp__sub_83C60E10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12456
	ctx.r3.s64 = ctx.r11.s64 + 12456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C60E1C"))) PPC_WEAK_FUNC(sub_83C60E1C);
PPC_FUNC_IMPL(__imp__sub_83C60E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60E20"))) PPC_WEAK_FUNC(sub_83C60E20);
PPC_FUNC_IMPL(__imp__sub_83C60E20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12464
	ctx.r3.s64 = ctx.r11.s64 + 12464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C60E2C"))) PPC_WEAK_FUNC(sub_83C60E2C);
PPC_FUNC_IMPL(__imp__sub_83C60E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60E30"))) PPC_WEAK_FUNC(sub_83C60E30);
PPC_FUNC_IMPL(__imp__sub_83C60E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12472
	ctx.r3.s64 = ctx.r11.s64 + 12472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C60E3C"))) PPC_WEAK_FUNC(sub_83C60E3C);
PPC_FUNC_IMPL(__imp__sub_83C60E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60E40"))) PPC_WEAK_FUNC(sub_83C60E40);
PPC_FUNC_IMPL(__imp__sub_83C60E40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12480
	ctx.r3.s64 = ctx.r11.s64 + 12480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C60E4C"))) PPC_WEAK_FUNC(sub_83C60E4C);
PPC_FUNC_IMPL(__imp__sub_83C60E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60E50"))) PPC_WEAK_FUNC(sub_83C60E50);
PPC_FUNC_IMPL(__imp__sub_83C60E50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12488
	ctx.r3.s64 = ctx.r11.s64 + 12488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C60E5C"))) PPC_WEAK_FUNC(sub_83C60E5C);
PPC_FUNC_IMPL(__imp__sub_83C60E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60E60"))) PPC_WEAK_FUNC(sub_83C60E60);
PPC_FUNC_IMPL(__imp__sub_83C60E60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12496
	ctx.r3.s64 = ctx.r11.s64 + 12496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C60E6C"))) PPC_WEAK_FUNC(sub_83C60E6C);
PPC_FUNC_IMPL(__imp__sub_83C60E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60E70"))) PPC_WEAK_FUNC(sub_83C60E70);
PPC_FUNC_IMPL(__imp__sub_83C60E70) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,3672
	ctx.r3.s64 = ctx.r11.s64 + 3672;
	// bl 0x83523120
	ctx.lr = 0x83C60E88;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,12504
	ctx.r3.s64 = ctx.r10.s64 + 12504;
	// bl 0x831cdcc8
	ctx.lr = 0x83C60E94;
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

__attribute__((alias("__imp__sub_83C60EA4"))) PPC_WEAK_FUNC(sub_83C60EA4);
PPC_FUNC_IMPL(__imp__sub_83C60EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60EA8"))) PPC_WEAK_FUNC(sub_83C60EA8);
PPC_FUNC_IMPL(__imp__sub_83C60EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,3688
	ctx.r7.s64 = ctx.r8.s64 + 3688;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,3688(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3688);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,3688(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3688, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C60ED0"))) PPC_WEAK_FUNC(sub_83C60ED0);
PPC_FUNC_IMPL(__imp__sub_83C60ED0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,29224
	ctx.r6.s64 = ctx.r7.s64 + 29224;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,29152(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 29152);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,3688(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3688);
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
	// std r9,29224(r7)
	PPC_STORE_U64(ctx.r7.u32 + 29224, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C60F18"))) PPC_WEAK_FUNC(sub_83C60F18);
PPC_FUNC_IMPL(__imp__sub_83C60F18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12520
	ctx.r3.s64 = ctx.r11.s64 + 12520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C60F24"))) PPC_WEAK_FUNC(sub_83C60F24);
PPC_FUNC_IMPL(__imp__sub_83C60F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60F28"))) PPC_WEAK_FUNC(sub_83C60F28);
PPC_FUNC_IMPL(__imp__sub_83C60F28) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x8259af80
	ctx.lr = 0x83C60F40;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,12536
	ctx.r3.s64 = ctx.r10.s64 + 12536;
	// bl 0x831cdcc8
	ctx.lr = 0x83C60F4C;
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

__attribute__((alias("__imp__sub_83C60F5C"))) PPC_WEAK_FUNC(sub_83C60F5C);
PPC_FUNC_IMPL(__imp__sub_83C60F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60F60"))) PPC_WEAK_FUNC(sub_83C60F60);
PPC_FUNC_IMPL(__imp__sub_83C60F60) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,3676
	ctx.r11.s64 = ctx.r8.s64 + 3676;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,29200(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29200);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,12528
	ctx.r3.s64 = ctx.r6.s64 + 12528;
	// stw r10,3676(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3676, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C60F90"))) PPC_WEAK_FUNC(sub_83C60F90);
PPC_FUNC_IMPL(__imp__sub_83C60F90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12544
	ctx.r3.s64 = ctx.r11.s64 + 12544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C60F9C"))) PPC_WEAK_FUNC(sub_83C60F9C);
PPC_FUNC_IMPL(__imp__sub_83C60F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60FA0"))) PPC_WEAK_FUNC(sub_83C60FA0);
PPC_FUNC_IMPL(__imp__sub_83C60FA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12552
	ctx.r3.s64 = ctx.r11.s64 + 12552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C60FAC"))) PPC_WEAK_FUNC(sub_83C60FAC);
PPC_FUNC_IMPL(__imp__sub_83C60FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60FB0"))) PPC_WEAK_FUNC(sub_83C60FB0);
PPC_FUNC_IMPL(__imp__sub_83C60FB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12560
	ctx.r3.s64 = ctx.r11.s64 + 12560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C60FBC"))) PPC_WEAK_FUNC(sub_83C60FBC);
PPC_FUNC_IMPL(__imp__sub_83C60FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60FC0"))) PPC_WEAK_FUNC(sub_83C60FC0);
PPC_FUNC_IMPL(__imp__sub_83C60FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12568
	ctx.r3.s64 = ctx.r11.s64 + 12568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C60FCC"))) PPC_WEAK_FUNC(sub_83C60FCC);
PPC_FUNC_IMPL(__imp__sub_83C60FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60FD0"))) PPC_WEAK_FUNC(sub_83C60FD0);
PPC_FUNC_IMPL(__imp__sub_83C60FD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12576
	ctx.r3.s64 = ctx.r11.s64 + 12576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C60FDC"))) PPC_WEAK_FUNC(sub_83C60FDC);
PPC_FUNC_IMPL(__imp__sub_83C60FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60FE0"))) PPC_WEAK_FUNC(sub_83C60FE0);
PPC_FUNC_IMPL(__imp__sub_83C60FE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12584
	ctx.r3.s64 = ctx.r11.s64 + 12584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C60FEC"))) PPC_WEAK_FUNC(sub_83C60FEC);
PPC_FUNC_IMPL(__imp__sub_83C60FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C60FF0"))) PPC_WEAK_FUNC(sub_83C60FF0);
PPC_FUNC_IMPL(__imp__sub_83C60FF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12592
	ctx.r3.s64 = ctx.r11.s64 + 12592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C60FFC"))) PPC_WEAK_FUNC(sub_83C60FFC);
PPC_FUNC_IMPL(__imp__sub_83C60FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61000"))) PPC_WEAK_FUNC(sub_83C61000);
PPC_FUNC_IMPL(__imp__sub_83C61000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12600
	ctx.r3.s64 = ctx.r11.s64 + 12600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6100C"))) PPC_WEAK_FUNC(sub_83C6100C);
PPC_FUNC_IMPL(__imp__sub_83C6100C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61010"))) PPC_WEAK_FUNC(sub_83C61010);
PPC_FUNC_IMPL(__imp__sub_83C61010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12608
	ctx.r3.s64 = ctx.r11.s64 + 12608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6101C"))) PPC_WEAK_FUNC(sub_83C6101C);
PPC_FUNC_IMPL(__imp__sub_83C6101C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61020"))) PPC_WEAK_FUNC(sub_83C61020);
PPC_FUNC_IMPL(__imp__sub_83C61020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12616
	ctx.r3.s64 = ctx.r11.s64 + 12616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6102C"))) PPC_WEAK_FUNC(sub_83C6102C);
PPC_FUNC_IMPL(__imp__sub_83C6102C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61030"))) PPC_WEAK_FUNC(sub_83C61030);
PPC_FUNC_IMPL(__imp__sub_83C61030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12624
	ctx.r3.s64 = ctx.r11.s64 + 12624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6103C"))) PPC_WEAK_FUNC(sub_83C6103C);
PPC_FUNC_IMPL(__imp__sub_83C6103C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C61040"))) PPC_WEAK_FUNC(sub_83C61040);
PPC_FUNC_IMPL(__imp__sub_83C61040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,12632
	ctx.r3.s64 = ctx.r11.s64 + 12632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6104C"))) PPC_WEAK_FUNC(sub_83C6104C);
PPC_FUNC_IMPL(__imp__sub_83C6104C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

