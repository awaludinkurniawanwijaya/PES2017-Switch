#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83CEB5EC"))) PPC_WEAK_FUNC(sub_83CEB5EC);
PPC_FUNC_IMPL(__imp__sub_83CEB5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEB5F0"))) PPC_WEAK_FUNC(sub_83CEB5F0);
PPC_FUNC_IMPL(__imp__sub_83CEB5F0) {
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
	// addi r3,r11,4368
	ctx.r3.s64 = ctx.r11.s64 + 4368;
	// bl 0x8259af80
	ctx.lr = 0x83CEB608;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,12960
	ctx.r3.s64 = ctx.r10.s64 + 12960;
	// bl 0x831cdcc8
	ctx.lr = 0x83CEB614;
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

__attribute__((alias("__imp__sub_83CEB624"))) PPC_WEAK_FUNC(sub_83CEB624);
PPC_FUNC_IMPL(__imp__sub_83CEB624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEB628"))) PPC_WEAK_FUNC(sub_83CEB628);
PPC_FUNC_IMPL(__imp__sub_83CEB628) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,4348
	ctx.r11.s64 = ctx.r8.s64 + 4348;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,-30172(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30172);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,12952
	ctx.r3.s64 = ctx.r6.s64 + 12952;
	// stw r10,4348(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4348, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEB658"))) PPC_WEAK_FUNC(sub_83CEB658);
PPC_FUNC_IMPL(__imp__sub_83CEB658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,12968
	ctx.r3.s64 = ctx.r11.s64 + 12968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEB664"))) PPC_WEAK_FUNC(sub_83CEB664);
PPC_FUNC_IMPL(__imp__sub_83CEB664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEB668"))) PPC_WEAK_FUNC(sub_83CEB668);
PPC_FUNC_IMPL(__imp__sub_83CEB668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,12976
	ctx.r3.s64 = ctx.r11.s64 + 12976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEB674"))) PPC_WEAK_FUNC(sub_83CEB674);
PPC_FUNC_IMPL(__imp__sub_83CEB674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEB678"))) PPC_WEAK_FUNC(sub_83CEB678);
PPC_FUNC_IMPL(__imp__sub_83CEB678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,12984
	ctx.r3.s64 = ctx.r11.s64 + 12984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEB684"))) PPC_WEAK_FUNC(sub_83CEB684);
PPC_FUNC_IMPL(__imp__sub_83CEB684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEB688"))) PPC_WEAK_FUNC(sub_83CEB688);
PPC_FUNC_IMPL(__imp__sub_83CEB688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,12992
	ctx.r3.s64 = ctx.r11.s64 + 12992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEB694"))) PPC_WEAK_FUNC(sub_83CEB694);
PPC_FUNC_IMPL(__imp__sub_83CEB694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEB698"))) PPC_WEAK_FUNC(sub_83CEB698);
PPC_FUNC_IMPL(__imp__sub_83CEB698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13000
	ctx.r3.s64 = ctx.r11.s64 + 13000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEB6A4"))) PPC_WEAK_FUNC(sub_83CEB6A4);
PPC_FUNC_IMPL(__imp__sub_83CEB6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEB6A8"))) PPC_WEAK_FUNC(sub_83CEB6A8);
PPC_FUNC_IMPL(__imp__sub_83CEB6A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13008
	ctx.r3.s64 = ctx.r11.s64 + 13008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEB6B4"))) PPC_WEAK_FUNC(sub_83CEB6B4);
PPC_FUNC_IMPL(__imp__sub_83CEB6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEB6B8"))) PPC_WEAK_FUNC(sub_83CEB6B8);
PPC_FUNC_IMPL(__imp__sub_83CEB6B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13016
	ctx.r3.s64 = ctx.r11.s64 + 13016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEB6C4"))) PPC_WEAK_FUNC(sub_83CEB6C4);
PPC_FUNC_IMPL(__imp__sub_83CEB6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEB6C8"))) PPC_WEAK_FUNC(sub_83CEB6C8);
PPC_FUNC_IMPL(__imp__sub_83CEB6C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13024
	ctx.r3.s64 = ctx.r11.s64 + 13024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEB6D4"))) PPC_WEAK_FUNC(sub_83CEB6D4);
PPC_FUNC_IMPL(__imp__sub_83CEB6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEB6D8"))) PPC_WEAK_FUNC(sub_83CEB6D8);
PPC_FUNC_IMPL(__imp__sub_83CEB6D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13032
	ctx.r3.s64 = ctx.r11.s64 + 13032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEB6E4"))) PPC_WEAK_FUNC(sub_83CEB6E4);
PPC_FUNC_IMPL(__imp__sub_83CEB6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEB6E8"))) PPC_WEAK_FUNC(sub_83CEB6E8);
PPC_FUNC_IMPL(__imp__sub_83CEB6E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13040
	ctx.r3.s64 = ctx.r11.s64 + 13040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEB6F4"))) PPC_WEAK_FUNC(sub_83CEB6F4);
PPC_FUNC_IMPL(__imp__sub_83CEB6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEB6F8"))) PPC_WEAK_FUNC(sub_83CEB6F8);
PPC_FUNC_IMPL(__imp__sub_83CEB6F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13048
	ctx.r3.s64 = ctx.r11.s64 + 13048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEB704"))) PPC_WEAK_FUNC(sub_83CEB704);
PPC_FUNC_IMPL(__imp__sub_83CEB704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEB708"))) PPC_WEAK_FUNC(sub_83CEB708);
PPC_FUNC_IMPL(__imp__sub_83CEB708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13056
	ctx.r3.s64 = ctx.r11.s64 + 13056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEB714"))) PPC_WEAK_FUNC(sub_83CEB714);
PPC_FUNC_IMPL(__imp__sub_83CEB714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEB718"))) PPC_WEAK_FUNC(sub_83CEB718);
PPC_FUNC_IMPL(__imp__sub_83CEB718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13064
	ctx.r3.s64 = ctx.r11.s64 + 13064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEB724"))) PPC_WEAK_FUNC(sub_83CEB724);
PPC_FUNC_IMPL(__imp__sub_83CEB724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEB728"))) PPC_WEAK_FUNC(sub_83CEB728);
PPC_FUNC_IMPL(__imp__sub_83CEB728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13072
	ctx.r3.s64 = ctx.r11.s64 + 13072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEB734"))) PPC_WEAK_FUNC(sub_83CEB734);
PPC_FUNC_IMPL(__imp__sub_83CEB734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEB738"))) PPC_WEAK_FUNC(sub_83CEB738);
PPC_FUNC_IMPL(__imp__sub_83CEB738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13080
	ctx.r3.s64 = ctx.r11.s64 + 13080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEB744"))) PPC_WEAK_FUNC(sub_83CEB744);
PPC_FUNC_IMPL(__imp__sub_83CEB744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEB748"))) PPC_WEAK_FUNC(sub_83CEB748);
PPC_FUNC_IMPL(__imp__sub_83CEB748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13088
	ctx.r3.s64 = ctx.r11.s64 + 13088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEB754"))) PPC_WEAK_FUNC(sub_83CEB754);
PPC_FUNC_IMPL(__imp__sub_83CEB754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEB758"))) PPC_WEAK_FUNC(sub_83CEB758);
PPC_FUNC_IMPL(__imp__sub_83CEB758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13096
	ctx.r3.s64 = ctx.r11.s64 + 13096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEB764"))) PPC_WEAK_FUNC(sub_83CEB764);
PPC_FUNC_IMPL(__imp__sub_83CEB764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEB768"))) PPC_WEAK_FUNC(sub_83CEB768);
PPC_FUNC_IMPL(__imp__sub_83CEB768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13104
	ctx.r3.s64 = ctx.r11.s64 + 13104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEB774"))) PPC_WEAK_FUNC(sub_83CEB774);
PPC_FUNC_IMPL(__imp__sub_83CEB774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEB778"))) PPC_WEAK_FUNC(sub_83CEB778);
PPC_FUNC_IMPL(__imp__sub_83CEB778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13112
	ctx.r3.s64 = ctx.r11.s64 + 13112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEB784"))) PPC_WEAK_FUNC(sub_83CEB784);
PPC_FUNC_IMPL(__imp__sub_83CEB784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEB788"))) PPC_WEAK_FUNC(sub_83CEB788);
PPC_FUNC_IMPL(__imp__sub_83CEB788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13120
	ctx.r3.s64 = ctx.r11.s64 + 13120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEB794"))) PPC_WEAK_FUNC(sub_83CEB794);
PPC_FUNC_IMPL(__imp__sub_83CEB794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEB798"))) PPC_WEAK_FUNC(sub_83CEB798);
PPC_FUNC_IMPL(__imp__sub_83CEB798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13128
	ctx.r3.s64 = ctx.r11.s64 + 13128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEB7A4"))) PPC_WEAK_FUNC(sub_83CEB7A4);
PPC_FUNC_IMPL(__imp__sub_83CEB7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEB7A8"))) PPC_WEAK_FUNC(sub_83CEB7A8);
PPC_FUNC_IMPL(__imp__sub_83CEB7A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13136
	ctx.r3.s64 = ctx.r11.s64 + 13136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEB7B4"))) PPC_WEAK_FUNC(sub_83CEB7B4);
PPC_FUNC_IMPL(__imp__sub_83CEB7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEB7B8"))) PPC_WEAK_FUNC(sub_83CEB7B8);
PPC_FUNC_IMPL(__imp__sub_83CEB7B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13144
	ctx.r3.s64 = ctx.r11.s64 + 13144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEB7C4"))) PPC_WEAK_FUNC(sub_83CEB7C4);
PPC_FUNC_IMPL(__imp__sub_83CEB7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEB7C8"))) PPC_WEAK_FUNC(sub_83CEB7C8);
PPC_FUNC_IMPL(__imp__sub_83CEB7C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13152
	ctx.r3.s64 = ctx.r11.s64 + 13152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEB7D4"))) PPC_WEAK_FUNC(sub_83CEB7D4);
PPC_FUNC_IMPL(__imp__sub_83CEB7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEB7D8"))) PPC_WEAK_FUNC(sub_83CEB7D8);
PPC_FUNC_IMPL(__imp__sub_83CEB7D8) {
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
	// addi r3,r11,4716
	ctx.r3.s64 = ctx.r11.s64 + 4716;
	// bl 0x83523120
	ctx.lr = 0x83CEB7F0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,13160
	ctx.r3.s64 = ctx.r10.s64 + 13160;
	// bl 0x831cdcc8
	ctx.lr = 0x83CEB7FC;
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

__attribute__((alias("__imp__sub_83CEB80C"))) PPC_WEAK_FUNC(sub_83CEB80C);
PPC_FUNC_IMPL(__imp__sub_83CEB80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEB810"))) PPC_WEAK_FUNC(sub_83CEB810);
PPC_FUNC_IMPL(__imp__sub_83CEB810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13176
	ctx.r3.s64 = ctx.r11.s64 + 13176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEB81C"))) PPC_WEAK_FUNC(sub_83CEB81C);
PPC_FUNC_IMPL(__imp__sub_83CEB81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEB820"))) PPC_WEAK_FUNC(sub_83CEB820);
PPC_FUNC_IMPL(__imp__sub_83CEB820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13184
	ctx.r3.s64 = ctx.r11.s64 + 13184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEB82C"))) PPC_WEAK_FUNC(sub_83CEB82C);
PPC_FUNC_IMPL(__imp__sub_83CEB82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEB830"))) PPC_WEAK_FUNC(sub_83CEB830);
PPC_FUNC_IMPL(__imp__sub_83CEB830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13192
	ctx.r3.s64 = ctx.r11.s64 + 13192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEB83C"))) PPC_WEAK_FUNC(sub_83CEB83C);
PPC_FUNC_IMPL(__imp__sub_83CEB83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEB840"))) PPC_WEAK_FUNC(sub_83CEB840);
PPC_FUNC_IMPL(__imp__sub_83CEB840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13200
	ctx.r3.s64 = ctx.r11.s64 + 13200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEB84C"))) PPC_WEAK_FUNC(sub_83CEB84C);
PPC_FUNC_IMPL(__imp__sub_83CEB84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEB850"))) PPC_WEAK_FUNC(sub_83CEB850);
PPC_FUNC_IMPL(__imp__sub_83CEB850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13208
	ctx.r3.s64 = ctx.r11.s64 + 13208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEB85C"))) PPC_WEAK_FUNC(sub_83CEB85C);
PPC_FUNC_IMPL(__imp__sub_83CEB85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEB860"))) PPC_WEAK_FUNC(sub_83CEB860);
PPC_FUNC_IMPL(__imp__sub_83CEB860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13216
	ctx.r3.s64 = ctx.r11.s64 + 13216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEB86C"))) PPC_WEAK_FUNC(sub_83CEB86C);
PPC_FUNC_IMPL(__imp__sub_83CEB86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEB870"))) PPC_WEAK_FUNC(sub_83CEB870);
PPC_FUNC_IMPL(__imp__sub_83CEB870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13224
	ctx.r3.s64 = ctx.r11.s64 + 13224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEB87C"))) PPC_WEAK_FUNC(sub_83CEB87C);
PPC_FUNC_IMPL(__imp__sub_83CEB87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEB880"))) PPC_WEAK_FUNC(sub_83CEB880);
PPC_FUNC_IMPL(__imp__sub_83CEB880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13232
	ctx.r3.s64 = ctx.r11.s64 + 13232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEB88C"))) PPC_WEAK_FUNC(sub_83CEB88C);
PPC_FUNC_IMPL(__imp__sub_83CEB88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEB890"))) PPC_WEAK_FUNC(sub_83CEB890);
PPC_FUNC_IMPL(__imp__sub_83CEB890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13240
	ctx.r3.s64 = ctx.r11.s64 + 13240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEB89C"))) PPC_WEAK_FUNC(sub_83CEB89C);
PPC_FUNC_IMPL(__imp__sub_83CEB89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEB8A0"))) PPC_WEAK_FUNC(sub_83CEB8A0);
PPC_FUNC_IMPL(__imp__sub_83CEB8A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13248
	ctx.r3.s64 = ctx.r11.s64 + 13248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEB8AC"))) PPC_WEAK_FUNC(sub_83CEB8AC);
PPC_FUNC_IMPL(__imp__sub_83CEB8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEB8B0"))) PPC_WEAK_FUNC(sub_83CEB8B0);
PPC_FUNC_IMPL(__imp__sub_83CEB8B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13256
	ctx.r3.s64 = ctx.r11.s64 + 13256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEB8BC"))) PPC_WEAK_FUNC(sub_83CEB8BC);
PPC_FUNC_IMPL(__imp__sub_83CEB8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEB8C0"))) PPC_WEAK_FUNC(sub_83CEB8C0);
PPC_FUNC_IMPL(__imp__sub_83CEB8C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13264
	ctx.r3.s64 = ctx.r11.s64 + 13264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEB8CC"))) PPC_WEAK_FUNC(sub_83CEB8CC);
PPC_FUNC_IMPL(__imp__sub_83CEB8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEB8D0"))) PPC_WEAK_FUNC(sub_83CEB8D0);
PPC_FUNC_IMPL(__imp__sub_83CEB8D0) {
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
	// addi r3,r11,4724
	ctx.r3.s64 = ctx.r11.s64 + 4724;
	// bl 0x83523120
	ctx.lr = 0x83CEB8E8;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,13272
	ctx.r3.s64 = ctx.r10.s64 + 13272;
	// bl 0x831cdcc8
	ctx.lr = 0x83CEB8F4;
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

__attribute__((alias("__imp__sub_83CEB904"))) PPC_WEAK_FUNC(sub_83CEB904);
PPC_FUNC_IMPL(__imp__sub_83CEB904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEB908"))) PPC_WEAK_FUNC(sub_83CEB908);
PPC_FUNC_IMPL(__imp__sub_83CEB908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13288
	ctx.r3.s64 = ctx.r11.s64 + 13288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEB914"))) PPC_WEAK_FUNC(sub_83CEB914);
PPC_FUNC_IMPL(__imp__sub_83CEB914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEB918"))) PPC_WEAK_FUNC(sub_83CEB918);
PPC_FUNC_IMPL(__imp__sub_83CEB918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13296
	ctx.r3.s64 = ctx.r11.s64 + 13296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEB924"))) PPC_WEAK_FUNC(sub_83CEB924);
PPC_FUNC_IMPL(__imp__sub_83CEB924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEB928"))) PPC_WEAK_FUNC(sub_83CEB928);
PPC_FUNC_IMPL(__imp__sub_83CEB928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13304
	ctx.r3.s64 = ctx.r11.s64 + 13304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEB934"))) PPC_WEAK_FUNC(sub_83CEB934);
PPC_FUNC_IMPL(__imp__sub_83CEB934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEB938"))) PPC_WEAK_FUNC(sub_83CEB938);
PPC_FUNC_IMPL(__imp__sub_83CEB938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13312
	ctx.r3.s64 = ctx.r11.s64 + 13312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEB944"))) PPC_WEAK_FUNC(sub_83CEB944);
PPC_FUNC_IMPL(__imp__sub_83CEB944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEB948"))) PPC_WEAK_FUNC(sub_83CEB948);
PPC_FUNC_IMPL(__imp__sub_83CEB948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13320
	ctx.r3.s64 = ctx.r11.s64 + 13320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEB954"))) PPC_WEAK_FUNC(sub_83CEB954);
PPC_FUNC_IMPL(__imp__sub_83CEB954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEB958"))) PPC_WEAK_FUNC(sub_83CEB958);
PPC_FUNC_IMPL(__imp__sub_83CEB958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13328
	ctx.r3.s64 = ctx.r11.s64 + 13328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEB964"))) PPC_WEAK_FUNC(sub_83CEB964);
PPC_FUNC_IMPL(__imp__sub_83CEB964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEB968"))) PPC_WEAK_FUNC(sub_83CEB968);
PPC_FUNC_IMPL(__imp__sub_83CEB968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13336
	ctx.r3.s64 = ctx.r11.s64 + 13336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEB974"))) PPC_WEAK_FUNC(sub_83CEB974);
PPC_FUNC_IMPL(__imp__sub_83CEB974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEB978"))) PPC_WEAK_FUNC(sub_83CEB978);
PPC_FUNC_IMPL(__imp__sub_83CEB978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13344
	ctx.r3.s64 = ctx.r11.s64 + 13344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEB984"))) PPC_WEAK_FUNC(sub_83CEB984);
PPC_FUNC_IMPL(__imp__sub_83CEB984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEB988"))) PPC_WEAK_FUNC(sub_83CEB988);
PPC_FUNC_IMPL(__imp__sub_83CEB988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13352
	ctx.r3.s64 = ctx.r11.s64 + 13352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEB994"))) PPC_WEAK_FUNC(sub_83CEB994);
PPC_FUNC_IMPL(__imp__sub_83CEB994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEB998"))) PPC_WEAK_FUNC(sub_83CEB998);
PPC_FUNC_IMPL(__imp__sub_83CEB998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13360
	ctx.r3.s64 = ctx.r11.s64 + 13360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEB9A4"))) PPC_WEAK_FUNC(sub_83CEB9A4);
PPC_FUNC_IMPL(__imp__sub_83CEB9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEB9A8"))) PPC_WEAK_FUNC(sub_83CEB9A8);
PPC_FUNC_IMPL(__imp__sub_83CEB9A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13368
	ctx.r3.s64 = ctx.r11.s64 + 13368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEB9B4"))) PPC_WEAK_FUNC(sub_83CEB9B4);
PPC_FUNC_IMPL(__imp__sub_83CEB9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEB9B8"))) PPC_WEAK_FUNC(sub_83CEB9B8);
PPC_FUNC_IMPL(__imp__sub_83CEB9B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13376
	ctx.r3.s64 = ctx.r11.s64 + 13376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEB9C4"))) PPC_WEAK_FUNC(sub_83CEB9C4);
PPC_FUNC_IMPL(__imp__sub_83CEB9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEB9C8"))) PPC_WEAK_FUNC(sub_83CEB9C8);
PPC_FUNC_IMPL(__imp__sub_83CEB9C8) {
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
	// addi r3,r11,4756
	ctx.r3.s64 = ctx.r11.s64 + 4756;
	// bl 0x83523120
	ctx.lr = 0x83CEB9E0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,13384
	ctx.r3.s64 = ctx.r10.s64 + 13384;
	// bl 0x831cdcc8
	ctx.lr = 0x83CEB9EC;
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

__attribute__((alias("__imp__sub_83CEB9FC"))) PPC_WEAK_FUNC(sub_83CEB9FC);
PPC_FUNC_IMPL(__imp__sub_83CEB9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBA00"))) PPC_WEAK_FUNC(sub_83CEBA00);
PPC_FUNC_IMPL(__imp__sub_83CEBA00) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,4760
	ctx.r7.s64 = ctx.r8.s64 + 4760;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,4760(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4760);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,4760(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4760, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CEBA28"))) PPC_WEAK_FUNC(sub_83CEBA28);
PPC_FUNC_IMPL(__imp__sub_83CEBA28) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31767
	ctx.r7.s64 = -2081882112;
	// lis r5,-31767
	ctx.r5.s64 = -2081882112;
	// addi r6,r7,-29680
	ctx.r6.s64 = ctx.r7.s64 + -29680;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-29772(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -29772);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,4760(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4760);
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
	// std r9,-29680(r7)
	PPC_STORE_U64(ctx.r7.u32 + -29680, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CEBA70"))) PPC_WEAK_FUNC(sub_83CEBA70);
PPC_FUNC_IMPL(__imp__sub_83CEBA70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13400
	ctx.r3.s64 = ctx.r11.s64 + 13400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBA7C"))) PPC_WEAK_FUNC(sub_83CEBA7C);
PPC_FUNC_IMPL(__imp__sub_83CEBA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBA80"))) PPC_WEAK_FUNC(sub_83CEBA80);
PPC_FUNC_IMPL(__imp__sub_83CEBA80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13408
	ctx.r3.s64 = ctx.r11.s64 + 13408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBA8C"))) PPC_WEAK_FUNC(sub_83CEBA8C);
PPC_FUNC_IMPL(__imp__sub_83CEBA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBA90"))) PPC_WEAK_FUNC(sub_83CEBA90);
PPC_FUNC_IMPL(__imp__sub_83CEBA90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13416
	ctx.r3.s64 = ctx.r11.s64 + 13416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBA9C"))) PPC_WEAK_FUNC(sub_83CEBA9C);
PPC_FUNC_IMPL(__imp__sub_83CEBA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBAA0"))) PPC_WEAK_FUNC(sub_83CEBAA0);
PPC_FUNC_IMPL(__imp__sub_83CEBAA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13424
	ctx.r3.s64 = ctx.r11.s64 + 13424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBAAC"))) PPC_WEAK_FUNC(sub_83CEBAAC);
PPC_FUNC_IMPL(__imp__sub_83CEBAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBAB0"))) PPC_WEAK_FUNC(sub_83CEBAB0);
PPC_FUNC_IMPL(__imp__sub_83CEBAB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13432
	ctx.r3.s64 = ctx.r11.s64 + 13432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBABC"))) PPC_WEAK_FUNC(sub_83CEBABC);
PPC_FUNC_IMPL(__imp__sub_83CEBABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBAC0"))) PPC_WEAK_FUNC(sub_83CEBAC0);
PPC_FUNC_IMPL(__imp__sub_83CEBAC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13440
	ctx.r3.s64 = ctx.r11.s64 + 13440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBACC"))) PPC_WEAK_FUNC(sub_83CEBACC);
PPC_FUNC_IMPL(__imp__sub_83CEBACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBAD0"))) PPC_WEAK_FUNC(sub_83CEBAD0);
PPC_FUNC_IMPL(__imp__sub_83CEBAD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13448
	ctx.r3.s64 = ctx.r11.s64 + 13448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBADC"))) PPC_WEAK_FUNC(sub_83CEBADC);
PPC_FUNC_IMPL(__imp__sub_83CEBADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBAE0"))) PPC_WEAK_FUNC(sub_83CEBAE0);
PPC_FUNC_IMPL(__imp__sub_83CEBAE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13456
	ctx.r3.s64 = ctx.r11.s64 + 13456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBAEC"))) PPC_WEAK_FUNC(sub_83CEBAEC);
PPC_FUNC_IMPL(__imp__sub_83CEBAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBAF0"))) PPC_WEAK_FUNC(sub_83CEBAF0);
PPC_FUNC_IMPL(__imp__sub_83CEBAF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13464
	ctx.r3.s64 = ctx.r11.s64 + 13464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBAFC"))) PPC_WEAK_FUNC(sub_83CEBAFC);
PPC_FUNC_IMPL(__imp__sub_83CEBAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBB00"))) PPC_WEAK_FUNC(sub_83CEBB00);
PPC_FUNC_IMPL(__imp__sub_83CEBB00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13472
	ctx.r3.s64 = ctx.r11.s64 + 13472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBB0C"))) PPC_WEAK_FUNC(sub_83CEBB0C);
PPC_FUNC_IMPL(__imp__sub_83CEBB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBB10"))) PPC_WEAK_FUNC(sub_83CEBB10);
PPC_FUNC_IMPL(__imp__sub_83CEBB10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13480
	ctx.r3.s64 = ctx.r11.s64 + 13480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBB1C"))) PPC_WEAK_FUNC(sub_83CEBB1C);
PPC_FUNC_IMPL(__imp__sub_83CEBB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBB20"))) PPC_WEAK_FUNC(sub_83CEBB20);
PPC_FUNC_IMPL(__imp__sub_83CEBB20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13488
	ctx.r3.s64 = ctx.r11.s64 + 13488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBB2C"))) PPC_WEAK_FUNC(sub_83CEBB2C);
PPC_FUNC_IMPL(__imp__sub_83CEBB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBB30"))) PPC_WEAK_FUNC(sub_83CEBB30);
PPC_FUNC_IMPL(__imp__sub_83CEBB30) {
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
	// addi r3,r11,4768
	ctx.r3.s64 = ctx.r11.s64 + 4768;
	// bl 0x83523120
	ctx.lr = 0x83CEBB48;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,13496
	ctx.r3.s64 = ctx.r10.s64 + 13496;
	// bl 0x831cdcc8
	ctx.lr = 0x83CEBB54;
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

__attribute__((alias("__imp__sub_83CEBB64"))) PPC_WEAK_FUNC(sub_83CEBB64);
PPC_FUNC_IMPL(__imp__sub_83CEBB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBB68"))) PPC_WEAK_FUNC(sub_83CEBB68);
PPC_FUNC_IMPL(__imp__sub_83CEBB68) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,4772
	ctx.r7.s64 = ctx.r8.s64 + 4772;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,4772(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4772);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,4772(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4772, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CEBB90"))) PPC_WEAK_FUNC(sub_83CEBB90);
PPC_FUNC_IMPL(__imp__sub_83CEBB90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13512
	ctx.r3.s64 = ctx.r11.s64 + 13512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBB9C"))) PPC_WEAK_FUNC(sub_83CEBB9C);
PPC_FUNC_IMPL(__imp__sub_83CEBB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBBA0"))) PPC_WEAK_FUNC(sub_83CEBBA0);
PPC_FUNC_IMPL(__imp__sub_83CEBBA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13520
	ctx.r3.s64 = ctx.r11.s64 + 13520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBBAC"))) PPC_WEAK_FUNC(sub_83CEBBAC);
PPC_FUNC_IMPL(__imp__sub_83CEBBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBBB0"))) PPC_WEAK_FUNC(sub_83CEBBB0);
PPC_FUNC_IMPL(__imp__sub_83CEBBB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13528
	ctx.r3.s64 = ctx.r11.s64 + 13528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBBBC"))) PPC_WEAK_FUNC(sub_83CEBBBC);
PPC_FUNC_IMPL(__imp__sub_83CEBBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBBC0"))) PPC_WEAK_FUNC(sub_83CEBBC0);
PPC_FUNC_IMPL(__imp__sub_83CEBBC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13536
	ctx.r3.s64 = ctx.r11.s64 + 13536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBBCC"))) PPC_WEAK_FUNC(sub_83CEBBCC);
PPC_FUNC_IMPL(__imp__sub_83CEBBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBBD0"))) PPC_WEAK_FUNC(sub_83CEBBD0);
PPC_FUNC_IMPL(__imp__sub_83CEBBD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13544
	ctx.r3.s64 = ctx.r11.s64 + 13544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBBDC"))) PPC_WEAK_FUNC(sub_83CEBBDC);
PPC_FUNC_IMPL(__imp__sub_83CEBBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBBE0"))) PPC_WEAK_FUNC(sub_83CEBBE0);
PPC_FUNC_IMPL(__imp__sub_83CEBBE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13552
	ctx.r3.s64 = ctx.r11.s64 + 13552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBBEC"))) PPC_WEAK_FUNC(sub_83CEBBEC);
PPC_FUNC_IMPL(__imp__sub_83CEBBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBBF0"))) PPC_WEAK_FUNC(sub_83CEBBF0);
PPC_FUNC_IMPL(__imp__sub_83CEBBF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13560
	ctx.r3.s64 = ctx.r11.s64 + 13560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBBFC"))) PPC_WEAK_FUNC(sub_83CEBBFC);
PPC_FUNC_IMPL(__imp__sub_83CEBBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBC00"))) PPC_WEAK_FUNC(sub_83CEBC00);
PPC_FUNC_IMPL(__imp__sub_83CEBC00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13568
	ctx.r3.s64 = ctx.r11.s64 + 13568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBC0C"))) PPC_WEAK_FUNC(sub_83CEBC0C);
PPC_FUNC_IMPL(__imp__sub_83CEBC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBC10"))) PPC_WEAK_FUNC(sub_83CEBC10);
PPC_FUNC_IMPL(__imp__sub_83CEBC10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13576
	ctx.r3.s64 = ctx.r11.s64 + 13576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBC1C"))) PPC_WEAK_FUNC(sub_83CEBC1C);
PPC_FUNC_IMPL(__imp__sub_83CEBC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBC20"))) PPC_WEAK_FUNC(sub_83CEBC20);
PPC_FUNC_IMPL(__imp__sub_83CEBC20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13584
	ctx.r3.s64 = ctx.r11.s64 + 13584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBC2C"))) PPC_WEAK_FUNC(sub_83CEBC2C);
PPC_FUNC_IMPL(__imp__sub_83CEBC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBC30"))) PPC_WEAK_FUNC(sub_83CEBC30);
PPC_FUNC_IMPL(__imp__sub_83CEBC30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13592
	ctx.r3.s64 = ctx.r11.s64 + 13592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBC3C"))) PPC_WEAK_FUNC(sub_83CEBC3C);
PPC_FUNC_IMPL(__imp__sub_83CEBC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBC40"))) PPC_WEAK_FUNC(sub_83CEBC40);
PPC_FUNC_IMPL(__imp__sub_83CEBC40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13600
	ctx.r3.s64 = ctx.r11.s64 + 13600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBC4C"))) PPC_WEAK_FUNC(sub_83CEBC4C);
PPC_FUNC_IMPL(__imp__sub_83CEBC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBC50"))) PPC_WEAK_FUNC(sub_83CEBC50);
PPC_FUNC_IMPL(__imp__sub_83CEBC50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13608
	ctx.r3.s64 = ctx.r11.s64 + 13608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBC5C"))) PPC_WEAK_FUNC(sub_83CEBC5C);
PPC_FUNC_IMPL(__imp__sub_83CEBC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBC60"))) PPC_WEAK_FUNC(sub_83CEBC60);
PPC_FUNC_IMPL(__imp__sub_83CEBC60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13616
	ctx.r3.s64 = ctx.r11.s64 + 13616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBC6C"))) PPC_WEAK_FUNC(sub_83CEBC6C);
PPC_FUNC_IMPL(__imp__sub_83CEBC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBC70"))) PPC_WEAK_FUNC(sub_83CEBC70);
PPC_FUNC_IMPL(__imp__sub_83CEBC70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13624
	ctx.r3.s64 = ctx.r11.s64 + 13624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBC7C"))) PPC_WEAK_FUNC(sub_83CEBC7C);
PPC_FUNC_IMPL(__imp__sub_83CEBC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBC80"))) PPC_WEAK_FUNC(sub_83CEBC80);
PPC_FUNC_IMPL(__imp__sub_83CEBC80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13632
	ctx.r3.s64 = ctx.r11.s64 + 13632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBC8C"))) PPC_WEAK_FUNC(sub_83CEBC8C);
PPC_FUNC_IMPL(__imp__sub_83CEBC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBC90"))) PPC_WEAK_FUNC(sub_83CEBC90);
PPC_FUNC_IMPL(__imp__sub_83CEBC90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13640
	ctx.r3.s64 = ctx.r11.s64 + 13640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBC9C"))) PPC_WEAK_FUNC(sub_83CEBC9C);
PPC_FUNC_IMPL(__imp__sub_83CEBC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBCA0"))) PPC_WEAK_FUNC(sub_83CEBCA0);
PPC_FUNC_IMPL(__imp__sub_83CEBCA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13648
	ctx.r3.s64 = ctx.r11.s64 + 13648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBCAC"))) PPC_WEAK_FUNC(sub_83CEBCAC);
PPC_FUNC_IMPL(__imp__sub_83CEBCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBCB0"))) PPC_WEAK_FUNC(sub_83CEBCB0);
PPC_FUNC_IMPL(__imp__sub_83CEBCB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13656
	ctx.r3.s64 = ctx.r11.s64 + 13656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBCBC"))) PPC_WEAK_FUNC(sub_83CEBCBC);
PPC_FUNC_IMPL(__imp__sub_83CEBCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBCC0"))) PPC_WEAK_FUNC(sub_83CEBCC0);
PPC_FUNC_IMPL(__imp__sub_83CEBCC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13664
	ctx.r3.s64 = ctx.r11.s64 + 13664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBCCC"))) PPC_WEAK_FUNC(sub_83CEBCCC);
PPC_FUNC_IMPL(__imp__sub_83CEBCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBCD0"))) PPC_WEAK_FUNC(sub_83CEBCD0);
PPC_FUNC_IMPL(__imp__sub_83CEBCD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13672
	ctx.r3.s64 = ctx.r11.s64 + 13672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBCDC"))) PPC_WEAK_FUNC(sub_83CEBCDC);
PPC_FUNC_IMPL(__imp__sub_83CEBCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBCE0"))) PPC_WEAK_FUNC(sub_83CEBCE0);
PPC_FUNC_IMPL(__imp__sub_83CEBCE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13680
	ctx.r3.s64 = ctx.r11.s64 + 13680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBCEC"))) PPC_WEAK_FUNC(sub_83CEBCEC);
PPC_FUNC_IMPL(__imp__sub_83CEBCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBCF0"))) PPC_WEAK_FUNC(sub_83CEBCF0);
PPC_FUNC_IMPL(__imp__sub_83CEBCF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13688
	ctx.r3.s64 = ctx.r11.s64 + 13688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBCFC"))) PPC_WEAK_FUNC(sub_83CEBCFC);
PPC_FUNC_IMPL(__imp__sub_83CEBCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBD00"))) PPC_WEAK_FUNC(sub_83CEBD00);
PPC_FUNC_IMPL(__imp__sub_83CEBD00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13696
	ctx.r3.s64 = ctx.r11.s64 + 13696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBD0C"))) PPC_WEAK_FUNC(sub_83CEBD0C);
PPC_FUNC_IMPL(__imp__sub_83CEBD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBD10"))) PPC_WEAK_FUNC(sub_83CEBD10);
PPC_FUNC_IMPL(__imp__sub_83CEBD10) {
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
	// addi r3,r11,4784
	ctx.r3.s64 = ctx.r11.s64 + 4784;
	// bl 0x83523120
	ctx.lr = 0x83CEBD28;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,13704
	ctx.r3.s64 = ctx.r10.s64 + 13704;
	// bl 0x831cdcc8
	ctx.lr = 0x83CEBD34;
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

__attribute__((alias("__imp__sub_83CEBD44"))) PPC_WEAK_FUNC(sub_83CEBD44);
PPC_FUNC_IMPL(__imp__sub_83CEBD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBD48"))) PPC_WEAK_FUNC(sub_83CEBD48);
PPC_FUNC_IMPL(__imp__sub_83CEBD48) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,4788
	ctx.r7.s64 = ctx.r8.s64 + 4788;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,4788(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4788);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,4788(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4788, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CEBD70"))) PPC_WEAK_FUNC(sub_83CEBD70);
PPC_FUNC_IMPL(__imp__sub_83CEBD70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13720
	ctx.r3.s64 = ctx.r11.s64 + 13720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBD7C"))) PPC_WEAK_FUNC(sub_83CEBD7C);
PPC_FUNC_IMPL(__imp__sub_83CEBD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBD80"))) PPC_WEAK_FUNC(sub_83CEBD80);
PPC_FUNC_IMPL(__imp__sub_83CEBD80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13728
	ctx.r3.s64 = ctx.r11.s64 + 13728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBD8C"))) PPC_WEAK_FUNC(sub_83CEBD8C);
PPC_FUNC_IMPL(__imp__sub_83CEBD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBD90"))) PPC_WEAK_FUNC(sub_83CEBD90);
PPC_FUNC_IMPL(__imp__sub_83CEBD90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13736
	ctx.r3.s64 = ctx.r11.s64 + 13736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBD9C"))) PPC_WEAK_FUNC(sub_83CEBD9C);
PPC_FUNC_IMPL(__imp__sub_83CEBD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBDA0"))) PPC_WEAK_FUNC(sub_83CEBDA0);
PPC_FUNC_IMPL(__imp__sub_83CEBDA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13744
	ctx.r3.s64 = ctx.r11.s64 + 13744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBDAC"))) PPC_WEAK_FUNC(sub_83CEBDAC);
PPC_FUNC_IMPL(__imp__sub_83CEBDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBDB0"))) PPC_WEAK_FUNC(sub_83CEBDB0);
PPC_FUNC_IMPL(__imp__sub_83CEBDB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13752
	ctx.r3.s64 = ctx.r11.s64 + 13752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBDBC"))) PPC_WEAK_FUNC(sub_83CEBDBC);
PPC_FUNC_IMPL(__imp__sub_83CEBDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBDC0"))) PPC_WEAK_FUNC(sub_83CEBDC0);
PPC_FUNC_IMPL(__imp__sub_83CEBDC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13760
	ctx.r3.s64 = ctx.r11.s64 + 13760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBDCC"))) PPC_WEAK_FUNC(sub_83CEBDCC);
PPC_FUNC_IMPL(__imp__sub_83CEBDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBDD0"))) PPC_WEAK_FUNC(sub_83CEBDD0);
PPC_FUNC_IMPL(__imp__sub_83CEBDD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13768
	ctx.r3.s64 = ctx.r11.s64 + 13768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBDDC"))) PPC_WEAK_FUNC(sub_83CEBDDC);
PPC_FUNC_IMPL(__imp__sub_83CEBDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBDE0"))) PPC_WEAK_FUNC(sub_83CEBDE0);
PPC_FUNC_IMPL(__imp__sub_83CEBDE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13776
	ctx.r3.s64 = ctx.r11.s64 + 13776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBDEC"))) PPC_WEAK_FUNC(sub_83CEBDEC);
PPC_FUNC_IMPL(__imp__sub_83CEBDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBDF0"))) PPC_WEAK_FUNC(sub_83CEBDF0);
PPC_FUNC_IMPL(__imp__sub_83CEBDF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13784
	ctx.r3.s64 = ctx.r11.s64 + 13784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBDFC"))) PPC_WEAK_FUNC(sub_83CEBDFC);
PPC_FUNC_IMPL(__imp__sub_83CEBDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBE00"))) PPC_WEAK_FUNC(sub_83CEBE00);
PPC_FUNC_IMPL(__imp__sub_83CEBE00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13792
	ctx.r3.s64 = ctx.r11.s64 + 13792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBE0C"))) PPC_WEAK_FUNC(sub_83CEBE0C);
PPC_FUNC_IMPL(__imp__sub_83CEBE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBE10"))) PPC_WEAK_FUNC(sub_83CEBE10);
PPC_FUNC_IMPL(__imp__sub_83CEBE10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13800
	ctx.r3.s64 = ctx.r11.s64 + 13800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBE1C"))) PPC_WEAK_FUNC(sub_83CEBE1C);
PPC_FUNC_IMPL(__imp__sub_83CEBE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBE20"))) PPC_WEAK_FUNC(sub_83CEBE20);
PPC_FUNC_IMPL(__imp__sub_83CEBE20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13808
	ctx.r3.s64 = ctx.r11.s64 + 13808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBE2C"))) PPC_WEAK_FUNC(sub_83CEBE2C);
PPC_FUNC_IMPL(__imp__sub_83CEBE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBE30"))) PPC_WEAK_FUNC(sub_83CEBE30);
PPC_FUNC_IMPL(__imp__sub_83CEBE30) {
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
	// addi r3,r11,4796
	ctx.r3.s64 = ctx.r11.s64 + 4796;
	// bl 0x83523120
	ctx.lr = 0x83CEBE48;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,13816
	ctx.r3.s64 = ctx.r10.s64 + 13816;
	// bl 0x831cdcc8
	ctx.lr = 0x83CEBE54;
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

__attribute__((alias("__imp__sub_83CEBE64"))) PPC_WEAK_FUNC(sub_83CEBE64);
PPC_FUNC_IMPL(__imp__sub_83CEBE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBE68"))) PPC_WEAK_FUNC(sub_83CEBE68);
PPC_FUNC_IMPL(__imp__sub_83CEBE68) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,4800
	ctx.r7.s64 = ctx.r8.s64 + 4800;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,4800(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4800);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,4800(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4800, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CEBE90"))) PPC_WEAK_FUNC(sub_83CEBE90);
PPC_FUNC_IMPL(__imp__sub_83CEBE90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13832
	ctx.r3.s64 = ctx.r11.s64 + 13832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBE9C"))) PPC_WEAK_FUNC(sub_83CEBE9C);
PPC_FUNC_IMPL(__imp__sub_83CEBE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBEA0"))) PPC_WEAK_FUNC(sub_83CEBEA0);
PPC_FUNC_IMPL(__imp__sub_83CEBEA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13840
	ctx.r3.s64 = ctx.r11.s64 + 13840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBEAC"))) PPC_WEAK_FUNC(sub_83CEBEAC);
PPC_FUNC_IMPL(__imp__sub_83CEBEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBEB0"))) PPC_WEAK_FUNC(sub_83CEBEB0);
PPC_FUNC_IMPL(__imp__sub_83CEBEB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13848
	ctx.r3.s64 = ctx.r11.s64 + 13848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBEBC"))) PPC_WEAK_FUNC(sub_83CEBEBC);
PPC_FUNC_IMPL(__imp__sub_83CEBEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBEC0"))) PPC_WEAK_FUNC(sub_83CEBEC0);
PPC_FUNC_IMPL(__imp__sub_83CEBEC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13856
	ctx.r3.s64 = ctx.r11.s64 + 13856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBECC"))) PPC_WEAK_FUNC(sub_83CEBECC);
PPC_FUNC_IMPL(__imp__sub_83CEBECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBED0"))) PPC_WEAK_FUNC(sub_83CEBED0);
PPC_FUNC_IMPL(__imp__sub_83CEBED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13864
	ctx.r3.s64 = ctx.r11.s64 + 13864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBEDC"))) PPC_WEAK_FUNC(sub_83CEBEDC);
PPC_FUNC_IMPL(__imp__sub_83CEBEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBEE0"))) PPC_WEAK_FUNC(sub_83CEBEE0);
PPC_FUNC_IMPL(__imp__sub_83CEBEE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13872
	ctx.r3.s64 = ctx.r11.s64 + 13872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBEEC"))) PPC_WEAK_FUNC(sub_83CEBEEC);
PPC_FUNC_IMPL(__imp__sub_83CEBEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBEF0"))) PPC_WEAK_FUNC(sub_83CEBEF0);
PPC_FUNC_IMPL(__imp__sub_83CEBEF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13880
	ctx.r3.s64 = ctx.r11.s64 + 13880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBEFC"))) PPC_WEAK_FUNC(sub_83CEBEFC);
PPC_FUNC_IMPL(__imp__sub_83CEBEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBF00"))) PPC_WEAK_FUNC(sub_83CEBF00);
PPC_FUNC_IMPL(__imp__sub_83CEBF00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13888
	ctx.r3.s64 = ctx.r11.s64 + 13888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBF0C"))) PPC_WEAK_FUNC(sub_83CEBF0C);
PPC_FUNC_IMPL(__imp__sub_83CEBF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBF10"))) PPC_WEAK_FUNC(sub_83CEBF10);
PPC_FUNC_IMPL(__imp__sub_83CEBF10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13896
	ctx.r3.s64 = ctx.r11.s64 + 13896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBF1C"))) PPC_WEAK_FUNC(sub_83CEBF1C);
PPC_FUNC_IMPL(__imp__sub_83CEBF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBF20"))) PPC_WEAK_FUNC(sub_83CEBF20);
PPC_FUNC_IMPL(__imp__sub_83CEBF20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13904
	ctx.r3.s64 = ctx.r11.s64 + 13904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBF2C"))) PPC_WEAK_FUNC(sub_83CEBF2C);
PPC_FUNC_IMPL(__imp__sub_83CEBF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBF30"))) PPC_WEAK_FUNC(sub_83CEBF30);
PPC_FUNC_IMPL(__imp__sub_83CEBF30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13912
	ctx.r3.s64 = ctx.r11.s64 + 13912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBF3C"))) PPC_WEAK_FUNC(sub_83CEBF3C);
PPC_FUNC_IMPL(__imp__sub_83CEBF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBF40"))) PPC_WEAK_FUNC(sub_83CEBF40);
PPC_FUNC_IMPL(__imp__sub_83CEBF40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13920
	ctx.r3.s64 = ctx.r11.s64 + 13920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBF4C"))) PPC_WEAK_FUNC(sub_83CEBF4C);
PPC_FUNC_IMPL(__imp__sub_83CEBF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBF50"))) PPC_WEAK_FUNC(sub_83CEBF50);
PPC_FUNC_IMPL(__imp__sub_83CEBF50) {
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
	// addi r3,r11,4808
	ctx.r3.s64 = ctx.r11.s64 + 4808;
	// bl 0x83523120
	ctx.lr = 0x83CEBF68;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,13928
	ctx.r3.s64 = ctx.r10.s64 + 13928;
	// bl 0x831cdcc8
	ctx.lr = 0x83CEBF74;
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

__attribute__((alias("__imp__sub_83CEBF84"))) PPC_WEAK_FUNC(sub_83CEBF84);
PPC_FUNC_IMPL(__imp__sub_83CEBF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBF88"))) PPC_WEAK_FUNC(sub_83CEBF88);
PPC_FUNC_IMPL(__imp__sub_83CEBF88) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,4812
	ctx.r7.s64 = ctx.r8.s64 + 4812;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,4812(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4812);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,4812(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4812, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CEBFB0"))) PPC_WEAK_FUNC(sub_83CEBFB0);
PPC_FUNC_IMPL(__imp__sub_83CEBFB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13944
	ctx.r3.s64 = ctx.r11.s64 + 13944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBFBC"))) PPC_WEAK_FUNC(sub_83CEBFBC);
PPC_FUNC_IMPL(__imp__sub_83CEBFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBFC0"))) PPC_WEAK_FUNC(sub_83CEBFC0);
PPC_FUNC_IMPL(__imp__sub_83CEBFC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13952
	ctx.r3.s64 = ctx.r11.s64 + 13952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBFCC"))) PPC_WEAK_FUNC(sub_83CEBFCC);
PPC_FUNC_IMPL(__imp__sub_83CEBFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBFD0"))) PPC_WEAK_FUNC(sub_83CEBFD0);
PPC_FUNC_IMPL(__imp__sub_83CEBFD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13960
	ctx.r3.s64 = ctx.r11.s64 + 13960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBFDC"))) PPC_WEAK_FUNC(sub_83CEBFDC);
PPC_FUNC_IMPL(__imp__sub_83CEBFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBFE0"))) PPC_WEAK_FUNC(sub_83CEBFE0);
PPC_FUNC_IMPL(__imp__sub_83CEBFE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13968
	ctx.r3.s64 = ctx.r11.s64 + 13968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBFEC"))) PPC_WEAK_FUNC(sub_83CEBFEC);
PPC_FUNC_IMPL(__imp__sub_83CEBFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEBFF0"))) PPC_WEAK_FUNC(sub_83CEBFF0);
PPC_FUNC_IMPL(__imp__sub_83CEBFF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13976
	ctx.r3.s64 = ctx.r11.s64 + 13976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEBFFC"))) PPC_WEAK_FUNC(sub_83CEBFFC);
PPC_FUNC_IMPL(__imp__sub_83CEBFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC000"))) PPC_WEAK_FUNC(sub_83CEC000);
PPC_FUNC_IMPL(__imp__sub_83CEC000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13984
	ctx.r3.s64 = ctx.r11.s64 + 13984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC00C"))) PPC_WEAK_FUNC(sub_83CEC00C);
PPC_FUNC_IMPL(__imp__sub_83CEC00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC010"))) PPC_WEAK_FUNC(sub_83CEC010);
PPC_FUNC_IMPL(__imp__sub_83CEC010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,13992
	ctx.r3.s64 = ctx.r11.s64 + 13992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC01C"))) PPC_WEAK_FUNC(sub_83CEC01C);
PPC_FUNC_IMPL(__imp__sub_83CEC01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CEC020"))) PPC_WEAK_FUNC(sub_83CEC020);
PPC_FUNC_IMPL(__imp__sub_83CEC020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,14000
	ctx.r3.s64 = ctx.r11.s64 + 14000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CEC02C"))) PPC_WEAK_FUNC(sub_83CEC02C);
PPC_FUNC_IMPL(__imp__sub_83CEC02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

