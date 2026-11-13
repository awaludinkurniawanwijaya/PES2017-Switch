#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83B9C960"))) PPC_WEAK_FUNC(sub_83B9C960);
PPC_FUNC_IMPL(__imp__sub_83B9C960) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-1108
	ctx.r7.s64 = ctx.r8.s64 + -1108;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-1108(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -1108);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-1108(r8)
	PPC_STORE_U32(ctx.r8.u32 + -1108, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B9C988"))) PPC_WEAK_FUNC(sub_83B9C988);
PPC_FUNC_IMPL(__imp__sub_83B9C988) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-1112
	ctx.r3.s64 = ctx.r11.s64 + -1112;
	// bl 0x83523120
	ctx.lr = 0x83B9C9A0;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,15712
	ctx.r3.s64 = ctx.r10.s64 + 15712;
	// bl 0x831cdcc8
	ctx.lr = 0x83B9C9AC;
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

__attribute__((alias("__imp__sub_83B9C9BC"))) PPC_WEAK_FUNC(sub_83B9C9BC);
PPC_FUNC_IMPL(__imp__sub_83B9C9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9C9C0"))) PPC_WEAK_FUNC(sub_83B9C9C0);
PPC_FUNC_IMPL(__imp__sub_83B9C9C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,15728
	ctx.r3.s64 = ctx.r11.s64 + 15728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9C9CC"))) PPC_WEAK_FUNC(sub_83B9C9CC);
PPC_FUNC_IMPL(__imp__sub_83B9C9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9C9D0"))) PPC_WEAK_FUNC(sub_83B9C9D0);
PPC_FUNC_IMPL(__imp__sub_83B9C9D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,15736
	ctx.r3.s64 = ctx.r11.s64 + 15736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9C9DC"))) PPC_WEAK_FUNC(sub_83B9C9DC);
PPC_FUNC_IMPL(__imp__sub_83B9C9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9C9E0"))) PPC_WEAK_FUNC(sub_83B9C9E0);
PPC_FUNC_IMPL(__imp__sub_83B9C9E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,15744
	ctx.r3.s64 = ctx.r11.s64 + 15744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9C9EC"))) PPC_WEAK_FUNC(sub_83B9C9EC);
PPC_FUNC_IMPL(__imp__sub_83B9C9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9C9F0"))) PPC_WEAK_FUNC(sub_83B9C9F0);
PPC_FUNC_IMPL(__imp__sub_83B9C9F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,15752
	ctx.r3.s64 = ctx.r11.s64 + 15752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9C9FC"))) PPC_WEAK_FUNC(sub_83B9C9FC);
PPC_FUNC_IMPL(__imp__sub_83B9C9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CA00"))) PPC_WEAK_FUNC(sub_83B9CA00);
PPC_FUNC_IMPL(__imp__sub_83B9CA00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,15760
	ctx.r3.s64 = ctx.r11.s64 + 15760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CA0C"))) PPC_WEAK_FUNC(sub_83B9CA0C);
PPC_FUNC_IMPL(__imp__sub_83B9CA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CA10"))) PPC_WEAK_FUNC(sub_83B9CA10);
PPC_FUNC_IMPL(__imp__sub_83B9CA10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,15768
	ctx.r3.s64 = ctx.r11.s64 + 15768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CA1C"))) PPC_WEAK_FUNC(sub_83B9CA1C);
PPC_FUNC_IMPL(__imp__sub_83B9CA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CA20"))) PPC_WEAK_FUNC(sub_83B9CA20);
PPC_FUNC_IMPL(__imp__sub_83B9CA20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,15776
	ctx.r3.s64 = ctx.r11.s64 + 15776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CA2C"))) PPC_WEAK_FUNC(sub_83B9CA2C);
PPC_FUNC_IMPL(__imp__sub_83B9CA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CA30"))) PPC_WEAK_FUNC(sub_83B9CA30);
PPC_FUNC_IMPL(__imp__sub_83B9CA30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,15784
	ctx.r3.s64 = ctx.r11.s64 + 15784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CA3C"))) PPC_WEAK_FUNC(sub_83B9CA3C);
PPC_FUNC_IMPL(__imp__sub_83B9CA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CA40"))) PPC_WEAK_FUNC(sub_83B9CA40);
PPC_FUNC_IMPL(__imp__sub_83B9CA40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,15792
	ctx.r3.s64 = ctx.r11.s64 + 15792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CA4C"))) PPC_WEAK_FUNC(sub_83B9CA4C);
PPC_FUNC_IMPL(__imp__sub_83B9CA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CA50"))) PPC_WEAK_FUNC(sub_83B9CA50);
PPC_FUNC_IMPL(__imp__sub_83B9CA50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,15800
	ctx.r3.s64 = ctx.r11.s64 + 15800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CA5C"))) PPC_WEAK_FUNC(sub_83B9CA5C);
PPC_FUNC_IMPL(__imp__sub_83B9CA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CA60"))) PPC_WEAK_FUNC(sub_83B9CA60);
PPC_FUNC_IMPL(__imp__sub_83B9CA60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,15808
	ctx.r3.s64 = ctx.r11.s64 + 15808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CA6C"))) PPC_WEAK_FUNC(sub_83B9CA6C);
PPC_FUNC_IMPL(__imp__sub_83B9CA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CA70"))) PPC_WEAK_FUNC(sub_83B9CA70);
PPC_FUNC_IMPL(__imp__sub_83B9CA70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,15816
	ctx.r3.s64 = ctx.r11.s64 + 15816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CA7C"))) PPC_WEAK_FUNC(sub_83B9CA7C);
PPC_FUNC_IMPL(__imp__sub_83B9CA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CA80"))) PPC_WEAK_FUNC(sub_83B9CA80);
PPC_FUNC_IMPL(__imp__sub_83B9CA80) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-1096
	ctx.r7.s64 = ctx.r8.s64 + -1096;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-1096(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -1096);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-1096(r8)
	PPC_STORE_U32(ctx.r8.u32 + -1096, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B9CAA8"))) PPC_WEAK_FUNC(sub_83B9CAA8);
PPC_FUNC_IMPL(__imp__sub_83B9CAA8) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-1100
	ctx.r3.s64 = ctx.r11.s64 + -1100;
	// bl 0x83523120
	ctx.lr = 0x83B9CAC0;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,15824
	ctx.r3.s64 = ctx.r10.s64 + 15824;
	// bl 0x831cdcc8
	ctx.lr = 0x83B9CACC;
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

__attribute__((alias("__imp__sub_83B9CADC"))) PPC_WEAK_FUNC(sub_83B9CADC);
PPC_FUNC_IMPL(__imp__sub_83B9CADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CAE0"))) PPC_WEAK_FUNC(sub_83B9CAE0);
PPC_FUNC_IMPL(__imp__sub_83B9CAE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,15840
	ctx.r3.s64 = ctx.r11.s64 + 15840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CAEC"))) PPC_WEAK_FUNC(sub_83B9CAEC);
PPC_FUNC_IMPL(__imp__sub_83B9CAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CAF0"))) PPC_WEAK_FUNC(sub_83B9CAF0);
PPC_FUNC_IMPL(__imp__sub_83B9CAF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,15848
	ctx.r3.s64 = ctx.r11.s64 + 15848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CAFC"))) PPC_WEAK_FUNC(sub_83B9CAFC);
PPC_FUNC_IMPL(__imp__sub_83B9CAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CB00"))) PPC_WEAK_FUNC(sub_83B9CB00);
PPC_FUNC_IMPL(__imp__sub_83B9CB00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,15856
	ctx.r3.s64 = ctx.r11.s64 + 15856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CB0C"))) PPC_WEAK_FUNC(sub_83B9CB0C);
PPC_FUNC_IMPL(__imp__sub_83B9CB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CB10"))) PPC_WEAK_FUNC(sub_83B9CB10);
PPC_FUNC_IMPL(__imp__sub_83B9CB10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,15864
	ctx.r3.s64 = ctx.r11.s64 + 15864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CB1C"))) PPC_WEAK_FUNC(sub_83B9CB1C);
PPC_FUNC_IMPL(__imp__sub_83B9CB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CB20"))) PPC_WEAK_FUNC(sub_83B9CB20);
PPC_FUNC_IMPL(__imp__sub_83B9CB20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,15872
	ctx.r3.s64 = ctx.r11.s64 + 15872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CB2C"))) PPC_WEAK_FUNC(sub_83B9CB2C);
PPC_FUNC_IMPL(__imp__sub_83B9CB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CB30"))) PPC_WEAK_FUNC(sub_83B9CB30);
PPC_FUNC_IMPL(__imp__sub_83B9CB30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,15880
	ctx.r3.s64 = ctx.r11.s64 + 15880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CB3C"))) PPC_WEAK_FUNC(sub_83B9CB3C);
PPC_FUNC_IMPL(__imp__sub_83B9CB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CB40"))) PPC_WEAK_FUNC(sub_83B9CB40);
PPC_FUNC_IMPL(__imp__sub_83B9CB40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,15888
	ctx.r3.s64 = ctx.r11.s64 + 15888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CB4C"))) PPC_WEAK_FUNC(sub_83B9CB4C);
PPC_FUNC_IMPL(__imp__sub_83B9CB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CB50"))) PPC_WEAK_FUNC(sub_83B9CB50);
PPC_FUNC_IMPL(__imp__sub_83B9CB50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,15896
	ctx.r3.s64 = ctx.r11.s64 + 15896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CB5C"))) PPC_WEAK_FUNC(sub_83B9CB5C);
PPC_FUNC_IMPL(__imp__sub_83B9CB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CB60"))) PPC_WEAK_FUNC(sub_83B9CB60);
PPC_FUNC_IMPL(__imp__sub_83B9CB60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,15904
	ctx.r3.s64 = ctx.r11.s64 + 15904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CB6C"))) PPC_WEAK_FUNC(sub_83B9CB6C);
PPC_FUNC_IMPL(__imp__sub_83B9CB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CB70"))) PPC_WEAK_FUNC(sub_83B9CB70);
PPC_FUNC_IMPL(__imp__sub_83B9CB70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,15912
	ctx.r3.s64 = ctx.r11.s64 + 15912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CB7C"))) PPC_WEAK_FUNC(sub_83B9CB7C);
PPC_FUNC_IMPL(__imp__sub_83B9CB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CB80"))) PPC_WEAK_FUNC(sub_83B9CB80);
PPC_FUNC_IMPL(__imp__sub_83B9CB80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,15920
	ctx.r3.s64 = ctx.r11.s64 + 15920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CB8C"))) PPC_WEAK_FUNC(sub_83B9CB8C);
PPC_FUNC_IMPL(__imp__sub_83B9CB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CB90"))) PPC_WEAK_FUNC(sub_83B9CB90);
PPC_FUNC_IMPL(__imp__sub_83B9CB90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,15928
	ctx.r3.s64 = ctx.r11.s64 + 15928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CB9C"))) PPC_WEAK_FUNC(sub_83B9CB9C);
PPC_FUNC_IMPL(__imp__sub_83B9CB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CBA0"))) PPC_WEAK_FUNC(sub_83B9CBA0);
PPC_FUNC_IMPL(__imp__sub_83B9CBA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-1088
	ctx.r7.s64 = ctx.r8.s64 + -1088;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-1088(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -1088);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-1088(r8)
	PPC_STORE_U32(ctx.r8.u32 + -1088, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B9CBC8"))) PPC_WEAK_FUNC(sub_83B9CBC8);
PPC_FUNC_IMPL(__imp__sub_83B9CBC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,15936
	ctx.r3.s64 = ctx.r11.s64 + 15936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CBD4"))) PPC_WEAK_FUNC(sub_83B9CBD4);
PPC_FUNC_IMPL(__imp__sub_83B9CBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CBD8"))) PPC_WEAK_FUNC(sub_83B9CBD8);
PPC_FUNC_IMPL(__imp__sub_83B9CBD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,15944
	ctx.r3.s64 = ctx.r11.s64 + 15944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CBE4"))) PPC_WEAK_FUNC(sub_83B9CBE4);
PPC_FUNC_IMPL(__imp__sub_83B9CBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CBE8"))) PPC_WEAK_FUNC(sub_83B9CBE8);
PPC_FUNC_IMPL(__imp__sub_83B9CBE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,15952
	ctx.r3.s64 = ctx.r11.s64 + 15952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CBF4"))) PPC_WEAK_FUNC(sub_83B9CBF4);
PPC_FUNC_IMPL(__imp__sub_83B9CBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CBF8"))) PPC_WEAK_FUNC(sub_83B9CBF8);
PPC_FUNC_IMPL(__imp__sub_83B9CBF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,15960
	ctx.r3.s64 = ctx.r11.s64 + 15960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CC04"))) PPC_WEAK_FUNC(sub_83B9CC04);
PPC_FUNC_IMPL(__imp__sub_83B9CC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CC08"))) PPC_WEAK_FUNC(sub_83B9CC08);
PPC_FUNC_IMPL(__imp__sub_83B9CC08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,15968
	ctx.r3.s64 = ctx.r11.s64 + 15968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CC14"))) PPC_WEAK_FUNC(sub_83B9CC14);
PPC_FUNC_IMPL(__imp__sub_83B9CC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CC18"))) PPC_WEAK_FUNC(sub_83B9CC18);
PPC_FUNC_IMPL(__imp__sub_83B9CC18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,15976
	ctx.r3.s64 = ctx.r11.s64 + 15976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CC24"))) PPC_WEAK_FUNC(sub_83B9CC24);
PPC_FUNC_IMPL(__imp__sub_83B9CC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CC28"))) PPC_WEAK_FUNC(sub_83B9CC28);
PPC_FUNC_IMPL(__imp__sub_83B9CC28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,15984
	ctx.r3.s64 = ctx.r11.s64 + 15984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CC34"))) PPC_WEAK_FUNC(sub_83B9CC34);
PPC_FUNC_IMPL(__imp__sub_83B9CC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CC38"))) PPC_WEAK_FUNC(sub_83B9CC38);
PPC_FUNC_IMPL(__imp__sub_83B9CC38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,15992
	ctx.r3.s64 = ctx.r11.s64 + 15992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CC44"))) PPC_WEAK_FUNC(sub_83B9CC44);
PPC_FUNC_IMPL(__imp__sub_83B9CC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CC48"))) PPC_WEAK_FUNC(sub_83B9CC48);
PPC_FUNC_IMPL(__imp__sub_83B9CC48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16000
	ctx.r3.s64 = ctx.r11.s64 + 16000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CC54"))) PPC_WEAK_FUNC(sub_83B9CC54);
PPC_FUNC_IMPL(__imp__sub_83B9CC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CC58"))) PPC_WEAK_FUNC(sub_83B9CC58);
PPC_FUNC_IMPL(__imp__sub_83B9CC58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16008
	ctx.r3.s64 = ctx.r11.s64 + 16008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CC64"))) PPC_WEAK_FUNC(sub_83B9CC64);
PPC_FUNC_IMPL(__imp__sub_83B9CC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CC68"))) PPC_WEAK_FUNC(sub_83B9CC68);
PPC_FUNC_IMPL(__imp__sub_83B9CC68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16016
	ctx.r3.s64 = ctx.r11.s64 + 16016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CC74"))) PPC_WEAK_FUNC(sub_83B9CC74);
PPC_FUNC_IMPL(__imp__sub_83B9CC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CC78"))) PPC_WEAK_FUNC(sub_83B9CC78);
PPC_FUNC_IMPL(__imp__sub_83B9CC78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16024
	ctx.r3.s64 = ctx.r11.s64 + 16024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CC84"))) PPC_WEAK_FUNC(sub_83B9CC84);
PPC_FUNC_IMPL(__imp__sub_83B9CC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CC88"))) PPC_WEAK_FUNC(sub_83B9CC88);
PPC_FUNC_IMPL(__imp__sub_83B9CC88) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-1076
	ctx.r7.s64 = ctx.r8.s64 + -1076;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-1076(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -1076);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-1076(r8)
	PPC_STORE_U32(ctx.r8.u32 + -1076, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B9CCB0"))) PPC_WEAK_FUNC(sub_83B9CCB0);
PPC_FUNC_IMPL(__imp__sub_83B9CCB0) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-1080
	ctx.r3.s64 = ctx.r11.s64 + -1080;
	// bl 0x83523120
	ctx.lr = 0x83B9CCC8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,16032
	ctx.r3.s64 = ctx.r10.s64 + 16032;
	// bl 0x831cdcc8
	ctx.lr = 0x83B9CCD4;
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

__attribute__((alias("__imp__sub_83B9CCE4"))) PPC_WEAK_FUNC(sub_83B9CCE4);
PPC_FUNC_IMPL(__imp__sub_83B9CCE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CCE8"))) PPC_WEAK_FUNC(sub_83B9CCE8);
PPC_FUNC_IMPL(__imp__sub_83B9CCE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16048
	ctx.r3.s64 = ctx.r11.s64 + 16048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CCF4"))) PPC_WEAK_FUNC(sub_83B9CCF4);
PPC_FUNC_IMPL(__imp__sub_83B9CCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CCF8"))) PPC_WEAK_FUNC(sub_83B9CCF8);
PPC_FUNC_IMPL(__imp__sub_83B9CCF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16056
	ctx.r3.s64 = ctx.r11.s64 + 16056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CD04"))) PPC_WEAK_FUNC(sub_83B9CD04);
PPC_FUNC_IMPL(__imp__sub_83B9CD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CD08"))) PPC_WEAK_FUNC(sub_83B9CD08);
PPC_FUNC_IMPL(__imp__sub_83B9CD08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16064
	ctx.r3.s64 = ctx.r11.s64 + 16064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CD14"))) PPC_WEAK_FUNC(sub_83B9CD14);
PPC_FUNC_IMPL(__imp__sub_83B9CD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CD18"))) PPC_WEAK_FUNC(sub_83B9CD18);
PPC_FUNC_IMPL(__imp__sub_83B9CD18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16072
	ctx.r3.s64 = ctx.r11.s64 + 16072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CD24"))) PPC_WEAK_FUNC(sub_83B9CD24);
PPC_FUNC_IMPL(__imp__sub_83B9CD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CD28"))) PPC_WEAK_FUNC(sub_83B9CD28);
PPC_FUNC_IMPL(__imp__sub_83B9CD28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16080
	ctx.r3.s64 = ctx.r11.s64 + 16080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CD34"))) PPC_WEAK_FUNC(sub_83B9CD34);
PPC_FUNC_IMPL(__imp__sub_83B9CD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CD38"))) PPC_WEAK_FUNC(sub_83B9CD38);
PPC_FUNC_IMPL(__imp__sub_83B9CD38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16088
	ctx.r3.s64 = ctx.r11.s64 + 16088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CD44"))) PPC_WEAK_FUNC(sub_83B9CD44);
PPC_FUNC_IMPL(__imp__sub_83B9CD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CD48"))) PPC_WEAK_FUNC(sub_83B9CD48);
PPC_FUNC_IMPL(__imp__sub_83B9CD48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16096
	ctx.r3.s64 = ctx.r11.s64 + 16096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CD54"))) PPC_WEAK_FUNC(sub_83B9CD54);
PPC_FUNC_IMPL(__imp__sub_83B9CD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CD58"))) PPC_WEAK_FUNC(sub_83B9CD58);
PPC_FUNC_IMPL(__imp__sub_83B9CD58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16104
	ctx.r3.s64 = ctx.r11.s64 + 16104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CD64"))) PPC_WEAK_FUNC(sub_83B9CD64);
PPC_FUNC_IMPL(__imp__sub_83B9CD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CD68"))) PPC_WEAK_FUNC(sub_83B9CD68);
PPC_FUNC_IMPL(__imp__sub_83B9CD68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16112
	ctx.r3.s64 = ctx.r11.s64 + 16112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CD74"))) PPC_WEAK_FUNC(sub_83B9CD74);
PPC_FUNC_IMPL(__imp__sub_83B9CD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CD78"))) PPC_WEAK_FUNC(sub_83B9CD78);
PPC_FUNC_IMPL(__imp__sub_83B9CD78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16120
	ctx.r3.s64 = ctx.r11.s64 + 16120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CD84"))) PPC_WEAK_FUNC(sub_83B9CD84);
PPC_FUNC_IMPL(__imp__sub_83B9CD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CD88"))) PPC_WEAK_FUNC(sub_83B9CD88);
PPC_FUNC_IMPL(__imp__sub_83B9CD88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16128
	ctx.r3.s64 = ctx.r11.s64 + 16128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CD94"))) PPC_WEAK_FUNC(sub_83B9CD94);
PPC_FUNC_IMPL(__imp__sub_83B9CD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CD98"))) PPC_WEAK_FUNC(sub_83B9CD98);
PPC_FUNC_IMPL(__imp__sub_83B9CD98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16136
	ctx.r3.s64 = ctx.r11.s64 + 16136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CDA4"))) PPC_WEAK_FUNC(sub_83B9CDA4);
PPC_FUNC_IMPL(__imp__sub_83B9CDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CDA8"))) PPC_WEAK_FUNC(sub_83B9CDA8);
PPC_FUNC_IMPL(__imp__sub_83B9CDA8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-1068
	ctx.r7.s64 = ctx.r8.s64 + -1068;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-1068(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -1068);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-1068(r8)
	PPC_STORE_U32(ctx.r8.u32 + -1068, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B9CDD0"))) PPC_WEAK_FUNC(sub_83B9CDD0);
PPC_FUNC_IMPL(__imp__sub_83B9CDD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16144
	ctx.r3.s64 = ctx.r11.s64 + 16144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CDDC"))) PPC_WEAK_FUNC(sub_83B9CDDC);
PPC_FUNC_IMPL(__imp__sub_83B9CDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CDE0"))) PPC_WEAK_FUNC(sub_83B9CDE0);
PPC_FUNC_IMPL(__imp__sub_83B9CDE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16152
	ctx.r3.s64 = ctx.r11.s64 + 16152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CDEC"))) PPC_WEAK_FUNC(sub_83B9CDEC);
PPC_FUNC_IMPL(__imp__sub_83B9CDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CDF0"))) PPC_WEAK_FUNC(sub_83B9CDF0);
PPC_FUNC_IMPL(__imp__sub_83B9CDF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16160
	ctx.r3.s64 = ctx.r11.s64 + 16160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CDFC"))) PPC_WEAK_FUNC(sub_83B9CDFC);
PPC_FUNC_IMPL(__imp__sub_83B9CDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CE00"))) PPC_WEAK_FUNC(sub_83B9CE00);
PPC_FUNC_IMPL(__imp__sub_83B9CE00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16168
	ctx.r3.s64 = ctx.r11.s64 + 16168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CE0C"))) PPC_WEAK_FUNC(sub_83B9CE0C);
PPC_FUNC_IMPL(__imp__sub_83B9CE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CE10"))) PPC_WEAK_FUNC(sub_83B9CE10);
PPC_FUNC_IMPL(__imp__sub_83B9CE10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16176
	ctx.r3.s64 = ctx.r11.s64 + 16176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CE1C"))) PPC_WEAK_FUNC(sub_83B9CE1C);
PPC_FUNC_IMPL(__imp__sub_83B9CE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CE20"))) PPC_WEAK_FUNC(sub_83B9CE20);
PPC_FUNC_IMPL(__imp__sub_83B9CE20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16184
	ctx.r3.s64 = ctx.r11.s64 + 16184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CE2C"))) PPC_WEAK_FUNC(sub_83B9CE2C);
PPC_FUNC_IMPL(__imp__sub_83B9CE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CE30"))) PPC_WEAK_FUNC(sub_83B9CE30);
PPC_FUNC_IMPL(__imp__sub_83B9CE30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16192
	ctx.r3.s64 = ctx.r11.s64 + 16192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CE3C"))) PPC_WEAK_FUNC(sub_83B9CE3C);
PPC_FUNC_IMPL(__imp__sub_83B9CE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CE40"))) PPC_WEAK_FUNC(sub_83B9CE40);
PPC_FUNC_IMPL(__imp__sub_83B9CE40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16200
	ctx.r3.s64 = ctx.r11.s64 + 16200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CE4C"))) PPC_WEAK_FUNC(sub_83B9CE4C);
PPC_FUNC_IMPL(__imp__sub_83B9CE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CE50"))) PPC_WEAK_FUNC(sub_83B9CE50);
PPC_FUNC_IMPL(__imp__sub_83B9CE50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16208
	ctx.r3.s64 = ctx.r11.s64 + 16208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CE5C"))) PPC_WEAK_FUNC(sub_83B9CE5C);
PPC_FUNC_IMPL(__imp__sub_83B9CE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CE60"))) PPC_WEAK_FUNC(sub_83B9CE60);
PPC_FUNC_IMPL(__imp__sub_83B9CE60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16216
	ctx.r3.s64 = ctx.r11.s64 + 16216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CE6C"))) PPC_WEAK_FUNC(sub_83B9CE6C);
PPC_FUNC_IMPL(__imp__sub_83B9CE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CE70"))) PPC_WEAK_FUNC(sub_83B9CE70);
PPC_FUNC_IMPL(__imp__sub_83B9CE70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16224
	ctx.r3.s64 = ctx.r11.s64 + 16224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CE7C"))) PPC_WEAK_FUNC(sub_83B9CE7C);
PPC_FUNC_IMPL(__imp__sub_83B9CE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CE80"))) PPC_WEAK_FUNC(sub_83B9CE80);
PPC_FUNC_IMPL(__imp__sub_83B9CE80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16232
	ctx.r3.s64 = ctx.r11.s64 + 16232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CE8C"))) PPC_WEAK_FUNC(sub_83B9CE8C);
PPC_FUNC_IMPL(__imp__sub_83B9CE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CE90"))) PPC_WEAK_FUNC(sub_83B9CE90);
PPC_FUNC_IMPL(__imp__sub_83B9CE90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16240
	ctx.r3.s64 = ctx.r11.s64 + 16240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CE9C"))) PPC_WEAK_FUNC(sub_83B9CE9C);
PPC_FUNC_IMPL(__imp__sub_83B9CE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CEA0"))) PPC_WEAK_FUNC(sub_83B9CEA0);
PPC_FUNC_IMPL(__imp__sub_83B9CEA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16248
	ctx.r3.s64 = ctx.r11.s64 + 16248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CEAC"))) PPC_WEAK_FUNC(sub_83B9CEAC);
PPC_FUNC_IMPL(__imp__sub_83B9CEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CEB0"))) PPC_WEAK_FUNC(sub_83B9CEB0);
PPC_FUNC_IMPL(__imp__sub_83B9CEB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16256
	ctx.r3.s64 = ctx.r11.s64 + 16256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CEBC"))) PPC_WEAK_FUNC(sub_83B9CEBC);
PPC_FUNC_IMPL(__imp__sub_83B9CEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CEC0"))) PPC_WEAK_FUNC(sub_83B9CEC0);
PPC_FUNC_IMPL(__imp__sub_83B9CEC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16264
	ctx.r3.s64 = ctx.r11.s64 + 16264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CECC"))) PPC_WEAK_FUNC(sub_83B9CECC);
PPC_FUNC_IMPL(__imp__sub_83B9CECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CED0"))) PPC_WEAK_FUNC(sub_83B9CED0);
PPC_FUNC_IMPL(__imp__sub_83B9CED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16272
	ctx.r3.s64 = ctx.r11.s64 + 16272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CEDC"))) PPC_WEAK_FUNC(sub_83B9CEDC);
PPC_FUNC_IMPL(__imp__sub_83B9CEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CEE0"))) PPC_WEAK_FUNC(sub_83B9CEE0);
PPC_FUNC_IMPL(__imp__sub_83B9CEE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16280
	ctx.r3.s64 = ctx.r11.s64 + 16280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CEEC"))) PPC_WEAK_FUNC(sub_83B9CEEC);
PPC_FUNC_IMPL(__imp__sub_83B9CEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CEF0"))) PPC_WEAK_FUNC(sub_83B9CEF0);
PPC_FUNC_IMPL(__imp__sub_83B9CEF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16288
	ctx.r3.s64 = ctx.r11.s64 + 16288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CEFC"))) PPC_WEAK_FUNC(sub_83B9CEFC);
PPC_FUNC_IMPL(__imp__sub_83B9CEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CF00"))) PPC_WEAK_FUNC(sub_83B9CF00);
PPC_FUNC_IMPL(__imp__sub_83B9CF00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16296
	ctx.r3.s64 = ctx.r11.s64 + 16296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CF0C"))) PPC_WEAK_FUNC(sub_83B9CF0C);
PPC_FUNC_IMPL(__imp__sub_83B9CF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CF10"))) PPC_WEAK_FUNC(sub_83B9CF10);
PPC_FUNC_IMPL(__imp__sub_83B9CF10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16304
	ctx.r3.s64 = ctx.r11.s64 + 16304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CF1C"))) PPC_WEAK_FUNC(sub_83B9CF1C);
PPC_FUNC_IMPL(__imp__sub_83B9CF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CF20"))) PPC_WEAK_FUNC(sub_83B9CF20);
PPC_FUNC_IMPL(__imp__sub_83B9CF20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16312
	ctx.r3.s64 = ctx.r11.s64 + 16312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CF2C"))) PPC_WEAK_FUNC(sub_83B9CF2C);
PPC_FUNC_IMPL(__imp__sub_83B9CF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CF30"))) PPC_WEAK_FUNC(sub_83B9CF30);
PPC_FUNC_IMPL(__imp__sub_83B9CF30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16320
	ctx.r3.s64 = ctx.r11.s64 + 16320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CF3C"))) PPC_WEAK_FUNC(sub_83B9CF3C);
PPC_FUNC_IMPL(__imp__sub_83B9CF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CF40"))) PPC_WEAK_FUNC(sub_83B9CF40);
PPC_FUNC_IMPL(__imp__sub_83B9CF40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16328
	ctx.r3.s64 = ctx.r11.s64 + 16328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CF4C"))) PPC_WEAK_FUNC(sub_83B9CF4C);
PPC_FUNC_IMPL(__imp__sub_83B9CF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CF50"))) PPC_WEAK_FUNC(sub_83B9CF50);
PPC_FUNC_IMPL(__imp__sub_83B9CF50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83B9CF58;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// li r29,3
	ctx.r29.s64 = 3;
	// addi r11,r11,-1052
	ctx.r11.s64 = ctx.r11.s64 + -1052;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r28,r11,19592
	ctx.r28.s64 = ctx.r11.s64 + 19592;
loc_83B9CF7C:
	// stw r28,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r28.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82596fa8
	ctx.lr = 0x83B9CF88;
	sub_82596FA8(ctx, base);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// stb r27,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r27.u8);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// bge 0x83b9cf7c
	if (!cr0.lt) goto loc_83B9CF7C;
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16336
	ctx.r3.s64 = ctx.r11.s64 + 16336;
	// bl 0x831cdcc8
	ctx.lr = 0x83B9CFB0;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CFB8"))) PPC_WEAK_FUNC(sub_83B9CFB8);
PPC_FUNC_IMPL(__imp__sub_83B9CFB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16400
	ctx.r3.s64 = ctx.r11.s64 + 16400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CFC4"))) PPC_WEAK_FUNC(sub_83B9CFC4);
PPC_FUNC_IMPL(__imp__sub_83B9CFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CFC8"))) PPC_WEAK_FUNC(sub_83B9CFC8);
PPC_FUNC_IMPL(__imp__sub_83B9CFC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16408
	ctx.r3.s64 = ctx.r11.s64 + 16408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CFD4"))) PPC_WEAK_FUNC(sub_83B9CFD4);
PPC_FUNC_IMPL(__imp__sub_83B9CFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CFD8"))) PPC_WEAK_FUNC(sub_83B9CFD8);
PPC_FUNC_IMPL(__imp__sub_83B9CFD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16416
	ctx.r3.s64 = ctx.r11.s64 + 16416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CFE4"))) PPC_WEAK_FUNC(sub_83B9CFE4);
PPC_FUNC_IMPL(__imp__sub_83B9CFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CFE8"))) PPC_WEAK_FUNC(sub_83B9CFE8);
PPC_FUNC_IMPL(__imp__sub_83B9CFE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16424
	ctx.r3.s64 = ctx.r11.s64 + 16424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9CFF4"))) PPC_WEAK_FUNC(sub_83B9CFF4);
PPC_FUNC_IMPL(__imp__sub_83B9CFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9CFF8"))) PPC_WEAK_FUNC(sub_83B9CFF8);
PPC_FUNC_IMPL(__imp__sub_83B9CFF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16432
	ctx.r3.s64 = ctx.r11.s64 + 16432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9D004"))) PPC_WEAK_FUNC(sub_83B9D004);
PPC_FUNC_IMPL(__imp__sub_83B9D004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9D008"))) PPC_WEAK_FUNC(sub_83B9D008);
PPC_FUNC_IMPL(__imp__sub_83B9D008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16440
	ctx.r3.s64 = ctx.r11.s64 + 16440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9D014"))) PPC_WEAK_FUNC(sub_83B9D014);
PPC_FUNC_IMPL(__imp__sub_83B9D014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9D018"))) PPC_WEAK_FUNC(sub_83B9D018);
PPC_FUNC_IMPL(__imp__sub_83B9D018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16448
	ctx.r3.s64 = ctx.r11.s64 + 16448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9D024"))) PPC_WEAK_FUNC(sub_83B9D024);
PPC_FUNC_IMPL(__imp__sub_83B9D024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9D028"))) PPC_WEAK_FUNC(sub_83B9D028);
PPC_FUNC_IMPL(__imp__sub_83B9D028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16456
	ctx.r3.s64 = ctx.r11.s64 + 16456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9D034"))) PPC_WEAK_FUNC(sub_83B9D034);
PPC_FUNC_IMPL(__imp__sub_83B9D034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9D038"))) PPC_WEAK_FUNC(sub_83B9D038);
PPC_FUNC_IMPL(__imp__sub_83B9D038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16464
	ctx.r3.s64 = ctx.r11.s64 + 16464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9D044"))) PPC_WEAK_FUNC(sub_83B9D044);
PPC_FUNC_IMPL(__imp__sub_83B9D044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9D048"))) PPC_WEAK_FUNC(sub_83B9D048);
PPC_FUNC_IMPL(__imp__sub_83B9D048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16472
	ctx.r3.s64 = ctx.r11.s64 + 16472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9D054"))) PPC_WEAK_FUNC(sub_83B9D054);
PPC_FUNC_IMPL(__imp__sub_83B9D054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9D058"))) PPC_WEAK_FUNC(sub_83B9D058);
PPC_FUNC_IMPL(__imp__sub_83B9D058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16480
	ctx.r3.s64 = ctx.r11.s64 + 16480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9D064"))) PPC_WEAK_FUNC(sub_83B9D064);
PPC_FUNC_IMPL(__imp__sub_83B9D064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9D068"))) PPC_WEAK_FUNC(sub_83B9D068);
PPC_FUNC_IMPL(__imp__sub_83B9D068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16488
	ctx.r3.s64 = ctx.r11.s64 + 16488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9D074"))) PPC_WEAK_FUNC(sub_83B9D074);
PPC_FUNC_IMPL(__imp__sub_83B9D074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9D078"))) PPC_WEAK_FUNC(sub_83B9D078);
PPC_FUNC_IMPL(__imp__sub_83B9D078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16496
	ctx.r3.s64 = ctx.r11.s64 + 16496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9D084"))) PPC_WEAK_FUNC(sub_83B9D084);
PPC_FUNC_IMPL(__imp__sub_83B9D084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9D088"))) PPC_WEAK_FUNC(sub_83B9D088);
PPC_FUNC_IMPL(__imp__sub_83B9D088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16504
	ctx.r3.s64 = ctx.r11.s64 + 16504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9D094"))) PPC_WEAK_FUNC(sub_83B9D094);
PPC_FUNC_IMPL(__imp__sub_83B9D094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9D098"))) PPC_WEAK_FUNC(sub_83B9D098);
PPC_FUNC_IMPL(__imp__sub_83B9D098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16512
	ctx.r3.s64 = ctx.r11.s64 + 16512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9D0A4"))) PPC_WEAK_FUNC(sub_83B9D0A4);
PPC_FUNC_IMPL(__imp__sub_83B9D0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9D0A8"))) PPC_WEAK_FUNC(sub_83B9D0A8);
PPC_FUNC_IMPL(__imp__sub_83B9D0A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16520
	ctx.r3.s64 = ctx.r11.s64 + 16520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9D0B4"))) PPC_WEAK_FUNC(sub_83B9D0B4);
PPC_FUNC_IMPL(__imp__sub_83B9D0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9D0B8"))) PPC_WEAK_FUNC(sub_83B9D0B8);
PPC_FUNC_IMPL(__imp__sub_83B9D0B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16528
	ctx.r3.s64 = ctx.r11.s64 + 16528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9D0C4"))) PPC_WEAK_FUNC(sub_83B9D0C4);
PPC_FUNC_IMPL(__imp__sub_83B9D0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9D0C8"))) PPC_WEAK_FUNC(sub_83B9D0C8);
PPC_FUNC_IMPL(__imp__sub_83B9D0C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16536
	ctx.r3.s64 = ctx.r11.s64 + 16536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9D0D4"))) PPC_WEAK_FUNC(sub_83B9D0D4);
PPC_FUNC_IMPL(__imp__sub_83B9D0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9D0D8"))) PPC_WEAK_FUNC(sub_83B9D0D8);
PPC_FUNC_IMPL(__imp__sub_83B9D0D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16544
	ctx.r3.s64 = ctx.r11.s64 + 16544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9D0E4"))) PPC_WEAK_FUNC(sub_83B9D0E4);
PPC_FUNC_IMPL(__imp__sub_83B9D0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9D0E8"))) PPC_WEAK_FUNC(sub_83B9D0E8);
PPC_FUNC_IMPL(__imp__sub_83B9D0E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16552
	ctx.r3.s64 = ctx.r11.s64 + 16552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9D0F4"))) PPC_WEAK_FUNC(sub_83B9D0F4);
PPC_FUNC_IMPL(__imp__sub_83B9D0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9D0F8"))) PPC_WEAK_FUNC(sub_83B9D0F8);
PPC_FUNC_IMPL(__imp__sub_83B9D0F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16560
	ctx.r3.s64 = ctx.r11.s64 + 16560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9D104"))) PPC_WEAK_FUNC(sub_83B9D104);
PPC_FUNC_IMPL(__imp__sub_83B9D104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9D108"))) PPC_WEAK_FUNC(sub_83B9D108);
PPC_FUNC_IMPL(__imp__sub_83B9D108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16568
	ctx.r3.s64 = ctx.r11.s64 + 16568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9D114"))) PPC_WEAK_FUNC(sub_83B9D114);
PPC_FUNC_IMPL(__imp__sub_83B9D114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9D118"))) PPC_WEAK_FUNC(sub_83B9D118);
PPC_FUNC_IMPL(__imp__sub_83B9D118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16576
	ctx.r3.s64 = ctx.r11.s64 + 16576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9D124"))) PPC_WEAK_FUNC(sub_83B9D124);
PPC_FUNC_IMPL(__imp__sub_83B9D124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9D128"))) PPC_WEAK_FUNC(sub_83B9D128);
PPC_FUNC_IMPL(__imp__sub_83B9D128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16584
	ctx.r3.s64 = ctx.r11.s64 + 16584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9D134"))) PPC_WEAK_FUNC(sub_83B9D134);
PPC_FUNC_IMPL(__imp__sub_83B9D134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9D138"))) PPC_WEAK_FUNC(sub_83B9D138);
PPC_FUNC_IMPL(__imp__sub_83B9D138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16592
	ctx.r3.s64 = ctx.r11.s64 + 16592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9D144"))) PPC_WEAK_FUNC(sub_83B9D144);
PPC_FUNC_IMPL(__imp__sub_83B9D144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9D148"))) PPC_WEAK_FUNC(sub_83B9D148);
PPC_FUNC_IMPL(__imp__sub_83B9D148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16600
	ctx.r3.s64 = ctx.r11.s64 + 16600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9D154"))) PPC_WEAK_FUNC(sub_83B9D154);
PPC_FUNC_IMPL(__imp__sub_83B9D154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9D158"))) PPC_WEAK_FUNC(sub_83B9D158);
PPC_FUNC_IMPL(__imp__sub_83B9D158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16608
	ctx.r3.s64 = ctx.r11.s64 + 16608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9D164"))) PPC_WEAK_FUNC(sub_83B9D164);
PPC_FUNC_IMPL(__imp__sub_83B9D164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9D168"))) PPC_WEAK_FUNC(sub_83B9D168);
PPC_FUNC_IMPL(__imp__sub_83B9D168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16616
	ctx.r3.s64 = ctx.r11.s64 + 16616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9D174"))) PPC_WEAK_FUNC(sub_83B9D174);
PPC_FUNC_IMPL(__imp__sub_83B9D174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9D178"))) PPC_WEAK_FUNC(sub_83B9D178);
PPC_FUNC_IMPL(__imp__sub_83B9D178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16624
	ctx.r3.s64 = ctx.r11.s64 + 16624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9D184"))) PPC_WEAK_FUNC(sub_83B9D184);
PPC_FUNC_IMPL(__imp__sub_83B9D184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9D188"))) PPC_WEAK_FUNC(sub_83B9D188);
PPC_FUNC_IMPL(__imp__sub_83B9D188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16632
	ctx.r3.s64 = ctx.r11.s64 + 16632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9D194"))) PPC_WEAK_FUNC(sub_83B9D194);
PPC_FUNC_IMPL(__imp__sub_83B9D194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9D198"))) PPC_WEAK_FUNC(sub_83B9D198);
PPC_FUNC_IMPL(__imp__sub_83B9D198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16640
	ctx.r3.s64 = ctx.r11.s64 + 16640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9D1A4"))) PPC_WEAK_FUNC(sub_83B9D1A4);
PPC_FUNC_IMPL(__imp__sub_83B9D1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9D1A8"))) PPC_WEAK_FUNC(sub_83B9D1A8);
PPC_FUNC_IMPL(__imp__sub_83B9D1A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16648
	ctx.r3.s64 = ctx.r11.s64 + 16648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9D1B4"))) PPC_WEAK_FUNC(sub_83B9D1B4);
PPC_FUNC_IMPL(__imp__sub_83B9D1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9D1B8"))) PPC_WEAK_FUNC(sub_83B9D1B8);
PPC_FUNC_IMPL(__imp__sub_83B9D1B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16656
	ctx.r3.s64 = ctx.r11.s64 + 16656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9D1C4"))) PPC_WEAK_FUNC(sub_83B9D1C4);
PPC_FUNC_IMPL(__imp__sub_83B9D1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9D1C8"))) PPC_WEAK_FUNC(sub_83B9D1C8);
PPC_FUNC_IMPL(__imp__sub_83B9D1C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16664
	ctx.r3.s64 = ctx.r11.s64 + 16664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9D1D4"))) PPC_WEAK_FUNC(sub_83B9D1D4);
PPC_FUNC_IMPL(__imp__sub_83B9D1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9D1D8"))) PPC_WEAK_FUNC(sub_83B9D1D8);
PPC_FUNC_IMPL(__imp__sub_83B9D1D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16672
	ctx.r3.s64 = ctx.r11.s64 + 16672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9D1E4"))) PPC_WEAK_FUNC(sub_83B9D1E4);
PPC_FUNC_IMPL(__imp__sub_83B9D1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9D1E8"))) PPC_WEAK_FUNC(sub_83B9D1E8);
PPC_FUNC_IMPL(__imp__sub_83B9D1E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16680
	ctx.r3.s64 = ctx.r11.s64 + 16680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9D1F4"))) PPC_WEAK_FUNC(sub_83B9D1F4);
PPC_FUNC_IMPL(__imp__sub_83B9D1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9D1F8"))) PPC_WEAK_FUNC(sub_83B9D1F8);
PPC_FUNC_IMPL(__imp__sub_83B9D1F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16688
	ctx.r3.s64 = ctx.r11.s64 + 16688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9D204"))) PPC_WEAK_FUNC(sub_83B9D204);
PPC_FUNC_IMPL(__imp__sub_83B9D204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9D208"))) PPC_WEAK_FUNC(sub_83B9D208);
PPC_FUNC_IMPL(__imp__sub_83B9D208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16696
	ctx.r3.s64 = ctx.r11.s64 + 16696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9D214"))) PPC_WEAK_FUNC(sub_83B9D214);
PPC_FUNC_IMPL(__imp__sub_83B9D214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9D218"))) PPC_WEAK_FUNC(sub_83B9D218);
PPC_FUNC_IMPL(__imp__sub_83B9D218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16704
	ctx.r3.s64 = ctx.r11.s64 + 16704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9D224"))) PPC_WEAK_FUNC(sub_83B9D224);
PPC_FUNC_IMPL(__imp__sub_83B9D224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9D228"))) PPC_WEAK_FUNC(sub_83B9D228);
PPC_FUNC_IMPL(__imp__sub_83B9D228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16712
	ctx.r3.s64 = ctx.r11.s64 + 16712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9D234"))) PPC_WEAK_FUNC(sub_83B9D234);
PPC_FUNC_IMPL(__imp__sub_83B9D234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9D238"))) PPC_WEAK_FUNC(sub_83B9D238);
PPC_FUNC_IMPL(__imp__sub_83B9D238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16720
	ctx.r3.s64 = ctx.r11.s64 + 16720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9D244"))) PPC_WEAK_FUNC(sub_83B9D244);
PPC_FUNC_IMPL(__imp__sub_83B9D244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9D248"))) PPC_WEAK_FUNC(sub_83B9D248);
PPC_FUNC_IMPL(__imp__sub_83B9D248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16728
	ctx.r3.s64 = ctx.r11.s64 + 16728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9D254"))) PPC_WEAK_FUNC(sub_83B9D254);
PPC_FUNC_IMPL(__imp__sub_83B9D254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9D258"))) PPC_WEAK_FUNC(sub_83B9D258);
PPC_FUNC_IMPL(__imp__sub_83B9D258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16736
	ctx.r3.s64 = ctx.r11.s64 + 16736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9D264"))) PPC_WEAK_FUNC(sub_83B9D264);
PPC_FUNC_IMPL(__imp__sub_83B9D264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9D268"))) PPC_WEAK_FUNC(sub_83B9D268);
PPC_FUNC_IMPL(__imp__sub_83B9D268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16744
	ctx.r3.s64 = ctx.r11.s64 + 16744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9D274"))) PPC_WEAK_FUNC(sub_83B9D274);
PPC_FUNC_IMPL(__imp__sub_83B9D274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9D278"))) PPC_WEAK_FUNC(sub_83B9D278);
PPC_FUNC_IMPL(__imp__sub_83B9D278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16752
	ctx.r3.s64 = ctx.r11.s64 + 16752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9D284"))) PPC_WEAK_FUNC(sub_83B9D284);
PPC_FUNC_IMPL(__imp__sub_83B9D284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9D288"))) PPC_WEAK_FUNC(sub_83B9D288);
PPC_FUNC_IMPL(__imp__sub_83B9D288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16760
	ctx.r3.s64 = ctx.r11.s64 + 16760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9D294"))) PPC_WEAK_FUNC(sub_83B9D294);
PPC_FUNC_IMPL(__imp__sub_83B9D294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9D298"))) PPC_WEAK_FUNC(sub_83B9D298);
PPC_FUNC_IMPL(__imp__sub_83B9D298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16768
	ctx.r3.s64 = ctx.r11.s64 + 16768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9D2A4"))) PPC_WEAK_FUNC(sub_83B9D2A4);
PPC_FUNC_IMPL(__imp__sub_83B9D2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9D2A8"))) PPC_WEAK_FUNC(sub_83B9D2A8);
PPC_FUNC_IMPL(__imp__sub_83B9D2A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16776
	ctx.r3.s64 = ctx.r11.s64 + 16776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9D2B4"))) PPC_WEAK_FUNC(sub_83B9D2B4);
PPC_FUNC_IMPL(__imp__sub_83B9D2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9D2B8"))) PPC_WEAK_FUNC(sub_83B9D2B8);
PPC_FUNC_IMPL(__imp__sub_83B9D2B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16784
	ctx.r3.s64 = ctx.r11.s64 + 16784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9D2C4"))) PPC_WEAK_FUNC(sub_83B9D2C4);
PPC_FUNC_IMPL(__imp__sub_83B9D2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9D2C8"))) PPC_WEAK_FUNC(sub_83B9D2C8);
PPC_FUNC_IMPL(__imp__sub_83B9D2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,16792
	ctx.r3.s64 = ctx.r11.s64 + 16792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9D2D4"))) PPC_WEAK_FUNC(sub_83B9D2D4);
PPC_FUNC_IMPL(__imp__sub_83B9D2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

