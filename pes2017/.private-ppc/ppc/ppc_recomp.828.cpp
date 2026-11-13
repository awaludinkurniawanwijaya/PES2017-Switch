#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C705E8"))) PPC_WEAK_FUNC(sub_83C705E8);
PPC_FUNC_IMPL(__imp__sub_83C705E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30664
	ctx.r3.s64 = ctx.r11.s64 + 30664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C705F4"))) PPC_WEAK_FUNC(sub_83C705F4);
PPC_FUNC_IMPL(__imp__sub_83C705F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C705F8"))) PPC_WEAK_FUNC(sub_83C705F8);
PPC_FUNC_IMPL(__imp__sub_83C705F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30672
	ctx.r3.s64 = ctx.r11.s64 + 30672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70604"))) PPC_WEAK_FUNC(sub_83C70604);
PPC_FUNC_IMPL(__imp__sub_83C70604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70608"))) PPC_WEAK_FUNC(sub_83C70608);
PPC_FUNC_IMPL(__imp__sub_83C70608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30680
	ctx.r3.s64 = ctx.r11.s64 + 30680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70614"))) PPC_WEAK_FUNC(sub_83C70614);
PPC_FUNC_IMPL(__imp__sub_83C70614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70618"))) PPC_WEAK_FUNC(sub_83C70618);
PPC_FUNC_IMPL(__imp__sub_83C70618) {
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
	// addi r3,r11,-13984
	ctx.r3.s64 = ctx.r11.s64 + -13984;
	// bl 0x83523120
	ctx.lr = 0x83C70630;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,30688
	ctx.r3.s64 = ctx.r10.s64 + 30688;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7063C;
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

__attribute__((alias("__imp__sub_83C7064C"))) PPC_WEAK_FUNC(sub_83C7064C);
PPC_FUNC_IMPL(__imp__sub_83C7064C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70650"))) PPC_WEAK_FUNC(sub_83C70650);
PPC_FUNC_IMPL(__imp__sub_83C70650) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13968
	ctx.r7.s64 = ctx.r8.s64 + -13968;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13968(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13968);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13968(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13968, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C70678"))) PPC_WEAK_FUNC(sub_83C70678);
PPC_FUNC_IMPL(__imp__sub_83C70678) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-19104
	ctx.r6.s64 = ctx.r7.s64 + -19104;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-19176(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -19176);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-13968(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -13968);
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
	// std r9,-19104(r7)
	PPC_STORE_U64(ctx.r7.u32 + -19104, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C706C0"))) PPC_WEAK_FUNC(sub_83C706C0);
PPC_FUNC_IMPL(__imp__sub_83C706C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30704
	ctx.r3.s64 = ctx.r11.s64 + 30704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C706CC"))) PPC_WEAK_FUNC(sub_83C706CC);
PPC_FUNC_IMPL(__imp__sub_83C706CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C706D0"))) PPC_WEAK_FUNC(sub_83C706D0);
PPC_FUNC_IMPL(__imp__sub_83C706D0) {
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
	// addi r3,r11,-13960
	ctx.r3.s64 = ctx.r11.s64 + -13960;
	// bl 0x8259af80
	ctx.lr = 0x83C706E8;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,30720
	ctx.r3.s64 = ctx.r10.s64 + 30720;
	// bl 0x831cdcc8
	ctx.lr = 0x83C706F4;
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

__attribute__((alias("__imp__sub_83C70704"))) PPC_WEAK_FUNC(sub_83C70704);
PPC_FUNC_IMPL(__imp__sub_83C70704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70708"))) PPC_WEAK_FUNC(sub_83C70708);
PPC_FUNC_IMPL(__imp__sub_83C70708) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-13980
	ctx.r11.s64 = ctx.r8.s64 + -13980;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-19128(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19128);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,30712
	ctx.r3.s64 = ctx.r6.s64 + 30712;
	// stw r10,-13980(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13980, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70738"))) PPC_WEAK_FUNC(sub_83C70738);
PPC_FUNC_IMPL(__imp__sub_83C70738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30728
	ctx.r3.s64 = ctx.r11.s64 + 30728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70744"))) PPC_WEAK_FUNC(sub_83C70744);
PPC_FUNC_IMPL(__imp__sub_83C70744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70748"))) PPC_WEAK_FUNC(sub_83C70748);
PPC_FUNC_IMPL(__imp__sub_83C70748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30736
	ctx.r3.s64 = ctx.r11.s64 + 30736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70754"))) PPC_WEAK_FUNC(sub_83C70754);
PPC_FUNC_IMPL(__imp__sub_83C70754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70758"))) PPC_WEAK_FUNC(sub_83C70758);
PPC_FUNC_IMPL(__imp__sub_83C70758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30744
	ctx.r3.s64 = ctx.r11.s64 + 30744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70764"))) PPC_WEAK_FUNC(sub_83C70764);
PPC_FUNC_IMPL(__imp__sub_83C70764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70768"))) PPC_WEAK_FUNC(sub_83C70768);
PPC_FUNC_IMPL(__imp__sub_83C70768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30752
	ctx.r3.s64 = ctx.r11.s64 + 30752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70774"))) PPC_WEAK_FUNC(sub_83C70774);
PPC_FUNC_IMPL(__imp__sub_83C70774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70778"))) PPC_WEAK_FUNC(sub_83C70778);
PPC_FUNC_IMPL(__imp__sub_83C70778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30760
	ctx.r3.s64 = ctx.r11.s64 + 30760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70784"))) PPC_WEAK_FUNC(sub_83C70784);
PPC_FUNC_IMPL(__imp__sub_83C70784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70788"))) PPC_WEAK_FUNC(sub_83C70788);
PPC_FUNC_IMPL(__imp__sub_83C70788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30768
	ctx.r3.s64 = ctx.r11.s64 + 30768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70794"))) PPC_WEAK_FUNC(sub_83C70794);
PPC_FUNC_IMPL(__imp__sub_83C70794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70798"))) PPC_WEAK_FUNC(sub_83C70798);
PPC_FUNC_IMPL(__imp__sub_83C70798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30776
	ctx.r3.s64 = ctx.r11.s64 + 30776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C707A4"))) PPC_WEAK_FUNC(sub_83C707A4);
PPC_FUNC_IMPL(__imp__sub_83C707A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C707A8"))) PPC_WEAK_FUNC(sub_83C707A8);
PPC_FUNC_IMPL(__imp__sub_83C707A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30784
	ctx.r3.s64 = ctx.r11.s64 + 30784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C707B4"))) PPC_WEAK_FUNC(sub_83C707B4);
PPC_FUNC_IMPL(__imp__sub_83C707B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C707B8"))) PPC_WEAK_FUNC(sub_83C707B8);
PPC_FUNC_IMPL(__imp__sub_83C707B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30792
	ctx.r3.s64 = ctx.r11.s64 + 30792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C707C4"))) PPC_WEAK_FUNC(sub_83C707C4);
PPC_FUNC_IMPL(__imp__sub_83C707C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C707C8"))) PPC_WEAK_FUNC(sub_83C707C8);
PPC_FUNC_IMPL(__imp__sub_83C707C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30800
	ctx.r3.s64 = ctx.r11.s64 + 30800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C707D4"))) PPC_WEAK_FUNC(sub_83C707D4);
PPC_FUNC_IMPL(__imp__sub_83C707D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C707D8"))) PPC_WEAK_FUNC(sub_83C707D8);
PPC_FUNC_IMPL(__imp__sub_83C707D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30808
	ctx.r3.s64 = ctx.r11.s64 + 30808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C707E4"))) PPC_WEAK_FUNC(sub_83C707E4);
PPC_FUNC_IMPL(__imp__sub_83C707E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C707E8"))) PPC_WEAK_FUNC(sub_83C707E8);
PPC_FUNC_IMPL(__imp__sub_83C707E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30816
	ctx.r3.s64 = ctx.r11.s64 + 30816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C707F4"))) PPC_WEAK_FUNC(sub_83C707F4);
PPC_FUNC_IMPL(__imp__sub_83C707F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C707F8"))) PPC_WEAK_FUNC(sub_83C707F8);
PPC_FUNC_IMPL(__imp__sub_83C707F8) {
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
	// addi r4,r11,-4852
	ctx.r4.s64 = ctx.r11.s64 + -4852;
	// addi r3,r10,-18968
	ctx.r3.s64 = ctx.r10.s64 + -18968;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C7081C;
	sub_8259CC28(ctx, base);
	// lis r9,-31788
	ctx.r9.s64 = -2083258368;
	// addi r3,r9,30864
	ctx.r3.s64 = ctx.r9.s64 + 30864;
	// bl 0x831cdcc8
	ctx.lr = 0x83C70828;
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

__attribute__((alias("__imp__sub_83C70838"))) PPC_WEAK_FUNC(sub_83C70838);
PPC_FUNC_IMPL(__imp__sub_83C70838) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13600
	ctx.r7.s64 = ctx.r8.s64 + -13600;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13600(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13600);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13600(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13600, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C70860"))) PPC_WEAK_FUNC(sub_83C70860);
PPC_FUNC_IMPL(__imp__sub_83C70860) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-18940
	ctx.r6.s64 = ctx.r7.s64 + -18940;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-19040(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -19040);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-13600(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -13600);
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
	// std r9,-18940(r7)
	PPC_STORE_U64(ctx.r7.u32 + -18940, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C708A8"))) PPC_WEAK_FUNC(sub_83C708A8);
PPC_FUNC_IMPL(__imp__sub_83C708A8) {
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
	// addi r3,r11,-13616
	ctx.r3.s64 = ctx.r11.s64 + -13616;
	// bl 0x83523120
	ctx.lr = 0x83C708C0;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,30824
	ctx.r3.s64 = ctx.r10.s64 + 30824;
	// bl 0x831cdcc8
	ctx.lr = 0x83C708CC;
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

__attribute__((alias("__imp__sub_83C708DC"))) PPC_WEAK_FUNC(sub_83C708DC);
PPC_FUNC_IMPL(__imp__sub_83C708DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C708E0"))) PPC_WEAK_FUNC(sub_83C708E0);
PPC_FUNC_IMPL(__imp__sub_83C708E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30840
	ctx.r3.s64 = ctx.r11.s64 + 30840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C708EC"))) PPC_WEAK_FUNC(sub_83C708EC);
PPC_FUNC_IMPL(__imp__sub_83C708EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C708F0"))) PPC_WEAK_FUNC(sub_83C708F0);
PPC_FUNC_IMPL(__imp__sub_83C708F0) {
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
	// addi r3,r11,-13592
	ctx.r3.s64 = ctx.r11.s64 + -13592;
	// bl 0x8259af80
	ctx.lr = 0x83C70908;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,30856
	ctx.r3.s64 = ctx.r10.s64 + 30856;
	// bl 0x831cdcc8
	ctx.lr = 0x83C70914;
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

__attribute__((alias("__imp__sub_83C70924"))) PPC_WEAK_FUNC(sub_83C70924);
PPC_FUNC_IMPL(__imp__sub_83C70924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70928"))) PPC_WEAK_FUNC(sub_83C70928);
PPC_FUNC_IMPL(__imp__sub_83C70928) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-13612
	ctx.r11.s64 = ctx.r8.s64 + -13612;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-18992(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18992);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,30848
	ctx.r3.s64 = ctx.r6.s64 + 30848;
	// stw r10,-13612(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13612, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70958"))) PPC_WEAK_FUNC(sub_83C70958);
PPC_FUNC_IMPL(__imp__sub_83C70958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30968
	ctx.r3.s64 = ctx.r11.s64 + 30968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70964"))) PPC_WEAK_FUNC(sub_83C70964);
PPC_FUNC_IMPL(__imp__sub_83C70964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70968"))) PPC_WEAK_FUNC(sub_83C70968);
PPC_FUNC_IMPL(__imp__sub_83C70968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30976
	ctx.r3.s64 = ctx.r11.s64 + 30976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70974"))) PPC_WEAK_FUNC(sub_83C70974);
PPC_FUNC_IMPL(__imp__sub_83C70974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70978"))) PPC_WEAK_FUNC(sub_83C70978);
PPC_FUNC_IMPL(__imp__sub_83C70978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30984
	ctx.r3.s64 = ctx.r11.s64 + 30984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70984"))) PPC_WEAK_FUNC(sub_83C70984);
PPC_FUNC_IMPL(__imp__sub_83C70984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70988"))) PPC_WEAK_FUNC(sub_83C70988);
PPC_FUNC_IMPL(__imp__sub_83C70988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,30992
	ctx.r3.s64 = ctx.r11.s64 + 30992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70994"))) PPC_WEAK_FUNC(sub_83C70994);
PPC_FUNC_IMPL(__imp__sub_83C70994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70998"))) PPC_WEAK_FUNC(sub_83C70998);
PPC_FUNC_IMPL(__imp__sub_83C70998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31000
	ctx.r3.s64 = ctx.r11.s64 + 31000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C709A4"))) PPC_WEAK_FUNC(sub_83C709A4);
PPC_FUNC_IMPL(__imp__sub_83C709A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C709A8"))) PPC_WEAK_FUNC(sub_83C709A8);
PPC_FUNC_IMPL(__imp__sub_83C709A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31008
	ctx.r3.s64 = ctx.r11.s64 + 31008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C709B4"))) PPC_WEAK_FUNC(sub_83C709B4);
PPC_FUNC_IMPL(__imp__sub_83C709B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C709B8"))) PPC_WEAK_FUNC(sub_83C709B8);
PPC_FUNC_IMPL(__imp__sub_83C709B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31016
	ctx.r3.s64 = ctx.r11.s64 + 31016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C709C4"))) PPC_WEAK_FUNC(sub_83C709C4);
PPC_FUNC_IMPL(__imp__sub_83C709C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C709C8"))) PPC_WEAK_FUNC(sub_83C709C8);
PPC_FUNC_IMPL(__imp__sub_83C709C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31024
	ctx.r3.s64 = ctx.r11.s64 + 31024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C709D4"))) PPC_WEAK_FUNC(sub_83C709D4);
PPC_FUNC_IMPL(__imp__sub_83C709D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C709D8"))) PPC_WEAK_FUNC(sub_83C709D8);
PPC_FUNC_IMPL(__imp__sub_83C709D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31032
	ctx.r3.s64 = ctx.r11.s64 + 31032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C709E4"))) PPC_WEAK_FUNC(sub_83C709E4);
PPC_FUNC_IMPL(__imp__sub_83C709E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C709E8"))) PPC_WEAK_FUNC(sub_83C709E8);
PPC_FUNC_IMPL(__imp__sub_83C709E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31040
	ctx.r3.s64 = ctx.r11.s64 + 31040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C709F4"))) PPC_WEAK_FUNC(sub_83C709F4);
PPC_FUNC_IMPL(__imp__sub_83C709F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C709F8"))) PPC_WEAK_FUNC(sub_83C709F8);
PPC_FUNC_IMPL(__imp__sub_83C709F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31048
	ctx.r3.s64 = ctx.r11.s64 + 31048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70A04"))) PPC_WEAK_FUNC(sub_83C70A04);
PPC_FUNC_IMPL(__imp__sub_83C70A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70A08"))) PPC_WEAK_FUNC(sub_83C70A08);
PPC_FUNC_IMPL(__imp__sub_83C70A08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31056
	ctx.r3.s64 = ctx.r11.s64 + 31056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70A14"))) PPC_WEAK_FUNC(sub_83C70A14);
PPC_FUNC_IMPL(__imp__sub_83C70A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70A18"))) PPC_WEAK_FUNC(sub_83C70A18);
PPC_FUNC_IMPL(__imp__sub_83C70A18) {
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
	// addi r4,r11,-3872
	ctx.r4.s64 = ctx.r11.s64 + -3872;
	// addi r3,r10,-18812
	ctx.r3.s64 = ctx.r10.s64 + -18812;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C70A3C;
	sub_8259CC28(ctx, base);
	// lis r9,-31788
	ctx.r9.s64 = -2083258368;
	// addi r3,r9,31064
	ctx.r3.s64 = ctx.r9.s64 + 31064;
	// bl 0x831cdcc8
	ctx.lr = 0x83C70A48;
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

__attribute__((alias("__imp__sub_83C70A58"))) PPC_WEAK_FUNC(sub_83C70A58);
PPC_FUNC_IMPL(__imp__sub_83C70A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31168
	ctx.r3.s64 = ctx.r11.s64 + 31168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70A64"))) PPC_WEAK_FUNC(sub_83C70A64);
PPC_FUNC_IMPL(__imp__sub_83C70A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70A68"))) PPC_WEAK_FUNC(sub_83C70A68);
PPC_FUNC_IMPL(__imp__sub_83C70A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31176
	ctx.r3.s64 = ctx.r11.s64 + 31176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70A74"))) PPC_WEAK_FUNC(sub_83C70A74);
PPC_FUNC_IMPL(__imp__sub_83C70A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70A78"))) PPC_WEAK_FUNC(sub_83C70A78);
PPC_FUNC_IMPL(__imp__sub_83C70A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31184
	ctx.r3.s64 = ctx.r11.s64 + 31184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70A84"))) PPC_WEAK_FUNC(sub_83C70A84);
PPC_FUNC_IMPL(__imp__sub_83C70A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70A88"))) PPC_WEAK_FUNC(sub_83C70A88);
PPC_FUNC_IMPL(__imp__sub_83C70A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31192
	ctx.r3.s64 = ctx.r11.s64 + 31192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70A94"))) PPC_WEAK_FUNC(sub_83C70A94);
PPC_FUNC_IMPL(__imp__sub_83C70A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70A98"))) PPC_WEAK_FUNC(sub_83C70A98);
PPC_FUNC_IMPL(__imp__sub_83C70A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31200
	ctx.r3.s64 = ctx.r11.s64 + 31200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70AA4"))) PPC_WEAK_FUNC(sub_83C70AA4);
PPC_FUNC_IMPL(__imp__sub_83C70AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70AA8"))) PPC_WEAK_FUNC(sub_83C70AA8);
PPC_FUNC_IMPL(__imp__sub_83C70AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31208
	ctx.r3.s64 = ctx.r11.s64 + 31208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70AB4"))) PPC_WEAK_FUNC(sub_83C70AB4);
PPC_FUNC_IMPL(__imp__sub_83C70AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70AB8"))) PPC_WEAK_FUNC(sub_83C70AB8);
PPC_FUNC_IMPL(__imp__sub_83C70AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31216
	ctx.r3.s64 = ctx.r11.s64 + 31216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70AC4"))) PPC_WEAK_FUNC(sub_83C70AC4);
PPC_FUNC_IMPL(__imp__sub_83C70AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70AC8"))) PPC_WEAK_FUNC(sub_83C70AC8);
PPC_FUNC_IMPL(__imp__sub_83C70AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31224
	ctx.r3.s64 = ctx.r11.s64 + 31224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70AD4"))) PPC_WEAK_FUNC(sub_83C70AD4);
PPC_FUNC_IMPL(__imp__sub_83C70AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70AD8"))) PPC_WEAK_FUNC(sub_83C70AD8);
PPC_FUNC_IMPL(__imp__sub_83C70AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31232
	ctx.r3.s64 = ctx.r11.s64 + 31232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70AE4"))) PPC_WEAK_FUNC(sub_83C70AE4);
PPC_FUNC_IMPL(__imp__sub_83C70AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70AE8"))) PPC_WEAK_FUNC(sub_83C70AE8);
PPC_FUNC_IMPL(__imp__sub_83C70AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31240
	ctx.r3.s64 = ctx.r11.s64 + 31240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70AF4"))) PPC_WEAK_FUNC(sub_83C70AF4);
PPC_FUNC_IMPL(__imp__sub_83C70AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70AF8"))) PPC_WEAK_FUNC(sub_83C70AF8);
PPC_FUNC_IMPL(__imp__sub_83C70AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31248
	ctx.r3.s64 = ctx.r11.s64 + 31248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70B04"))) PPC_WEAK_FUNC(sub_83C70B04);
PPC_FUNC_IMPL(__imp__sub_83C70B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70B08"))) PPC_WEAK_FUNC(sub_83C70B08);
PPC_FUNC_IMPL(__imp__sub_83C70B08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31256
	ctx.r3.s64 = ctx.r11.s64 + 31256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70B14"))) PPC_WEAK_FUNC(sub_83C70B14);
PPC_FUNC_IMPL(__imp__sub_83C70B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70B18"))) PPC_WEAK_FUNC(sub_83C70B18);
PPC_FUNC_IMPL(__imp__sub_83C70B18) {
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
	// addi r4,r11,-3344
	ctx.r4.s64 = ctx.r11.s64 + -3344;
	// addi r3,r10,-18680
	ctx.r3.s64 = ctx.r10.s64 + -18680;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C70B3C;
	sub_8259CC28(ctx, base);
	// lis r9,-31788
	ctx.r9.s64 = -2083258368;
	// addi r3,r9,31264
	ctx.r3.s64 = ctx.r9.s64 + 31264;
	// bl 0x831cdcc8
	ctx.lr = 0x83C70B48;
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

__attribute__((alias("__imp__sub_83C70B58"))) PPC_WEAK_FUNC(sub_83C70B58);
PPC_FUNC_IMPL(__imp__sub_83C70B58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31368
	ctx.r3.s64 = ctx.r11.s64 + 31368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70B64"))) PPC_WEAK_FUNC(sub_83C70B64);
PPC_FUNC_IMPL(__imp__sub_83C70B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70B68"))) PPC_WEAK_FUNC(sub_83C70B68);
PPC_FUNC_IMPL(__imp__sub_83C70B68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31376
	ctx.r3.s64 = ctx.r11.s64 + 31376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70B74"))) PPC_WEAK_FUNC(sub_83C70B74);
PPC_FUNC_IMPL(__imp__sub_83C70B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70B78"))) PPC_WEAK_FUNC(sub_83C70B78);
PPC_FUNC_IMPL(__imp__sub_83C70B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31384
	ctx.r3.s64 = ctx.r11.s64 + 31384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70B84"))) PPC_WEAK_FUNC(sub_83C70B84);
PPC_FUNC_IMPL(__imp__sub_83C70B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70B88"))) PPC_WEAK_FUNC(sub_83C70B88);
PPC_FUNC_IMPL(__imp__sub_83C70B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31392
	ctx.r3.s64 = ctx.r11.s64 + 31392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70B94"))) PPC_WEAK_FUNC(sub_83C70B94);
PPC_FUNC_IMPL(__imp__sub_83C70B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70B98"))) PPC_WEAK_FUNC(sub_83C70B98);
PPC_FUNC_IMPL(__imp__sub_83C70B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31400
	ctx.r3.s64 = ctx.r11.s64 + 31400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70BA4"))) PPC_WEAK_FUNC(sub_83C70BA4);
PPC_FUNC_IMPL(__imp__sub_83C70BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70BA8"))) PPC_WEAK_FUNC(sub_83C70BA8);
PPC_FUNC_IMPL(__imp__sub_83C70BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31408
	ctx.r3.s64 = ctx.r11.s64 + 31408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70BB4"))) PPC_WEAK_FUNC(sub_83C70BB4);
PPC_FUNC_IMPL(__imp__sub_83C70BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70BB8"))) PPC_WEAK_FUNC(sub_83C70BB8);
PPC_FUNC_IMPL(__imp__sub_83C70BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31416
	ctx.r3.s64 = ctx.r11.s64 + 31416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70BC4"))) PPC_WEAK_FUNC(sub_83C70BC4);
PPC_FUNC_IMPL(__imp__sub_83C70BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70BC8"))) PPC_WEAK_FUNC(sub_83C70BC8);
PPC_FUNC_IMPL(__imp__sub_83C70BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31424
	ctx.r3.s64 = ctx.r11.s64 + 31424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70BD4"))) PPC_WEAK_FUNC(sub_83C70BD4);
PPC_FUNC_IMPL(__imp__sub_83C70BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70BD8"))) PPC_WEAK_FUNC(sub_83C70BD8);
PPC_FUNC_IMPL(__imp__sub_83C70BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31432
	ctx.r3.s64 = ctx.r11.s64 + 31432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70BE4"))) PPC_WEAK_FUNC(sub_83C70BE4);
PPC_FUNC_IMPL(__imp__sub_83C70BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70BE8"))) PPC_WEAK_FUNC(sub_83C70BE8);
PPC_FUNC_IMPL(__imp__sub_83C70BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31440
	ctx.r3.s64 = ctx.r11.s64 + 31440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70BF4"))) PPC_WEAK_FUNC(sub_83C70BF4);
PPC_FUNC_IMPL(__imp__sub_83C70BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70BF8"))) PPC_WEAK_FUNC(sub_83C70BF8);
PPC_FUNC_IMPL(__imp__sub_83C70BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31448
	ctx.r3.s64 = ctx.r11.s64 + 31448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70C04"))) PPC_WEAK_FUNC(sub_83C70C04);
PPC_FUNC_IMPL(__imp__sub_83C70C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70C08"))) PPC_WEAK_FUNC(sub_83C70C08);
PPC_FUNC_IMPL(__imp__sub_83C70C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31456
	ctx.r3.s64 = ctx.r11.s64 + 31456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70C14"))) PPC_WEAK_FUNC(sub_83C70C14);
PPC_FUNC_IMPL(__imp__sub_83C70C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70C18"))) PPC_WEAK_FUNC(sub_83C70C18);
PPC_FUNC_IMPL(__imp__sub_83C70C18) {
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
	// addi r3,r11,-13240
	ctx.r3.s64 = ctx.r11.s64 + -13240;
	// bl 0x83523120
	ctx.lr = 0x83C70C30;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,31464
	ctx.r3.s64 = ctx.r10.s64 + 31464;
	// bl 0x831cdcc8
	ctx.lr = 0x83C70C3C;
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

__attribute__((alias("__imp__sub_83C70C4C"))) PPC_WEAK_FUNC(sub_83C70C4C);
PPC_FUNC_IMPL(__imp__sub_83C70C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70C50"))) PPC_WEAK_FUNC(sub_83C70C50);
PPC_FUNC_IMPL(__imp__sub_83C70C50) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13224
	ctx.r7.s64 = ctx.r8.s64 + -13224;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13224(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13224);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13224(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13224, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C70C78"))) PPC_WEAK_FUNC(sub_83C70C78);
PPC_FUNC_IMPL(__imp__sub_83C70C78) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-18548
	ctx.r6.s64 = ctx.r7.s64 + -18548;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-18620(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -18620);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-13224(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -13224);
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
	// std r9,-18548(r7)
	PPC_STORE_U64(ctx.r7.u32 + -18548, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C70CC0"))) PPC_WEAK_FUNC(sub_83C70CC0);
PPC_FUNC_IMPL(__imp__sub_83C70CC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31480
	ctx.r3.s64 = ctx.r11.s64 + 31480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70CCC"))) PPC_WEAK_FUNC(sub_83C70CCC);
PPC_FUNC_IMPL(__imp__sub_83C70CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70CD0"))) PPC_WEAK_FUNC(sub_83C70CD0);
PPC_FUNC_IMPL(__imp__sub_83C70CD0) {
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
	// addi r3,r11,-13216
	ctx.r3.s64 = ctx.r11.s64 + -13216;
	// bl 0x8259af80
	ctx.lr = 0x83C70CE8;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,31496
	ctx.r3.s64 = ctx.r10.s64 + 31496;
	// bl 0x831cdcc8
	ctx.lr = 0x83C70CF4;
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

__attribute__((alias("__imp__sub_83C70D04"))) PPC_WEAK_FUNC(sub_83C70D04);
PPC_FUNC_IMPL(__imp__sub_83C70D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70D08"))) PPC_WEAK_FUNC(sub_83C70D08);
PPC_FUNC_IMPL(__imp__sub_83C70D08) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-13236
	ctx.r11.s64 = ctx.r8.s64 + -13236;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-18572(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18572);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,31488
	ctx.r3.s64 = ctx.r6.s64 + 31488;
	// stw r10,-13236(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13236, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70D38"))) PPC_WEAK_FUNC(sub_83C70D38);
PPC_FUNC_IMPL(__imp__sub_83C70D38) {
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
	// addi r4,r11,-2580
	ctx.r4.s64 = ctx.r11.s64 + -2580;
	// addi r3,r10,-18524
	ctx.r3.s64 = ctx.r10.s64 + -18524;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C70D5C;
	sub_8259CC28(ctx, base);
	// lis r9,-31788
	ctx.r9.s64 = -2083258368;
	// addi r3,r9,31504
	ctx.r3.s64 = ctx.r9.s64 + 31504;
	// bl 0x831cdcc8
	ctx.lr = 0x83C70D68;
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

__attribute__((alias("__imp__sub_83C70D78"))) PPC_WEAK_FUNC(sub_83C70D78);
PPC_FUNC_IMPL(__imp__sub_83C70D78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31608
	ctx.r3.s64 = ctx.r11.s64 + 31608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70D84"))) PPC_WEAK_FUNC(sub_83C70D84);
PPC_FUNC_IMPL(__imp__sub_83C70D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70D88"))) PPC_WEAK_FUNC(sub_83C70D88);
PPC_FUNC_IMPL(__imp__sub_83C70D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31616
	ctx.r3.s64 = ctx.r11.s64 + 31616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70D94"))) PPC_WEAK_FUNC(sub_83C70D94);
PPC_FUNC_IMPL(__imp__sub_83C70D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70D98"))) PPC_WEAK_FUNC(sub_83C70D98);
PPC_FUNC_IMPL(__imp__sub_83C70D98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31624
	ctx.r3.s64 = ctx.r11.s64 + 31624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70DA4"))) PPC_WEAK_FUNC(sub_83C70DA4);
PPC_FUNC_IMPL(__imp__sub_83C70DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70DA8"))) PPC_WEAK_FUNC(sub_83C70DA8);
PPC_FUNC_IMPL(__imp__sub_83C70DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31632
	ctx.r3.s64 = ctx.r11.s64 + 31632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70DB4"))) PPC_WEAK_FUNC(sub_83C70DB4);
PPC_FUNC_IMPL(__imp__sub_83C70DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70DB8"))) PPC_WEAK_FUNC(sub_83C70DB8);
PPC_FUNC_IMPL(__imp__sub_83C70DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31640
	ctx.r3.s64 = ctx.r11.s64 + 31640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70DC4"))) PPC_WEAK_FUNC(sub_83C70DC4);
PPC_FUNC_IMPL(__imp__sub_83C70DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70DC8"))) PPC_WEAK_FUNC(sub_83C70DC8);
PPC_FUNC_IMPL(__imp__sub_83C70DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31648
	ctx.r3.s64 = ctx.r11.s64 + 31648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70DD4"))) PPC_WEAK_FUNC(sub_83C70DD4);
PPC_FUNC_IMPL(__imp__sub_83C70DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70DD8"))) PPC_WEAK_FUNC(sub_83C70DD8);
PPC_FUNC_IMPL(__imp__sub_83C70DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31656
	ctx.r3.s64 = ctx.r11.s64 + 31656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70DE4"))) PPC_WEAK_FUNC(sub_83C70DE4);
PPC_FUNC_IMPL(__imp__sub_83C70DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70DE8"))) PPC_WEAK_FUNC(sub_83C70DE8);
PPC_FUNC_IMPL(__imp__sub_83C70DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31664
	ctx.r3.s64 = ctx.r11.s64 + 31664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70DF4"))) PPC_WEAK_FUNC(sub_83C70DF4);
PPC_FUNC_IMPL(__imp__sub_83C70DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70DF8"))) PPC_WEAK_FUNC(sub_83C70DF8);
PPC_FUNC_IMPL(__imp__sub_83C70DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31672
	ctx.r3.s64 = ctx.r11.s64 + 31672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70E04"))) PPC_WEAK_FUNC(sub_83C70E04);
PPC_FUNC_IMPL(__imp__sub_83C70E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70E08"))) PPC_WEAK_FUNC(sub_83C70E08);
PPC_FUNC_IMPL(__imp__sub_83C70E08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31680
	ctx.r3.s64 = ctx.r11.s64 + 31680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70E14"))) PPC_WEAK_FUNC(sub_83C70E14);
PPC_FUNC_IMPL(__imp__sub_83C70E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70E18"))) PPC_WEAK_FUNC(sub_83C70E18);
PPC_FUNC_IMPL(__imp__sub_83C70E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31688
	ctx.r3.s64 = ctx.r11.s64 + 31688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70E24"))) PPC_WEAK_FUNC(sub_83C70E24);
PPC_FUNC_IMPL(__imp__sub_83C70E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70E28"))) PPC_WEAK_FUNC(sub_83C70E28);
PPC_FUNC_IMPL(__imp__sub_83C70E28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31696
	ctx.r3.s64 = ctx.r11.s64 + 31696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70E34"))) PPC_WEAK_FUNC(sub_83C70E34);
PPC_FUNC_IMPL(__imp__sub_83C70E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70E38"))) PPC_WEAK_FUNC(sub_83C70E38);
PPC_FUNC_IMPL(__imp__sub_83C70E38) {
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
	// addi r3,r11,-12872
	ctx.r3.s64 = ctx.r11.s64 + -12872;
	// bl 0x83523120
	ctx.lr = 0x83C70E50;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,31704
	ctx.r3.s64 = ctx.r10.s64 + 31704;
	// bl 0x831cdcc8
	ctx.lr = 0x83C70E5C;
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

__attribute__((alias("__imp__sub_83C70E6C"))) PPC_WEAK_FUNC(sub_83C70E6C);
PPC_FUNC_IMPL(__imp__sub_83C70E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70E70"))) PPC_WEAK_FUNC(sub_83C70E70);
PPC_FUNC_IMPL(__imp__sub_83C70E70) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-12856
	ctx.r7.s64 = ctx.r8.s64 + -12856;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-12856(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12856);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-12856(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12856, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C70E98"))) PPC_WEAK_FUNC(sub_83C70E98);
PPC_FUNC_IMPL(__imp__sub_83C70E98) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-18392
	ctx.r6.s64 = ctx.r7.s64 + -18392;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-18464(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -18464);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-12856(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12856);
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
	// std r9,-18392(r7)
	PPC_STORE_U64(ctx.r7.u32 + -18392, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C70EE0"))) PPC_WEAK_FUNC(sub_83C70EE0);
PPC_FUNC_IMPL(__imp__sub_83C70EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31720
	ctx.r3.s64 = ctx.r11.s64 + 31720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70EEC"))) PPC_WEAK_FUNC(sub_83C70EEC);
PPC_FUNC_IMPL(__imp__sub_83C70EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70EF0"))) PPC_WEAK_FUNC(sub_83C70EF0);
PPC_FUNC_IMPL(__imp__sub_83C70EF0) {
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
	// addi r3,r11,-12848
	ctx.r3.s64 = ctx.r11.s64 + -12848;
	// bl 0x8259af80
	ctx.lr = 0x83C70F08;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,31736
	ctx.r3.s64 = ctx.r10.s64 + 31736;
	// bl 0x831cdcc8
	ctx.lr = 0x83C70F14;
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

__attribute__((alias("__imp__sub_83C70F24"))) PPC_WEAK_FUNC(sub_83C70F24);
PPC_FUNC_IMPL(__imp__sub_83C70F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70F28"))) PPC_WEAK_FUNC(sub_83C70F28);
PPC_FUNC_IMPL(__imp__sub_83C70F28) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-12868
	ctx.r11.s64 = ctx.r8.s64 + -12868;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-18416(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18416);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,31728
	ctx.r3.s64 = ctx.r6.s64 + 31728;
	// stw r10,-12868(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12868, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70F58"))) PPC_WEAK_FUNC(sub_83C70F58);
PPC_FUNC_IMPL(__imp__sub_83C70F58) {
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
	// addi r4,r11,-2044
	ctx.r4.s64 = ctx.r11.s64 + -2044;
	// addi r3,r10,-18368
	ctx.r3.s64 = ctx.r10.s64 + -18368;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C70F7C;
	sub_8259CC28(ctx, base);
	// lis r9,-31788
	ctx.r9.s64 = -2083258368;
	// addi r3,r9,31744
	ctx.r3.s64 = ctx.r9.s64 + 31744;
	// bl 0x831cdcc8
	ctx.lr = 0x83C70F88;
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

__attribute__((alias("__imp__sub_83C70F98"))) PPC_WEAK_FUNC(sub_83C70F98);
PPC_FUNC_IMPL(__imp__sub_83C70F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31848
	ctx.r3.s64 = ctx.r11.s64 + 31848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70FA4"))) PPC_WEAK_FUNC(sub_83C70FA4);
PPC_FUNC_IMPL(__imp__sub_83C70FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70FA8"))) PPC_WEAK_FUNC(sub_83C70FA8);
PPC_FUNC_IMPL(__imp__sub_83C70FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31856
	ctx.r3.s64 = ctx.r11.s64 + 31856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70FB4"))) PPC_WEAK_FUNC(sub_83C70FB4);
PPC_FUNC_IMPL(__imp__sub_83C70FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70FB8"))) PPC_WEAK_FUNC(sub_83C70FB8);
PPC_FUNC_IMPL(__imp__sub_83C70FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31864
	ctx.r3.s64 = ctx.r11.s64 + 31864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70FC4"))) PPC_WEAK_FUNC(sub_83C70FC4);
PPC_FUNC_IMPL(__imp__sub_83C70FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70FC8"))) PPC_WEAK_FUNC(sub_83C70FC8);
PPC_FUNC_IMPL(__imp__sub_83C70FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31872
	ctx.r3.s64 = ctx.r11.s64 + 31872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70FD4"))) PPC_WEAK_FUNC(sub_83C70FD4);
PPC_FUNC_IMPL(__imp__sub_83C70FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70FD8"))) PPC_WEAK_FUNC(sub_83C70FD8);
PPC_FUNC_IMPL(__imp__sub_83C70FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31880
	ctx.r3.s64 = ctx.r11.s64 + 31880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70FE4"))) PPC_WEAK_FUNC(sub_83C70FE4);
PPC_FUNC_IMPL(__imp__sub_83C70FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70FE8"))) PPC_WEAK_FUNC(sub_83C70FE8);
PPC_FUNC_IMPL(__imp__sub_83C70FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31888
	ctx.r3.s64 = ctx.r11.s64 + 31888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C70FF4"))) PPC_WEAK_FUNC(sub_83C70FF4);
PPC_FUNC_IMPL(__imp__sub_83C70FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C70FF8"))) PPC_WEAK_FUNC(sub_83C70FF8);
PPC_FUNC_IMPL(__imp__sub_83C70FF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31896
	ctx.r3.s64 = ctx.r11.s64 + 31896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C71004"))) PPC_WEAK_FUNC(sub_83C71004);
PPC_FUNC_IMPL(__imp__sub_83C71004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C71008"))) PPC_WEAK_FUNC(sub_83C71008);
PPC_FUNC_IMPL(__imp__sub_83C71008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31904
	ctx.r3.s64 = ctx.r11.s64 + 31904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C71014"))) PPC_WEAK_FUNC(sub_83C71014);
PPC_FUNC_IMPL(__imp__sub_83C71014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C71018"))) PPC_WEAK_FUNC(sub_83C71018);
PPC_FUNC_IMPL(__imp__sub_83C71018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31912
	ctx.r3.s64 = ctx.r11.s64 + 31912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C71024"))) PPC_WEAK_FUNC(sub_83C71024);
PPC_FUNC_IMPL(__imp__sub_83C71024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C71028"))) PPC_WEAK_FUNC(sub_83C71028);
PPC_FUNC_IMPL(__imp__sub_83C71028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31920
	ctx.r3.s64 = ctx.r11.s64 + 31920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C71034"))) PPC_WEAK_FUNC(sub_83C71034);
PPC_FUNC_IMPL(__imp__sub_83C71034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C71038"))) PPC_WEAK_FUNC(sub_83C71038);
PPC_FUNC_IMPL(__imp__sub_83C71038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31928
	ctx.r3.s64 = ctx.r11.s64 + 31928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C71044"))) PPC_WEAK_FUNC(sub_83C71044);
PPC_FUNC_IMPL(__imp__sub_83C71044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C71048"))) PPC_WEAK_FUNC(sub_83C71048);
PPC_FUNC_IMPL(__imp__sub_83C71048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31936
	ctx.r3.s64 = ctx.r11.s64 + 31936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C71054"))) PPC_WEAK_FUNC(sub_83C71054);
PPC_FUNC_IMPL(__imp__sub_83C71054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C71058"))) PPC_WEAK_FUNC(sub_83C71058);
PPC_FUNC_IMPL(__imp__sub_83C71058) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-12488
	ctx.r7.s64 = ctx.r8.s64 + -12488;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-12488(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12488);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-12488(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12488, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C71080"))) PPC_WEAK_FUNC(sub_83C71080);
PPC_FUNC_IMPL(__imp__sub_83C71080) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-18236
	ctx.r6.s64 = ctx.r7.s64 + -18236;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-18308(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -18308);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-12488(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12488);
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
	// std r9,-18236(r7)
	PPC_STORE_U64(ctx.r7.u32 + -18236, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C710C8"))) PPC_WEAK_FUNC(sub_83C710C8);
PPC_FUNC_IMPL(__imp__sub_83C710C8) {
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
	// addi r3,r11,-12504
	ctx.r3.s64 = ctx.r11.s64 + -12504;
	// bl 0x83523120
	ctx.lr = 0x83C710E0;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,31944
	ctx.r3.s64 = ctx.r10.s64 + 31944;
	// bl 0x831cdcc8
	ctx.lr = 0x83C710EC;
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

__attribute__((alias("__imp__sub_83C710FC"))) PPC_WEAK_FUNC(sub_83C710FC);
PPC_FUNC_IMPL(__imp__sub_83C710FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C71100"))) PPC_WEAK_FUNC(sub_83C71100);
PPC_FUNC_IMPL(__imp__sub_83C71100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31960
	ctx.r3.s64 = ctx.r11.s64 + 31960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7110C"))) PPC_WEAK_FUNC(sub_83C7110C);
PPC_FUNC_IMPL(__imp__sub_83C7110C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C71110"))) PPC_WEAK_FUNC(sub_83C71110);
PPC_FUNC_IMPL(__imp__sub_83C71110) {
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
	// addi r3,r11,-12480
	ctx.r3.s64 = ctx.r11.s64 + -12480;
	// bl 0x8259af80
	ctx.lr = 0x83C71128;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,31976
	ctx.r3.s64 = ctx.r10.s64 + 31976;
	// bl 0x831cdcc8
	ctx.lr = 0x83C71134;
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

__attribute__((alias("__imp__sub_83C71144"))) PPC_WEAK_FUNC(sub_83C71144);
PPC_FUNC_IMPL(__imp__sub_83C71144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C71148"))) PPC_WEAK_FUNC(sub_83C71148);
PPC_FUNC_IMPL(__imp__sub_83C71148) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-12500
	ctx.r11.s64 = ctx.r8.s64 + -12500;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-18260(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18260);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,31968
	ctx.r3.s64 = ctx.r6.s64 + 31968;
	// stw r10,-12500(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12500, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C71178"))) PPC_WEAK_FUNC(sub_83C71178);
PPC_FUNC_IMPL(__imp__sub_83C71178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31984
	ctx.r3.s64 = ctx.r11.s64 + 31984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C71184"))) PPC_WEAK_FUNC(sub_83C71184);
PPC_FUNC_IMPL(__imp__sub_83C71184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C71188"))) PPC_WEAK_FUNC(sub_83C71188);
PPC_FUNC_IMPL(__imp__sub_83C71188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,31992
	ctx.r3.s64 = ctx.r11.s64 + 31992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C71194"))) PPC_WEAK_FUNC(sub_83C71194);
PPC_FUNC_IMPL(__imp__sub_83C71194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C71198"))) PPC_WEAK_FUNC(sub_83C71198);
PPC_FUNC_IMPL(__imp__sub_83C71198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,32000
	ctx.r3.s64 = ctx.r11.s64 + 32000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C711A4"))) PPC_WEAK_FUNC(sub_83C711A4);
PPC_FUNC_IMPL(__imp__sub_83C711A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C711A8"))) PPC_WEAK_FUNC(sub_83C711A8);
PPC_FUNC_IMPL(__imp__sub_83C711A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,32008
	ctx.r3.s64 = ctx.r11.s64 + 32008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C711B4"))) PPC_WEAK_FUNC(sub_83C711B4);
PPC_FUNC_IMPL(__imp__sub_83C711B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C711B8"))) PPC_WEAK_FUNC(sub_83C711B8);
PPC_FUNC_IMPL(__imp__sub_83C711B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,32016
	ctx.r3.s64 = ctx.r11.s64 + 32016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C711C4"))) PPC_WEAK_FUNC(sub_83C711C4);
PPC_FUNC_IMPL(__imp__sub_83C711C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C711C8"))) PPC_WEAK_FUNC(sub_83C711C8);
PPC_FUNC_IMPL(__imp__sub_83C711C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,32024
	ctx.r3.s64 = ctx.r11.s64 + 32024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C711D4"))) PPC_WEAK_FUNC(sub_83C711D4);
PPC_FUNC_IMPL(__imp__sub_83C711D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C711D8"))) PPC_WEAK_FUNC(sub_83C711D8);
PPC_FUNC_IMPL(__imp__sub_83C711D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,32032
	ctx.r3.s64 = ctx.r11.s64 + 32032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C711E4"))) PPC_WEAK_FUNC(sub_83C711E4);
PPC_FUNC_IMPL(__imp__sub_83C711E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C711E8"))) PPC_WEAK_FUNC(sub_83C711E8);
PPC_FUNC_IMPL(__imp__sub_83C711E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,32040
	ctx.r3.s64 = ctx.r11.s64 + 32040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C711F4"))) PPC_WEAK_FUNC(sub_83C711F4);
PPC_FUNC_IMPL(__imp__sub_83C711F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C711F8"))) PPC_WEAK_FUNC(sub_83C711F8);
PPC_FUNC_IMPL(__imp__sub_83C711F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,32048
	ctx.r3.s64 = ctx.r11.s64 + 32048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C71204"))) PPC_WEAK_FUNC(sub_83C71204);
PPC_FUNC_IMPL(__imp__sub_83C71204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C71208"))) PPC_WEAK_FUNC(sub_83C71208);
PPC_FUNC_IMPL(__imp__sub_83C71208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,32056
	ctx.r3.s64 = ctx.r11.s64 + 32056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C71214"))) PPC_WEAK_FUNC(sub_83C71214);
PPC_FUNC_IMPL(__imp__sub_83C71214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C71218"))) PPC_WEAK_FUNC(sub_83C71218);
PPC_FUNC_IMPL(__imp__sub_83C71218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,32064
	ctx.r3.s64 = ctx.r11.s64 + 32064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C71224"))) PPC_WEAK_FUNC(sub_83C71224);
PPC_FUNC_IMPL(__imp__sub_83C71224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C71228"))) PPC_WEAK_FUNC(sub_83C71228);
PPC_FUNC_IMPL(__imp__sub_83C71228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,32072
	ctx.r3.s64 = ctx.r11.s64 + 32072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C71234"))) PPC_WEAK_FUNC(sub_83C71234);
PPC_FUNC_IMPL(__imp__sub_83C71234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C71238"))) PPC_WEAK_FUNC(sub_83C71238);
PPC_FUNC_IMPL(__imp__sub_83C71238) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-12132
	ctx.r7.s64 = ctx.r8.s64 + -12132;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-12132(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12132);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-12132(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12132, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C71260"))) PPC_WEAK_FUNC(sub_83C71260);
PPC_FUNC_IMPL(__imp__sub_83C71260) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-18108
	ctx.r6.s64 = ctx.r7.s64 + -18108;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-18180(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -18180);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-12132(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12132);
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
	// std r9,-18108(r7)
	PPC_STORE_U64(ctx.r7.u32 + -18108, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C712A8"))) PPC_WEAK_FUNC(sub_83C712A8);
PPC_FUNC_IMPL(__imp__sub_83C712A8) {
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
	// addi r3,r11,-12136
	ctx.r3.s64 = ctx.r11.s64 + -12136;
	// bl 0x83523120
	ctx.lr = 0x83C712C0;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,32080
	ctx.r3.s64 = ctx.r10.s64 + 32080;
	// bl 0x831cdcc8
	ctx.lr = 0x83C712CC;
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

__attribute__((alias("__imp__sub_83C712DC"))) PPC_WEAK_FUNC(sub_83C712DC);
PPC_FUNC_IMPL(__imp__sub_83C712DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C712E0"))) PPC_WEAK_FUNC(sub_83C712E0);
PPC_FUNC_IMPL(__imp__sub_83C712E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,32096
	ctx.r3.s64 = ctx.r11.s64 + 32096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C712EC"))) PPC_WEAK_FUNC(sub_83C712EC);
PPC_FUNC_IMPL(__imp__sub_83C712EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C712F0"))) PPC_WEAK_FUNC(sub_83C712F0);
PPC_FUNC_IMPL(__imp__sub_83C712F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,32104
	ctx.r3.s64 = ctx.r11.s64 + 32104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C712FC"))) PPC_WEAK_FUNC(sub_83C712FC);
PPC_FUNC_IMPL(__imp__sub_83C712FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C71300"))) PPC_WEAK_FUNC(sub_83C71300);
PPC_FUNC_IMPL(__imp__sub_83C71300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,32112
	ctx.r3.s64 = ctx.r11.s64 + 32112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7130C"))) PPC_WEAK_FUNC(sub_83C7130C);
PPC_FUNC_IMPL(__imp__sub_83C7130C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C71310"))) PPC_WEAK_FUNC(sub_83C71310);
PPC_FUNC_IMPL(__imp__sub_83C71310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,32120
	ctx.r3.s64 = ctx.r11.s64 + 32120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7131C"))) PPC_WEAK_FUNC(sub_83C7131C);
PPC_FUNC_IMPL(__imp__sub_83C7131C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C71320"))) PPC_WEAK_FUNC(sub_83C71320);
PPC_FUNC_IMPL(__imp__sub_83C71320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,32128
	ctx.r3.s64 = ctx.r11.s64 + 32128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7132C"))) PPC_WEAK_FUNC(sub_83C7132C);
PPC_FUNC_IMPL(__imp__sub_83C7132C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C71330"))) PPC_WEAK_FUNC(sub_83C71330);
PPC_FUNC_IMPL(__imp__sub_83C71330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,32136
	ctx.r3.s64 = ctx.r11.s64 + 32136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7133C"))) PPC_WEAK_FUNC(sub_83C7133C);
PPC_FUNC_IMPL(__imp__sub_83C7133C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C71340"))) PPC_WEAK_FUNC(sub_83C71340);
PPC_FUNC_IMPL(__imp__sub_83C71340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,32144
	ctx.r3.s64 = ctx.r11.s64 + 32144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7134C"))) PPC_WEAK_FUNC(sub_83C7134C);
PPC_FUNC_IMPL(__imp__sub_83C7134C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C71350"))) PPC_WEAK_FUNC(sub_83C71350);
PPC_FUNC_IMPL(__imp__sub_83C71350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,32152
	ctx.r3.s64 = ctx.r11.s64 + 32152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7135C"))) PPC_WEAK_FUNC(sub_83C7135C);
PPC_FUNC_IMPL(__imp__sub_83C7135C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C71360"))) PPC_WEAK_FUNC(sub_83C71360);
PPC_FUNC_IMPL(__imp__sub_83C71360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,32160
	ctx.r3.s64 = ctx.r11.s64 + 32160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7136C"))) PPC_WEAK_FUNC(sub_83C7136C);
PPC_FUNC_IMPL(__imp__sub_83C7136C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C71370"))) PPC_WEAK_FUNC(sub_83C71370);
PPC_FUNC_IMPL(__imp__sub_83C71370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,32168
	ctx.r3.s64 = ctx.r11.s64 + 32168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7137C"))) PPC_WEAK_FUNC(sub_83C7137C);
PPC_FUNC_IMPL(__imp__sub_83C7137C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C71380"))) PPC_WEAK_FUNC(sub_83C71380);
PPC_FUNC_IMPL(__imp__sub_83C71380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,32176
	ctx.r3.s64 = ctx.r11.s64 + 32176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7138C"))) PPC_WEAK_FUNC(sub_83C7138C);
PPC_FUNC_IMPL(__imp__sub_83C7138C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C71390"))) PPC_WEAK_FUNC(sub_83C71390);
PPC_FUNC_IMPL(__imp__sub_83C71390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,32184
	ctx.r3.s64 = ctx.r11.s64 + 32184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7139C"))) PPC_WEAK_FUNC(sub_83C7139C);
PPC_FUNC_IMPL(__imp__sub_83C7139C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C713A0"))) PPC_WEAK_FUNC(sub_83C713A0);
PPC_FUNC_IMPL(__imp__sub_83C713A0) {
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
	// addi r4,r11,-928
	ctx.r4.s64 = ctx.r11.s64 + -928;
	// addi r3,r10,-17984
	ctx.r3.s64 = ctx.r10.s64 + -17984;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C713C4;
	sub_8259CC28(ctx, base);
	// lis r9,-31788
	ctx.r9.s64 = -2083258368;
	// addi r3,r9,32208
	ctx.r3.s64 = ctx.r9.s64 + 32208;
	// bl 0x831cdcc8
	ctx.lr = 0x83C713D0;
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

__attribute__((alias("__imp__sub_83C713E0"))) PPC_WEAK_FUNC(sub_83C713E0);
PPC_FUNC_IMPL(__imp__sub_83C713E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-12120
	ctx.r7.s64 = ctx.r8.s64 + -12120;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-12120(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12120);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-12120(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12120, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C71408"))) PPC_WEAK_FUNC(sub_83C71408);
PPC_FUNC_IMPL(__imp__sub_83C71408) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-17956
	ctx.r6.s64 = ctx.r7.s64 + -17956;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-18056(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -18056);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-12120(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12120);
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
	// std r9,-17956(r7)
	PPC_STORE_U64(ctx.r7.u32 + -17956, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C71450"))) PPC_WEAK_FUNC(sub_83C71450);
PPC_FUNC_IMPL(__imp__sub_83C71450) {
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
	// addi r3,r11,-12124
	ctx.r3.s64 = ctx.r11.s64 + -12124;
	// bl 0x83523120
	ctx.lr = 0x83C71468;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,32192
	ctx.r3.s64 = ctx.r10.s64 + 32192;
	// bl 0x831cdcc8
	ctx.lr = 0x83C71474;
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

