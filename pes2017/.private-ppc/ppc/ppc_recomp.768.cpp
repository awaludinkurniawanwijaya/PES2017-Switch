#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C3C944"))) PPC_WEAK_FUNC(sub_83C3C944);
PPC_FUNC_IMPL(__imp__sub_83C3C944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C948"))) PPC_WEAK_FUNC(sub_83C3C948);
PPC_FUNC_IMPL(__imp__sub_83C3C948) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,32328
	ctx.r3.s64 = ctx.r11.s64 + 32328;
	// bl 0x8259af80
	ctx.lr = 0x83C3C960;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,32168
	ctx.r3.s64 = ctx.r10.s64 + 32168;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3C96C;
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

__attribute__((alias("__imp__sub_83C3C97C"))) PPC_WEAK_FUNC(sub_83C3C97C);
PPC_FUNC_IMPL(__imp__sub_83C3C97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C980"))) PPC_WEAK_FUNC(sub_83C3C980);
PPC_FUNC_IMPL(__imp__sub_83C3C980) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,32308
	ctx.r11.s64 = ctx.r8.s64 + 32308;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-17264(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17264);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,32160
	ctx.r3.s64 = ctx.r6.s64 + 32160;
	// stw r10,32308(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32308, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C9B0"))) PPC_WEAK_FUNC(sub_83C3C9B0);
PPC_FUNC_IMPL(__imp__sub_83C3C9B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32176
	ctx.r3.s64 = ctx.r11.s64 + 32176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C9BC"))) PPC_WEAK_FUNC(sub_83C3C9BC);
PPC_FUNC_IMPL(__imp__sub_83C3C9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C9C0"))) PPC_WEAK_FUNC(sub_83C3C9C0);
PPC_FUNC_IMPL(__imp__sub_83C3C9C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32184
	ctx.r3.s64 = ctx.r11.s64 + 32184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C9CC"))) PPC_WEAK_FUNC(sub_83C3C9CC);
PPC_FUNC_IMPL(__imp__sub_83C3C9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C9D0"))) PPC_WEAK_FUNC(sub_83C3C9D0);
PPC_FUNC_IMPL(__imp__sub_83C3C9D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32192
	ctx.r3.s64 = ctx.r11.s64 + 32192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C9DC"))) PPC_WEAK_FUNC(sub_83C3C9DC);
PPC_FUNC_IMPL(__imp__sub_83C3C9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C9E0"))) PPC_WEAK_FUNC(sub_83C3C9E0);
PPC_FUNC_IMPL(__imp__sub_83C3C9E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32200
	ctx.r3.s64 = ctx.r11.s64 + 32200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C9EC"))) PPC_WEAK_FUNC(sub_83C3C9EC);
PPC_FUNC_IMPL(__imp__sub_83C3C9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3C9F0"))) PPC_WEAK_FUNC(sub_83C3C9F0);
PPC_FUNC_IMPL(__imp__sub_83C3C9F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32208
	ctx.r3.s64 = ctx.r11.s64 + 32208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3C9FC"))) PPC_WEAK_FUNC(sub_83C3C9FC);
PPC_FUNC_IMPL(__imp__sub_83C3C9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CA00"))) PPC_WEAK_FUNC(sub_83C3CA00);
PPC_FUNC_IMPL(__imp__sub_83C3CA00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32216
	ctx.r3.s64 = ctx.r11.s64 + 32216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CA0C"))) PPC_WEAK_FUNC(sub_83C3CA0C);
PPC_FUNC_IMPL(__imp__sub_83C3CA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CA10"))) PPC_WEAK_FUNC(sub_83C3CA10);
PPC_FUNC_IMPL(__imp__sub_83C3CA10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32224
	ctx.r3.s64 = ctx.r11.s64 + 32224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CA1C"))) PPC_WEAK_FUNC(sub_83C3CA1C);
PPC_FUNC_IMPL(__imp__sub_83C3CA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CA20"))) PPC_WEAK_FUNC(sub_83C3CA20);
PPC_FUNC_IMPL(__imp__sub_83C3CA20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32232
	ctx.r3.s64 = ctx.r11.s64 + 32232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CA2C"))) PPC_WEAK_FUNC(sub_83C3CA2C);
PPC_FUNC_IMPL(__imp__sub_83C3CA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CA30"))) PPC_WEAK_FUNC(sub_83C3CA30);
PPC_FUNC_IMPL(__imp__sub_83C3CA30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32240
	ctx.r3.s64 = ctx.r11.s64 + 32240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CA3C"))) PPC_WEAK_FUNC(sub_83C3CA3C);
PPC_FUNC_IMPL(__imp__sub_83C3CA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CA40"))) PPC_WEAK_FUNC(sub_83C3CA40);
PPC_FUNC_IMPL(__imp__sub_83C3CA40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32248
	ctx.r3.s64 = ctx.r11.s64 + 32248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CA4C"))) PPC_WEAK_FUNC(sub_83C3CA4C);
PPC_FUNC_IMPL(__imp__sub_83C3CA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CA50"))) PPC_WEAK_FUNC(sub_83C3CA50);
PPC_FUNC_IMPL(__imp__sub_83C3CA50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32256
	ctx.r3.s64 = ctx.r11.s64 + 32256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CA5C"))) PPC_WEAK_FUNC(sub_83C3CA5C);
PPC_FUNC_IMPL(__imp__sub_83C3CA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CA60"))) PPC_WEAK_FUNC(sub_83C3CA60);
PPC_FUNC_IMPL(__imp__sub_83C3CA60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32264
	ctx.r3.s64 = ctx.r11.s64 + 32264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CA6C"))) PPC_WEAK_FUNC(sub_83C3CA6C);
PPC_FUNC_IMPL(__imp__sub_83C3CA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CA70"))) PPC_WEAK_FUNC(sub_83C3CA70);
PPC_FUNC_IMPL(__imp__sub_83C3CA70) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,32672
	ctx.r3.s64 = ctx.r11.s64 + 32672;
	// bl 0x83523120
	ctx.lr = 0x83C3CA88;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,32272
	ctx.r3.s64 = ctx.r10.s64 + 32272;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3CA94;
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

__attribute__((alias("__imp__sub_83C3CAA4"))) PPC_WEAK_FUNC(sub_83C3CAA4);
PPC_FUNC_IMPL(__imp__sub_83C3CAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CAA8"))) PPC_WEAK_FUNC(sub_83C3CAA8);
PPC_FUNC_IMPL(__imp__sub_83C3CAA8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,32688
	ctx.r7.s64 = ctx.r8.s64 + 32688;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,32688(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32688);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,32688(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32688, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C3CAD0"))) PPC_WEAK_FUNC(sub_83C3CAD0);
PPC_FUNC_IMPL(__imp__sub_83C3CAD0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-17112
	ctx.r6.s64 = ctx.r7.s64 + -17112;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-17184(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -17184);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,32688(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32688);
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
	// std r9,-17112(r7)
	PPC_STORE_U64(ctx.r7.u32 + -17112, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C3CB18"))) PPC_WEAK_FUNC(sub_83C3CB18);
PPC_FUNC_IMPL(__imp__sub_83C3CB18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32288
	ctx.r3.s64 = ctx.r11.s64 + 32288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CB24"))) PPC_WEAK_FUNC(sub_83C3CB24);
PPC_FUNC_IMPL(__imp__sub_83C3CB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CB28"))) PPC_WEAK_FUNC(sub_83C3CB28);
PPC_FUNC_IMPL(__imp__sub_83C3CB28) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,32696
	ctx.r3.s64 = ctx.r11.s64 + 32696;
	// bl 0x8259af80
	ctx.lr = 0x83C3CB40;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,32304
	ctx.r3.s64 = ctx.r10.s64 + 32304;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3CB4C;
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

__attribute__((alias("__imp__sub_83C3CB5C"))) PPC_WEAK_FUNC(sub_83C3CB5C);
PPC_FUNC_IMPL(__imp__sub_83C3CB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CB60"))) PPC_WEAK_FUNC(sub_83C3CB60);
PPC_FUNC_IMPL(__imp__sub_83C3CB60) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,32676
	ctx.r11.s64 = ctx.r8.s64 + 32676;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-17136(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17136);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,32296
	ctx.r3.s64 = ctx.r6.s64 + 32296;
	// stw r10,32676(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32676, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CB90"))) PPC_WEAK_FUNC(sub_83C3CB90);
PPC_FUNC_IMPL(__imp__sub_83C3CB90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32312
	ctx.r3.s64 = ctx.r11.s64 + 32312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CB9C"))) PPC_WEAK_FUNC(sub_83C3CB9C);
PPC_FUNC_IMPL(__imp__sub_83C3CB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CBA0"))) PPC_WEAK_FUNC(sub_83C3CBA0);
PPC_FUNC_IMPL(__imp__sub_83C3CBA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32320
	ctx.r3.s64 = ctx.r11.s64 + 32320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CBAC"))) PPC_WEAK_FUNC(sub_83C3CBAC);
PPC_FUNC_IMPL(__imp__sub_83C3CBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CBB0"))) PPC_WEAK_FUNC(sub_83C3CBB0);
PPC_FUNC_IMPL(__imp__sub_83C3CBB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32328
	ctx.r3.s64 = ctx.r11.s64 + 32328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CBBC"))) PPC_WEAK_FUNC(sub_83C3CBBC);
PPC_FUNC_IMPL(__imp__sub_83C3CBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CBC0"))) PPC_WEAK_FUNC(sub_83C3CBC0);
PPC_FUNC_IMPL(__imp__sub_83C3CBC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32336
	ctx.r3.s64 = ctx.r11.s64 + 32336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CBCC"))) PPC_WEAK_FUNC(sub_83C3CBCC);
PPC_FUNC_IMPL(__imp__sub_83C3CBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CBD0"))) PPC_WEAK_FUNC(sub_83C3CBD0);
PPC_FUNC_IMPL(__imp__sub_83C3CBD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32344
	ctx.r3.s64 = ctx.r11.s64 + 32344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CBDC"))) PPC_WEAK_FUNC(sub_83C3CBDC);
PPC_FUNC_IMPL(__imp__sub_83C3CBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CBE0"))) PPC_WEAK_FUNC(sub_83C3CBE0);
PPC_FUNC_IMPL(__imp__sub_83C3CBE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32352
	ctx.r3.s64 = ctx.r11.s64 + 32352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CBEC"))) PPC_WEAK_FUNC(sub_83C3CBEC);
PPC_FUNC_IMPL(__imp__sub_83C3CBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CBF0"))) PPC_WEAK_FUNC(sub_83C3CBF0);
PPC_FUNC_IMPL(__imp__sub_83C3CBF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32360
	ctx.r3.s64 = ctx.r11.s64 + 32360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CBFC"))) PPC_WEAK_FUNC(sub_83C3CBFC);
PPC_FUNC_IMPL(__imp__sub_83C3CBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CC00"))) PPC_WEAK_FUNC(sub_83C3CC00);
PPC_FUNC_IMPL(__imp__sub_83C3CC00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32368
	ctx.r3.s64 = ctx.r11.s64 + 32368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CC0C"))) PPC_WEAK_FUNC(sub_83C3CC0C);
PPC_FUNC_IMPL(__imp__sub_83C3CC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CC10"))) PPC_WEAK_FUNC(sub_83C3CC10);
PPC_FUNC_IMPL(__imp__sub_83C3CC10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32376
	ctx.r3.s64 = ctx.r11.s64 + 32376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CC1C"))) PPC_WEAK_FUNC(sub_83C3CC1C);
PPC_FUNC_IMPL(__imp__sub_83C3CC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CC20"))) PPC_WEAK_FUNC(sub_83C3CC20);
PPC_FUNC_IMPL(__imp__sub_83C3CC20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32384
	ctx.r3.s64 = ctx.r11.s64 + 32384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CC2C"))) PPC_WEAK_FUNC(sub_83C3CC2C);
PPC_FUNC_IMPL(__imp__sub_83C3CC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CC30"))) PPC_WEAK_FUNC(sub_83C3CC30);
PPC_FUNC_IMPL(__imp__sub_83C3CC30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32392
	ctx.r3.s64 = ctx.r11.s64 + 32392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CC3C"))) PPC_WEAK_FUNC(sub_83C3CC3C);
PPC_FUNC_IMPL(__imp__sub_83C3CC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CC40"))) PPC_WEAK_FUNC(sub_83C3CC40);
PPC_FUNC_IMPL(__imp__sub_83C3CC40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32400
	ctx.r3.s64 = ctx.r11.s64 + 32400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CC4C"))) PPC_WEAK_FUNC(sub_83C3CC4C);
PPC_FUNC_IMPL(__imp__sub_83C3CC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CC50"))) PPC_WEAK_FUNC(sub_83C3CC50);
PPC_FUNC_IMPL(__imp__sub_83C3CC50) {
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
	// addi r3,r11,-32496
	ctx.r3.s64 = ctx.r11.s64 + -32496;
	// bl 0x83523120
	ctx.lr = 0x83C3CC68;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,32408
	ctx.r3.s64 = ctx.r10.s64 + 32408;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3CC74;
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

__attribute__((alias("__imp__sub_83C3CC84"))) PPC_WEAK_FUNC(sub_83C3CC84);
PPC_FUNC_IMPL(__imp__sub_83C3CC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CC88"))) PPC_WEAK_FUNC(sub_83C3CC88);
PPC_FUNC_IMPL(__imp__sub_83C3CC88) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-32480
	ctx.r7.s64 = ctx.r8.s64 + -32480;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-32480(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32480);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-32480(r8)
	PPC_STORE_U32(ctx.r8.u32 + -32480, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C3CCB0"))) PPC_WEAK_FUNC(sub_83C3CCB0);
PPC_FUNC_IMPL(__imp__sub_83C3CCB0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-16984
	ctx.r6.s64 = ctx.r7.s64 + -16984;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-17056(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -17056);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-32480(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -32480);
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
	// std r9,-16984(r7)
	PPC_STORE_U64(ctx.r7.u32 + -16984, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C3CCF8"))) PPC_WEAK_FUNC(sub_83C3CCF8);
PPC_FUNC_IMPL(__imp__sub_83C3CCF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32424
	ctx.r3.s64 = ctx.r11.s64 + 32424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CD04"))) PPC_WEAK_FUNC(sub_83C3CD04);
PPC_FUNC_IMPL(__imp__sub_83C3CD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CD08"))) PPC_WEAK_FUNC(sub_83C3CD08);
PPC_FUNC_IMPL(__imp__sub_83C3CD08) {
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
	// addi r3,r11,-32472
	ctx.r3.s64 = ctx.r11.s64 + -32472;
	// bl 0x8259af80
	ctx.lr = 0x83C3CD20;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,32440
	ctx.r3.s64 = ctx.r10.s64 + 32440;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3CD2C;
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

__attribute__((alias("__imp__sub_83C3CD3C"))) PPC_WEAK_FUNC(sub_83C3CD3C);
PPC_FUNC_IMPL(__imp__sub_83C3CD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CD40"))) PPC_WEAK_FUNC(sub_83C3CD40);
PPC_FUNC_IMPL(__imp__sub_83C3CD40) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-32492
	ctx.r11.s64 = ctx.r8.s64 + -32492;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,-17008(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17008);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,32432
	ctx.r3.s64 = ctx.r6.s64 + 32432;
	// stw r10,-32492(r8)
	PPC_STORE_U32(ctx.r8.u32 + -32492, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CD70"))) PPC_WEAK_FUNC(sub_83C3CD70);
PPC_FUNC_IMPL(__imp__sub_83C3CD70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32448
	ctx.r3.s64 = ctx.r11.s64 + 32448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CD7C"))) PPC_WEAK_FUNC(sub_83C3CD7C);
PPC_FUNC_IMPL(__imp__sub_83C3CD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CD80"))) PPC_WEAK_FUNC(sub_83C3CD80);
PPC_FUNC_IMPL(__imp__sub_83C3CD80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32456
	ctx.r3.s64 = ctx.r11.s64 + 32456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CD8C"))) PPC_WEAK_FUNC(sub_83C3CD8C);
PPC_FUNC_IMPL(__imp__sub_83C3CD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CD90"))) PPC_WEAK_FUNC(sub_83C3CD90);
PPC_FUNC_IMPL(__imp__sub_83C3CD90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32464
	ctx.r3.s64 = ctx.r11.s64 + 32464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CD9C"))) PPC_WEAK_FUNC(sub_83C3CD9C);
PPC_FUNC_IMPL(__imp__sub_83C3CD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CDA0"))) PPC_WEAK_FUNC(sub_83C3CDA0);
PPC_FUNC_IMPL(__imp__sub_83C3CDA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32472
	ctx.r3.s64 = ctx.r11.s64 + 32472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CDAC"))) PPC_WEAK_FUNC(sub_83C3CDAC);
PPC_FUNC_IMPL(__imp__sub_83C3CDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CDB0"))) PPC_WEAK_FUNC(sub_83C3CDB0);
PPC_FUNC_IMPL(__imp__sub_83C3CDB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32480
	ctx.r3.s64 = ctx.r11.s64 + 32480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CDBC"))) PPC_WEAK_FUNC(sub_83C3CDBC);
PPC_FUNC_IMPL(__imp__sub_83C3CDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CDC0"))) PPC_WEAK_FUNC(sub_83C3CDC0);
PPC_FUNC_IMPL(__imp__sub_83C3CDC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32488
	ctx.r3.s64 = ctx.r11.s64 + 32488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CDCC"))) PPC_WEAK_FUNC(sub_83C3CDCC);
PPC_FUNC_IMPL(__imp__sub_83C3CDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CDD0"))) PPC_WEAK_FUNC(sub_83C3CDD0);
PPC_FUNC_IMPL(__imp__sub_83C3CDD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32496
	ctx.r3.s64 = ctx.r11.s64 + 32496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CDDC"))) PPC_WEAK_FUNC(sub_83C3CDDC);
PPC_FUNC_IMPL(__imp__sub_83C3CDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CDE0"))) PPC_WEAK_FUNC(sub_83C3CDE0);
PPC_FUNC_IMPL(__imp__sub_83C3CDE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32504
	ctx.r3.s64 = ctx.r11.s64 + 32504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CDEC"))) PPC_WEAK_FUNC(sub_83C3CDEC);
PPC_FUNC_IMPL(__imp__sub_83C3CDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CDF0"))) PPC_WEAK_FUNC(sub_83C3CDF0);
PPC_FUNC_IMPL(__imp__sub_83C3CDF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32512
	ctx.r3.s64 = ctx.r11.s64 + 32512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CDFC"))) PPC_WEAK_FUNC(sub_83C3CDFC);
PPC_FUNC_IMPL(__imp__sub_83C3CDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CE00"))) PPC_WEAK_FUNC(sub_83C3CE00);
PPC_FUNC_IMPL(__imp__sub_83C3CE00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32520
	ctx.r3.s64 = ctx.r11.s64 + 32520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CE0C"))) PPC_WEAK_FUNC(sub_83C3CE0C);
PPC_FUNC_IMPL(__imp__sub_83C3CE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CE10"))) PPC_WEAK_FUNC(sub_83C3CE10);
PPC_FUNC_IMPL(__imp__sub_83C3CE10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32528
	ctx.r3.s64 = ctx.r11.s64 + 32528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CE1C"))) PPC_WEAK_FUNC(sub_83C3CE1C);
PPC_FUNC_IMPL(__imp__sub_83C3CE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CE20"))) PPC_WEAK_FUNC(sub_83C3CE20);
PPC_FUNC_IMPL(__imp__sub_83C3CE20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32536
	ctx.r3.s64 = ctx.r11.s64 + 32536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CE2C"))) PPC_WEAK_FUNC(sub_83C3CE2C);
PPC_FUNC_IMPL(__imp__sub_83C3CE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CE30"))) PPC_WEAK_FUNC(sub_83C3CE30);
PPC_FUNC_IMPL(__imp__sub_83C3CE30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32544
	ctx.r3.s64 = ctx.r11.s64 + 32544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CE3C"))) PPC_WEAK_FUNC(sub_83C3CE3C);
PPC_FUNC_IMPL(__imp__sub_83C3CE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CE40"))) PPC_WEAK_FUNC(sub_83C3CE40);
PPC_FUNC_IMPL(__imp__sub_83C3CE40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32552
	ctx.r3.s64 = ctx.r11.s64 + 32552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CE4C"))) PPC_WEAK_FUNC(sub_83C3CE4C);
PPC_FUNC_IMPL(__imp__sub_83C3CE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CE50"))) PPC_WEAK_FUNC(sub_83C3CE50);
PPC_FUNC_IMPL(__imp__sub_83C3CE50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32560
	ctx.r3.s64 = ctx.r11.s64 + 32560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CE5C"))) PPC_WEAK_FUNC(sub_83C3CE5C);
PPC_FUNC_IMPL(__imp__sub_83C3CE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CE60"))) PPC_WEAK_FUNC(sub_83C3CE60);
PPC_FUNC_IMPL(__imp__sub_83C3CE60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32568
	ctx.r3.s64 = ctx.r11.s64 + 32568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CE6C"))) PPC_WEAK_FUNC(sub_83C3CE6C);
PPC_FUNC_IMPL(__imp__sub_83C3CE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CE70"))) PPC_WEAK_FUNC(sub_83C3CE70);
PPC_FUNC_IMPL(__imp__sub_83C3CE70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32576
	ctx.r3.s64 = ctx.r11.s64 + 32576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CE7C"))) PPC_WEAK_FUNC(sub_83C3CE7C);
PPC_FUNC_IMPL(__imp__sub_83C3CE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CE80"))) PPC_WEAK_FUNC(sub_83C3CE80);
PPC_FUNC_IMPL(__imp__sub_83C3CE80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32584
	ctx.r3.s64 = ctx.r11.s64 + 32584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CE8C"))) PPC_WEAK_FUNC(sub_83C3CE8C);
PPC_FUNC_IMPL(__imp__sub_83C3CE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CE90"))) PPC_WEAK_FUNC(sub_83C3CE90);
PPC_FUNC_IMPL(__imp__sub_83C3CE90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32592
	ctx.r3.s64 = ctx.r11.s64 + 32592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CE9C"))) PPC_WEAK_FUNC(sub_83C3CE9C);
PPC_FUNC_IMPL(__imp__sub_83C3CE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CEA0"))) PPC_WEAK_FUNC(sub_83C3CEA0);
PPC_FUNC_IMPL(__imp__sub_83C3CEA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32600
	ctx.r3.s64 = ctx.r11.s64 + 32600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CEAC"))) PPC_WEAK_FUNC(sub_83C3CEAC);
PPC_FUNC_IMPL(__imp__sub_83C3CEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CEB0"))) PPC_WEAK_FUNC(sub_83C3CEB0);
PPC_FUNC_IMPL(__imp__sub_83C3CEB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32608
	ctx.r3.s64 = ctx.r11.s64 + 32608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CEBC"))) PPC_WEAK_FUNC(sub_83C3CEBC);
PPC_FUNC_IMPL(__imp__sub_83C3CEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CEC0"))) PPC_WEAK_FUNC(sub_83C3CEC0);
PPC_FUNC_IMPL(__imp__sub_83C3CEC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32616
	ctx.r3.s64 = ctx.r11.s64 + 32616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CECC"))) PPC_WEAK_FUNC(sub_83C3CECC);
PPC_FUNC_IMPL(__imp__sub_83C3CECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CED0"))) PPC_WEAK_FUNC(sub_83C3CED0);
PPC_FUNC_IMPL(__imp__sub_83C3CED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32624
	ctx.r3.s64 = ctx.r11.s64 + 32624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CEDC"))) PPC_WEAK_FUNC(sub_83C3CEDC);
PPC_FUNC_IMPL(__imp__sub_83C3CEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CEE0"))) PPC_WEAK_FUNC(sub_83C3CEE0);
PPC_FUNC_IMPL(__imp__sub_83C3CEE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32632
	ctx.r3.s64 = ctx.r11.s64 + 32632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CEEC"))) PPC_WEAK_FUNC(sub_83C3CEEC);
PPC_FUNC_IMPL(__imp__sub_83C3CEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CEF0"))) PPC_WEAK_FUNC(sub_83C3CEF0);
PPC_FUNC_IMPL(__imp__sub_83C3CEF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32640
	ctx.r3.s64 = ctx.r11.s64 + 32640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CEFC"))) PPC_WEAK_FUNC(sub_83C3CEFC);
PPC_FUNC_IMPL(__imp__sub_83C3CEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CF00"))) PPC_WEAK_FUNC(sub_83C3CF00);
PPC_FUNC_IMPL(__imp__sub_83C3CF00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32648
	ctx.r3.s64 = ctx.r11.s64 + 32648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CF0C"))) PPC_WEAK_FUNC(sub_83C3CF0C);
PPC_FUNC_IMPL(__imp__sub_83C3CF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CF10"))) PPC_WEAK_FUNC(sub_83C3CF10);
PPC_FUNC_IMPL(__imp__sub_83C3CF10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32656
	ctx.r3.s64 = ctx.r11.s64 + 32656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CF1C"))) PPC_WEAK_FUNC(sub_83C3CF1C);
PPC_FUNC_IMPL(__imp__sub_83C3CF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CF20"))) PPC_WEAK_FUNC(sub_83C3CF20);
PPC_FUNC_IMPL(__imp__sub_83C3CF20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32664
	ctx.r3.s64 = ctx.r11.s64 + 32664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CF2C"))) PPC_WEAK_FUNC(sub_83C3CF2C);
PPC_FUNC_IMPL(__imp__sub_83C3CF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CF30"))) PPC_WEAK_FUNC(sub_83C3CF30);
PPC_FUNC_IMPL(__imp__sub_83C3CF30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32672
	ctx.r3.s64 = ctx.r11.s64 + 32672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CF3C"))) PPC_WEAK_FUNC(sub_83C3CF3C);
PPC_FUNC_IMPL(__imp__sub_83C3CF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CF40"))) PPC_WEAK_FUNC(sub_83C3CF40);
PPC_FUNC_IMPL(__imp__sub_83C3CF40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32680
	ctx.r3.s64 = ctx.r11.s64 + 32680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CF4C"))) PPC_WEAK_FUNC(sub_83C3CF4C);
PPC_FUNC_IMPL(__imp__sub_83C3CF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CF50"))) PPC_WEAK_FUNC(sub_83C3CF50);
PPC_FUNC_IMPL(__imp__sub_83C3CF50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32688
	ctx.r3.s64 = ctx.r11.s64 + 32688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CF5C"))) PPC_WEAK_FUNC(sub_83C3CF5C);
PPC_FUNC_IMPL(__imp__sub_83C3CF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CF60"))) PPC_WEAK_FUNC(sub_83C3CF60);
PPC_FUNC_IMPL(__imp__sub_83C3CF60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32696
	ctx.r3.s64 = ctx.r11.s64 + 32696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CF6C"))) PPC_WEAK_FUNC(sub_83C3CF6C);
PPC_FUNC_IMPL(__imp__sub_83C3CF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CF70"))) PPC_WEAK_FUNC(sub_83C3CF70);
PPC_FUNC_IMPL(__imp__sub_83C3CF70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32704
	ctx.r3.s64 = ctx.r11.s64 + 32704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CF7C"))) PPC_WEAK_FUNC(sub_83C3CF7C);
PPC_FUNC_IMPL(__imp__sub_83C3CF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CF80"))) PPC_WEAK_FUNC(sub_83C3CF80);
PPC_FUNC_IMPL(__imp__sub_83C3CF80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32712
	ctx.r3.s64 = ctx.r11.s64 + 32712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CF8C"))) PPC_WEAK_FUNC(sub_83C3CF8C);
PPC_FUNC_IMPL(__imp__sub_83C3CF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CF90"))) PPC_WEAK_FUNC(sub_83C3CF90);
PPC_FUNC_IMPL(__imp__sub_83C3CF90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32720
	ctx.r3.s64 = ctx.r11.s64 + 32720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CF9C"))) PPC_WEAK_FUNC(sub_83C3CF9C);
PPC_FUNC_IMPL(__imp__sub_83C3CF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CFA0"))) PPC_WEAK_FUNC(sub_83C3CFA0);
PPC_FUNC_IMPL(__imp__sub_83C3CFA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,32728
	ctx.r3.s64 = ctx.r11.s64 + 32728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3CFAC"))) PPC_WEAK_FUNC(sub_83C3CFAC);
PPC_FUNC_IMPL(__imp__sub_83C3CFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CFB0"))) PPC_WEAK_FUNC(sub_83C3CFB0);
PPC_FUNC_IMPL(__imp__sub_83C3CFB0) {
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
	// addi r3,r11,-32080
	ctx.r3.s64 = ctx.r11.s64 + -32080;
	// bl 0x82ef29e0
	ctx.lr = 0x83C3CFC8;
	sub_82EF29E0(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,32736
	ctx.r3.s64 = ctx.r10.s64 + 32736;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3CFD4;
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

__attribute__((alias("__imp__sub_83C3CFE4"))) PPC_WEAK_FUNC(sub_83C3CFE4);
PPC_FUNC_IMPL(__imp__sub_83C3CFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3CFE8"))) PPC_WEAK_FUNC(sub_83C3CFE8);
PPC_FUNC_IMPL(__imp__sub_83C3CFE8) {
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
	// addi r3,r11,-32116
	ctx.r3.s64 = ctx.r11.s64 + -32116;
	// bl 0x82596fa8
	ctx.lr = 0x83C3D000;
	sub_82596FA8(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,32752
	ctx.r3.s64 = ctx.r10.s64 + 32752;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3D00C;
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

__attribute__((alias("__imp__sub_83C3D01C"))) PPC_WEAK_FUNC(sub_83C3D01C);
PPC_FUNC_IMPL(__imp__sub_83C3D01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D020"))) PPC_WEAK_FUNC(sub_83C3D020);
PPC_FUNC_IMPL(__imp__sub_83C3D020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-32768
	ctx.r3.s64 = ctx.r11.s64 + -32768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3D02C"))) PPC_WEAK_FUNC(sub_83C3D02C);
PPC_FUNC_IMPL(__imp__sub_83C3D02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D030"))) PPC_WEAK_FUNC(sub_83C3D030);
PPC_FUNC_IMPL(__imp__sub_83C3D030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-32760
	ctx.r3.s64 = ctx.r11.s64 + -32760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3D03C"))) PPC_WEAK_FUNC(sub_83C3D03C);
PPC_FUNC_IMPL(__imp__sub_83C3D03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D040"))) PPC_WEAK_FUNC(sub_83C3D040);
PPC_FUNC_IMPL(__imp__sub_83C3D040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-32752
	ctx.r3.s64 = ctx.r11.s64 + -32752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3D04C"))) PPC_WEAK_FUNC(sub_83C3D04C);
PPC_FUNC_IMPL(__imp__sub_83C3D04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D050"))) PPC_WEAK_FUNC(sub_83C3D050);
PPC_FUNC_IMPL(__imp__sub_83C3D050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-32744
	ctx.r3.s64 = ctx.r11.s64 + -32744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3D05C"))) PPC_WEAK_FUNC(sub_83C3D05C);
PPC_FUNC_IMPL(__imp__sub_83C3D05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D060"))) PPC_WEAK_FUNC(sub_83C3D060);
PPC_FUNC_IMPL(__imp__sub_83C3D060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-32736
	ctx.r3.s64 = ctx.r11.s64 + -32736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3D06C"))) PPC_WEAK_FUNC(sub_83C3D06C);
PPC_FUNC_IMPL(__imp__sub_83C3D06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D070"))) PPC_WEAK_FUNC(sub_83C3D070);
PPC_FUNC_IMPL(__imp__sub_83C3D070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-32728
	ctx.r3.s64 = ctx.r11.s64 + -32728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3D07C"))) PPC_WEAK_FUNC(sub_83C3D07C);
PPC_FUNC_IMPL(__imp__sub_83C3D07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D080"))) PPC_WEAK_FUNC(sub_83C3D080);
PPC_FUNC_IMPL(__imp__sub_83C3D080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-32720
	ctx.r3.s64 = ctx.r11.s64 + -32720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3D08C"))) PPC_WEAK_FUNC(sub_83C3D08C);
PPC_FUNC_IMPL(__imp__sub_83C3D08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D090"))) PPC_WEAK_FUNC(sub_83C3D090);
PPC_FUNC_IMPL(__imp__sub_83C3D090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-32712
	ctx.r3.s64 = ctx.r11.s64 + -32712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3D09C"))) PPC_WEAK_FUNC(sub_83C3D09C);
PPC_FUNC_IMPL(__imp__sub_83C3D09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D0A0"))) PPC_WEAK_FUNC(sub_83C3D0A0);
PPC_FUNC_IMPL(__imp__sub_83C3D0A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-32704
	ctx.r3.s64 = ctx.r11.s64 + -32704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3D0AC"))) PPC_WEAK_FUNC(sub_83C3D0AC);
PPC_FUNC_IMPL(__imp__sub_83C3D0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D0B0"))) PPC_WEAK_FUNC(sub_83C3D0B0);
PPC_FUNC_IMPL(__imp__sub_83C3D0B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-32696
	ctx.r3.s64 = ctx.r11.s64 + -32696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3D0BC"))) PPC_WEAK_FUNC(sub_83C3D0BC);
PPC_FUNC_IMPL(__imp__sub_83C3D0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D0C0"))) PPC_WEAK_FUNC(sub_83C3D0C0);
PPC_FUNC_IMPL(__imp__sub_83C3D0C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-32688
	ctx.r3.s64 = ctx.r11.s64 + -32688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3D0CC"))) PPC_WEAK_FUNC(sub_83C3D0CC);
PPC_FUNC_IMPL(__imp__sub_83C3D0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D0D0"))) PPC_WEAK_FUNC(sub_83C3D0D0);
PPC_FUNC_IMPL(__imp__sub_83C3D0D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-32680
	ctx.r3.s64 = ctx.r11.s64 + -32680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3D0DC"))) PPC_WEAK_FUNC(sub_83C3D0DC);
PPC_FUNC_IMPL(__imp__sub_83C3D0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D0E0"))) PPC_WEAK_FUNC(sub_83C3D0E0);
PPC_FUNC_IMPL(__imp__sub_83C3D0E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-32672
	ctx.r3.s64 = ctx.r11.s64 + -32672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3D0EC"))) PPC_WEAK_FUNC(sub_83C3D0EC);
PPC_FUNC_IMPL(__imp__sub_83C3D0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D0F0"))) PPC_WEAK_FUNC(sub_83C3D0F0);
PPC_FUNC_IMPL(__imp__sub_83C3D0F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-32664
	ctx.r3.s64 = ctx.r11.s64 + -32664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3D0FC"))) PPC_WEAK_FUNC(sub_83C3D0FC);
PPC_FUNC_IMPL(__imp__sub_83C3D0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D100"))) PPC_WEAK_FUNC(sub_83C3D100);
PPC_FUNC_IMPL(__imp__sub_83C3D100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-32656
	ctx.r3.s64 = ctx.r11.s64 + -32656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3D10C"))) PPC_WEAK_FUNC(sub_83C3D10C);
PPC_FUNC_IMPL(__imp__sub_83C3D10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D110"))) PPC_WEAK_FUNC(sub_83C3D110);
PPC_FUNC_IMPL(__imp__sub_83C3D110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-32648
	ctx.r3.s64 = ctx.r11.s64 + -32648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3D11C"))) PPC_WEAK_FUNC(sub_83C3D11C);
PPC_FUNC_IMPL(__imp__sub_83C3D11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D120"))) PPC_WEAK_FUNC(sub_83C3D120);
PPC_FUNC_IMPL(__imp__sub_83C3D120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-32640
	ctx.r3.s64 = ctx.r11.s64 + -32640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3D12C"))) PPC_WEAK_FUNC(sub_83C3D12C);
PPC_FUNC_IMPL(__imp__sub_83C3D12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D130"))) PPC_WEAK_FUNC(sub_83C3D130);
PPC_FUNC_IMPL(__imp__sub_83C3D130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-32632
	ctx.r3.s64 = ctx.r11.s64 + -32632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3D13C"))) PPC_WEAK_FUNC(sub_83C3D13C);
PPC_FUNC_IMPL(__imp__sub_83C3D13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D140"))) PPC_WEAK_FUNC(sub_83C3D140);
PPC_FUNC_IMPL(__imp__sub_83C3D140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-32624
	ctx.r3.s64 = ctx.r11.s64 + -32624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3D14C"))) PPC_WEAK_FUNC(sub_83C3D14C);
PPC_FUNC_IMPL(__imp__sub_83C3D14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D150"))) PPC_WEAK_FUNC(sub_83C3D150);
PPC_FUNC_IMPL(__imp__sub_83C3D150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-32616
	ctx.r3.s64 = ctx.r11.s64 + -32616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3D15C"))) PPC_WEAK_FUNC(sub_83C3D15C);
PPC_FUNC_IMPL(__imp__sub_83C3D15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D160"))) PPC_WEAK_FUNC(sub_83C3D160);
PPC_FUNC_IMPL(__imp__sub_83C3D160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-32608
	ctx.r3.s64 = ctx.r11.s64 + -32608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3D16C"))) PPC_WEAK_FUNC(sub_83C3D16C);
PPC_FUNC_IMPL(__imp__sub_83C3D16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D170"))) PPC_WEAK_FUNC(sub_83C3D170);
PPC_FUNC_IMPL(__imp__sub_83C3D170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-32600
	ctx.r3.s64 = ctx.r11.s64 + -32600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3D17C"))) PPC_WEAK_FUNC(sub_83C3D17C);
PPC_FUNC_IMPL(__imp__sub_83C3D17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D180"))) PPC_WEAK_FUNC(sub_83C3D180);
PPC_FUNC_IMPL(__imp__sub_83C3D180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-32592
	ctx.r3.s64 = ctx.r11.s64 + -32592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3D18C"))) PPC_WEAK_FUNC(sub_83C3D18C);
PPC_FUNC_IMPL(__imp__sub_83C3D18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D190"))) PPC_WEAK_FUNC(sub_83C3D190);
PPC_FUNC_IMPL(__imp__sub_83C3D190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-32584
	ctx.r3.s64 = ctx.r11.s64 + -32584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3D19C"))) PPC_WEAK_FUNC(sub_83C3D19C);
PPC_FUNC_IMPL(__imp__sub_83C3D19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D1A0"))) PPC_WEAK_FUNC(sub_83C3D1A0);
PPC_FUNC_IMPL(__imp__sub_83C3D1A0) {
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
	// addi r3,r11,-32056
	ctx.r3.s64 = ctx.r11.s64 + -32056;
	// bl 0x83523120
	ctx.lr = 0x83C3D1B8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-32576
	ctx.r3.s64 = ctx.r10.s64 + -32576;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3D1C4;
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

__attribute__((alias("__imp__sub_83C3D1D4"))) PPC_WEAK_FUNC(sub_83C3D1D4);
PPC_FUNC_IMPL(__imp__sub_83C3D1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D1D8"))) PPC_WEAK_FUNC(sub_83C3D1D8);
PPC_FUNC_IMPL(__imp__sub_83C3D1D8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-32040
	ctx.r7.s64 = ctx.r8.s64 + -32040;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-32040(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32040);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-32040(r8)
	PPC_STORE_U32(ctx.r8.u32 + -32040, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C3D200"))) PPC_WEAK_FUNC(sub_83C3D200);
PPC_FUNC_IMPL(__imp__sub_83C3D200) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-16424
	ctx.r6.s64 = ctx.r7.s64 + -16424;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-16496(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -16496);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-32040(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -32040);
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
	// std r9,-16424(r7)
	PPC_STORE_U64(ctx.r7.u32 + -16424, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C3D248"))) PPC_WEAK_FUNC(sub_83C3D248);
PPC_FUNC_IMPL(__imp__sub_83C3D248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-32560
	ctx.r3.s64 = ctx.r11.s64 + -32560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3D254"))) PPC_WEAK_FUNC(sub_83C3D254);
PPC_FUNC_IMPL(__imp__sub_83C3D254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D258"))) PPC_WEAK_FUNC(sub_83C3D258);
PPC_FUNC_IMPL(__imp__sub_83C3D258) {
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
	// addi r3,r11,-32032
	ctx.r3.s64 = ctx.r11.s64 + -32032;
	// bl 0x8259af80
	ctx.lr = 0x83C3D270;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-32544
	ctx.r3.s64 = ctx.r10.s64 + -32544;
	// bl 0x831cdcc8
	ctx.lr = 0x83C3D27C;
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

__attribute__((alias("__imp__sub_83C3D28C"))) PPC_WEAK_FUNC(sub_83C3D28C);
PPC_FUNC_IMPL(__imp__sub_83C3D28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D290"))) PPC_WEAK_FUNC(sub_83C3D290);
PPC_FUNC_IMPL(__imp__sub_83C3D290) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-32052
	ctx.r11.s64 = ctx.r8.s64 + -32052;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-16448(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16448);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-32552
	ctx.r3.s64 = ctx.r6.s64 + -32552;
	// stw r10,-32052(r8)
	PPC_STORE_U32(ctx.r8.u32 + -32052, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3D2C0"))) PPC_WEAK_FUNC(sub_83C3D2C0);
PPC_FUNC_IMPL(__imp__sub_83C3D2C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-32536
	ctx.r3.s64 = ctx.r11.s64 + -32536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3D2CC"))) PPC_WEAK_FUNC(sub_83C3D2CC);
PPC_FUNC_IMPL(__imp__sub_83C3D2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D2D0"))) PPC_WEAK_FUNC(sub_83C3D2D0);
PPC_FUNC_IMPL(__imp__sub_83C3D2D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-32528
	ctx.r3.s64 = ctx.r11.s64 + -32528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3D2DC"))) PPC_WEAK_FUNC(sub_83C3D2DC);
PPC_FUNC_IMPL(__imp__sub_83C3D2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D2E0"))) PPC_WEAK_FUNC(sub_83C3D2E0);
PPC_FUNC_IMPL(__imp__sub_83C3D2E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-32520
	ctx.r3.s64 = ctx.r11.s64 + -32520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3D2EC"))) PPC_WEAK_FUNC(sub_83C3D2EC);
PPC_FUNC_IMPL(__imp__sub_83C3D2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D2F0"))) PPC_WEAK_FUNC(sub_83C3D2F0);
PPC_FUNC_IMPL(__imp__sub_83C3D2F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-32512
	ctx.r3.s64 = ctx.r11.s64 + -32512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3D2FC"))) PPC_WEAK_FUNC(sub_83C3D2FC);
PPC_FUNC_IMPL(__imp__sub_83C3D2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D300"))) PPC_WEAK_FUNC(sub_83C3D300);
PPC_FUNC_IMPL(__imp__sub_83C3D300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-32504
	ctx.r3.s64 = ctx.r11.s64 + -32504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3D30C"))) PPC_WEAK_FUNC(sub_83C3D30C);
PPC_FUNC_IMPL(__imp__sub_83C3D30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D310"))) PPC_WEAK_FUNC(sub_83C3D310);
PPC_FUNC_IMPL(__imp__sub_83C3D310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-32496
	ctx.r3.s64 = ctx.r11.s64 + -32496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3D31C"))) PPC_WEAK_FUNC(sub_83C3D31C);
PPC_FUNC_IMPL(__imp__sub_83C3D31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D320"))) PPC_WEAK_FUNC(sub_83C3D320);
PPC_FUNC_IMPL(__imp__sub_83C3D320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-32488
	ctx.r3.s64 = ctx.r11.s64 + -32488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3D32C"))) PPC_WEAK_FUNC(sub_83C3D32C);
PPC_FUNC_IMPL(__imp__sub_83C3D32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D330"))) PPC_WEAK_FUNC(sub_83C3D330);
PPC_FUNC_IMPL(__imp__sub_83C3D330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-32480
	ctx.r3.s64 = ctx.r11.s64 + -32480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3D33C"))) PPC_WEAK_FUNC(sub_83C3D33C);
PPC_FUNC_IMPL(__imp__sub_83C3D33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D340"))) PPC_WEAK_FUNC(sub_83C3D340);
PPC_FUNC_IMPL(__imp__sub_83C3D340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-32472
	ctx.r3.s64 = ctx.r11.s64 + -32472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3D34C"))) PPC_WEAK_FUNC(sub_83C3D34C);
PPC_FUNC_IMPL(__imp__sub_83C3D34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D350"))) PPC_WEAK_FUNC(sub_83C3D350);
PPC_FUNC_IMPL(__imp__sub_83C3D350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-32464
	ctx.r3.s64 = ctx.r11.s64 + -32464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3D35C"))) PPC_WEAK_FUNC(sub_83C3D35C);
PPC_FUNC_IMPL(__imp__sub_83C3D35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D360"))) PPC_WEAK_FUNC(sub_83C3D360);
PPC_FUNC_IMPL(__imp__sub_83C3D360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-32456
	ctx.r3.s64 = ctx.r11.s64 + -32456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3D36C"))) PPC_WEAK_FUNC(sub_83C3D36C);
PPC_FUNC_IMPL(__imp__sub_83C3D36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D370"))) PPC_WEAK_FUNC(sub_83C3D370);
PPC_FUNC_IMPL(__imp__sub_83C3D370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-32448
	ctx.r3.s64 = ctx.r11.s64 + -32448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3D37C"))) PPC_WEAK_FUNC(sub_83C3D37C);
PPC_FUNC_IMPL(__imp__sub_83C3D37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D380"))) PPC_WEAK_FUNC(sub_83C3D380);
PPC_FUNC_IMPL(__imp__sub_83C3D380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-32440
	ctx.r3.s64 = ctx.r11.s64 + -32440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3D38C"))) PPC_WEAK_FUNC(sub_83C3D38C);
PPC_FUNC_IMPL(__imp__sub_83C3D38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D390"))) PPC_WEAK_FUNC(sub_83C3D390);
PPC_FUNC_IMPL(__imp__sub_83C3D390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-32432
	ctx.r3.s64 = ctx.r11.s64 + -32432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3D39C"))) PPC_WEAK_FUNC(sub_83C3D39C);
PPC_FUNC_IMPL(__imp__sub_83C3D39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D3A0"))) PPC_WEAK_FUNC(sub_83C3D3A0);
PPC_FUNC_IMPL(__imp__sub_83C3D3A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-32424
	ctx.r3.s64 = ctx.r11.s64 + -32424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3D3AC"))) PPC_WEAK_FUNC(sub_83C3D3AC);
PPC_FUNC_IMPL(__imp__sub_83C3D3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D3B0"))) PPC_WEAK_FUNC(sub_83C3D3B0);
PPC_FUNC_IMPL(__imp__sub_83C3D3B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-32416
	ctx.r3.s64 = ctx.r11.s64 + -32416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3D3BC"))) PPC_WEAK_FUNC(sub_83C3D3BC);
PPC_FUNC_IMPL(__imp__sub_83C3D3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D3C0"))) PPC_WEAK_FUNC(sub_83C3D3C0);
PPC_FUNC_IMPL(__imp__sub_83C3D3C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-32408
	ctx.r3.s64 = ctx.r11.s64 + -32408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3D3CC"))) PPC_WEAK_FUNC(sub_83C3D3CC);
PPC_FUNC_IMPL(__imp__sub_83C3D3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D3D0"))) PPC_WEAK_FUNC(sub_83C3D3D0);
PPC_FUNC_IMPL(__imp__sub_83C3D3D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-32400
	ctx.r3.s64 = ctx.r11.s64 + -32400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3D3DC"))) PPC_WEAK_FUNC(sub_83C3D3DC);
PPC_FUNC_IMPL(__imp__sub_83C3D3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D3E0"))) PPC_WEAK_FUNC(sub_83C3D3E0);
PPC_FUNC_IMPL(__imp__sub_83C3D3E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-32392
	ctx.r3.s64 = ctx.r11.s64 + -32392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3D3EC"))) PPC_WEAK_FUNC(sub_83C3D3EC);
PPC_FUNC_IMPL(__imp__sub_83C3D3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D3F0"))) PPC_WEAK_FUNC(sub_83C3D3F0);
PPC_FUNC_IMPL(__imp__sub_83C3D3F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-32384
	ctx.r3.s64 = ctx.r11.s64 + -32384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3D3FC"))) PPC_WEAK_FUNC(sub_83C3D3FC);
PPC_FUNC_IMPL(__imp__sub_83C3D3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D400"))) PPC_WEAK_FUNC(sub_83C3D400);
PPC_FUNC_IMPL(__imp__sub_83C3D400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-32376
	ctx.r3.s64 = ctx.r11.s64 + -32376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3D40C"))) PPC_WEAK_FUNC(sub_83C3D40C);
PPC_FUNC_IMPL(__imp__sub_83C3D40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D410"))) PPC_WEAK_FUNC(sub_83C3D410);
PPC_FUNC_IMPL(__imp__sub_83C3D410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-32368
	ctx.r3.s64 = ctx.r11.s64 + -32368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3D41C"))) PPC_WEAK_FUNC(sub_83C3D41C);
PPC_FUNC_IMPL(__imp__sub_83C3D41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D420"))) PPC_WEAK_FUNC(sub_83C3D420);
PPC_FUNC_IMPL(__imp__sub_83C3D420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-32360
	ctx.r3.s64 = ctx.r11.s64 + -32360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3D42C"))) PPC_WEAK_FUNC(sub_83C3D42C);
PPC_FUNC_IMPL(__imp__sub_83C3D42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D430"))) PPC_WEAK_FUNC(sub_83C3D430);
PPC_FUNC_IMPL(__imp__sub_83C3D430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-32352
	ctx.r3.s64 = ctx.r11.s64 + -32352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3D43C"))) PPC_WEAK_FUNC(sub_83C3D43C);
PPC_FUNC_IMPL(__imp__sub_83C3D43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D440"))) PPC_WEAK_FUNC(sub_83C3D440);
PPC_FUNC_IMPL(__imp__sub_83C3D440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-32344
	ctx.r3.s64 = ctx.r11.s64 + -32344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3D44C"))) PPC_WEAK_FUNC(sub_83C3D44C);
PPC_FUNC_IMPL(__imp__sub_83C3D44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D450"))) PPC_WEAK_FUNC(sub_83C3D450);
PPC_FUNC_IMPL(__imp__sub_83C3D450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-32336
	ctx.r3.s64 = ctx.r11.s64 + -32336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C3D45C"))) PPC_WEAK_FUNC(sub_83C3D45C);
PPC_FUNC_IMPL(__imp__sub_83C3D45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C3D460"))) PPC_WEAK_FUNC(sub_83C3D460);
PPC_FUNC_IMPL(__imp__sub_83C3D460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-32328
	ctx.r3.s64 = ctx.r11.s64 + -32328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

