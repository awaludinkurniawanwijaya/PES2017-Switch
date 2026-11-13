#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83CDF900"))) PPC_WEAK_FUNC(sub_83CDF900);
PPC_FUNC_IMPL(__imp__sub_83CDF900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1864
	ctx.r3.s64 = ctx.r11.s64 + -1864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF90C"))) PPC_WEAK_FUNC(sub_83CDF90C);
PPC_FUNC_IMPL(__imp__sub_83CDF90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF910"))) PPC_WEAK_FUNC(sub_83CDF910);
PPC_FUNC_IMPL(__imp__sub_83CDF910) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-32584
	ctx.r7.s64 = ctx.r8.s64 + -32584;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-32584(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32584);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-32584(r8)
	PPC_STORE_U32(ctx.r8.u32 + -32584, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDF938"))) PPC_WEAK_FUNC(sub_83CDF938);
PPC_FUNC_IMPL(__imp__sub_83CDF938) {
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
	// addi r3,r11,-32588
	ctx.r3.s64 = ctx.r11.s64 + -32588;
	// bl 0x83523120
	ctx.lr = 0x83CDF950;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-1856
	ctx.r3.s64 = ctx.r10.s64 + -1856;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDF95C;
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

__attribute__((alias("__imp__sub_83CDF96C"))) PPC_WEAK_FUNC(sub_83CDF96C);
PPC_FUNC_IMPL(__imp__sub_83CDF96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF970"))) PPC_WEAK_FUNC(sub_83CDF970);
PPC_FUNC_IMPL(__imp__sub_83CDF970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1840
	ctx.r3.s64 = ctx.r11.s64 + -1840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF97C"))) PPC_WEAK_FUNC(sub_83CDF97C);
PPC_FUNC_IMPL(__imp__sub_83CDF97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF980"))) PPC_WEAK_FUNC(sub_83CDF980);
PPC_FUNC_IMPL(__imp__sub_83CDF980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1832
	ctx.r3.s64 = ctx.r11.s64 + -1832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF98C"))) PPC_WEAK_FUNC(sub_83CDF98C);
PPC_FUNC_IMPL(__imp__sub_83CDF98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF990"))) PPC_WEAK_FUNC(sub_83CDF990);
PPC_FUNC_IMPL(__imp__sub_83CDF990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1824
	ctx.r3.s64 = ctx.r11.s64 + -1824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF99C"))) PPC_WEAK_FUNC(sub_83CDF99C);
PPC_FUNC_IMPL(__imp__sub_83CDF99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF9A0"))) PPC_WEAK_FUNC(sub_83CDF9A0);
PPC_FUNC_IMPL(__imp__sub_83CDF9A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1816
	ctx.r3.s64 = ctx.r11.s64 + -1816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF9AC"))) PPC_WEAK_FUNC(sub_83CDF9AC);
PPC_FUNC_IMPL(__imp__sub_83CDF9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF9B0"))) PPC_WEAK_FUNC(sub_83CDF9B0);
PPC_FUNC_IMPL(__imp__sub_83CDF9B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1808
	ctx.r3.s64 = ctx.r11.s64 + -1808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF9BC"))) PPC_WEAK_FUNC(sub_83CDF9BC);
PPC_FUNC_IMPL(__imp__sub_83CDF9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF9C0"))) PPC_WEAK_FUNC(sub_83CDF9C0);
PPC_FUNC_IMPL(__imp__sub_83CDF9C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1800
	ctx.r3.s64 = ctx.r11.s64 + -1800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF9CC"))) PPC_WEAK_FUNC(sub_83CDF9CC);
PPC_FUNC_IMPL(__imp__sub_83CDF9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF9D0"))) PPC_WEAK_FUNC(sub_83CDF9D0);
PPC_FUNC_IMPL(__imp__sub_83CDF9D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1792
	ctx.r3.s64 = ctx.r11.s64 + -1792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF9DC"))) PPC_WEAK_FUNC(sub_83CDF9DC);
PPC_FUNC_IMPL(__imp__sub_83CDF9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF9E0"))) PPC_WEAK_FUNC(sub_83CDF9E0);
PPC_FUNC_IMPL(__imp__sub_83CDF9E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1784
	ctx.r3.s64 = ctx.r11.s64 + -1784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF9EC"))) PPC_WEAK_FUNC(sub_83CDF9EC);
PPC_FUNC_IMPL(__imp__sub_83CDF9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDF9F0"))) PPC_WEAK_FUNC(sub_83CDF9F0);
PPC_FUNC_IMPL(__imp__sub_83CDF9F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1776
	ctx.r3.s64 = ctx.r11.s64 + -1776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDF9FC"))) PPC_WEAK_FUNC(sub_83CDF9FC);
PPC_FUNC_IMPL(__imp__sub_83CDF9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFA00"))) PPC_WEAK_FUNC(sub_83CDFA00);
PPC_FUNC_IMPL(__imp__sub_83CDFA00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1768
	ctx.r3.s64 = ctx.r11.s64 + -1768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFA0C"))) PPC_WEAK_FUNC(sub_83CDFA0C);
PPC_FUNC_IMPL(__imp__sub_83CDFA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFA10"))) PPC_WEAK_FUNC(sub_83CDFA10);
PPC_FUNC_IMPL(__imp__sub_83CDFA10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1760
	ctx.r3.s64 = ctx.r11.s64 + -1760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFA1C"))) PPC_WEAK_FUNC(sub_83CDFA1C);
PPC_FUNC_IMPL(__imp__sub_83CDFA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFA20"))) PPC_WEAK_FUNC(sub_83CDFA20);
PPC_FUNC_IMPL(__imp__sub_83CDFA20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1752
	ctx.r3.s64 = ctx.r11.s64 + -1752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFA2C"))) PPC_WEAK_FUNC(sub_83CDFA2C);
PPC_FUNC_IMPL(__imp__sub_83CDFA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFA30"))) PPC_WEAK_FUNC(sub_83CDFA30);
PPC_FUNC_IMPL(__imp__sub_83CDFA30) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-32572
	ctx.r7.s64 = ctx.r8.s64 + -32572;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-32572(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32572);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-32572(r8)
	PPC_STORE_U32(ctx.r8.u32 + -32572, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDFA58"))) PPC_WEAK_FUNC(sub_83CDFA58);
PPC_FUNC_IMPL(__imp__sub_83CDFA58) {
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
	// addi r3,r11,-32576
	ctx.r3.s64 = ctx.r11.s64 + -32576;
	// bl 0x83523120
	ctx.lr = 0x83CDFA70;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-1744
	ctx.r3.s64 = ctx.r10.s64 + -1744;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDFA7C;
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

__attribute__((alias("__imp__sub_83CDFA8C"))) PPC_WEAK_FUNC(sub_83CDFA8C);
PPC_FUNC_IMPL(__imp__sub_83CDFA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFA90"))) PPC_WEAK_FUNC(sub_83CDFA90);
PPC_FUNC_IMPL(__imp__sub_83CDFA90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1728
	ctx.r3.s64 = ctx.r11.s64 + -1728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFA9C"))) PPC_WEAK_FUNC(sub_83CDFA9C);
PPC_FUNC_IMPL(__imp__sub_83CDFA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFAA0"))) PPC_WEAK_FUNC(sub_83CDFAA0);
PPC_FUNC_IMPL(__imp__sub_83CDFAA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1720
	ctx.r3.s64 = ctx.r11.s64 + -1720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFAAC"))) PPC_WEAK_FUNC(sub_83CDFAAC);
PPC_FUNC_IMPL(__imp__sub_83CDFAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFAB0"))) PPC_WEAK_FUNC(sub_83CDFAB0);
PPC_FUNC_IMPL(__imp__sub_83CDFAB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1712
	ctx.r3.s64 = ctx.r11.s64 + -1712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFABC"))) PPC_WEAK_FUNC(sub_83CDFABC);
PPC_FUNC_IMPL(__imp__sub_83CDFABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFAC0"))) PPC_WEAK_FUNC(sub_83CDFAC0);
PPC_FUNC_IMPL(__imp__sub_83CDFAC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1704
	ctx.r3.s64 = ctx.r11.s64 + -1704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFACC"))) PPC_WEAK_FUNC(sub_83CDFACC);
PPC_FUNC_IMPL(__imp__sub_83CDFACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFAD0"))) PPC_WEAK_FUNC(sub_83CDFAD0);
PPC_FUNC_IMPL(__imp__sub_83CDFAD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1696
	ctx.r3.s64 = ctx.r11.s64 + -1696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFADC"))) PPC_WEAK_FUNC(sub_83CDFADC);
PPC_FUNC_IMPL(__imp__sub_83CDFADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFAE0"))) PPC_WEAK_FUNC(sub_83CDFAE0);
PPC_FUNC_IMPL(__imp__sub_83CDFAE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1688
	ctx.r3.s64 = ctx.r11.s64 + -1688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFAEC"))) PPC_WEAK_FUNC(sub_83CDFAEC);
PPC_FUNC_IMPL(__imp__sub_83CDFAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFAF0"))) PPC_WEAK_FUNC(sub_83CDFAF0);
PPC_FUNC_IMPL(__imp__sub_83CDFAF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1680
	ctx.r3.s64 = ctx.r11.s64 + -1680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFAFC"))) PPC_WEAK_FUNC(sub_83CDFAFC);
PPC_FUNC_IMPL(__imp__sub_83CDFAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFB00"))) PPC_WEAK_FUNC(sub_83CDFB00);
PPC_FUNC_IMPL(__imp__sub_83CDFB00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1672
	ctx.r3.s64 = ctx.r11.s64 + -1672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFB0C"))) PPC_WEAK_FUNC(sub_83CDFB0C);
PPC_FUNC_IMPL(__imp__sub_83CDFB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFB10"))) PPC_WEAK_FUNC(sub_83CDFB10);
PPC_FUNC_IMPL(__imp__sub_83CDFB10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1664
	ctx.r3.s64 = ctx.r11.s64 + -1664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFB1C"))) PPC_WEAK_FUNC(sub_83CDFB1C);
PPC_FUNC_IMPL(__imp__sub_83CDFB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFB20"))) PPC_WEAK_FUNC(sub_83CDFB20);
PPC_FUNC_IMPL(__imp__sub_83CDFB20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1656
	ctx.r3.s64 = ctx.r11.s64 + -1656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFB2C"))) PPC_WEAK_FUNC(sub_83CDFB2C);
PPC_FUNC_IMPL(__imp__sub_83CDFB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFB30"))) PPC_WEAK_FUNC(sub_83CDFB30);
PPC_FUNC_IMPL(__imp__sub_83CDFB30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1648
	ctx.r3.s64 = ctx.r11.s64 + -1648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFB3C"))) PPC_WEAK_FUNC(sub_83CDFB3C);
PPC_FUNC_IMPL(__imp__sub_83CDFB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFB40"))) PPC_WEAK_FUNC(sub_83CDFB40);
PPC_FUNC_IMPL(__imp__sub_83CDFB40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1640
	ctx.r3.s64 = ctx.r11.s64 + -1640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFB4C"))) PPC_WEAK_FUNC(sub_83CDFB4C);
PPC_FUNC_IMPL(__imp__sub_83CDFB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFB50"))) PPC_WEAK_FUNC(sub_83CDFB50);
PPC_FUNC_IMPL(__imp__sub_83CDFB50) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-32560
	ctx.r7.s64 = ctx.r8.s64 + -32560;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-32560(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32560);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-32560(r8)
	PPC_STORE_U32(ctx.r8.u32 + -32560, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDFB78"))) PPC_WEAK_FUNC(sub_83CDFB78);
PPC_FUNC_IMPL(__imp__sub_83CDFB78) {
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
	// addi r3,r11,-32564
	ctx.r3.s64 = ctx.r11.s64 + -32564;
	// bl 0x83523120
	ctx.lr = 0x83CDFB90;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-1632
	ctx.r3.s64 = ctx.r10.s64 + -1632;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDFB9C;
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

__attribute__((alias("__imp__sub_83CDFBAC"))) PPC_WEAK_FUNC(sub_83CDFBAC);
PPC_FUNC_IMPL(__imp__sub_83CDFBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFBB0"))) PPC_WEAK_FUNC(sub_83CDFBB0);
PPC_FUNC_IMPL(__imp__sub_83CDFBB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1616
	ctx.r3.s64 = ctx.r11.s64 + -1616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFBBC"))) PPC_WEAK_FUNC(sub_83CDFBBC);
PPC_FUNC_IMPL(__imp__sub_83CDFBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFBC0"))) PPC_WEAK_FUNC(sub_83CDFBC0);
PPC_FUNC_IMPL(__imp__sub_83CDFBC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1608
	ctx.r3.s64 = ctx.r11.s64 + -1608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFBCC"))) PPC_WEAK_FUNC(sub_83CDFBCC);
PPC_FUNC_IMPL(__imp__sub_83CDFBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFBD0"))) PPC_WEAK_FUNC(sub_83CDFBD0);
PPC_FUNC_IMPL(__imp__sub_83CDFBD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1600
	ctx.r3.s64 = ctx.r11.s64 + -1600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFBDC"))) PPC_WEAK_FUNC(sub_83CDFBDC);
PPC_FUNC_IMPL(__imp__sub_83CDFBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFBE0"))) PPC_WEAK_FUNC(sub_83CDFBE0);
PPC_FUNC_IMPL(__imp__sub_83CDFBE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1592
	ctx.r3.s64 = ctx.r11.s64 + -1592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFBEC"))) PPC_WEAK_FUNC(sub_83CDFBEC);
PPC_FUNC_IMPL(__imp__sub_83CDFBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFBF0"))) PPC_WEAK_FUNC(sub_83CDFBF0);
PPC_FUNC_IMPL(__imp__sub_83CDFBF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1584
	ctx.r3.s64 = ctx.r11.s64 + -1584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFBFC"))) PPC_WEAK_FUNC(sub_83CDFBFC);
PPC_FUNC_IMPL(__imp__sub_83CDFBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFC00"))) PPC_WEAK_FUNC(sub_83CDFC00);
PPC_FUNC_IMPL(__imp__sub_83CDFC00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1576
	ctx.r3.s64 = ctx.r11.s64 + -1576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFC0C"))) PPC_WEAK_FUNC(sub_83CDFC0C);
PPC_FUNC_IMPL(__imp__sub_83CDFC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFC10"))) PPC_WEAK_FUNC(sub_83CDFC10);
PPC_FUNC_IMPL(__imp__sub_83CDFC10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1568
	ctx.r3.s64 = ctx.r11.s64 + -1568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFC1C"))) PPC_WEAK_FUNC(sub_83CDFC1C);
PPC_FUNC_IMPL(__imp__sub_83CDFC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFC20"))) PPC_WEAK_FUNC(sub_83CDFC20);
PPC_FUNC_IMPL(__imp__sub_83CDFC20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1560
	ctx.r3.s64 = ctx.r11.s64 + -1560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFC2C"))) PPC_WEAK_FUNC(sub_83CDFC2C);
PPC_FUNC_IMPL(__imp__sub_83CDFC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFC30"))) PPC_WEAK_FUNC(sub_83CDFC30);
PPC_FUNC_IMPL(__imp__sub_83CDFC30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1552
	ctx.r3.s64 = ctx.r11.s64 + -1552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFC3C"))) PPC_WEAK_FUNC(sub_83CDFC3C);
PPC_FUNC_IMPL(__imp__sub_83CDFC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFC40"))) PPC_WEAK_FUNC(sub_83CDFC40);
PPC_FUNC_IMPL(__imp__sub_83CDFC40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1544
	ctx.r3.s64 = ctx.r11.s64 + -1544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFC4C"))) PPC_WEAK_FUNC(sub_83CDFC4C);
PPC_FUNC_IMPL(__imp__sub_83CDFC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFC50"))) PPC_WEAK_FUNC(sub_83CDFC50);
PPC_FUNC_IMPL(__imp__sub_83CDFC50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1536
	ctx.r3.s64 = ctx.r11.s64 + -1536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFC5C"))) PPC_WEAK_FUNC(sub_83CDFC5C);
PPC_FUNC_IMPL(__imp__sub_83CDFC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFC60"))) PPC_WEAK_FUNC(sub_83CDFC60);
PPC_FUNC_IMPL(__imp__sub_83CDFC60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1528
	ctx.r3.s64 = ctx.r11.s64 + -1528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFC6C"))) PPC_WEAK_FUNC(sub_83CDFC6C);
PPC_FUNC_IMPL(__imp__sub_83CDFC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFC70"))) PPC_WEAK_FUNC(sub_83CDFC70);
PPC_FUNC_IMPL(__imp__sub_83CDFC70) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-32540
	ctx.r7.s64 = ctx.r8.s64 + -32540;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-32540(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32540);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-32540(r8)
	PPC_STORE_U32(ctx.r8.u32 + -32540, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDFC98"))) PPC_WEAK_FUNC(sub_83CDFC98);
PPC_FUNC_IMPL(__imp__sub_83CDFC98) {
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
	// addi r3,r11,-32544
	ctx.r3.s64 = ctx.r11.s64 + -32544;
	// bl 0x83523120
	ctx.lr = 0x83CDFCB0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-1520
	ctx.r3.s64 = ctx.r10.s64 + -1520;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDFCBC;
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

__attribute__((alias("__imp__sub_83CDFCCC"))) PPC_WEAK_FUNC(sub_83CDFCCC);
PPC_FUNC_IMPL(__imp__sub_83CDFCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFCD0"))) PPC_WEAK_FUNC(sub_83CDFCD0);
PPC_FUNC_IMPL(__imp__sub_83CDFCD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1504
	ctx.r3.s64 = ctx.r11.s64 + -1504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFCDC"))) PPC_WEAK_FUNC(sub_83CDFCDC);
PPC_FUNC_IMPL(__imp__sub_83CDFCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFCE0"))) PPC_WEAK_FUNC(sub_83CDFCE0);
PPC_FUNC_IMPL(__imp__sub_83CDFCE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1496
	ctx.r3.s64 = ctx.r11.s64 + -1496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFCEC"))) PPC_WEAK_FUNC(sub_83CDFCEC);
PPC_FUNC_IMPL(__imp__sub_83CDFCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFCF0"))) PPC_WEAK_FUNC(sub_83CDFCF0);
PPC_FUNC_IMPL(__imp__sub_83CDFCF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1488
	ctx.r3.s64 = ctx.r11.s64 + -1488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFCFC"))) PPC_WEAK_FUNC(sub_83CDFCFC);
PPC_FUNC_IMPL(__imp__sub_83CDFCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFD00"))) PPC_WEAK_FUNC(sub_83CDFD00);
PPC_FUNC_IMPL(__imp__sub_83CDFD00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1480
	ctx.r3.s64 = ctx.r11.s64 + -1480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFD0C"))) PPC_WEAK_FUNC(sub_83CDFD0C);
PPC_FUNC_IMPL(__imp__sub_83CDFD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFD10"))) PPC_WEAK_FUNC(sub_83CDFD10);
PPC_FUNC_IMPL(__imp__sub_83CDFD10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1472
	ctx.r3.s64 = ctx.r11.s64 + -1472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFD1C"))) PPC_WEAK_FUNC(sub_83CDFD1C);
PPC_FUNC_IMPL(__imp__sub_83CDFD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFD20"))) PPC_WEAK_FUNC(sub_83CDFD20);
PPC_FUNC_IMPL(__imp__sub_83CDFD20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1464
	ctx.r3.s64 = ctx.r11.s64 + -1464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFD2C"))) PPC_WEAK_FUNC(sub_83CDFD2C);
PPC_FUNC_IMPL(__imp__sub_83CDFD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFD30"))) PPC_WEAK_FUNC(sub_83CDFD30);
PPC_FUNC_IMPL(__imp__sub_83CDFD30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1456
	ctx.r3.s64 = ctx.r11.s64 + -1456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFD3C"))) PPC_WEAK_FUNC(sub_83CDFD3C);
PPC_FUNC_IMPL(__imp__sub_83CDFD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFD40"))) PPC_WEAK_FUNC(sub_83CDFD40);
PPC_FUNC_IMPL(__imp__sub_83CDFD40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1448
	ctx.r3.s64 = ctx.r11.s64 + -1448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFD4C"))) PPC_WEAK_FUNC(sub_83CDFD4C);
PPC_FUNC_IMPL(__imp__sub_83CDFD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFD50"))) PPC_WEAK_FUNC(sub_83CDFD50);
PPC_FUNC_IMPL(__imp__sub_83CDFD50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1440
	ctx.r3.s64 = ctx.r11.s64 + -1440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFD5C"))) PPC_WEAK_FUNC(sub_83CDFD5C);
PPC_FUNC_IMPL(__imp__sub_83CDFD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFD60"))) PPC_WEAK_FUNC(sub_83CDFD60);
PPC_FUNC_IMPL(__imp__sub_83CDFD60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1432
	ctx.r3.s64 = ctx.r11.s64 + -1432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFD6C"))) PPC_WEAK_FUNC(sub_83CDFD6C);
PPC_FUNC_IMPL(__imp__sub_83CDFD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFD70"))) PPC_WEAK_FUNC(sub_83CDFD70);
PPC_FUNC_IMPL(__imp__sub_83CDFD70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1424
	ctx.r3.s64 = ctx.r11.s64 + -1424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFD7C"))) PPC_WEAK_FUNC(sub_83CDFD7C);
PPC_FUNC_IMPL(__imp__sub_83CDFD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFD80"))) PPC_WEAK_FUNC(sub_83CDFD80);
PPC_FUNC_IMPL(__imp__sub_83CDFD80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1416
	ctx.r3.s64 = ctx.r11.s64 + -1416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFD8C"))) PPC_WEAK_FUNC(sub_83CDFD8C);
PPC_FUNC_IMPL(__imp__sub_83CDFD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFD90"))) PPC_WEAK_FUNC(sub_83CDFD90);
PPC_FUNC_IMPL(__imp__sub_83CDFD90) {
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
	// addi r3,r11,-32532
	ctx.r3.s64 = ctx.r11.s64 + -32532;
	// bl 0x83523120
	ctx.lr = 0x83CDFDA8;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-1408
	ctx.r3.s64 = ctx.r10.s64 + -1408;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDFDB4;
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

__attribute__((alias("__imp__sub_83CDFDC4"))) PPC_WEAK_FUNC(sub_83CDFDC4);
PPC_FUNC_IMPL(__imp__sub_83CDFDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFDC8"))) PPC_WEAK_FUNC(sub_83CDFDC8);
PPC_FUNC_IMPL(__imp__sub_83CDFDC8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-32528
	ctx.r7.s64 = ctx.r8.s64 + -32528;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-32528(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32528);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-32528(r8)
	PPC_STORE_U32(ctx.r8.u32 + -32528, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDFDF0"))) PPC_WEAK_FUNC(sub_83CDFDF0);
PPC_FUNC_IMPL(__imp__sub_83CDFDF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,10000
	ctx.r4.s64 = ctx.r11.s64 + 10000;
	// lis r7,-31742
	ctx.r7.s64 = -2080243712;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,-32520
	ctx.r3.s64 = ctx.r7.s64 + -32520;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFE20"))) PPC_WEAK_FUNC(sub_83CDFE20);
PPC_FUNC_IMPL(__imp__sub_83CDFE20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1392
	ctx.r3.s64 = ctx.r11.s64 + -1392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFE2C"))) PPC_WEAK_FUNC(sub_83CDFE2C);
PPC_FUNC_IMPL(__imp__sub_83CDFE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFE30"))) PPC_WEAK_FUNC(sub_83CDFE30);
PPC_FUNC_IMPL(__imp__sub_83CDFE30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1384
	ctx.r3.s64 = ctx.r11.s64 + -1384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFE3C"))) PPC_WEAK_FUNC(sub_83CDFE3C);
PPC_FUNC_IMPL(__imp__sub_83CDFE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFE40"))) PPC_WEAK_FUNC(sub_83CDFE40);
PPC_FUNC_IMPL(__imp__sub_83CDFE40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1376
	ctx.r3.s64 = ctx.r11.s64 + -1376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFE4C"))) PPC_WEAK_FUNC(sub_83CDFE4C);
PPC_FUNC_IMPL(__imp__sub_83CDFE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFE50"))) PPC_WEAK_FUNC(sub_83CDFE50);
PPC_FUNC_IMPL(__imp__sub_83CDFE50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1368
	ctx.r3.s64 = ctx.r11.s64 + -1368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFE5C"))) PPC_WEAK_FUNC(sub_83CDFE5C);
PPC_FUNC_IMPL(__imp__sub_83CDFE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFE60"))) PPC_WEAK_FUNC(sub_83CDFE60);
PPC_FUNC_IMPL(__imp__sub_83CDFE60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1360
	ctx.r3.s64 = ctx.r11.s64 + -1360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFE6C"))) PPC_WEAK_FUNC(sub_83CDFE6C);
PPC_FUNC_IMPL(__imp__sub_83CDFE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFE70"))) PPC_WEAK_FUNC(sub_83CDFE70);
PPC_FUNC_IMPL(__imp__sub_83CDFE70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1352
	ctx.r3.s64 = ctx.r11.s64 + -1352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFE7C"))) PPC_WEAK_FUNC(sub_83CDFE7C);
PPC_FUNC_IMPL(__imp__sub_83CDFE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFE80"))) PPC_WEAK_FUNC(sub_83CDFE80);
PPC_FUNC_IMPL(__imp__sub_83CDFE80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1344
	ctx.r3.s64 = ctx.r11.s64 + -1344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFE8C"))) PPC_WEAK_FUNC(sub_83CDFE8C);
PPC_FUNC_IMPL(__imp__sub_83CDFE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFE90"))) PPC_WEAK_FUNC(sub_83CDFE90);
PPC_FUNC_IMPL(__imp__sub_83CDFE90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1336
	ctx.r3.s64 = ctx.r11.s64 + -1336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFE9C"))) PPC_WEAK_FUNC(sub_83CDFE9C);
PPC_FUNC_IMPL(__imp__sub_83CDFE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFEA0"))) PPC_WEAK_FUNC(sub_83CDFEA0);
PPC_FUNC_IMPL(__imp__sub_83CDFEA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1328
	ctx.r3.s64 = ctx.r11.s64 + -1328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFEAC"))) PPC_WEAK_FUNC(sub_83CDFEAC);
PPC_FUNC_IMPL(__imp__sub_83CDFEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFEB0"))) PPC_WEAK_FUNC(sub_83CDFEB0);
PPC_FUNC_IMPL(__imp__sub_83CDFEB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1320
	ctx.r3.s64 = ctx.r11.s64 + -1320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFEBC"))) PPC_WEAK_FUNC(sub_83CDFEBC);
PPC_FUNC_IMPL(__imp__sub_83CDFEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFEC0"))) PPC_WEAK_FUNC(sub_83CDFEC0);
PPC_FUNC_IMPL(__imp__sub_83CDFEC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1312
	ctx.r3.s64 = ctx.r11.s64 + -1312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFECC"))) PPC_WEAK_FUNC(sub_83CDFECC);
PPC_FUNC_IMPL(__imp__sub_83CDFECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFED0"))) PPC_WEAK_FUNC(sub_83CDFED0);
PPC_FUNC_IMPL(__imp__sub_83CDFED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1304
	ctx.r3.s64 = ctx.r11.s64 + -1304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFEDC"))) PPC_WEAK_FUNC(sub_83CDFEDC);
PPC_FUNC_IMPL(__imp__sub_83CDFEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFEE0"))) PPC_WEAK_FUNC(sub_83CDFEE0);
PPC_FUNC_IMPL(__imp__sub_83CDFEE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-32504
	ctx.r7.s64 = ctx.r8.s64 + -32504;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-32504(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32504);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-32504(r8)
	PPC_STORE_U32(ctx.r8.u32 + -32504, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDFF08"))) PPC_WEAK_FUNC(sub_83CDFF08);
PPC_FUNC_IMPL(__imp__sub_83CDFF08) {
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
	// addi r3,r11,-32508
	ctx.r3.s64 = ctx.r11.s64 + -32508;
	// bl 0x83523120
	ctx.lr = 0x83CDFF20;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-1296
	ctx.r3.s64 = ctx.r10.s64 + -1296;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDFF2C;
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

__attribute__((alias("__imp__sub_83CDFF3C"))) PPC_WEAK_FUNC(sub_83CDFF3C);
PPC_FUNC_IMPL(__imp__sub_83CDFF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFF40"))) PPC_WEAK_FUNC(sub_83CDFF40);
PPC_FUNC_IMPL(__imp__sub_83CDFF40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-32496
	ctx.r11.s64 = ctx.r11.s64 + -32496;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r9,255
	ctx.r9.s64 = 255;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lfs f0,9008(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stb r8,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDFF80"))) PPC_WEAK_FUNC(sub_83CDFF80);
PPC_FUNC_IMPL(__imp__sub_83CDFF80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1280
	ctx.r3.s64 = ctx.r11.s64 + -1280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFF8C"))) PPC_WEAK_FUNC(sub_83CDFF8C);
PPC_FUNC_IMPL(__imp__sub_83CDFF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFF90"))) PPC_WEAK_FUNC(sub_83CDFF90);
PPC_FUNC_IMPL(__imp__sub_83CDFF90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1272
	ctx.r3.s64 = ctx.r11.s64 + -1272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFF9C"))) PPC_WEAK_FUNC(sub_83CDFF9C);
PPC_FUNC_IMPL(__imp__sub_83CDFF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFFA0"))) PPC_WEAK_FUNC(sub_83CDFFA0);
PPC_FUNC_IMPL(__imp__sub_83CDFFA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1264
	ctx.r3.s64 = ctx.r11.s64 + -1264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFFAC"))) PPC_WEAK_FUNC(sub_83CDFFAC);
PPC_FUNC_IMPL(__imp__sub_83CDFFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFFB0"))) PPC_WEAK_FUNC(sub_83CDFFB0);
PPC_FUNC_IMPL(__imp__sub_83CDFFB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1256
	ctx.r3.s64 = ctx.r11.s64 + -1256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFFBC"))) PPC_WEAK_FUNC(sub_83CDFFBC);
PPC_FUNC_IMPL(__imp__sub_83CDFFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFFC0"))) PPC_WEAK_FUNC(sub_83CDFFC0);
PPC_FUNC_IMPL(__imp__sub_83CDFFC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1248
	ctx.r3.s64 = ctx.r11.s64 + -1248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFFCC"))) PPC_WEAK_FUNC(sub_83CDFFCC);
PPC_FUNC_IMPL(__imp__sub_83CDFFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFFD0"))) PPC_WEAK_FUNC(sub_83CDFFD0);
PPC_FUNC_IMPL(__imp__sub_83CDFFD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1240
	ctx.r3.s64 = ctx.r11.s64 + -1240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFFDC"))) PPC_WEAK_FUNC(sub_83CDFFDC);
PPC_FUNC_IMPL(__imp__sub_83CDFFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFFE0"))) PPC_WEAK_FUNC(sub_83CDFFE0);
PPC_FUNC_IMPL(__imp__sub_83CDFFE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1232
	ctx.r3.s64 = ctx.r11.s64 + -1232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFFEC"))) PPC_WEAK_FUNC(sub_83CDFFEC);
PPC_FUNC_IMPL(__imp__sub_83CDFFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDFFF0"))) PPC_WEAK_FUNC(sub_83CDFFF0);
PPC_FUNC_IMPL(__imp__sub_83CDFFF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1224
	ctx.r3.s64 = ctx.r11.s64 + -1224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDFFFC"))) PPC_WEAK_FUNC(sub_83CDFFFC);
PPC_FUNC_IMPL(__imp__sub_83CDFFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE0000"))) PPC_WEAK_FUNC(sub_83CE0000);
PPC_FUNC_IMPL(__imp__sub_83CE0000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1216
	ctx.r3.s64 = ctx.r11.s64 + -1216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE000C"))) PPC_WEAK_FUNC(sub_83CE000C);
PPC_FUNC_IMPL(__imp__sub_83CE000C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE0010"))) PPC_WEAK_FUNC(sub_83CE0010);
PPC_FUNC_IMPL(__imp__sub_83CE0010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1208
	ctx.r3.s64 = ctx.r11.s64 + -1208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE001C"))) PPC_WEAK_FUNC(sub_83CE001C);
PPC_FUNC_IMPL(__imp__sub_83CE001C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE0020"))) PPC_WEAK_FUNC(sub_83CE0020);
PPC_FUNC_IMPL(__imp__sub_83CE0020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1200
	ctx.r3.s64 = ctx.r11.s64 + -1200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE002C"))) PPC_WEAK_FUNC(sub_83CE002C);
PPC_FUNC_IMPL(__imp__sub_83CE002C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE0030"))) PPC_WEAK_FUNC(sub_83CE0030);
PPC_FUNC_IMPL(__imp__sub_83CE0030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1192
	ctx.r3.s64 = ctx.r11.s64 + -1192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE003C"))) PPC_WEAK_FUNC(sub_83CE003C);
PPC_FUNC_IMPL(__imp__sub_83CE003C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE0040"))) PPC_WEAK_FUNC(sub_83CE0040);
PPC_FUNC_IMPL(__imp__sub_83CE0040) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-32460
	ctx.r7.s64 = ctx.r8.s64 + -32460;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-32460(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32460);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-32460(r8)
	PPC_STORE_U32(ctx.r8.u32 + -32460, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE0068"))) PPC_WEAK_FUNC(sub_83CE0068);
PPC_FUNC_IMPL(__imp__sub_83CE0068) {
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
	// addi r3,r11,-32464
	ctx.r3.s64 = ctx.r11.s64 + -32464;
	// bl 0x83523120
	ctx.lr = 0x83CE0080;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-1184
	ctx.r3.s64 = ctx.r10.s64 + -1184;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE008C;
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

__attribute__((alias("__imp__sub_83CE009C"))) PPC_WEAK_FUNC(sub_83CE009C);
PPC_FUNC_IMPL(__imp__sub_83CE009C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE00A0"))) PPC_WEAK_FUNC(sub_83CE00A0);
PPC_FUNC_IMPL(__imp__sub_83CE00A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1168
	ctx.r3.s64 = ctx.r11.s64 + -1168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE00AC"))) PPC_WEAK_FUNC(sub_83CE00AC);
PPC_FUNC_IMPL(__imp__sub_83CE00AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE00B0"))) PPC_WEAK_FUNC(sub_83CE00B0);
PPC_FUNC_IMPL(__imp__sub_83CE00B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1160
	ctx.r3.s64 = ctx.r11.s64 + -1160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE00BC"))) PPC_WEAK_FUNC(sub_83CE00BC);
PPC_FUNC_IMPL(__imp__sub_83CE00BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE00C0"))) PPC_WEAK_FUNC(sub_83CE00C0);
PPC_FUNC_IMPL(__imp__sub_83CE00C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1152
	ctx.r3.s64 = ctx.r11.s64 + -1152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE00CC"))) PPC_WEAK_FUNC(sub_83CE00CC);
PPC_FUNC_IMPL(__imp__sub_83CE00CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE00D0"))) PPC_WEAK_FUNC(sub_83CE00D0);
PPC_FUNC_IMPL(__imp__sub_83CE00D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1144
	ctx.r3.s64 = ctx.r11.s64 + -1144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE00DC"))) PPC_WEAK_FUNC(sub_83CE00DC);
PPC_FUNC_IMPL(__imp__sub_83CE00DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE00E0"))) PPC_WEAK_FUNC(sub_83CE00E0);
PPC_FUNC_IMPL(__imp__sub_83CE00E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1136
	ctx.r3.s64 = ctx.r11.s64 + -1136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE00EC"))) PPC_WEAK_FUNC(sub_83CE00EC);
PPC_FUNC_IMPL(__imp__sub_83CE00EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE00F0"))) PPC_WEAK_FUNC(sub_83CE00F0);
PPC_FUNC_IMPL(__imp__sub_83CE00F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1128
	ctx.r3.s64 = ctx.r11.s64 + -1128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE00FC"))) PPC_WEAK_FUNC(sub_83CE00FC);
PPC_FUNC_IMPL(__imp__sub_83CE00FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE0100"))) PPC_WEAK_FUNC(sub_83CE0100);
PPC_FUNC_IMPL(__imp__sub_83CE0100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1120
	ctx.r3.s64 = ctx.r11.s64 + -1120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE010C"))) PPC_WEAK_FUNC(sub_83CE010C);
PPC_FUNC_IMPL(__imp__sub_83CE010C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE0110"))) PPC_WEAK_FUNC(sub_83CE0110);
PPC_FUNC_IMPL(__imp__sub_83CE0110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1112
	ctx.r3.s64 = ctx.r11.s64 + -1112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE011C"))) PPC_WEAK_FUNC(sub_83CE011C);
PPC_FUNC_IMPL(__imp__sub_83CE011C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE0120"))) PPC_WEAK_FUNC(sub_83CE0120);
PPC_FUNC_IMPL(__imp__sub_83CE0120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1104
	ctx.r3.s64 = ctx.r11.s64 + -1104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE012C"))) PPC_WEAK_FUNC(sub_83CE012C);
PPC_FUNC_IMPL(__imp__sub_83CE012C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE0130"))) PPC_WEAK_FUNC(sub_83CE0130);
PPC_FUNC_IMPL(__imp__sub_83CE0130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1096
	ctx.r3.s64 = ctx.r11.s64 + -1096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE013C"))) PPC_WEAK_FUNC(sub_83CE013C);
PPC_FUNC_IMPL(__imp__sub_83CE013C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE0140"))) PPC_WEAK_FUNC(sub_83CE0140);
PPC_FUNC_IMPL(__imp__sub_83CE0140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1088
	ctx.r3.s64 = ctx.r11.s64 + -1088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE014C"))) PPC_WEAK_FUNC(sub_83CE014C);
PPC_FUNC_IMPL(__imp__sub_83CE014C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE0150"))) PPC_WEAK_FUNC(sub_83CE0150);
PPC_FUNC_IMPL(__imp__sub_83CE0150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1080
	ctx.r3.s64 = ctx.r11.s64 + -1080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE015C"))) PPC_WEAK_FUNC(sub_83CE015C);
PPC_FUNC_IMPL(__imp__sub_83CE015C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE0160"))) PPC_WEAK_FUNC(sub_83CE0160);
PPC_FUNC_IMPL(__imp__sub_83CE0160) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-32448
	ctx.r7.s64 = ctx.r8.s64 + -32448;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-32448(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32448);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-32448(r8)
	PPC_STORE_U32(ctx.r8.u32 + -32448, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE0188"))) PPC_WEAK_FUNC(sub_83CE0188);
PPC_FUNC_IMPL(__imp__sub_83CE0188) {
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
	// addi r3,r11,-32452
	ctx.r3.s64 = ctx.r11.s64 + -32452;
	// bl 0x83523120
	ctx.lr = 0x83CE01A0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-1072
	ctx.r3.s64 = ctx.r10.s64 + -1072;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE01AC;
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

__attribute__((alias("__imp__sub_83CE01BC"))) PPC_WEAK_FUNC(sub_83CE01BC);
PPC_FUNC_IMPL(__imp__sub_83CE01BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE01C0"))) PPC_WEAK_FUNC(sub_83CE01C0);
PPC_FUNC_IMPL(__imp__sub_83CE01C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-32440
	ctx.r11.s64 = ctx.r11.s64 + -32440;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r9,255
	ctx.r9.s64 = 255;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lfs f0,9008(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stb r8,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE0200"))) PPC_WEAK_FUNC(sub_83CE0200);
PPC_FUNC_IMPL(__imp__sub_83CE0200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1056
	ctx.r3.s64 = ctx.r11.s64 + -1056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE020C"))) PPC_WEAK_FUNC(sub_83CE020C);
PPC_FUNC_IMPL(__imp__sub_83CE020C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE0210"))) PPC_WEAK_FUNC(sub_83CE0210);
PPC_FUNC_IMPL(__imp__sub_83CE0210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1048
	ctx.r3.s64 = ctx.r11.s64 + -1048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE021C"))) PPC_WEAK_FUNC(sub_83CE021C);
PPC_FUNC_IMPL(__imp__sub_83CE021C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE0220"))) PPC_WEAK_FUNC(sub_83CE0220);
PPC_FUNC_IMPL(__imp__sub_83CE0220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1040
	ctx.r3.s64 = ctx.r11.s64 + -1040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE022C"))) PPC_WEAK_FUNC(sub_83CE022C);
PPC_FUNC_IMPL(__imp__sub_83CE022C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE0230"))) PPC_WEAK_FUNC(sub_83CE0230);
PPC_FUNC_IMPL(__imp__sub_83CE0230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1032
	ctx.r3.s64 = ctx.r11.s64 + -1032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE023C"))) PPC_WEAK_FUNC(sub_83CE023C);
PPC_FUNC_IMPL(__imp__sub_83CE023C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE0240"))) PPC_WEAK_FUNC(sub_83CE0240);
PPC_FUNC_IMPL(__imp__sub_83CE0240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1024
	ctx.r3.s64 = ctx.r11.s64 + -1024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE024C"))) PPC_WEAK_FUNC(sub_83CE024C);
PPC_FUNC_IMPL(__imp__sub_83CE024C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE0250"))) PPC_WEAK_FUNC(sub_83CE0250);
PPC_FUNC_IMPL(__imp__sub_83CE0250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1016
	ctx.r3.s64 = ctx.r11.s64 + -1016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE025C"))) PPC_WEAK_FUNC(sub_83CE025C);
PPC_FUNC_IMPL(__imp__sub_83CE025C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE0260"))) PPC_WEAK_FUNC(sub_83CE0260);
PPC_FUNC_IMPL(__imp__sub_83CE0260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1008
	ctx.r3.s64 = ctx.r11.s64 + -1008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE026C"))) PPC_WEAK_FUNC(sub_83CE026C);
PPC_FUNC_IMPL(__imp__sub_83CE026C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE0270"))) PPC_WEAK_FUNC(sub_83CE0270);
PPC_FUNC_IMPL(__imp__sub_83CE0270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-1000
	ctx.r3.s64 = ctx.r11.s64 + -1000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE027C"))) PPC_WEAK_FUNC(sub_83CE027C);
PPC_FUNC_IMPL(__imp__sub_83CE027C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE0280"))) PPC_WEAK_FUNC(sub_83CE0280);
PPC_FUNC_IMPL(__imp__sub_83CE0280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-992
	ctx.r3.s64 = ctx.r11.s64 + -992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE028C"))) PPC_WEAK_FUNC(sub_83CE028C);
PPC_FUNC_IMPL(__imp__sub_83CE028C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE0290"))) PPC_WEAK_FUNC(sub_83CE0290);
PPC_FUNC_IMPL(__imp__sub_83CE0290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-984
	ctx.r3.s64 = ctx.r11.s64 + -984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE029C"))) PPC_WEAK_FUNC(sub_83CE029C);
PPC_FUNC_IMPL(__imp__sub_83CE029C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE02A0"))) PPC_WEAK_FUNC(sub_83CE02A0);
PPC_FUNC_IMPL(__imp__sub_83CE02A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-976
	ctx.r3.s64 = ctx.r11.s64 + -976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE02AC"))) PPC_WEAK_FUNC(sub_83CE02AC);
PPC_FUNC_IMPL(__imp__sub_83CE02AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE02B0"))) PPC_WEAK_FUNC(sub_83CE02B0);
PPC_FUNC_IMPL(__imp__sub_83CE02B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-968
	ctx.r3.s64 = ctx.r11.s64 + -968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE02BC"))) PPC_WEAK_FUNC(sub_83CE02BC);
PPC_FUNC_IMPL(__imp__sub_83CE02BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE02C0"))) PPC_WEAK_FUNC(sub_83CE02C0);
PPC_FUNC_IMPL(__imp__sub_83CE02C0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-32404
	ctx.r7.s64 = ctx.r8.s64 + -32404;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-32404(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32404);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-32404(r8)
	PPC_STORE_U32(ctx.r8.u32 + -32404, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE02E8"))) PPC_WEAK_FUNC(sub_83CE02E8);
PPC_FUNC_IMPL(__imp__sub_83CE02E8) {
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
	// addi r3,r11,-32408
	ctx.r3.s64 = ctx.r11.s64 + -32408;
	// bl 0x83523120
	ctx.lr = 0x83CE0300;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-960
	ctx.r3.s64 = ctx.r10.s64 + -960;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE030C;
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

__attribute__((alias("__imp__sub_83CE031C"))) PPC_WEAK_FUNC(sub_83CE031C);
PPC_FUNC_IMPL(__imp__sub_83CE031C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE0320"))) PPC_WEAK_FUNC(sub_83CE0320);
PPC_FUNC_IMPL(__imp__sub_83CE0320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-32396
	ctx.r11.s64 = ctx.r11.s64 + -32396;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r9,255
	ctx.r9.s64 = 255;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lfs f0,9008(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stb r8,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE0360"))) PPC_WEAK_FUNC(sub_83CE0360);
PPC_FUNC_IMPL(__imp__sub_83CE0360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-944
	ctx.r3.s64 = ctx.r11.s64 + -944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE036C"))) PPC_WEAK_FUNC(sub_83CE036C);
PPC_FUNC_IMPL(__imp__sub_83CE036C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE0370"))) PPC_WEAK_FUNC(sub_83CE0370);
PPC_FUNC_IMPL(__imp__sub_83CE0370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-936
	ctx.r3.s64 = ctx.r11.s64 + -936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE037C"))) PPC_WEAK_FUNC(sub_83CE037C);
PPC_FUNC_IMPL(__imp__sub_83CE037C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE0380"))) PPC_WEAK_FUNC(sub_83CE0380);
PPC_FUNC_IMPL(__imp__sub_83CE0380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-928
	ctx.r3.s64 = ctx.r11.s64 + -928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE038C"))) PPC_WEAK_FUNC(sub_83CE038C);
PPC_FUNC_IMPL(__imp__sub_83CE038C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE0390"))) PPC_WEAK_FUNC(sub_83CE0390);
PPC_FUNC_IMPL(__imp__sub_83CE0390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-920
	ctx.r3.s64 = ctx.r11.s64 + -920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE039C"))) PPC_WEAK_FUNC(sub_83CE039C);
PPC_FUNC_IMPL(__imp__sub_83CE039C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE03A0"))) PPC_WEAK_FUNC(sub_83CE03A0);
PPC_FUNC_IMPL(__imp__sub_83CE03A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-912
	ctx.r3.s64 = ctx.r11.s64 + -912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE03AC"))) PPC_WEAK_FUNC(sub_83CE03AC);
PPC_FUNC_IMPL(__imp__sub_83CE03AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE03B0"))) PPC_WEAK_FUNC(sub_83CE03B0);
PPC_FUNC_IMPL(__imp__sub_83CE03B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-904
	ctx.r3.s64 = ctx.r11.s64 + -904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE03BC"))) PPC_WEAK_FUNC(sub_83CE03BC);
PPC_FUNC_IMPL(__imp__sub_83CE03BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE03C0"))) PPC_WEAK_FUNC(sub_83CE03C0);
PPC_FUNC_IMPL(__imp__sub_83CE03C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-896
	ctx.r3.s64 = ctx.r11.s64 + -896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE03CC"))) PPC_WEAK_FUNC(sub_83CE03CC);
PPC_FUNC_IMPL(__imp__sub_83CE03CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE03D0"))) PPC_WEAK_FUNC(sub_83CE03D0);
PPC_FUNC_IMPL(__imp__sub_83CE03D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-888
	ctx.r3.s64 = ctx.r11.s64 + -888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE03DC"))) PPC_WEAK_FUNC(sub_83CE03DC);
PPC_FUNC_IMPL(__imp__sub_83CE03DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE03E0"))) PPC_WEAK_FUNC(sub_83CE03E0);
PPC_FUNC_IMPL(__imp__sub_83CE03E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-880
	ctx.r3.s64 = ctx.r11.s64 + -880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE03EC"))) PPC_WEAK_FUNC(sub_83CE03EC);
PPC_FUNC_IMPL(__imp__sub_83CE03EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE03F0"))) PPC_WEAK_FUNC(sub_83CE03F0);
PPC_FUNC_IMPL(__imp__sub_83CE03F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-872
	ctx.r3.s64 = ctx.r11.s64 + -872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE03FC"))) PPC_WEAK_FUNC(sub_83CE03FC);
PPC_FUNC_IMPL(__imp__sub_83CE03FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE0400"))) PPC_WEAK_FUNC(sub_83CE0400);
PPC_FUNC_IMPL(__imp__sub_83CE0400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-864
	ctx.r3.s64 = ctx.r11.s64 + -864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE040C"))) PPC_WEAK_FUNC(sub_83CE040C);
PPC_FUNC_IMPL(__imp__sub_83CE040C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE0410"))) PPC_WEAK_FUNC(sub_83CE0410);
PPC_FUNC_IMPL(__imp__sub_83CE0410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-856
	ctx.r3.s64 = ctx.r11.s64 + -856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE041C"))) PPC_WEAK_FUNC(sub_83CE041C);
PPC_FUNC_IMPL(__imp__sub_83CE041C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE0420"))) PPC_WEAK_FUNC(sub_83CE0420);
PPC_FUNC_IMPL(__imp__sub_83CE0420) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-32360
	ctx.r7.s64 = ctx.r8.s64 + -32360;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-32360(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32360);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-32360(r8)
	PPC_STORE_U32(ctx.r8.u32 + -32360, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE0448"))) PPC_WEAK_FUNC(sub_83CE0448);
PPC_FUNC_IMPL(__imp__sub_83CE0448) {
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
	// addi r3,r11,-32364
	ctx.r3.s64 = ctx.r11.s64 + -32364;
	// bl 0x83523120
	ctx.lr = 0x83CE0460;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-848
	ctx.r3.s64 = ctx.r10.s64 + -848;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE046C;
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

__attribute__((alias("__imp__sub_83CE047C"))) PPC_WEAK_FUNC(sub_83CE047C);
PPC_FUNC_IMPL(__imp__sub_83CE047C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE0480"))) PPC_WEAK_FUNC(sub_83CE0480);
PPC_FUNC_IMPL(__imp__sub_83CE0480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-32352
	ctx.r11.s64 = ctx.r11.s64 + -32352;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r9,255
	ctx.r9.s64 = 255;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lfs f0,9008(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stb r8,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE04C0"))) PPC_WEAK_FUNC(sub_83CE04C0);
PPC_FUNC_IMPL(__imp__sub_83CE04C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-832
	ctx.r3.s64 = ctx.r11.s64 + -832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE04CC"))) PPC_WEAK_FUNC(sub_83CE04CC);
PPC_FUNC_IMPL(__imp__sub_83CE04CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE04D0"))) PPC_WEAK_FUNC(sub_83CE04D0);
PPC_FUNC_IMPL(__imp__sub_83CE04D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-824
	ctx.r3.s64 = ctx.r11.s64 + -824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

