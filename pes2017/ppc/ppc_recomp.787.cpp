#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C4BDDC"))) PPC_WEAK_FUNC(sub_83C4BDDC);
PPC_FUNC_IMPL(__imp__sub_83C4BDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BDE0"))) PPC_WEAK_FUNC(sub_83C4BDE0);
PPC_FUNC_IMPL(__imp__sub_83C4BDE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13160
	ctx.r3.s64 = ctx.r11.s64 + -13160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4BDEC"))) PPC_WEAK_FUNC(sub_83C4BDEC);
PPC_FUNC_IMPL(__imp__sub_83C4BDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BDF0"))) PPC_WEAK_FUNC(sub_83C4BDF0);
PPC_FUNC_IMPL(__imp__sub_83C4BDF0) {
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
	// addi r3,r11,6144
	ctx.r3.s64 = ctx.r11.s64 + 6144;
	// bl 0x8259af80
	ctx.lr = 0x83C4BE08;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-13144
	ctx.r3.s64 = ctx.r10.s64 + -13144;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4BE14;
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

__attribute__((alias("__imp__sub_83C4BE24"))) PPC_WEAK_FUNC(sub_83C4BE24);
PPC_FUNC_IMPL(__imp__sub_83C4BE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BE28"))) PPC_WEAK_FUNC(sub_83C4BE28);
PPC_FUNC_IMPL(__imp__sub_83C4BE28) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,6124
	ctx.r11.s64 = ctx.r8.s64 + 6124;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,3908(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3908);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-13152
	ctx.r3.s64 = ctx.r6.s64 + -13152;
	// stw r10,6124(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6124, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4BE58"))) PPC_WEAK_FUNC(sub_83C4BE58);
PPC_FUNC_IMPL(__imp__sub_83C4BE58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13136
	ctx.r3.s64 = ctx.r11.s64 + -13136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4BE64"))) PPC_WEAK_FUNC(sub_83C4BE64);
PPC_FUNC_IMPL(__imp__sub_83C4BE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BE68"))) PPC_WEAK_FUNC(sub_83C4BE68);
PPC_FUNC_IMPL(__imp__sub_83C4BE68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13128
	ctx.r3.s64 = ctx.r11.s64 + -13128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4BE74"))) PPC_WEAK_FUNC(sub_83C4BE74);
PPC_FUNC_IMPL(__imp__sub_83C4BE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BE78"))) PPC_WEAK_FUNC(sub_83C4BE78);
PPC_FUNC_IMPL(__imp__sub_83C4BE78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13120
	ctx.r3.s64 = ctx.r11.s64 + -13120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4BE84"))) PPC_WEAK_FUNC(sub_83C4BE84);
PPC_FUNC_IMPL(__imp__sub_83C4BE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BE88"))) PPC_WEAK_FUNC(sub_83C4BE88);
PPC_FUNC_IMPL(__imp__sub_83C4BE88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13112
	ctx.r3.s64 = ctx.r11.s64 + -13112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4BE94"))) PPC_WEAK_FUNC(sub_83C4BE94);
PPC_FUNC_IMPL(__imp__sub_83C4BE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BE98"))) PPC_WEAK_FUNC(sub_83C4BE98);
PPC_FUNC_IMPL(__imp__sub_83C4BE98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13104
	ctx.r3.s64 = ctx.r11.s64 + -13104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4BEA4"))) PPC_WEAK_FUNC(sub_83C4BEA4);
PPC_FUNC_IMPL(__imp__sub_83C4BEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BEA8"))) PPC_WEAK_FUNC(sub_83C4BEA8);
PPC_FUNC_IMPL(__imp__sub_83C4BEA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13096
	ctx.r3.s64 = ctx.r11.s64 + -13096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4BEB4"))) PPC_WEAK_FUNC(sub_83C4BEB4);
PPC_FUNC_IMPL(__imp__sub_83C4BEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BEB8"))) PPC_WEAK_FUNC(sub_83C4BEB8);
PPC_FUNC_IMPL(__imp__sub_83C4BEB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13088
	ctx.r3.s64 = ctx.r11.s64 + -13088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4BEC4"))) PPC_WEAK_FUNC(sub_83C4BEC4);
PPC_FUNC_IMPL(__imp__sub_83C4BEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BEC8"))) PPC_WEAK_FUNC(sub_83C4BEC8);
PPC_FUNC_IMPL(__imp__sub_83C4BEC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13080
	ctx.r3.s64 = ctx.r11.s64 + -13080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4BED4"))) PPC_WEAK_FUNC(sub_83C4BED4);
PPC_FUNC_IMPL(__imp__sub_83C4BED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BED8"))) PPC_WEAK_FUNC(sub_83C4BED8);
PPC_FUNC_IMPL(__imp__sub_83C4BED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13072
	ctx.r3.s64 = ctx.r11.s64 + -13072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4BEE4"))) PPC_WEAK_FUNC(sub_83C4BEE4);
PPC_FUNC_IMPL(__imp__sub_83C4BEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BEE8"))) PPC_WEAK_FUNC(sub_83C4BEE8);
PPC_FUNC_IMPL(__imp__sub_83C4BEE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13064
	ctx.r3.s64 = ctx.r11.s64 + -13064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4BEF4"))) PPC_WEAK_FUNC(sub_83C4BEF4);
PPC_FUNC_IMPL(__imp__sub_83C4BEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BEF8"))) PPC_WEAK_FUNC(sub_83C4BEF8);
PPC_FUNC_IMPL(__imp__sub_83C4BEF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13056
	ctx.r3.s64 = ctx.r11.s64 + -13056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4BF04"))) PPC_WEAK_FUNC(sub_83C4BF04);
PPC_FUNC_IMPL(__imp__sub_83C4BF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BF08"))) PPC_WEAK_FUNC(sub_83C4BF08);
PPC_FUNC_IMPL(__imp__sub_83C4BF08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13048
	ctx.r3.s64 = ctx.r11.s64 + -13048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4BF14"))) PPC_WEAK_FUNC(sub_83C4BF14);
PPC_FUNC_IMPL(__imp__sub_83C4BF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BF18"))) PPC_WEAK_FUNC(sub_83C4BF18);
PPC_FUNC_IMPL(__imp__sub_83C4BF18) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,6504
	ctx.r7.s64 = ctx.r8.s64 + 6504;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,6504(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6504);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,6504(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6504, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4BF40"))) PPC_WEAK_FUNC(sub_83C4BF40);
PPC_FUNC_IMPL(__imp__sub_83C4BF40) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,4060
	ctx.r6.s64 = ctx.r7.s64 + 4060;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,3988(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3988);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,6504(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6504);
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
	// std r9,4060(r7)
	PPC_STORE_U64(ctx.r7.u32 + 4060, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4BF88"))) PPC_WEAK_FUNC(sub_83C4BF88);
PPC_FUNC_IMPL(__imp__sub_83C4BF88) {
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
	// addi r3,r11,6488
	ctx.r3.s64 = ctx.r11.s64 + 6488;
	// bl 0x83523120
	ctx.lr = 0x83C4BFA0;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-13040
	ctx.r3.s64 = ctx.r10.s64 + -13040;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4BFAC;
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

__attribute__((alias("__imp__sub_83C4BFBC"))) PPC_WEAK_FUNC(sub_83C4BFBC);
PPC_FUNC_IMPL(__imp__sub_83C4BFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BFC0"))) PPC_WEAK_FUNC(sub_83C4BFC0);
PPC_FUNC_IMPL(__imp__sub_83C4BFC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13024
	ctx.r3.s64 = ctx.r11.s64 + -13024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4BFCC"))) PPC_WEAK_FUNC(sub_83C4BFCC);
PPC_FUNC_IMPL(__imp__sub_83C4BFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4BFD0"))) PPC_WEAK_FUNC(sub_83C4BFD0);
PPC_FUNC_IMPL(__imp__sub_83C4BFD0) {
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
	// addi r3,r11,6512
	ctx.r3.s64 = ctx.r11.s64 + 6512;
	// bl 0x8259af80
	ctx.lr = 0x83C4BFE8;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-13008
	ctx.r3.s64 = ctx.r10.s64 + -13008;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4BFF4;
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

__attribute__((alias("__imp__sub_83C4C004"))) PPC_WEAK_FUNC(sub_83C4C004);
PPC_FUNC_IMPL(__imp__sub_83C4C004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C008"))) PPC_WEAK_FUNC(sub_83C4C008);
PPC_FUNC_IMPL(__imp__sub_83C4C008) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,6492
	ctx.r11.s64 = ctx.r8.s64 + 6492;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,4036(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4036);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-13016
	ctx.r3.s64 = ctx.r6.s64 + -13016;
	// stw r10,6492(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6492, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C038"))) PPC_WEAK_FUNC(sub_83C4C038);
PPC_FUNC_IMPL(__imp__sub_83C4C038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-13000
	ctx.r3.s64 = ctx.r11.s64 + -13000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C044"))) PPC_WEAK_FUNC(sub_83C4C044);
PPC_FUNC_IMPL(__imp__sub_83C4C044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C048"))) PPC_WEAK_FUNC(sub_83C4C048);
PPC_FUNC_IMPL(__imp__sub_83C4C048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12992
	ctx.r3.s64 = ctx.r11.s64 + -12992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C054"))) PPC_WEAK_FUNC(sub_83C4C054);
PPC_FUNC_IMPL(__imp__sub_83C4C054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C058"))) PPC_WEAK_FUNC(sub_83C4C058);
PPC_FUNC_IMPL(__imp__sub_83C4C058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12984
	ctx.r3.s64 = ctx.r11.s64 + -12984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C064"))) PPC_WEAK_FUNC(sub_83C4C064);
PPC_FUNC_IMPL(__imp__sub_83C4C064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C068"))) PPC_WEAK_FUNC(sub_83C4C068);
PPC_FUNC_IMPL(__imp__sub_83C4C068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12976
	ctx.r3.s64 = ctx.r11.s64 + -12976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C074"))) PPC_WEAK_FUNC(sub_83C4C074);
PPC_FUNC_IMPL(__imp__sub_83C4C074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C078"))) PPC_WEAK_FUNC(sub_83C4C078);
PPC_FUNC_IMPL(__imp__sub_83C4C078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12968
	ctx.r3.s64 = ctx.r11.s64 + -12968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C084"))) PPC_WEAK_FUNC(sub_83C4C084);
PPC_FUNC_IMPL(__imp__sub_83C4C084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C088"))) PPC_WEAK_FUNC(sub_83C4C088);
PPC_FUNC_IMPL(__imp__sub_83C4C088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12960
	ctx.r3.s64 = ctx.r11.s64 + -12960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C094"))) PPC_WEAK_FUNC(sub_83C4C094);
PPC_FUNC_IMPL(__imp__sub_83C4C094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C098"))) PPC_WEAK_FUNC(sub_83C4C098);
PPC_FUNC_IMPL(__imp__sub_83C4C098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12952
	ctx.r3.s64 = ctx.r11.s64 + -12952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C0A4"))) PPC_WEAK_FUNC(sub_83C4C0A4);
PPC_FUNC_IMPL(__imp__sub_83C4C0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C0A8"))) PPC_WEAK_FUNC(sub_83C4C0A8);
PPC_FUNC_IMPL(__imp__sub_83C4C0A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12944
	ctx.r3.s64 = ctx.r11.s64 + -12944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C0B4"))) PPC_WEAK_FUNC(sub_83C4C0B4);
PPC_FUNC_IMPL(__imp__sub_83C4C0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C0B8"))) PPC_WEAK_FUNC(sub_83C4C0B8);
PPC_FUNC_IMPL(__imp__sub_83C4C0B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12936
	ctx.r3.s64 = ctx.r11.s64 + -12936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C0C4"))) PPC_WEAK_FUNC(sub_83C4C0C4);
PPC_FUNC_IMPL(__imp__sub_83C4C0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C0C8"))) PPC_WEAK_FUNC(sub_83C4C0C8);
PPC_FUNC_IMPL(__imp__sub_83C4C0C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12928
	ctx.r3.s64 = ctx.r11.s64 + -12928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C0D4"))) PPC_WEAK_FUNC(sub_83C4C0D4);
PPC_FUNC_IMPL(__imp__sub_83C4C0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C0D8"))) PPC_WEAK_FUNC(sub_83C4C0D8);
PPC_FUNC_IMPL(__imp__sub_83C4C0D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12920
	ctx.r3.s64 = ctx.r11.s64 + -12920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C0E4"))) PPC_WEAK_FUNC(sub_83C4C0E4);
PPC_FUNC_IMPL(__imp__sub_83C4C0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C0E8"))) PPC_WEAK_FUNC(sub_83C4C0E8);
PPC_FUNC_IMPL(__imp__sub_83C4C0E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12912
	ctx.r3.s64 = ctx.r11.s64 + -12912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C0F4"))) PPC_WEAK_FUNC(sub_83C4C0F4);
PPC_FUNC_IMPL(__imp__sub_83C4C0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C0F8"))) PPC_WEAK_FUNC(sub_83C4C0F8);
PPC_FUNC_IMPL(__imp__sub_83C4C0F8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,6872
	ctx.r7.s64 = ctx.r8.s64 + 6872;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,6872(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6872);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,6872(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6872, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4C120"))) PPC_WEAK_FUNC(sub_83C4C120);
PPC_FUNC_IMPL(__imp__sub_83C4C120) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,4188
	ctx.r6.s64 = ctx.r7.s64 + 4188;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,4116(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4116);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,6872(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6872);
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
	// std r9,4188(r7)
	PPC_STORE_U64(ctx.r7.u32 + 4188, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4C168"))) PPC_WEAK_FUNC(sub_83C4C168);
PPC_FUNC_IMPL(__imp__sub_83C4C168) {
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
	// addi r3,r11,6856
	ctx.r3.s64 = ctx.r11.s64 + 6856;
	// bl 0x83523120
	ctx.lr = 0x83C4C180;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-12904
	ctx.r3.s64 = ctx.r10.s64 + -12904;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4C18C;
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

__attribute__((alias("__imp__sub_83C4C19C"))) PPC_WEAK_FUNC(sub_83C4C19C);
PPC_FUNC_IMPL(__imp__sub_83C4C19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C1A0"))) PPC_WEAK_FUNC(sub_83C4C1A0);
PPC_FUNC_IMPL(__imp__sub_83C4C1A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12888
	ctx.r3.s64 = ctx.r11.s64 + -12888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C1AC"))) PPC_WEAK_FUNC(sub_83C4C1AC);
PPC_FUNC_IMPL(__imp__sub_83C4C1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C1B0"))) PPC_WEAK_FUNC(sub_83C4C1B0);
PPC_FUNC_IMPL(__imp__sub_83C4C1B0) {
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
	// addi r3,r11,6880
	ctx.r3.s64 = ctx.r11.s64 + 6880;
	// bl 0x8259af80
	ctx.lr = 0x83C4C1C8;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-12872
	ctx.r3.s64 = ctx.r10.s64 + -12872;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4C1D4;
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

__attribute__((alias("__imp__sub_83C4C1E4"))) PPC_WEAK_FUNC(sub_83C4C1E4);
PPC_FUNC_IMPL(__imp__sub_83C4C1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C1E8"))) PPC_WEAK_FUNC(sub_83C4C1E8);
PPC_FUNC_IMPL(__imp__sub_83C4C1E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,6860
	ctx.r11.s64 = ctx.r8.s64 + 6860;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,4164(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4164);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-12880
	ctx.r3.s64 = ctx.r6.s64 + -12880;
	// stw r10,6860(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6860, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C218"))) PPC_WEAK_FUNC(sub_83C4C218);
PPC_FUNC_IMPL(__imp__sub_83C4C218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12864
	ctx.r3.s64 = ctx.r11.s64 + -12864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C224"))) PPC_WEAK_FUNC(sub_83C4C224);
PPC_FUNC_IMPL(__imp__sub_83C4C224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C228"))) PPC_WEAK_FUNC(sub_83C4C228);
PPC_FUNC_IMPL(__imp__sub_83C4C228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12856
	ctx.r3.s64 = ctx.r11.s64 + -12856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C234"))) PPC_WEAK_FUNC(sub_83C4C234);
PPC_FUNC_IMPL(__imp__sub_83C4C234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C238"))) PPC_WEAK_FUNC(sub_83C4C238);
PPC_FUNC_IMPL(__imp__sub_83C4C238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12848
	ctx.r3.s64 = ctx.r11.s64 + -12848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C244"))) PPC_WEAK_FUNC(sub_83C4C244);
PPC_FUNC_IMPL(__imp__sub_83C4C244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C248"))) PPC_WEAK_FUNC(sub_83C4C248);
PPC_FUNC_IMPL(__imp__sub_83C4C248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12840
	ctx.r3.s64 = ctx.r11.s64 + -12840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C254"))) PPC_WEAK_FUNC(sub_83C4C254);
PPC_FUNC_IMPL(__imp__sub_83C4C254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C258"))) PPC_WEAK_FUNC(sub_83C4C258);
PPC_FUNC_IMPL(__imp__sub_83C4C258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12832
	ctx.r3.s64 = ctx.r11.s64 + -12832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C264"))) PPC_WEAK_FUNC(sub_83C4C264);
PPC_FUNC_IMPL(__imp__sub_83C4C264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C268"))) PPC_WEAK_FUNC(sub_83C4C268);
PPC_FUNC_IMPL(__imp__sub_83C4C268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12824
	ctx.r3.s64 = ctx.r11.s64 + -12824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C274"))) PPC_WEAK_FUNC(sub_83C4C274);
PPC_FUNC_IMPL(__imp__sub_83C4C274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C278"))) PPC_WEAK_FUNC(sub_83C4C278);
PPC_FUNC_IMPL(__imp__sub_83C4C278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12816
	ctx.r3.s64 = ctx.r11.s64 + -12816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C284"))) PPC_WEAK_FUNC(sub_83C4C284);
PPC_FUNC_IMPL(__imp__sub_83C4C284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C288"))) PPC_WEAK_FUNC(sub_83C4C288);
PPC_FUNC_IMPL(__imp__sub_83C4C288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12808
	ctx.r3.s64 = ctx.r11.s64 + -12808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C294"))) PPC_WEAK_FUNC(sub_83C4C294);
PPC_FUNC_IMPL(__imp__sub_83C4C294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C298"))) PPC_WEAK_FUNC(sub_83C4C298);
PPC_FUNC_IMPL(__imp__sub_83C4C298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12800
	ctx.r3.s64 = ctx.r11.s64 + -12800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C2A4"))) PPC_WEAK_FUNC(sub_83C4C2A4);
PPC_FUNC_IMPL(__imp__sub_83C4C2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C2A8"))) PPC_WEAK_FUNC(sub_83C4C2A8);
PPC_FUNC_IMPL(__imp__sub_83C4C2A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12792
	ctx.r3.s64 = ctx.r11.s64 + -12792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C2B4"))) PPC_WEAK_FUNC(sub_83C4C2B4);
PPC_FUNC_IMPL(__imp__sub_83C4C2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C2B8"))) PPC_WEAK_FUNC(sub_83C4C2B8);
PPC_FUNC_IMPL(__imp__sub_83C4C2B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12784
	ctx.r3.s64 = ctx.r11.s64 + -12784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C2C4"))) PPC_WEAK_FUNC(sub_83C4C2C4);
PPC_FUNC_IMPL(__imp__sub_83C4C2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C2C8"))) PPC_WEAK_FUNC(sub_83C4C2C8);
PPC_FUNC_IMPL(__imp__sub_83C4C2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12776
	ctx.r3.s64 = ctx.r11.s64 + -12776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C2D4"))) PPC_WEAK_FUNC(sub_83C4C2D4);
PPC_FUNC_IMPL(__imp__sub_83C4C2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C2D8"))) PPC_WEAK_FUNC(sub_83C4C2D8);
PPC_FUNC_IMPL(__imp__sub_83C4C2D8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,7240
	ctx.r7.s64 = ctx.r8.s64 + 7240;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,7240(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 7240);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,7240(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7240, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4C300"))) PPC_WEAK_FUNC(sub_83C4C300);
PPC_FUNC_IMPL(__imp__sub_83C4C300) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,4316
	ctx.r6.s64 = ctx.r7.s64 + 4316;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,4244(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4244);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,7240(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7240);
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
	// std r9,4316(r7)
	PPC_STORE_U64(ctx.r7.u32 + 4316, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4C348"))) PPC_WEAK_FUNC(sub_83C4C348);
PPC_FUNC_IMPL(__imp__sub_83C4C348) {
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
	// addi r3,r11,7224
	ctx.r3.s64 = ctx.r11.s64 + 7224;
	// bl 0x83523120
	ctx.lr = 0x83C4C360;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-12768
	ctx.r3.s64 = ctx.r10.s64 + -12768;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4C36C;
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

__attribute__((alias("__imp__sub_83C4C37C"))) PPC_WEAK_FUNC(sub_83C4C37C);
PPC_FUNC_IMPL(__imp__sub_83C4C37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C380"))) PPC_WEAK_FUNC(sub_83C4C380);
PPC_FUNC_IMPL(__imp__sub_83C4C380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12752
	ctx.r3.s64 = ctx.r11.s64 + -12752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C38C"))) PPC_WEAK_FUNC(sub_83C4C38C);
PPC_FUNC_IMPL(__imp__sub_83C4C38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C390"))) PPC_WEAK_FUNC(sub_83C4C390);
PPC_FUNC_IMPL(__imp__sub_83C4C390) {
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
	// addi r3,r11,7248
	ctx.r3.s64 = ctx.r11.s64 + 7248;
	// bl 0x8259af80
	ctx.lr = 0x83C4C3A8;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-12736
	ctx.r3.s64 = ctx.r10.s64 + -12736;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4C3B4;
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

__attribute__((alias("__imp__sub_83C4C3C4"))) PPC_WEAK_FUNC(sub_83C4C3C4);
PPC_FUNC_IMPL(__imp__sub_83C4C3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C3C8"))) PPC_WEAK_FUNC(sub_83C4C3C8);
PPC_FUNC_IMPL(__imp__sub_83C4C3C8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,7228
	ctx.r11.s64 = ctx.r8.s64 + 7228;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,4292(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4292);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-12744
	ctx.r3.s64 = ctx.r6.s64 + -12744;
	// stw r10,7228(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7228, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C3F8"))) PPC_WEAK_FUNC(sub_83C4C3F8);
PPC_FUNC_IMPL(__imp__sub_83C4C3F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12728
	ctx.r3.s64 = ctx.r11.s64 + -12728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C404"))) PPC_WEAK_FUNC(sub_83C4C404);
PPC_FUNC_IMPL(__imp__sub_83C4C404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C408"))) PPC_WEAK_FUNC(sub_83C4C408);
PPC_FUNC_IMPL(__imp__sub_83C4C408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12720
	ctx.r3.s64 = ctx.r11.s64 + -12720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C414"))) PPC_WEAK_FUNC(sub_83C4C414);
PPC_FUNC_IMPL(__imp__sub_83C4C414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C418"))) PPC_WEAK_FUNC(sub_83C4C418);
PPC_FUNC_IMPL(__imp__sub_83C4C418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12712
	ctx.r3.s64 = ctx.r11.s64 + -12712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C424"))) PPC_WEAK_FUNC(sub_83C4C424);
PPC_FUNC_IMPL(__imp__sub_83C4C424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C428"))) PPC_WEAK_FUNC(sub_83C4C428);
PPC_FUNC_IMPL(__imp__sub_83C4C428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12704
	ctx.r3.s64 = ctx.r11.s64 + -12704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C434"))) PPC_WEAK_FUNC(sub_83C4C434);
PPC_FUNC_IMPL(__imp__sub_83C4C434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C438"))) PPC_WEAK_FUNC(sub_83C4C438);
PPC_FUNC_IMPL(__imp__sub_83C4C438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12696
	ctx.r3.s64 = ctx.r11.s64 + -12696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C444"))) PPC_WEAK_FUNC(sub_83C4C444);
PPC_FUNC_IMPL(__imp__sub_83C4C444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C448"))) PPC_WEAK_FUNC(sub_83C4C448);
PPC_FUNC_IMPL(__imp__sub_83C4C448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12688
	ctx.r3.s64 = ctx.r11.s64 + -12688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C454"))) PPC_WEAK_FUNC(sub_83C4C454);
PPC_FUNC_IMPL(__imp__sub_83C4C454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C458"))) PPC_WEAK_FUNC(sub_83C4C458);
PPC_FUNC_IMPL(__imp__sub_83C4C458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12680
	ctx.r3.s64 = ctx.r11.s64 + -12680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C464"))) PPC_WEAK_FUNC(sub_83C4C464);
PPC_FUNC_IMPL(__imp__sub_83C4C464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C468"))) PPC_WEAK_FUNC(sub_83C4C468);
PPC_FUNC_IMPL(__imp__sub_83C4C468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12672
	ctx.r3.s64 = ctx.r11.s64 + -12672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C474"))) PPC_WEAK_FUNC(sub_83C4C474);
PPC_FUNC_IMPL(__imp__sub_83C4C474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C478"))) PPC_WEAK_FUNC(sub_83C4C478);
PPC_FUNC_IMPL(__imp__sub_83C4C478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12664
	ctx.r3.s64 = ctx.r11.s64 + -12664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C484"))) PPC_WEAK_FUNC(sub_83C4C484);
PPC_FUNC_IMPL(__imp__sub_83C4C484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C488"))) PPC_WEAK_FUNC(sub_83C4C488);
PPC_FUNC_IMPL(__imp__sub_83C4C488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12656
	ctx.r3.s64 = ctx.r11.s64 + -12656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C494"))) PPC_WEAK_FUNC(sub_83C4C494);
PPC_FUNC_IMPL(__imp__sub_83C4C494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C498"))) PPC_WEAK_FUNC(sub_83C4C498);
PPC_FUNC_IMPL(__imp__sub_83C4C498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12648
	ctx.r3.s64 = ctx.r11.s64 + -12648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C4A4"))) PPC_WEAK_FUNC(sub_83C4C4A4);
PPC_FUNC_IMPL(__imp__sub_83C4C4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C4A8"))) PPC_WEAK_FUNC(sub_83C4C4A8);
PPC_FUNC_IMPL(__imp__sub_83C4C4A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12640
	ctx.r3.s64 = ctx.r11.s64 + -12640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C4B4"))) PPC_WEAK_FUNC(sub_83C4C4B4);
PPC_FUNC_IMPL(__imp__sub_83C4C4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C4B8"))) PPC_WEAK_FUNC(sub_83C4C4B8);
PPC_FUNC_IMPL(__imp__sub_83C4C4B8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,7608
	ctx.r7.s64 = ctx.r8.s64 + 7608;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,7608(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 7608);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,7608(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7608, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4C4E0"))) PPC_WEAK_FUNC(sub_83C4C4E0);
PPC_FUNC_IMPL(__imp__sub_83C4C4E0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,4444
	ctx.r6.s64 = ctx.r7.s64 + 4444;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,4372(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4372);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,7608(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7608);
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
	// std r9,4444(r7)
	PPC_STORE_U64(ctx.r7.u32 + 4444, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4C528"))) PPC_WEAK_FUNC(sub_83C4C528);
PPC_FUNC_IMPL(__imp__sub_83C4C528) {
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
	// addi r3,r11,7592
	ctx.r3.s64 = ctx.r11.s64 + 7592;
	// bl 0x83523120
	ctx.lr = 0x83C4C540;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-12632
	ctx.r3.s64 = ctx.r10.s64 + -12632;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4C54C;
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

__attribute__((alias("__imp__sub_83C4C55C"))) PPC_WEAK_FUNC(sub_83C4C55C);
PPC_FUNC_IMPL(__imp__sub_83C4C55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C560"))) PPC_WEAK_FUNC(sub_83C4C560);
PPC_FUNC_IMPL(__imp__sub_83C4C560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12616
	ctx.r3.s64 = ctx.r11.s64 + -12616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C56C"))) PPC_WEAK_FUNC(sub_83C4C56C);
PPC_FUNC_IMPL(__imp__sub_83C4C56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C570"))) PPC_WEAK_FUNC(sub_83C4C570);
PPC_FUNC_IMPL(__imp__sub_83C4C570) {
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
	// addi r3,r11,7616
	ctx.r3.s64 = ctx.r11.s64 + 7616;
	// bl 0x8259af80
	ctx.lr = 0x83C4C588;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-12600
	ctx.r3.s64 = ctx.r10.s64 + -12600;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4C594;
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

__attribute__((alias("__imp__sub_83C4C5A4"))) PPC_WEAK_FUNC(sub_83C4C5A4);
PPC_FUNC_IMPL(__imp__sub_83C4C5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C5A8"))) PPC_WEAK_FUNC(sub_83C4C5A8);
PPC_FUNC_IMPL(__imp__sub_83C4C5A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,7596
	ctx.r11.s64 = ctx.r8.s64 + 7596;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,4420(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4420);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-12608
	ctx.r3.s64 = ctx.r6.s64 + -12608;
	// stw r10,7596(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7596, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C5D8"))) PPC_WEAK_FUNC(sub_83C4C5D8);
PPC_FUNC_IMPL(__imp__sub_83C4C5D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12592
	ctx.r3.s64 = ctx.r11.s64 + -12592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C5E4"))) PPC_WEAK_FUNC(sub_83C4C5E4);
PPC_FUNC_IMPL(__imp__sub_83C4C5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C5E8"))) PPC_WEAK_FUNC(sub_83C4C5E8);
PPC_FUNC_IMPL(__imp__sub_83C4C5E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12584
	ctx.r3.s64 = ctx.r11.s64 + -12584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C5F4"))) PPC_WEAK_FUNC(sub_83C4C5F4);
PPC_FUNC_IMPL(__imp__sub_83C4C5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C5F8"))) PPC_WEAK_FUNC(sub_83C4C5F8);
PPC_FUNC_IMPL(__imp__sub_83C4C5F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12576
	ctx.r3.s64 = ctx.r11.s64 + -12576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C604"))) PPC_WEAK_FUNC(sub_83C4C604);
PPC_FUNC_IMPL(__imp__sub_83C4C604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C608"))) PPC_WEAK_FUNC(sub_83C4C608);
PPC_FUNC_IMPL(__imp__sub_83C4C608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12568
	ctx.r3.s64 = ctx.r11.s64 + -12568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C614"))) PPC_WEAK_FUNC(sub_83C4C614);
PPC_FUNC_IMPL(__imp__sub_83C4C614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C618"))) PPC_WEAK_FUNC(sub_83C4C618);
PPC_FUNC_IMPL(__imp__sub_83C4C618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12560
	ctx.r3.s64 = ctx.r11.s64 + -12560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C624"))) PPC_WEAK_FUNC(sub_83C4C624);
PPC_FUNC_IMPL(__imp__sub_83C4C624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C628"))) PPC_WEAK_FUNC(sub_83C4C628);
PPC_FUNC_IMPL(__imp__sub_83C4C628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12552
	ctx.r3.s64 = ctx.r11.s64 + -12552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C634"))) PPC_WEAK_FUNC(sub_83C4C634);
PPC_FUNC_IMPL(__imp__sub_83C4C634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C638"))) PPC_WEAK_FUNC(sub_83C4C638);
PPC_FUNC_IMPL(__imp__sub_83C4C638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12544
	ctx.r3.s64 = ctx.r11.s64 + -12544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C644"))) PPC_WEAK_FUNC(sub_83C4C644);
PPC_FUNC_IMPL(__imp__sub_83C4C644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C648"))) PPC_WEAK_FUNC(sub_83C4C648);
PPC_FUNC_IMPL(__imp__sub_83C4C648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12536
	ctx.r3.s64 = ctx.r11.s64 + -12536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C654"))) PPC_WEAK_FUNC(sub_83C4C654);
PPC_FUNC_IMPL(__imp__sub_83C4C654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C658"))) PPC_WEAK_FUNC(sub_83C4C658);
PPC_FUNC_IMPL(__imp__sub_83C4C658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12528
	ctx.r3.s64 = ctx.r11.s64 + -12528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C664"))) PPC_WEAK_FUNC(sub_83C4C664);
PPC_FUNC_IMPL(__imp__sub_83C4C664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C668"))) PPC_WEAK_FUNC(sub_83C4C668);
PPC_FUNC_IMPL(__imp__sub_83C4C668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12520
	ctx.r3.s64 = ctx.r11.s64 + -12520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C674"))) PPC_WEAK_FUNC(sub_83C4C674);
PPC_FUNC_IMPL(__imp__sub_83C4C674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C678"))) PPC_WEAK_FUNC(sub_83C4C678);
PPC_FUNC_IMPL(__imp__sub_83C4C678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12512
	ctx.r3.s64 = ctx.r11.s64 + -12512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C684"))) PPC_WEAK_FUNC(sub_83C4C684);
PPC_FUNC_IMPL(__imp__sub_83C4C684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C688"))) PPC_WEAK_FUNC(sub_83C4C688);
PPC_FUNC_IMPL(__imp__sub_83C4C688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12504
	ctx.r3.s64 = ctx.r11.s64 + -12504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C694"))) PPC_WEAK_FUNC(sub_83C4C694);
PPC_FUNC_IMPL(__imp__sub_83C4C694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C698"))) PPC_WEAK_FUNC(sub_83C4C698);
PPC_FUNC_IMPL(__imp__sub_83C4C698) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,7976
	ctx.r7.s64 = ctx.r8.s64 + 7976;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,7976(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 7976);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,7976(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7976, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4C6C0"))) PPC_WEAK_FUNC(sub_83C4C6C0);
PPC_FUNC_IMPL(__imp__sub_83C4C6C0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,4572
	ctx.r6.s64 = ctx.r7.s64 + 4572;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,4500(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4500);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,7976(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7976);
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
	// std r9,4572(r7)
	PPC_STORE_U64(ctx.r7.u32 + 4572, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4C708"))) PPC_WEAK_FUNC(sub_83C4C708);
PPC_FUNC_IMPL(__imp__sub_83C4C708) {
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
	// addi r3,r11,7960
	ctx.r3.s64 = ctx.r11.s64 + 7960;
	// bl 0x83523120
	ctx.lr = 0x83C4C720;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-12496
	ctx.r3.s64 = ctx.r10.s64 + -12496;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4C72C;
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

__attribute__((alias("__imp__sub_83C4C73C"))) PPC_WEAK_FUNC(sub_83C4C73C);
PPC_FUNC_IMPL(__imp__sub_83C4C73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C740"))) PPC_WEAK_FUNC(sub_83C4C740);
PPC_FUNC_IMPL(__imp__sub_83C4C740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12480
	ctx.r3.s64 = ctx.r11.s64 + -12480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C74C"))) PPC_WEAK_FUNC(sub_83C4C74C);
PPC_FUNC_IMPL(__imp__sub_83C4C74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C750"))) PPC_WEAK_FUNC(sub_83C4C750);
PPC_FUNC_IMPL(__imp__sub_83C4C750) {
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
	// addi r3,r11,7984
	ctx.r3.s64 = ctx.r11.s64 + 7984;
	// bl 0x8259af80
	ctx.lr = 0x83C4C768;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-12464
	ctx.r3.s64 = ctx.r10.s64 + -12464;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4C774;
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

__attribute__((alias("__imp__sub_83C4C784"))) PPC_WEAK_FUNC(sub_83C4C784);
PPC_FUNC_IMPL(__imp__sub_83C4C784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C788"))) PPC_WEAK_FUNC(sub_83C4C788);
PPC_FUNC_IMPL(__imp__sub_83C4C788) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,7964
	ctx.r11.s64 = ctx.r8.s64 + 7964;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,4548(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4548);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-12472
	ctx.r3.s64 = ctx.r6.s64 + -12472;
	// stw r10,7964(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7964, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C7B8"))) PPC_WEAK_FUNC(sub_83C4C7B8);
PPC_FUNC_IMPL(__imp__sub_83C4C7B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12456
	ctx.r3.s64 = ctx.r11.s64 + -12456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C7C4"))) PPC_WEAK_FUNC(sub_83C4C7C4);
PPC_FUNC_IMPL(__imp__sub_83C4C7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C7C8"))) PPC_WEAK_FUNC(sub_83C4C7C8);
PPC_FUNC_IMPL(__imp__sub_83C4C7C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12448
	ctx.r3.s64 = ctx.r11.s64 + -12448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C7D4"))) PPC_WEAK_FUNC(sub_83C4C7D4);
PPC_FUNC_IMPL(__imp__sub_83C4C7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C7D8"))) PPC_WEAK_FUNC(sub_83C4C7D8);
PPC_FUNC_IMPL(__imp__sub_83C4C7D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12440
	ctx.r3.s64 = ctx.r11.s64 + -12440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C7E4"))) PPC_WEAK_FUNC(sub_83C4C7E4);
PPC_FUNC_IMPL(__imp__sub_83C4C7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C7E8"))) PPC_WEAK_FUNC(sub_83C4C7E8);
PPC_FUNC_IMPL(__imp__sub_83C4C7E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12432
	ctx.r3.s64 = ctx.r11.s64 + -12432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C7F4"))) PPC_WEAK_FUNC(sub_83C4C7F4);
PPC_FUNC_IMPL(__imp__sub_83C4C7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C7F8"))) PPC_WEAK_FUNC(sub_83C4C7F8);
PPC_FUNC_IMPL(__imp__sub_83C4C7F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12424
	ctx.r3.s64 = ctx.r11.s64 + -12424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C804"))) PPC_WEAK_FUNC(sub_83C4C804);
PPC_FUNC_IMPL(__imp__sub_83C4C804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C808"))) PPC_WEAK_FUNC(sub_83C4C808);
PPC_FUNC_IMPL(__imp__sub_83C4C808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12416
	ctx.r3.s64 = ctx.r11.s64 + -12416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C814"))) PPC_WEAK_FUNC(sub_83C4C814);
PPC_FUNC_IMPL(__imp__sub_83C4C814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C818"))) PPC_WEAK_FUNC(sub_83C4C818);
PPC_FUNC_IMPL(__imp__sub_83C4C818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12408
	ctx.r3.s64 = ctx.r11.s64 + -12408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C824"))) PPC_WEAK_FUNC(sub_83C4C824);
PPC_FUNC_IMPL(__imp__sub_83C4C824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C828"))) PPC_WEAK_FUNC(sub_83C4C828);
PPC_FUNC_IMPL(__imp__sub_83C4C828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12400
	ctx.r3.s64 = ctx.r11.s64 + -12400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C834"))) PPC_WEAK_FUNC(sub_83C4C834);
PPC_FUNC_IMPL(__imp__sub_83C4C834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C838"))) PPC_WEAK_FUNC(sub_83C4C838);
PPC_FUNC_IMPL(__imp__sub_83C4C838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12392
	ctx.r3.s64 = ctx.r11.s64 + -12392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C844"))) PPC_WEAK_FUNC(sub_83C4C844);
PPC_FUNC_IMPL(__imp__sub_83C4C844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C848"))) PPC_WEAK_FUNC(sub_83C4C848);
PPC_FUNC_IMPL(__imp__sub_83C4C848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12384
	ctx.r3.s64 = ctx.r11.s64 + -12384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C854"))) PPC_WEAK_FUNC(sub_83C4C854);
PPC_FUNC_IMPL(__imp__sub_83C4C854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C858"))) PPC_WEAK_FUNC(sub_83C4C858);
PPC_FUNC_IMPL(__imp__sub_83C4C858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12376
	ctx.r3.s64 = ctx.r11.s64 + -12376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C864"))) PPC_WEAK_FUNC(sub_83C4C864);
PPC_FUNC_IMPL(__imp__sub_83C4C864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C868"))) PPC_WEAK_FUNC(sub_83C4C868);
PPC_FUNC_IMPL(__imp__sub_83C4C868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12368
	ctx.r3.s64 = ctx.r11.s64 + -12368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C874"))) PPC_WEAK_FUNC(sub_83C4C874);
PPC_FUNC_IMPL(__imp__sub_83C4C874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C878"))) PPC_WEAK_FUNC(sub_83C4C878);
PPC_FUNC_IMPL(__imp__sub_83C4C878) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,8344
	ctx.r7.s64 = ctx.r8.s64 + 8344;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,8344(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8344);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,8344(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8344, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4C8A0"))) PPC_WEAK_FUNC(sub_83C4C8A0);
PPC_FUNC_IMPL(__imp__sub_83C4C8A0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,4700
	ctx.r6.s64 = ctx.r7.s64 + 4700;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,4628(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4628);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,8344(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8344);
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
	// std r9,4700(r7)
	PPC_STORE_U64(ctx.r7.u32 + 4700, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4C8E8"))) PPC_WEAK_FUNC(sub_83C4C8E8);
PPC_FUNC_IMPL(__imp__sub_83C4C8E8) {
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
	// addi r3,r11,8328
	ctx.r3.s64 = ctx.r11.s64 + 8328;
	// bl 0x83523120
	ctx.lr = 0x83C4C900;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-12360
	ctx.r3.s64 = ctx.r10.s64 + -12360;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4C90C;
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

__attribute__((alias("__imp__sub_83C4C91C"))) PPC_WEAK_FUNC(sub_83C4C91C);
PPC_FUNC_IMPL(__imp__sub_83C4C91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C920"))) PPC_WEAK_FUNC(sub_83C4C920);
PPC_FUNC_IMPL(__imp__sub_83C4C920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12344
	ctx.r3.s64 = ctx.r11.s64 + -12344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C92C"))) PPC_WEAK_FUNC(sub_83C4C92C);
PPC_FUNC_IMPL(__imp__sub_83C4C92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C930"))) PPC_WEAK_FUNC(sub_83C4C930);
PPC_FUNC_IMPL(__imp__sub_83C4C930) {
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
	// addi r3,r11,8352
	ctx.r3.s64 = ctx.r11.s64 + 8352;
	// bl 0x8259af80
	ctx.lr = 0x83C4C948;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-12328
	ctx.r3.s64 = ctx.r10.s64 + -12328;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4C954;
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

__attribute__((alias("__imp__sub_83C4C964"))) PPC_WEAK_FUNC(sub_83C4C964);
PPC_FUNC_IMPL(__imp__sub_83C4C964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C968"))) PPC_WEAK_FUNC(sub_83C4C968);
PPC_FUNC_IMPL(__imp__sub_83C4C968) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,8332
	ctx.r11.s64 = ctx.r8.s64 + 8332;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,4676(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4676);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-12336
	ctx.r3.s64 = ctx.r6.s64 + -12336;
	// stw r10,8332(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8332, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C998"))) PPC_WEAK_FUNC(sub_83C4C998);
PPC_FUNC_IMPL(__imp__sub_83C4C998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12320
	ctx.r3.s64 = ctx.r11.s64 + -12320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C9A4"))) PPC_WEAK_FUNC(sub_83C4C9A4);
PPC_FUNC_IMPL(__imp__sub_83C4C9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C9A8"))) PPC_WEAK_FUNC(sub_83C4C9A8);
PPC_FUNC_IMPL(__imp__sub_83C4C9A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12312
	ctx.r3.s64 = ctx.r11.s64 + -12312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C9B4"))) PPC_WEAK_FUNC(sub_83C4C9B4);
PPC_FUNC_IMPL(__imp__sub_83C4C9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C9B8"))) PPC_WEAK_FUNC(sub_83C4C9B8);
PPC_FUNC_IMPL(__imp__sub_83C4C9B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12304
	ctx.r3.s64 = ctx.r11.s64 + -12304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C9C4"))) PPC_WEAK_FUNC(sub_83C4C9C4);
PPC_FUNC_IMPL(__imp__sub_83C4C9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C9C8"))) PPC_WEAK_FUNC(sub_83C4C9C8);
PPC_FUNC_IMPL(__imp__sub_83C4C9C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12296
	ctx.r3.s64 = ctx.r11.s64 + -12296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C9D4"))) PPC_WEAK_FUNC(sub_83C4C9D4);
PPC_FUNC_IMPL(__imp__sub_83C4C9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C9D8"))) PPC_WEAK_FUNC(sub_83C4C9D8);
PPC_FUNC_IMPL(__imp__sub_83C4C9D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12288
	ctx.r3.s64 = ctx.r11.s64 + -12288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C9E4"))) PPC_WEAK_FUNC(sub_83C4C9E4);
PPC_FUNC_IMPL(__imp__sub_83C4C9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C9E8"))) PPC_WEAK_FUNC(sub_83C4C9E8);
PPC_FUNC_IMPL(__imp__sub_83C4C9E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12280
	ctx.r3.s64 = ctx.r11.s64 + -12280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4C9F4"))) PPC_WEAK_FUNC(sub_83C4C9F4);
PPC_FUNC_IMPL(__imp__sub_83C4C9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4C9F8"))) PPC_WEAK_FUNC(sub_83C4C9F8);
PPC_FUNC_IMPL(__imp__sub_83C4C9F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12272
	ctx.r3.s64 = ctx.r11.s64 + -12272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4CA04"))) PPC_WEAK_FUNC(sub_83C4CA04);
PPC_FUNC_IMPL(__imp__sub_83C4CA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4CA08"))) PPC_WEAK_FUNC(sub_83C4CA08);
PPC_FUNC_IMPL(__imp__sub_83C4CA08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12264
	ctx.r3.s64 = ctx.r11.s64 + -12264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4CA14"))) PPC_WEAK_FUNC(sub_83C4CA14);
PPC_FUNC_IMPL(__imp__sub_83C4CA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4CA18"))) PPC_WEAK_FUNC(sub_83C4CA18);
PPC_FUNC_IMPL(__imp__sub_83C4CA18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12256
	ctx.r3.s64 = ctx.r11.s64 + -12256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4CA24"))) PPC_WEAK_FUNC(sub_83C4CA24);
PPC_FUNC_IMPL(__imp__sub_83C4CA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4CA28"))) PPC_WEAK_FUNC(sub_83C4CA28);
PPC_FUNC_IMPL(__imp__sub_83C4CA28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12248
	ctx.r3.s64 = ctx.r11.s64 + -12248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4CA34"))) PPC_WEAK_FUNC(sub_83C4CA34);
PPC_FUNC_IMPL(__imp__sub_83C4CA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4CA38"))) PPC_WEAK_FUNC(sub_83C4CA38);
PPC_FUNC_IMPL(__imp__sub_83C4CA38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12240
	ctx.r3.s64 = ctx.r11.s64 + -12240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4CA44"))) PPC_WEAK_FUNC(sub_83C4CA44);
PPC_FUNC_IMPL(__imp__sub_83C4CA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4CA48"))) PPC_WEAK_FUNC(sub_83C4CA48);
PPC_FUNC_IMPL(__imp__sub_83C4CA48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12232
	ctx.r3.s64 = ctx.r11.s64 + -12232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4CA54"))) PPC_WEAK_FUNC(sub_83C4CA54);
PPC_FUNC_IMPL(__imp__sub_83C4CA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4CA58"))) PPC_WEAK_FUNC(sub_83C4CA58);
PPC_FUNC_IMPL(__imp__sub_83C4CA58) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,8712
	ctx.r7.s64 = ctx.r8.s64 + 8712;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,8712(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8712);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,8712(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8712, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4CA80"))) PPC_WEAK_FUNC(sub_83C4CA80);
PPC_FUNC_IMPL(__imp__sub_83C4CA80) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,4840
	ctx.r6.s64 = ctx.r7.s64 + 4840;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,4768(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4768);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,8712(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8712);
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
	// std r9,4840(r7)
	PPC_STORE_U64(ctx.r7.u32 + 4840, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4CAC8"))) PPC_WEAK_FUNC(sub_83C4CAC8);
PPC_FUNC_IMPL(__imp__sub_83C4CAC8) {
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
	// addi r3,r11,8696
	ctx.r3.s64 = ctx.r11.s64 + 8696;
	// bl 0x83523120
	ctx.lr = 0x83C4CAE0;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-12224
	ctx.r3.s64 = ctx.r10.s64 + -12224;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4CAEC;
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

__attribute__((alias("__imp__sub_83C4CAFC"))) PPC_WEAK_FUNC(sub_83C4CAFC);
PPC_FUNC_IMPL(__imp__sub_83C4CAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4CB00"))) PPC_WEAK_FUNC(sub_83C4CB00);
PPC_FUNC_IMPL(__imp__sub_83C4CB00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12208
	ctx.r3.s64 = ctx.r11.s64 + -12208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4CB0C"))) PPC_WEAK_FUNC(sub_83C4CB0C);
PPC_FUNC_IMPL(__imp__sub_83C4CB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4CB10"))) PPC_WEAK_FUNC(sub_83C4CB10);
PPC_FUNC_IMPL(__imp__sub_83C4CB10) {
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
	// addi r3,r11,8720
	ctx.r3.s64 = ctx.r11.s64 + 8720;
	// bl 0x8259af80
	ctx.lr = 0x83C4CB28;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-12192
	ctx.r3.s64 = ctx.r10.s64 + -12192;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4CB34;
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

__attribute__((alias("__imp__sub_83C4CB44"))) PPC_WEAK_FUNC(sub_83C4CB44);
PPC_FUNC_IMPL(__imp__sub_83C4CB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4CB48"))) PPC_WEAK_FUNC(sub_83C4CB48);
PPC_FUNC_IMPL(__imp__sub_83C4CB48) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,8700
	ctx.r11.s64 = ctx.r8.s64 + 8700;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,4816(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4816);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-12200
	ctx.r3.s64 = ctx.r6.s64 + -12200;
	// stw r10,8700(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8700, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4CB78"))) PPC_WEAK_FUNC(sub_83C4CB78);
PPC_FUNC_IMPL(__imp__sub_83C4CB78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12184
	ctx.r3.s64 = ctx.r11.s64 + -12184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4CB84"))) PPC_WEAK_FUNC(sub_83C4CB84);
PPC_FUNC_IMPL(__imp__sub_83C4CB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4CB88"))) PPC_WEAK_FUNC(sub_83C4CB88);
PPC_FUNC_IMPL(__imp__sub_83C4CB88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12176
	ctx.r3.s64 = ctx.r11.s64 + -12176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4CB94"))) PPC_WEAK_FUNC(sub_83C4CB94);
PPC_FUNC_IMPL(__imp__sub_83C4CB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4CB98"))) PPC_WEAK_FUNC(sub_83C4CB98);
PPC_FUNC_IMPL(__imp__sub_83C4CB98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12168
	ctx.r3.s64 = ctx.r11.s64 + -12168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4CBA4"))) PPC_WEAK_FUNC(sub_83C4CBA4);
PPC_FUNC_IMPL(__imp__sub_83C4CBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4CBA8"))) PPC_WEAK_FUNC(sub_83C4CBA8);
PPC_FUNC_IMPL(__imp__sub_83C4CBA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12160
	ctx.r3.s64 = ctx.r11.s64 + -12160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4CBB4"))) PPC_WEAK_FUNC(sub_83C4CBB4);
PPC_FUNC_IMPL(__imp__sub_83C4CBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4CBB8"))) PPC_WEAK_FUNC(sub_83C4CBB8);
PPC_FUNC_IMPL(__imp__sub_83C4CBB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12152
	ctx.r3.s64 = ctx.r11.s64 + -12152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4CBC4"))) PPC_WEAK_FUNC(sub_83C4CBC4);
PPC_FUNC_IMPL(__imp__sub_83C4CBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4CBC8"))) PPC_WEAK_FUNC(sub_83C4CBC8);
PPC_FUNC_IMPL(__imp__sub_83C4CBC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12144
	ctx.r3.s64 = ctx.r11.s64 + -12144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4CBD4"))) PPC_WEAK_FUNC(sub_83C4CBD4);
PPC_FUNC_IMPL(__imp__sub_83C4CBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4CBD8"))) PPC_WEAK_FUNC(sub_83C4CBD8);
PPC_FUNC_IMPL(__imp__sub_83C4CBD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12136
	ctx.r3.s64 = ctx.r11.s64 + -12136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4CBE4"))) PPC_WEAK_FUNC(sub_83C4CBE4);
PPC_FUNC_IMPL(__imp__sub_83C4CBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4CBE8"))) PPC_WEAK_FUNC(sub_83C4CBE8);
PPC_FUNC_IMPL(__imp__sub_83C4CBE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12128
	ctx.r3.s64 = ctx.r11.s64 + -12128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4CBF4"))) PPC_WEAK_FUNC(sub_83C4CBF4);
PPC_FUNC_IMPL(__imp__sub_83C4CBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4CBF8"))) PPC_WEAK_FUNC(sub_83C4CBF8);
PPC_FUNC_IMPL(__imp__sub_83C4CBF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12120
	ctx.r3.s64 = ctx.r11.s64 + -12120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4CC04"))) PPC_WEAK_FUNC(sub_83C4CC04);
PPC_FUNC_IMPL(__imp__sub_83C4CC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4CC08"))) PPC_WEAK_FUNC(sub_83C4CC08);
PPC_FUNC_IMPL(__imp__sub_83C4CC08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12112
	ctx.r3.s64 = ctx.r11.s64 + -12112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

