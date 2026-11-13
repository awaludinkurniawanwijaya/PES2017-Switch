#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C774C0"))) PPC_WEAK_FUNC(sub_83C774C0);
PPC_FUNC_IMPL(__imp__sub_83C774C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22984
	ctx.r3.s64 = ctx.r11.s64 + -22984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C774CC"))) PPC_WEAK_FUNC(sub_83C774CC);
PPC_FUNC_IMPL(__imp__sub_83C774CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C774D0"))) PPC_WEAK_FUNC(sub_83C774D0);
PPC_FUNC_IMPL(__imp__sub_83C774D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22976
	ctx.r3.s64 = ctx.r11.s64 + -22976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C774DC"))) PPC_WEAK_FUNC(sub_83C774DC);
PPC_FUNC_IMPL(__imp__sub_83C774DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C774E0"))) PPC_WEAK_FUNC(sub_83C774E0);
PPC_FUNC_IMPL(__imp__sub_83C774E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22968
	ctx.r3.s64 = ctx.r11.s64 + -22968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C774EC"))) PPC_WEAK_FUNC(sub_83C774EC);
PPC_FUNC_IMPL(__imp__sub_83C774EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C774F0"))) PPC_WEAK_FUNC(sub_83C774F0);
PPC_FUNC_IMPL(__imp__sub_83C774F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22960
	ctx.r3.s64 = ctx.r11.s64 + -22960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C774FC"))) PPC_WEAK_FUNC(sub_83C774FC);
PPC_FUNC_IMPL(__imp__sub_83C774FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77500"))) PPC_WEAK_FUNC(sub_83C77500);
PPC_FUNC_IMPL(__imp__sub_83C77500) {
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
	// addi r3,r11,968
	ctx.r3.s64 = ctx.r11.s64 + 968;
	// bl 0x83523120
	ctx.lr = 0x83C77518;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-22952
	ctx.r3.s64 = ctx.r10.s64 + -22952;
	// bl 0x831cdcc8
	ctx.lr = 0x83C77524;
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

__attribute__((alias("__imp__sub_83C77534"))) PPC_WEAK_FUNC(sub_83C77534);
PPC_FUNC_IMPL(__imp__sub_83C77534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77538"))) PPC_WEAK_FUNC(sub_83C77538);
PPC_FUNC_IMPL(__imp__sub_83C77538) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,984
	ctx.r7.s64 = ctx.r8.s64 + 984;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,984(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 984);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,984(r8)
	PPC_STORE_U32(ctx.r8.u32 + 984, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C77560"))) PPC_WEAK_FUNC(sub_83C77560);
PPC_FUNC_IMPL(__imp__sub_83C77560) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-10008
	ctx.r6.s64 = ctx.r7.s64 + -10008;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-10080(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -10080);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,984(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 984);
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
	// std r9,-10008(r7)
	PPC_STORE_U64(ctx.r7.u32 + -10008, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C775A8"))) PPC_WEAK_FUNC(sub_83C775A8);
PPC_FUNC_IMPL(__imp__sub_83C775A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22936
	ctx.r3.s64 = ctx.r11.s64 + -22936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C775B4"))) PPC_WEAK_FUNC(sub_83C775B4);
PPC_FUNC_IMPL(__imp__sub_83C775B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C775B8"))) PPC_WEAK_FUNC(sub_83C775B8);
PPC_FUNC_IMPL(__imp__sub_83C775B8) {
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
	// addi r3,r11,992
	ctx.r3.s64 = ctx.r11.s64 + 992;
	// bl 0x8259af80
	ctx.lr = 0x83C775D0;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-22920
	ctx.r3.s64 = ctx.r10.s64 + -22920;
	// bl 0x831cdcc8
	ctx.lr = 0x83C775DC;
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

__attribute__((alias("__imp__sub_83C775EC"))) PPC_WEAK_FUNC(sub_83C775EC);
PPC_FUNC_IMPL(__imp__sub_83C775EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C775F0"))) PPC_WEAK_FUNC(sub_83C775F0);
PPC_FUNC_IMPL(__imp__sub_83C775F0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,972
	ctx.r11.s64 = ctx.r8.s64 + 972;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-10032(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10032);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-22928
	ctx.r3.s64 = ctx.r6.s64 + -22928;
	// stw r10,972(r8)
	PPC_STORE_U32(ctx.r8.u32 + 972, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77620"))) PPC_WEAK_FUNC(sub_83C77620);
PPC_FUNC_IMPL(__imp__sub_83C77620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22912
	ctx.r3.s64 = ctx.r11.s64 + -22912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7762C"))) PPC_WEAK_FUNC(sub_83C7762C);
PPC_FUNC_IMPL(__imp__sub_83C7762C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77630"))) PPC_WEAK_FUNC(sub_83C77630);
PPC_FUNC_IMPL(__imp__sub_83C77630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22904
	ctx.r3.s64 = ctx.r11.s64 + -22904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7763C"))) PPC_WEAK_FUNC(sub_83C7763C);
PPC_FUNC_IMPL(__imp__sub_83C7763C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77640"))) PPC_WEAK_FUNC(sub_83C77640);
PPC_FUNC_IMPL(__imp__sub_83C77640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22896
	ctx.r3.s64 = ctx.r11.s64 + -22896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7764C"))) PPC_WEAK_FUNC(sub_83C7764C);
PPC_FUNC_IMPL(__imp__sub_83C7764C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77650"))) PPC_WEAK_FUNC(sub_83C77650);
PPC_FUNC_IMPL(__imp__sub_83C77650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22888
	ctx.r3.s64 = ctx.r11.s64 + -22888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7765C"))) PPC_WEAK_FUNC(sub_83C7765C);
PPC_FUNC_IMPL(__imp__sub_83C7765C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77660"))) PPC_WEAK_FUNC(sub_83C77660);
PPC_FUNC_IMPL(__imp__sub_83C77660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22880
	ctx.r3.s64 = ctx.r11.s64 + -22880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7766C"))) PPC_WEAK_FUNC(sub_83C7766C);
PPC_FUNC_IMPL(__imp__sub_83C7766C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77670"))) PPC_WEAK_FUNC(sub_83C77670);
PPC_FUNC_IMPL(__imp__sub_83C77670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22872
	ctx.r3.s64 = ctx.r11.s64 + -22872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7767C"))) PPC_WEAK_FUNC(sub_83C7767C);
PPC_FUNC_IMPL(__imp__sub_83C7767C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77680"))) PPC_WEAK_FUNC(sub_83C77680);
PPC_FUNC_IMPL(__imp__sub_83C77680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22864
	ctx.r3.s64 = ctx.r11.s64 + -22864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7768C"))) PPC_WEAK_FUNC(sub_83C7768C);
PPC_FUNC_IMPL(__imp__sub_83C7768C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77690"))) PPC_WEAK_FUNC(sub_83C77690);
PPC_FUNC_IMPL(__imp__sub_83C77690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22856
	ctx.r3.s64 = ctx.r11.s64 + -22856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7769C"))) PPC_WEAK_FUNC(sub_83C7769C);
PPC_FUNC_IMPL(__imp__sub_83C7769C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C776A0"))) PPC_WEAK_FUNC(sub_83C776A0);
PPC_FUNC_IMPL(__imp__sub_83C776A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22848
	ctx.r3.s64 = ctx.r11.s64 + -22848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C776AC"))) PPC_WEAK_FUNC(sub_83C776AC);
PPC_FUNC_IMPL(__imp__sub_83C776AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C776B0"))) PPC_WEAK_FUNC(sub_83C776B0);
PPC_FUNC_IMPL(__imp__sub_83C776B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22840
	ctx.r3.s64 = ctx.r11.s64 + -22840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C776BC"))) PPC_WEAK_FUNC(sub_83C776BC);
PPC_FUNC_IMPL(__imp__sub_83C776BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C776C0"))) PPC_WEAK_FUNC(sub_83C776C0);
PPC_FUNC_IMPL(__imp__sub_83C776C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22832
	ctx.r3.s64 = ctx.r11.s64 + -22832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C776CC"))) PPC_WEAK_FUNC(sub_83C776CC);
PPC_FUNC_IMPL(__imp__sub_83C776CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C776D0"))) PPC_WEAK_FUNC(sub_83C776D0);
PPC_FUNC_IMPL(__imp__sub_83C776D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22824
	ctx.r3.s64 = ctx.r11.s64 + -22824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C776DC"))) PPC_WEAK_FUNC(sub_83C776DC);
PPC_FUNC_IMPL(__imp__sub_83C776DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C776E0"))) PPC_WEAK_FUNC(sub_83C776E0);
PPC_FUNC_IMPL(__imp__sub_83C776E0) {
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
	// addi r3,r11,1336
	ctx.r3.s64 = ctx.r11.s64 + 1336;
	// bl 0x83523120
	ctx.lr = 0x83C776F8;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-22816
	ctx.r3.s64 = ctx.r10.s64 + -22816;
	// bl 0x831cdcc8
	ctx.lr = 0x83C77704;
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

__attribute__((alias("__imp__sub_83C77714"))) PPC_WEAK_FUNC(sub_83C77714);
PPC_FUNC_IMPL(__imp__sub_83C77714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77718"))) PPC_WEAK_FUNC(sub_83C77718);
PPC_FUNC_IMPL(__imp__sub_83C77718) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,1352
	ctx.r7.s64 = ctx.r8.s64 + 1352;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,1352(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1352);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,1352(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1352, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C77740"))) PPC_WEAK_FUNC(sub_83C77740);
PPC_FUNC_IMPL(__imp__sub_83C77740) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-9880
	ctx.r6.s64 = ctx.r7.s64 + -9880;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-9952(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -9952);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,1352(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1352);
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
	// std r9,-9880(r7)
	PPC_STORE_U64(ctx.r7.u32 + -9880, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C77788"))) PPC_WEAK_FUNC(sub_83C77788);
PPC_FUNC_IMPL(__imp__sub_83C77788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22800
	ctx.r3.s64 = ctx.r11.s64 + -22800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77794"))) PPC_WEAK_FUNC(sub_83C77794);
PPC_FUNC_IMPL(__imp__sub_83C77794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77798"))) PPC_WEAK_FUNC(sub_83C77798);
PPC_FUNC_IMPL(__imp__sub_83C77798) {
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
	// addi r3,r11,1360
	ctx.r3.s64 = ctx.r11.s64 + 1360;
	// bl 0x8259af80
	ctx.lr = 0x83C777B0;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-22784
	ctx.r3.s64 = ctx.r10.s64 + -22784;
	// bl 0x831cdcc8
	ctx.lr = 0x83C777BC;
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

__attribute__((alias("__imp__sub_83C777CC"))) PPC_WEAK_FUNC(sub_83C777CC);
PPC_FUNC_IMPL(__imp__sub_83C777CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C777D0"))) PPC_WEAK_FUNC(sub_83C777D0);
PPC_FUNC_IMPL(__imp__sub_83C777D0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,1340
	ctx.r11.s64 = ctx.r8.s64 + 1340;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-9904(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9904);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-22792
	ctx.r3.s64 = ctx.r6.s64 + -22792;
	// stw r10,1340(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1340, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77800"))) PPC_WEAK_FUNC(sub_83C77800);
PPC_FUNC_IMPL(__imp__sub_83C77800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22776
	ctx.r3.s64 = ctx.r11.s64 + -22776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7780C"))) PPC_WEAK_FUNC(sub_83C7780C);
PPC_FUNC_IMPL(__imp__sub_83C7780C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77810"))) PPC_WEAK_FUNC(sub_83C77810);
PPC_FUNC_IMPL(__imp__sub_83C77810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22768
	ctx.r3.s64 = ctx.r11.s64 + -22768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7781C"))) PPC_WEAK_FUNC(sub_83C7781C);
PPC_FUNC_IMPL(__imp__sub_83C7781C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77820"))) PPC_WEAK_FUNC(sub_83C77820);
PPC_FUNC_IMPL(__imp__sub_83C77820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22760
	ctx.r3.s64 = ctx.r11.s64 + -22760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7782C"))) PPC_WEAK_FUNC(sub_83C7782C);
PPC_FUNC_IMPL(__imp__sub_83C7782C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77830"))) PPC_WEAK_FUNC(sub_83C77830);
PPC_FUNC_IMPL(__imp__sub_83C77830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22752
	ctx.r3.s64 = ctx.r11.s64 + -22752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7783C"))) PPC_WEAK_FUNC(sub_83C7783C);
PPC_FUNC_IMPL(__imp__sub_83C7783C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77840"))) PPC_WEAK_FUNC(sub_83C77840);
PPC_FUNC_IMPL(__imp__sub_83C77840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22744
	ctx.r3.s64 = ctx.r11.s64 + -22744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7784C"))) PPC_WEAK_FUNC(sub_83C7784C);
PPC_FUNC_IMPL(__imp__sub_83C7784C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77850"))) PPC_WEAK_FUNC(sub_83C77850);
PPC_FUNC_IMPL(__imp__sub_83C77850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22736
	ctx.r3.s64 = ctx.r11.s64 + -22736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7785C"))) PPC_WEAK_FUNC(sub_83C7785C);
PPC_FUNC_IMPL(__imp__sub_83C7785C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77860"))) PPC_WEAK_FUNC(sub_83C77860);
PPC_FUNC_IMPL(__imp__sub_83C77860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22728
	ctx.r3.s64 = ctx.r11.s64 + -22728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7786C"))) PPC_WEAK_FUNC(sub_83C7786C);
PPC_FUNC_IMPL(__imp__sub_83C7786C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77870"))) PPC_WEAK_FUNC(sub_83C77870);
PPC_FUNC_IMPL(__imp__sub_83C77870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22720
	ctx.r3.s64 = ctx.r11.s64 + -22720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7787C"))) PPC_WEAK_FUNC(sub_83C7787C);
PPC_FUNC_IMPL(__imp__sub_83C7787C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77880"))) PPC_WEAK_FUNC(sub_83C77880);
PPC_FUNC_IMPL(__imp__sub_83C77880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22712
	ctx.r3.s64 = ctx.r11.s64 + -22712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7788C"))) PPC_WEAK_FUNC(sub_83C7788C);
PPC_FUNC_IMPL(__imp__sub_83C7788C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77890"))) PPC_WEAK_FUNC(sub_83C77890);
PPC_FUNC_IMPL(__imp__sub_83C77890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22704
	ctx.r3.s64 = ctx.r11.s64 + -22704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7789C"))) PPC_WEAK_FUNC(sub_83C7789C);
PPC_FUNC_IMPL(__imp__sub_83C7789C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C778A0"))) PPC_WEAK_FUNC(sub_83C778A0);
PPC_FUNC_IMPL(__imp__sub_83C778A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22696
	ctx.r3.s64 = ctx.r11.s64 + -22696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C778AC"))) PPC_WEAK_FUNC(sub_83C778AC);
PPC_FUNC_IMPL(__imp__sub_83C778AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C778B0"))) PPC_WEAK_FUNC(sub_83C778B0);
PPC_FUNC_IMPL(__imp__sub_83C778B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22688
	ctx.r3.s64 = ctx.r11.s64 + -22688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C778BC"))) PPC_WEAK_FUNC(sub_83C778BC);
PPC_FUNC_IMPL(__imp__sub_83C778BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C778C0"))) PPC_WEAK_FUNC(sub_83C778C0);
PPC_FUNC_IMPL(__imp__sub_83C778C0) {
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
	// addi r3,r11,1704
	ctx.r3.s64 = ctx.r11.s64 + 1704;
	// bl 0x83523120
	ctx.lr = 0x83C778D8;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-22680
	ctx.r3.s64 = ctx.r10.s64 + -22680;
	// bl 0x831cdcc8
	ctx.lr = 0x83C778E4;
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

__attribute__((alias("__imp__sub_83C778F4"))) PPC_WEAK_FUNC(sub_83C778F4);
PPC_FUNC_IMPL(__imp__sub_83C778F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C778F8"))) PPC_WEAK_FUNC(sub_83C778F8);
PPC_FUNC_IMPL(__imp__sub_83C778F8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,1720
	ctx.r7.s64 = ctx.r8.s64 + 1720;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,1720(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1720);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,1720(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1720, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C77920"))) PPC_WEAK_FUNC(sub_83C77920);
PPC_FUNC_IMPL(__imp__sub_83C77920) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-9752
	ctx.r6.s64 = ctx.r7.s64 + -9752;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-9824(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -9824);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,1720(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1720);
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
	// std r9,-9752(r7)
	PPC_STORE_U64(ctx.r7.u32 + -9752, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C77968"))) PPC_WEAK_FUNC(sub_83C77968);
PPC_FUNC_IMPL(__imp__sub_83C77968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22664
	ctx.r3.s64 = ctx.r11.s64 + -22664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77974"))) PPC_WEAK_FUNC(sub_83C77974);
PPC_FUNC_IMPL(__imp__sub_83C77974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77978"))) PPC_WEAK_FUNC(sub_83C77978);
PPC_FUNC_IMPL(__imp__sub_83C77978) {
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
	// addi r3,r11,1728
	ctx.r3.s64 = ctx.r11.s64 + 1728;
	// bl 0x8259af80
	ctx.lr = 0x83C77990;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-22648
	ctx.r3.s64 = ctx.r10.s64 + -22648;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7799C;
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

__attribute__((alias("__imp__sub_83C779AC"))) PPC_WEAK_FUNC(sub_83C779AC);
PPC_FUNC_IMPL(__imp__sub_83C779AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C779B0"))) PPC_WEAK_FUNC(sub_83C779B0);
PPC_FUNC_IMPL(__imp__sub_83C779B0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,1708
	ctx.r11.s64 = ctx.r8.s64 + 1708;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-9776(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9776);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-22656
	ctx.r3.s64 = ctx.r6.s64 + -22656;
	// stw r10,1708(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1708, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C779E0"))) PPC_WEAK_FUNC(sub_83C779E0);
PPC_FUNC_IMPL(__imp__sub_83C779E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22640
	ctx.r3.s64 = ctx.r11.s64 + -22640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C779EC"))) PPC_WEAK_FUNC(sub_83C779EC);
PPC_FUNC_IMPL(__imp__sub_83C779EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C779F0"))) PPC_WEAK_FUNC(sub_83C779F0);
PPC_FUNC_IMPL(__imp__sub_83C779F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22632
	ctx.r3.s64 = ctx.r11.s64 + -22632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C779FC"))) PPC_WEAK_FUNC(sub_83C779FC);
PPC_FUNC_IMPL(__imp__sub_83C779FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77A00"))) PPC_WEAK_FUNC(sub_83C77A00);
PPC_FUNC_IMPL(__imp__sub_83C77A00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22624
	ctx.r3.s64 = ctx.r11.s64 + -22624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77A0C"))) PPC_WEAK_FUNC(sub_83C77A0C);
PPC_FUNC_IMPL(__imp__sub_83C77A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77A10"))) PPC_WEAK_FUNC(sub_83C77A10);
PPC_FUNC_IMPL(__imp__sub_83C77A10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22616
	ctx.r3.s64 = ctx.r11.s64 + -22616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77A1C"))) PPC_WEAK_FUNC(sub_83C77A1C);
PPC_FUNC_IMPL(__imp__sub_83C77A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77A20"))) PPC_WEAK_FUNC(sub_83C77A20);
PPC_FUNC_IMPL(__imp__sub_83C77A20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22608
	ctx.r3.s64 = ctx.r11.s64 + -22608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77A2C"))) PPC_WEAK_FUNC(sub_83C77A2C);
PPC_FUNC_IMPL(__imp__sub_83C77A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77A30"))) PPC_WEAK_FUNC(sub_83C77A30);
PPC_FUNC_IMPL(__imp__sub_83C77A30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22600
	ctx.r3.s64 = ctx.r11.s64 + -22600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77A3C"))) PPC_WEAK_FUNC(sub_83C77A3C);
PPC_FUNC_IMPL(__imp__sub_83C77A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77A40"))) PPC_WEAK_FUNC(sub_83C77A40);
PPC_FUNC_IMPL(__imp__sub_83C77A40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22592
	ctx.r3.s64 = ctx.r11.s64 + -22592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77A4C"))) PPC_WEAK_FUNC(sub_83C77A4C);
PPC_FUNC_IMPL(__imp__sub_83C77A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77A50"))) PPC_WEAK_FUNC(sub_83C77A50);
PPC_FUNC_IMPL(__imp__sub_83C77A50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22584
	ctx.r3.s64 = ctx.r11.s64 + -22584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77A5C"))) PPC_WEAK_FUNC(sub_83C77A5C);
PPC_FUNC_IMPL(__imp__sub_83C77A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77A60"))) PPC_WEAK_FUNC(sub_83C77A60);
PPC_FUNC_IMPL(__imp__sub_83C77A60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22576
	ctx.r3.s64 = ctx.r11.s64 + -22576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77A6C"))) PPC_WEAK_FUNC(sub_83C77A6C);
PPC_FUNC_IMPL(__imp__sub_83C77A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77A70"))) PPC_WEAK_FUNC(sub_83C77A70);
PPC_FUNC_IMPL(__imp__sub_83C77A70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22568
	ctx.r3.s64 = ctx.r11.s64 + -22568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77A7C"))) PPC_WEAK_FUNC(sub_83C77A7C);
PPC_FUNC_IMPL(__imp__sub_83C77A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77A80"))) PPC_WEAK_FUNC(sub_83C77A80);
PPC_FUNC_IMPL(__imp__sub_83C77A80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22560
	ctx.r3.s64 = ctx.r11.s64 + -22560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77A8C"))) PPC_WEAK_FUNC(sub_83C77A8C);
PPC_FUNC_IMPL(__imp__sub_83C77A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77A90"))) PPC_WEAK_FUNC(sub_83C77A90);
PPC_FUNC_IMPL(__imp__sub_83C77A90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22552
	ctx.r3.s64 = ctx.r11.s64 + -22552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77A9C"))) PPC_WEAK_FUNC(sub_83C77A9C);
PPC_FUNC_IMPL(__imp__sub_83C77A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77AA0"))) PPC_WEAK_FUNC(sub_83C77AA0);
PPC_FUNC_IMPL(__imp__sub_83C77AA0) {
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
	// addi r3,r11,2072
	ctx.r3.s64 = ctx.r11.s64 + 2072;
	// bl 0x83523120
	ctx.lr = 0x83C77AB8;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-22544
	ctx.r3.s64 = ctx.r10.s64 + -22544;
	// bl 0x831cdcc8
	ctx.lr = 0x83C77AC4;
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

__attribute__((alias("__imp__sub_83C77AD4"))) PPC_WEAK_FUNC(sub_83C77AD4);
PPC_FUNC_IMPL(__imp__sub_83C77AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77AD8"))) PPC_WEAK_FUNC(sub_83C77AD8);
PPC_FUNC_IMPL(__imp__sub_83C77AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,2076
	ctx.r7.s64 = ctx.r8.s64 + 2076;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,2076(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2076);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,2076(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2076, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C77B00"))) PPC_WEAK_FUNC(sub_83C77B00);
PPC_FUNC_IMPL(__imp__sub_83C77B00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22528
	ctx.r3.s64 = ctx.r11.s64 + -22528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77B0C"))) PPC_WEAK_FUNC(sub_83C77B0C);
PPC_FUNC_IMPL(__imp__sub_83C77B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77B10"))) PPC_WEAK_FUNC(sub_83C77B10);
PPC_FUNC_IMPL(__imp__sub_83C77B10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22520
	ctx.r3.s64 = ctx.r11.s64 + -22520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77B1C"))) PPC_WEAK_FUNC(sub_83C77B1C);
PPC_FUNC_IMPL(__imp__sub_83C77B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77B20"))) PPC_WEAK_FUNC(sub_83C77B20);
PPC_FUNC_IMPL(__imp__sub_83C77B20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22512
	ctx.r3.s64 = ctx.r11.s64 + -22512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77B2C"))) PPC_WEAK_FUNC(sub_83C77B2C);
PPC_FUNC_IMPL(__imp__sub_83C77B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77B30"))) PPC_WEAK_FUNC(sub_83C77B30);
PPC_FUNC_IMPL(__imp__sub_83C77B30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22504
	ctx.r3.s64 = ctx.r11.s64 + -22504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77B3C"))) PPC_WEAK_FUNC(sub_83C77B3C);
PPC_FUNC_IMPL(__imp__sub_83C77B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77B40"))) PPC_WEAK_FUNC(sub_83C77B40);
PPC_FUNC_IMPL(__imp__sub_83C77B40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22496
	ctx.r3.s64 = ctx.r11.s64 + -22496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77B4C"))) PPC_WEAK_FUNC(sub_83C77B4C);
PPC_FUNC_IMPL(__imp__sub_83C77B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77B50"))) PPC_WEAK_FUNC(sub_83C77B50);
PPC_FUNC_IMPL(__imp__sub_83C77B50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22488
	ctx.r3.s64 = ctx.r11.s64 + -22488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77B5C"))) PPC_WEAK_FUNC(sub_83C77B5C);
PPC_FUNC_IMPL(__imp__sub_83C77B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77B60"))) PPC_WEAK_FUNC(sub_83C77B60);
PPC_FUNC_IMPL(__imp__sub_83C77B60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22480
	ctx.r3.s64 = ctx.r11.s64 + -22480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77B6C"))) PPC_WEAK_FUNC(sub_83C77B6C);
PPC_FUNC_IMPL(__imp__sub_83C77B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77B70"))) PPC_WEAK_FUNC(sub_83C77B70);
PPC_FUNC_IMPL(__imp__sub_83C77B70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22472
	ctx.r3.s64 = ctx.r11.s64 + -22472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77B7C"))) PPC_WEAK_FUNC(sub_83C77B7C);
PPC_FUNC_IMPL(__imp__sub_83C77B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77B80"))) PPC_WEAK_FUNC(sub_83C77B80);
PPC_FUNC_IMPL(__imp__sub_83C77B80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22464
	ctx.r3.s64 = ctx.r11.s64 + -22464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77B8C"))) PPC_WEAK_FUNC(sub_83C77B8C);
PPC_FUNC_IMPL(__imp__sub_83C77B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77B90"))) PPC_WEAK_FUNC(sub_83C77B90);
PPC_FUNC_IMPL(__imp__sub_83C77B90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22456
	ctx.r3.s64 = ctx.r11.s64 + -22456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77B9C"))) PPC_WEAK_FUNC(sub_83C77B9C);
PPC_FUNC_IMPL(__imp__sub_83C77B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77BA0"))) PPC_WEAK_FUNC(sub_83C77BA0);
PPC_FUNC_IMPL(__imp__sub_83C77BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22448
	ctx.r3.s64 = ctx.r11.s64 + -22448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77BAC"))) PPC_WEAK_FUNC(sub_83C77BAC);
PPC_FUNC_IMPL(__imp__sub_83C77BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77BB0"))) PPC_WEAK_FUNC(sub_83C77BB0);
PPC_FUNC_IMPL(__imp__sub_83C77BB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22440
	ctx.r3.s64 = ctx.r11.s64 + -22440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77BBC"))) PPC_WEAK_FUNC(sub_83C77BBC);
PPC_FUNC_IMPL(__imp__sub_83C77BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77BC0"))) PPC_WEAK_FUNC(sub_83C77BC0);
PPC_FUNC_IMPL(__imp__sub_83C77BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22432
	ctx.r3.s64 = ctx.r11.s64 + -22432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77BCC"))) PPC_WEAK_FUNC(sub_83C77BCC);
PPC_FUNC_IMPL(__imp__sub_83C77BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77BD0"))) PPC_WEAK_FUNC(sub_83C77BD0);
PPC_FUNC_IMPL(__imp__sub_83C77BD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22424
	ctx.r3.s64 = ctx.r11.s64 + -22424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77BDC"))) PPC_WEAK_FUNC(sub_83C77BDC);
PPC_FUNC_IMPL(__imp__sub_83C77BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77BE0"))) PPC_WEAK_FUNC(sub_83C77BE0);
PPC_FUNC_IMPL(__imp__sub_83C77BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22416
	ctx.r3.s64 = ctx.r11.s64 + -22416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77BEC"))) PPC_WEAK_FUNC(sub_83C77BEC);
PPC_FUNC_IMPL(__imp__sub_83C77BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77BF0"))) PPC_WEAK_FUNC(sub_83C77BF0);
PPC_FUNC_IMPL(__imp__sub_83C77BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22408
	ctx.r3.s64 = ctx.r11.s64 + -22408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77BFC"))) PPC_WEAK_FUNC(sub_83C77BFC);
PPC_FUNC_IMPL(__imp__sub_83C77BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77C00"))) PPC_WEAK_FUNC(sub_83C77C00);
PPC_FUNC_IMPL(__imp__sub_83C77C00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22400
	ctx.r3.s64 = ctx.r11.s64 + -22400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77C0C"))) PPC_WEAK_FUNC(sub_83C77C0C);
PPC_FUNC_IMPL(__imp__sub_83C77C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77C10"))) PPC_WEAK_FUNC(sub_83C77C10);
PPC_FUNC_IMPL(__imp__sub_83C77C10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22392
	ctx.r3.s64 = ctx.r11.s64 + -22392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77C1C"))) PPC_WEAK_FUNC(sub_83C77C1C);
PPC_FUNC_IMPL(__imp__sub_83C77C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77C20"))) PPC_WEAK_FUNC(sub_83C77C20);
PPC_FUNC_IMPL(__imp__sub_83C77C20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22384
	ctx.r3.s64 = ctx.r11.s64 + -22384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77C2C"))) PPC_WEAK_FUNC(sub_83C77C2C);
PPC_FUNC_IMPL(__imp__sub_83C77C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77C30"))) PPC_WEAK_FUNC(sub_83C77C30);
PPC_FUNC_IMPL(__imp__sub_83C77C30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22376
	ctx.r3.s64 = ctx.r11.s64 + -22376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77C3C"))) PPC_WEAK_FUNC(sub_83C77C3C);
PPC_FUNC_IMPL(__imp__sub_83C77C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77C40"))) PPC_WEAK_FUNC(sub_83C77C40);
PPC_FUNC_IMPL(__imp__sub_83C77C40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22368
	ctx.r3.s64 = ctx.r11.s64 + -22368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77C4C"))) PPC_WEAK_FUNC(sub_83C77C4C);
PPC_FUNC_IMPL(__imp__sub_83C77C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77C50"))) PPC_WEAK_FUNC(sub_83C77C50);
PPC_FUNC_IMPL(__imp__sub_83C77C50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22360
	ctx.r3.s64 = ctx.r11.s64 + -22360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77C5C"))) PPC_WEAK_FUNC(sub_83C77C5C);
PPC_FUNC_IMPL(__imp__sub_83C77C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77C60"))) PPC_WEAK_FUNC(sub_83C77C60);
PPC_FUNC_IMPL(__imp__sub_83C77C60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22352
	ctx.r3.s64 = ctx.r11.s64 + -22352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77C6C"))) PPC_WEAK_FUNC(sub_83C77C6C);
PPC_FUNC_IMPL(__imp__sub_83C77C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77C70"))) PPC_WEAK_FUNC(sub_83C77C70);
PPC_FUNC_IMPL(__imp__sub_83C77C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22344
	ctx.r3.s64 = ctx.r11.s64 + -22344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77C7C"))) PPC_WEAK_FUNC(sub_83C77C7C);
PPC_FUNC_IMPL(__imp__sub_83C77C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77C80"))) PPC_WEAK_FUNC(sub_83C77C80);
PPC_FUNC_IMPL(__imp__sub_83C77C80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22336
	ctx.r3.s64 = ctx.r11.s64 + -22336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77C8C"))) PPC_WEAK_FUNC(sub_83C77C8C);
PPC_FUNC_IMPL(__imp__sub_83C77C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77C90"))) PPC_WEAK_FUNC(sub_83C77C90);
PPC_FUNC_IMPL(__imp__sub_83C77C90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22328
	ctx.r3.s64 = ctx.r11.s64 + -22328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77C9C"))) PPC_WEAK_FUNC(sub_83C77C9C);
PPC_FUNC_IMPL(__imp__sub_83C77C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77CA0"))) PPC_WEAK_FUNC(sub_83C77CA0);
PPC_FUNC_IMPL(__imp__sub_83C77CA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22320
	ctx.r3.s64 = ctx.r11.s64 + -22320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77CAC"))) PPC_WEAK_FUNC(sub_83C77CAC);
PPC_FUNC_IMPL(__imp__sub_83C77CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77CB0"))) PPC_WEAK_FUNC(sub_83C77CB0);
PPC_FUNC_IMPL(__imp__sub_83C77CB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22312
	ctx.r3.s64 = ctx.r11.s64 + -22312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77CBC"))) PPC_WEAK_FUNC(sub_83C77CBC);
PPC_FUNC_IMPL(__imp__sub_83C77CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77CC0"))) PPC_WEAK_FUNC(sub_83C77CC0);
PPC_FUNC_IMPL(__imp__sub_83C77CC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22304
	ctx.r3.s64 = ctx.r11.s64 + -22304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77CCC"))) PPC_WEAK_FUNC(sub_83C77CCC);
PPC_FUNC_IMPL(__imp__sub_83C77CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77CD0"))) PPC_WEAK_FUNC(sub_83C77CD0);
PPC_FUNC_IMPL(__imp__sub_83C77CD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22296
	ctx.r3.s64 = ctx.r11.s64 + -22296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77CDC"))) PPC_WEAK_FUNC(sub_83C77CDC);
PPC_FUNC_IMPL(__imp__sub_83C77CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77CE0"))) PPC_WEAK_FUNC(sub_83C77CE0);
PPC_FUNC_IMPL(__imp__sub_83C77CE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22288
	ctx.r3.s64 = ctx.r11.s64 + -22288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77CEC"))) PPC_WEAK_FUNC(sub_83C77CEC);
PPC_FUNC_IMPL(__imp__sub_83C77CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77CF0"))) PPC_WEAK_FUNC(sub_83C77CF0);
PPC_FUNC_IMPL(__imp__sub_83C77CF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22280
	ctx.r3.s64 = ctx.r11.s64 + -22280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77CFC"))) PPC_WEAK_FUNC(sub_83C77CFC);
PPC_FUNC_IMPL(__imp__sub_83C77CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77D00"))) PPC_WEAK_FUNC(sub_83C77D00);
PPC_FUNC_IMPL(__imp__sub_83C77D00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22272
	ctx.r3.s64 = ctx.r11.s64 + -22272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77D0C"))) PPC_WEAK_FUNC(sub_83C77D0C);
PPC_FUNC_IMPL(__imp__sub_83C77D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77D10"))) PPC_WEAK_FUNC(sub_83C77D10);
PPC_FUNC_IMPL(__imp__sub_83C77D10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22264
	ctx.r3.s64 = ctx.r11.s64 + -22264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77D1C"))) PPC_WEAK_FUNC(sub_83C77D1C);
PPC_FUNC_IMPL(__imp__sub_83C77D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77D20"))) PPC_WEAK_FUNC(sub_83C77D20);
PPC_FUNC_IMPL(__imp__sub_83C77D20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22256
	ctx.r3.s64 = ctx.r11.s64 + -22256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77D2C"))) PPC_WEAK_FUNC(sub_83C77D2C);
PPC_FUNC_IMPL(__imp__sub_83C77D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77D30"))) PPC_WEAK_FUNC(sub_83C77D30);
PPC_FUNC_IMPL(__imp__sub_83C77D30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22248
	ctx.r3.s64 = ctx.r11.s64 + -22248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77D3C"))) PPC_WEAK_FUNC(sub_83C77D3C);
PPC_FUNC_IMPL(__imp__sub_83C77D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77D40"))) PPC_WEAK_FUNC(sub_83C77D40);
PPC_FUNC_IMPL(__imp__sub_83C77D40) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,2112
	ctx.r7.s64 = ctx.r8.s64 + 2112;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,2112(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2112);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,2112(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2112, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C77D68"))) PPC_WEAK_FUNC(sub_83C77D68);
PPC_FUNC_IMPL(__imp__sub_83C77D68) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-9312
	ctx.r6.s64 = ctx.r7.s64 + -9312;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-9384(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -9384);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,2112(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2112);
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
	// std r9,-9312(r7)
	PPC_STORE_U64(ctx.r7.u32 + -9312, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C77DB0"))) PPC_WEAK_FUNC(sub_83C77DB0);
PPC_FUNC_IMPL(__imp__sub_83C77DB0) {
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
	// addi r3,r11,2096
	ctx.r3.s64 = ctx.r11.s64 + 2096;
	// bl 0x83523120
	ctx.lr = 0x83C77DC8;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-22240
	ctx.r3.s64 = ctx.r10.s64 + -22240;
	// bl 0x831cdcc8
	ctx.lr = 0x83C77DD4;
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

__attribute__((alias("__imp__sub_83C77DE4"))) PPC_WEAK_FUNC(sub_83C77DE4);
PPC_FUNC_IMPL(__imp__sub_83C77DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77DE8"))) PPC_WEAK_FUNC(sub_83C77DE8);
PPC_FUNC_IMPL(__imp__sub_83C77DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22224
	ctx.r3.s64 = ctx.r11.s64 + -22224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77DF4"))) PPC_WEAK_FUNC(sub_83C77DF4);
PPC_FUNC_IMPL(__imp__sub_83C77DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77DF8"))) PPC_WEAK_FUNC(sub_83C77DF8);
PPC_FUNC_IMPL(__imp__sub_83C77DF8) {
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
	// addi r3,r11,2120
	ctx.r3.s64 = ctx.r11.s64 + 2120;
	// bl 0x8259af80
	ctx.lr = 0x83C77E10;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-22208
	ctx.r3.s64 = ctx.r10.s64 + -22208;
	// bl 0x831cdcc8
	ctx.lr = 0x83C77E1C;
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

__attribute__((alias("__imp__sub_83C77E2C"))) PPC_WEAK_FUNC(sub_83C77E2C);
PPC_FUNC_IMPL(__imp__sub_83C77E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77E30"))) PPC_WEAK_FUNC(sub_83C77E30);
PPC_FUNC_IMPL(__imp__sub_83C77E30) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,2100
	ctx.r11.s64 = ctx.r8.s64 + 2100;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-9336(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9336);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-22216
	ctx.r3.s64 = ctx.r6.s64 + -22216;
	// stw r10,2100(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2100, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77E60"))) PPC_WEAK_FUNC(sub_83C77E60);
PPC_FUNC_IMPL(__imp__sub_83C77E60) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// addi r4,r11,-30492
	ctx.r4.s64 = ctx.r11.s64 + -30492;
	// addi r3,r10,-9288
	ctx.r3.s64 = ctx.r10.s64 + -9288;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C77E84;
	sub_8259CC28(ctx, base);
	// lis r9,-31787
	ctx.r9.s64 = -2083192832;
	// addi r3,r9,-22200
	ctx.r3.s64 = ctx.r9.s64 + -22200;
	// bl 0x831cdcc8
	ctx.lr = 0x83C77E90;
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

__attribute__((alias("__imp__sub_83C77EA0"))) PPC_WEAK_FUNC(sub_83C77EA0);
PPC_FUNC_IMPL(__imp__sub_83C77EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22096
	ctx.r3.s64 = ctx.r11.s64 + -22096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77EAC"))) PPC_WEAK_FUNC(sub_83C77EAC);
PPC_FUNC_IMPL(__imp__sub_83C77EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77EB0"))) PPC_WEAK_FUNC(sub_83C77EB0);
PPC_FUNC_IMPL(__imp__sub_83C77EB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22088
	ctx.r3.s64 = ctx.r11.s64 + -22088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77EBC"))) PPC_WEAK_FUNC(sub_83C77EBC);
PPC_FUNC_IMPL(__imp__sub_83C77EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77EC0"))) PPC_WEAK_FUNC(sub_83C77EC0);
PPC_FUNC_IMPL(__imp__sub_83C77EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22080
	ctx.r3.s64 = ctx.r11.s64 + -22080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77ECC"))) PPC_WEAK_FUNC(sub_83C77ECC);
PPC_FUNC_IMPL(__imp__sub_83C77ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77ED0"))) PPC_WEAK_FUNC(sub_83C77ED0);
PPC_FUNC_IMPL(__imp__sub_83C77ED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22072
	ctx.r3.s64 = ctx.r11.s64 + -22072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77EDC"))) PPC_WEAK_FUNC(sub_83C77EDC);
PPC_FUNC_IMPL(__imp__sub_83C77EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77EE0"))) PPC_WEAK_FUNC(sub_83C77EE0);
PPC_FUNC_IMPL(__imp__sub_83C77EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22064
	ctx.r3.s64 = ctx.r11.s64 + -22064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77EEC"))) PPC_WEAK_FUNC(sub_83C77EEC);
PPC_FUNC_IMPL(__imp__sub_83C77EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77EF0"))) PPC_WEAK_FUNC(sub_83C77EF0);
PPC_FUNC_IMPL(__imp__sub_83C77EF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22056
	ctx.r3.s64 = ctx.r11.s64 + -22056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77EFC"))) PPC_WEAK_FUNC(sub_83C77EFC);
PPC_FUNC_IMPL(__imp__sub_83C77EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77F00"))) PPC_WEAK_FUNC(sub_83C77F00);
PPC_FUNC_IMPL(__imp__sub_83C77F00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22048
	ctx.r3.s64 = ctx.r11.s64 + -22048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77F0C"))) PPC_WEAK_FUNC(sub_83C77F0C);
PPC_FUNC_IMPL(__imp__sub_83C77F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77F10"))) PPC_WEAK_FUNC(sub_83C77F10);
PPC_FUNC_IMPL(__imp__sub_83C77F10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22040
	ctx.r3.s64 = ctx.r11.s64 + -22040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77F1C"))) PPC_WEAK_FUNC(sub_83C77F1C);
PPC_FUNC_IMPL(__imp__sub_83C77F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77F20"))) PPC_WEAK_FUNC(sub_83C77F20);
PPC_FUNC_IMPL(__imp__sub_83C77F20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22032
	ctx.r3.s64 = ctx.r11.s64 + -22032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77F2C"))) PPC_WEAK_FUNC(sub_83C77F2C);
PPC_FUNC_IMPL(__imp__sub_83C77F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77F30"))) PPC_WEAK_FUNC(sub_83C77F30);
PPC_FUNC_IMPL(__imp__sub_83C77F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22024
	ctx.r3.s64 = ctx.r11.s64 + -22024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77F3C"))) PPC_WEAK_FUNC(sub_83C77F3C);
PPC_FUNC_IMPL(__imp__sub_83C77F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77F40"))) PPC_WEAK_FUNC(sub_83C77F40);
PPC_FUNC_IMPL(__imp__sub_83C77F40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22016
	ctx.r3.s64 = ctx.r11.s64 + -22016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77F4C"))) PPC_WEAK_FUNC(sub_83C77F4C);
PPC_FUNC_IMPL(__imp__sub_83C77F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77F50"))) PPC_WEAK_FUNC(sub_83C77F50);
PPC_FUNC_IMPL(__imp__sub_83C77F50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22008
	ctx.r3.s64 = ctx.r11.s64 + -22008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77F5C"))) PPC_WEAK_FUNC(sub_83C77F5C);
PPC_FUNC_IMPL(__imp__sub_83C77F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77F60"))) PPC_WEAK_FUNC(sub_83C77F60);
PPC_FUNC_IMPL(__imp__sub_83C77F60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,2480
	ctx.r7.s64 = ctx.r8.s64 + 2480;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,2480(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2480);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,2480(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2480, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C77F88"))) PPC_WEAK_FUNC(sub_83C77F88);
PPC_FUNC_IMPL(__imp__sub_83C77F88) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-9156
	ctx.r6.s64 = ctx.r7.s64 + -9156;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-9228(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -9228);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,2480(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2480);
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
	// std r9,-9156(r7)
	PPC_STORE_U64(ctx.r7.u32 + -9156, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C77FD0"))) PPC_WEAK_FUNC(sub_83C77FD0);
PPC_FUNC_IMPL(__imp__sub_83C77FD0) {
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
	// addi r3,r11,2464
	ctx.r3.s64 = ctx.r11.s64 + 2464;
	// bl 0x83523120
	ctx.lr = 0x83C77FE8;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-22000
	ctx.r3.s64 = ctx.r10.s64 + -22000;
	// bl 0x831cdcc8
	ctx.lr = 0x83C77FF4;
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

__attribute__((alias("__imp__sub_83C78004"))) PPC_WEAK_FUNC(sub_83C78004);
PPC_FUNC_IMPL(__imp__sub_83C78004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78008"))) PPC_WEAK_FUNC(sub_83C78008);
PPC_FUNC_IMPL(__imp__sub_83C78008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21984
	ctx.r3.s64 = ctx.r11.s64 + -21984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78014"))) PPC_WEAK_FUNC(sub_83C78014);
PPC_FUNC_IMPL(__imp__sub_83C78014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78018"))) PPC_WEAK_FUNC(sub_83C78018);
PPC_FUNC_IMPL(__imp__sub_83C78018) {
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
	// addi r3,r11,2488
	ctx.r3.s64 = ctx.r11.s64 + 2488;
	// bl 0x8259af80
	ctx.lr = 0x83C78030;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-21968
	ctx.r3.s64 = ctx.r10.s64 + -21968;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7803C;
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

__attribute__((alias("__imp__sub_83C7804C"))) PPC_WEAK_FUNC(sub_83C7804C);
PPC_FUNC_IMPL(__imp__sub_83C7804C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78050"))) PPC_WEAK_FUNC(sub_83C78050);
PPC_FUNC_IMPL(__imp__sub_83C78050) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,2468
	ctx.r11.s64 = ctx.r8.s64 + 2468;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-9180(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9180);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-21976
	ctx.r3.s64 = ctx.r6.s64 + -21976;
	// stw r10,2468(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2468, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78080"))) PPC_WEAK_FUNC(sub_83C78080);
PPC_FUNC_IMPL(__imp__sub_83C78080) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// addi r4,r11,-29948
	ctx.r4.s64 = ctx.r11.s64 + -29948;
	// addi r3,r10,-9132
	ctx.r3.s64 = ctx.r10.s64 + -9132;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C780A4;
	sub_8259CC28(ctx, base);
	// lis r9,-31787
	ctx.r9.s64 = -2083192832;
	// addi r3,r9,-21960
	ctx.r3.s64 = ctx.r9.s64 + -21960;
	// bl 0x831cdcc8
	ctx.lr = 0x83C780B0;
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

__attribute__((alias("__imp__sub_83C780C0"))) PPC_WEAK_FUNC(sub_83C780C0);
PPC_FUNC_IMPL(__imp__sub_83C780C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21856
	ctx.r3.s64 = ctx.r11.s64 + -21856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C780CC"))) PPC_WEAK_FUNC(sub_83C780CC);
PPC_FUNC_IMPL(__imp__sub_83C780CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C780D0"))) PPC_WEAK_FUNC(sub_83C780D0);
PPC_FUNC_IMPL(__imp__sub_83C780D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21848
	ctx.r3.s64 = ctx.r11.s64 + -21848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C780DC"))) PPC_WEAK_FUNC(sub_83C780DC);
PPC_FUNC_IMPL(__imp__sub_83C780DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C780E0"))) PPC_WEAK_FUNC(sub_83C780E0);
PPC_FUNC_IMPL(__imp__sub_83C780E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21840
	ctx.r3.s64 = ctx.r11.s64 + -21840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C780EC"))) PPC_WEAK_FUNC(sub_83C780EC);
PPC_FUNC_IMPL(__imp__sub_83C780EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C780F0"))) PPC_WEAK_FUNC(sub_83C780F0);
PPC_FUNC_IMPL(__imp__sub_83C780F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21832
	ctx.r3.s64 = ctx.r11.s64 + -21832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C780FC"))) PPC_WEAK_FUNC(sub_83C780FC);
PPC_FUNC_IMPL(__imp__sub_83C780FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78100"))) PPC_WEAK_FUNC(sub_83C78100);
PPC_FUNC_IMPL(__imp__sub_83C78100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21824
	ctx.r3.s64 = ctx.r11.s64 + -21824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7810C"))) PPC_WEAK_FUNC(sub_83C7810C);
PPC_FUNC_IMPL(__imp__sub_83C7810C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78110"))) PPC_WEAK_FUNC(sub_83C78110);
PPC_FUNC_IMPL(__imp__sub_83C78110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21816
	ctx.r3.s64 = ctx.r11.s64 + -21816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7811C"))) PPC_WEAK_FUNC(sub_83C7811C);
PPC_FUNC_IMPL(__imp__sub_83C7811C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78120"))) PPC_WEAK_FUNC(sub_83C78120);
PPC_FUNC_IMPL(__imp__sub_83C78120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21808
	ctx.r3.s64 = ctx.r11.s64 + -21808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7812C"))) PPC_WEAK_FUNC(sub_83C7812C);
PPC_FUNC_IMPL(__imp__sub_83C7812C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78130"))) PPC_WEAK_FUNC(sub_83C78130);
PPC_FUNC_IMPL(__imp__sub_83C78130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21800
	ctx.r3.s64 = ctx.r11.s64 + -21800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7813C"))) PPC_WEAK_FUNC(sub_83C7813C);
PPC_FUNC_IMPL(__imp__sub_83C7813C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78140"))) PPC_WEAK_FUNC(sub_83C78140);
PPC_FUNC_IMPL(__imp__sub_83C78140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21792
	ctx.r3.s64 = ctx.r11.s64 + -21792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7814C"))) PPC_WEAK_FUNC(sub_83C7814C);
PPC_FUNC_IMPL(__imp__sub_83C7814C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78150"))) PPC_WEAK_FUNC(sub_83C78150);
PPC_FUNC_IMPL(__imp__sub_83C78150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21784
	ctx.r3.s64 = ctx.r11.s64 + -21784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7815C"))) PPC_WEAK_FUNC(sub_83C7815C);
PPC_FUNC_IMPL(__imp__sub_83C7815C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78160"))) PPC_WEAK_FUNC(sub_83C78160);
PPC_FUNC_IMPL(__imp__sub_83C78160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21776
	ctx.r3.s64 = ctx.r11.s64 + -21776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7816C"))) PPC_WEAK_FUNC(sub_83C7816C);
PPC_FUNC_IMPL(__imp__sub_83C7816C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78170"))) PPC_WEAK_FUNC(sub_83C78170);
PPC_FUNC_IMPL(__imp__sub_83C78170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21768
	ctx.r3.s64 = ctx.r11.s64 + -21768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7817C"))) PPC_WEAK_FUNC(sub_83C7817C);
PPC_FUNC_IMPL(__imp__sub_83C7817C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C78180"))) PPC_WEAK_FUNC(sub_83C78180);
PPC_FUNC_IMPL(__imp__sub_83C78180) {
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
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// bl 0x83523120
	ctx.lr = 0x83C78198;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-21760
	ctx.r3.s64 = ctx.r10.s64 + -21760;
	// bl 0x831cdcc8
	ctx.lr = 0x83C781A4;
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

__attribute__((alias("__imp__sub_83C781B4"))) PPC_WEAK_FUNC(sub_83C781B4);
PPC_FUNC_IMPL(__imp__sub_83C781B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C781B8"))) PPC_WEAK_FUNC(sub_83C781B8);
PPC_FUNC_IMPL(__imp__sub_83C781B8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,2848
	ctx.r7.s64 = ctx.r8.s64 + 2848;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,2848(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2848);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,2848(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2848, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C781E0"))) PPC_WEAK_FUNC(sub_83C781E0);
PPC_FUNC_IMPL(__imp__sub_83C781E0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-9000
	ctx.r6.s64 = ctx.r7.s64 + -9000;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-9072(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -9072);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,2848(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2848);
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
	// std r9,-9000(r7)
	PPC_STORE_U64(ctx.r7.u32 + -9000, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C78228"))) PPC_WEAK_FUNC(sub_83C78228);
PPC_FUNC_IMPL(__imp__sub_83C78228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-21744
	ctx.r3.s64 = ctx.r11.s64 + -21744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C78234"))) PPC_WEAK_FUNC(sub_83C78234);
PPC_FUNC_IMPL(__imp__sub_83C78234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

