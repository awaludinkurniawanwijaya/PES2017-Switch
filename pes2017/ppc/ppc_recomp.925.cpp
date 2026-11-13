#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83CCC9E0"))) PPC_WEAK_FUNC(sub_83CCC9E0);
PPC_FUNC_IMPL(__imp__sub_83CCC9E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29752
	ctx.r3.s64 = ctx.r11.s64 + -29752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCC9EC"))) PPC_WEAK_FUNC(sub_83CCC9EC);
PPC_FUNC_IMPL(__imp__sub_83CCC9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCC9F0"))) PPC_WEAK_FUNC(sub_83CCC9F0);
PPC_FUNC_IMPL(__imp__sub_83CCC9F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29744
	ctx.r3.s64 = ctx.r11.s64 + -29744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCC9FC"))) PPC_WEAK_FUNC(sub_83CCC9FC);
PPC_FUNC_IMPL(__imp__sub_83CCC9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCA00"))) PPC_WEAK_FUNC(sub_83CCCA00);
PPC_FUNC_IMPL(__imp__sub_83CCCA00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29736
	ctx.r3.s64 = ctx.r11.s64 + -29736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCA0C"))) PPC_WEAK_FUNC(sub_83CCCA0C);
PPC_FUNC_IMPL(__imp__sub_83CCCA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCA10"))) PPC_WEAK_FUNC(sub_83CCCA10);
PPC_FUNC_IMPL(__imp__sub_83CCCA10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29728
	ctx.r3.s64 = ctx.r11.s64 + -29728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCA1C"))) PPC_WEAK_FUNC(sub_83CCCA1C);
PPC_FUNC_IMPL(__imp__sub_83CCCA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCA20"))) PPC_WEAK_FUNC(sub_83CCCA20);
PPC_FUNC_IMPL(__imp__sub_83CCCA20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29720
	ctx.r3.s64 = ctx.r11.s64 + -29720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCA2C"))) PPC_WEAK_FUNC(sub_83CCCA2C);
PPC_FUNC_IMPL(__imp__sub_83CCCA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCA30"))) PPC_WEAK_FUNC(sub_83CCCA30);
PPC_FUNC_IMPL(__imp__sub_83CCCA30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29712
	ctx.r3.s64 = ctx.r11.s64 + -29712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCA3C"))) PPC_WEAK_FUNC(sub_83CCCA3C);
PPC_FUNC_IMPL(__imp__sub_83CCCA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCA40"))) PPC_WEAK_FUNC(sub_83CCCA40);
PPC_FUNC_IMPL(__imp__sub_83CCCA40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29704
	ctx.r3.s64 = ctx.r11.s64 + -29704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCA4C"))) PPC_WEAK_FUNC(sub_83CCCA4C);
PPC_FUNC_IMPL(__imp__sub_83CCCA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCA50"))) PPC_WEAK_FUNC(sub_83CCCA50);
PPC_FUNC_IMPL(__imp__sub_83CCCA50) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-13740
	ctx.r3.s64 = ctx.r11.s64 + -13740;
	// bl 0x83523120
	ctx.lr = 0x83CCCA68;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-29696
	ctx.r3.s64 = ctx.r10.s64 + -29696;
	// bl 0x831cdcc8
	ctx.lr = 0x83CCCA74;
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

__attribute__((alias("__imp__sub_83CCCA84"))) PPC_WEAK_FUNC(sub_83CCCA84);
PPC_FUNC_IMPL(__imp__sub_83CCCA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCA88"))) PPC_WEAK_FUNC(sub_83CCCA88);
PPC_FUNC_IMPL(__imp__sub_83CCCA88) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-13732
	ctx.r3.s64 = ctx.r11.s64 + -13732;
	// bl 0x82596fa8
	ctx.lr = 0x83CCCAA0;
	sub_82596FA8(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-29680
	ctx.r3.s64 = ctx.r10.s64 + -29680;
	// bl 0x831cdcc8
	ctx.lr = 0x83CCCAAC;
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

__attribute__((alias("__imp__sub_83CCCABC"))) PPC_WEAK_FUNC(sub_83CCCABC);
PPC_FUNC_IMPL(__imp__sub_83CCCABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCAC0"))) PPC_WEAK_FUNC(sub_83CCCAC0);
PPC_FUNC_IMPL(__imp__sub_83CCCAC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29664
	ctx.r3.s64 = ctx.r11.s64 + -29664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCACC"))) PPC_WEAK_FUNC(sub_83CCCACC);
PPC_FUNC_IMPL(__imp__sub_83CCCACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCAD0"))) PPC_WEAK_FUNC(sub_83CCCAD0);
PPC_FUNC_IMPL(__imp__sub_83CCCAD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29656
	ctx.r3.s64 = ctx.r11.s64 + -29656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCADC"))) PPC_WEAK_FUNC(sub_83CCCADC);
PPC_FUNC_IMPL(__imp__sub_83CCCADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCAE0"))) PPC_WEAK_FUNC(sub_83CCCAE0);
PPC_FUNC_IMPL(__imp__sub_83CCCAE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29648
	ctx.r3.s64 = ctx.r11.s64 + -29648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCAEC"))) PPC_WEAK_FUNC(sub_83CCCAEC);
PPC_FUNC_IMPL(__imp__sub_83CCCAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCAF0"))) PPC_WEAK_FUNC(sub_83CCCAF0);
PPC_FUNC_IMPL(__imp__sub_83CCCAF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29640
	ctx.r3.s64 = ctx.r11.s64 + -29640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCAFC"))) PPC_WEAK_FUNC(sub_83CCCAFC);
PPC_FUNC_IMPL(__imp__sub_83CCCAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCB00"))) PPC_WEAK_FUNC(sub_83CCCB00);
PPC_FUNC_IMPL(__imp__sub_83CCCB00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29632
	ctx.r3.s64 = ctx.r11.s64 + -29632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCB0C"))) PPC_WEAK_FUNC(sub_83CCCB0C);
PPC_FUNC_IMPL(__imp__sub_83CCCB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCB10"))) PPC_WEAK_FUNC(sub_83CCCB10);
PPC_FUNC_IMPL(__imp__sub_83CCCB10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29624
	ctx.r3.s64 = ctx.r11.s64 + -29624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCB1C"))) PPC_WEAK_FUNC(sub_83CCCB1C);
PPC_FUNC_IMPL(__imp__sub_83CCCB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCB20"))) PPC_WEAK_FUNC(sub_83CCCB20);
PPC_FUNC_IMPL(__imp__sub_83CCCB20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29616
	ctx.r3.s64 = ctx.r11.s64 + -29616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCB2C"))) PPC_WEAK_FUNC(sub_83CCCB2C);
PPC_FUNC_IMPL(__imp__sub_83CCCB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCB30"))) PPC_WEAK_FUNC(sub_83CCCB30);
PPC_FUNC_IMPL(__imp__sub_83CCCB30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29608
	ctx.r3.s64 = ctx.r11.s64 + -29608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCB3C"))) PPC_WEAK_FUNC(sub_83CCCB3C);
PPC_FUNC_IMPL(__imp__sub_83CCCB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCB40"))) PPC_WEAK_FUNC(sub_83CCCB40);
PPC_FUNC_IMPL(__imp__sub_83CCCB40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29600
	ctx.r3.s64 = ctx.r11.s64 + -29600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCB4C"))) PPC_WEAK_FUNC(sub_83CCCB4C);
PPC_FUNC_IMPL(__imp__sub_83CCCB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCB50"))) PPC_WEAK_FUNC(sub_83CCCB50);
PPC_FUNC_IMPL(__imp__sub_83CCCB50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29592
	ctx.r3.s64 = ctx.r11.s64 + -29592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCB5C"))) PPC_WEAK_FUNC(sub_83CCCB5C);
PPC_FUNC_IMPL(__imp__sub_83CCCB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCB60"))) PPC_WEAK_FUNC(sub_83CCCB60);
PPC_FUNC_IMPL(__imp__sub_83CCCB60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29584
	ctx.r3.s64 = ctx.r11.s64 + -29584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCB6C"))) PPC_WEAK_FUNC(sub_83CCCB6C);
PPC_FUNC_IMPL(__imp__sub_83CCCB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCB70"))) PPC_WEAK_FUNC(sub_83CCCB70);
PPC_FUNC_IMPL(__imp__sub_83CCCB70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29576
	ctx.r3.s64 = ctx.r11.s64 + -29576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCB7C"))) PPC_WEAK_FUNC(sub_83CCCB7C);
PPC_FUNC_IMPL(__imp__sub_83CCCB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCB80"))) PPC_WEAK_FUNC(sub_83CCCB80);
PPC_FUNC_IMPL(__imp__sub_83CCCB80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,7228
	ctx.r4.s64 = ctx.r11.s64 + 7228;
	// lis r7,-31743
	ctx.r7.s64 = -2080309248;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,-13676
	ctx.r3.s64 = ctx.r7.s64 + -13676;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCBB0"))) PPC_WEAK_FUNC(sub_83CCCBB0);
PPC_FUNC_IMPL(__imp__sub_83CCCBB0) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-13684
	ctx.r3.s64 = ctx.r11.s64 + -13684;
	// bl 0x83523120
	ctx.lr = 0x83CCCBC8;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-29568
	ctx.r3.s64 = ctx.r10.s64 + -29568;
	// bl 0x831cdcc8
	ctx.lr = 0x83CCCBD4;
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

__attribute__((alias("__imp__sub_83CCCBE4"))) PPC_WEAK_FUNC(sub_83CCCBE4);
PPC_FUNC_IMPL(__imp__sub_83CCCBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCBE8"))) PPC_WEAK_FUNC(sub_83CCCBE8);
PPC_FUNC_IMPL(__imp__sub_83CCCBE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29552
	ctx.r3.s64 = ctx.r11.s64 + -29552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCBF4"))) PPC_WEAK_FUNC(sub_83CCCBF4);
PPC_FUNC_IMPL(__imp__sub_83CCCBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCBF8"))) PPC_WEAK_FUNC(sub_83CCCBF8);
PPC_FUNC_IMPL(__imp__sub_83CCCBF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29544
	ctx.r3.s64 = ctx.r11.s64 + -29544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCC04"))) PPC_WEAK_FUNC(sub_83CCCC04);
PPC_FUNC_IMPL(__imp__sub_83CCCC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCC08"))) PPC_WEAK_FUNC(sub_83CCCC08);
PPC_FUNC_IMPL(__imp__sub_83CCCC08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29536
	ctx.r3.s64 = ctx.r11.s64 + -29536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCC14"))) PPC_WEAK_FUNC(sub_83CCCC14);
PPC_FUNC_IMPL(__imp__sub_83CCCC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCC18"))) PPC_WEAK_FUNC(sub_83CCCC18);
PPC_FUNC_IMPL(__imp__sub_83CCCC18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29528
	ctx.r3.s64 = ctx.r11.s64 + -29528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCC24"))) PPC_WEAK_FUNC(sub_83CCCC24);
PPC_FUNC_IMPL(__imp__sub_83CCCC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCC28"))) PPC_WEAK_FUNC(sub_83CCCC28);
PPC_FUNC_IMPL(__imp__sub_83CCCC28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29520
	ctx.r3.s64 = ctx.r11.s64 + -29520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCC34"))) PPC_WEAK_FUNC(sub_83CCCC34);
PPC_FUNC_IMPL(__imp__sub_83CCCC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCC38"))) PPC_WEAK_FUNC(sub_83CCCC38);
PPC_FUNC_IMPL(__imp__sub_83CCCC38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29512
	ctx.r3.s64 = ctx.r11.s64 + -29512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCC44"))) PPC_WEAK_FUNC(sub_83CCCC44);
PPC_FUNC_IMPL(__imp__sub_83CCCC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCC48"))) PPC_WEAK_FUNC(sub_83CCCC48);
PPC_FUNC_IMPL(__imp__sub_83CCCC48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29504
	ctx.r3.s64 = ctx.r11.s64 + -29504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCC54"))) PPC_WEAK_FUNC(sub_83CCCC54);
PPC_FUNC_IMPL(__imp__sub_83CCCC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCC58"))) PPC_WEAK_FUNC(sub_83CCCC58);
PPC_FUNC_IMPL(__imp__sub_83CCCC58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29496
	ctx.r3.s64 = ctx.r11.s64 + -29496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCC64"))) PPC_WEAK_FUNC(sub_83CCCC64);
PPC_FUNC_IMPL(__imp__sub_83CCCC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCC68"))) PPC_WEAK_FUNC(sub_83CCCC68);
PPC_FUNC_IMPL(__imp__sub_83CCCC68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29488
	ctx.r3.s64 = ctx.r11.s64 + -29488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCC74"))) PPC_WEAK_FUNC(sub_83CCCC74);
PPC_FUNC_IMPL(__imp__sub_83CCCC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCC78"))) PPC_WEAK_FUNC(sub_83CCCC78);
PPC_FUNC_IMPL(__imp__sub_83CCCC78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29480
	ctx.r3.s64 = ctx.r11.s64 + -29480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCC84"))) PPC_WEAK_FUNC(sub_83CCCC84);
PPC_FUNC_IMPL(__imp__sub_83CCCC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCC88"))) PPC_WEAK_FUNC(sub_83CCCC88);
PPC_FUNC_IMPL(__imp__sub_83CCCC88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29472
	ctx.r3.s64 = ctx.r11.s64 + -29472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCC94"))) PPC_WEAK_FUNC(sub_83CCCC94);
PPC_FUNC_IMPL(__imp__sub_83CCCC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCC98"))) PPC_WEAK_FUNC(sub_83CCCC98);
PPC_FUNC_IMPL(__imp__sub_83CCCC98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29464
	ctx.r3.s64 = ctx.r11.s64 + -29464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCCA4"))) PPC_WEAK_FUNC(sub_83CCCCA4);
PPC_FUNC_IMPL(__imp__sub_83CCCCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCCA8"))) PPC_WEAK_FUNC(sub_83CCCCA8);
PPC_FUNC_IMPL(__imp__sub_83CCCCA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,7644
	ctx.r4.s64 = ctx.r11.s64 + 7644;
	// lis r7,-31743
	ctx.r7.s64 = -2080309248;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,-13660
	ctx.r3.s64 = ctx.r7.s64 + -13660;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCCD8"))) PPC_WEAK_FUNC(sub_83CCCCD8);
PPC_FUNC_IMPL(__imp__sub_83CCCCD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29456
	ctx.r3.s64 = ctx.r11.s64 + -29456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCCE4"))) PPC_WEAK_FUNC(sub_83CCCCE4);
PPC_FUNC_IMPL(__imp__sub_83CCCCE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCCE8"))) PPC_WEAK_FUNC(sub_83CCCCE8);
PPC_FUNC_IMPL(__imp__sub_83CCCCE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29448
	ctx.r3.s64 = ctx.r11.s64 + -29448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCCF4"))) PPC_WEAK_FUNC(sub_83CCCCF4);
PPC_FUNC_IMPL(__imp__sub_83CCCCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCCF8"))) PPC_WEAK_FUNC(sub_83CCCCF8);
PPC_FUNC_IMPL(__imp__sub_83CCCCF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29440
	ctx.r3.s64 = ctx.r11.s64 + -29440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCD04"))) PPC_WEAK_FUNC(sub_83CCCD04);
PPC_FUNC_IMPL(__imp__sub_83CCCD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCD08"))) PPC_WEAK_FUNC(sub_83CCCD08);
PPC_FUNC_IMPL(__imp__sub_83CCCD08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29432
	ctx.r3.s64 = ctx.r11.s64 + -29432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCD14"))) PPC_WEAK_FUNC(sub_83CCCD14);
PPC_FUNC_IMPL(__imp__sub_83CCCD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCD18"))) PPC_WEAK_FUNC(sub_83CCCD18);
PPC_FUNC_IMPL(__imp__sub_83CCCD18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29424
	ctx.r3.s64 = ctx.r11.s64 + -29424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCD24"))) PPC_WEAK_FUNC(sub_83CCCD24);
PPC_FUNC_IMPL(__imp__sub_83CCCD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCD28"))) PPC_WEAK_FUNC(sub_83CCCD28);
PPC_FUNC_IMPL(__imp__sub_83CCCD28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29416
	ctx.r3.s64 = ctx.r11.s64 + -29416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCD34"))) PPC_WEAK_FUNC(sub_83CCCD34);
PPC_FUNC_IMPL(__imp__sub_83CCCD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCD38"))) PPC_WEAK_FUNC(sub_83CCCD38);
PPC_FUNC_IMPL(__imp__sub_83CCCD38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29408
	ctx.r3.s64 = ctx.r11.s64 + -29408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCD44"))) PPC_WEAK_FUNC(sub_83CCCD44);
PPC_FUNC_IMPL(__imp__sub_83CCCD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCD48"))) PPC_WEAK_FUNC(sub_83CCCD48);
PPC_FUNC_IMPL(__imp__sub_83CCCD48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29400
	ctx.r3.s64 = ctx.r11.s64 + -29400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCD54"))) PPC_WEAK_FUNC(sub_83CCCD54);
PPC_FUNC_IMPL(__imp__sub_83CCCD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCD58"))) PPC_WEAK_FUNC(sub_83CCCD58);
PPC_FUNC_IMPL(__imp__sub_83CCCD58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29392
	ctx.r3.s64 = ctx.r11.s64 + -29392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCD64"))) PPC_WEAK_FUNC(sub_83CCCD64);
PPC_FUNC_IMPL(__imp__sub_83CCCD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCD68"))) PPC_WEAK_FUNC(sub_83CCCD68);
PPC_FUNC_IMPL(__imp__sub_83CCCD68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29384
	ctx.r3.s64 = ctx.r11.s64 + -29384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCD74"))) PPC_WEAK_FUNC(sub_83CCCD74);
PPC_FUNC_IMPL(__imp__sub_83CCCD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCD78"))) PPC_WEAK_FUNC(sub_83CCCD78);
PPC_FUNC_IMPL(__imp__sub_83CCCD78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29376
	ctx.r3.s64 = ctx.r11.s64 + -29376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCD84"))) PPC_WEAK_FUNC(sub_83CCCD84);
PPC_FUNC_IMPL(__imp__sub_83CCCD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCD88"))) PPC_WEAK_FUNC(sub_83CCCD88);
PPC_FUNC_IMPL(__imp__sub_83CCCD88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29368
	ctx.r3.s64 = ctx.r11.s64 + -29368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCD94"))) PPC_WEAK_FUNC(sub_83CCCD94);
PPC_FUNC_IMPL(__imp__sub_83CCCD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCD98"))) PPC_WEAK_FUNC(sub_83CCCD98);
PPC_FUNC_IMPL(__imp__sub_83CCCD98) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-13364
	ctx.r3.s64 = ctx.r11.s64 + -13364;
	// bl 0x83523120
	ctx.lr = 0x83CCCDB0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-29360
	ctx.r3.s64 = ctx.r10.s64 + -29360;
	// bl 0x831cdcc8
	ctx.lr = 0x83CCCDBC;
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

__attribute__((alias("__imp__sub_83CCCDCC"))) PPC_WEAK_FUNC(sub_83CCCDCC);
PPC_FUNC_IMPL(__imp__sub_83CCCDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCDD0"))) PPC_WEAK_FUNC(sub_83CCCDD0);
PPC_FUNC_IMPL(__imp__sub_83CCCDD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29344
	ctx.r3.s64 = ctx.r11.s64 + -29344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCDDC"))) PPC_WEAK_FUNC(sub_83CCCDDC);
PPC_FUNC_IMPL(__imp__sub_83CCCDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCDE0"))) PPC_WEAK_FUNC(sub_83CCCDE0);
PPC_FUNC_IMPL(__imp__sub_83CCCDE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29336
	ctx.r3.s64 = ctx.r11.s64 + -29336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCDEC"))) PPC_WEAK_FUNC(sub_83CCCDEC);
PPC_FUNC_IMPL(__imp__sub_83CCCDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCDF0"))) PPC_WEAK_FUNC(sub_83CCCDF0);
PPC_FUNC_IMPL(__imp__sub_83CCCDF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29328
	ctx.r3.s64 = ctx.r11.s64 + -29328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCDFC"))) PPC_WEAK_FUNC(sub_83CCCDFC);
PPC_FUNC_IMPL(__imp__sub_83CCCDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCE00"))) PPC_WEAK_FUNC(sub_83CCCE00);
PPC_FUNC_IMPL(__imp__sub_83CCCE00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29320
	ctx.r3.s64 = ctx.r11.s64 + -29320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCE0C"))) PPC_WEAK_FUNC(sub_83CCCE0C);
PPC_FUNC_IMPL(__imp__sub_83CCCE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCE10"))) PPC_WEAK_FUNC(sub_83CCCE10);
PPC_FUNC_IMPL(__imp__sub_83CCCE10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29312
	ctx.r3.s64 = ctx.r11.s64 + -29312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCE1C"))) PPC_WEAK_FUNC(sub_83CCCE1C);
PPC_FUNC_IMPL(__imp__sub_83CCCE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCE20"))) PPC_WEAK_FUNC(sub_83CCCE20);
PPC_FUNC_IMPL(__imp__sub_83CCCE20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29304
	ctx.r3.s64 = ctx.r11.s64 + -29304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCE2C"))) PPC_WEAK_FUNC(sub_83CCCE2C);
PPC_FUNC_IMPL(__imp__sub_83CCCE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCE30"))) PPC_WEAK_FUNC(sub_83CCCE30);
PPC_FUNC_IMPL(__imp__sub_83CCCE30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29296
	ctx.r3.s64 = ctx.r11.s64 + -29296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCE3C"))) PPC_WEAK_FUNC(sub_83CCCE3C);
PPC_FUNC_IMPL(__imp__sub_83CCCE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCE40"))) PPC_WEAK_FUNC(sub_83CCCE40);
PPC_FUNC_IMPL(__imp__sub_83CCCE40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29288
	ctx.r3.s64 = ctx.r11.s64 + -29288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCE4C"))) PPC_WEAK_FUNC(sub_83CCCE4C);
PPC_FUNC_IMPL(__imp__sub_83CCCE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCE50"))) PPC_WEAK_FUNC(sub_83CCCE50);
PPC_FUNC_IMPL(__imp__sub_83CCCE50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29280
	ctx.r3.s64 = ctx.r11.s64 + -29280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCE5C"))) PPC_WEAK_FUNC(sub_83CCCE5C);
PPC_FUNC_IMPL(__imp__sub_83CCCE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCE60"))) PPC_WEAK_FUNC(sub_83CCCE60);
PPC_FUNC_IMPL(__imp__sub_83CCCE60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29272
	ctx.r3.s64 = ctx.r11.s64 + -29272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCE6C"))) PPC_WEAK_FUNC(sub_83CCCE6C);
PPC_FUNC_IMPL(__imp__sub_83CCCE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCE70"))) PPC_WEAK_FUNC(sub_83CCCE70);
PPC_FUNC_IMPL(__imp__sub_83CCCE70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29264
	ctx.r3.s64 = ctx.r11.s64 + -29264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCE7C"))) PPC_WEAK_FUNC(sub_83CCCE7C);
PPC_FUNC_IMPL(__imp__sub_83CCCE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCE80"))) PPC_WEAK_FUNC(sub_83CCCE80);
PPC_FUNC_IMPL(__imp__sub_83CCCE80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29256
	ctx.r3.s64 = ctx.r11.s64 + -29256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCE8C"))) PPC_WEAK_FUNC(sub_83CCCE8C);
PPC_FUNC_IMPL(__imp__sub_83CCCE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCE90"))) PPC_WEAK_FUNC(sub_83CCCE90);
PPC_FUNC_IMPL(__imp__sub_83CCCE90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29248
	ctx.r3.s64 = ctx.r11.s64 + -29248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCE9C"))) PPC_WEAK_FUNC(sub_83CCCE9C);
PPC_FUNC_IMPL(__imp__sub_83CCCE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCEA0"))) PPC_WEAK_FUNC(sub_83CCCEA0);
PPC_FUNC_IMPL(__imp__sub_83CCCEA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29240
	ctx.r3.s64 = ctx.r11.s64 + -29240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCEAC"))) PPC_WEAK_FUNC(sub_83CCCEAC);
PPC_FUNC_IMPL(__imp__sub_83CCCEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCEB0"))) PPC_WEAK_FUNC(sub_83CCCEB0);
PPC_FUNC_IMPL(__imp__sub_83CCCEB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29232
	ctx.r3.s64 = ctx.r11.s64 + -29232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCEBC"))) PPC_WEAK_FUNC(sub_83CCCEBC);
PPC_FUNC_IMPL(__imp__sub_83CCCEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCEC0"))) PPC_WEAK_FUNC(sub_83CCCEC0);
PPC_FUNC_IMPL(__imp__sub_83CCCEC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29224
	ctx.r3.s64 = ctx.r11.s64 + -29224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCECC"))) PPC_WEAK_FUNC(sub_83CCCECC);
PPC_FUNC_IMPL(__imp__sub_83CCCECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCED0"))) PPC_WEAK_FUNC(sub_83CCCED0);
PPC_FUNC_IMPL(__imp__sub_83CCCED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29216
	ctx.r3.s64 = ctx.r11.s64 + -29216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCEDC"))) PPC_WEAK_FUNC(sub_83CCCEDC);
PPC_FUNC_IMPL(__imp__sub_83CCCEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCEE0"))) PPC_WEAK_FUNC(sub_83CCCEE0);
PPC_FUNC_IMPL(__imp__sub_83CCCEE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29208
	ctx.r3.s64 = ctx.r11.s64 + -29208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCEEC"))) PPC_WEAK_FUNC(sub_83CCCEEC);
PPC_FUNC_IMPL(__imp__sub_83CCCEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCEF0"))) PPC_WEAK_FUNC(sub_83CCCEF0);
PPC_FUNC_IMPL(__imp__sub_83CCCEF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29200
	ctx.r3.s64 = ctx.r11.s64 + -29200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCEFC"))) PPC_WEAK_FUNC(sub_83CCCEFC);
PPC_FUNC_IMPL(__imp__sub_83CCCEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCF00"))) PPC_WEAK_FUNC(sub_83CCCF00);
PPC_FUNC_IMPL(__imp__sub_83CCCF00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29192
	ctx.r3.s64 = ctx.r11.s64 + -29192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCF0C"))) PPC_WEAK_FUNC(sub_83CCCF0C);
PPC_FUNC_IMPL(__imp__sub_83CCCF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCF10"))) PPC_WEAK_FUNC(sub_83CCCF10);
PPC_FUNC_IMPL(__imp__sub_83CCCF10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29184
	ctx.r3.s64 = ctx.r11.s64 + -29184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCF1C"))) PPC_WEAK_FUNC(sub_83CCCF1C);
PPC_FUNC_IMPL(__imp__sub_83CCCF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCF20"))) PPC_WEAK_FUNC(sub_83CCCF20);
PPC_FUNC_IMPL(__imp__sub_83CCCF20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29176
	ctx.r3.s64 = ctx.r11.s64 + -29176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCF2C"))) PPC_WEAK_FUNC(sub_83CCCF2C);
PPC_FUNC_IMPL(__imp__sub_83CCCF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCF30"))) PPC_WEAK_FUNC(sub_83CCCF30);
PPC_FUNC_IMPL(__imp__sub_83CCCF30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29168
	ctx.r3.s64 = ctx.r11.s64 + -29168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCF3C"))) PPC_WEAK_FUNC(sub_83CCCF3C);
PPC_FUNC_IMPL(__imp__sub_83CCCF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCF40"))) PPC_WEAK_FUNC(sub_83CCCF40);
PPC_FUNC_IMPL(__imp__sub_83CCCF40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29160
	ctx.r3.s64 = ctx.r11.s64 + -29160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCF4C"))) PPC_WEAK_FUNC(sub_83CCCF4C);
PPC_FUNC_IMPL(__imp__sub_83CCCF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCF50"))) PPC_WEAK_FUNC(sub_83CCCF50);
PPC_FUNC_IMPL(__imp__sub_83CCCF50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29152
	ctx.r3.s64 = ctx.r11.s64 + -29152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCF5C"))) PPC_WEAK_FUNC(sub_83CCCF5C);
PPC_FUNC_IMPL(__imp__sub_83CCCF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCF60"))) PPC_WEAK_FUNC(sub_83CCCF60);
PPC_FUNC_IMPL(__imp__sub_83CCCF60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29144
	ctx.r3.s64 = ctx.r11.s64 + -29144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCF6C"))) PPC_WEAK_FUNC(sub_83CCCF6C);
PPC_FUNC_IMPL(__imp__sub_83CCCF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCF70"))) PPC_WEAK_FUNC(sub_83CCCF70);
PPC_FUNC_IMPL(__imp__sub_83CCCF70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29136
	ctx.r3.s64 = ctx.r11.s64 + -29136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCF7C"))) PPC_WEAK_FUNC(sub_83CCCF7C);
PPC_FUNC_IMPL(__imp__sub_83CCCF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCF80"))) PPC_WEAK_FUNC(sub_83CCCF80);
PPC_FUNC_IMPL(__imp__sub_83CCCF80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29128
	ctx.r3.s64 = ctx.r11.s64 + -29128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCF8C"))) PPC_WEAK_FUNC(sub_83CCCF8C);
PPC_FUNC_IMPL(__imp__sub_83CCCF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCF90"))) PPC_WEAK_FUNC(sub_83CCCF90);
PPC_FUNC_IMPL(__imp__sub_83CCCF90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29120
	ctx.r3.s64 = ctx.r11.s64 + -29120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCF9C"))) PPC_WEAK_FUNC(sub_83CCCF9C);
PPC_FUNC_IMPL(__imp__sub_83CCCF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCFA0"))) PPC_WEAK_FUNC(sub_83CCCFA0);
PPC_FUNC_IMPL(__imp__sub_83CCCFA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29112
	ctx.r3.s64 = ctx.r11.s64 + -29112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCFAC"))) PPC_WEAK_FUNC(sub_83CCCFAC);
PPC_FUNC_IMPL(__imp__sub_83CCCFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCFB0"))) PPC_WEAK_FUNC(sub_83CCCFB0);
PPC_FUNC_IMPL(__imp__sub_83CCCFB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCFBC"))) PPC_WEAK_FUNC(sub_83CCCFBC);
PPC_FUNC_IMPL(__imp__sub_83CCCFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCFC0"))) PPC_WEAK_FUNC(sub_83CCCFC0);
PPC_FUNC_IMPL(__imp__sub_83CCCFC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29096
	ctx.r3.s64 = ctx.r11.s64 + -29096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCFCC"))) PPC_WEAK_FUNC(sub_83CCCFCC);
PPC_FUNC_IMPL(__imp__sub_83CCCFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCFD0"))) PPC_WEAK_FUNC(sub_83CCCFD0);
PPC_FUNC_IMPL(__imp__sub_83CCCFD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29088
	ctx.r3.s64 = ctx.r11.s64 + -29088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCFDC"))) PPC_WEAK_FUNC(sub_83CCCFDC);
PPC_FUNC_IMPL(__imp__sub_83CCCFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCFE0"))) PPC_WEAK_FUNC(sub_83CCCFE0);
PPC_FUNC_IMPL(__imp__sub_83CCCFE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29080
	ctx.r3.s64 = ctx.r11.s64 + -29080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCFEC"))) PPC_WEAK_FUNC(sub_83CCCFEC);
PPC_FUNC_IMPL(__imp__sub_83CCCFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCCFF0"))) PPC_WEAK_FUNC(sub_83CCCFF0);
PPC_FUNC_IMPL(__imp__sub_83CCCFF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29072
	ctx.r3.s64 = ctx.r11.s64 + -29072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCCFFC"))) PPC_WEAK_FUNC(sub_83CCCFFC);
PPC_FUNC_IMPL(__imp__sub_83CCCFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCD000"))) PPC_WEAK_FUNC(sub_83CCD000);
PPC_FUNC_IMPL(__imp__sub_83CCD000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29064
	ctx.r3.s64 = ctx.r11.s64 + -29064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCD00C"))) PPC_WEAK_FUNC(sub_83CCD00C);
PPC_FUNC_IMPL(__imp__sub_83CCD00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCD010"))) PPC_WEAK_FUNC(sub_83CCD010);
PPC_FUNC_IMPL(__imp__sub_83CCD010) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-13348
	ctx.r3.s64 = ctx.r11.s64 + -13348;
	// bl 0x83523120
	ctx.lr = 0x83CCD028;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-29056
	ctx.r3.s64 = ctx.r10.s64 + -29056;
	// bl 0x831cdcc8
	ctx.lr = 0x83CCD034;
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

__attribute__((alias("__imp__sub_83CCD044"))) PPC_WEAK_FUNC(sub_83CCD044);
PPC_FUNC_IMPL(__imp__sub_83CCD044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCD048"))) PPC_WEAK_FUNC(sub_83CCD048);
PPC_FUNC_IMPL(__imp__sub_83CCD048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29040
	ctx.r3.s64 = ctx.r11.s64 + -29040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCD054"))) PPC_WEAK_FUNC(sub_83CCD054);
PPC_FUNC_IMPL(__imp__sub_83CCD054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCD058"))) PPC_WEAK_FUNC(sub_83CCD058);
PPC_FUNC_IMPL(__imp__sub_83CCD058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29032
	ctx.r3.s64 = ctx.r11.s64 + -29032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCD064"))) PPC_WEAK_FUNC(sub_83CCD064);
PPC_FUNC_IMPL(__imp__sub_83CCD064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCD068"))) PPC_WEAK_FUNC(sub_83CCD068);
PPC_FUNC_IMPL(__imp__sub_83CCD068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29024
	ctx.r3.s64 = ctx.r11.s64 + -29024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCD074"))) PPC_WEAK_FUNC(sub_83CCD074);
PPC_FUNC_IMPL(__imp__sub_83CCD074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCD078"))) PPC_WEAK_FUNC(sub_83CCD078);
PPC_FUNC_IMPL(__imp__sub_83CCD078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29016
	ctx.r3.s64 = ctx.r11.s64 + -29016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCD084"))) PPC_WEAK_FUNC(sub_83CCD084);
PPC_FUNC_IMPL(__imp__sub_83CCD084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCD088"))) PPC_WEAK_FUNC(sub_83CCD088);
PPC_FUNC_IMPL(__imp__sub_83CCD088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29008
	ctx.r3.s64 = ctx.r11.s64 + -29008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCD094"))) PPC_WEAK_FUNC(sub_83CCD094);
PPC_FUNC_IMPL(__imp__sub_83CCD094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCD098"))) PPC_WEAK_FUNC(sub_83CCD098);
PPC_FUNC_IMPL(__imp__sub_83CCD098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-29000
	ctx.r3.s64 = ctx.r11.s64 + -29000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCD0A4"))) PPC_WEAK_FUNC(sub_83CCD0A4);
PPC_FUNC_IMPL(__imp__sub_83CCD0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCD0A8"))) PPC_WEAK_FUNC(sub_83CCD0A8);
PPC_FUNC_IMPL(__imp__sub_83CCD0A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-28992
	ctx.r3.s64 = ctx.r11.s64 + -28992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCD0B4"))) PPC_WEAK_FUNC(sub_83CCD0B4);
PPC_FUNC_IMPL(__imp__sub_83CCD0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCD0B8"))) PPC_WEAK_FUNC(sub_83CCD0B8);
PPC_FUNC_IMPL(__imp__sub_83CCD0B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-28984
	ctx.r3.s64 = ctx.r11.s64 + -28984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCD0C4"))) PPC_WEAK_FUNC(sub_83CCD0C4);
PPC_FUNC_IMPL(__imp__sub_83CCD0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCD0C8"))) PPC_WEAK_FUNC(sub_83CCD0C8);
PPC_FUNC_IMPL(__imp__sub_83CCD0C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-28976
	ctx.r3.s64 = ctx.r11.s64 + -28976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCD0D4"))) PPC_WEAK_FUNC(sub_83CCD0D4);
PPC_FUNC_IMPL(__imp__sub_83CCD0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCD0D8"))) PPC_WEAK_FUNC(sub_83CCD0D8);
PPC_FUNC_IMPL(__imp__sub_83CCD0D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-28968
	ctx.r3.s64 = ctx.r11.s64 + -28968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCD0E4"))) PPC_WEAK_FUNC(sub_83CCD0E4);
PPC_FUNC_IMPL(__imp__sub_83CCD0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCD0E8"))) PPC_WEAK_FUNC(sub_83CCD0E8);
PPC_FUNC_IMPL(__imp__sub_83CCD0E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-28960
	ctx.r3.s64 = ctx.r11.s64 + -28960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCD0F4"))) PPC_WEAK_FUNC(sub_83CCD0F4);
PPC_FUNC_IMPL(__imp__sub_83CCD0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCD0F8"))) PPC_WEAK_FUNC(sub_83CCD0F8);
PPC_FUNC_IMPL(__imp__sub_83CCD0F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-28952
	ctx.r3.s64 = ctx.r11.s64 + -28952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCD104"))) PPC_WEAK_FUNC(sub_83CCD104);
PPC_FUNC_IMPL(__imp__sub_83CCD104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCD108"))) PPC_WEAK_FUNC(sub_83CCD108);
PPC_FUNC_IMPL(__imp__sub_83CCD108) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-13340
	ctx.r3.s64 = ctx.r11.s64 + -13340;
	// bl 0x83523120
	ctx.lr = 0x83CCD120;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-28944
	ctx.r3.s64 = ctx.r10.s64 + -28944;
	// bl 0x831cdcc8
	ctx.lr = 0x83CCD12C;
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

__attribute__((alias("__imp__sub_83CCD13C"))) PPC_WEAK_FUNC(sub_83CCD13C);
PPC_FUNC_IMPL(__imp__sub_83CCD13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCD140"))) PPC_WEAK_FUNC(sub_83CCD140);
PPC_FUNC_IMPL(__imp__sub_83CCD140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-28928
	ctx.r3.s64 = ctx.r11.s64 + -28928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCD14C"))) PPC_WEAK_FUNC(sub_83CCD14C);
PPC_FUNC_IMPL(__imp__sub_83CCD14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCD150"))) PPC_WEAK_FUNC(sub_83CCD150);
PPC_FUNC_IMPL(__imp__sub_83CCD150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-28920
	ctx.r3.s64 = ctx.r11.s64 + -28920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCD15C"))) PPC_WEAK_FUNC(sub_83CCD15C);
PPC_FUNC_IMPL(__imp__sub_83CCD15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCD160"))) PPC_WEAK_FUNC(sub_83CCD160);
PPC_FUNC_IMPL(__imp__sub_83CCD160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-28912
	ctx.r3.s64 = ctx.r11.s64 + -28912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCD16C"))) PPC_WEAK_FUNC(sub_83CCD16C);
PPC_FUNC_IMPL(__imp__sub_83CCD16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCD170"))) PPC_WEAK_FUNC(sub_83CCD170);
PPC_FUNC_IMPL(__imp__sub_83CCD170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-28904
	ctx.r3.s64 = ctx.r11.s64 + -28904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCD17C"))) PPC_WEAK_FUNC(sub_83CCD17C);
PPC_FUNC_IMPL(__imp__sub_83CCD17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCD180"))) PPC_WEAK_FUNC(sub_83CCD180);
PPC_FUNC_IMPL(__imp__sub_83CCD180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-28896
	ctx.r3.s64 = ctx.r11.s64 + -28896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCD18C"))) PPC_WEAK_FUNC(sub_83CCD18C);
PPC_FUNC_IMPL(__imp__sub_83CCD18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCD190"))) PPC_WEAK_FUNC(sub_83CCD190);
PPC_FUNC_IMPL(__imp__sub_83CCD190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-28888
	ctx.r3.s64 = ctx.r11.s64 + -28888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCD19C"))) PPC_WEAK_FUNC(sub_83CCD19C);
PPC_FUNC_IMPL(__imp__sub_83CCD19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCD1A0"))) PPC_WEAK_FUNC(sub_83CCD1A0);
PPC_FUNC_IMPL(__imp__sub_83CCD1A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-28880
	ctx.r3.s64 = ctx.r11.s64 + -28880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCD1AC"))) PPC_WEAK_FUNC(sub_83CCD1AC);
PPC_FUNC_IMPL(__imp__sub_83CCD1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCD1B0"))) PPC_WEAK_FUNC(sub_83CCD1B0);
PPC_FUNC_IMPL(__imp__sub_83CCD1B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-28872
	ctx.r3.s64 = ctx.r11.s64 + -28872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCD1BC"))) PPC_WEAK_FUNC(sub_83CCD1BC);
PPC_FUNC_IMPL(__imp__sub_83CCD1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCD1C0"))) PPC_WEAK_FUNC(sub_83CCD1C0);
PPC_FUNC_IMPL(__imp__sub_83CCD1C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-28864
	ctx.r3.s64 = ctx.r11.s64 + -28864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCD1CC"))) PPC_WEAK_FUNC(sub_83CCD1CC);
PPC_FUNC_IMPL(__imp__sub_83CCD1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCD1D0"))) PPC_WEAK_FUNC(sub_83CCD1D0);
PPC_FUNC_IMPL(__imp__sub_83CCD1D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-28856
	ctx.r3.s64 = ctx.r11.s64 + -28856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCD1DC"))) PPC_WEAK_FUNC(sub_83CCD1DC);
PPC_FUNC_IMPL(__imp__sub_83CCD1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCD1E0"))) PPC_WEAK_FUNC(sub_83CCD1E0);
PPC_FUNC_IMPL(__imp__sub_83CCD1E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-28848
	ctx.r3.s64 = ctx.r11.s64 + -28848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCD1EC"))) PPC_WEAK_FUNC(sub_83CCD1EC);
PPC_FUNC_IMPL(__imp__sub_83CCD1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCD1F0"))) PPC_WEAK_FUNC(sub_83CCD1F0);
PPC_FUNC_IMPL(__imp__sub_83CCD1F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-28840
	ctx.r3.s64 = ctx.r11.s64 + -28840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCD1FC"))) PPC_WEAK_FUNC(sub_83CCD1FC);
PPC_FUNC_IMPL(__imp__sub_83CCD1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCD200"))) PPC_WEAK_FUNC(sub_83CCD200);
PPC_FUNC_IMPL(__imp__sub_83CCD200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32212
	ctx.r11.s64 = -2111045632;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,31232
	ctx.r4.s64 = ctx.r11.s64 + 31232;
	// lis r7,-31743
	ctx.r7.s64 = -2080309248;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,-13280
	ctx.r3.s64 = ctx.r7.s64 + -13280;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCD230"))) PPC_WEAK_FUNC(sub_83CCD230);
PPC_FUNC_IMPL(__imp__sub_83CCD230) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13288
	ctx.r7.s64 = ctx.r8.s64 + -13288;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13288(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13288);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13288(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13288, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CCD258"))) PPC_WEAK_FUNC(sub_83CCD258);
PPC_FUNC_IMPL(__imp__sub_83CCD258) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31769
	ctx.r7.s64 = -2082013184;
	// lis r5,-31769
	ctx.r5.s64 = -2082013184;
	// addi r6,r7,-12312
	ctx.r6.s64 = ctx.r7.s64 + -12312;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-12404(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -12404);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-13288(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -13288);
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
	// std r9,-12312(r7)
	PPC_STORE_U64(ctx.r7.u32 + -12312, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CCD2A0"))) PPC_WEAK_FUNC(sub_83CCD2A0);
PPC_FUNC_IMPL(__imp__sub_83CCD2A0) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-13303
	ctx.r3.s64 = ctx.r11.s64 + -13303;
	// bl 0x83523120
	ctx.lr = 0x83CCD2B8;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-28832
	ctx.r3.s64 = ctx.r10.s64 + -28832;
	// bl 0x831cdcc8
	ctx.lr = 0x83CCD2C4;
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

__attribute__((alias("__imp__sub_83CCD2D4"))) PPC_WEAK_FUNC(sub_83CCD2D4);
PPC_FUNC_IMPL(__imp__sub_83CCD2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCD2D8"))) PPC_WEAK_FUNC(sub_83CCD2D8);
PPC_FUNC_IMPL(__imp__sub_83CCD2D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-28816
	ctx.r3.s64 = ctx.r11.s64 + -28816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCD2E4"))) PPC_WEAK_FUNC(sub_83CCD2E4);
PPC_FUNC_IMPL(__imp__sub_83CCD2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCD2E8"))) PPC_WEAK_FUNC(sub_83CCD2E8);
PPC_FUNC_IMPL(__imp__sub_83CCD2E8) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-13264
	ctx.r3.s64 = ctx.r11.s64 + -13264;
	// bl 0x8259af80
	ctx.lr = 0x83CCD300;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-28800
	ctx.r3.s64 = ctx.r10.s64 + -28800;
	// bl 0x831cdcc8
	ctx.lr = 0x83CCD30C;
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

__attribute__((alias("__imp__sub_83CCD31C"))) PPC_WEAK_FUNC(sub_83CCD31C);
PPC_FUNC_IMPL(__imp__sub_83CCD31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCD320"))) PPC_WEAK_FUNC(sub_83CCD320);
PPC_FUNC_IMPL(__imp__sub_83CCD320) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31769
	ctx.r10.s64 = -2082013184;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-13300
	ctx.r11.s64 = ctx.r8.s64 + -13300;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,-12356(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12356);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-28808
	ctx.r3.s64 = ctx.r6.s64 + -28808;
	// stw r10,-13300(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13300, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCD350"))) PPC_WEAK_FUNC(sub_83CCD350);
PPC_FUNC_IMPL(__imp__sub_83CCD350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-28792
	ctx.r3.s64 = ctx.r11.s64 + -28792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCD35C"))) PPC_WEAK_FUNC(sub_83CCD35C);
PPC_FUNC_IMPL(__imp__sub_83CCD35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCD360"))) PPC_WEAK_FUNC(sub_83CCD360);
PPC_FUNC_IMPL(__imp__sub_83CCD360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-28784
	ctx.r3.s64 = ctx.r11.s64 + -28784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCD36C"))) PPC_WEAK_FUNC(sub_83CCD36C);
PPC_FUNC_IMPL(__imp__sub_83CCD36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCD370"))) PPC_WEAK_FUNC(sub_83CCD370);
PPC_FUNC_IMPL(__imp__sub_83CCD370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-28776
	ctx.r3.s64 = ctx.r11.s64 + -28776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCD37C"))) PPC_WEAK_FUNC(sub_83CCD37C);
PPC_FUNC_IMPL(__imp__sub_83CCD37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCD380"))) PPC_WEAK_FUNC(sub_83CCD380);
PPC_FUNC_IMPL(__imp__sub_83CCD380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-28768
	ctx.r3.s64 = ctx.r11.s64 + -28768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCD38C"))) PPC_WEAK_FUNC(sub_83CCD38C);
PPC_FUNC_IMPL(__imp__sub_83CCD38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCD390"))) PPC_WEAK_FUNC(sub_83CCD390);
PPC_FUNC_IMPL(__imp__sub_83CCD390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-28760
	ctx.r3.s64 = ctx.r11.s64 + -28760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCD39C"))) PPC_WEAK_FUNC(sub_83CCD39C);
PPC_FUNC_IMPL(__imp__sub_83CCD39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCD3A0"))) PPC_WEAK_FUNC(sub_83CCD3A0);
PPC_FUNC_IMPL(__imp__sub_83CCD3A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-28752
	ctx.r3.s64 = ctx.r11.s64 + -28752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCD3AC"))) PPC_WEAK_FUNC(sub_83CCD3AC);
PPC_FUNC_IMPL(__imp__sub_83CCD3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCD3B0"))) PPC_WEAK_FUNC(sub_83CCD3B0);
PPC_FUNC_IMPL(__imp__sub_83CCD3B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-28744
	ctx.r3.s64 = ctx.r11.s64 + -28744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCD3BC"))) PPC_WEAK_FUNC(sub_83CCD3BC);
PPC_FUNC_IMPL(__imp__sub_83CCD3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCD3C0"))) PPC_WEAK_FUNC(sub_83CCD3C0);
PPC_FUNC_IMPL(__imp__sub_83CCD3C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCD3CC"))) PPC_WEAK_FUNC(sub_83CCD3CC);
PPC_FUNC_IMPL(__imp__sub_83CCD3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCD3D0"))) PPC_WEAK_FUNC(sub_83CCD3D0);
PPC_FUNC_IMPL(__imp__sub_83CCD3D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-28728
	ctx.r3.s64 = ctx.r11.s64 + -28728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCD3DC"))) PPC_WEAK_FUNC(sub_83CCD3DC);
PPC_FUNC_IMPL(__imp__sub_83CCD3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCD3E0"))) PPC_WEAK_FUNC(sub_83CCD3E0);
PPC_FUNC_IMPL(__imp__sub_83CCD3E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-28720
	ctx.r3.s64 = ctx.r11.s64 + -28720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCD3EC"))) PPC_WEAK_FUNC(sub_83CCD3EC);
PPC_FUNC_IMPL(__imp__sub_83CCD3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCD3F0"))) PPC_WEAK_FUNC(sub_83CCD3F0);
PPC_FUNC_IMPL(__imp__sub_83CCD3F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-28712
	ctx.r3.s64 = ctx.r11.s64 + -28712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCD3FC"))) PPC_WEAK_FUNC(sub_83CCD3FC);
PPC_FUNC_IMPL(__imp__sub_83CCD3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCD400"))) PPC_WEAK_FUNC(sub_83CCD400);
PPC_FUNC_IMPL(__imp__sub_83CCD400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-28704
	ctx.r3.s64 = ctx.r11.s64 + -28704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCD40C"))) PPC_WEAK_FUNC(sub_83CCD40C);
PPC_FUNC_IMPL(__imp__sub_83CCD40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCD410"))) PPC_WEAK_FUNC(sub_83CCD410);
PPC_FUNC_IMPL(__imp__sub_83CCD410) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-12916
	ctx.r3.s64 = ctx.r11.s64 + -12916;
	// bl 0x83523120
	ctx.lr = 0x83CCD428;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-28696
	ctx.r3.s64 = ctx.r10.s64 + -28696;
	// bl 0x831cdcc8
	ctx.lr = 0x83CCD434;
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

__attribute__((alias("__imp__sub_83CCD444"))) PPC_WEAK_FUNC(sub_83CCD444);
PPC_FUNC_IMPL(__imp__sub_83CCD444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

