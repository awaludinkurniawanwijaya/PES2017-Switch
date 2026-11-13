#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C412D8"))) PPC_WEAK_FUNC(sub_83C412D8);
PPC_FUNC_IMPL(__imp__sub_83C412D8) {
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
	// addi r3,r11,-25976
	ctx.r3.s64 = ctx.r11.s64 + -25976;
	// bl 0x8259af80
	ctx.lr = 0x83C412F0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-25792
	ctx.r3.s64 = ctx.r10.s64 + -25792;
	// bl 0x831cdcc8
	ctx.lr = 0x83C412FC;
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

__attribute__((alias("__imp__sub_83C4130C"))) PPC_WEAK_FUNC(sub_83C4130C);
PPC_FUNC_IMPL(__imp__sub_83C4130C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41310"))) PPC_WEAK_FUNC(sub_83C41310);
PPC_FUNC_IMPL(__imp__sub_83C41310) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-25996
	ctx.r11.s64 = ctx.r8.s64 + -25996;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-8316(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8316);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-25800
	ctx.r3.s64 = ctx.r6.s64 + -25800;
	// stw r10,-25996(r8)
	PPC_STORE_U32(ctx.r8.u32 + -25996, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41340"))) PPC_WEAK_FUNC(sub_83C41340);
PPC_FUNC_IMPL(__imp__sub_83C41340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25784
	ctx.r3.s64 = ctx.r11.s64 + -25784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4134C"))) PPC_WEAK_FUNC(sub_83C4134C);
PPC_FUNC_IMPL(__imp__sub_83C4134C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41350"))) PPC_WEAK_FUNC(sub_83C41350);
PPC_FUNC_IMPL(__imp__sub_83C41350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25776
	ctx.r3.s64 = ctx.r11.s64 + -25776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4135C"))) PPC_WEAK_FUNC(sub_83C4135C);
PPC_FUNC_IMPL(__imp__sub_83C4135C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41360"))) PPC_WEAK_FUNC(sub_83C41360);
PPC_FUNC_IMPL(__imp__sub_83C41360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25768
	ctx.r3.s64 = ctx.r11.s64 + -25768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4136C"))) PPC_WEAK_FUNC(sub_83C4136C);
PPC_FUNC_IMPL(__imp__sub_83C4136C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41370"))) PPC_WEAK_FUNC(sub_83C41370);
PPC_FUNC_IMPL(__imp__sub_83C41370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25760
	ctx.r3.s64 = ctx.r11.s64 + -25760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4137C"))) PPC_WEAK_FUNC(sub_83C4137C);
PPC_FUNC_IMPL(__imp__sub_83C4137C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41380"))) PPC_WEAK_FUNC(sub_83C41380);
PPC_FUNC_IMPL(__imp__sub_83C41380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25752
	ctx.r3.s64 = ctx.r11.s64 + -25752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4138C"))) PPC_WEAK_FUNC(sub_83C4138C);
PPC_FUNC_IMPL(__imp__sub_83C4138C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41390"))) PPC_WEAK_FUNC(sub_83C41390);
PPC_FUNC_IMPL(__imp__sub_83C41390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25744
	ctx.r3.s64 = ctx.r11.s64 + -25744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4139C"))) PPC_WEAK_FUNC(sub_83C4139C);
PPC_FUNC_IMPL(__imp__sub_83C4139C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C413A0"))) PPC_WEAK_FUNC(sub_83C413A0);
PPC_FUNC_IMPL(__imp__sub_83C413A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25736
	ctx.r3.s64 = ctx.r11.s64 + -25736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C413AC"))) PPC_WEAK_FUNC(sub_83C413AC);
PPC_FUNC_IMPL(__imp__sub_83C413AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C413B0"))) PPC_WEAK_FUNC(sub_83C413B0);
PPC_FUNC_IMPL(__imp__sub_83C413B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25728
	ctx.r3.s64 = ctx.r11.s64 + -25728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C413BC"))) PPC_WEAK_FUNC(sub_83C413BC);
PPC_FUNC_IMPL(__imp__sub_83C413BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C413C0"))) PPC_WEAK_FUNC(sub_83C413C0);
PPC_FUNC_IMPL(__imp__sub_83C413C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25720
	ctx.r3.s64 = ctx.r11.s64 + -25720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C413CC"))) PPC_WEAK_FUNC(sub_83C413CC);
PPC_FUNC_IMPL(__imp__sub_83C413CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C413D0"))) PPC_WEAK_FUNC(sub_83C413D0);
PPC_FUNC_IMPL(__imp__sub_83C413D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25712
	ctx.r3.s64 = ctx.r11.s64 + -25712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C413DC"))) PPC_WEAK_FUNC(sub_83C413DC);
PPC_FUNC_IMPL(__imp__sub_83C413DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C413E0"))) PPC_WEAK_FUNC(sub_83C413E0);
PPC_FUNC_IMPL(__imp__sub_83C413E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25704
	ctx.r3.s64 = ctx.r11.s64 + -25704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C413EC"))) PPC_WEAK_FUNC(sub_83C413EC);
PPC_FUNC_IMPL(__imp__sub_83C413EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C413F0"))) PPC_WEAK_FUNC(sub_83C413F0);
PPC_FUNC_IMPL(__imp__sub_83C413F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25696
	ctx.r3.s64 = ctx.r11.s64 + -25696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C413FC"))) PPC_WEAK_FUNC(sub_83C413FC);
PPC_FUNC_IMPL(__imp__sub_83C413FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41400"))) PPC_WEAK_FUNC(sub_83C41400);
PPC_FUNC_IMPL(__imp__sub_83C41400) {
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
	// addi r3,r11,-25632
	ctx.r3.s64 = ctx.r11.s64 + -25632;
	// bl 0x83523120
	ctx.lr = 0x83C41418;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-25688
	ctx.r3.s64 = ctx.r10.s64 + -25688;
	// bl 0x831cdcc8
	ctx.lr = 0x83C41424;
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

__attribute__((alias("__imp__sub_83C41434"))) PPC_WEAK_FUNC(sub_83C41434);
PPC_FUNC_IMPL(__imp__sub_83C41434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41438"))) PPC_WEAK_FUNC(sub_83C41438);
PPC_FUNC_IMPL(__imp__sub_83C41438) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-25616
	ctx.r7.s64 = ctx.r8.s64 + -25616;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-25616(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25616);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-25616(r8)
	PPC_STORE_U32(ctx.r8.u32 + -25616, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C41460"))) PPC_WEAK_FUNC(sub_83C41460);
PPC_FUNC_IMPL(__imp__sub_83C41460) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-8144
	ctx.r6.s64 = ctx.r7.s64 + -8144;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-8216(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -8216);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-25616(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -25616);
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
	// std r9,-8144(r7)
	PPC_STORE_U64(ctx.r7.u32 + -8144, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C414A8"))) PPC_WEAK_FUNC(sub_83C414A8);
PPC_FUNC_IMPL(__imp__sub_83C414A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25672
	ctx.r3.s64 = ctx.r11.s64 + -25672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C414B4"))) PPC_WEAK_FUNC(sub_83C414B4);
PPC_FUNC_IMPL(__imp__sub_83C414B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C414B8"))) PPC_WEAK_FUNC(sub_83C414B8);
PPC_FUNC_IMPL(__imp__sub_83C414B8) {
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
	// addi r3,r11,-25608
	ctx.r3.s64 = ctx.r11.s64 + -25608;
	// bl 0x8259af80
	ctx.lr = 0x83C414D0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-25656
	ctx.r3.s64 = ctx.r10.s64 + -25656;
	// bl 0x831cdcc8
	ctx.lr = 0x83C414DC;
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

__attribute__((alias("__imp__sub_83C414EC"))) PPC_WEAK_FUNC(sub_83C414EC);
PPC_FUNC_IMPL(__imp__sub_83C414EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C414F0"))) PPC_WEAK_FUNC(sub_83C414F0);
PPC_FUNC_IMPL(__imp__sub_83C414F0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-25628
	ctx.r11.s64 = ctx.r8.s64 + -25628;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-8168(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8168);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-25664
	ctx.r3.s64 = ctx.r6.s64 + -25664;
	// stw r10,-25628(r8)
	PPC_STORE_U32(ctx.r8.u32 + -25628, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41520"))) PPC_WEAK_FUNC(sub_83C41520);
PPC_FUNC_IMPL(__imp__sub_83C41520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25648
	ctx.r3.s64 = ctx.r11.s64 + -25648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4152C"))) PPC_WEAK_FUNC(sub_83C4152C);
PPC_FUNC_IMPL(__imp__sub_83C4152C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41530"))) PPC_WEAK_FUNC(sub_83C41530);
PPC_FUNC_IMPL(__imp__sub_83C41530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25640
	ctx.r3.s64 = ctx.r11.s64 + -25640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4153C"))) PPC_WEAK_FUNC(sub_83C4153C);
PPC_FUNC_IMPL(__imp__sub_83C4153C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41540"))) PPC_WEAK_FUNC(sub_83C41540);
PPC_FUNC_IMPL(__imp__sub_83C41540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25632
	ctx.r3.s64 = ctx.r11.s64 + -25632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4154C"))) PPC_WEAK_FUNC(sub_83C4154C);
PPC_FUNC_IMPL(__imp__sub_83C4154C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41550"))) PPC_WEAK_FUNC(sub_83C41550);
PPC_FUNC_IMPL(__imp__sub_83C41550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25624
	ctx.r3.s64 = ctx.r11.s64 + -25624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4155C"))) PPC_WEAK_FUNC(sub_83C4155C);
PPC_FUNC_IMPL(__imp__sub_83C4155C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41560"))) PPC_WEAK_FUNC(sub_83C41560);
PPC_FUNC_IMPL(__imp__sub_83C41560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25616
	ctx.r3.s64 = ctx.r11.s64 + -25616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4156C"))) PPC_WEAK_FUNC(sub_83C4156C);
PPC_FUNC_IMPL(__imp__sub_83C4156C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41570"))) PPC_WEAK_FUNC(sub_83C41570);
PPC_FUNC_IMPL(__imp__sub_83C41570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25608
	ctx.r3.s64 = ctx.r11.s64 + -25608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4157C"))) PPC_WEAK_FUNC(sub_83C4157C);
PPC_FUNC_IMPL(__imp__sub_83C4157C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41580"))) PPC_WEAK_FUNC(sub_83C41580);
PPC_FUNC_IMPL(__imp__sub_83C41580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25600
	ctx.r3.s64 = ctx.r11.s64 + -25600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4158C"))) PPC_WEAK_FUNC(sub_83C4158C);
PPC_FUNC_IMPL(__imp__sub_83C4158C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41590"))) PPC_WEAK_FUNC(sub_83C41590);
PPC_FUNC_IMPL(__imp__sub_83C41590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25592
	ctx.r3.s64 = ctx.r11.s64 + -25592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4159C"))) PPC_WEAK_FUNC(sub_83C4159C);
PPC_FUNC_IMPL(__imp__sub_83C4159C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C415A0"))) PPC_WEAK_FUNC(sub_83C415A0);
PPC_FUNC_IMPL(__imp__sub_83C415A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25584
	ctx.r3.s64 = ctx.r11.s64 + -25584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C415AC"))) PPC_WEAK_FUNC(sub_83C415AC);
PPC_FUNC_IMPL(__imp__sub_83C415AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C415B0"))) PPC_WEAK_FUNC(sub_83C415B0);
PPC_FUNC_IMPL(__imp__sub_83C415B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25576
	ctx.r3.s64 = ctx.r11.s64 + -25576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C415BC"))) PPC_WEAK_FUNC(sub_83C415BC);
PPC_FUNC_IMPL(__imp__sub_83C415BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C415C0"))) PPC_WEAK_FUNC(sub_83C415C0);
PPC_FUNC_IMPL(__imp__sub_83C415C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25568
	ctx.r3.s64 = ctx.r11.s64 + -25568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C415CC"))) PPC_WEAK_FUNC(sub_83C415CC);
PPC_FUNC_IMPL(__imp__sub_83C415CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C415D0"))) PPC_WEAK_FUNC(sub_83C415D0);
PPC_FUNC_IMPL(__imp__sub_83C415D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25560
	ctx.r3.s64 = ctx.r11.s64 + -25560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C415DC"))) PPC_WEAK_FUNC(sub_83C415DC);
PPC_FUNC_IMPL(__imp__sub_83C415DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C415E0"))) PPC_WEAK_FUNC(sub_83C415E0);
PPC_FUNC_IMPL(__imp__sub_83C415E0) {
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
	// addi r3,r11,-25260
	ctx.r3.s64 = ctx.r11.s64 + -25260;
	// bl 0x83523120
	ctx.lr = 0x83C415F8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-25552
	ctx.r3.s64 = ctx.r10.s64 + -25552;
	// bl 0x831cdcc8
	ctx.lr = 0x83C41604;
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

__attribute__((alias("__imp__sub_83C41614"))) PPC_WEAK_FUNC(sub_83C41614);
PPC_FUNC_IMPL(__imp__sub_83C41614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41618"))) PPC_WEAK_FUNC(sub_83C41618);
PPC_FUNC_IMPL(__imp__sub_83C41618) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-25244
	ctx.r7.s64 = ctx.r8.s64 + -25244;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-25244(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25244);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-25244(r8)
	PPC_STORE_U32(ctx.r8.u32 + -25244, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C41640"))) PPC_WEAK_FUNC(sub_83C41640);
PPC_FUNC_IMPL(__imp__sub_83C41640) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-8016
	ctx.r6.s64 = ctx.r7.s64 + -8016;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-8088(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -8088);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-25244(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -25244);
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
	// std r9,-8016(r7)
	PPC_STORE_U64(ctx.r7.u32 + -8016, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C41688"))) PPC_WEAK_FUNC(sub_83C41688);
PPC_FUNC_IMPL(__imp__sub_83C41688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25536
	ctx.r3.s64 = ctx.r11.s64 + -25536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41694"))) PPC_WEAK_FUNC(sub_83C41694);
PPC_FUNC_IMPL(__imp__sub_83C41694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41698"))) PPC_WEAK_FUNC(sub_83C41698);
PPC_FUNC_IMPL(__imp__sub_83C41698) {
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
	// addi r3,r11,-25232
	ctx.r3.s64 = ctx.r11.s64 + -25232;
	// bl 0x8259af80
	ctx.lr = 0x83C416B0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-25520
	ctx.r3.s64 = ctx.r10.s64 + -25520;
	// bl 0x831cdcc8
	ctx.lr = 0x83C416BC;
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

__attribute__((alias("__imp__sub_83C416CC"))) PPC_WEAK_FUNC(sub_83C416CC);
PPC_FUNC_IMPL(__imp__sub_83C416CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C416D0"))) PPC_WEAK_FUNC(sub_83C416D0);
PPC_FUNC_IMPL(__imp__sub_83C416D0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-25256
	ctx.r11.s64 = ctx.r8.s64 + -25256;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-8040(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8040);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-25528
	ctx.r3.s64 = ctx.r6.s64 + -25528;
	// stw r10,-25256(r8)
	PPC_STORE_U32(ctx.r8.u32 + -25256, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41700"))) PPC_WEAK_FUNC(sub_83C41700);
PPC_FUNC_IMPL(__imp__sub_83C41700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25512
	ctx.r3.s64 = ctx.r11.s64 + -25512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4170C"))) PPC_WEAK_FUNC(sub_83C4170C);
PPC_FUNC_IMPL(__imp__sub_83C4170C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41710"))) PPC_WEAK_FUNC(sub_83C41710);
PPC_FUNC_IMPL(__imp__sub_83C41710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25504
	ctx.r3.s64 = ctx.r11.s64 + -25504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4171C"))) PPC_WEAK_FUNC(sub_83C4171C);
PPC_FUNC_IMPL(__imp__sub_83C4171C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41720"))) PPC_WEAK_FUNC(sub_83C41720);
PPC_FUNC_IMPL(__imp__sub_83C41720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25496
	ctx.r3.s64 = ctx.r11.s64 + -25496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4172C"))) PPC_WEAK_FUNC(sub_83C4172C);
PPC_FUNC_IMPL(__imp__sub_83C4172C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41730"))) PPC_WEAK_FUNC(sub_83C41730);
PPC_FUNC_IMPL(__imp__sub_83C41730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25488
	ctx.r3.s64 = ctx.r11.s64 + -25488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4173C"))) PPC_WEAK_FUNC(sub_83C4173C);
PPC_FUNC_IMPL(__imp__sub_83C4173C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41740"))) PPC_WEAK_FUNC(sub_83C41740);
PPC_FUNC_IMPL(__imp__sub_83C41740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25480
	ctx.r3.s64 = ctx.r11.s64 + -25480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4174C"))) PPC_WEAK_FUNC(sub_83C4174C);
PPC_FUNC_IMPL(__imp__sub_83C4174C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41750"))) PPC_WEAK_FUNC(sub_83C41750);
PPC_FUNC_IMPL(__imp__sub_83C41750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25472
	ctx.r3.s64 = ctx.r11.s64 + -25472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4175C"))) PPC_WEAK_FUNC(sub_83C4175C);
PPC_FUNC_IMPL(__imp__sub_83C4175C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41760"))) PPC_WEAK_FUNC(sub_83C41760);
PPC_FUNC_IMPL(__imp__sub_83C41760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25464
	ctx.r3.s64 = ctx.r11.s64 + -25464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4176C"))) PPC_WEAK_FUNC(sub_83C4176C);
PPC_FUNC_IMPL(__imp__sub_83C4176C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41770"))) PPC_WEAK_FUNC(sub_83C41770);
PPC_FUNC_IMPL(__imp__sub_83C41770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25456
	ctx.r3.s64 = ctx.r11.s64 + -25456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4177C"))) PPC_WEAK_FUNC(sub_83C4177C);
PPC_FUNC_IMPL(__imp__sub_83C4177C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41780"))) PPC_WEAK_FUNC(sub_83C41780);
PPC_FUNC_IMPL(__imp__sub_83C41780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25448
	ctx.r3.s64 = ctx.r11.s64 + -25448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4178C"))) PPC_WEAK_FUNC(sub_83C4178C);
PPC_FUNC_IMPL(__imp__sub_83C4178C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41790"))) PPC_WEAK_FUNC(sub_83C41790);
PPC_FUNC_IMPL(__imp__sub_83C41790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25440
	ctx.r3.s64 = ctx.r11.s64 + -25440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4179C"))) PPC_WEAK_FUNC(sub_83C4179C);
PPC_FUNC_IMPL(__imp__sub_83C4179C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C417A0"))) PPC_WEAK_FUNC(sub_83C417A0);
PPC_FUNC_IMPL(__imp__sub_83C417A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25432
	ctx.r3.s64 = ctx.r11.s64 + -25432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C417AC"))) PPC_WEAK_FUNC(sub_83C417AC);
PPC_FUNC_IMPL(__imp__sub_83C417AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C417B0"))) PPC_WEAK_FUNC(sub_83C417B0);
PPC_FUNC_IMPL(__imp__sub_83C417B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25424
	ctx.r3.s64 = ctx.r11.s64 + -25424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C417BC"))) PPC_WEAK_FUNC(sub_83C417BC);
PPC_FUNC_IMPL(__imp__sub_83C417BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C417C0"))) PPC_WEAK_FUNC(sub_83C417C0);
PPC_FUNC_IMPL(__imp__sub_83C417C0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-24872
	ctx.r7.s64 = ctx.r8.s64 + -24872;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-24872(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24872);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-24872(r8)
	PPC_STORE_U32(ctx.r8.u32 + -24872, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C417E8"))) PPC_WEAK_FUNC(sub_83C417E8);
PPC_FUNC_IMPL(__imp__sub_83C417E8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-7888
	ctx.r6.s64 = ctx.r7.s64 + -7888;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-7960(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -7960);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-24872(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -24872);
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
	// std r9,-7888(r7)
	PPC_STORE_U64(ctx.r7.u32 + -7888, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C41830"))) PPC_WEAK_FUNC(sub_83C41830);
PPC_FUNC_IMPL(__imp__sub_83C41830) {
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
	// addi r3,r11,-24888
	ctx.r3.s64 = ctx.r11.s64 + -24888;
	// bl 0x83523120
	ctx.lr = 0x83C41848;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-25416
	ctx.r3.s64 = ctx.r10.s64 + -25416;
	// bl 0x831cdcc8
	ctx.lr = 0x83C41854;
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

__attribute__((alias("__imp__sub_83C41864"))) PPC_WEAK_FUNC(sub_83C41864);
PPC_FUNC_IMPL(__imp__sub_83C41864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41868"))) PPC_WEAK_FUNC(sub_83C41868);
PPC_FUNC_IMPL(__imp__sub_83C41868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25400
	ctx.r3.s64 = ctx.r11.s64 + -25400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41874"))) PPC_WEAK_FUNC(sub_83C41874);
PPC_FUNC_IMPL(__imp__sub_83C41874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41878"))) PPC_WEAK_FUNC(sub_83C41878);
PPC_FUNC_IMPL(__imp__sub_83C41878) {
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
	// addi r3,r11,-24864
	ctx.r3.s64 = ctx.r11.s64 + -24864;
	// bl 0x8259af80
	ctx.lr = 0x83C41890;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-25384
	ctx.r3.s64 = ctx.r10.s64 + -25384;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4189C;
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

__attribute__((alias("__imp__sub_83C418AC"))) PPC_WEAK_FUNC(sub_83C418AC);
PPC_FUNC_IMPL(__imp__sub_83C418AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C418B0"))) PPC_WEAK_FUNC(sub_83C418B0);
PPC_FUNC_IMPL(__imp__sub_83C418B0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-24884
	ctx.r11.s64 = ctx.r8.s64 + -24884;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-7912(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7912);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-25392
	ctx.r3.s64 = ctx.r6.s64 + -25392;
	// stw r10,-24884(r8)
	PPC_STORE_U32(ctx.r8.u32 + -24884, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C418E0"))) PPC_WEAK_FUNC(sub_83C418E0);
PPC_FUNC_IMPL(__imp__sub_83C418E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25376
	ctx.r3.s64 = ctx.r11.s64 + -25376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C418EC"))) PPC_WEAK_FUNC(sub_83C418EC);
PPC_FUNC_IMPL(__imp__sub_83C418EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C418F0"))) PPC_WEAK_FUNC(sub_83C418F0);
PPC_FUNC_IMPL(__imp__sub_83C418F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25368
	ctx.r3.s64 = ctx.r11.s64 + -25368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C418FC"))) PPC_WEAK_FUNC(sub_83C418FC);
PPC_FUNC_IMPL(__imp__sub_83C418FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41900"))) PPC_WEAK_FUNC(sub_83C41900);
PPC_FUNC_IMPL(__imp__sub_83C41900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25360
	ctx.r3.s64 = ctx.r11.s64 + -25360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4190C"))) PPC_WEAK_FUNC(sub_83C4190C);
PPC_FUNC_IMPL(__imp__sub_83C4190C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41910"))) PPC_WEAK_FUNC(sub_83C41910);
PPC_FUNC_IMPL(__imp__sub_83C41910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25352
	ctx.r3.s64 = ctx.r11.s64 + -25352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4191C"))) PPC_WEAK_FUNC(sub_83C4191C);
PPC_FUNC_IMPL(__imp__sub_83C4191C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41920"))) PPC_WEAK_FUNC(sub_83C41920);
PPC_FUNC_IMPL(__imp__sub_83C41920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25344
	ctx.r3.s64 = ctx.r11.s64 + -25344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4192C"))) PPC_WEAK_FUNC(sub_83C4192C);
PPC_FUNC_IMPL(__imp__sub_83C4192C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41930"))) PPC_WEAK_FUNC(sub_83C41930);
PPC_FUNC_IMPL(__imp__sub_83C41930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25336
	ctx.r3.s64 = ctx.r11.s64 + -25336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4193C"))) PPC_WEAK_FUNC(sub_83C4193C);
PPC_FUNC_IMPL(__imp__sub_83C4193C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41940"))) PPC_WEAK_FUNC(sub_83C41940);
PPC_FUNC_IMPL(__imp__sub_83C41940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25328
	ctx.r3.s64 = ctx.r11.s64 + -25328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4194C"))) PPC_WEAK_FUNC(sub_83C4194C);
PPC_FUNC_IMPL(__imp__sub_83C4194C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41950"))) PPC_WEAK_FUNC(sub_83C41950);
PPC_FUNC_IMPL(__imp__sub_83C41950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25320
	ctx.r3.s64 = ctx.r11.s64 + -25320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4195C"))) PPC_WEAK_FUNC(sub_83C4195C);
PPC_FUNC_IMPL(__imp__sub_83C4195C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41960"))) PPC_WEAK_FUNC(sub_83C41960);
PPC_FUNC_IMPL(__imp__sub_83C41960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25312
	ctx.r3.s64 = ctx.r11.s64 + -25312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4196C"))) PPC_WEAK_FUNC(sub_83C4196C);
PPC_FUNC_IMPL(__imp__sub_83C4196C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41970"))) PPC_WEAK_FUNC(sub_83C41970);
PPC_FUNC_IMPL(__imp__sub_83C41970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25304
	ctx.r3.s64 = ctx.r11.s64 + -25304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4197C"))) PPC_WEAK_FUNC(sub_83C4197C);
PPC_FUNC_IMPL(__imp__sub_83C4197C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41980"))) PPC_WEAK_FUNC(sub_83C41980);
PPC_FUNC_IMPL(__imp__sub_83C41980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25296
	ctx.r3.s64 = ctx.r11.s64 + -25296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4198C"))) PPC_WEAK_FUNC(sub_83C4198C);
PPC_FUNC_IMPL(__imp__sub_83C4198C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41990"))) PPC_WEAK_FUNC(sub_83C41990);
PPC_FUNC_IMPL(__imp__sub_83C41990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25288
	ctx.r3.s64 = ctx.r11.s64 + -25288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4199C"))) PPC_WEAK_FUNC(sub_83C4199C);
PPC_FUNC_IMPL(__imp__sub_83C4199C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C419A0"))) PPC_WEAK_FUNC(sub_83C419A0);
PPC_FUNC_IMPL(__imp__sub_83C419A0) {
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
	// addi r3,r11,-24516
	ctx.r3.s64 = ctx.r11.s64 + -24516;
	// bl 0x83523120
	ctx.lr = 0x83C419B8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-25280
	ctx.r3.s64 = ctx.r10.s64 + -25280;
	// bl 0x831cdcc8
	ctx.lr = 0x83C419C4;
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

__attribute__((alias("__imp__sub_83C419D4"))) PPC_WEAK_FUNC(sub_83C419D4);
PPC_FUNC_IMPL(__imp__sub_83C419D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C419D8"))) PPC_WEAK_FUNC(sub_83C419D8);
PPC_FUNC_IMPL(__imp__sub_83C419D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25264
	ctx.r3.s64 = ctx.r11.s64 + -25264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C419E4"))) PPC_WEAK_FUNC(sub_83C419E4);
PPC_FUNC_IMPL(__imp__sub_83C419E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C419E8"))) PPC_WEAK_FUNC(sub_83C419E8);
PPC_FUNC_IMPL(__imp__sub_83C419E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25256
	ctx.r3.s64 = ctx.r11.s64 + -25256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C419F4"))) PPC_WEAK_FUNC(sub_83C419F4);
PPC_FUNC_IMPL(__imp__sub_83C419F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C419F8"))) PPC_WEAK_FUNC(sub_83C419F8);
PPC_FUNC_IMPL(__imp__sub_83C419F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25248
	ctx.r3.s64 = ctx.r11.s64 + -25248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41A04"))) PPC_WEAK_FUNC(sub_83C41A04);
PPC_FUNC_IMPL(__imp__sub_83C41A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41A08"))) PPC_WEAK_FUNC(sub_83C41A08);
PPC_FUNC_IMPL(__imp__sub_83C41A08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25240
	ctx.r3.s64 = ctx.r11.s64 + -25240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41A14"))) PPC_WEAK_FUNC(sub_83C41A14);
PPC_FUNC_IMPL(__imp__sub_83C41A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41A18"))) PPC_WEAK_FUNC(sub_83C41A18);
PPC_FUNC_IMPL(__imp__sub_83C41A18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25232
	ctx.r3.s64 = ctx.r11.s64 + -25232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41A24"))) PPC_WEAK_FUNC(sub_83C41A24);
PPC_FUNC_IMPL(__imp__sub_83C41A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41A28"))) PPC_WEAK_FUNC(sub_83C41A28);
PPC_FUNC_IMPL(__imp__sub_83C41A28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25224
	ctx.r3.s64 = ctx.r11.s64 + -25224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41A34"))) PPC_WEAK_FUNC(sub_83C41A34);
PPC_FUNC_IMPL(__imp__sub_83C41A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41A38"))) PPC_WEAK_FUNC(sub_83C41A38);
PPC_FUNC_IMPL(__imp__sub_83C41A38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25216
	ctx.r3.s64 = ctx.r11.s64 + -25216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41A44"))) PPC_WEAK_FUNC(sub_83C41A44);
PPC_FUNC_IMPL(__imp__sub_83C41A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41A48"))) PPC_WEAK_FUNC(sub_83C41A48);
PPC_FUNC_IMPL(__imp__sub_83C41A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25208
	ctx.r3.s64 = ctx.r11.s64 + -25208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41A54"))) PPC_WEAK_FUNC(sub_83C41A54);
PPC_FUNC_IMPL(__imp__sub_83C41A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41A58"))) PPC_WEAK_FUNC(sub_83C41A58);
PPC_FUNC_IMPL(__imp__sub_83C41A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25200
	ctx.r3.s64 = ctx.r11.s64 + -25200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41A64"))) PPC_WEAK_FUNC(sub_83C41A64);
PPC_FUNC_IMPL(__imp__sub_83C41A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41A68"))) PPC_WEAK_FUNC(sub_83C41A68);
PPC_FUNC_IMPL(__imp__sub_83C41A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25192
	ctx.r3.s64 = ctx.r11.s64 + -25192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41A74"))) PPC_WEAK_FUNC(sub_83C41A74);
PPC_FUNC_IMPL(__imp__sub_83C41A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41A78"))) PPC_WEAK_FUNC(sub_83C41A78);
PPC_FUNC_IMPL(__imp__sub_83C41A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25184
	ctx.r3.s64 = ctx.r11.s64 + -25184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41A84"))) PPC_WEAK_FUNC(sub_83C41A84);
PPC_FUNC_IMPL(__imp__sub_83C41A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41A88"))) PPC_WEAK_FUNC(sub_83C41A88);
PPC_FUNC_IMPL(__imp__sub_83C41A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25176
	ctx.r3.s64 = ctx.r11.s64 + -25176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41A94"))) PPC_WEAK_FUNC(sub_83C41A94);
PPC_FUNC_IMPL(__imp__sub_83C41A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41A98"))) PPC_WEAK_FUNC(sub_83C41A98);
PPC_FUNC_IMPL(__imp__sub_83C41A98) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-24488
	ctx.r7.s64 = ctx.r8.s64 + -24488;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-24488(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24488);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-24488(r8)
	PPC_STORE_U32(ctx.r8.u32 + -24488, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C41AC0"))) PPC_WEAK_FUNC(sub_83C41AC0);
PPC_FUNC_IMPL(__imp__sub_83C41AC0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-7648
	ctx.r6.s64 = ctx.r7.s64 + -7648;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-7720(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -7720);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-24488(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -24488);
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
	// std r9,-7648(r7)
	PPC_STORE_U64(ctx.r7.u32 + -7648, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C41B08"))) PPC_WEAK_FUNC(sub_83C41B08);
PPC_FUNC_IMPL(__imp__sub_83C41B08) {
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
	// addi r3,r11,-24504
	ctx.r3.s64 = ctx.r11.s64 + -24504;
	// bl 0x83523120
	ctx.lr = 0x83C41B20;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-25168
	ctx.r3.s64 = ctx.r10.s64 + -25168;
	// bl 0x831cdcc8
	ctx.lr = 0x83C41B2C;
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

__attribute__((alias("__imp__sub_83C41B3C"))) PPC_WEAK_FUNC(sub_83C41B3C);
PPC_FUNC_IMPL(__imp__sub_83C41B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41B40"))) PPC_WEAK_FUNC(sub_83C41B40);
PPC_FUNC_IMPL(__imp__sub_83C41B40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25152
	ctx.r3.s64 = ctx.r11.s64 + -25152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41B4C"))) PPC_WEAK_FUNC(sub_83C41B4C);
PPC_FUNC_IMPL(__imp__sub_83C41B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41B50"))) PPC_WEAK_FUNC(sub_83C41B50);
PPC_FUNC_IMPL(__imp__sub_83C41B50) {
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
	// addi r3,r11,-24480
	ctx.r3.s64 = ctx.r11.s64 + -24480;
	// bl 0x8259af80
	ctx.lr = 0x83C41B68;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-25136
	ctx.r3.s64 = ctx.r10.s64 + -25136;
	// bl 0x831cdcc8
	ctx.lr = 0x83C41B74;
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

__attribute__((alias("__imp__sub_83C41B84"))) PPC_WEAK_FUNC(sub_83C41B84);
PPC_FUNC_IMPL(__imp__sub_83C41B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41B88"))) PPC_WEAK_FUNC(sub_83C41B88);
PPC_FUNC_IMPL(__imp__sub_83C41B88) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-24500
	ctx.r11.s64 = ctx.r8.s64 + -24500;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-7672(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7672);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-25144
	ctx.r3.s64 = ctx.r6.s64 + -25144;
	// stw r10,-24500(r8)
	PPC_STORE_U32(ctx.r8.u32 + -24500, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41BB8"))) PPC_WEAK_FUNC(sub_83C41BB8);
PPC_FUNC_IMPL(__imp__sub_83C41BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25128
	ctx.r3.s64 = ctx.r11.s64 + -25128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41BC4"))) PPC_WEAK_FUNC(sub_83C41BC4);
PPC_FUNC_IMPL(__imp__sub_83C41BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41BC8"))) PPC_WEAK_FUNC(sub_83C41BC8);
PPC_FUNC_IMPL(__imp__sub_83C41BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25120
	ctx.r3.s64 = ctx.r11.s64 + -25120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41BD4"))) PPC_WEAK_FUNC(sub_83C41BD4);
PPC_FUNC_IMPL(__imp__sub_83C41BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41BD8"))) PPC_WEAK_FUNC(sub_83C41BD8);
PPC_FUNC_IMPL(__imp__sub_83C41BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25112
	ctx.r3.s64 = ctx.r11.s64 + -25112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41BE4"))) PPC_WEAK_FUNC(sub_83C41BE4);
PPC_FUNC_IMPL(__imp__sub_83C41BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41BE8"))) PPC_WEAK_FUNC(sub_83C41BE8);
PPC_FUNC_IMPL(__imp__sub_83C41BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25104
	ctx.r3.s64 = ctx.r11.s64 + -25104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41BF4"))) PPC_WEAK_FUNC(sub_83C41BF4);
PPC_FUNC_IMPL(__imp__sub_83C41BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41BF8"))) PPC_WEAK_FUNC(sub_83C41BF8);
PPC_FUNC_IMPL(__imp__sub_83C41BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25096
	ctx.r3.s64 = ctx.r11.s64 + -25096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41C04"))) PPC_WEAK_FUNC(sub_83C41C04);
PPC_FUNC_IMPL(__imp__sub_83C41C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41C08"))) PPC_WEAK_FUNC(sub_83C41C08);
PPC_FUNC_IMPL(__imp__sub_83C41C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25088
	ctx.r3.s64 = ctx.r11.s64 + -25088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41C14"))) PPC_WEAK_FUNC(sub_83C41C14);
PPC_FUNC_IMPL(__imp__sub_83C41C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41C18"))) PPC_WEAK_FUNC(sub_83C41C18);
PPC_FUNC_IMPL(__imp__sub_83C41C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25080
	ctx.r3.s64 = ctx.r11.s64 + -25080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41C24"))) PPC_WEAK_FUNC(sub_83C41C24);
PPC_FUNC_IMPL(__imp__sub_83C41C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41C28"))) PPC_WEAK_FUNC(sub_83C41C28);
PPC_FUNC_IMPL(__imp__sub_83C41C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25072
	ctx.r3.s64 = ctx.r11.s64 + -25072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41C34"))) PPC_WEAK_FUNC(sub_83C41C34);
PPC_FUNC_IMPL(__imp__sub_83C41C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41C38"))) PPC_WEAK_FUNC(sub_83C41C38);
PPC_FUNC_IMPL(__imp__sub_83C41C38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25064
	ctx.r3.s64 = ctx.r11.s64 + -25064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41C44"))) PPC_WEAK_FUNC(sub_83C41C44);
PPC_FUNC_IMPL(__imp__sub_83C41C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41C48"))) PPC_WEAK_FUNC(sub_83C41C48);
PPC_FUNC_IMPL(__imp__sub_83C41C48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25056
	ctx.r3.s64 = ctx.r11.s64 + -25056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41C54"))) PPC_WEAK_FUNC(sub_83C41C54);
PPC_FUNC_IMPL(__imp__sub_83C41C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41C58"))) PPC_WEAK_FUNC(sub_83C41C58);
PPC_FUNC_IMPL(__imp__sub_83C41C58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25048
	ctx.r3.s64 = ctx.r11.s64 + -25048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41C64"))) PPC_WEAK_FUNC(sub_83C41C64);
PPC_FUNC_IMPL(__imp__sub_83C41C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41C68"))) PPC_WEAK_FUNC(sub_83C41C68);
PPC_FUNC_IMPL(__imp__sub_83C41C68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25040
	ctx.r3.s64 = ctx.r11.s64 + -25040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41C74"))) PPC_WEAK_FUNC(sub_83C41C74);
PPC_FUNC_IMPL(__imp__sub_83C41C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41C78"))) PPC_WEAK_FUNC(sub_83C41C78);
PPC_FUNC_IMPL(__imp__sub_83C41C78) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-24128
	ctx.r7.s64 = ctx.r8.s64 + -24128;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-24128(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24128);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-24128(r8)
	PPC_STORE_U32(ctx.r8.u32 + -24128, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C41CA0"))) PPC_WEAK_FUNC(sub_83C41CA0);
PPC_FUNC_IMPL(__imp__sub_83C41CA0) {
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
	// addi r3,r11,-24132
	ctx.r3.s64 = ctx.r11.s64 + -24132;
	// bl 0x83523120
	ctx.lr = 0x83C41CB8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-25032
	ctx.r3.s64 = ctx.r10.s64 + -25032;
	// bl 0x831cdcc8
	ctx.lr = 0x83C41CC4;
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

__attribute__((alias("__imp__sub_83C41CD4"))) PPC_WEAK_FUNC(sub_83C41CD4);
PPC_FUNC_IMPL(__imp__sub_83C41CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41CD8"))) PPC_WEAK_FUNC(sub_83C41CD8);
PPC_FUNC_IMPL(__imp__sub_83C41CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-7520
	ctx.r6.s64 = ctx.r7.s64 + -7520;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-7592(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -7592);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-24128(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -24128);
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
	// std r9,-7520(r7)
	PPC_STORE_U64(ctx.r7.u32 + -7520, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C41D20"))) PPC_WEAK_FUNC(sub_83C41D20);
PPC_FUNC_IMPL(__imp__sub_83C41D20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25016
	ctx.r3.s64 = ctx.r11.s64 + -25016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41D2C"))) PPC_WEAK_FUNC(sub_83C41D2C);
PPC_FUNC_IMPL(__imp__sub_83C41D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41D30"))) PPC_WEAK_FUNC(sub_83C41D30);
PPC_FUNC_IMPL(__imp__sub_83C41D30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25008
	ctx.r3.s64 = ctx.r11.s64 + -25008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41D3C"))) PPC_WEAK_FUNC(sub_83C41D3C);
PPC_FUNC_IMPL(__imp__sub_83C41D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41D40"))) PPC_WEAK_FUNC(sub_83C41D40);
PPC_FUNC_IMPL(__imp__sub_83C41D40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-25000
	ctx.r3.s64 = ctx.r11.s64 + -25000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41D4C"))) PPC_WEAK_FUNC(sub_83C41D4C);
PPC_FUNC_IMPL(__imp__sub_83C41D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41D50"))) PPC_WEAK_FUNC(sub_83C41D50);
PPC_FUNC_IMPL(__imp__sub_83C41D50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-24992
	ctx.r3.s64 = ctx.r11.s64 + -24992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41D5C"))) PPC_WEAK_FUNC(sub_83C41D5C);
PPC_FUNC_IMPL(__imp__sub_83C41D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41D60"))) PPC_WEAK_FUNC(sub_83C41D60);
PPC_FUNC_IMPL(__imp__sub_83C41D60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-24984
	ctx.r3.s64 = ctx.r11.s64 + -24984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41D6C"))) PPC_WEAK_FUNC(sub_83C41D6C);
PPC_FUNC_IMPL(__imp__sub_83C41D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41D70"))) PPC_WEAK_FUNC(sub_83C41D70);
PPC_FUNC_IMPL(__imp__sub_83C41D70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-24976
	ctx.r3.s64 = ctx.r11.s64 + -24976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41D7C"))) PPC_WEAK_FUNC(sub_83C41D7C);
PPC_FUNC_IMPL(__imp__sub_83C41D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41D80"))) PPC_WEAK_FUNC(sub_83C41D80);
PPC_FUNC_IMPL(__imp__sub_83C41D80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-24968
	ctx.r3.s64 = ctx.r11.s64 + -24968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41D8C"))) PPC_WEAK_FUNC(sub_83C41D8C);
PPC_FUNC_IMPL(__imp__sub_83C41D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41D90"))) PPC_WEAK_FUNC(sub_83C41D90);
PPC_FUNC_IMPL(__imp__sub_83C41D90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-24960
	ctx.r3.s64 = ctx.r11.s64 + -24960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41D9C"))) PPC_WEAK_FUNC(sub_83C41D9C);
PPC_FUNC_IMPL(__imp__sub_83C41D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41DA0"))) PPC_WEAK_FUNC(sub_83C41DA0);
PPC_FUNC_IMPL(__imp__sub_83C41DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-24952
	ctx.r3.s64 = ctx.r11.s64 + -24952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41DAC"))) PPC_WEAK_FUNC(sub_83C41DAC);
PPC_FUNC_IMPL(__imp__sub_83C41DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41DB0"))) PPC_WEAK_FUNC(sub_83C41DB0);
PPC_FUNC_IMPL(__imp__sub_83C41DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-24944
	ctx.r3.s64 = ctx.r11.s64 + -24944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41DBC"))) PPC_WEAK_FUNC(sub_83C41DBC);
PPC_FUNC_IMPL(__imp__sub_83C41DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41DC0"))) PPC_WEAK_FUNC(sub_83C41DC0);
PPC_FUNC_IMPL(__imp__sub_83C41DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41DCC"))) PPC_WEAK_FUNC(sub_83C41DCC);
PPC_FUNC_IMPL(__imp__sub_83C41DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41DD0"))) PPC_WEAK_FUNC(sub_83C41DD0);
PPC_FUNC_IMPL(__imp__sub_83C41DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-24928
	ctx.r3.s64 = ctx.r11.s64 + -24928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41DDC"))) PPC_WEAK_FUNC(sub_83C41DDC);
PPC_FUNC_IMPL(__imp__sub_83C41DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41DE0"))) PPC_WEAK_FUNC(sub_83C41DE0);
PPC_FUNC_IMPL(__imp__sub_83C41DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-24104
	ctx.r7.s64 = ctx.r8.s64 + -24104;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-24104(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24104);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-24104(r8)
	PPC_STORE_U32(ctx.r8.u32 + -24104, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C41E08"))) PPC_WEAK_FUNC(sub_83C41E08);
PPC_FUNC_IMPL(__imp__sub_83C41E08) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-7396
	ctx.r6.s64 = ctx.r7.s64 + -7396;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-7468(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -7468);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-24104(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -24104);
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
	// std r9,-7396(r7)
	PPC_STORE_U64(ctx.r7.u32 + -7396, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C41E50"))) PPC_WEAK_FUNC(sub_83C41E50);
PPC_FUNC_IMPL(__imp__sub_83C41E50) {
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
	// addi r3,r11,-24120
	ctx.r3.s64 = ctx.r11.s64 + -24120;
	// bl 0x83523120
	ctx.lr = 0x83C41E68;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-24920
	ctx.r3.s64 = ctx.r10.s64 + -24920;
	// bl 0x831cdcc8
	ctx.lr = 0x83C41E74;
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

__attribute__((alias("__imp__sub_83C41E84"))) PPC_WEAK_FUNC(sub_83C41E84);
PPC_FUNC_IMPL(__imp__sub_83C41E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41E88"))) PPC_WEAK_FUNC(sub_83C41E88);
PPC_FUNC_IMPL(__imp__sub_83C41E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-24904
	ctx.r3.s64 = ctx.r11.s64 + -24904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41E94"))) PPC_WEAK_FUNC(sub_83C41E94);
PPC_FUNC_IMPL(__imp__sub_83C41E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41E98"))) PPC_WEAK_FUNC(sub_83C41E98);
PPC_FUNC_IMPL(__imp__sub_83C41E98) {
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
	// addi r3,r11,-24096
	ctx.r3.s64 = ctx.r11.s64 + -24096;
	// bl 0x8259af80
	ctx.lr = 0x83C41EB0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-24888
	ctx.r3.s64 = ctx.r10.s64 + -24888;
	// bl 0x831cdcc8
	ctx.lr = 0x83C41EBC;
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

__attribute__((alias("__imp__sub_83C41ECC"))) PPC_WEAK_FUNC(sub_83C41ECC);
PPC_FUNC_IMPL(__imp__sub_83C41ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41ED0"))) PPC_WEAK_FUNC(sub_83C41ED0);
PPC_FUNC_IMPL(__imp__sub_83C41ED0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-24116
	ctx.r11.s64 = ctx.r8.s64 + -24116;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-7420(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7420);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-24896
	ctx.r3.s64 = ctx.r6.s64 + -24896;
	// stw r10,-24116(r8)
	PPC_STORE_U32(ctx.r8.u32 + -24116, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41F00"))) PPC_WEAK_FUNC(sub_83C41F00);
PPC_FUNC_IMPL(__imp__sub_83C41F00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-24880
	ctx.r3.s64 = ctx.r11.s64 + -24880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41F0C"))) PPC_WEAK_FUNC(sub_83C41F0C);
PPC_FUNC_IMPL(__imp__sub_83C41F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41F10"))) PPC_WEAK_FUNC(sub_83C41F10);
PPC_FUNC_IMPL(__imp__sub_83C41F10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-24872
	ctx.r3.s64 = ctx.r11.s64 + -24872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41F1C"))) PPC_WEAK_FUNC(sub_83C41F1C);
PPC_FUNC_IMPL(__imp__sub_83C41F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41F20"))) PPC_WEAK_FUNC(sub_83C41F20);
PPC_FUNC_IMPL(__imp__sub_83C41F20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-24864
	ctx.r3.s64 = ctx.r11.s64 + -24864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41F2C"))) PPC_WEAK_FUNC(sub_83C41F2C);
PPC_FUNC_IMPL(__imp__sub_83C41F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41F30"))) PPC_WEAK_FUNC(sub_83C41F30);
PPC_FUNC_IMPL(__imp__sub_83C41F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-24856
	ctx.r3.s64 = ctx.r11.s64 + -24856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41F3C"))) PPC_WEAK_FUNC(sub_83C41F3C);
PPC_FUNC_IMPL(__imp__sub_83C41F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41F40"))) PPC_WEAK_FUNC(sub_83C41F40);
PPC_FUNC_IMPL(__imp__sub_83C41F40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-24848
	ctx.r3.s64 = ctx.r11.s64 + -24848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41F4C"))) PPC_WEAK_FUNC(sub_83C41F4C);
PPC_FUNC_IMPL(__imp__sub_83C41F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41F50"))) PPC_WEAK_FUNC(sub_83C41F50);
PPC_FUNC_IMPL(__imp__sub_83C41F50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-24840
	ctx.r3.s64 = ctx.r11.s64 + -24840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41F5C"))) PPC_WEAK_FUNC(sub_83C41F5C);
PPC_FUNC_IMPL(__imp__sub_83C41F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41F60"))) PPC_WEAK_FUNC(sub_83C41F60);
PPC_FUNC_IMPL(__imp__sub_83C41F60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-24832
	ctx.r3.s64 = ctx.r11.s64 + -24832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41F6C"))) PPC_WEAK_FUNC(sub_83C41F6C);
PPC_FUNC_IMPL(__imp__sub_83C41F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41F70"))) PPC_WEAK_FUNC(sub_83C41F70);
PPC_FUNC_IMPL(__imp__sub_83C41F70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-24824
	ctx.r3.s64 = ctx.r11.s64 + -24824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41F7C"))) PPC_WEAK_FUNC(sub_83C41F7C);
PPC_FUNC_IMPL(__imp__sub_83C41F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41F80"))) PPC_WEAK_FUNC(sub_83C41F80);
PPC_FUNC_IMPL(__imp__sub_83C41F80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-24816
	ctx.r3.s64 = ctx.r11.s64 + -24816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41F8C"))) PPC_WEAK_FUNC(sub_83C41F8C);
PPC_FUNC_IMPL(__imp__sub_83C41F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41F90"))) PPC_WEAK_FUNC(sub_83C41F90);
PPC_FUNC_IMPL(__imp__sub_83C41F90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-24808
	ctx.r3.s64 = ctx.r11.s64 + -24808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41F9C"))) PPC_WEAK_FUNC(sub_83C41F9C);
PPC_FUNC_IMPL(__imp__sub_83C41F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41FA0"))) PPC_WEAK_FUNC(sub_83C41FA0);
PPC_FUNC_IMPL(__imp__sub_83C41FA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-24800
	ctx.r3.s64 = ctx.r11.s64 + -24800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41FAC"))) PPC_WEAK_FUNC(sub_83C41FAC);
PPC_FUNC_IMPL(__imp__sub_83C41FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41FB0"))) PPC_WEAK_FUNC(sub_83C41FB0);
PPC_FUNC_IMPL(__imp__sub_83C41FB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-24792
	ctx.r3.s64 = ctx.r11.s64 + -24792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C41FBC"))) PPC_WEAK_FUNC(sub_83C41FBC);
PPC_FUNC_IMPL(__imp__sub_83C41FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41FC0"))) PPC_WEAK_FUNC(sub_83C41FC0);
PPC_FUNC_IMPL(__imp__sub_83C41FC0) {
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
	// addi r3,r11,-23752
	ctx.r3.s64 = ctx.r11.s64 + -23752;
	// bl 0x83523120
	ctx.lr = 0x83C41FD8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-24784
	ctx.r3.s64 = ctx.r10.s64 + -24784;
	// bl 0x831cdcc8
	ctx.lr = 0x83C41FE4;
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

__attribute__((alias("__imp__sub_83C41FF4"))) PPC_WEAK_FUNC(sub_83C41FF4);
PPC_FUNC_IMPL(__imp__sub_83C41FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C41FF8"))) PPC_WEAK_FUNC(sub_83C41FF8);
PPC_FUNC_IMPL(__imp__sub_83C41FF8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-23736
	ctx.r7.s64 = ctx.r8.s64 + -23736;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-23736(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23736);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-23736(r8)
	PPC_STORE_U32(ctx.r8.u32 + -23736, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C42020"))) PPC_WEAK_FUNC(sub_83C42020);
PPC_FUNC_IMPL(__imp__sub_83C42020) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-7264
	ctx.r6.s64 = ctx.r7.s64 + -7264;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-7336(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -7336);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-23736(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -23736);
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
	// std r9,-7264(r7)
	PPC_STORE_U64(ctx.r7.u32 + -7264, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C42068"))) PPC_WEAK_FUNC(sub_83C42068);
PPC_FUNC_IMPL(__imp__sub_83C42068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-24768
	ctx.r3.s64 = ctx.r11.s64 + -24768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C42074"))) PPC_WEAK_FUNC(sub_83C42074);
PPC_FUNC_IMPL(__imp__sub_83C42074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C42078"))) PPC_WEAK_FUNC(sub_83C42078);
PPC_FUNC_IMPL(__imp__sub_83C42078) {
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
	// addi r3,r11,-23728
	ctx.r3.s64 = ctx.r11.s64 + -23728;
	// bl 0x8259af80
	ctx.lr = 0x83C42090;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-24752
	ctx.r3.s64 = ctx.r10.s64 + -24752;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4209C;
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

__attribute__((alias("__imp__sub_83C420AC"))) PPC_WEAK_FUNC(sub_83C420AC);
PPC_FUNC_IMPL(__imp__sub_83C420AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C420B0"))) PPC_WEAK_FUNC(sub_83C420B0);
PPC_FUNC_IMPL(__imp__sub_83C420B0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-23748
	ctx.r11.s64 = ctx.r8.s64 + -23748;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-7288(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7288);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-24760
	ctx.r3.s64 = ctx.r6.s64 + -24760;
	// stw r10,-23748(r8)
	PPC_STORE_U32(ctx.r8.u32 + -23748, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C420E0"))) PPC_WEAK_FUNC(sub_83C420E0);
PPC_FUNC_IMPL(__imp__sub_83C420E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-24744
	ctx.r3.s64 = ctx.r11.s64 + -24744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

