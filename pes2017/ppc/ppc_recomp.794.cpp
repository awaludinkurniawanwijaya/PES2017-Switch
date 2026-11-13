#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C520BC"))) PPC_WEAK_FUNC(sub_83C520BC);
PPC_FUNC_IMPL(__imp__sub_83C520BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C520C0"))) PPC_WEAK_FUNC(sub_83C520C0);
PPC_FUNC_IMPL(__imp__sub_83C520C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5680
	ctx.r3.s64 = ctx.r11.s64 + -5680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C520CC"))) PPC_WEAK_FUNC(sub_83C520CC);
PPC_FUNC_IMPL(__imp__sub_83C520CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C520D0"))) PPC_WEAK_FUNC(sub_83C520D0);
PPC_FUNC_IMPL(__imp__sub_83C520D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5672
	ctx.r3.s64 = ctx.r11.s64 + -5672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C520DC"))) PPC_WEAK_FUNC(sub_83C520DC);
PPC_FUNC_IMPL(__imp__sub_83C520DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C520E0"))) PPC_WEAK_FUNC(sub_83C520E0);
PPC_FUNC_IMPL(__imp__sub_83C520E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5664
	ctx.r3.s64 = ctx.r11.s64 + -5664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C520EC"))) PPC_WEAK_FUNC(sub_83C520EC);
PPC_FUNC_IMPL(__imp__sub_83C520EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C520F0"))) PPC_WEAK_FUNC(sub_83C520F0);
PPC_FUNC_IMPL(__imp__sub_83C520F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5656
	ctx.r3.s64 = ctx.r11.s64 + -5656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C520FC"))) PPC_WEAK_FUNC(sub_83C520FC);
PPC_FUNC_IMPL(__imp__sub_83C520FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52100"))) PPC_WEAK_FUNC(sub_83C52100);
PPC_FUNC_IMPL(__imp__sub_83C52100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5648
	ctx.r3.s64 = ctx.r11.s64 + -5648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5210C"))) PPC_WEAK_FUNC(sub_83C5210C);
PPC_FUNC_IMPL(__imp__sub_83C5210C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52110"))) PPC_WEAK_FUNC(sub_83C52110);
PPC_FUNC_IMPL(__imp__sub_83C52110) {
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
	// addi r3,r11,24936
	ctx.r3.s64 = ctx.r11.s64 + 24936;
	// bl 0x83523120
	ctx.lr = 0x83C52128;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-5640
	ctx.r3.s64 = ctx.r10.s64 + -5640;
	// bl 0x831cdcc8
	ctx.lr = 0x83C52134;
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

__attribute__((alias("__imp__sub_83C52144"))) PPC_WEAK_FUNC(sub_83C52144);
PPC_FUNC_IMPL(__imp__sub_83C52144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52148"))) PPC_WEAK_FUNC(sub_83C52148);
PPC_FUNC_IMPL(__imp__sub_83C52148) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,24952
	ctx.r7.s64 = ctx.r8.s64 + 24952;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,24952(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24952);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,24952(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24952, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C52170"))) PPC_WEAK_FUNC(sub_83C52170);
PPC_FUNC_IMPL(__imp__sub_83C52170) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,11096
	ctx.r6.s64 = ctx.r7.s64 + 11096;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,11024(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 11024);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,24952(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24952);
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
	// std r9,11096(r7)
	PPC_STORE_U64(ctx.r7.u32 + 11096, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C521B8"))) PPC_WEAK_FUNC(sub_83C521B8);
PPC_FUNC_IMPL(__imp__sub_83C521B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5624
	ctx.r3.s64 = ctx.r11.s64 + -5624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C521C4"))) PPC_WEAK_FUNC(sub_83C521C4);
PPC_FUNC_IMPL(__imp__sub_83C521C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C521C8"))) PPC_WEAK_FUNC(sub_83C521C8);
PPC_FUNC_IMPL(__imp__sub_83C521C8) {
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
	// addi r3,r11,24960
	ctx.r3.s64 = ctx.r11.s64 + 24960;
	// bl 0x8259af80
	ctx.lr = 0x83C521E0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-5608
	ctx.r3.s64 = ctx.r10.s64 + -5608;
	// bl 0x831cdcc8
	ctx.lr = 0x83C521EC;
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

__attribute__((alias("__imp__sub_83C521FC"))) PPC_WEAK_FUNC(sub_83C521FC);
PPC_FUNC_IMPL(__imp__sub_83C521FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52200"))) PPC_WEAK_FUNC(sub_83C52200);
PPC_FUNC_IMPL(__imp__sub_83C52200) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,24940
	ctx.r11.s64 = ctx.r8.s64 + 24940;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,11072(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11072);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-5616
	ctx.r3.s64 = ctx.r6.s64 + -5616;
	// stw r10,24940(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24940, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C52230"))) PPC_WEAK_FUNC(sub_83C52230);
PPC_FUNC_IMPL(__imp__sub_83C52230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5600
	ctx.r3.s64 = ctx.r11.s64 + -5600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5223C"))) PPC_WEAK_FUNC(sub_83C5223C);
PPC_FUNC_IMPL(__imp__sub_83C5223C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52240"))) PPC_WEAK_FUNC(sub_83C52240);
PPC_FUNC_IMPL(__imp__sub_83C52240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5592
	ctx.r3.s64 = ctx.r11.s64 + -5592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5224C"))) PPC_WEAK_FUNC(sub_83C5224C);
PPC_FUNC_IMPL(__imp__sub_83C5224C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52250"))) PPC_WEAK_FUNC(sub_83C52250);
PPC_FUNC_IMPL(__imp__sub_83C52250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5584
	ctx.r3.s64 = ctx.r11.s64 + -5584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5225C"))) PPC_WEAK_FUNC(sub_83C5225C);
PPC_FUNC_IMPL(__imp__sub_83C5225C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52260"))) PPC_WEAK_FUNC(sub_83C52260);
PPC_FUNC_IMPL(__imp__sub_83C52260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5576
	ctx.r3.s64 = ctx.r11.s64 + -5576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5226C"))) PPC_WEAK_FUNC(sub_83C5226C);
PPC_FUNC_IMPL(__imp__sub_83C5226C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52270"))) PPC_WEAK_FUNC(sub_83C52270);
PPC_FUNC_IMPL(__imp__sub_83C52270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5568
	ctx.r3.s64 = ctx.r11.s64 + -5568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5227C"))) PPC_WEAK_FUNC(sub_83C5227C);
PPC_FUNC_IMPL(__imp__sub_83C5227C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52280"))) PPC_WEAK_FUNC(sub_83C52280);
PPC_FUNC_IMPL(__imp__sub_83C52280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5560
	ctx.r3.s64 = ctx.r11.s64 + -5560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5228C"))) PPC_WEAK_FUNC(sub_83C5228C);
PPC_FUNC_IMPL(__imp__sub_83C5228C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52290"))) PPC_WEAK_FUNC(sub_83C52290);
PPC_FUNC_IMPL(__imp__sub_83C52290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5552
	ctx.r3.s64 = ctx.r11.s64 + -5552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5229C"))) PPC_WEAK_FUNC(sub_83C5229C);
PPC_FUNC_IMPL(__imp__sub_83C5229C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C522A0"))) PPC_WEAK_FUNC(sub_83C522A0);
PPC_FUNC_IMPL(__imp__sub_83C522A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5544
	ctx.r3.s64 = ctx.r11.s64 + -5544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C522AC"))) PPC_WEAK_FUNC(sub_83C522AC);
PPC_FUNC_IMPL(__imp__sub_83C522AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C522B0"))) PPC_WEAK_FUNC(sub_83C522B0);
PPC_FUNC_IMPL(__imp__sub_83C522B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5536
	ctx.r3.s64 = ctx.r11.s64 + -5536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C522BC"))) PPC_WEAK_FUNC(sub_83C522BC);
PPC_FUNC_IMPL(__imp__sub_83C522BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C522C0"))) PPC_WEAK_FUNC(sub_83C522C0);
PPC_FUNC_IMPL(__imp__sub_83C522C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5528
	ctx.r3.s64 = ctx.r11.s64 + -5528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C522CC"))) PPC_WEAK_FUNC(sub_83C522CC);
PPC_FUNC_IMPL(__imp__sub_83C522CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C522D0"))) PPC_WEAK_FUNC(sub_83C522D0);
PPC_FUNC_IMPL(__imp__sub_83C522D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5520
	ctx.r3.s64 = ctx.r11.s64 + -5520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C522DC"))) PPC_WEAK_FUNC(sub_83C522DC);
PPC_FUNC_IMPL(__imp__sub_83C522DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C522E0"))) PPC_WEAK_FUNC(sub_83C522E0);
PPC_FUNC_IMPL(__imp__sub_83C522E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5512
	ctx.r3.s64 = ctx.r11.s64 + -5512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C522EC"))) PPC_WEAK_FUNC(sub_83C522EC);
PPC_FUNC_IMPL(__imp__sub_83C522EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C522F0"))) PPC_WEAK_FUNC(sub_83C522F0);
PPC_FUNC_IMPL(__imp__sub_83C522F0) {
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
	// addi r3,r11,25304
	ctx.r3.s64 = ctx.r11.s64 + 25304;
	// bl 0x83523120
	ctx.lr = 0x83C52308;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-5504
	ctx.r3.s64 = ctx.r10.s64 + -5504;
	// bl 0x831cdcc8
	ctx.lr = 0x83C52314;
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

__attribute__((alias("__imp__sub_83C52324"))) PPC_WEAK_FUNC(sub_83C52324);
PPC_FUNC_IMPL(__imp__sub_83C52324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52328"))) PPC_WEAK_FUNC(sub_83C52328);
PPC_FUNC_IMPL(__imp__sub_83C52328) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,25320
	ctx.r7.s64 = ctx.r8.s64 + 25320;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,25320(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25320);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,25320(r8)
	PPC_STORE_U32(ctx.r8.u32 + 25320, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C52350"))) PPC_WEAK_FUNC(sub_83C52350);
PPC_FUNC_IMPL(__imp__sub_83C52350) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,11224
	ctx.r6.s64 = ctx.r7.s64 + 11224;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,11152(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 11152);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,25320(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 25320);
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
	// std r9,11224(r7)
	PPC_STORE_U64(ctx.r7.u32 + 11224, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C52398"))) PPC_WEAK_FUNC(sub_83C52398);
PPC_FUNC_IMPL(__imp__sub_83C52398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5488
	ctx.r3.s64 = ctx.r11.s64 + -5488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C523A4"))) PPC_WEAK_FUNC(sub_83C523A4);
PPC_FUNC_IMPL(__imp__sub_83C523A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C523A8"))) PPC_WEAK_FUNC(sub_83C523A8);
PPC_FUNC_IMPL(__imp__sub_83C523A8) {
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
	// addi r3,r11,25328
	ctx.r3.s64 = ctx.r11.s64 + 25328;
	// bl 0x8259af80
	ctx.lr = 0x83C523C0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-5472
	ctx.r3.s64 = ctx.r10.s64 + -5472;
	// bl 0x831cdcc8
	ctx.lr = 0x83C523CC;
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

__attribute__((alias("__imp__sub_83C523DC"))) PPC_WEAK_FUNC(sub_83C523DC);
PPC_FUNC_IMPL(__imp__sub_83C523DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C523E0"))) PPC_WEAK_FUNC(sub_83C523E0);
PPC_FUNC_IMPL(__imp__sub_83C523E0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,25308
	ctx.r11.s64 = ctx.r8.s64 + 25308;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,11200(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11200);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-5480
	ctx.r3.s64 = ctx.r6.s64 + -5480;
	// stw r10,25308(r8)
	PPC_STORE_U32(ctx.r8.u32 + 25308, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C52410"))) PPC_WEAK_FUNC(sub_83C52410);
PPC_FUNC_IMPL(__imp__sub_83C52410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5464
	ctx.r3.s64 = ctx.r11.s64 + -5464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5241C"))) PPC_WEAK_FUNC(sub_83C5241C);
PPC_FUNC_IMPL(__imp__sub_83C5241C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52420"))) PPC_WEAK_FUNC(sub_83C52420);
PPC_FUNC_IMPL(__imp__sub_83C52420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5456
	ctx.r3.s64 = ctx.r11.s64 + -5456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5242C"))) PPC_WEAK_FUNC(sub_83C5242C);
PPC_FUNC_IMPL(__imp__sub_83C5242C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52430"))) PPC_WEAK_FUNC(sub_83C52430);
PPC_FUNC_IMPL(__imp__sub_83C52430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5448
	ctx.r3.s64 = ctx.r11.s64 + -5448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5243C"))) PPC_WEAK_FUNC(sub_83C5243C);
PPC_FUNC_IMPL(__imp__sub_83C5243C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52440"))) PPC_WEAK_FUNC(sub_83C52440);
PPC_FUNC_IMPL(__imp__sub_83C52440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5440
	ctx.r3.s64 = ctx.r11.s64 + -5440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5244C"))) PPC_WEAK_FUNC(sub_83C5244C);
PPC_FUNC_IMPL(__imp__sub_83C5244C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52450"))) PPC_WEAK_FUNC(sub_83C52450);
PPC_FUNC_IMPL(__imp__sub_83C52450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5432
	ctx.r3.s64 = ctx.r11.s64 + -5432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5245C"))) PPC_WEAK_FUNC(sub_83C5245C);
PPC_FUNC_IMPL(__imp__sub_83C5245C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52460"))) PPC_WEAK_FUNC(sub_83C52460);
PPC_FUNC_IMPL(__imp__sub_83C52460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5424
	ctx.r3.s64 = ctx.r11.s64 + -5424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5246C"))) PPC_WEAK_FUNC(sub_83C5246C);
PPC_FUNC_IMPL(__imp__sub_83C5246C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52470"))) PPC_WEAK_FUNC(sub_83C52470);
PPC_FUNC_IMPL(__imp__sub_83C52470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5416
	ctx.r3.s64 = ctx.r11.s64 + -5416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5247C"))) PPC_WEAK_FUNC(sub_83C5247C);
PPC_FUNC_IMPL(__imp__sub_83C5247C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52480"))) PPC_WEAK_FUNC(sub_83C52480);
PPC_FUNC_IMPL(__imp__sub_83C52480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5408
	ctx.r3.s64 = ctx.r11.s64 + -5408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5248C"))) PPC_WEAK_FUNC(sub_83C5248C);
PPC_FUNC_IMPL(__imp__sub_83C5248C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52490"))) PPC_WEAK_FUNC(sub_83C52490);
PPC_FUNC_IMPL(__imp__sub_83C52490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5400
	ctx.r3.s64 = ctx.r11.s64 + -5400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5249C"))) PPC_WEAK_FUNC(sub_83C5249C);
PPC_FUNC_IMPL(__imp__sub_83C5249C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C524A0"))) PPC_WEAK_FUNC(sub_83C524A0);
PPC_FUNC_IMPL(__imp__sub_83C524A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5392
	ctx.r3.s64 = ctx.r11.s64 + -5392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C524AC"))) PPC_WEAK_FUNC(sub_83C524AC);
PPC_FUNC_IMPL(__imp__sub_83C524AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C524B0"))) PPC_WEAK_FUNC(sub_83C524B0);
PPC_FUNC_IMPL(__imp__sub_83C524B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5384
	ctx.r3.s64 = ctx.r11.s64 + -5384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C524BC"))) PPC_WEAK_FUNC(sub_83C524BC);
PPC_FUNC_IMPL(__imp__sub_83C524BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C524C0"))) PPC_WEAK_FUNC(sub_83C524C0);
PPC_FUNC_IMPL(__imp__sub_83C524C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5376
	ctx.r3.s64 = ctx.r11.s64 + -5376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C524CC"))) PPC_WEAK_FUNC(sub_83C524CC);
PPC_FUNC_IMPL(__imp__sub_83C524CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C524D0"))) PPC_WEAK_FUNC(sub_83C524D0);
PPC_FUNC_IMPL(__imp__sub_83C524D0) {
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
	// addi r3,r11,25672
	ctx.r3.s64 = ctx.r11.s64 + 25672;
	// bl 0x83523120
	ctx.lr = 0x83C524E8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-5368
	ctx.r3.s64 = ctx.r10.s64 + -5368;
	// bl 0x831cdcc8
	ctx.lr = 0x83C524F4;
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

__attribute__((alias("__imp__sub_83C52504"))) PPC_WEAK_FUNC(sub_83C52504);
PPC_FUNC_IMPL(__imp__sub_83C52504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52508"))) PPC_WEAK_FUNC(sub_83C52508);
PPC_FUNC_IMPL(__imp__sub_83C52508) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,25688
	ctx.r7.s64 = ctx.r8.s64 + 25688;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,25688(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25688);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,25688(r8)
	PPC_STORE_U32(ctx.r8.u32 + 25688, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C52530"))) PPC_WEAK_FUNC(sub_83C52530);
PPC_FUNC_IMPL(__imp__sub_83C52530) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,11352
	ctx.r6.s64 = ctx.r7.s64 + 11352;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,11280(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 11280);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,25688(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 25688);
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
	// std r9,11352(r7)
	PPC_STORE_U64(ctx.r7.u32 + 11352, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C52578"))) PPC_WEAK_FUNC(sub_83C52578);
PPC_FUNC_IMPL(__imp__sub_83C52578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5352
	ctx.r3.s64 = ctx.r11.s64 + -5352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C52584"))) PPC_WEAK_FUNC(sub_83C52584);
PPC_FUNC_IMPL(__imp__sub_83C52584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52588"))) PPC_WEAK_FUNC(sub_83C52588);
PPC_FUNC_IMPL(__imp__sub_83C52588) {
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
	// addi r3,r11,25696
	ctx.r3.s64 = ctx.r11.s64 + 25696;
	// bl 0x8259af80
	ctx.lr = 0x83C525A0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-5336
	ctx.r3.s64 = ctx.r10.s64 + -5336;
	// bl 0x831cdcc8
	ctx.lr = 0x83C525AC;
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

__attribute__((alias("__imp__sub_83C525BC"))) PPC_WEAK_FUNC(sub_83C525BC);
PPC_FUNC_IMPL(__imp__sub_83C525BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C525C0"))) PPC_WEAK_FUNC(sub_83C525C0);
PPC_FUNC_IMPL(__imp__sub_83C525C0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,25676
	ctx.r11.s64 = ctx.r8.s64 + 25676;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,11328(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11328);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-5344
	ctx.r3.s64 = ctx.r6.s64 + -5344;
	// stw r10,25676(r8)
	PPC_STORE_U32(ctx.r8.u32 + 25676, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C525F0"))) PPC_WEAK_FUNC(sub_83C525F0);
PPC_FUNC_IMPL(__imp__sub_83C525F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5328
	ctx.r3.s64 = ctx.r11.s64 + -5328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C525FC"))) PPC_WEAK_FUNC(sub_83C525FC);
PPC_FUNC_IMPL(__imp__sub_83C525FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52600"))) PPC_WEAK_FUNC(sub_83C52600);
PPC_FUNC_IMPL(__imp__sub_83C52600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5320
	ctx.r3.s64 = ctx.r11.s64 + -5320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5260C"))) PPC_WEAK_FUNC(sub_83C5260C);
PPC_FUNC_IMPL(__imp__sub_83C5260C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52610"))) PPC_WEAK_FUNC(sub_83C52610);
PPC_FUNC_IMPL(__imp__sub_83C52610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5312
	ctx.r3.s64 = ctx.r11.s64 + -5312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5261C"))) PPC_WEAK_FUNC(sub_83C5261C);
PPC_FUNC_IMPL(__imp__sub_83C5261C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52620"))) PPC_WEAK_FUNC(sub_83C52620);
PPC_FUNC_IMPL(__imp__sub_83C52620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5304
	ctx.r3.s64 = ctx.r11.s64 + -5304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5262C"))) PPC_WEAK_FUNC(sub_83C5262C);
PPC_FUNC_IMPL(__imp__sub_83C5262C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52630"))) PPC_WEAK_FUNC(sub_83C52630);
PPC_FUNC_IMPL(__imp__sub_83C52630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5296
	ctx.r3.s64 = ctx.r11.s64 + -5296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5263C"))) PPC_WEAK_FUNC(sub_83C5263C);
PPC_FUNC_IMPL(__imp__sub_83C5263C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52640"))) PPC_WEAK_FUNC(sub_83C52640);
PPC_FUNC_IMPL(__imp__sub_83C52640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5288
	ctx.r3.s64 = ctx.r11.s64 + -5288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5264C"))) PPC_WEAK_FUNC(sub_83C5264C);
PPC_FUNC_IMPL(__imp__sub_83C5264C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52650"))) PPC_WEAK_FUNC(sub_83C52650);
PPC_FUNC_IMPL(__imp__sub_83C52650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5280
	ctx.r3.s64 = ctx.r11.s64 + -5280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5265C"))) PPC_WEAK_FUNC(sub_83C5265C);
PPC_FUNC_IMPL(__imp__sub_83C5265C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52660"))) PPC_WEAK_FUNC(sub_83C52660);
PPC_FUNC_IMPL(__imp__sub_83C52660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5272
	ctx.r3.s64 = ctx.r11.s64 + -5272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5266C"))) PPC_WEAK_FUNC(sub_83C5266C);
PPC_FUNC_IMPL(__imp__sub_83C5266C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52670"))) PPC_WEAK_FUNC(sub_83C52670);
PPC_FUNC_IMPL(__imp__sub_83C52670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5264
	ctx.r3.s64 = ctx.r11.s64 + -5264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5267C"))) PPC_WEAK_FUNC(sub_83C5267C);
PPC_FUNC_IMPL(__imp__sub_83C5267C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52680"))) PPC_WEAK_FUNC(sub_83C52680);
PPC_FUNC_IMPL(__imp__sub_83C52680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5256
	ctx.r3.s64 = ctx.r11.s64 + -5256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5268C"))) PPC_WEAK_FUNC(sub_83C5268C);
PPC_FUNC_IMPL(__imp__sub_83C5268C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52690"))) PPC_WEAK_FUNC(sub_83C52690);
PPC_FUNC_IMPL(__imp__sub_83C52690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5248
	ctx.r3.s64 = ctx.r11.s64 + -5248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5269C"))) PPC_WEAK_FUNC(sub_83C5269C);
PPC_FUNC_IMPL(__imp__sub_83C5269C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C526A0"))) PPC_WEAK_FUNC(sub_83C526A0);
PPC_FUNC_IMPL(__imp__sub_83C526A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5240
	ctx.r3.s64 = ctx.r11.s64 + -5240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C526AC"))) PPC_WEAK_FUNC(sub_83C526AC);
PPC_FUNC_IMPL(__imp__sub_83C526AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C526B0"))) PPC_WEAK_FUNC(sub_83C526B0);
PPC_FUNC_IMPL(__imp__sub_83C526B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5232
	ctx.r3.s64 = ctx.r11.s64 + -5232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C526BC"))) PPC_WEAK_FUNC(sub_83C526BC);
PPC_FUNC_IMPL(__imp__sub_83C526BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C526C0"))) PPC_WEAK_FUNC(sub_83C526C0);
PPC_FUNC_IMPL(__imp__sub_83C526C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5224
	ctx.r3.s64 = ctx.r11.s64 + -5224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C526CC"))) PPC_WEAK_FUNC(sub_83C526CC);
PPC_FUNC_IMPL(__imp__sub_83C526CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C526D0"))) PPC_WEAK_FUNC(sub_83C526D0);
PPC_FUNC_IMPL(__imp__sub_83C526D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5216
	ctx.r3.s64 = ctx.r11.s64 + -5216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C526DC"))) PPC_WEAK_FUNC(sub_83C526DC);
PPC_FUNC_IMPL(__imp__sub_83C526DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C526E0"))) PPC_WEAK_FUNC(sub_83C526E0);
PPC_FUNC_IMPL(__imp__sub_83C526E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5208
	ctx.r3.s64 = ctx.r11.s64 + -5208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C526EC"))) PPC_WEAK_FUNC(sub_83C526EC);
PPC_FUNC_IMPL(__imp__sub_83C526EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C526F0"))) PPC_WEAK_FUNC(sub_83C526F0);
PPC_FUNC_IMPL(__imp__sub_83C526F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5200
	ctx.r3.s64 = ctx.r11.s64 + -5200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C526FC"))) PPC_WEAK_FUNC(sub_83C526FC);
PPC_FUNC_IMPL(__imp__sub_83C526FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52700"))) PPC_WEAK_FUNC(sub_83C52700);
PPC_FUNC_IMPL(__imp__sub_83C52700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5192
	ctx.r3.s64 = ctx.r11.s64 + -5192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5270C"))) PPC_WEAK_FUNC(sub_83C5270C);
PPC_FUNC_IMPL(__imp__sub_83C5270C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52710"))) PPC_WEAK_FUNC(sub_83C52710);
PPC_FUNC_IMPL(__imp__sub_83C52710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5184
	ctx.r3.s64 = ctx.r11.s64 + -5184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5271C"))) PPC_WEAK_FUNC(sub_83C5271C);
PPC_FUNC_IMPL(__imp__sub_83C5271C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52720"))) PPC_WEAK_FUNC(sub_83C52720);
PPC_FUNC_IMPL(__imp__sub_83C52720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5176
	ctx.r3.s64 = ctx.r11.s64 + -5176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5272C"))) PPC_WEAK_FUNC(sub_83C5272C);
PPC_FUNC_IMPL(__imp__sub_83C5272C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52730"))) PPC_WEAK_FUNC(sub_83C52730);
PPC_FUNC_IMPL(__imp__sub_83C52730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5168
	ctx.r3.s64 = ctx.r11.s64 + -5168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5273C"))) PPC_WEAK_FUNC(sub_83C5273C);
PPC_FUNC_IMPL(__imp__sub_83C5273C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52740"))) PPC_WEAK_FUNC(sub_83C52740);
PPC_FUNC_IMPL(__imp__sub_83C52740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5160
	ctx.r3.s64 = ctx.r11.s64 + -5160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5274C"))) PPC_WEAK_FUNC(sub_83C5274C);
PPC_FUNC_IMPL(__imp__sub_83C5274C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52750"))) PPC_WEAK_FUNC(sub_83C52750);
PPC_FUNC_IMPL(__imp__sub_83C52750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5152
	ctx.r3.s64 = ctx.r11.s64 + -5152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5275C"))) PPC_WEAK_FUNC(sub_83C5275C);
PPC_FUNC_IMPL(__imp__sub_83C5275C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52760"))) PPC_WEAK_FUNC(sub_83C52760);
PPC_FUNC_IMPL(__imp__sub_83C52760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5144
	ctx.r3.s64 = ctx.r11.s64 + -5144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5276C"))) PPC_WEAK_FUNC(sub_83C5276C);
PPC_FUNC_IMPL(__imp__sub_83C5276C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52770"))) PPC_WEAK_FUNC(sub_83C52770);
PPC_FUNC_IMPL(__imp__sub_83C52770) {
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
	// addi r3,r11,26048
	ctx.r3.s64 = ctx.r11.s64 + 26048;
	// bl 0x83523120
	ctx.lr = 0x83C52788;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-5136
	ctx.r3.s64 = ctx.r10.s64 + -5136;
	// bl 0x831cdcc8
	ctx.lr = 0x83C52794;
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

__attribute__((alias("__imp__sub_83C527A4"))) PPC_WEAK_FUNC(sub_83C527A4);
PPC_FUNC_IMPL(__imp__sub_83C527A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C527A8"))) PPC_WEAK_FUNC(sub_83C527A8);
PPC_FUNC_IMPL(__imp__sub_83C527A8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,26064
	ctx.r7.s64 = ctx.r8.s64 + 26064;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,26064(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26064);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,26064(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26064, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C527D0"))) PPC_WEAK_FUNC(sub_83C527D0);
PPC_FUNC_IMPL(__imp__sub_83C527D0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,11912
	ctx.r6.s64 = ctx.r7.s64 + 11912;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,11832(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 11832);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,26064(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 26064);
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
	// std r9,11912(r7)
	PPC_STORE_U64(ctx.r7.u32 + 11912, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C52818"))) PPC_WEAK_FUNC(sub_83C52818);
PPC_FUNC_IMPL(__imp__sub_83C52818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5120
	ctx.r3.s64 = ctx.r11.s64 + -5120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C52824"))) PPC_WEAK_FUNC(sub_83C52824);
PPC_FUNC_IMPL(__imp__sub_83C52824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52828"))) PPC_WEAK_FUNC(sub_83C52828);
PPC_FUNC_IMPL(__imp__sub_83C52828) {
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
	// addi r3,r11,26072
	ctx.r3.s64 = ctx.r11.s64 + 26072;
	// bl 0x8259af80
	ctx.lr = 0x83C52840;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-5104
	ctx.r3.s64 = ctx.r10.s64 + -5104;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5284C;
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

__attribute__((alias("__imp__sub_83C5285C"))) PPC_WEAK_FUNC(sub_83C5285C);
PPC_FUNC_IMPL(__imp__sub_83C5285C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52860"))) PPC_WEAK_FUNC(sub_83C52860);
PPC_FUNC_IMPL(__imp__sub_83C52860) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,26052
	ctx.r11.s64 = ctx.r8.s64 + 26052;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,11880(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11880);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-5112
	ctx.r3.s64 = ctx.r6.s64 + -5112;
	// stw r10,26052(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26052, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C52890"))) PPC_WEAK_FUNC(sub_83C52890);
PPC_FUNC_IMPL(__imp__sub_83C52890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5096
	ctx.r3.s64 = ctx.r11.s64 + -5096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5289C"))) PPC_WEAK_FUNC(sub_83C5289C);
PPC_FUNC_IMPL(__imp__sub_83C5289C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C528A0"))) PPC_WEAK_FUNC(sub_83C528A0);
PPC_FUNC_IMPL(__imp__sub_83C528A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5088
	ctx.r3.s64 = ctx.r11.s64 + -5088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C528AC"))) PPC_WEAK_FUNC(sub_83C528AC);
PPC_FUNC_IMPL(__imp__sub_83C528AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C528B0"))) PPC_WEAK_FUNC(sub_83C528B0);
PPC_FUNC_IMPL(__imp__sub_83C528B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5080
	ctx.r3.s64 = ctx.r11.s64 + -5080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C528BC"))) PPC_WEAK_FUNC(sub_83C528BC);
PPC_FUNC_IMPL(__imp__sub_83C528BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C528C0"))) PPC_WEAK_FUNC(sub_83C528C0);
PPC_FUNC_IMPL(__imp__sub_83C528C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5072
	ctx.r3.s64 = ctx.r11.s64 + -5072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C528CC"))) PPC_WEAK_FUNC(sub_83C528CC);
PPC_FUNC_IMPL(__imp__sub_83C528CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C528D0"))) PPC_WEAK_FUNC(sub_83C528D0);
PPC_FUNC_IMPL(__imp__sub_83C528D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5064
	ctx.r3.s64 = ctx.r11.s64 + -5064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C528DC"))) PPC_WEAK_FUNC(sub_83C528DC);
PPC_FUNC_IMPL(__imp__sub_83C528DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C528E0"))) PPC_WEAK_FUNC(sub_83C528E0);
PPC_FUNC_IMPL(__imp__sub_83C528E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5056
	ctx.r3.s64 = ctx.r11.s64 + -5056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C528EC"))) PPC_WEAK_FUNC(sub_83C528EC);
PPC_FUNC_IMPL(__imp__sub_83C528EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C528F0"))) PPC_WEAK_FUNC(sub_83C528F0);
PPC_FUNC_IMPL(__imp__sub_83C528F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5048
	ctx.r3.s64 = ctx.r11.s64 + -5048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C528FC"))) PPC_WEAK_FUNC(sub_83C528FC);
PPC_FUNC_IMPL(__imp__sub_83C528FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52900"))) PPC_WEAK_FUNC(sub_83C52900);
PPC_FUNC_IMPL(__imp__sub_83C52900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5040
	ctx.r3.s64 = ctx.r11.s64 + -5040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5290C"))) PPC_WEAK_FUNC(sub_83C5290C);
PPC_FUNC_IMPL(__imp__sub_83C5290C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52910"))) PPC_WEAK_FUNC(sub_83C52910);
PPC_FUNC_IMPL(__imp__sub_83C52910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5032
	ctx.r3.s64 = ctx.r11.s64 + -5032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5291C"))) PPC_WEAK_FUNC(sub_83C5291C);
PPC_FUNC_IMPL(__imp__sub_83C5291C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52920"))) PPC_WEAK_FUNC(sub_83C52920);
PPC_FUNC_IMPL(__imp__sub_83C52920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5024
	ctx.r3.s64 = ctx.r11.s64 + -5024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5292C"))) PPC_WEAK_FUNC(sub_83C5292C);
PPC_FUNC_IMPL(__imp__sub_83C5292C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52930"))) PPC_WEAK_FUNC(sub_83C52930);
PPC_FUNC_IMPL(__imp__sub_83C52930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5016
	ctx.r3.s64 = ctx.r11.s64 + -5016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5293C"))) PPC_WEAK_FUNC(sub_83C5293C);
PPC_FUNC_IMPL(__imp__sub_83C5293C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52940"))) PPC_WEAK_FUNC(sub_83C52940);
PPC_FUNC_IMPL(__imp__sub_83C52940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-5008
	ctx.r3.s64 = ctx.r11.s64 + -5008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5294C"))) PPC_WEAK_FUNC(sub_83C5294C);
PPC_FUNC_IMPL(__imp__sub_83C5294C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52950"))) PPC_WEAK_FUNC(sub_83C52950);
PPC_FUNC_IMPL(__imp__sub_83C52950) {
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
	// addi r3,r11,26416
	ctx.r3.s64 = ctx.r11.s64 + 26416;
	// bl 0x83523120
	ctx.lr = 0x83C52968;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-5000
	ctx.r3.s64 = ctx.r10.s64 + -5000;
	// bl 0x831cdcc8
	ctx.lr = 0x83C52974;
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

__attribute__((alias("__imp__sub_83C52984"))) PPC_WEAK_FUNC(sub_83C52984);
PPC_FUNC_IMPL(__imp__sub_83C52984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52988"))) PPC_WEAK_FUNC(sub_83C52988);
PPC_FUNC_IMPL(__imp__sub_83C52988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4984
	ctx.r3.s64 = ctx.r11.s64 + -4984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C52994"))) PPC_WEAK_FUNC(sub_83C52994);
PPC_FUNC_IMPL(__imp__sub_83C52994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52998"))) PPC_WEAK_FUNC(sub_83C52998);
PPC_FUNC_IMPL(__imp__sub_83C52998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4976
	ctx.r3.s64 = ctx.r11.s64 + -4976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C529A4"))) PPC_WEAK_FUNC(sub_83C529A4);
PPC_FUNC_IMPL(__imp__sub_83C529A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C529A8"))) PPC_WEAK_FUNC(sub_83C529A8);
PPC_FUNC_IMPL(__imp__sub_83C529A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4968
	ctx.r3.s64 = ctx.r11.s64 + -4968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C529B4"))) PPC_WEAK_FUNC(sub_83C529B4);
PPC_FUNC_IMPL(__imp__sub_83C529B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C529B8"))) PPC_WEAK_FUNC(sub_83C529B8);
PPC_FUNC_IMPL(__imp__sub_83C529B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4960
	ctx.r3.s64 = ctx.r11.s64 + -4960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C529C4"))) PPC_WEAK_FUNC(sub_83C529C4);
PPC_FUNC_IMPL(__imp__sub_83C529C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C529C8"))) PPC_WEAK_FUNC(sub_83C529C8);
PPC_FUNC_IMPL(__imp__sub_83C529C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4952
	ctx.r3.s64 = ctx.r11.s64 + -4952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C529D4"))) PPC_WEAK_FUNC(sub_83C529D4);
PPC_FUNC_IMPL(__imp__sub_83C529D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C529D8"))) PPC_WEAK_FUNC(sub_83C529D8);
PPC_FUNC_IMPL(__imp__sub_83C529D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4944
	ctx.r3.s64 = ctx.r11.s64 + -4944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C529E4"))) PPC_WEAK_FUNC(sub_83C529E4);
PPC_FUNC_IMPL(__imp__sub_83C529E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C529E8"))) PPC_WEAK_FUNC(sub_83C529E8);
PPC_FUNC_IMPL(__imp__sub_83C529E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4936
	ctx.r3.s64 = ctx.r11.s64 + -4936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C529F4"))) PPC_WEAK_FUNC(sub_83C529F4);
PPC_FUNC_IMPL(__imp__sub_83C529F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C529F8"))) PPC_WEAK_FUNC(sub_83C529F8);
PPC_FUNC_IMPL(__imp__sub_83C529F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4928
	ctx.r3.s64 = ctx.r11.s64 + -4928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C52A04"))) PPC_WEAK_FUNC(sub_83C52A04);
PPC_FUNC_IMPL(__imp__sub_83C52A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52A08"))) PPC_WEAK_FUNC(sub_83C52A08);
PPC_FUNC_IMPL(__imp__sub_83C52A08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4920
	ctx.r3.s64 = ctx.r11.s64 + -4920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C52A14"))) PPC_WEAK_FUNC(sub_83C52A14);
PPC_FUNC_IMPL(__imp__sub_83C52A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52A18"))) PPC_WEAK_FUNC(sub_83C52A18);
PPC_FUNC_IMPL(__imp__sub_83C52A18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4912
	ctx.r3.s64 = ctx.r11.s64 + -4912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C52A24"))) PPC_WEAK_FUNC(sub_83C52A24);
PPC_FUNC_IMPL(__imp__sub_83C52A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52A28"))) PPC_WEAK_FUNC(sub_83C52A28);
PPC_FUNC_IMPL(__imp__sub_83C52A28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4904
	ctx.r3.s64 = ctx.r11.s64 + -4904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C52A34"))) PPC_WEAK_FUNC(sub_83C52A34);
PPC_FUNC_IMPL(__imp__sub_83C52A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52A38"))) PPC_WEAK_FUNC(sub_83C52A38);
PPC_FUNC_IMPL(__imp__sub_83C52A38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4896
	ctx.r3.s64 = ctx.r11.s64 + -4896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C52A44"))) PPC_WEAK_FUNC(sub_83C52A44);
PPC_FUNC_IMPL(__imp__sub_83C52A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52A48"))) PPC_WEAK_FUNC(sub_83C52A48);
PPC_FUNC_IMPL(__imp__sub_83C52A48) {
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
	// addi r3,r11,26424
	ctx.r3.s64 = ctx.r11.s64 + 26424;
	// bl 0x83523120
	ctx.lr = 0x83C52A60;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-4888
	ctx.r3.s64 = ctx.r10.s64 + -4888;
	// bl 0x831cdcc8
	ctx.lr = 0x83C52A6C;
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

__attribute__((alias("__imp__sub_83C52A7C"))) PPC_WEAK_FUNC(sub_83C52A7C);
PPC_FUNC_IMPL(__imp__sub_83C52A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52A80"))) PPC_WEAK_FUNC(sub_83C52A80);
PPC_FUNC_IMPL(__imp__sub_83C52A80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4872
	ctx.r3.s64 = ctx.r11.s64 + -4872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C52A8C"))) PPC_WEAK_FUNC(sub_83C52A8C);
PPC_FUNC_IMPL(__imp__sub_83C52A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52A90"))) PPC_WEAK_FUNC(sub_83C52A90);
PPC_FUNC_IMPL(__imp__sub_83C52A90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4864
	ctx.r3.s64 = ctx.r11.s64 + -4864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C52A9C"))) PPC_WEAK_FUNC(sub_83C52A9C);
PPC_FUNC_IMPL(__imp__sub_83C52A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52AA0"))) PPC_WEAK_FUNC(sub_83C52AA0);
PPC_FUNC_IMPL(__imp__sub_83C52AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4856
	ctx.r3.s64 = ctx.r11.s64 + -4856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C52AAC"))) PPC_WEAK_FUNC(sub_83C52AAC);
PPC_FUNC_IMPL(__imp__sub_83C52AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52AB0"))) PPC_WEAK_FUNC(sub_83C52AB0);
PPC_FUNC_IMPL(__imp__sub_83C52AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4848
	ctx.r3.s64 = ctx.r11.s64 + -4848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C52ABC"))) PPC_WEAK_FUNC(sub_83C52ABC);
PPC_FUNC_IMPL(__imp__sub_83C52ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52AC0"))) PPC_WEAK_FUNC(sub_83C52AC0);
PPC_FUNC_IMPL(__imp__sub_83C52AC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4840
	ctx.r3.s64 = ctx.r11.s64 + -4840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C52ACC"))) PPC_WEAK_FUNC(sub_83C52ACC);
PPC_FUNC_IMPL(__imp__sub_83C52ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52AD0"))) PPC_WEAK_FUNC(sub_83C52AD0);
PPC_FUNC_IMPL(__imp__sub_83C52AD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4832
	ctx.r3.s64 = ctx.r11.s64 + -4832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C52ADC"))) PPC_WEAK_FUNC(sub_83C52ADC);
PPC_FUNC_IMPL(__imp__sub_83C52ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52AE0"))) PPC_WEAK_FUNC(sub_83C52AE0);
PPC_FUNC_IMPL(__imp__sub_83C52AE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4824
	ctx.r3.s64 = ctx.r11.s64 + -4824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C52AEC"))) PPC_WEAK_FUNC(sub_83C52AEC);
PPC_FUNC_IMPL(__imp__sub_83C52AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52AF0"))) PPC_WEAK_FUNC(sub_83C52AF0);
PPC_FUNC_IMPL(__imp__sub_83C52AF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4816
	ctx.r3.s64 = ctx.r11.s64 + -4816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C52AFC"))) PPC_WEAK_FUNC(sub_83C52AFC);
PPC_FUNC_IMPL(__imp__sub_83C52AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52B00"))) PPC_WEAK_FUNC(sub_83C52B00);
PPC_FUNC_IMPL(__imp__sub_83C52B00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4808
	ctx.r3.s64 = ctx.r11.s64 + -4808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C52B0C"))) PPC_WEAK_FUNC(sub_83C52B0C);
PPC_FUNC_IMPL(__imp__sub_83C52B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52B10"))) PPC_WEAK_FUNC(sub_83C52B10);
PPC_FUNC_IMPL(__imp__sub_83C52B10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4800
	ctx.r3.s64 = ctx.r11.s64 + -4800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C52B1C"))) PPC_WEAK_FUNC(sub_83C52B1C);
PPC_FUNC_IMPL(__imp__sub_83C52B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52B20"))) PPC_WEAK_FUNC(sub_83C52B20);
PPC_FUNC_IMPL(__imp__sub_83C52B20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4792
	ctx.r3.s64 = ctx.r11.s64 + -4792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C52B2C"))) PPC_WEAK_FUNC(sub_83C52B2C);
PPC_FUNC_IMPL(__imp__sub_83C52B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52B30"))) PPC_WEAK_FUNC(sub_83C52B30);
PPC_FUNC_IMPL(__imp__sub_83C52B30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4784
	ctx.r3.s64 = ctx.r11.s64 + -4784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C52B3C"))) PPC_WEAK_FUNC(sub_83C52B3C);
PPC_FUNC_IMPL(__imp__sub_83C52B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52B40"))) PPC_WEAK_FUNC(sub_83C52B40);
PPC_FUNC_IMPL(__imp__sub_83C52B40) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,26448
	ctx.r7.s64 = ctx.r8.s64 + 26448;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,26448(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26448);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,26448(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26448, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C52B68"))) PPC_WEAK_FUNC(sub_83C52B68);
PPC_FUNC_IMPL(__imp__sub_83C52B68) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,12288
	ctx.r6.s64 = ctx.r7.s64 + 12288;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,12216(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 12216);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,26448(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 26448);
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
	// std r9,12288(r7)
	PPC_STORE_U64(ctx.r7.u32 + 12288, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C52BB0"))) PPC_WEAK_FUNC(sub_83C52BB0);
PPC_FUNC_IMPL(__imp__sub_83C52BB0) {
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
	// addi r3,r11,26433
	ctx.r3.s64 = ctx.r11.s64 + 26433;
	// bl 0x83523120
	ctx.lr = 0x83C52BC8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-4776
	ctx.r3.s64 = ctx.r10.s64 + -4776;
	// bl 0x831cdcc8
	ctx.lr = 0x83C52BD4;
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

__attribute__((alias("__imp__sub_83C52BE4"))) PPC_WEAK_FUNC(sub_83C52BE4);
PPC_FUNC_IMPL(__imp__sub_83C52BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52BE8"))) PPC_WEAK_FUNC(sub_83C52BE8);
PPC_FUNC_IMPL(__imp__sub_83C52BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4760
	ctx.r3.s64 = ctx.r11.s64 + -4760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C52BF4"))) PPC_WEAK_FUNC(sub_83C52BF4);
PPC_FUNC_IMPL(__imp__sub_83C52BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52BF8"))) PPC_WEAK_FUNC(sub_83C52BF8);
PPC_FUNC_IMPL(__imp__sub_83C52BF8) {
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
	// addi r3,r11,26456
	ctx.r3.s64 = ctx.r11.s64 + 26456;
	// bl 0x8259af80
	ctx.lr = 0x83C52C10;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-4744
	ctx.r3.s64 = ctx.r10.s64 + -4744;
	// bl 0x831cdcc8
	ctx.lr = 0x83C52C1C;
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

__attribute__((alias("__imp__sub_83C52C2C"))) PPC_WEAK_FUNC(sub_83C52C2C);
PPC_FUNC_IMPL(__imp__sub_83C52C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52C30"))) PPC_WEAK_FUNC(sub_83C52C30);
PPC_FUNC_IMPL(__imp__sub_83C52C30) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,26436
	ctx.r11.s64 = ctx.r8.s64 + 26436;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,12264(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12264);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-4752
	ctx.r3.s64 = ctx.r6.s64 + -4752;
	// stw r10,26436(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26436, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C52C60"))) PPC_WEAK_FUNC(sub_83C52C60);
PPC_FUNC_IMPL(__imp__sub_83C52C60) {
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
	// addi r4,r11,5640
	ctx.r4.s64 = ctx.r11.s64 + 5640;
	// addi r3,r10,12320
	ctx.r3.s64 = ctx.r10.s64 + 12320;
	// li r5,7
	ctx.r5.s64 = 7;
	// bl 0x8259cc28
	ctx.lr = 0x83C52C84;
	sub_8259CC28(ctx, base);
	// lis r9,-31788
	ctx.r9.s64 = -2083258368;
	// addi r3,r9,-4736
	ctx.r3.s64 = ctx.r9.s64 + -4736;
	// bl 0x831cdcc8
	ctx.lr = 0x83C52C90;
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

__attribute__((alias("__imp__sub_83C52CA0"))) PPC_WEAK_FUNC(sub_83C52CA0);
PPC_FUNC_IMPL(__imp__sub_83C52CA0) {
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
	// addi r4,r11,5648
	ctx.r4.s64 = ctx.r11.s64 + 5648;
	// addi r3,r10,12348
	ctx.r3.s64 = ctx.r10.s64 + 12348;
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x8259cc28
	ctx.lr = 0x83C52CC4;
	sub_8259CC28(ctx, base);
	// lis r9,-31788
	ctx.r9.s64 = -2083258368;
	// addi r3,r9,-4632
	ctx.r3.s64 = ctx.r9.s64 + -4632;
	// bl 0x831cdcc8
	ctx.lr = 0x83C52CD0;
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

__attribute__((alias("__imp__sub_83C52CE0"))) PPC_WEAK_FUNC(sub_83C52CE0);
PPC_FUNC_IMPL(__imp__sub_83C52CE0) {
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
	// addi r4,r11,5656
	ctx.r4.s64 = ctx.r11.s64 + 5656;
	// addi r3,r10,12376
	ctx.r3.s64 = ctx.r10.s64 + 12376;
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x8259cc28
	ctx.lr = 0x83C52D04;
	sub_8259CC28(ctx, base);
	// lis r9,-31788
	ctx.r9.s64 = -2083258368;
	// addi r3,r9,-4528
	ctx.r3.s64 = ctx.r9.s64 + -4528;
	// bl 0x831cdcc8
	ctx.lr = 0x83C52D10;
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

__attribute__((alias("__imp__sub_83C52D20"))) PPC_WEAK_FUNC(sub_83C52D20);
PPC_FUNC_IMPL(__imp__sub_83C52D20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4424
	ctx.r3.s64 = ctx.r11.s64 + -4424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C52D2C"))) PPC_WEAK_FUNC(sub_83C52D2C);
PPC_FUNC_IMPL(__imp__sub_83C52D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52D30"))) PPC_WEAK_FUNC(sub_83C52D30);
PPC_FUNC_IMPL(__imp__sub_83C52D30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4416
	ctx.r3.s64 = ctx.r11.s64 + -4416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C52D3C"))) PPC_WEAK_FUNC(sub_83C52D3C);
PPC_FUNC_IMPL(__imp__sub_83C52D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52D40"))) PPC_WEAK_FUNC(sub_83C52D40);
PPC_FUNC_IMPL(__imp__sub_83C52D40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4408
	ctx.r3.s64 = ctx.r11.s64 + -4408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C52D4C"))) PPC_WEAK_FUNC(sub_83C52D4C);
PPC_FUNC_IMPL(__imp__sub_83C52D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52D50"))) PPC_WEAK_FUNC(sub_83C52D50);
PPC_FUNC_IMPL(__imp__sub_83C52D50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4400
	ctx.r3.s64 = ctx.r11.s64 + -4400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C52D5C"))) PPC_WEAK_FUNC(sub_83C52D5C);
PPC_FUNC_IMPL(__imp__sub_83C52D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52D60"))) PPC_WEAK_FUNC(sub_83C52D60);
PPC_FUNC_IMPL(__imp__sub_83C52D60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4392
	ctx.r3.s64 = ctx.r11.s64 + -4392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C52D6C"))) PPC_WEAK_FUNC(sub_83C52D6C);
PPC_FUNC_IMPL(__imp__sub_83C52D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52D70"))) PPC_WEAK_FUNC(sub_83C52D70);
PPC_FUNC_IMPL(__imp__sub_83C52D70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4384
	ctx.r3.s64 = ctx.r11.s64 + -4384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C52D7C"))) PPC_WEAK_FUNC(sub_83C52D7C);
PPC_FUNC_IMPL(__imp__sub_83C52D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52D80"))) PPC_WEAK_FUNC(sub_83C52D80);
PPC_FUNC_IMPL(__imp__sub_83C52D80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4376
	ctx.r3.s64 = ctx.r11.s64 + -4376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C52D8C"))) PPC_WEAK_FUNC(sub_83C52D8C);
PPC_FUNC_IMPL(__imp__sub_83C52D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52D90"))) PPC_WEAK_FUNC(sub_83C52D90);
PPC_FUNC_IMPL(__imp__sub_83C52D90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4368
	ctx.r3.s64 = ctx.r11.s64 + -4368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C52D9C"))) PPC_WEAK_FUNC(sub_83C52D9C);
PPC_FUNC_IMPL(__imp__sub_83C52D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52DA0"))) PPC_WEAK_FUNC(sub_83C52DA0);
PPC_FUNC_IMPL(__imp__sub_83C52DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4360
	ctx.r3.s64 = ctx.r11.s64 + -4360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C52DAC"))) PPC_WEAK_FUNC(sub_83C52DAC);
PPC_FUNC_IMPL(__imp__sub_83C52DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52DB0"))) PPC_WEAK_FUNC(sub_83C52DB0);
PPC_FUNC_IMPL(__imp__sub_83C52DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4352
	ctx.r3.s64 = ctx.r11.s64 + -4352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C52DBC"))) PPC_WEAK_FUNC(sub_83C52DBC);
PPC_FUNC_IMPL(__imp__sub_83C52DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52DC0"))) PPC_WEAK_FUNC(sub_83C52DC0);
PPC_FUNC_IMPL(__imp__sub_83C52DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4344
	ctx.r3.s64 = ctx.r11.s64 + -4344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C52DCC"))) PPC_WEAK_FUNC(sub_83C52DCC);
PPC_FUNC_IMPL(__imp__sub_83C52DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52DD0"))) PPC_WEAK_FUNC(sub_83C52DD0);
PPC_FUNC_IMPL(__imp__sub_83C52DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-4336
	ctx.r3.s64 = ctx.r11.s64 + -4336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C52DDC"))) PPC_WEAK_FUNC(sub_83C52DDC);
PPC_FUNC_IMPL(__imp__sub_83C52DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C52DE0"))) PPC_WEAK_FUNC(sub_83C52DE0);
PPC_FUNC_IMPL(__imp__sub_83C52DE0) {
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
	// addi r3,r11,26800
	ctx.r3.s64 = ctx.r11.s64 + 26800;
	// bl 0x83523120
	ctx.lr = 0x83C52DF8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-4328
	ctx.r3.s64 = ctx.r10.s64 + -4328;
	// bl 0x831cdcc8
	ctx.lr = 0x83C52E04;
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

