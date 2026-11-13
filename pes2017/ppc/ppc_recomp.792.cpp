#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C505EC"))) PPC_WEAK_FUNC(sub_83C505EC);
PPC_FUNC_IMPL(__imp__sub_83C505EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C505F0"))) PPC_WEAK_FUNC(sub_83C505F0);
PPC_FUNC_IMPL(__imp__sub_83C505F0) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,20144
	ctx.r3.s64 = ctx.r11.s64 + 20144;
	// bl 0x8259af80
	ctx.lr = 0x83C50608;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-7880
	ctx.r3.s64 = ctx.r10.s64 + -7880;
	// bl 0x831cdcc8
	ctx.lr = 0x83C50614;
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

__attribute__((alias("__imp__sub_83C50624"))) PPC_WEAK_FUNC(sub_83C50624);
PPC_FUNC_IMPL(__imp__sub_83C50624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50628"))) PPC_WEAK_FUNC(sub_83C50628);
PPC_FUNC_IMPL(__imp__sub_83C50628) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,20124
	ctx.r11.s64 = ctx.r8.s64 + 20124;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,8940(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8940);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-7888
	ctx.r3.s64 = ctx.r6.s64 + -7888;
	// stw r10,20124(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20124, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50658"))) PPC_WEAK_FUNC(sub_83C50658);
PPC_FUNC_IMPL(__imp__sub_83C50658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7872
	ctx.r3.s64 = ctx.r11.s64 + -7872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50664"))) PPC_WEAK_FUNC(sub_83C50664);
PPC_FUNC_IMPL(__imp__sub_83C50664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50668"))) PPC_WEAK_FUNC(sub_83C50668);
PPC_FUNC_IMPL(__imp__sub_83C50668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7864
	ctx.r3.s64 = ctx.r11.s64 + -7864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50674"))) PPC_WEAK_FUNC(sub_83C50674);
PPC_FUNC_IMPL(__imp__sub_83C50674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50678"))) PPC_WEAK_FUNC(sub_83C50678);
PPC_FUNC_IMPL(__imp__sub_83C50678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7856
	ctx.r3.s64 = ctx.r11.s64 + -7856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50684"))) PPC_WEAK_FUNC(sub_83C50684);
PPC_FUNC_IMPL(__imp__sub_83C50684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50688"))) PPC_WEAK_FUNC(sub_83C50688);
PPC_FUNC_IMPL(__imp__sub_83C50688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7848
	ctx.r3.s64 = ctx.r11.s64 + -7848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50694"))) PPC_WEAK_FUNC(sub_83C50694);
PPC_FUNC_IMPL(__imp__sub_83C50694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50698"))) PPC_WEAK_FUNC(sub_83C50698);
PPC_FUNC_IMPL(__imp__sub_83C50698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7840
	ctx.r3.s64 = ctx.r11.s64 + -7840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C506A4"))) PPC_WEAK_FUNC(sub_83C506A4);
PPC_FUNC_IMPL(__imp__sub_83C506A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C506A8"))) PPC_WEAK_FUNC(sub_83C506A8);
PPC_FUNC_IMPL(__imp__sub_83C506A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7832
	ctx.r3.s64 = ctx.r11.s64 + -7832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C506B4"))) PPC_WEAK_FUNC(sub_83C506B4);
PPC_FUNC_IMPL(__imp__sub_83C506B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C506B8"))) PPC_WEAK_FUNC(sub_83C506B8);
PPC_FUNC_IMPL(__imp__sub_83C506B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7824
	ctx.r3.s64 = ctx.r11.s64 + -7824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C506C4"))) PPC_WEAK_FUNC(sub_83C506C4);
PPC_FUNC_IMPL(__imp__sub_83C506C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C506C8"))) PPC_WEAK_FUNC(sub_83C506C8);
PPC_FUNC_IMPL(__imp__sub_83C506C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7816
	ctx.r3.s64 = ctx.r11.s64 + -7816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C506D4"))) PPC_WEAK_FUNC(sub_83C506D4);
PPC_FUNC_IMPL(__imp__sub_83C506D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C506D8"))) PPC_WEAK_FUNC(sub_83C506D8);
PPC_FUNC_IMPL(__imp__sub_83C506D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7808
	ctx.r3.s64 = ctx.r11.s64 + -7808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C506E4"))) PPC_WEAK_FUNC(sub_83C506E4);
PPC_FUNC_IMPL(__imp__sub_83C506E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C506E8"))) PPC_WEAK_FUNC(sub_83C506E8);
PPC_FUNC_IMPL(__imp__sub_83C506E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7800
	ctx.r3.s64 = ctx.r11.s64 + -7800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C506F4"))) PPC_WEAK_FUNC(sub_83C506F4);
PPC_FUNC_IMPL(__imp__sub_83C506F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C506F8"))) PPC_WEAK_FUNC(sub_83C506F8);
PPC_FUNC_IMPL(__imp__sub_83C506F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7792
	ctx.r3.s64 = ctx.r11.s64 + -7792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50704"))) PPC_WEAK_FUNC(sub_83C50704);
PPC_FUNC_IMPL(__imp__sub_83C50704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50708"))) PPC_WEAK_FUNC(sub_83C50708);
PPC_FUNC_IMPL(__imp__sub_83C50708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7784
	ctx.r3.s64 = ctx.r11.s64 + -7784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50714"))) PPC_WEAK_FUNC(sub_83C50714);
PPC_FUNC_IMPL(__imp__sub_83C50714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50718"))) PPC_WEAK_FUNC(sub_83C50718);
PPC_FUNC_IMPL(__imp__sub_83C50718) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,20490
	ctx.r3.s64 = ctx.r11.s64 + 20490;
	// bl 0x83523120
	ctx.lr = 0x83C50730;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-7776
	ctx.r3.s64 = ctx.r10.s64 + -7776;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5073C;
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

__attribute__((alias("__imp__sub_83C5074C"))) PPC_WEAK_FUNC(sub_83C5074C);
PPC_FUNC_IMPL(__imp__sub_83C5074C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50750"))) PPC_WEAK_FUNC(sub_83C50750);
PPC_FUNC_IMPL(__imp__sub_83C50750) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,20504
	ctx.r7.s64 = ctx.r8.s64 + 20504;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,20504(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20504);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,20504(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20504, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C50778"))) PPC_WEAK_FUNC(sub_83C50778);
PPC_FUNC_IMPL(__imp__sub_83C50778) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,9104
	ctx.r6.s64 = ctx.r7.s64 + 9104;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,9032(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 9032);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,20504(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20504);
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
	// std r9,9104(r7)
	PPC_STORE_U64(ctx.r7.u32 + 9104, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C507C0"))) PPC_WEAK_FUNC(sub_83C507C0);
PPC_FUNC_IMPL(__imp__sub_83C507C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7760
	ctx.r3.s64 = ctx.r11.s64 + -7760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C507CC"))) PPC_WEAK_FUNC(sub_83C507CC);
PPC_FUNC_IMPL(__imp__sub_83C507CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C507D0"))) PPC_WEAK_FUNC(sub_83C507D0);
PPC_FUNC_IMPL(__imp__sub_83C507D0) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,20512
	ctx.r3.s64 = ctx.r11.s64 + 20512;
	// bl 0x8259af80
	ctx.lr = 0x83C507E8;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-7744
	ctx.r3.s64 = ctx.r10.s64 + -7744;
	// bl 0x831cdcc8
	ctx.lr = 0x83C507F4;
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

__attribute__((alias("__imp__sub_83C50804"))) PPC_WEAK_FUNC(sub_83C50804);
PPC_FUNC_IMPL(__imp__sub_83C50804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50808"))) PPC_WEAK_FUNC(sub_83C50808);
PPC_FUNC_IMPL(__imp__sub_83C50808) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,20492
	ctx.r11.s64 = ctx.r8.s64 + 20492;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,9080(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9080);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-7752
	ctx.r3.s64 = ctx.r6.s64 + -7752;
	// stw r10,20492(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20492, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50838"))) PPC_WEAK_FUNC(sub_83C50838);
PPC_FUNC_IMPL(__imp__sub_83C50838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7736
	ctx.r3.s64 = ctx.r11.s64 + -7736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50844"))) PPC_WEAK_FUNC(sub_83C50844);
PPC_FUNC_IMPL(__imp__sub_83C50844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50848"))) PPC_WEAK_FUNC(sub_83C50848);
PPC_FUNC_IMPL(__imp__sub_83C50848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7728
	ctx.r3.s64 = ctx.r11.s64 + -7728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50854"))) PPC_WEAK_FUNC(sub_83C50854);
PPC_FUNC_IMPL(__imp__sub_83C50854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50858"))) PPC_WEAK_FUNC(sub_83C50858);
PPC_FUNC_IMPL(__imp__sub_83C50858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7720
	ctx.r3.s64 = ctx.r11.s64 + -7720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50864"))) PPC_WEAK_FUNC(sub_83C50864);
PPC_FUNC_IMPL(__imp__sub_83C50864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50868"))) PPC_WEAK_FUNC(sub_83C50868);
PPC_FUNC_IMPL(__imp__sub_83C50868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7712
	ctx.r3.s64 = ctx.r11.s64 + -7712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50874"))) PPC_WEAK_FUNC(sub_83C50874);
PPC_FUNC_IMPL(__imp__sub_83C50874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50878"))) PPC_WEAK_FUNC(sub_83C50878);
PPC_FUNC_IMPL(__imp__sub_83C50878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7704
	ctx.r3.s64 = ctx.r11.s64 + -7704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50884"))) PPC_WEAK_FUNC(sub_83C50884);
PPC_FUNC_IMPL(__imp__sub_83C50884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50888"))) PPC_WEAK_FUNC(sub_83C50888);
PPC_FUNC_IMPL(__imp__sub_83C50888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7696
	ctx.r3.s64 = ctx.r11.s64 + -7696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50894"))) PPC_WEAK_FUNC(sub_83C50894);
PPC_FUNC_IMPL(__imp__sub_83C50894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50898"))) PPC_WEAK_FUNC(sub_83C50898);
PPC_FUNC_IMPL(__imp__sub_83C50898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7688
	ctx.r3.s64 = ctx.r11.s64 + -7688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C508A4"))) PPC_WEAK_FUNC(sub_83C508A4);
PPC_FUNC_IMPL(__imp__sub_83C508A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C508A8"))) PPC_WEAK_FUNC(sub_83C508A8);
PPC_FUNC_IMPL(__imp__sub_83C508A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7680
	ctx.r3.s64 = ctx.r11.s64 + -7680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C508B4"))) PPC_WEAK_FUNC(sub_83C508B4);
PPC_FUNC_IMPL(__imp__sub_83C508B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C508B8"))) PPC_WEAK_FUNC(sub_83C508B8);
PPC_FUNC_IMPL(__imp__sub_83C508B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7672
	ctx.r3.s64 = ctx.r11.s64 + -7672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C508C4"))) PPC_WEAK_FUNC(sub_83C508C4);
PPC_FUNC_IMPL(__imp__sub_83C508C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C508C8"))) PPC_WEAK_FUNC(sub_83C508C8);
PPC_FUNC_IMPL(__imp__sub_83C508C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7664
	ctx.r3.s64 = ctx.r11.s64 + -7664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C508D4"))) PPC_WEAK_FUNC(sub_83C508D4);
PPC_FUNC_IMPL(__imp__sub_83C508D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C508D8"))) PPC_WEAK_FUNC(sub_83C508D8);
PPC_FUNC_IMPL(__imp__sub_83C508D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7656
	ctx.r3.s64 = ctx.r11.s64 + -7656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C508E4"))) PPC_WEAK_FUNC(sub_83C508E4);
PPC_FUNC_IMPL(__imp__sub_83C508E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C508E8"))) PPC_WEAK_FUNC(sub_83C508E8);
PPC_FUNC_IMPL(__imp__sub_83C508E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7648
	ctx.r3.s64 = ctx.r11.s64 + -7648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C508F4"))) PPC_WEAK_FUNC(sub_83C508F4);
PPC_FUNC_IMPL(__imp__sub_83C508F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C508F8"))) PPC_WEAK_FUNC(sub_83C508F8);
PPC_FUNC_IMPL(__imp__sub_83C508F8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,20872
	ctx.r7.s64 = ctx.r8.s64 + 20872;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,20872(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20872);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,20872(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20872, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C50920"))) PPC_WEAK_FUNC(sub_83C50920);
PPC_FUNC_IMPL(__imp__sub_83C50920) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,9232
	ctx.r6.s64 = ctx.r7.s64 + 9232;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,9160(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 9160);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,20872(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20872);
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
	// std r9,9232(r7)
	PPC_STORE_U64(ctx.r7.u32 + 9232, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C50968"))) PPC_WEAK_FUNC(sub_83C50968);
PPC_FUNC_IMPL(__imp__sub_83C50968) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,20856
	ctx.r3.s64 = ctx.r11.s64 + 20856;
	// bl 0x83523120
	ctx.lr = 0x83C50980;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-7640
	ctx.r3.s64 = ctx.r10.s64 + -7640;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5098C;
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

__attribute__((alias("__imp__sub_83C5099C"))) PPC_WEAK_FUNC(sub_83C5099C);
PPC_FUNC_IMPL(__imp__sub_83C5099C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C509A0"))) PPC_WEAK_FUNC(sub_83C509A0);
PPC_FUNC_IMPL(__imp__sub_83C509A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7624
	ctx.r3.s64 = ctx.r11.s64 + -7624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C509AC"))) PPC_WEAK_FUNC(sub_83C509AC);
PPC_FUNC_IMPL(__imp__sub_83C509AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C509B0"))) PPC_WEAK_FUNC(sub_83C509B0);
PPC_FUNC_IMPL(__imp__sub_83C509B0) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,20880
	ctx.r3.s64 = ctx.r11.s64 + 20880;
	// bl 0x8259af80
	ctx.lr = 0x83C509C8;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-7608
	ctx.r3.s64 = ctx.r10.s64 + -7608;
	// bl 0x831cdcc8
	ctx.lr = 0x83C509D4;
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

__attribute__((alias("__imp__sub_83C509E4"))) PPC_WEAK_FUNC(sub_83C509E4);
PPC_FUNC_IMPL(__imp__sub_83C509E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C509E8"))) PPC_WEAK_FUNC(sub_83C509E8);
PPC_FUNC_IMPL(__imp__sub_83C509E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,20860
	ctx.r11.s64 = ctx.r8.s64 + 20860;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,9208(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9208);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-7616
	ctx.r3.s64 = ctx.r6.s64 + -7616;
	// stw r10,20860(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20860, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50A18"))) PPC_WEAK_FUNC(sub_83C50A18);
PPC_FUNC_IMPL(__imp__sub_83C50A18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7600
	ctx.r3.s64 = ctx.r11.s64 + -7600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50A24"))) PPC_WEAK_FUNC(sub_83C50A24);
PPC_FUNC_IMPL(__imp__sub_83C50A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50A28"))) PPC_WEAK_FUNC(sub_83C50A28);
PPC_FUNC_IMPL(__imp__sub_83C50A28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7592
	ctx.r3.s64 = ctx.r11.s64 + -7592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50A34"))) PPC_WEAK_FUNC(sub_83C50A34);
PPC_FUNC_IMPL(__imp__sub_83C50A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50A38"))) PPC_WEAK_FUNC(sub_83C50A38);
PPC_FUNC_IMPL(__imp__sub_83C50A38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7584
	ctx.r3.s64 = ctx.r11.s64 + -7584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50A44"))) PPC_WEAK_FUNC(sub_83C50A44);
PPC_FUNC_IMPL(__imp__sub_83C50A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50A48"))) PPC_WEAK_FUNC(sub_83C50A48);
PPC_FUNC_IMPL(__imp__sub_83C50A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7576
	ctx.r3.s64 = ctx.r11.s64 + -7576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50A54"))) PPC_WEAK_FUNC(sub_83C50A54);
PPC_FUNC_IMPL(__imp__sub_83C50A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50A58"))) PPC_WEAK_FUNC(sub_83C50A58);
PPC_FUNC_IMPL(__imp__sub_83C50A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7568
	ctx.r3.s64 = ctx.r11.s64 + -7568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50A64"))) PPC_WEAK_FUNC(sub_83C50A64);
PPC_FUNC_IMPL(__imp__sub_83C50A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50A68"))) PPC_WEAK_FUNC(sub_83C50A68);
PPC_FUNC_IMPL(__imp__sub_83C50A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7560
	ctx.r3.s64 = ctx.r11.s64 + -7560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50A74"))) PPC_WEAK_FUNC(sub_83C50A74);
PPC_FUNC_IMPL(__imp__sub_83C50A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50A78"))) PPC_WEAK_FUNC(sub_83C50A78);
PPC_FUNC_IMPL(__imp__sub_83C50A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7552
	ctx.r3.s64 = ctx.r11.s64 + -7552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50A84"))) PPC_WEAK_FUNC(sub_83C50A84);
PPC_FUNC_IMPL(__imp__sub_83C50A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50A88"))) PPC_WEAK_FUNC(sub_83C50A88);
PPC_FUNC_IMPL(__imp__sub_83C50A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7544
	ctx.r3.s64 = ctx.r11.s64 + -7544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50A94"))) PPC_WEAK_FUNC(sub_83C50A94);
PPC_FUNC_IMPL(__imp__sub_83C50A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50A98"))) PPC_WEAK_FUNC(sub_83C50A98);
PPC_FUNC_IMPL(__imp__sub_83C50A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7536
	ctx.r3.s64 = ctx.r11.s64 + -7536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50AA4"))) PPC_WEAK_FUNC(sub_83C50AA4);
PPC_FUNC_IMPL(__imp__sub_83C50AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50AA8"))) PPC_WEAK_FUNC(sub_83C50AA8);
PPC_FUNC_IMPL(__imp__sub_83C50AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7528
	ctx.r3.s64 = ctx.r11.s64 + -7528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50AB4"))) PPC_WEAK_FUNC(sub_83C50AB4);
PPC_FUNC_IMPL(__imp__sub_83C50AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50AB8"))) PPC_WEAK_FUNC(sub_83C50AB8);
PPC_FUNC_IMPL(__imp__sub_83C50AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7520
	ctx.r3.s64 = ctx.r11.s64 + -7520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50AC4"))) PPC_WEAK_FUNC(sub_83C50AC4);
PPC_FUNC_IMPL(__imp__sub_83C50AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50AC8"))) PPC_WEAK_FUNC(sub_83C50AC8);
PPC_FUNC_IMPL(__imp__sub_83C50AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7512
	ctx.r3.s64 = ctx.r11.s64 + -7512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50AD4"))) PPC_WEAK_FUNC(sub_83C50AD4);
PPC_FUNC_IMPL(__imp__sub_83C50AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50AD8"))) PPC_WEAK_FUNC(sub_83C50AD8);
PPC_FUNC_IMPL(__imp__sub_83C50AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,21240
	ctx.r7.s64 = ctx.r8.s64 + 21240;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,21240(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21240);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,21240(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21240, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C50B00"))) PPC_WEAK_FUNC(sub_83C50B00);
PPC_FUNC_IMPL(__imp__sub_83C50B00) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,9360
	ctx.r6.s64 = ctx.r7.s64 + 9360;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,9288(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 9288);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,21240(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21240);
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
	// std r9,9360(r7)
	PPC_STORE_U64(ctx.r7.u32 + 9360, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C50B48"))) PPC_WEAK_FUNC(sub_83C50B48);
PPC_FUNC_IMPL(__imp__sub_83C50B48) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,21224
	ctx.r3.s64 = ctx.r11.s64 + 21224;
	// bl 0x83523120
	ctx.lr = 0x83C50B60;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-7504
	ctx.r3.s64 = ctx.r10.s64 + -7504;
	// bl 0x831cdcc8
	ctx.lr = 0x83C50B6C;
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

__attribute__((alias("__imp__sub_83C50B7C"))) PPC_WEAK_FUNC(sub_83C50B7C);
PPC_FUNC_IMPL(__imp__sub_83C50B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50B80"))) PPC_WEAK_FUNC(sub_83C50B80);
PPC_FUNC_IMPL(__imp__sub_83C50B80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7488
	ctx.r3.s64 = ctx.r11.s64 + -7488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50B8C"))) PPC_WEAK_FUNC(sub_83C50B8C);
PPC_FUNC_IMPL(__imp__sub_83C50B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50B90"))) PPC_WEAK_FUNC(sub_83C50B90);
PPC_FUNC_IMPL(__imp__sub_83C50B90) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,21248
	ctx.r3.s64 = ctx.r11.s64 + 21248;
	// bl 0x8259af80
	ctx.lr = 0x83C50BA8;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-7472
	ctx.r3.s64 = ctx.r10.s64 + -7472;
	// bl 0x831cdcc8
	ctx.lr = 0x83C50BB4;
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

__attribute__((alias("__imp__sub_83C50BC4"))) PPC_WEAK_FUNC(sub_83C50BC4);
PPC_FUNC_IMPL(__imp__sub_83C50BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50BC8"))) PPC_WEAK_FUNC(sub_83C50BC8);
PPC_FUNC_IMPL(__imp__sub_83C50BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,21228
	ctx.r11.s64 = ctx.r8.s64 + 21228;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,9336(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9336);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-7480
	ctx.r3.s64 = ctx.r6.s64 + -7480;
	// stw r10,21228(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21228, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50BF8"))) PPC_WEAK_FUNC(sub_83C50BF8);
PPC_FUNC_IMPL(__imp__sub_83C50BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7464
	ctx.r3.s64 = ctx.r11.s64 + -7464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50C04"))) PPC_WEAK_FUNC(sub_83C50C04);
PPC_FUNC_IMPL(__imp__sub_83C50C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50C08"))) PPC_WEAK_FUNC(sub_83C50C08);
PPC_FUNC_IMPL(__imp__sub_83C50C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7456
	ctx.r3.s64 = ctx.r11.s64 + -7456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50C14"))) PPC_WEAK_FUNC(sub_83C50C14);
PPC_FUNC_IMPL(__imp__sub_83C50C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50C18"))) PPC_WEAK_FUNC(sub_83C50C18);
PPC_FUNC_IMPL(__imp__sub_83C50C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7448
	ctx.r3.s64 = ctx.r11.s64 + -7448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50C24"))) PPC_WEAK_FUNC(sub_83C50C24);
PPC_FUNC_IMPL(__imp__sub_83C50C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50C28"))) PPC_WEAK_FUNC(sub_83C50C28);
PPC_FUNC_IMPL(__imp__sub_83C50C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7440
	ctx.r3.s64 = ctx.r11.s64 + -7440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50C34"))) PPC_WEAK_FUNC(sub_83C50C34);
PPC_FUNC_IMPL(__imp__sub_83C50C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50C38"))) PPC_WEAK_FUNC(sub_83C50C38);
PPC_FUNC_IMPL(__imp__sub_83C50C38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7432
	ctx.r3.s64 = ctx.r11.s64 + -7432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50C44"))) PPC_WEAK_FUNC(sub_83C50C44);
PPC_FUNC_IMPL(__imp__sub_83C50C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50C48"))) PPC_WEAK_FUNC(sub_83C50C48);
PPC_FUNC_IMPL(__imp__sub_83C50C48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7424
	ctx.r3.s64 = ctx.r11.s64 + -7424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50C54"))) PPC_WEAK_FUNC(sub_83C50C54);
PPC_FUNC_IMPL(__imp__sub_83C50C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50C58"))) PPC_WEAK_FUNC(sub_83C50C58);
PPC_FUNC_IMPL(__imp__sub_83C50C58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7416
	ctx.r3.s64 = ctx.r11.s64 + -7416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50C64"))) PPC_WEAK_FUNC(sub_83C50C64);
PPC_FUNC_IMPL(__imp__sub_83C50C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50C68"))) PPC_WEAK_FUNC(sub_83C50C68);
PPC_FUNC_IMPL(__imp__sub_83C50C68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7408
	ctx.r3.s64 = ctx.r11.s64 + -7408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50C74"))) PPC_WEAK_FUNC(sub_83C50C74);
PPC_FUNC_IMPL(__imp__sub_83C50C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50C78"))) PPC_WEAK_FUNC(sub_83C50C78);
PPC_FUNC_IMPL(__imp__sub_83C50C78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7400
	ctx.r3.s64 = ctx.r11.s64 + -7400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50C84"))) PPC_WEAK_FUNC(sub_83C50C84);
PPC_FUNC_IMPL(__imp__sub_83C50C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50C88"))) PPC_WEAK_FUNC(sub_83C50C88);
PPC_FUNC_IMPL(__imp__sub_83C50C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7392
	ctx.r3.s64 = ctx.r11.s64 + -7392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50C94"))) PPC_WEAK_FUNC(sub_83C50C94);
PPC_FUNC_IMPL(__imp__sub_83C50C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50C98"))) PPC_WEAK_FUNC(sub_83C50C98);
PPC_FUNC_IMPL(__imp__sub_83C50C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7384
	ctx.r3.s64 = ctx.r11.s64 + -7384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50CA4"))) PPC_WEAK_FUNC(sub_83C50CA4);
PPC_FUNC_IMPL(__imp__sub_83C50CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50CA8"))) PPC_WEAK_FUNC(sub_83C50CA8);
PPC_FUNC_IMPL(__imp__sub_83C50CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7376
	ctx.r3.s64 = ctx.r11.s64 + -7376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50CB4"))) PPC_WEAK_FUNC(sub_83C50CB4);
PPC_FUNC_IMPL(__imp__sub_83C50CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50CB8"))) PPC_WEAK_FUNC(sub_83C50CB8);
PPC_FUNC_IMPL(__imp__sub_83C50CB8) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,21592
	ctx.r3.s64 = ctx.r11.s64 + 21592;
	// bl 0x83523120
	ctx.lr = 0x83C50CD0;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-7368
	ctx.r3.s64 = ctx.r10.s64 + -7368;
	// bl 0x831cdcc8
	ctx.lr = 0x83C50CDC;
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

__attribute__((alias("__imp__sub_83C50CEC"))) PPC_WEAK_FUNC(sub_83C50CEC);
PPC_FUNC_IMPL(__imp__sub_83C50CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50CF0"))) PPC_WEAK_FUNC(sub_83C50CF0);
PPC_FUNC_IMPL(__imp__sub_83C50CF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7352
	ctx.r3.s64 = ctx.r11.s64 + -7352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50CFC"))) PPC_WEAK_FUNC(sub_83C50CFC);
PPC_FUNC_IMPL(__imp__sub_83C50CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50D00"))) PPC_WEAK_FUNC(sub_83C50D00);
PPC_FUNC_IMPL(__imp__sub_83C50D00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7344
	ctx.r3.s64 = ctx.r11.s64 + -7344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50D0C"))) PPC_WEAK_FUNC(sub_83C50D0C);
PPC_FUNC_IMPL(__imp__sub_83C50D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50D10"))) PPC_WEAK_FUNC(sub_83C50D10);
PPC_FUNC_IMPL(__imp__sub_83C50D10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7336
	ctx.r3.s64 = ctx.r11.s64 + -7336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50D1C"))) PPC_WEAK_FUNC(sub_83C50D1C);
PPC_FUNC_IMPL(__imp__sub_83C50D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50D20"))) PPC_WEAK_FUNC(sub_83C50D20);
PPC_FUNC_IMPL(__imp__sub_83C50D20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7328
	ctx.r3.s64 = ctx.r11.s64 + -7328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50D2C"))) PPC_WEAK_FUNC(sub_83C50D2C);
PPC_FUNC_IMPL(__imp__sub_83C50D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50D30"))) PPC_WEAK_FUNC(sub_83C50D30);
PPC_FUNC_IMPL(__imp__sub_83C50D30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7320
	ctx.r3.s64 = ctx.r11.s64 + -7320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50D3C"))) PPC_WEAK_FUNC(sub_83C50D3C);
PPC_FUNC_IMPL(__imp__sub_83C50D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50D40"))) PPC_WEAK_FUNC(sub_83C50D40);
PPC_FUNC_IMPL(__imp__sub_83C50D40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7312
	ctx.r3.s64 = ctx.r11.s64 + -7312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50D4C"))) PPC_WEAK_FUNC(sub_83C50D4C);
PPC_FUNC_IMPL(__imp__sub_83C50D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50D50"))) PPC_WEAK_FUNC(sub_83C50D50);
PPC_FUNC_IMPL(__imp__sub_83C50D50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7304
	ctx.r3.s64 = ctx.r11.s64 + -7304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50D5C"))) PPC_WEAK_FUNC(sub_83C50D5C);
PPC_FUNC_IMPL(__imp__sub_83C50D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50D60"))) PPC_WEAK_FUNC(sub_83C50D60);
PPC_FUNC_IMPL(__imp__sub_83C50D60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7296
	ctx.r3.s64 = ctx.r11.s64 + -7296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50D6C"))) PPC_WEAK_FUNC(sub_83C50D6C);
PPC_FUNC_IMPL(__imp__sub_83C50D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50D70"))) PPC_WEAK_FUNC(sub_83C50D70);
PPC_FUNC_IMPL(__imp__sub_83C50D70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7288
	ctx.r3.s64 = ctx.r11.s64 + -7288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50D7C"))) PPC_WEAK_FUNC(sub_83C50D7C);
PPC_FUNC_IMPL(__imp__sub_83C50D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50D80"))) PPC_WEAK_FUNC(sub_83C50D80);
PPC_FUNC_IMPL(__imp__sub_83C50D80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7280
	ctx.r3.s64 = ctx.r11.s64 + -7280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50D8C"))) PPC_WEAK_FUNC(sub_83C50D8C);
PPC_FUNC_IMPL(__imp__sub_83C50D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50D90"))) PPC_WEAK_FUNC(sub_83C50D90);
PPC_FUNC_IMPL(__imp__sub_83C50D90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7272
	ctx.r3.s64 = ctx.r11.s64 + -7272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50D9C"))) PPC_WEAK_FUNC(sub_83C50D9C);
PPC_FUNC_IMPL(__imp__sub_83C50D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50DA0"))) PPC_WEAK_FUNC(sub_83C50DA0);
PPC_FUNC_IMPL(__imp__sub_83C50DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7264
	ctx.r3.s64 = ctx.r11.s64 + -7264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50DAC"))) PPC_WEAK_FUNC(sub_83C50DAC);
PPC_FUNC_IMPL(__imp__sub_83C50DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50DB0"))) PPC_WEAK_FUNC(sub_83C50DB0);
PPC_FUNC_IMPL(__imp__sub_83C50DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7256
	ctx.r3.s64 = ctx.r11.s64 + -7256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50DBC"))) PPC_WEAK_FUNC(sub_83C50DBC);
PPC_FUNC_IMPL(__imp__sub_83C50DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50DC0"))) PPC_WEAK_FUNC(sub_83C50DC0);
PPC_FUNC_IMPL(__imp__sub_83C50DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7248
	ctx.r3.s64 = ctx.r11.s64 + -7248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50DCC"))) PPC_WEAK_FUNC(sub_83C50DCC);
PPC_FUNC_IMPL(__imp__sub_83C50DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50DD0"))) PPC_WEAK_FUNC(sub_83C50DD0);
PPC_FUNC_IMPL(__imp__sub_83C50DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7240
	ctx.r3.s64 = ctx.r11.s64 + -7240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50DDC"))) PPC_WEAK_FUNC(sub_83C50DDC);
PPC_FUNC_IMPL(__imp__sub_83C50DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50DE0"))) PPC_WEAK_FUNC(sub_83C50DE0);
PPC_FUNC_IMPL(__imp__sub_83C50DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7232
	ctx.r3.s64 = ctx.r11.s64 + -7232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50DEC"))) PPC_WEAK_FUNC(sub_83C50DEC);
PPC_FUNC_IMPL(__imp__sub_83C50DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50DF0"))) PPC_WEAK_FUNC(sub_83C50DF0);
PPC_FUNC_IMPL(__imp__sub_83C50DF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7224
	ctx.r3.s64 = ctx.r11.s64 + -7224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50DFC"))) PPC_WEAK_FUNC(sub_83C50DFC);
PPC_FUNC_IMPL(__imp__sub_83C50DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50E00"))) PPC_WEAK_FUNC(sub_83C50E00);
PPC_FUNC_IMPL(__imp__sub_83C50E00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7216
	ctx.r3.s64 = ctx.r11.s64 + -7216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50E0C"))) PPC_WEAK_FUNC(sub_83C50E0C);
PPC_FUNC_IMPL(__imp__sub_83C50E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50E10"))) PPC_WEAK_FUNC(sub_83C50E10);
PPC_FUNC_IMPL(__imp__sub_83C50E10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7208
	ctx.r3.s64 = ctx.r11.s64 + -7208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50E1C"))) PPC_WEAK_FUNC(sub_83C50E1C);
PPC_FUNC_IMPL(__imp__sub_83C50E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50E20"))) PPC_WEAK_FUNC(sub_83C50E20);
PPC_FUNC_IMPL(__imp__sub_83C50E20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7200
	ctx.r3.s64 = ctx.r11.s64 + -7200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50E2C"))) PPC_WEAK_FUNC(sub_83C50E2C);
PPC_FUNC_IMPL(__imp__sub_83C50E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50E30"))) PPC_WEAK_FUNC(sub_83C50E30);
PPC_FUNC_IMPL(__imp__sub_83C50E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7192
	ctx.r3.s64 = ctx.r11.s64 + -7192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50E3C"))) PPC_WEAK_FUNC(sub_83C50E3C);
PPC_FUNC_IMPL(__imp__sub_83C50E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50E40"))) PPC_WEAK_FUNC(sub_83C50E40);
PPC_FUNC_IMPL(__imp__sub_83C50E40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7184
	ctx.r3.s64 = ctx.r11.s64 + -7184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50E4C"))) PPC_WEAK_FUNC(sub_83C50E4C);
PPC_FUNC_IMPL(__imp__sub_83C50E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50E50"))) PPC_WEAK_FUNC(sub_83C50E50);
PPC_FUNC_IMPL(__imp__sub_83C50E50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7176
	ctx.r3.s64 = ctx.r11.s64 + -7176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50E5C"))) PPC_WEAK_FUNC(sub_83C50E5C);
PPC_FUNC_IMPL(__imp__sub_83C50E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50E60"))) PPC_WEAK_FUNC(sub_83C50E60);
PPC_FUNC_IMPL(__imp__sub_83C50E60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7168
	ctx.r3.s64 = ctx.r11.s64 + -7168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50E6C"))) PPC_WEAK_FUNC(sub_83C50E6C);
PPC_FUNC_IMPL(__imp__sub_83C50E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50E70"))) PPC_WEAK_FUNC(sub_83C50E70);
PPC_FUNC_IMPL(__imp__sub_83C50E70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7160
	ctx.r3.s64 = ctx.r11.s64 + -7160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50E7C"))) PPC_WEAK_FUNC(sub_83C50E7C);
PPC_FUNC_IMPL(__imp__sub_83C50E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50E80"))) PPC_WEAK_FUNC(sub_83C50E80);
PPC_FUNC_IMPL(__imp__sub_83C50E80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7152
	ctx.r3.s64 = ctx.r11.s64 + -7152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50E8C"))) PPC_WEAK_FUNC(sub_83C50E8C);
PPC_FUNC_IMPL(__imp__sub_83C50E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50E90"))) PPC_WEAK_FUNC(sub_83C50E90);
PPC_FUNC_IMPL(__imp__sub_83C50E90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7144
	ctx.r3.s64 = ctx.r11.s64 + -7144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50E9C"))) PPC_WEAK_FUNC(sub_83C50E9C);
PPC_FUNC_IMPL(__imp__sub_83C50E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50EA0"))) PPC_WEAK_FUNC(sub_83C50EA0);
PPC_FUNC_IMPL(__imp__sub_83C50EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7136
	ctx.r3.s64 = ctx.r11.s64 + -7136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50EAC"))) PPC_WEAK_FUNC(sub_83C50EAC);
PPC_FUNC_IMPL(__imp__sub_83C50EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50EB0"))) PPC_WEAK_FUNC(sub_83C50EB0);
PPC_FUNC_IMPL(__imp__sub_83C50EB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7128
	ctx.r3.s64 = ctx.r11.s64 + -7128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50EBC"))) PPC_WEAK_FUNC(sub_83C50EBC);
PPC_FUNC_IMPL(__imp__sub_83C50EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50EC0"))) PPC_WEAK_FUNC(sub_83C50EC0);
PPC_FUNC_IMPL(__imp__sub_83C50EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7120
	ctx.r3.s64 = ctx.r11.s64 + -7120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50ECC"))) PPC_WEAK_FUNC(sub_83C50ECC);
PPC_FUNC_IMPL(__imp__sub_83C50ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50ED0"))) PPC_WEAK_FUNC(sub_83C50ED0);
PPC_FUNC_IMPL(__imp__sub_83C50ED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7112
	ctx.r3.s64 = ctx.r11.s64 + -7112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50EDC"))) PPC_WEAK_FUNC(sub_83C50EDC);
PPC_FUNC_IMPL(__imp__sub_83C50EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50EE0"))) PPC_WEAK_FUNC(sub_83C50EE0);
PPC_FUNC_IMPL(__imp__sub_83C50EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7104
	ctx.r3.s64 = ctx.r11.s64 + -7104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50EEC"))) PPC_WEAK_FUNC(sub_83C50EEC);
PPC_FUNC_IMPL(__imp__sub_83C50EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50EF0"))) PPC_WEAK_FUNC(sub_83C50EF0);
PPC_FUNC_IMPL(__imp__sub_83C50EF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7096
	ctx.r3.s64 = ctx.r11.s64 + -7096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50EFC"))) PPC_WEAK_FUNC(sub_83C50EFC);
PPC_FUNC_IMPL(__imp__sub_83C50EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50F00"))) PPC_WEAK_FUNC(sub_83C50F00);
PPC_FUNC_IMPL(__imp__sub_83C50F00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7088
	ctx.r3.s64 = ctx.r11.s64 + -7088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50F0C"))) PPC_WEAK_FUNC(sub_83C50F0C);
PPC_FUNC_IMPL(__imp__sub_83C50F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50F10"))) PPC_WEAK_FUNC(sub_83C50F10);
PPC_FUNC_IMPL(__imp__sub_83C50F10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7080
	ctx.r3.s64 = ctx.r11.s64 + -7080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50F1C"))) PPC_WEAK_FUNC(sub_83C50F1C);
PPC_FUNC_IMPL(__imp__sub_83C50F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50F20"))) PPC_WEAK_FUNC(sub_83C50F20);
PPC_FUNC_IMPL(__imp__sub_83C50F20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7072
	ctx.r3.s64 = ctx.r11.s64 + -7072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50F2C"))) PPC_WEAK_FUNC(sub_83C50F2C);
PPC_FUNC_IMPL(__imp__sub_83C50F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50F30"))) PPC_WEAK_FUNC(sub_83C50F30);
PPC_FUNC_IMPL(__imp__sub_83C50F30) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,21624
	ctx.r7.s64 = ctx.r8.s64 + 21624;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,21624(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21624);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,21624(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21624, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C50F58"))) PPC_WEAK_FUNC(sub_83C50F58);
PPC_FUNC_IMPL(__imp__sub_83C50F58) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,9812
	ctx.r6.s64 = ctx.r7.s64 + 9812;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,9740(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 9740);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,21624(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21624);
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
	// std r9,9812(r7)
	PPC_STORE_U64(ctx.r7.u32 + 9812, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C50FA0"))) PPC_WEAK_FUNC(sub_83C50FA0);
PPC_FUNC_IMPL(__imp__sub_83C50FA0) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,21608
	ctx.r3.s64 = ctx.r11.s64 + 21608;
	// bl 0x83523120
	ctx.lr = 0x83C50FB8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-7064
	ctx.r3.s64 = ctx.r10.s64 + -7064;
	// bl 0x831cdcc8
	ctx.lr = 0x83C50FC4;
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

__attribute__((alias("__imp__sub_83C50FD4"))) PPC_WEAK_FUNC(sub_83C50FD4);
PPC_FUNC_IMPL(__imp__sub_83C50FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50FD8"))) PPC_WEAK_FUNC(sub_83C50FD8);
PPC_FUNC_IMPL(__imp__sub_83C50FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7048
	ctx.r3.s64 = ctx.r11.s64 + -7048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C50FE4"))) PPC_WEAK_FUNC(sub_83C50FE4);
PPC_FUNC_IMPL(__imp__sub_83C50FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C50FE8"))) PPC_WEAK_FUNC(sub_83C50FE8);
PPC_FUNC_IMPL(__imp__sub_83C50FE8) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,21632
	ctx.r3.s64 = ctx.r11.s64 + 21632;
	// bl 0x8259af80
	ctx.lr = 0x83C51000;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-7032
	ctx.r3.s64 = ctx.r10.s64 + -7032;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5100C;
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

__attribute__((alias("__imp__sub_83C5101C"))) PPC_WEAK_FUNC(sub_83C5101C);
PPC_FUNC_IMPL(__imp__sub_83C5101C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51020"))) PPC_WEAK_FUNC(sub_83C51020);
PPC_FUNC_IMPL(__imp__sub_83C51020) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,21612
	ctx.r11.s64 = ctx.r8.s64 + 21612;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,9788(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9788);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-7040
	ctx.r3.s64 = ctx.r6.s64 + -7040;
	// stw r10,21612(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21612, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51050"))) PPC_WEAK_FUNC(sub_83C51050);
PPC_FUNC_IMPL(__imp__sub_83C51050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7024
	ctx.r3.s64 = ctx.r11.s64 + -7024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5105C"))) PPC_WEAK_FUNC(sub_83C5105C);
PPC_FUNC_IMPL(__imp__sub_83C5105C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51060"))) PPC_WEAK_FUNC(sub_83C51060);
PPC_FUNC_IMPL(__imp__sub_83C51060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7016
	ctx.r3.s64 = ctx.r11.s64 + -7016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5106C"))) PPC_WEAK_FUNC(sub_83C5106C);
PPC_FUNC_IMPL(__imp__sub_83C5106C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51070"))) PPC_WEAK_FUNC(sub_83C51070);
PPC_FUNC_IMPL(__imp__sub_83C51070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7008
	ctx.r3.s64 = ctx.r11.s64 + -7008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5107C"))) PPC_WEAK_FUNC(sub_83C5107C);
PPC_FUNC_IMPL(__imp__sub_83C5107C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51080"))) PPC_WEAK_FUNC(sub_83C51080);
PPC_FUNC_IMPL(__imp__sub_83C51080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-7000
	ctx.r3.s64 = ctx.r11.s64 + -7000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5108C"))) PPC_WEAK_FUNC(sub_83C5108C);
PPC_FUNC_IMPL(__imp__sub_83C5108C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51090"))) PPC_WEAK_FUNC(sub_83C51090);
PPC_FUNC_IMPL(__imp__sub_83C51090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6992
	ctx.r3.s64 = ctx.r11.s64 + -6992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5109C"))) PPC_WEAK_FUNC(sub_83C5109C);
PPC_FUNC_IMPL(__imp__sub_83C5109C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C510A0"))) PPC_WEAK_FUNC(sub_83C510A0);
PPC_FUNC_IMPL(__imp__sub_83C510A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6984
	ctx.r3.s64 = ctx.r11.s64 + -6984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C510AC"))) PPC_WEAK_FUNC(sub_83C510AC);
PPC_FUNC_IMPL(__imp__sub_83C510AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C510B0"))) PPC_WEAK_FUNC(sub_83C510B0);
PPC_FUNC_IMPL(__imp__sub_83C510B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6976
	ctx.r3.s64 = ctx.r11.s64 + -6976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C510BC"))) PPC_WEAK_FUNC(sub_83C510BC);
PPC_FUNC_IMPL(__imp__sub_83C510BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C510C0"))) PPC_WEAK_FUNC(sub_83C510C0);
PPC_FUNC_IMPL(__imp__sub_83C510C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6968
	ctx.r3.s64 = ctx.r11.s64 + -6968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C510CC"))) PPC_WEAK_FUNC(sub_83C510CC);
PPC_FUNC_IMPL(__imp__sub_83C510CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C510D0"))) PPC_WEAK_FUNC(sub_83C510D0);
PPC_FUNC_IMPL(__imp__sub_83C510D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6960
	ctx.r3.s64 = ctx.r11.s64 + -6960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C510DC"))) PPC_WEAK_FUNC(sub_83C510DC);
PPC_FUNC_IMPL(__imp__sub_83C510DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C510E0"))) PPC_WEAK_FUNC(sub_83C510E0);
PPC_FUNC_IMPL(__imp__sub_83C510E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6952
	ctx.r3.s64 = ctx.r11.s64 + -6952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C510EC"))) PPC_WEAK_FUNC(sub_83C510EC);
PPC_FUNC_IMPL(__imp__sub_83C510EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C510F0"))) PPC_WEAK_FUNC(sub_83C510F0);
PPC_FUNC_IMPL(__imp__sub_83C510F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6944
	ctx.r3.s64 = ctx.r11.s64 + -6944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C510FC"))) PPC_WEAK_FUNC(sub_83C510FC);
PPC_FUNC_IMPL(__imp__sub_83C510FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51100"))) PPC_WEAK_FUNC(sub_83C51100);
PPC_FUNC_IMPL(__imp__sub_83C51100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6936
	ctx.r3.s64 = ctx.r11.s64 + -6936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5110C"))) PPC_WEAK_FUNC(sub_83C5110C);
PPC_FUNC_IMPL(__imp__sub_83C5110C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51110"))) PPC_WEAK_FUNC(sub_83C51110);
PPC_FUNC_IMPL(__imp__sub_83C51110) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,21992
	ctx.r7.s64 = ctx.r8.s64 + 21992;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,21992(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21992);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,21992(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21992, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C51138"))) PPC_WEAK_FUNC(sub_83C51138);
PPC_FUNC_IMPL(__imp__sub_83C51138) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,9940
	ctx.r6.s64 = ctx.r7.s64 + 9940;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,9868(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 9868);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,21992(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21992);
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
	// std r9,9940(r7)
	PPC_STORE_U64(ctx.r7.u32 + 9940, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C51180"))) PPC_WEAK_FUNC(sub_83C51180);
PPC_FUNC_IMPL(__imp__sub_83C51180) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,21976
	ctx.r3.s64 = ctx.r11.s64 + 21976;
	// bl 0x83523120
	ctx.lr = 0x83C51198;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-6928
	ctx.r3.s64 = ctx.r10.s64 + -6928;
	// bl 0x831cdcc8
	ctx.lr = 0x83C511A4;
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

__attribute__((alias("__imp__sub_83C511B4"))) PPC_WEAK_FUNC(sub_83C511B4);
PPC_FUNC_IMPL(__imp__sub_83C511B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C511B8"))) PPC_WEAK_FUNC(sub_83C511B8);
PPC_FUNC_IMPL(__imp__sub_83C511B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6912
	ctx.r3.s64 = ctx.r11.s64 + -6912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C511C4"))) PPC_WEAK_FUNC(sub_83C511C4);
PPC_FUNC_IMPL(__imp__sub_83C511C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C511C8"))) PPC_WEAK_FUNC(sub_83C511C8);
PPC_FUNC_IMPL(__imp__sub_83C511C8) {
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
	// lis r11,-31756
	ctx.r11.s64 = -2081161216;
	// addi r3,r11,22000
	ctx.r3.s64 = ctx.r11.s64 + 22000;
	// bl 0x8259af80
	ctx.lr = 0x83C511E0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-6896
	ctx.r3.s64 = ctx.r10.s64 + -6896;
	// bl 0x831cdcc8
	ctx.lr = 0x83C511EC;
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

__attribute__((alias("__imp__sub_83C511FC"))) PPC_WEAK_FUNC(sub_83C511FC);
PPC_FUNC_IMPL(__imp__sub_83C511FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51200"))) PPC_WEAK_FUNC(sub_83C51200);
PPC_FUNC_IMPL(__imp__sub_83C51200) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,21980
	ctx.r11.s64 = ctx.r8.s64 + 21980;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,9916(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9916);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-6904
	ctx.r3.s64 = ctx.r6.s64 + -6904;
	// stw r10,21980(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21980, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C51230"))) PPC_WEAK_FUNC(sub_83C51230);
PPC_FUNC_IMPL(__imp__sub_83C51230) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// addi r4,r11,-3992
	ctx.r4.s64 = ctx.r11.s64 + -3992;
	// addi r3,r10,9964
	ctx.r3.s64 = ctx.r10.s64 + 9964;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C51254;
	sub_8259CC28(ctx, base);
	// lis r9,-31788
	ctx.r9.s64 = -2083258368;
	// addi r3,r9,-6888
	ctx.r3.s64 = ctx.r9.s64 + -6888;
	// bl 0x831cdcc8
	ctx.lr = 0x83C51260;
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

__attribute__((alias("__imp__sub_83C51270"))) PPC_WEAK_FUNC(sub_83C51270);
PPC_FUNC_IMPL(__imp__sub_83C51270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6784
	ctx.r3.s64 = ctx.r11.s64 + -6784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5127C"))) PPC_WEAK_FUNC(sub_83C5127C);
PPC_FUNC_IMPL(__imp__sub_83C5127C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51280"))) PPC_WEAK_FUNC(sub_83C51280);
PPC_FUNC_IMPL(__imp__sub_83C51280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6776
	ctx.r3.s64 = ctx.r11.s64 + -6776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5128C"))) PPC_WEAK_FUNC(sub_83C5128C);
PPC_FUNC_IMPL(__imp__sub_83C5128C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C51290"))) PPC_WEAK_FUNC(sub_83C51290);
PPC_FUNC_IMPL(__imp__sub_83C51290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6768
	ctx.r3.s64 = ctx.r11.s64 + -6768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5129C"))) PPC_WEAK_FUNC(sub_83C5129C);
PPC_FUNC_IMPL(__imp__sub_83C5129C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C512A0"))) PPC_WEAK_FUNC(sub_83C512A0);
PPC_FUNC_IMPL(__imp__sub_83C512A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6760
	ctx.r3.s64 = ctx.r11.s64 + -6760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C512AC"))) PPC_WEAK_FUNC(sub_83C512AC);
PPC_FUNC_IMPL(__imp__sub_83C512AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C512B0"))) PPC_WEAK_FUNC(sub_83C512B0);
PPC_FUNC_IMPL(__imp__sub_83C512B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6752
	ctx.r3.s64 = ctx.r11.s64 + -6752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C512BC"))) PPC_WEAK_FUNC(sub_83C512BC);
PPC_FUNC_IMPL(__imp__sub_83C512BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C512C0"))) PPC_WEAK_FUNC(sub_83C512C0);
PPC_FUNC_IMPL(__imp__sub_83C512C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-6744
	ctx.r3.s64 = ctx.r11.s64 + -6744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C512CC"))) PPC_WEAK_FUNC(sub_83C512CC);
PPC_FUNC_IMPL(__imp__sub_83C512CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

