#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C76704"))) PPC_WEAK_FUNC(sub_83C76704);
PPC_FUNC_IMPL(__imp__sub_83C76704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76708"))) PPC_WEAK_FUNC(sub_83C76708);
PPC_FUNC_IMPL(__imp__sub_83C76708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24232
	ctx.r3.s64 = ctx.r11.s64 + -24232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76714"))) PPC_WEAK_FUNC(sub_83C76714);
PPC_FUNC_IMPL(__imp__sub_83C76714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76718"))) PPC_WEAK_FUNC(sub_83C76718);
PPC_FUNC_IMPL(__imp__sub_83C76718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24224
	ctx.r3.s64 = ctx.r11.s64 + -24224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76724"))) PPC_WEAK_FUNC(sub_83C76724);
PPC_FUNC_IMPL(__imp__sub_83C76724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76728"))) PPC_WEAK_FUNC(sub_83C76728);
PPC_FUNC_IMPL(__imp__sub_83C76728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24216
	ctx.r3.s64 = ctx.r11.s64 + -24216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76734"))) PPC_WEAK_FUNC(sub_83C76734);
PPC_FUNC_IMPL(__imp__sub_83C76734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76738"))) PPC_WEAK_FUNC(sub_83C76738);
PPC_FUNC_IMPL(__imp__sub_83C76738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24208
	ctx.r3.s64 = ctx.r11.s64 + -24208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76744"))) PPC_WEAK_FUNC(sub_83C76744);
PPC_FUNC_IMPL(__imp__sub_83C76744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76748"))) PPC_WEAK_FUNC(sub_83C76748);
PPC_FUNC_IMPL(__imp__sub_83C76748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24200
	ctx.r3.s64 = ctx.r11.s64 + -24200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76754"))) PPC_WEAK_FUNC(sub_83C76754);
PPC_FUNC_IMPL(__imp__sub_83C76754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76758"))) PPC_WEAK_FUNC(sub_83C76758);
PPC_FUNC_IMPL(__imp__sub_83C76758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24192
	ctx.r3.s64 = ctx.r11.s64 + -24192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76764"))) PPC_WEAK_FUNC(sub_83C76764);
PPC_FUNC_IMPL(__imp__sub_83C76764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76768"))) PPC_WEAK_FUNC(sub_83C76768);
PPC_FUNC_IMPL(__imp__sub_83C76768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24184
	ctx.r3.s64 = ctx.r11.s64 + -24184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76774"))) PPC_WEAK_FUNC(sub_83C76774);
PPC_FUNC_IMPL(__imp__sub_83C76774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76778"))) PPC_WEAK_FUNC(sub_83C76778);
PPC_FUNC_IMPL(__imp__sub_83C76778) {
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
	// addi r4,r11,29616
	ctx.r4.s64 = ctx.r11.s64 + 29616;
	// addi r3,r10,-11036
	ctx.r3.s64 = ctx.r10.s64 + -11036;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C7679C;
	sub_8259CC28(ctx, base);
	// lis r9,-31787
	ctx.r9.s64 = -2083192832;
	// addi r3,r9,-24160
	ctx.r3.s64 = ctx.r9.s64 + -24160;
	// bl 0x831cdcc8
	ctx.lr = 0x83C767A8;
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

__attribute__((alias("__imp__sub_83C767B8"))) PPC_WEAK_FUNC(sub_83C767B8);
PPC_FUNC_IMPL(__imp__sub_83C767B8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-908
	ctx.r7.s64 = ctx.r8.s64 + -908;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-908(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -908);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-908(r8)
	PPC_STORE_U32(ctx.r8.u32 + -908, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C767E0"))) PPC_WEAK_FUNC(sub_83C767E0);
PPC_FUNC_IMPL(__imp__sub_83C767E0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-11008
	ctx.r6.s64 = ctx.r7.s64 + -11008;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-11108(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -11108);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-908(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -908);
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
	// std r9,-11008(r7)
	PPC_STORE_U64(ctx.r7.u32 + -11008, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C76828"))) PPC_WEAK_FUNC(sub_83C76828);
PPC_FUNC_IMPL(__imp__sub_83C76828) {
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
	// addi r3,r11,-912
	ctx.r3.s64 = ctx.r11.s64 + -912;
	// bl 0x83523120
	ctx.lr = 0x83C76840;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-24176
	ctx.r3.s64 = ctx.r10.s64 + -24176;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7684C;
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

__attribute__((alias("__imp__sub_83C7685C"))) PPC_WEAK_FUNC(sub_83C7685C);
PPC_FUNC_IMPL(__imp__sub_83C7685C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76860"))) PPC_WEAK_FUNC(sub_83C76860);
PPC_FUNC_IMPL(__imp__sub_83C76860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24056
	ctx.r3.s64 = ctx.r11.s64 + -24056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7686C"))) PPC_WEAK_FUNC(sub_83C7686C);
PPC_FUNC_IMPL(__imp__sub_83C7686C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76870"))) PPC_WEAK_FUNC(sub_83C76870);
PPC_FUNC_IMPL(__imp__sub_83C76870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24048
	ctx.r3.s64 = ctx.r11.s64 + -24048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7687C"))) PPC_WEAK_FUNC(sub_83C7687C);
PPC_FUNC_IMPL(__imp__sub_83C7687C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76880"))) PPC_WEAK_FUNC(sub_83C76880);
PPC_FUNC_IMPL(__imp__sub_83C76880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24040
	ctx.r3.s64 = ctx.r11.s64 + -24040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7688C"))) PPC_WEAK_FUNC(sub_83C7688C);
PPC_FUNC_IMPL(__imp__sub_83C7688C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76890"))) PPC_WEAK_FUNC(sub_83C76890);
PPC_FUNC_IMPL(__imp__sub_83C76890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24032
	ctx.r3.s64 = ctx.r11.s64 + -24032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7689C"))) PPC_WEAK_FUNC(sub_83C7689C);
PPC_FUNC_IMPL(__imp__sub_83C7689C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C768A0"))) PPC_WEAK_FUNC(sub_83C768A0);
PPC_FUNC_IMPL(__imp__sub_83C768A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24024
	ctx.r3.s64 = ctx.r11.s64 + -24024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C768AC"))) PPC_WEAK_FUNC(sub_83C768AC);
PPC_FUNC_IMPL(__imp__sub_83C768AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C768B0"))) PPC_WEAK_FUNC(sub_83C768B0);
PPC_FUNC_IMPL(__imp__sub_83C768B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24016
	ctx.r3.s64 = ctx.r11.s64 + -24016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C768BC"))) PPC_WEAK_FUNC(sub_83C768BC);
PPC_FUNC_IMPL(__imp__sub_83C768BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C768C0"))) PPC_WEAK_FUNC(sub_83C768C0);
PPC_FUNC_IMPL(__imp__sub_83C768C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24008
	ctx.r3.s64 = ctx.r11.s64 + -24008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C768CC"))) PPC_WEAK_FUNC(sub_83C768CC);
PPC_FUNC_IMPL(__imp__sub_83C768CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C768D0"))) PPC_WEAK_FUNC(sub_83C768D0);
PPC_FUNC_IMPL(__imp__sub_83C768D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-24000
	ctx.r3.s64 = ctx.r11.s64 + -24000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C768DC"))) PPC_WEAK_FUNC(sub_83C768DC);
PPC_FUNC_IMPL(__imp__sub_83C768DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C768E0"))) PPC_WEAK_FUNC(sub_83C768E0);
PPC_FUNC_IMPL(__imp__sub_83C768E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23992
	ctx.r3.s64 = ctx.r11.s64 + -23992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C768EC"))) PPC_WEAK_FUNC(sub_83C768EC);
PPC_FUNC_IMPL(__imp__sub_83C768EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C768F0"))) PPC_WEAK_FUNC(sub_83C768F0);
PPC_FUNC_IMPL(__imp__sub_83C768F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23984
	ctx.r3.s64 = ctx.r11.s64 + -23984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C768FC"))) PPC_WEAK_FUNC(sub_83C768FC);
PPC_FUNC_IMPL(__imp__sub_83C768FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76900"))) PPC_WEAK_FUNC(sub_83C76900);
PPC_FUNC_IMPL(__imp__sub_83C76900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23976
	ctx.r3.s64 = ctx.r11.s64 + -23976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7690C"))) PPC_WEAK_FUNC(sub_83C7690C);
PPC_FUNC_IMPL(__imp__sub_83C7690C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76910"))) PPC_WEAK_FUNC(sub_83C76910);
PPC_FUNC_IMPL(__imp__sub_83C76910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23968
	ctx.r3.s64 = ctx.r11.s64 + -23968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7691C"))) PPC_WEAK_FUNC(sub_83C7691C);
PPC_FUNC_IMPL(__imp__sub_83C7691C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76920"))) PPC_WEAK_FUNC(sub_83C76920);
PPC_FUNC_IMPL(__imp__sub_83C76920) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-880
	ctx.r7.s64 = ctx.r8.s64 + -880;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-880(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -880);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-880(r8)
	PPC_STORE_U32(ctx.r8.u32 + -880, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C76948"))) PPC_WEAK_FUNC(sub_83C76948);
PPC_FUNC_IMPL(__imp__sub_83C76948) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-10884
	ctx.r6.s64 = ctx.r7.s64 + -10884;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-10956(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -10956);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-880(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -880);
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
	// std r9,-10884(r7)
	PPC_STORE_U64(ctx.r7.u32 + -10884, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C76990"))) PPC_WEAK_FUNC(sub_83C76990);
PPC_FUNC_IMPL(__imp__sub_83C76990) {
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
	// addi r3,r11,-896
	ctx.r3.s64 = ctx.r11.s64 + -896;
	// bl 0x83523120
	ctx.lr = 0x83C769A8;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-23960
	ctx.r3.s64 = ctx.r10.s64 + -23960;
	// bl 0x831cdcc8
	ctx.lr = 0x83C769B4;
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

__attribute__((alias("__imp__sub_83C769C4"))) PPC_WEAK_FUNC(sub_83C769C4);
PPC_FUNC_IMPL(__imp__sub_83C769C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C769C8"))) PPC_WEAK_FUNC(sub_83C769C8);
PPC_FUNC_IMPL(__imp__sub_83C769C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23944
	ctx.r3.s64 = ctx.r11.s64 + -23944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C769D4"))) PPC_WEAK_FUNC(sub_83C769D4);
PPC_FUNC_IMPL(__imp__sub_83C769D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C769D8"))) PPC_WEAK_FUNC(sub_83C769D8);
PPC_FUNC_IMPL(__imp__sub_83C769D8) {
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
	// addi r3,r11,-872
	ctx.r3.s64 = ctx.r11.s64 + -872;
	// bl 0x8259af80
	ctx.lr = 0x83C769F0;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-23928
	ctx.r3.s64 = ctx.r10.s64 + -23928;
	// bl 0x831cdcc8
	ctx.lr = 0x83C769FC;
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

__attribute__((alias("__imp__sub_83C76A0C"))) PPC_WEAK_FUNC(sub_83C76A0C);
PPC_FUNC_IMPL(__imp__sub_83C76A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76A10"))) PPC_WEAK_FUNC(sub_83C76A10);
PPC_FUNC_IMPL(__imp__sub_83C76A10) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-892
	ctx.r11.s64 = ctx.r8.s64 + -892;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-10908(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10908);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-23936
	ctx.r3.s64 = ctx.r6.s64 + -23936;
	// stw r10,-892(r8)
	PPC_STORE_U32(ctx.r8.u32 + -892, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76A40"))) PPC_WEAK_FUNC(sub_83C76A40);
PPC_FUNC_IMPL(__imp__sub_83C76A40) {
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
	// addi r4,r11,29788
	ctx.r4.s64 = ctx.r11.s64 + 29788;
	// addi r3,r10,-10860
	ctx.r3.s64 = ctx.r10.s64 + -10860;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C76A64;
	sub_8259CC28(ctx, base);
	// lis r9,-31787
	ctx.r9.s64 = -2083192832;
	// addi r3,r9,-23920
	ctx.r3.s64 = ctx.r9.s64 + -23920;
	// bl 0x831cdcc8
	ctx.lr = 0x83C76A70;
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

__attribute__((alias("__imp__sub_83C76A80"))) PPC_WEAK_FUNC(sub_83C76A80);
PPC_FUNC_IMPL(__imp__sub_83C76A80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23816
	ctx.r3.s64 = ctx.r11.s64 + -23816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76A8C"))) PPC_WEAK_FUNC(sub_83C76A8C);
PPC_FUNC_IMPL(__imp__sub_83C76A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76A90"))) PPC_WEAK_FUNC(sub_83C76A90);
PPC_FUNC_IMPL(__imp__sub_83C76A90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23808
	ctx.r3.s64 = ctx.r11.s64 + -23808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76A9C"))) PPC_WEAK_FUNC(sub_83C76A9C);
PPC_FUNC_IMPL(__imp__sub_83C76A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76AA0"))) PPC_WEAK_FUNC(sub_83C76AA0);
PPC_FUNC_IMPL(__imp__sub_83C76AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23800
	ctx.r3.s64 = ctx.r11.s64 + -23800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76AAC"))) PPC_WEAK_FUNC(sub_83C76AAC);
PPC_FUNC_IMPL(__imp__sub_83C76AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76AB0"))) PPC_WEAK_FUNC(sub_83C76AB0);
PPC_FUNC_IMPL(__imp__sub_83C76AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23792
	ctx.r3.s64 = ctx.r11.s64 + -23792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76ABC"))) PPC_WEAK_FUNC(sub_83C76ABC);
PPC_FUNC_IMPL(__imp__sub_83C76ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76AC0"))) PPC_WEAK_FUNC(sub_83C76AC0);
PPC_FUNC_IMPL(__imp__sub_83C76AC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23784
	ctx.r3.s64 = ctx.r11.s64 + -23784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76ACC"))) PPC_WEAK_FUNC(sub_83C76ACC);
PPC_FUNC_IMPL(__imp__sub_83C76ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76AD0"))) PPC_WEAK_FUNC(sub_83C76AD0);
PPC_FUNC_IMPL(__imp__sub_83C76AD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23776
	ctx.r3.s64 = ctx.r11.s64 + -23776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76ADC"))) PPC_WEAK_FUNC(sub_83C76ADC);
PPC_FUNC_IMPL(__imp__sub_83C76ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76AE0"))) PPC_WEAK_FUNC(sub_83C76AE0);
PPC_FUNC_IMPL(__imp__sub_83C76AE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23768
	ctx.r3.s64 = ctx.r11.s64 + -23768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76AEC"))) PPC_WEAK_FUNC(sub_83C76AEC);
PPC_FUNC_IMPL(__imp__sub_83C76AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76AF0"))) PPC_WEAK_FUNC(sub_83C76AF0);
PPC_FUNC_IMPL(__imp__sub_83C76AF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23760
	ctx.r3.s64 = ctx.r11.s64 + -23760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76AFC"))) PPC_WEAK_FUNC(sub_83C76AFC);
PPC_FUNC_IMPL(__imp__sub_83C76AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76B00"))) PPC_WEAK_FUNC(sub_83C76B00);
PPC_FUNC_IMPL(__imp__sub_83C76B00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23752
	ctx.r3.s64 = ctx.r11.s64 + -23752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76B0C"))) PPC_WEAK_FUNC(sub_83C76B0C);
PPC_FUNC_IMPL(__imp__sub_83C76B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76B10"))) PPC_WEAK_FUNC(sub_83C76B10);
PPC_FUNC_IMPL(__imp__sub_83C76B10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23744
	ctx.r3.s64 = ctx.r11.s64 + -23744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76B1C"))) PPC_WEAK_FUNC(sub_83C76B1C);
PPC_FUNC_IMPL(__imp__sub_83C76B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76B20"))) PPC_WEAK_FUNC(sub_83C76B20);
PPC_FUNC_IMPL(__imp__sub_83C76B20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23736
	ctx.r3.s64 = ctx.r11.s64 + -23736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76B2C"))) PPC_WEAK_FUNC(sub_83C76B2C);
PPC_FUNC_IMPL(__imp__sub_83C76B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76B30"))) PPC_WEAK_FUNC(sub_83C76B30);
PPC_FUNC_IMPL(__imp__sub_83C76B30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23728
	ctx.r3.s64 = ctx.r11.s64 + -23728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76B3C"))) PPC_WEAK_FUNC(sub_83C76B3C);
PPC_FUNC_IMPL(__imp__sub_83C76B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76B40"))) PPC_WEAK_FUNC(sub_83C76B40);
PPC_FUNC_IMPL(__imp__sub_83C76B40) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-512
	ctx.r7.s64 = ctx.r8.s64 + -512;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-512(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -512);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-512(r8)
	PPC_STORE_U32(ctx.r8.u32 + -512, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C76B68"))) PPC_WEAK_FUNC(sub_83C76B68);
PPC_FUNC_IMPL(__imp__sub_83C76B68) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-10728
	ctx.r6.s64 = ctx.r7.s64 + -10728;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-10800(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -10800);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-512(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -512);
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
	// std r9,-10728(r7)
	PPC_STORE_U64(ctx.r7.u32 + -10728, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C76BB0"))) PPC_WEAK_FUNC(sub_83C76BB0);
PPC_FUNC_IMPL(__imp__sub_83C76BB0) {
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
	// addi r3,r11,-528
	ctx.r3.s64 = ctx.r11.s64 + -528;
	// bl 0x83523120
	ctx.lr = 0x83C76BC8;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-23720
	ctx.r3.s64 = ctx.r10.s64 + -23720;
	// bl 0x831cdcc8
	ctx.lr = 0x83C76BD4;
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

__attribute__((alias("__imp__sub_83C76BE4"))) PPC_WEAK_FUNC(sub_83C76BE4);
PPC_FUNC_IMPL(__imp__sub_83C76BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76BE8"))) PPC_WEAK_FUNC(sub_83C76BE8);
PPC_FUNC_IMPL(__imp__sub_83C76BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23704
	ctx.r3.s64 = ctx.r11.s64 + -23704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76BF4"))) PPC_WEAK_FUNC(sub_83C76BF4);
PPC_FUNC_IMPL(__imp__sub_83C76BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76BF8"))) PPC_WEAK_FUNC(sub_83C76BF8);
PPC_FUNC_IMPL(__imp__sub_83C76BF8) {
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
	// addi r3,r11,-504
	ctx.r3.s64 = ctx.r11.s64 + -504;
	// bl 0x8259af80
	ctx.lr = 0x83C76C10;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-23688
	ctx.r3.s64 = ctx.r10.s64 + -23688;
	// bl 0x831cdcc8
	ctx.lr = 0x83C76C1C;
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

__attribute__((alias("__imp__sub_83C76C2C"))) PPC_WEAK_FUNC(sub_83C76C2C);
PPC_FUNC_IMPL(__imp__sub_83C76C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76C30"))) PPC_WEAK_FUNC(sub_83C76C30);
PPC_FUNC_IMPL(__imp__sub_83C76C30) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-524
	ctx.r11.s64 = ctx.r8.s64 + -524;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-10752(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10752);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-23696
	ctx.r3.s64 = ctx.r6.s64 + -23696;
	// stw r10,-524(r8)
	PPC_STORE_U32(ctx.r8.u32 + -524, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76C60"))) PPC_WEAK_FUNC(sub_83C76C60);
PPC_FUNC_IMPL(__imp__sub_83C76C60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23680
	ctx.r3.s64 = ctx.r11.s64 + -23680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76C6C"))) PPC_WEAK_FUNC(sub_83C76C6C);
PPC_FUNC_IMPL(__imp__sub_83C76C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76C70"))) PPC_WEAK_FUNC(sub_83C76C70);
PPC_FUNC_IMPL(__imp__sub_83C76C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23672
	ctx.r3.s64 = ctx.r11.s64 + -23672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76C7C"))) PPC_WEAK_FUNC(sub_83C76C7C);
PPC_FUNC_IMPL(__imp__sub_83C76C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76C80"))) PPC_WEAK_FUNC(sub_83C76C80);
PPC_FUNC_IMPL(__imp__sub_83C76C80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23664
	ctx.r3.s64 = ctx.r11.s64 + -23664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76C8C"))) PPC_WEAK_FUNC(sub_83C76C8C);
PPC_FUNC_IMPL(__imp__sub_83C76C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76C90"))) PPC_WEAK_FUNC(sub_83C76C90);
PPC_FUNC_IMPL(__imp__sub_83C76C90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23656
	ctx.r3.s64 = ctx.r11.s64 + -23656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76C9C"))) PPC_WEAK_FUNC(sub_83C76C9C);
PPC_FUNC_IMPL(__imp__sub_83C76C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76CA0"))) PPC_WEAK_FUNC(sub_83C76CA0);
PPC_FUNC_IMPL(__imp__sub_83C76CA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23648
	ctx.r3.s64 = ctx.r11.s64 + -23648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76CAC"))) PPC_WEAK_FUNC(sub_83C76CAC);
PPC_FUNC_IMPL(__imp__sub_83C76CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76CB0"))) PPC_WEAK_FUNC(sub_83C76CB0);
PPC_FUNC_IMPL(__imp__sub_83C76CB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23640
	ctx.r3.s64 = ctx.r11.s64 + -23640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76CBC"))) PPC_WEAK_FUNC(sub_83C76CBC);
PPC_FUNC_IMPL(__imp__sub_83C76CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76CC0"))) PPC_WEAK_FUNC(sub_83C76CC0);
PPC_FUNC_IMPL(__imp__sub_83C76CC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23632
	ctx.r3.s64 = ctx.r11.s64 + -23632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76CCC"))) PPC_WEAK_FUNC(sub_83C76CCC);
PPC_FUNC_IMPL(__imp__sub_83C76CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76CD0"))) PPC_WEAK_FUNC(sub_83C76CD0);
PPC_FUNC_IMPL(__imp__sub_83C76CD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23624
	ctx.r3.s64 = ctx.r11.s64 + -23624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76CDC"))) PPC_WEAK_FUNC(sub_83C76CDC);
PPC_FUNC_IMPL(__imp__sub_83C76CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76CE0"))) PPC_WEAK_FUNC(sub_83C76CE0);
PPC_FUNC_IMPL(__imp__sub_83C76CE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23616
	ctx.r3.s64 = ctx.r11.s64 + -23616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76CEC"))) PPC_WEAK_FUNC(sub_83C76CEC);
PPC_FUNC_IMPL(__imp__sub_83C76CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76CF0"))) PPC_WEAK_FUNC(sub_83C76CF0);
PPC_FUNC_IMPL(__imp__sub_83C76CF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23608
	ctx.r3.s64 = ctx.r11.s64 + -23608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76CFC"))) PPC_WEAK_FUNC(sub_83C76CFC);
PPC_FUNC_IMPL(__imp__sub_83C76CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76D00"))) PPC_WEAK_FUNC(sub_83C76D00);
PPC_FUNC_IMPL(__imp__sub_83C76D00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23600
	ctx.r3.s64 = ctx.r11.s64 + -23600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76D0C"))) PPC_WEAK_FUNC(sub_83C76D0C);
PPC_FUNC_IMPL(__imp__sub_83C76D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76D10"))) PPC_WEAK_FUNC(sub_83C76D10);
PPC_FUNC_IMPL(__imp__sub_83C76D10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23592
	ctx.r3.s64 = ctx.r11.s64 + -23592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76D1C"))) PPC_WEAK_FUNC(sub_83C76D1C);
PPC_FUNC_IMPL(__imp__sub_83C76D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76D20"))) PPC_WEAK_FUNC(sub_83C76D20);
PPC_FUNC_IMPL(__imp__sub_83C76D20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-144
	ctx.r7.s64 = ctx.r8.s64 + -144;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-144(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -144);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-144(r8)
	PPC_STORE_U32(ctx.r8.u32 + -144, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C76D48"))) PPC_WEAK_FUNC(sub_83C76D48);
PPC_FUNC_IMPL(__imp__sub_83C76D48) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-10600
	ctx.r6.s64 = ctx.r7.s64 + -10600;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-10672(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -10672);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-144(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -144);
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
	// std r9,-10600(r7)
	PPC_STORE_U64(ctx.r7.u32 + -10600, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C76D90"))) PPC_WEAK_FUNC(sub_83C76D90);
PPC_FUNC_IMPL(__imp__sub_83C76D90) {
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
	// addi r3,r11,-160
	ctx.r3.s64 = ctx.r11.s64 + -160;
	// bl 0x83523120
	ctx.lr = 0x83C76DA8;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-23584
	ctx.r3.s64 = ctx.r10.s64 + -23584;
	// bl 0x831cdcc8
	ctx.lr = 0x83C76DB4;
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

__attribute__((alias("__imp__sub_83C76DC4"))) PPC_WEAK_FUNC(sub_83C76DC4);
PPC_FUNC_IMPL(__imp__sub_83C76DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76DC8"))) PPC_WEAK_FUNC(sub_83C76DC8);
PPC_FUNC_IMPL(__imp__sub_83C76DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23568
	ctx.r3.s64 = ctx.r11.s64 + -23568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76DD4"))) PPC_WEAK_FUNC(sub_83C76DD4);
PPC_FUNC_IMPL(__imp__sub_83C76DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76DD8"))) PPC_WEAK_FUNC(sub_83C76DD8);
PPC_FUNC_IMPL(__imp__sub_83C76DD8) {
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
	// addi r3,r11,-136
	ctx.r3.s64 = ctx.r11.s64 + -136;
	// bl 0x8259af80
	ctx.lr = 0x83C76DF0;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-23552
	ctx.r3.s64 = ctx.r10.s64 + -23552;
	// bl 0x831cdcc8
	ctx.lr = 0x83C76DFC;
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

__attribute__((alias("__imp__sub_83C76E0C"))) PPC_WEAK_FUNC(sub_83C76E0C);
PPC_FUNC_IMPL(__imp__sub_83C76E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76E10"))) PPC_WEAK_FUNC(sub_83C76E10);
PPC_FUNC_IMPL(__imp__sub_83C76E10) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-156
	ctx.r11.s64 = ctx.r8.s64 + -156;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-10624(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10624);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-23560
	ctx.r3.s64 = ctx.r6.s64 + -23560;
	// stw r10,-156(r8)
	PPC_STORE_U32(ctx.r8.u32 + -156, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76E40"))) PPC_WEAK_FUNC(sub_83C76E40);
PPC_FUNC_IMPL(__imp__sub_83C76E40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23544
	ctx.r3.s64 = ctx.r11.s64 + -23544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76E4C"))) PPC_WEAK_FUNC(sub_83C76E4C);
PPC_FUNC_IMPL(__imp__sub_83C76E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76E50"))) PPC_WEAK_FUNC(sub_83C76E50);
PPC_FUNC_IMPL(__imp__sub_83C76E50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23536
	ctx.r3.s64 = ctx.r11.s64 + -23536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76E5C"))) PPC_WEAK_FUNC(sub_83C76E5C);
PPC_FUNC_IMPL(__imp__sub_83C76E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76E60"))) PPC_WEAK_FUNC(sub_83C76E60);
PPC_FUNC_IMPL(__imp__sub_83C76E60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23528
	ctx.r3.s64 = ctx.r11.s64 + -23528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76E6C"))) PPC_WEAK_FUNC(sub_83C76E6C);
PPC_FUNC_IMPL(__imp__sub_83C76E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76E70"))) PPC_WEAK_FUNC(sub_83C76E70);
PPC_FUNC_IMPL(__imp__sub_83C76E70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23520
	ctx.r3.s64 = ctx.r11.s64 + -23520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76E7C"))) PPC_WEAK_FUNC(sub_83C76E7C);
PPC_FUNC_IMPL(__imp__sub_83C76E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76E80"))) PPC_WEAK_FUNC(sub_83C76E80);
PPC_FUNC_IMPL(__imp__sub_83C76E80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23512
	ctx.r3.s64 = ctx.r11.s64 + -23512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76E8C"))) PPC_WEAK_FUNC(sub_83C76E8C);
PPC_FUNC_IMPL(__imp__sub_83C76E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76E90"))) PPC_WEAK_FUNC(sub_83C76E90);
PPC_FUNC_IMPL(__imp__sub_83C76E90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23504
	ctx.r3.s64 = ctx.r11.s64 + -23504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76E9C"))) PPC_WEAK_FUNC(sub_83C76E9C);
PPC_FUNC_IMPL(__imp__sub_83C76E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76EA0"))) PPC_WEAK_FUNC(sub_83C76EA0);
PPC_FUNC_IMPL(__imp__sub_83C76EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23496
	ctx.r3.s64 = ctx.r11.s64 + -23496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76EAC"))) PPC_WEAK_FUNC(sub_83C76EAC);
PPC_FUNC_IMPL(__imp__sub_83C76EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76EB0"))) PPC_WEAK_FUNC(sub_83C76EB0);
PPC_FUNC_IMPL(__imp__sub_83C76EB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23488
	ctx.r3.s64 = ctx.r11.s64 + -23488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76EBC"))) PPC_WEAK_FUNC(sub_83C76EBC);
PPC_FUNC_IMPL(__imp__sub_83C76EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76EC0"))) PPC_WEAK_FUNC(sub_83C76EC0);
PPC_FUNC_IMPL(__imp__sub_83C76EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23480
	ctx.r3.s64 = ctx.r11.s64 + -23480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76ECC"))) PPC_WEAK_FUNC(sub_83C76ECC);
PPC_FUNC_IMPL(__imp__sub_83C76ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76ED0"))) PPC_WEAK_FUNC(sub_83C76ED0);
PPC_FUNC_IMPL(__imp__sub_83C76ED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23472
	ctx.r3.s64 = ctx.r11.s64 + -23472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76EDC"))) PPC_WEAK_FUNC(sub_83C76EDC);
PPC_FUNC_IMPL(__imp__sub_83C76EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76EE0"))) PPC_WEAK_FUNC(sub_83C76EE0);
PPC_FUNC_IMPL(__imp__sub_83C76EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23464
	ctx.r3.s64 = ctx.r11.s64 + -23464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76EEC"))) PPC_WEAK_FUNC(sub_83C76EEC);
PPC_FUNC_IMPL(__imp__sub_83C76EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76EF0"))) PPC_WEAK_FUNC(sub_83C76EF0);
PPC_FUNC_IMPL(__imp__sub_83C76EF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23456
	ctx.r3.s64 = ctx.r11.s64 + -23456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76EFC"))) PPC_WEAK_FUNC(sub_83C76EFC);
PPC_FUNC_IMPL(__imp__sub_83C76EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76F00"))) PPC_WEAK_FUNC(sub_83C76F00);
PPC_FUNC_IMPL(__imp__sub_83C76F00) {
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
	// addi r3,r11,208
	ctx.r3.s64 = ctx.r11.s64 + 208;
	// bl 0x83523120
	ctx.lr = 0x83C76F18;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-23448
	ctx.r3.s64 = ctx.r10.s64 + -23448;
	// bl 0x831cdcc8
	ctx.lr = 0x83C76F24;
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

__attribute__((alias("__imp__sub_83C76F34"))) PPC_WEAK_FUNC(sub_83C76F34);
PPC_FUNC_IMPL(__imp__sub_83C76F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76F38"))) PPC_WEAK_FUNC(sub_83C76F38);
PPC_FUNC_IMPL(__imp__sub_83C76F38) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,224
	ctx.r7.s64 = ctx.r8.s64 + 224;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,224(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 224);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,224(r8)
	PPC_STORE_U32(ctx.r8.u32 + 224, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C76F60"))) PPC_WEAK_FUNC(sub_83C76F60);
PPC_FUNC_IMPL(__imp__sub_83C76F60) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-10472
	ctx.r6.s64 = ctx.r7.s64 + -10472;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-10544(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -10544);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,224(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
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
	// std r9,-10472(r7)
	PPC_STORE_U64(ctx.r7.u32 + -10472, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C76FA8"))) PPC_WEAK_FUNC(sub_83C76FA8);
PPC_FUNC_IMPL(__imp__sub_83C76FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23432
	ctx.r3.s64 = ctx.r11.s64 + -23432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C76FB4"))) PPC_WEAK_FUNC(sub_83C76FB4);
PPC_FUNC_IMPL(__imp__sub_83C76FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76FB8"))) PPC_WEAK_FUNC(sub_83C76FB8);
PPC_FUNC_IMPL(__imp__sub_83C76FB8) {
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
	// addi r3,r11,232
	ctx.r3.s64 = ctx.r11.s64 + 232;
	// bl 0x8259af80
	ctx.lr = 0x83C76FD0;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-23416
	ctx.r3.s64 = ctx.r10.s64 + -23416;
	// bl 0x831cdcc8
	ctx.lr = 0x83C76FDC;
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

__attribute__((alias("__imp__sub_83C76FEC"))) PPC_WEAK_FUNC(sub_83C76FEC);
PPC_FUNC_IMPL(__imp__sub_83C76FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C76FF0"))) PPC_WEAK_FUNC(sub_83C76FF0);
PPC_FUNC_IMPL(__imp__sub_83C76FF0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,212
	ctx.r11.s64 = ctx.r8.s64 + 212;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-10496(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10496);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-23424
	ctx.r3.s64 = ctx.r6.s64 + -23424;
	// stw r10,212(r8)
	PPC_STORE_U32(ctx.r8.u32 + 212, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77020"))) PPC_WEAK_FUNC(sub_83C77020);
PPC_FUNC_IMPL(__imp__sub_83C77020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23408
	ctx.r3.s64 = ctx.r11.s64 + -23408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7702C"))) PPC_WEAK_FUNC(sub_83C7702C);
PPC_FUNC_IMPL(__imp__sub_83C7702C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77030"))) PPC_WEAK_FUNC(sub_83C77030);
PPC_FUNC_IMPL(__imp__sub_83C77030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23400
	ctx.r3.s64 = ctx.r11.s64 + -23400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7703C"))) PPC_WEAK_FUNC(sub_83C7703C);
PPC_FUNC_IMPL(__imp__sub_83C7703C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77040"))) PPC_WEAK_FUNC(sub_83C77040);
PPC_FUNC_IMPL(__imp__sub_83C77040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23392
	ctx.r3.s64 = ctx.r11.s64 + -23392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7704C"))) PPC_WEAK_FUNC(sub_83C7704C);
PPC_FUNC_IMPL(__imp__sub_83C7704C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77050"))) PPC_WEAK_FUNC(sub_83C77050);
PPC_FUNC_IMPL(__imp__sub_83C77050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23384
	ctx.r3.s64 = ctx.r11.s64 + -23384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7705C"))) PPC_WEAK_FUNC(sub_83C7705C);
PPC_FUNC_IMPL(__imp__sub_83C7705C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77060"))) PPC_WEAK_FUNC(sub_83C77060);
PPC_FUNC_IMPL(__imp__sub_83C77060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23376
	ctx.r3.s64 = ctx.r11.s64 + -23376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7706C"))) PPC_WEAK_FUNC(sub_83C7706C);
PPC_FUNC_IMPL(__imp__sub_83C7706C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77070"))) PPC_WEAK_FUNC(sub_83C77070);
PPC_FUNC_IMPL(__imp__sub_83C77070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23368
	ctx.r3.s64 = ctx.r11.s64 + -23368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7707C"))) PPC_WEAK_FUNC(sub_83C7707C);
PPC_FUNC_IMPL(__imp__sub_83C7707C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77080"))) PPC_WEAK_FUNC(sub_83C77080);
PPC_FUNC_IMPL(__imp__sub_83C77080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23360
	ctx.r3.s64 = ctx.r11.s64 + -23360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7708C"))) PPC_WEAK_FUNC(sub_83C7708C);
PPC_FUNC_IMPL(__imp__sub_83C7708C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77090"))) PPC_WEAK_FUNC(sub_83C77090);
PPC_FUNC_IMPL(__imp__sub_83C77090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23352
	ctx.r3.s64 = ctx.r11.s64 + -23352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7709C"))) PPC_WEAK_FUNC(sub_83C7709C);
PPC_FUNC_IMPL(__imp__sub_83C7709C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C770A0"))) PPC_WEAK_FUNC(sub_83C770A0);
PPC_FUNC_IMPL(__imp__sub_83C770A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23344
	ctx.r3.s64 = ctx.r11.s64 + -23344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C770AC"))) PPC_WEAK_FUNC(sub_83C770AC);
PPC_FUNC_IMPL(__imp__sub_83C770AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C770B0"))) PPC_WEAK_FUNC(sub_83C770B0);
PPC_FUNC_IMPL(__imp__sub_83C770B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23336
	ctx.r3.s64 = ctx.r11.s64 + -23336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C770BC"))) PPC_WEAK_FUNC(sub_83C770BC);
PPC_FUNC_IMPL(__imp__sub_83C770BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C770C0"))) PPC_WEAK_FUNC(sub_83C770C0);
PPC_FUNC_IMPL(__imp__sub_83C770C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23328
	ctx.r3.s64 = ctx.r11.s64 + -23328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C770CC"))) PPC_WEAK_FUNC(sub_83C770CC);
PPC_FUNC_IMPL(__imp__sub_83C770CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C770D0"))) PPC_WEAK_FUNC(sub_83C770D0);
PPC_FUNC_IMPL(__imp__sub_83C770D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23320
	ctx.r3.s64 = ctx.r11.s64 + -23320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C770DC"))) PPC_WEAK_FUNC(sub_83C770DC);
PPC_FUNC_IMPL(__imp__sub_83C770DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C770E0"))) PPC_WEAK_FUNC(sub_83C770E0);
PPC_FUNC_IMPL(__imp__sub_83C770E0) {
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
	// addi r3,r11,576
	ctx.r3.s64 = ctx.r11.s64 + 576;
	// bl 0x83523120
	ctx.lr = 0x83C770F8;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-23312
	ctx.r3.s64 = ctx.r10.s64 + -23312;
	// bl 0x831cdcc8
	ctx.lr = 0x83C77104;
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

__attribute__((alias("__imp__sub_83C77114"))) PPC_WEAK_FUNC(sub_83C77114);
PPC_FUNC_IMPL(__imp__sub_83C77114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77118"))) PPC_WEAK_FUNC(sub_83C77118);
PPC_FUNC_IMPL(__imp__sub_83C77118) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,592
	ctx.r7.s64 = ctx.r8.s64 + 592;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,592(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 592);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,592(r8)
	PPC_STORE_U32(ctx.r8.u32 + 592, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C77140"))) PPC_WEAK_FUNC(sub_83C77140);
PPC_FUNC_IMPL(__imp__sub_83C77140) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-10344
	ctx.r6.s64 = ctx.r7.s64 + -10344;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-10416(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -10416);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,592(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 592);
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
	// std r9,-10344(r7)
	PPC_STORE_U64(ctx.r7.u32 + -10344, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C77188"))) PPC_WEAK_FUNC(sub_83C77188);
PPC_FUNC_IMPL(__imp__sub_83C77188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23296
	ctx.r3.s64 = ctx.r11.s64 + -23296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77194"))) PPC_WEAK_FUNC(sub_83C77194);
PPC_FUNC_IMPL(__imp__sub_83C77194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77198"))) PPC_WEAK_FUNC(sub_83C77198);
PPC_FUNC_IMPL(__imp__sub_83C77198) {
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
	// addi r3,r11,600
	ctx.r3.s64 = ctx.r11.s64 + 600;
	// bl 0x8259af80
	ctx.lr = 0x83C771B0;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-23280
	ctx.r3.s64 = ctx.r10.s64 + -23280;
	// bl 0x831cdcc8
	ctx.lr = 0x83C771BC;
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

__attribute__((alias("__imp__sub_83C771CC"))) PPC_WEAK_FUNC(sub_83C771CC);
PPC_FUNC_IMPL(__imp__sub_83C771CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C771D0"))) PPC_WEAK_FUNC(sub_83C771D0);
PPC_FUNC_IMPL(__imp__sub_83C771D0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,580
	ctx.r11.s64 = ctx.r8.s64 + 580;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-10368(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10368);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-23288
	ctx.r3.s64 = ctx.r6.s64 + -23288;
	// stw r10,580(r8)
	PPC_STORE_U32(ctx.r8.u32 + 580, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C77200"))) PPC_WEAK_FUNC(sub_83C77200);
PPC_FUNC_IMPL(__imp__sub_83C77200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23272
	ctx.r3.s64 = ctx.r11.s64 + -23272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7720C"))) PPC_WEAK_FUNC(sub_83C7720C);
PPC_FUNC_IMPL(__imp__sub_83C7720C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77210"))) PPC_WEAK_FUNC(sub_83C77210);
PPC_FUNC_IMPL(__imp__sub_83C77210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23264
	ctx.r3.s64 = ctx.r11.s64 + -23264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7721C"))) PPC_WEAK_FUNC(sub_83C7721C);
PPC_FUNC_IMPL(__imp__sub_83C7721C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77220"))) PPC_WEAK_FUNC(sub_83C77220);
PPC_FUNC_IMPL(__imp__sub_83C77220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23256
	ctx.r3.s64 = ctx.r11.s64 + -23256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7722C"))) PPC_WEAK_FUNC(sub_83C7722C);
PPC_FUNC_IMPL(__imp__sub_83C7722C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77230"))) PPC_WEAK_FUNC(sub_83C77230);
PPC_FUNC_IMPL(__imp__sub_83C77230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23248
	ctx.r3.s64 = ctx.r11.s64 + -23248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7723C"))) PPC_WEAK_FUNC(sub_83C7723C);
PPC_FUNC_IMPL(__imp__sub_83C7723C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77240"))) PPC_WEAK_FUNC(sub_83C77240);
PPC_FUNC_IMPL(__imp__sub_83C77240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23240
	ctx.r3.s64 = ctx.r11.s64 + -23240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7724C"))) PPC_WEAK_FUNC(sub_83C7724C);
PPC_FUNC_IMPL(__imp__sub_83C7724C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77250"))) PPC_WEAK_FUNC(sub_83C77250);
PPC_FUNC_IMPL(__imp__sub_83C77250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23232
	ctx.r3.s64 = ctx.r11.s64 + -23232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7725C"))) PPC_WEAK_FUNC(sub_83C7725C);
PPC_FUNC_IMPL(__imp__sub_83C7725C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77260"))) PPC_WEAK_FUNC(sub_83C77260);
PPC_FUNC_IMPL(__imp__sub_83C77260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23224
	ctx.r3.s64 = ctx.r11.s64 + -23224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7726C"))) PPC_WEAK_FUNC(sub_83C7726C);
PPC_FUNC_IMPL(__imp__sub_83C7726C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77270"))) PPC_WEAK_FUNC(sub_83C77270);
PPC_FUNC_IMPL(__imp__sub_83C77270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23216
	ctx.r3.s64 = ctx.r11.s64 + -23216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7727C"))) PPC_WEAK_FUNC(sub_83C7727C);
PPC_FUNC_IMPL(__imp__sub_83C7727C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77280"))) PPC_WEAK_FUNC(sub_83C77280);
PPC_FUNC_IMPL(__imp__sub_83C77280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23208
	ctx.r3.s64 = ctx.r11.s64 + -23208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7728C"))) PPC_WEAK_FUNC(sub_83C7728C);
PPC_FUNC_IMPL(__imp__sub_83C7728C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77290"))) PPC_WEAK_FUNC(sub_83C77290);
PPC_FUNC_IMPL(__imp__sub_83C77290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23200
	ctx.r3.s64 = ctx.r11.s64 + -23200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7729C"))) PPC_WEAK_FUNC(sub_83C7729C);
PPC_FUNC_IMPL(__imp__sub_83C7729C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C772A0"))) PPC_WEAK_FUNC(sub_83C772A0);
PPC_FUNC_IMPL(__imp__sub_83C772A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23192
	ctx.r3.s64 = ctx.r11.s64 + -23192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C772AC"))) PPC_WEAK_FUNC(sub_83C772AC);
PPC_FUNC_IMPL(__imp__sub_83C772AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C772B0"))) PPC_WEAK_FUNC(sub_83C772B0);
PPC_FUNC_IMPL(__imp__sub_83C772B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23184
	ctx.r3.s64 = ctx.r11.s64 + -23184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C772BC"))) PPC_WEAK_FUNC(sub_83C772BC);
PPC_FUNC_IMPL(__imp__sub_83C772BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C772C0"))) PPC_WEAK_FUNC(sub_83C772C0);
PPC_FUNC_IMPL(__imp__sub_83C772C0) {
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
	// addi r3,r11,944
	ctx.r3.s64 = ctx.r11.s64 + 944;
	// bl 0x83523120
	ctx.lr = 0x83C772D8;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-23176
	ctx.r3.s64 = ctx.r10.s64 + -23176;
	// bl 0x831cdcc8
	ctx.lr = 0x83C772E4;
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

__attribute__((alias("__imp__sub_83C772F4"))) PPC_WEAK_FUNC(sub_83C772F4);
PPC_FUNC_IMPL(__imp__sub_83C772F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C772F8"))) PPC_WEAK_FUNC(sub_83C772F8);
PPC_FUNC_IMPL(__imp__sub_83C772F8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,948
	ctx.r7.s64 = ctx.r8.s64 + 948;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,948(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 948);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,948(r8)
	PPC_STORE_U32(ctx.r8.u32 + 948, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C77320"))) PPC_WEAK_FUNC(sub_83C77320);
PPC_FUNC_IMPL(__imp__sub_83C77320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23160
	ctx.r3.s64 = ctx.r11.s64 + -23160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7732C"))) PPC_WEAK_FUNC(sub_83C7732C);
PPC_FUNC_IMPL(__imp__sub_83C7732C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77330"))) PPC_WEAK_FUNC(sub_83C77330);
PPC_FUNC_IMPL(__imp__sub_83C77330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23152
	ctx.r3.s64 = ctx.r11.s64 + -23152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7733C"))) PPC_WEAK_FUNC(sub_83C7733C);
PPC_FUNC_IMPL(__imp__sub_83C7733C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77340"))) PPC_WEAK_FUNC(sub_83C77340);
PPC_FUNC_IMPL(__imp__sub_83C77340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23144
	ctx.r3.s64 = ctx.r11.s64 + -23144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7734C"))) PPC_WEAK_FUNC(sub_83C7734C);
PPC_FUNC_IMPL(__imp__sub_83C7734C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77350"))) PPC_WEAK_FUNC(sub_83C77350);
PPC_FUNC_IMPL(__imp__sub_83C77350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23136
	ctx.r3.s64 = ctx.r11.s64 + -23136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7735C"))) PPC_WEAK_FUNC(sub_83C7735C);
PPC_FUNC_IMPL(__imp__sub_83C7735C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77360"))) PPC_WEAK_FUNC(sub_83C77360);
PPC_FUNC_IMPL(__imp__sub_83C77360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23128
	ctx.r3.s64 = ctx.r11.s64 + -23128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7736C"))) PPC_WEAK_FUNC(sub_83C7736C);
PPC_FUNC_IMPL(__imp__sub_83C7736C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77370"))) PPC_WEAK_FUNC(sub_83C77370);
PPC_FUNC_IMPL(__imp__sub_83C77370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23120
	ctx.r3.s64 = ctx.r11.s64 + -23120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7737C"))) PPC_WEAK_FUNC(sub_83C7737C);
PPC_FUNC_IMPL(__imp__sub_83C7737C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77380"))) PPC_WEAK_FUNC(sub_83C77380);
PPC_FUNC_IMPL(__imp__sub_83C77380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23112
	ctx.r3.s64 = ctx.r11.s64 + -23112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7738C"))) PPC_WEAK_FUNC(sub_83C7738C);
PPC_FUNC_IMPL(__imp__sub_83C7738C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77390"))) PPC_WEAK_FUNC(sub_83C77390);
PPC_FUNC_IMPL(__imp__sub_83C77390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23104
	ctx.r3.s64 = ctx.r11.s64 + -23104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7739C"))) PPC_WEAK_FUNC(sub_83C7739C);
PPC_FUNC_IMPL(__imp__sub_83C7739C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C773A0"))) PPC_WEAK_FUNC(sub_83C773A0);
PPC_FUNC_IMPL(__imp__sub_83C773A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23096
	ctx.r3.s64 = ctx.r11.s64 + -23096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C773AC"))) PPC_WEAK_FUNC(sub_83C773AC);
PPC_FUNC_IMPL(__imp__sub_83C773AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C773B0"))) PPC_WEAK_FUNC(sub_83C773B0);
PPC_FUNC_IMPL(__imp__sub_83C773B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23088
	ctx.r3.s64 = ctx.r11.s64 + -23088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C773BC"))) PPC_WEAK_FUNC(sub_83C773BC);
PPC_FUNC_IMPL(__imp__sub_83C773BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C773C0"))) PPC_WEAK_FUNC(sub_83C773C0);
PPC_FUNC_IMPL(__imp__sub_83C773C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23080
	ctx.r3.s64 = ctx.r11.s64 + -23080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C773CC"))) PPC_WEAK_FUNC(sub_83C773CC);
PPC_FUNC_IMPL(__imp__sub_83C773CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C773D0"))) PPC_WEAK_FUNC(sub_83C773D0);
PPC_FUNC_IMPL(__imp__sub_83C773D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23072
	ctx.r3.s64 = ctx.r11.s64 + -23072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C773DC"))) PPC_WEAK_FUNC(sub_83C773DC);
PPC_FUNC_IMPL(__imp__sub_83C773DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C773E0"))) PPC_WEAK_FUNC(sub_83C773E0);
PPC_FUNC_IMPL(__imp__sub_83C773E0) {
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
	// addi r3,r11,956
	ctx.r3.s64 = ctx.r11.s64 + 956;
	// bl 0x83523120
	ctx.lr = 0x83C773F8;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-23064
	ctx.r3.s64 = ctx.r10.s64 + -23064;
	// bl 0x831cdcc8
	ctx.lr = 0x83C77404;
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

__attribute__((alias("__imp__sub_83C77414"))) PPC_WEAK_FUNC(sub_83C77414);
PPC_FUNC_IMPL(__imp__sub_83C77414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77418"))) PPC_WEAK_FUNC(sub_83C77418);
PPC_FUNC_IMPL(__imp__sub_83C77418) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,960
	ctx.r7.s64 = ctx.r8.s64 + 960;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,960(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 960);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,960(r8)
	PPC_STORE_U32(ctx.r8.u32 + 960, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C77440"))) PPC_WEAK_FUNC(sub_83C77440);
PPC_FUNC_IMPL(__imp__sub_83C77440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23048
	ctx.r3.s64 = ctx.r11.s64 + -23048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7744C"))) PPC_WEAK_FUNC(sub_83C7744C);
PPC_FUNC_IMPL(__imp__sub_83C7744C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77450"))) PPC_WEAK_FUNC(sub_83C77450);
PPC_FUNC_IMPL(__imp__sub_83C77450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23040
	ctx.r3.s64 = ctx.r11.s64 + -23040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7745C"))) PPC_WEAK_FUNC(sub_83C7745C);
PPC_FUNC_IMPL(__imp__sub_83C7745C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77460"))) PPC_WEAK_FUNC(sub_83C77460);
PPC_FUNC_IMPL(__imp__sub_83C77460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23032
	ctx.r3.s64 = ctx.r11.s64 + -23032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7746C"))) PPC_WEAK_FUNC(sub_83C7746C);
PPC_FUNC_IMPL(__imp__sub_83C7746C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77470"))) PPC_WEAK_FUNC(sub_83C77470);
PPC_FUNC_IMPL(__imp__sub_83C77470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23024
	ctx.r3.s64 = ctx.r11.s64 + -23024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7747C"))) PPC_WEAK_FUNC(sub_83C7747C);
PPC_FUNC_IMPL(__imp__sub_83C7747C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77480"))) PPC_WEAK_FUNC(sub_83C77480);
PPC_FUNC_IMPL(__imp__sub_83C77480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23016
	ctx.r3.s64 = ctx.r11.s64 + -23016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7748C"))) PPC_WEAK_FUNC(sub_83C7748C);
PPC_FUNC_IMPL(__imp__sub_83C7748C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C77490"))) PPC_WEAK_FUNC(sub_83C77490);
PPC_FUNC_IMPL(__imp__sub_83C77490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23008
	ctx.r3.s64 = ctx.r11.s64 + -23008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7749C"))) PPC_WEAK_FUNC(sub_83C7749C);
PPC_FUNC_IMPL(__imp__sub_83C7749C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C774A0"))) PPC_WEAK_FUNC(sub_83C774A0);
PPC_FUNC_IMPL(__imp__sub_83C774A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-23000
	ctx.r3.s64 = ctx.r11.s64 + -23000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C774AC"))) PPC_WEAK_FUNC(sub_83C774AC);
PPC_FUNC_IMPL(__imp__sub_83C774AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C774B0"))) PPC_WEAK_FUNC(sub_83C774B0);
PPC_FUNC_IMPL(__imp__sub_83C774B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-22992
	ctx.r3.s64 = ctx.r11.s64 + -22992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C774BC"))) PPC_WEAK_FUNC(sub_83C774BC);
PPC_FUNC_IMPL(__imp__sub_83C774BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

