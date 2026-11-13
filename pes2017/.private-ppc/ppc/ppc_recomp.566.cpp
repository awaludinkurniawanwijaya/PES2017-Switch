#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83B8CB40"))) PPC_WEAK_FUNC(sub_83B8CB40);
PPC_FUNC_IMPL(__imp__sub_83B8CB40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8488
	ctx.r3.s64 = ctx.r11.s64 + -8488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8CB4C"))) PPC_WEAK_FUNC(sub_83B8CB4C);
PPC_FUNC_IMPL(__imp__sub_83B8CB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8CB50"))) PPC_WEAK_FUNC(sub_83B8CB50);
PPC_FUNC_IMPL(__imp__sub_83B8CB50) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-9116
	ctx.r7.s64 = ctx.r8.s64 + -9116;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-9116(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9116);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-9116(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9116, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B8CB78"))) PPC_WEAK_FUNC(sub_83B8CB78);
PPC_FUNC_IMPL(__imp__sub_83B8CB78) {
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
	// addi r3,r11,-9120
	ctx.r3.s64 = ctx.r11.s64 + -9120;
	// bl 0x83523120
	ctx.lr = 0x83B8CB90;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-8480
	ctx.r3.s64 = ctx.r10.s64 + -8480;
	// bl 0x831cdcc8
	ctx.lr = 0x83B8CB9C;
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

__attribute__((alias("__imp__sub_83B8CBAC"))) PPC_WEAK_FUNC(sub_83B8CBAC);
PPC_FUNC_IMPL(__imp__sub_83B8CBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8CBB0"))) PPC_WEAK_FUNC(sub_83B8CBB0);
PPC_FUNC_IMPL(__imp__sub_83B8CBB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8464
	ctx.r3.s64 = ctx.r11.s64 + -8464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8CBBC"))) PPC_WEAK_FUNC(sub_83B8CBBC);
PPC_FUNC_IMPL(__imp__sub_83B8CBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8CBC0"))) PPC_WEAK_FUNC(sub_83B8CBC0);
PPC_FUNC_IMPL(__imp__sub_83B8CBC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8456
	ctx.r3.s64 = ctx.r11.s64 + -8456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8CBCC"))) PPC_WEAK_FUNC(sub_83B8CBCC);
PPC_FUNC_IMPL(__imp__sub_83B8CBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8CBD0"))) PPC_WEAK_FUNC(sub_83B8CBD0);
PPC_FUNC_IMPL(__imp__sub_83B8CBD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8448
	ctx.r3.s64 = ctx.r11.s64 + -8448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8CBDC"))) PPC_WEAK_FUNC(sub_83B8CBDC);
PPC_FUNC_IMPL(__imp__sub_83B8CBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8CBE0"))) PPC_WEAK_FUNC(sub_83B8CBE0);
PPC_FUNC_IMPL(__imp__sub_83B8CBE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8440
	ctx.r3.s64 = ctx.r11.s64 + -8440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8CBEC"))) PPC_WEAK_FUNC(sub_83B8CBEC);
PPC_FUNC_IMPL(__imp__sub_83B8CBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8CBF0"))) PPC_WEAK_FUNC(sub_83B8CBF0);
PPC_FUNC_IMPL(__imp__sub_83B8CBF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8432
	ctx.r3.s64 = ctx.r11.s64 + -8432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8CBFC"))) PPC_WEAK_FUNC(sub_83B8CBFC);
PPC_FUNC_IMPL(__imp__sub_83B8CBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8CC00"))) PPC_WEAK_FUNC(sub_83B8CC00);
PPC_FUNC_IMPL(__imp__sub_83B8CC00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8424
	ctx.r3.s64 = ctx.r11.s64 + -8424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8CC0C"))) PPC_WEAK_FUNC(sub_83B8CC0C);
PPC_FUNC_IMPL(__imp__sub_83B8CC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8CC10"))) PPC_WEAK_FUNC(sub_83B8CC10);
PPC_FUNC_IMPL(__imp__sub_83B8CC10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8416
	ctx.r3.s64 = ctx.r11.s64 + -8416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8CC1C"))) PPC_WEAK_FUNC(sub_83B8CC1C);
PPC_FUNC_IMPL(__imp__sub_83B8CC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8CC20"))) PPC_WEAK_FUNC(sub_83B8CC20);
PPC_FUNC_IMPL(__imp__sub_83B8CC20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8408
	ctx.r3.s64 = ctx.r11.s64 + -8408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8CC2C"))) PPC_WEAK_FUNC(sub_83B8CC2C);
PPC_FUNC_IMPL(__imp__sub_83B8CC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8CC30"))) PPC_WEAK_FUNC(sub_83B8CC30);
PPC_FUNC_IMPL(__imp__sub_83B8CC30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8400
	ctx.r3.s64 = ctx.r11.s64 + -8400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8CC3C"))) PPC_WEAK_FUNC(sub_83B8CC3C);
PPC_FUNC_IMPL(__imp__sub_83B8CC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8CC40"))) PPC_WEAK_FUNC(sub_83B8CC40);
PPC_FUNC_IMPL(__imp__sub_83B8CC40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8392
	ctx.r3.s64 = ctx.r11.s64 + -8392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8CC4C"))) PPC_WEAK_FUNC(sub_83B8CC4C);
PPC_FUNC_IMPL(__imp__sub_83B8CC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8CC50"))) PPC_WEAK_FUNC(sub_83B8CC50);
PPC_FUNC_IMPL(__imp__sub_83B8CC50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8384
	ctx.r3.s64 = ctx.r11.s64 + -8384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8CC5C"))) PPC_WEAK_FUNC(sub_83B8CC5C);
PPC_FUNC_IMPL(__imp__sub_83B8CC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8CC60"))) PPC_WEAK_FUNC(sub_83B8CC60);
PPC_FUNC_IMPL(__imp__sub_83B8CC60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8376
	ctx.r3.s64 = ctx.r11.s64 + -8376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8CC6C"))) PPC_WEAK_FUNC(sub_83B8CC6C);
PPC_FUNC_IMPL(__imp__sub_83B8CC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8CC70"))) PPC_WEAK_FUNC(sub_83B8CC70);
PPC_FUNC_IMPL(__imp__sub_83B8CC70) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-9104
	ctx.r7.s64 = ctx.r8.s64 + -9104;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-9104(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9104);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-9104(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9104, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B8CC98"))) PPC_WEAK_FUNC(sub_83B8CC98);
PPC_FUNC_IMPL(__imp__sub_83B8CC98) {
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
	// addi r3,r11,-9108
	ctx.r3.s64 = ctx.r11.s64 + -9108;
	// bl 0x83523120
	ctx.lr = 0x83B8CCB0;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-8368
	ctx.r3.s64 = ctx.r10.s64 + -8368;
	// bl 0x831cdcc8
	ctx.lr = 0x83B8CCBC;
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

__attribute__((alias("__imp__sub_83B8CCCC"))) PPC_WEAK_FUNC(sub_83B8CCCC);
PPC_FUNC_IMPL(__imp__sub_83B8CCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8CCD0"))) PPC_WEAK_FUNC(sub_83B8CCD0);
PPC_FUNC_IMPL(__imp__sub_83B8CCD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8352
	ctx.r3.s64 = ctx.r11.s64 + -8352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8CCDC"))) PPC_WEAK_FUNC(sub_83B8CCDC);
PPC_FUNC_IMPL(__imp__sub_83B8CCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8CCE0"))) PPC_WEAK_FUNC(sub_83B8CCE0);
PPC_FUNC_IMPL(__imp__sub_83B8CCE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8344
	ctx.r3.s64 = ctx.r11.s64 + -8344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8CCEC"))) PPC_WEAK_FUNC(sub_83B8CCEC);
PPC_FUNC_IMPL(__imp__sub_83B8CCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8CCF0"))) PPC_WEAK_FUNC(sub_83B8CCF0);
PPC_FUNC_IMPL(__imp__sub_83B8CCF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8336
	ctx.r3.s64 = ctx.r11.s64 + -8336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8CCFC"))) PPC_WEAK_FUNC(sub_83B8CCFC);
PPC_FUNC_IMPL(__imp__sub_83B8CCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8CD00"))) PPC_WEAK_FUNC(sub_83B8CD00);
PPC_FUNC_IMPL(__imp__sub_83B8CD00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8328
	ctx.r3.s64 = ctx.r11.s64 + -8328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8CD0C"))) PPC_WEAK_FUNC(sub_83B8CD0C);
PPC_FUNC_IMPL(__imp__sub_83B8CD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8CD10"))) PPC_WEAK_FUNC(sub_83B8CD10);
PPC_FUNC_IMPL(__imp__sub_83B8CD10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8320
	ctx.r3.s64 = ctx.r11.s64 + -8320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8CD1C"))) PPC_WEAK_FUNC(sub_83B8CD1C);
PPC_FUNC_IMPL(__imp__sub_83B8CD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8CD20"))) PPC_WEAK_FUNC(sub_83B8CD20);
PPC_FUNC_IMPL(__imp__sub_83B8CD20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8312
	ctx.r3.s64 = ctx.r11.s64 + -8312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8CD2C"))) PPC_WEAK_FUNC(sub_83B8CD2C);
PPC_FUNC_IMPL(__imp__sub_83B8CD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8CD30"))) PPC_WEAK_FUNC(sub_83B8CD30);
PPC_FUNC_IMPL(__imp__sub_83B8CD30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8304
	ctx.r3.s64 = ctx.r11.s64 + -8304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8CD3C"))) PPC_WEAK_FUNC(sub_83B8CD3C);
PPC_FUNC_IMPL(__imp__sub_83B8CD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8CD40"))) PPC_WEAK_FUNC(sub_83B8CD40);
PPC_FUNC_IMPL(__imp__sub_83B8CD40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8296
	ctx.r3.s64 = ctx.r11.s64 + -8296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8CD4C"))) PPC_WEAK_FUNC(sub_83B8CD4C);
PPC_FUNC_IMPL(__imp__sub_83B8CD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8CD50"))) PPC_WEAK_FUNC(sub_83B8CD50);
PPC_FUNC_IMPL(__imp__sub_83B8CD50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8288
	ctx.r3.s64 = ctx.r11.s64 + -8288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8CD5C"))) PPC_WEAK_FUNC(sub_83B8CD5C);
PPC_FUNC_IMPL(__imp__sub_83B8CD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8CD60"))) PPC_WEAK_FUNC(sub_83B8CD60);
PPC_FUNC_IMPL(__imp__sub_83B8CD60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8280
	ctx.r3.s64 = ctx.r11.s64 + -8280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8CD6C"))) PPC_WEAK_FUNC(sub_83B8CD6C);
PPC_FUNC_IMPL(__imp__sub_83B8CD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8CD70"))) PPC_WEAK_FUNC(sub_83B8CD70);
PPC_FUNC_IMPL(__imp__sub_83B8CD70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8272
	ctx.r3.s64 = ctx.r11.s64 + -8272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8CD7C"))) PPC_WEAK_FUNC(sub_83B8CD7C);
PPC_FUNC_IMPL(__imp__sub_83B8CD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8CD80"))) PPC_WEAK_FUNC(sub_83B8CD80);
PPC_FUNC_IMPL(__imp__sub_83B8CD80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8264
	ctx.r3.s64 = ctx.r11.s64 + -8264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8CD8C"))) PPC_WEAK_FUNC(sub_83B8CD8C);
PPC_FUNC_IMPL(__imp__sub_83B8CD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8CD90"))) PPC_WEAK_FUNC(sub_83B8CD90);
PPC_FUNC_IMPL(__imp__sub_83B8CD90) {
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
	// addi r3,r11,-9096
	ctx.r3.s64 = ctx.r11.s64 + -9096;
	// bl 0x83523120
	ctx.lr = 0x83B8CDA8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-8256
	ctx.r3.s64 = ctx.r10.s64 + -8256;
	// bl 0x831cdcc8
	ctx.lr = 0x83B8CDB4;
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

__attribute__((alias("__imp__sub_83B8CDC4"))) PPC_WEAK_FUNC(sub_83B8CDC4);
PPC_FUNC_IMPL(__imp__sub_83B8CDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8CDC8"))) PPC_WEAK_FUNC(sub_83B8CDC8);
PPC_FUNC_IMPL(__imp__sub_83B8CDC8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-9092
	ctx.r7.s64 = ctx.r8.s64 + -9092;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-9092(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9092);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-9092(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9092, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B8CDF0"))) PPC_WEAK_FUNC(sub_83B8CDF0);
PPC_FUNC_IMPL(__imp__sub_83B8CDF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,26992
	ctx.r4.s64 = ctx.r11.s64 + 26992;
	// lis r7,-31763
	ctx.r7.s64 = -2081619968;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,-9084
	ctx.r3.s64 = ctx.r7.s64 + -9084;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8CE20"))) PPC_WEAK_FUNC(sub_83B8CE20);
PPC_FUNC_IMPL(__imp__sub_83B8CE20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8240
	ctx.r3.s64 = ctx.r11.s64 + -8240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8CE2C"))) PPC_WEAK_FUNC(sub_83B8CE2C);
PPC_FUNC_IMPL(__imp__sub_83B8CE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8CE30"))) PPC_WEAK_FUNC(sub_83B8CE30);
PPC_FUNC_IMPL(__imp__sub_83B8CE30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8232
	ctx.r3.s64 = ctx.r11.s64 + -8232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8CE3C"))) PPC_WEAK_FUNC(sub_83B8CE3C);
PPC_FUNC_IMPL(__imp__sub_83B8CE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8CE40"))) PPC_WEAK_FUNC(sub_83B8CE40);
PPC_FUNC_IMPL(__imp__sub_83B8CE40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8224
	ctx.r3.s64 = ctx.r11.s64 + -8224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8CE4C"))) PPC_WEAK_FUNC(sub_83B8CE4C);
PPC_FUNC_IMPL(__imp__sub_83B8CE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8CE50"))) PPC_WEAK_FUNC(sub_83B8CE50);
PPC_FUNC_IMPL(__imp__sub_83B8CE50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8216
	ctx.r3.s64 = ctx.r11.s64 + -8216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8CE5C"))) PPC_WEAK_FUNC(sub_83B8CE5C);
PPC_FUNC_IMPL(__imp__sub_83B8CE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8CE60"))) PPC_WEAK_FUNC(sub_83B8CE60);
PPC_FUNC_IMPL(__imp__sub_83B8CE60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8208
	ctx.r3.s64 = ctx.r11.s64 + -8208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8CE6C"))) PPC_WEAK_FUNC(sub_83B8CE6C);
PPC_FUNC_IMPL(__imp__sub_83B8CE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8CE70"))) PPC_WEAK_FUNC(sub_83B8CE70);
PPC_FUNC_IMPL(__imp__sub_83B8CE70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8200
	ctx.r3.s64 = ctx.r11.s64 + -8200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8CE7C"))) PPC_WEAK_FUNC(sub_83B8CE7C);
PPC_FUNC_IMPL(__imp__sub_83B8CE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8CE80"))) PPC_WEAK_FUNC(sub_83B8CE80);
PPC_FUNC_IMPL(__imp__sub_83B8CE80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8192
	ctx.r3.s64 = ctx.r11.s64 + -8192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8CE8C"))) PPC_WEAK_FUNC(sub_83B8CE8C);
PPC_FUNC_IMPL(__imp__sub_83B8CE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8CE90"))) PPC_WEAK_FUNC(sub_83B8CE90);
PPC_FUNC_IMPL(__imp__sub_83B8CE90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8184
	ctx.r3.s64 = ctx.r11.s64 + -8184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8CE9C"))) PPC_WEAK_FUNC(sub_83B8CE9C);
PPC_FUNC_IMPL(__imp__sub_83B8CE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8CEA0"))) PPC_WEAK_FUNC(sub_83B8CEA0);
PPC_FUNC_IMPL(__imp__sub_83B8CEA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8176
	ctx.r3.s64 = ctx.r11.s64 + -8176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8CEAC"))) PPC_WEAK_FUNC(sub_83B8CEAC);
PPC_FUNC_IMPL(__imp__sub_83B8CEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8CEB0"))) PPC_WEAK_FUNC(sub_83B8CEB0);
PPC_FUNC_IMPL(__imp__sub_83B8CEB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8168
	ctx.r3.s64 = ctx.r11.s64 + -8168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8CEBC"))) PPC_WEAK_FUNC(sub_83B8CEBC);
PPC_FUNC_IMPL(__imp__sub_83B8CEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8CEC0"))) PPC_WEAK_FUNC(sub_83B8CEC0);
PPC_FUNC_IMPL(__imp__sub_83B8CEC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8160
	ctx.r3.s64 = ctx.r11.s64 + -8160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8CECC"))) PPC_WEAK_FUNC(sub_83B8CECC);
PPC_FUNC_IMPL(__imp__sub_83B8CECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8CED0"))) PPC_WEAK_FUNC(sub_83B8CED0);
PPC_FUNC_IMPL(__imp__sub_83B8CED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8152
	ctx.r3.s64 = ctx.r11.s64 + -8152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8CEDC"))) PPC_WEAK_FUNC(sub_83B8CEDC);
PPC_FUNC_IMPL(__imp__sub_83B8CEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8CEE0"))) PPC_WEAK_FUNC(sub_83B8CEE0);
PPC_FUNC_IMPL(__imp__sub_83B8CEE0) {
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
	// addi r3,r11,-9072
	ctx.r3.s64 = ctx.r11.s64 + -9072;
	// bl 0x83523120
	ctx.lr = 0x83B8CEF8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-8144
	ctx.r3.s64 = ctx.r10.s64 + -8144;
	// bl 0x831cdcc8
	ctx.lr = 0x83B8CF04;
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

__attribute__((alias("__imp__sub_83B8CF14"))) PPC_WEAK_FUNC(sub_83B8CF14);
PPC_FUNC_IMPL(__imp__sub_83B8CF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8CF18"))) PPC_WEAK_FUNC(sub_83B8CF18);
PPC_FUNC_IMPL(__imp__sub_83B8CF18) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-9068
	ctx.r7.s64 = ctx.r8.s64 + -9068;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-9068(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9068);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-9068(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9068, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B8CF40"))) PPC_WEAK_FUNC(sub_83B8CF40);
PPC_FUNC_IMPL(__imp__sub_83B8CF40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,27332
	ctx.r4.s64 = ctx.r11.s64 + 27332;
	// lis r7,-31763
	ctx.r7.s64 = -2081619968;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,-9060
	ctx.r3.s64 = ctx.r7.s64 + -9060;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8CF70"))) PPC_WEAK_FUNC(sub_83B8CF70);
PPC_FUNC_IMPL(__imp__sub_83B8CF70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8128
	ctx.r3.s64 = ctx.r11.s64 + -8128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8CF7C"))) PPC_WEAK_FUNC(sub_83B8CF7C);
PPC_FUNC_IMPL(__imp__sub_83B8CF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8CF80"))) PPC_WEAK_FUNC(sub_83B8CF80);
PPC_FUNC_IMPL(__imp__sub_83B8CF80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8120
	ctx.r3.s64 = ctx.r11.s64 + -8120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8CF8C"))) PPC_WEAK_FUNC(sub_83B8CF8C);
PPC_FUNC_IMPL(__imp__sub_83B8CF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8CF90"))) PPC_WEAK_FUNC(sub_83B8CF90);
PPC_FUNC_IMPL(__imp__sub_83B8CF90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8112
	ctx.r3.s64 = ctx.r11.s64 + -8112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8CF9C"))) PPC_WEAK_FUNC(sub_83B8CF9C);
PPC_FUNC_IMPL(__imp__sub_83B8CF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8CFA0"))) PPC_WEAK_FUNC(sub_83B8CFA0);
PPC_FUNC_IMPL(__imp__sub_83B8CFA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8104
	ctx.r3.s64 = ctx.r11.s64 + -8104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8CFAC"))) PPC_WEAK_FUNC(sub_83B8CFAC);
PPC_FUNC_IMPL(__imp__sub_83B8CFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8CFB0"))) PPC_WEAK_FUNC(sub_83B8CFB0);
PPC_FUNC_IMPL(__imp__sub_83B8CFB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8096
	ctx.r3.s64 = ctx.r11.s64 + -8096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8CFBC"))) PPC_WEAK_FUNC(sub_83B8CFBC);
PPC_FUNC_IMPL(__imp__sub_83B8CFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8CFC0"))) PPC_WEAK_FUNC(sub_83B8CFC0);
PPC_FUNC_IMPL(__imp__sub_83B8CFC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8088
	ctx.r3.s64 = ctx.r11.s64 + -8088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8CFCC"))) PPC_WEAK_FUNC(sub_83B8CFCC);
PPC_FUNC_IMPL(__imp__sub_83B8CFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8CFD0"))) PPC_WEAK_FUNC(sub_83B8CFD0);
PPC_FUNC_IMPL(__imp__sub_83B8CFD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8080
	ctx.r3.s64 = ctx.r11.s64 + -8080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8CFDC"))) PPC_WEAK_FUNC(sub_83B8CFDC);
PPC_FUNC_IMPL(__imp__sub_83B8CFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8CFE0"))) PPC_WEAK_FUNC(sub_83B8CFE0);
PPC_FUNC_IMPL(__imp__sub_83B8CFE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8072
	ctx.r3.s64 = ctx.r11.s64 + -8072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8CFEC"))) PPC_WEAK_FUNC(sub_83B8CFEC);
PPC_FUNC_IMPL(__imp__sub_83B8CFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8CFF0"))) PPC_WEAK_FUNC(sub_83B8CFF0);
PPC_FUNC_IMPL(__imp__sub_83B8CFF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8064
	ctx.r3.s64 = ctx.r11.s64 + -8064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8CFFC"))) PPC_WEAK_FUNC(sub_83B8CFFC);
PPC_FUNC_IMPL(__imp__sub_83B8CFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8D000"))) PPC_WEAK_FUNC(sub_83B8D000);
PPC_FUNC_IMPL(__imp__sub_83B8D000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8056
	ctx.r3.s64 = ctx.r11.s64 + -8056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8D00C"))) PPC_WEAK_FUNC(sub_83B8D00C);
PPC_FUNC_IMPL(__imp__sub_83B8D00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8D010"))) PPC_WEAK_FUNC(sub_83B8D010);
PPC_FUNC_IMPL(__imp__sub_83B8D010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8048
	ctx.r3.s64 = ctx.r11.s64 + -8048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8D01C"))) PPC_WEAK_FUNC(sub_83B8D01C);
PPC_FUNC_IMPL(__imp__sub_83B8D01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8D020"))) PPC_WEAK_FUNC(sub_83B8D020);
PPC_FUNC_IMPL(__imp__sub_83B8D020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8040
	ctx.r3.s64 = ctx.r11.s64 + -8040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8D02C"))) PPC_WEAK_FUNC(sub_83B8D02C);
PPC_FUNC_IMPL(__imp__sub_83B8D02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8D030"))) PPC_WEAK_FUNC(sub_83B8D030);
PPC_FUNC_IMPL(__imp__sub_83B8D030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// lfs f10,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,28472(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28472);
	ctx.f6.f64 = double(temp.f32);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lfs f12,24504(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24504);
	ctx.f12.f64 = double(temp.f32);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f5,28468(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 28468);
	ctx.f5.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f3,2952(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2952);
	ctx.f3.f64 = double(temp.f32);
	// lis r9,-31763
	ctx.r9.s64 = -2081619968;
	// lfs f2,28464(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28464);
	ctx.f2.f64 = double(temp.f32);
	// addi r5,r10,27784
	ctx.r5.s64 = ctx.r10.s64 + 27784;
	// lfs f11,28460(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 28460);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r9,-8912
	ctx.r3.s64 = ctx.r9.s64 + -8912;
	// lfs f7,28456(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 28456);
	ctx.f7.f64 = double(temp.f32);
	// li r6,7
	ctx.r6.s64 = 7;
	// lfs f1,28452(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28452);
	ctx.f1.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f9,f10
	ctx.f9.f64 = ctx.f10.f64;
	// fmr f8,f10
	ctx.f8.f64 = ctx.f10.f64;
	// fmr f4,f6
	ctx.f4.f64 = ctx.f6.f64;
	// bl 0x835f96e8
	ctx.lr = 0x83B8D0AC;
	sub_835F96E8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B8D0BC"))) PPC_WEAK_FUNC(sub_83B8D0BC);
PPC_FUNC_IMPL(__imp__sub_83B8D0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8D0C0"))) PPC_WEAK_FUNC(sub_83B8D0C0);
PPC_FUNC_IMPL(__imp__sub_83B8D0C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83B8D0C8;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x831ce74c
	ctx.lr = 0x83B8D0D0;
	__savefpr_17(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// lfs f31,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// lfs f28,-23864(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23864);
	ctx.f28.f64 = double(temp.f32);
	// lis r9,-31763
	ctx.r9.s64 = -2081619968;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lfs f6,28716(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 28716);
	ctx.f6.f64 = double(temp.f32);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lfs f26,28712(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28712);
	ctx.f26.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f4,28708(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28708);
	ctx.f4.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f3,28704(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28704);
	ctx.f3.f64 = double(temp.f32);
	// lis r29,-32252
	ctx.r29.s64 = -2113667072;
	// fmr f10,f31
	ctx.f10.f64 = ctx.f31.f64;
	// addi r30,r9,-8848
	ctx.r30.s64 = ctx.r9.s64 + -8848;
	// lfs f30,-26940(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -26940);
	ctx.f30.f64 = double(temp.f32);
	// addi r31,r29,27764
	ctx.r31.s64 = ctx.r29.s64 + 27764;
	// lfs f27,28700(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 28700);
	ctx.f27.f64 = double(temp.f32);
	// lfs f25,28696(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28696);
	ctx.f25.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f24,28692(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28692);
	ctx.f24.f64 = double(temp.f32);
	// addi r5,r31,236
	ctx.r5.s64 = ctx.r31.s64 + 236;
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f9,f31
	ctx.f9.f64 = ctx.f31.f64;
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f11,f30
	ctx.f11.f64 = ctx.f30.f64;
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// fmr f12,f28
	ctx.f12.f64 = ctx.f28.f64;
	// fmr f7,f27
	ctx.f7.f64 = ctx.f27.f64;
	// fmr f5,f26
	ctx.f5.f64 = ctx.f26.f64;
	// fmr f2,f25
	ctx.f2.f64 = ctx.f25.f64;
	// fmr f1,f24
	ctx.f1.f64 = ctx.f24.f64;
	// bl 0x835f96e8
	ctx.lr = 0x83B8D16C;
	sub_835F96E8(ctx, base);
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// fmr f10,f31
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f31.f64;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// fmr f9,f31
	ctx.f9.f64 = ctx.f31.f64;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lfs f6,28688(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 28688);
	ctx.f6.f64 = double(temp.f32);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lfs f20,28684(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28684);
	ctx.f20.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f4,28680(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28680);
	ctx.f4.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f3,28676(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28676);
	ctx.f3.f64 = double(temp.f32);
	// lfs f23,28672(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28672);
	ctx.f23.f64 = double(temp.f32);
	// addi r5,r31,216
	ctx.r5.s64 = ctx.r31.s64 + 216;
	// lfs f22,3180(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3180);
	ctx.f22.f64 = double(temp.f32);
	// li r6,2
	ctx.r6.s64 = 2;
	// lfs f21,28668(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 28668);
	ctx.f21.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f19,28664(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28664);
	ctx.f19.f64 = double(temp.f32);
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// lfs f18,28660(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28660);
	ctx.f18.f64 = double(temp.f32);
	// fmr f12,f23
	ctx.f12.f64 = ctx.f23.f64;
	// fmr f11,f22
	ctx.f11.f64 = ctx.f22.f64;
	// fmr f7,f21
	ctx.f7.f64 = ctx.f21.f64;
	// fmr f5,f20
	ctx.f5.f64 = ctx.f20.f64;
	// fmr f2,f19
	ctx.f2.f64 = ctx.f19.f64;
	// fmr f1,f18
	ctx.f1.f64 = ctx.f18.f64;
	// bl 0x835f96e8
	ctx.lr = 0x83B8D1EC;
	sub_835F96E8(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// fmr f11,f30
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f30.f64;
	// addi r5,r31,196
	ctx.r5.s64 = ctx.r31.s64 + 196;
	// fmr f10,f31
	ctx.f10.f64 = ctx.f31.f64;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// fmr f9,f31
	ctx.f9.f64 = ctx.f31.f64;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lfs f29,3200(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3200);
	ctx.f29.f64 = double(temp.f32);
	// fmr f12,f29
	ctx.f12.f64 = ctx.f29.f64;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// lfs f5,28648(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 28648);
	ctx.f5.f64 = double(temp.f32);
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// lfs f7,28656(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 28656);
	ctx.f7.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f6,28652(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 28652);
	ctx.f6.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r6,3
	ctx.r6.s64 = 3;
	// lfs f4,28644(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28644);
	ctx.f4.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f3,28640(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28640);
	ctx.f3.f64 = double(temp.f32);
	// addi r3,r30,128
	ctx.r3.s64 = ctx.r30.s64 + 128;
	// lfs f17,28636(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28636);
	ctx.f17.f64 = double(temp.f32);
	// lfs f2,28632(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28632);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f17
	ctx.f1.f64 = ctx.f17.f64;
	// bl 0x835f96e8
	ctx.lr = 0x83B8D258;
	sub_835F96E8(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// fmr f10,f31
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f31.f64;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// fmr f9,f31
	ctx.f9.f64 = ctx.f31.f64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// addi r5,r31,176
	ctx.r5.s64 = ctx.r31.s64 + 176;
	// fmr f12,f28
	ctx.f12.f64 = ctx.f28.f64;
	// li r6,4
	ctx.r6.s64 = 4;
	// lfs f11,-9980(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -9980);
	ctx.f11.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f6,28628(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 28628);
	ctx.f6.f64 = double(temp.f32);
	// addi r3,r30,192
	ctx.r3.s64 = ctx.r30.s64 + 192;
	// lfs f4,28624(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 28624);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,28620(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28620);
	ctx.f3.f64 = double(temp.f32);
	// fmr f7,f26
	ctx.f7.f64 = ctx.f26.f64;
	// fmr f5,f27
	ctx.f5.f64 = ctx.f27.f64;
	// fmr f2,f25
	ctx.f2.f64 = ctx.f25.f64;
	// fmr f1,f24
	ctx.f1.f64 = ctx.f24.f64;
	// bl 0x835f96e8
	ctx.lr = 0x83B8D2AC;
	sub_835F96E8(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// fmr f10,f31
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f31.f64;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// fmr f9,f31
	ctx.f9.f64 = ctx.f31.f64;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// addi r5,r31,156
	ctx.r5.s64 = ctx.r31.s64 + 156;
	// fmr f12,f23
	ctx.f12.f64 = ctx.f23.f64;
	// li r6,5
	ctx.r6.s64 = 5;
	// fmr f11,f22
	ctx.f11.f64 = ctx.f22.f64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f6,28616(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28616);
	ctx.f6.f64 = double(temp.f32);
	// addi r3,r30,256
	ctx.r3.s64 = ctx.r30.s64 + 256;
	// lfs f4,28612(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28612);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,28608(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 28608);
	ctx.f3.f64 = double(temp.f32);
	// fmr f7,f20
	ctx.f7.f64 = ctx.f20.f64;
	// fmr f5,f21
	ctx.f5.f64 = ctx.f21.f64;
	// fmr f2,f19
	ctx.f2.f64 = ctx.f19.f64;
	// fmr f1,f18
	ctx.f1.f64 = ctx.f18.f64;
	// bl 0x835f96e8
	ctx.lr = 0x83B8D2FC;
	sub_835F96E8(ctx, base);
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// fmr f12,f29
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f29.f64;
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// fmr f11,f30
	ctx.f11.f64 = ctx.f30.f64;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// fmr f10,f31
	ctx.f10.f64 = ctx.f31.f64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f9,f31
	ctx.f9.f64 = ctx.f31.f64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lfs f6,28604(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28604);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,28600(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28600);
	ctx.f5.f64 = double(temp.f32);
	// addi r5,r31,136
	ctx.r5.s64 = ctx.r31.s64 + 136;
	// li r6,6
	ctx.r6.s64 = 6;
	// lfs f7,28596(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 28596);
	ctx.f7.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f4,28592(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28592);
	ctx.f4.f64 = double(temp.f32);
	// addi r3,r30,320
	ctx.r3.s64 = ctx.r30.s64 + 320;
	// lfs f3,28588(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28588);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,28584(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28584);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f17
	ctx.f1.f64 = ctx.f17.f64;
	// bl 0x835f96e8
	ctx.lr = 0x83B8D358;
	sub_835F96E8(ctx, base);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lfs f7,28580(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 28580);
	ctx.f7.f64 = double(temp.f32);
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// fmr f10,f31
	ctx.f10.f64 = ctx.f31.f64;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// fmr f9,f31
	ctx.f9.f64 = ctx.f31.f64;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f11,f29
	ctx.f11.f64 = ctx.f29.f64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f6,28576(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 28576);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,28572(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28572);
	ctx.f4.f64 = double(temp.f32);
	// addi r5,r31,116
	ctx.r5.s64 = ctx.r31.s64 + 116;
	// lfs f3,9008(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 9008);
	ctx.f3.f64 = double(temp.f32);
	// li r6,7
	ctx.r6.s64 = 7;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f12,20780(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20780);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r30,384
	ctx.r3.s64 = ctx.r30.s64 + 384;
	// lfs f2,28568(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28568);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,28564(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28564);
	ctx.f1.f64 = double(temp.f32);
	// fmr f5,f7
	ctx.f5.f64 = ctx.f7.f64;
	// bl 0x835f96e8
	ctx.lr = 0x83B8D3B8;
	sub_835F96E8(ctx, base);
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// lfs f11,27764(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 27764);
	ctx.f11.f64 = double(temp.f32);
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// fmr f10,f31
	ctx.f10.f64 = ctx.f31.f64;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// fmr f9,f31
	ctx.f9.f64 = ctx.f31.f64;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lfs f5,28560(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 28560);
	ctx.f5.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f4,28556(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28556);
	ctx.f4.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f3,28552(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28552);
	ctx.f3.f64 = double(temp.f32);
	// lfs f30,16088(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16088);
	ctx.f30.f64 = double(temp.f32);
	// addi r5,r31,96
	ctx.r5.s64 = ctx.r31.s64 + 96;
	// li r6,8
	ctx.r6.s64 = 8;
	// lfs f7,28548(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 28548);
	ctx.f7.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f6,28544(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 28544);
	ctx.f6.f64 = double(temp.f32);
	// addi r3,r30,448
	ctx.r3.s64 = ctx.r30.s64 + 448;
	// lfs f2,28540(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28540);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,28536(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28536);
	ctx.f1.f64 = double(temp.f32);
	// fmr f12,f30
	ctx.f12.f64 = ctx.f30.f64;
	// bl 0x835f96e8
	ctx.lr = 0x83B8D420;
	sub_835F96E8(ctx, base);
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// fmr f10,f31
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f31.f64;
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// fmr f9,f31
	ctx.f9.f64 = ctx.f31.f64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// fmr f12,f30
	ctx.f12.f64 = ctx.f30.f64;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f3,28532(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 28532);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,28528(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28528);
	ctx.f2.f64 = double(temp.f32);
	// addi r5,r31,76
	ctx.r5.s64 = ctx.r31.s64 + 76;
	// lfs f1,28524(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28524);
	ctx.f1.f64 = double(temp.f32);
	// li r6,10
	ctx.r6.s64 = 10;
	// lfs f7,-24912(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24912);
	ctx.f7.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,512
	ctx.r3.s64 = ctx.r30.s64 + 512;
	// lfs f11,-23848(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -23848);
	ctx.f11.f64 = double(temp.f32);
	// lfs f6,-11416(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -11416);
	ctx.f6.f64 = double(temp.f32);
	// fmr f5,f7
	ctx.f5.f64 = ctx.f7.f64;
	// fmr f4,f7
	ctx.f4.f64 = ctx.f7.f64;
	// bl 0x835f96e8
	ctx.lr = 0x83B8D47C;
	sub_835F96E8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmr f10,f31
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f31.f64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// fmr f9,f31
	ctx.f9.f64 = ctx.f31.f64;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// lfs f29,12892(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12892);
	ctx.f29.f64 = double(temp.f32);
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// lfs f4,28508(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 28508);
	ctx.f4.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f28,-9976(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -9976);
	ctx.f28.f64 = double(temp.f32);
	// lfs f30,28512(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 28512);
	ctx.f30.f64 = double(temp.f32);
	// addi r5,r31,56
	ctx.r5.s64 = ctx.r31.s64 + 56;
	// li r6,12
	ctx.r6.s64 = 12;
	// lfs f7,28520(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28520);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,28504(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28504);
	ctx.f3.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f2,28500(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28500);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r30,576
	ctx.r3.s64 = ctx.r30.s64 + 576;
	// lfs f6,28516(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 28516);
	ctx.f6.f64 = double(temp.f32);
	// fmr f12,f29
	ctx.f12.f64 = ctx.f29.f64;
	// lfs f1,28496(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28496);
	ctx.f1.f64 = double(temp.f32);
	// fmr f11,f28
	ctx.f11.f64 = ctx.f28.f64;
	// fmr f5,f30
	ctx.f5.f64 = ctx.f30.f64;
	// bl 0x835f96e8
	ctx.lr = 0x83B8D4F0;
	sub_835F96E8(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// fmr f10,f31
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f31.f64;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// fmr f9,f31
	ctx.f9.f64 = ctx.f31.f64;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// fmr f12,f29
	ctx.f12.f64 = ctx.f29.f64;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// fmr f11,f28
	ctx.f11.f64 = ctx.f28.f64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// addi r5,r31,36
	ctx.r5.s64 = ctx.r31.s64 + 36;
	// lfs f6,28492(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28492);
	ctx.f6.f64 = double(temp.f32);
	// li r6,16
	ctx.r6.s64 = 16;
	// lfs f4,28488(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28488);
	ctx.f4.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f3,28484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 28484);
	ctx.f3.f64 = double(temp.f32);
	// addi r3,r30,640
	ctx.r3.s64 = ctx.r30.s64 + 640;
	// lfs f2,28480(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 28480);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,28476(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28476);
	ctx.f1.f64 = double(temp.f32);
	// fmr f7,f30
	ctx.f7.f64 = ctx.f30.f64;
	// fmr f5,f30
	ctx.f5.f64 = ctx.f30.f64;
	// bl 0x835f96e8
	ctx.lr = 0x83B8D548;
	sub_835F96E8(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x831ce798
	ctx.lr = 0x83B8D554;
	__restfpr_17(ctx, base);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8D558"))) PPC_WEAK_FUNC(sub_83B8D558);
PPC_FUNC_IMPL(__imp__sub_83B8D558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83B8D560;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x831ce748
	ctx.lr = 0x83B8D568;
	__savefpr_16(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// lfs f31,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// lfs f28,11712(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11712);
	ctx.f28.f64 = double(temp.f32);
	// lis r9,-31763
	ctx.r9.s64 = -2081619968;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lfs f6,28716(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 28716);
	ctx.f6.f64 = double(temp.f32);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lfs f25,28712(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28712);
	ctx.f25.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f4,28708(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28708);
	ctx.f4.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f3,28704(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28704);
	ctx.f3.f64 = double(temp.f32);
	// lis r29,-32252
	ctx.r29.s64 = -2113667072;
	// fmr f10,f31
	ctx.f10.f64 = ctx.f31.f64;
	// addi r30,r9,-8144
	ctx.r30.s64 = ctx.r9.s64 + -8144;
	// lfs f27,3176(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3176);
	ctx.f27.f64 = double(temp.f32);
	// addi r31,r29,27764
	ctx.r31.s64 = ctx.r29.s64 + 27764;
	// lfs f26,28700(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 28700);
	ctx.f26.f64 = double(temp.f32);
	// lfs f24,28696(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28696);
	ctx.f24.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f23,28692(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28692);
	ctx.f23.f64 = double(temp.f32);
	// addi r5,r31,536
	ctx.r5.s64 = ctx.r31.s64 + 536;
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f9,f31
	ctx.f9.f64 = ctx.f31.f64;
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// fmr f12,f28
	ctx.f12.f64 = ctx.f28.f64;
	// fmr f11,f27
	ctx.f11.f64 = ctx.f27.f64;
	// fmr f7,f26
	ctx.f7.f64 = ctx.f26.f64;
	// fmr f5,f25
	ctx.f5.f64 = ctx.f25.f64;
	// fmr f2,f24
	ctx.f2.f64 = ctx.f24.f64;
	// fmr f1,f23
	ctx.f1.f64 = ctx.f23.f64;
	// bl 0x835f96e8
	ctx.lr = 0x83B8D604;
	sub_835F96E8(ctx, base);
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// fmr f10,f31
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f31.f64;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// fmr f9,f31
	ctx.f9.f64 = ctx.f31.f64;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lfs f6,28688(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 28688);
	ctx.f6.f64 = double(temp.f32);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lfs f19,28684(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28684);
	ctx.f19.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f4,28680(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28680);
	ctx.f4.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f3,28676(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28676);
	ctx.f3.f64 = double(temp.f32);
	// lfs f22,28672(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28672);
	ctx.f22.f64 = double(temp.f32);
	// addi r5,r31,516
	ctx.r5.s64 = ctx.r31.s64 + 516;
	// lfs f21,3180(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3180);
	ctx.f21.f64 = double(temp.f32);
	// li r6,2
	ctx.r6.s64 = 2;
	// lfs f20,28668(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 28668);
	ctx.f20.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f18,28664(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28664);
	ctx.f18.f64 = double(temp.f32);
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// lfs f17,28660(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28660);
	ctx.f17.f64 = double(temp.f32);
	// fmr f12,f22
	ctx.f12.f64 = ctx.f22.f64;
	// fmr f11,f21
	ctx.f11.f64 = ctx.f21.f64;
	// fmr f7,f20
	ctx.f7.f64 = ctx.f20.f64;
	// fmr f5,f19
	ctx.f5.f64 = ctx.f19.f64;
	// fmr f2,f18
	ctx.f2.f64 = ctx.f18.f64;
	// fmr f1,f17
	ctx.f1.f64 = ctx.f17.f64;
	// bl 0x835f96e8
	ctx.lr = 0x83B8D684;
	sub_835F96E8(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// fmr f10,f31
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f31.f64;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// addi r5,r31,496
	ctx.r5.s64 = ctx.r31.s64 + 496;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lfs f30,3200(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3200);
	ctx.f30.f64 = double(temp.f32);
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// lfs f29,-26940(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -26940);
	ctx.f29.f64 = double(temp.f32);
	// fmr f12,f30
	ctx.f12.f64 = ctx.f30.f64;
	// fmr f11,f29
	ctx.f11.f64 = ctx.f29.f64;
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// lfs f6,28652(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 28652);
	ctx.f6.f64 = double(temp.f32);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lfs f5,28648(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28648);
	ctx.f5.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f7,28656(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 28656);
	ctx.f7.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// fmr f9,f31
	ctx.f9.f64 = ctx.f31.f64;
	// li r6,3
	ctx.r6.s64 = 3;
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// lfs f4,28644(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28644);
	ctx.f4.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f16,28636(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28636);
	ctx.f16.f64 = double(temp.f32);
	// addi r3,r30,128
	ctx.r3.s64 = ctx.r30.s64 + 128;
	// lfs f3,28640(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28640);
	ctx.f3.f64 = double(temp.f32);
	// fmr f1,f16
	ctx.f1.f64 = ctx.f16.f64;
	// lfs f2,28632(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28632);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x835f96e8
	ctx.lr = 0x83B8D6F8;
	sub_835F96E8(ctx, base);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// fmr f10,f31
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f31.f64;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// fmr f9,f31
	ctx.f9.f64 = ctx.f31.f64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// addi r5,r31,476
	ctx.r5.s64 = ctx.r31.s64 + 476;
	// fmr f12,f28
	ctx.f12.f64 = ctx.f28.f64;
	// li r6,4
	ctx.r6.s64 = 4;
	// fmr f11,f27
	ctx.f11.f64 = ctx.f27.f64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f6,28628(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 28628);
	ctx.f6.f64 = double(temp.f32);
	// addi r3,r30,192
	ctx.r3.s64 = ctx.r30.s64 + 192;
	// lfs f4,28624(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 28624);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,28620(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28620);
	ctx.f3.f64 = double(temp.f32);
	// fmr f7,f25
	ctx.f7.f64 = ctx.f25.f64;
	// fmr f5,f26
	ctx.f5.f64 = ctx.f26.f64;
	// fmr f2,f24
	ctx.f2.f64 = ctx.f24.f64;
	// fmr f1,f23
	ctx.f1.f64 = ctx.f23.f64;
	// bl 0x835f96e8
	ctx.lr = 0x83B8D748;
	sub_835F96E8(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// fmr f10,f31
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f31.f64;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// fmr f9,f31
	ctx.f9.f64 = ctx.f31.f64;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// addi r5,r31,456
	ctx.r5.s64 = ctx.r31.s64 + 456;
	// fmr f12,f22
	ctx.f12.f64 = ctx.f22.f64;
	// li r6,5
	ctx.r6.s64 = 5;
	// fmr f11,f21
	ctx.f11.f64 = ctx.f21.f64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f6,28616(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28616);
	ctx.f6.f64 = double(temp.f32);
	// addi r3,r30,256
	ctx.r3.s64 = ctx.r30.s64 + 256;
	// lfs f4,28612(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28612);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,28608(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 28608);
	ctx.f3.f64 = double(temp.f32);
	// fmr f7,f19
	ctx.f7.f64 = ctx.f19.f64;
	// fmr f5,f20
	ctx.f5.f64 = ctx.f20.f64;
	// fmr f2,f18
	ctx.f2.f64 = ctx.f18.f64;
	// fmr f1,f17
	ctx.f1.f64 = ctx.f17.f64;
	// bl 0x835f96e8
	ctx.lr = 0x83B8D798;
	sub_835F96E8(ctx, base);
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// fmr f12,f30
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f30.f64;
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// fmr f11,f29
	ctx.f11.f64 = ctx.f29.f64;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// fmr f10,f31
	ctx.f10.f64 = ctx.f31.f64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f9,f31
	ctx.f9.f64 = ctx.f31.f64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lfs f6,28604(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28604);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,28600(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28600);
	ctx.f5.f64 = double(temp.f32);
	// addi r5,r31,436
	ctx.r5.s64 = ctx.r31.s64 + 436;
	// li r6,6
	ctx.r6.s64 = 6;
	// lfs f7,28596(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 28596);
	ctx.f7.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f4,28592(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28592);
	ctx.f4.f64 = double(temp.f32);
	// addi r3,r30,320
	ctx.r3.s64 = ctx.r30.s64 + 320;
	// lfs f3,28588(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28588);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,28584(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28584);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f16
	ctx.f1.f64 = ctx.f16.f64;
	// bl 0x835f96e8
	ctx.lr = 0x83B8D7F4;
	sub_835F96E8(ctx, base);
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// fmr f11,f30
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f30.f64;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// fmr f10,f31
	ctx.f10.f64 = ctx.f31.f64;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// fmr f9,f31
	ctx.f9.f64 = ctx.f31.f64;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f6,28576(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 28576);
	ctx.f6.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f4,28572(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28572);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,9008(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 9008);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r31,416
	ctx.r5.s64 = ctx.r31.s64 + 416;
	// lfs f7,28580(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 28580);
	ctx.f7.f64 = double(temp.f32);
	// li r6,7
	ctx.r6.s64 = 7;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f12,20780(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20780);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r30,384
	ctx.r3.s64 = ctx.r30.s64 + 384;
	// lfs f2,28568(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28568);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,28564(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28564);
	ctx.f1.f64 = double(temp.f32);
	// fmr f5,f7
	ctx.f5.f64 = ctx.f7.f64;
	// bl 0x835f96e8
	ctx.lr = 0x83B8D854;
	sub_835F96E8(ctx, base);
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// fmr f10,f31
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f31.f64;
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// fmr f9,f31
	ctx.f9.f64 = ctx.f31.f64;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// fmr f11,f30
	ctx.f11.f64 = ctx.f30.f64;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lfs f5,28560(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 28560);
	ctx.f5.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f4,28556(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28556);
	ctx.f4.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f3,28552(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28552);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r31,396
	ctx.r5.s64 = ctx.r31.s64 + 396;
	// lfs f12,16088(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16088);
	ctx.f12.f64 = double(temp.f32);
	// li r6,8
	ctx.r6.s64 = 8;
	// lfs f7,28548(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 28548);
	ctx.f7.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f6,28544(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 28544);
	ctx.f6.f64 = double(temp.f32);
	// addi r3,r30,448
	ctx.r3.s64 = ctx.r30.s64 + 448;
	// lfs f2,28812(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28812);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,28536(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28536);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x835f96e8
	ctx.lr = 0x83B8D8B8;
	sub_835F96E8(ctx, base);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// fmr f10,f31
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f31.f64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fmr f9,f31
	ctx.f9.f64 = ctx.f31.f64;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f6,-11416(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -11416);
	ctx.f6.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f3,28532(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28532);
	ctx.f3.f64 = double(temp.f32);
	// lfs f7,-24912(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24912);
	ctx.f7.f64 = double(temp.f32);
	// addi r5,r31,376
	ctx.r5.s64 = ctx.r31.s64 + 376;
	// li r6,10
	ctx.r6.s64 = 10;
	// lfs f12,22412(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 22412);
	ctx.f12.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f11,20240(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20240);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r30,512
	ctx.r3.s64 = ctx.r30.s64 + 512;
	// lfs f2,28528(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28528);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,28524(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28524);
	ctx.f1.f64 = double(temp.f32);
	// fmr f5,f7
	ctx.f5.f64 = ctx.f7.f64;
	// fmr f4,f7
	ctx.f4.f64 = ctx.f7.f64;
	// bl 0x835f96e8
	ctx.lr = 0x83B8D918;
	sub_835F96E8(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// fmr f10,f31
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f31.f64;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// fmr f9,f31
	ctx.f9.f64 = ctx.f31.f64;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// fmr f11,f29
	ctx.f11.f64 = ctx.f29.f64;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// lfs f27,28512(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 28512);
	ctx.f27.f64 = double(temp.f32);
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// lfs f26,5880(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5880);
	ctx.f26.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f7,28520(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 28520);
	ctx.f7.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f6,28516(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 28516);
	ctx.f6.f64 = double(temp.f32);
	// addi r5,r31,356
	ctx.r5.s64 = ctx.r31.s64 + 356;
	// fmr f12,f26
	ctx.f12.f64 = ctx.f26.f64;
	// lfs f4,28508(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28508);
	ctx.f4.f64 = double(temp.f32);
	// li r6,12
	ctx.r6.s64 = 12;
	// lfs f3,28504(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28504);
	ctx.f3.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,576
	ctx.r3.s64 = ctx.r30.s64 + 576;
	// lfs f2,28500(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28500);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,28496(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28496);
	ctx.f1.f64 = double(temp.f32);
	// fmr f5,f27
	ctx.f5.f64 = ctx.f27.f64;
	// bl 0x835f96e8
	ctx.lr = 0x83B8D984;
	sub_835F96E8(ctx, base);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lfs f25,27764(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 27764);
	ctx.f25.f64 = double(temp.f32);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lfs f30,-8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f30.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f10,f31
	ctx.f10.f64 = ctx.f31.f64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// fmr f9,f31
	ctx.f9.f64 = ctx.f31.f64;
	// lfs f24,28808(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28808);
	ctx.f24.f64 = double(temp.f32);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r29,-32252
	ctx.r29.s64 = -2113667072;
	// lfs f23,28804(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 28804);
	ctx.f23.f64 = double(temp.f32);
	// addi r5,r31,336
	ctx.r5.s64 = ctx.r31.s64 + 336;
	// lfs f6,28800(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 28800);
	ctx.f6.f64 = double(temp.f32);
	// li r6,13
	ctx.r6.s64 = 13;
	// lfs f4,28796(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28796);
	ctx.f4.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f3,28792(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28792);
	ctx.f3.f64 = double(temp.f32);
	// addi r3,r30,640
	ctx.r3.s64 = ctx.r30.s64 + 640;
	// lfs f1,28788(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28788);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,28784(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28784);
	ctx.f2.f64 = double(temp.f32);
	// fmr f12,f25
	ctx.f12.f64 = ctx.f25.f64;
	// fmr f11,f30
	ctx.f11.f64 = ctx.f30.f64;
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// fmr f7,f24
	ctx.f7.f64 = ctx.f24.f64;
	// fmr f5,f23
	ctx.f5.f64 = ctx.f23.f64;
	// bl 0x835f96e8
	ctx.lr = 0x83B8D9F4;
	sub_835F96E8(ctx, base);
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// fmr f10,f31
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f31.f64;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// fmr f9,f31
	ctx.f9.f64 = ctx.f31.f64;
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// fmr f11,f30
	ctx.f11.f64 = ctx.f30.f64;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f6,28780(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 28780);
	ctx.f6.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f4,28776(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28776);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,28772(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28772);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r31,316
	ctx.r5.s64 = ctx.r31.s64 + 316;
	// lfs f28,28768(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 28768);
	ctx.f28.f64 = double(temp.f32);
	// li r6,14
	ctx.r6.s64 = 14;
	// lfs f22,-11408(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -11408);
	ctx.f22.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,704
	ctx.r3.s64 = ctx.r30.s64 + 704;
	// lfs f2,28764(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28764);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,28760(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28760);
	ctx.f1.f64 = double(temp.f32);
	// fmr f7,f28
	ctx.f7.f64 = ctx.f28.f64;
	// fmr f12,f22
	ctx.f12.f64 = ctx.f22.f64;
	// fmr f5,f28
	ctx.f5.f64 = ctx.f28.f64;
	// bl 0x835f96e8
	ctx.lr = 0x83B8DA5C;
	sub_835F96E8(ctx, base);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// fmr f10,f31
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f31.f64;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// fmr f9,f31
	ctx.f9.f64 = ctx.f31.f64;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// fmr f7,f27
	ctx.f7.f64 = ctx.f27.f64;
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// fmr f12,f26
	ctx.f12.f64 = ctx.f26.f64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f2,28480(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28480);
	ctx.f2.f64 = double(temp.f32);
	// addi r5,r31,296
	ctx.r5.s64 = ctx.r31.s64 + 296;
	// lfs f6,28492(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28492);
	ctx.f6.f64 = double(temp.f32);
	// li r6,16
	ctx.r6.s64 = 16;
	// lfs f4,28488(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 28488);
	ctx.f4.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f3,28484(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 28484);
	ctx.f3.f64 = double(temp.f32);
	// addi r3,r30,768
	ctx.r3.s64 = ctx.r30.s64 + 768;
	// fmr f11,f29
	ctx.f11.f64 = ctx.f29.f64;
	// lfs f1,28476(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28476);
	ctx.f1.f64 = double(temp.f32);
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// fmr f5,f27
	ctx.f5.f64 = ctx.f27.f64;
	// bl 0x835f96e8
	ctx.lr = 0x83B8DAB4;
	sub_835F96E8(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// fmr f11,f30
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f30.f64;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// fmr f10,f31
	ctx.f10.f64 = ctx.f31.f64;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// fmr f9,f31
	ctx.f9.f64 = ctx.f31.f64;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f12,f25
	ctx.f12.f64 = ctx.f25.f64;
	// addi r5,r31,276
	ctx.r5.s64 = ctx.r31.s64 + 276;
	// lfs f6,28756(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28756);
	ctx.f6.f64 = double(temp.f32);
	// li r6,17
	ctx.r6.s64 = 17;
	// lfs f4,28752(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28752);
	ctx.f4.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f3,28748(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 28748);
	ctx.f3.f64 = double(temp.f32);
	// addi r3,r30,832
	ctx.r3.s64 = ctx.r30.s64 + 832;
	// lfs f2,28744(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 28744);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,28740(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28740);
	ctx.f1.f64 = double(temp.f32);
	// fmr f7,f23
	ctx.f7.f64 = ctx.f23.f64;
	// fmr f5,f24
	ctx.f5.f64 = ctx.f24.f64;
	// bl 0x835f96e8
	ctx.lr = 0x83B8DB0C;
	sub_835F96E8(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// fmr f10,f31
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f31.f64;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// fmr f9,f31
	ctx.f9.f64 = ctx.f31.f64;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// fmr f7,f28
	ctx.f7.f64 = ctx.f28.f64;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// fmr f12,f22
	ctx.f12.f64 = ctx.f22.f64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f11,f30
	ctx.f11.f64 = ctx.f30.f64;
	// addi r5,r31,256
	ctx.r5.s64 = ctx.r31.s64 + 256;
	// lfs f6,28736(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28736);
	ctx.f6.f64 = double(temp.f32);
	// li r6,18
	ctx.r6.s64 = 18;
	// lfs f4,28732(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28732);
	ctx.f4.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f3,28728(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 28728);
	ctx.f3.f64 = double(temp.f32);
	// addi r3,r30,896
	ctx.r3.s64 = ctx.r30.s64 + 896;
	// lfs f2,28724(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 28724);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,28720(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28720);
	ctx.f1.f64 = double(temp.f32);
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// fmr f5,f28
	ctx.f5.f64 = ctx.f28.f64;
	// bl 0x835f96e8
	ctx.lr = 0x83B8DB64;
	sub_835F96E8(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x831ce794
	ctx.lr = 0x83B8DB70;
	__restfpr_16(ctx, base);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8DB74"))) PPC_WEAK_FUNC(sub_83B8DB74);
PPC_FUNC_IMPL(__imp__sub_83B8DB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8DB78"))) PPC_WEAK_FUNC(sub_83B8DB78);
PPC_FUNC_IMPL(__imp__sub_83B8DB78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x831ce770
	ctx.lr = 0x83B8DB90;
	__savefpr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// lfs f31,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lfs f30,28840(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28840);
	ctx.f30.f64 = double(temp.f32);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lfs f28,3180(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 3180);
	ctx.f28.f64 = double(temp.f32);
	// lis r7,-31763
	ctx.r7.s64 = -2081619968;
	// lfs f27,28836(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28836);
	ctx.f27.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f26,28832(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28832);
	ctx.f26.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f3,20056(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20056);
	ctx.f3.f64 = double(temp.f32);
	// addi r31,r9,28320
	ctx.r31.s64 = ctx.r9.s64 + 28320;
	// fmr f10,f31
	ctx.f10.f64 = ctx.f31.f64;
	// addi r30,r7,-9040
	ctx.r30.s64 = ctx.r7.s64 + -9040;
	// lfs f29,28672(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 28672);
	ctx.f29.f64 = double(temp.f32);
	// addi r5,r31,24
	ctx.r5.s64 = ctx.r31.s64 + 24;
	// fmr f9,f31
	ctx.f9.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f2,28828(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28828);
	ctx.f2.f64 = double(temp.f32);
	// li r6,2
	ctx.r6.s64 = 2;
	// lfs f1,28824(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28824);
	ctx.f1.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f7,f30
	ctx.f7.f64 = ctx.f30.f64;
	// fmr f12,f29
	ctx.f12.f64 = ctx.f29.f64;
	// fmr f11,f28
	ctx.f11.f64 = ctx.f28.f64;
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// fmr f6,f27
	ctx.f6.f64 = ctx.f27.f64;
	// fmr f5,f30
	ctx.f5.f64 = ctx.f30.f64;
	// fmr f4,f26
	ctx.f4.f64 = ctx.f26.f64;
	// bl 0x835f96e8
	ctx.lr = 0x83B8DC24;
	sub_835F96E8(ctx, base);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// fmr f10,f31
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f31.f64;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// fmr f9,f31
	ctx.f9.f64 = ctx.f31.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// li r6,5
	ctx.r6.s64 = 5;
	// fmr f7,f30
	ctx.f7.f64 = ctx.f30.f64;
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f12,f29
	ctx.f12.f64 = ctx.f29.f64;
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// lfs f2,28820(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28820);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,28816(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 28816);
	ctx.f1.f64 = double(temp.f32);
	// fmr f11,f28
	ctx.f11.f64 = ctx.f28.f64;
	// fmr f6,f27
	ctx.f6.f64 = ctx.f27.f64;
	// fmr f5,f30
	ctx.f5.f64 = ctx.f30.f64;
	// fmr f4,f26
	ctx.f4.f64 = ctx.f26.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// bl 0x835f96e8
	ctx.lr = 0x83B8DC70;
	sub_835F96E8(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x831ce7bc
	ctx.lr = 0x83B8DC7C;
	__restfpr_26(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B8DC90"))) PPC_WEAK_FUNC(sub_83B8DC90);
PPC_FUNC_IMPL(__imp__sub_83B8DC90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8032
	ctx.r3.s64 = ctx.r11.s64 + -8032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8DC9C"))) PPC_WEAK_FUNC(sub_83B8DC9C);
PPC_FUNC_IMPL(__imp__sub_83B8DC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8DCA0"))) PPC_WEAK_FUNC(sub_83B8DCA0);
PPC_FUNC_IMPL(__imp__sub_83B8DCA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8024
	ctx.r3.s64 = ctx.r11.s64 + -8024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8DCAC"))) PPC_WEAK_FUNC(sub_83B8DCAC);
PPC_FUNC_IMPL(__imp__sub_83B8DCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8DCB0"))) PPC_WEAK_FUNC(sub_83B8DCB0);
PPC_FUNC_IMPL(__imp__sub_83B8DCB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8016
	ctx.r3.s64 = ctx.r11.s64 + -8016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8DCBC"))) PPC_WEAK_FUNC(sub_83B8DCBC);
PPC_FUNC_IMPL(__imp__sub_83B8DCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8DCC0"))) PPC_WEAK_FUNC(sub_83B8DCC0);
PPC_FUNC_IMPL(__imp__sub_83B8DCC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8008
	ctx.r3.s64 = ctx.r11.s64 + -8008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8DCCC"))) PPC_WEAK_FUNC(sub_83B8DCCC);
PPC_FUNC_IMPL(__imp__sub_83B8DCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8DCD0"))) PPC_WEAK_FUNC(sub_83B8DCD0);
PPC_FUNC_IMPL(__imp__sub_83B8DCD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-8000
	ctx.r3.s64 = ctx.r11.s64 + -8000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8DCDC"))) PPC_WEAK_FUNC(sub_83B8DCDC);
PPC_FUNC_IMPL(__imp__sub_83B8DCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8DCE0"))) PPC_WEAK_FUNC(sub_83B8DCE0);
PPC_FUNC_IMPL(__imp__sub_83B8DCE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7992
	ctx.r3.s64 = ctx.r11.s64 + -7992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8DCEC"))) PPC_WEAK_FUNC(sub_83B8DCEC);
PPC_FUNC_IMPL(__imp__sub_83B8DCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8DCF0"))) PPC_WEAK_FUNC(sub_83B8DCF0);
PPC_FUNC_IMPL(__imp__sub_83B8DCF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7984
	ctx.r3.s64 = ctx.r11.s64 + -7984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8DCFC"))) PPC_WEAK_FUNC(sub_83B8DCFC);
PPC_FUNC_IMPL(__imp__sub_83B8DCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8DD00"))) PPC_WEAK_FUNC(sub_83B8DD00);
PPC_FUNC_IMPL(__imp__sub_83B8DD00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7976
	ctx.r3.s64 = ctx.r11.s64 + -7976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8DD0C"))) PPC_WEAK_FUNC(sub_83B8DD0C);
PPC_FUNC_IMPL(__imp__sub_83B8DD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8DD10"))) PPC_WEAK_FUNC(sub_83B8DD10);
PPC_FUNC_IMPL(__imp__sub_83B8DD10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7968
	ctx.r3.s64 = ctx.r11.s64 + -7968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8DD1C"))) PPC_WEAK_FUNC(sub_83B8DD1C);
PPC_FUNC_IMPL(__imp__sub_83B8DD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8DD20"))) PPC_WEAK_FUNC(sub_83B8DD20);
PPC_FUNC_IMPL(__imp__sub_83B8DD20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7960
	ctx.r3.s64 = ctx.r11.s64 + -7960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8DD2C"))) PPC_WEAK_FUNC(sub_83B8DD2C);
PPC_FUNC_IMPL(__imp__sub_83B8DD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8DD30"))) PPC_WEAK_FUNC(sub_83B8DD30);
PPC_FUNC_IMPL(__imp__sub_83B8DD30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7952
	ctx.r3.s64 = ctx.r11.s64 + -7952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8DD3C"))) PPC_WEAK_FUNC(sub_83B8DD3C);
PPC_FUNC_IMPL(__imp__sub_83B8DD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8DD40"))) PPC_WEAK_FUNC(sub_83B8DD40);
PPC_FUNC_IMPL(__imp__sub_83B8DD40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7944
	ctx.r3.s64 = ctx.r11.s64 + -7944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8DD4C"))) PPC_WEAK_FUNC(sub_83B8DD4C);
PPC_FUNC_IMPL(__imp__sub_83B8DD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8DD50"))) PPC_WEAK_FUNC(sub_83B8DD50);
PPC_FUNC_IMPL(__imp__sub_83B8DD50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7936
	ctx.r3.s64 = ctx.r11.s64 + -7936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8DD5C"))) PPC_WEAK_FUNC(sub_83B8DD5C);
PPC_FUNC_IMPL(__imp__sub_83B8DD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8DD60"))) PPC_WEAK_FUNC(sub_83B8DD60);
PPC_FUNC_IMPL(__imp__sub_83B8DD60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7928
	ctx.r3.s64 = ctx.r11.s64 + -7928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8DD6C"))) PPC_WEAK_FUNC(sub_83B8DD6C);
PPC_FUNC_IMPL(__imp__sub_83B8DD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8DD70"))) PPC_WEAK_FUNC(sub_83B8DD70);
PPC_FUNC_IMPL(__imp__sub_83B8DD70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7920
	ctx.r3.s64 = ctx.r11.s64 + -7920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8DD7C"))) PPC_WEAK_FUNC(sub_83B8DD7C);
PPC_FUNC_IMPL(__imp__sub_83B8DD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8DD80"))) PPC_WEAK_FUNC(sub_83B8DD80);
PPC_FUNC_IMPL(__imp__sub_83B8DD80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7912
	ctx.r3.s64 = ctx.r11.s64 + -7912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8DD8C"))) PPC_WEAK_FUNC(sub_83B8DD8C);
PPC_FUNC_IMPL(__imp__sub_83B8DD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8DD90"))) PPC_WEAK_FUNC(sub_83B8DD90);
PPC_FUNC_IMPL(__imp__sub_83B8DD90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7904
	ctx.r3.s64 = ctx.r11.s64 + -7904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8DD9C"))) PPC_WEAK_FUNC(sub_83B8DD9C);
PPC_FUNC_IMPL(__imp__sub_83B8DD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8DDA0"))) PPC_WEAK_FUNC(sub_83B8DDA0);
PPC_FUNC_IMPL(__imp__sub_83B8DDA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7896
	ctx.r3.s64 = ctx.r11.s64 + -7896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8DDAC"))) PPC_WEAK_FUNC(sub_83B8DDAC);
PPC_FUNC_IMPL(__imp__sub_83B8DDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8DDB0"))) PPC_WEAK_FUNC(sub_83B8DDB0);
PPC_FUNC_IMPL(__imp__sub_83B8DDB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7888
	ctx.r3.s64 = ctx.r11.s64 + -7888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8DDBC"))) PPC_WEAK_FUNC(sub_83B8DDBC);
PPC_FUNC_IMPL(__imp__sub_83B8DDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8DDC0"))) PPC_WEAK_FUNC(sub_83B8DDC0);
PPC_FUNC_IMPL(__imp__sub_83B8DDC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7880
	ctx.r3.s64 = ctx.r11.s64 + -7880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8DDCC"))) PPC_WEAK_FUNC(sub_83B8DDCC);
PPC_FUNC_IMPL(__imp__sub_83B8DDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8DDD0"))) PPC_WEAK_FUNC(sub_83B8DDD0);
PPC_FUNC_IMPL(__imp__sub_83B8DDD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7872
	ctx.r3.s64 = ctx.r11.s64 + -7872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8DDDC"))) PPC_WEAK_FUNC(sub_83B8DDDC);
PPC_FUNC_IMPL(__imp__sub_83B8DDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8DDE0"))) PPC_WEAK_FUNC(sub_83B8DDE0);
PPC_FUNC_IMPL(__imp__sub_83B8DDE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7864
	ctx.r3.s64 = ctx.r11.s64 + -7864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8DDEC"))) PPC_WEAK_FUNC(sub_83B8DDEC);
PPC_FUNC_IMPL(__imp__sub_83B8DDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8DDF0"))) PPC_WEAK_FUNC(sub_83B8DDF0);
PPC_FUNC_IMPL(__imp__sub_83B8DDF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7856
	ctx.r3.s64 = ctx.r11.s64 + -7856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8DDFC"))) PPC_WEAK_FUNC(sub_83B8DDFC);
PPC_FUNC_IMPL(__imp__sub_83B8DDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8DE00"))) PPC_WEAK_FUNC(sub_83B8DE00);
PPC_FUNC_IMPL(__imp__sub_83B8DE00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7848
	ctx.r3.s64 = ctx.r11.s64 + -7848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8DE0C"))) PPC_WEAK_FUNC(sub_83B8DE0C);
PPC_FUNC_IMPL(__imp__sub_83B8DE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8DE10"))) PPC_WEAK_FUNC(sub_83B8DE10);
PPC_FUNC_IMPL(__imp__sub_83B8DE10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7840
	ctx.r3.s64 = ctx.r11.s64 + -7840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8DE1C"))) PPC_WEAK_FUNC(sub_83B8DE1C);
PPC_FUNC_IMPL(__imp__sub_83B8DE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8DE20"))) PPC_WEAK_FUNC(sub_83B8DE20);
PPC_FUNC_IMPL(__imp__sub_83B8DE20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7832
	ctx.r3.s64 = ctx.r11.s64 + -7832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8DE2C"))) PPC_WEAK_FUNC(sub_83B8DE2C);
PPC_FUNC_IMPL(__imp__sub_83B8DE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8DE30"))) PPC_WEAK_FUNC(sub_83B8DE30);
PPC_FUNC_IMPL(__imp__sub_83B8DE30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7824
	ctx.r3.s64 = ctx.r11.s64 + -7824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8DE3C"))) PPC_WEAK_FUNC(sub_83B8DE3C);
PPC_FUNC_IMPL(__imp__sub_83B8DE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8DE40"))) PPC_WEAK_FUNC(sub_83B8DE40);
PPC_FUNC_IMPL(__imp__sub_83B8DE40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7816
	ctx.r3.s64 = ctx.r11.s64 + -7816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8DE4C"))) PPC_WEAK_FUNC(sub_83B8DE4C);
PPC_FUNC_IMPL(__imp__sub_83B8DE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8DE50"))) PPC_WEAK_FUNC(sub_83B8DE50);
PPC_FUNC_IMPL(__imp__sub_83B8DE50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7808
	ctx.r3.s64 = ctx.r11.s64 + -7808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8DE5C"))) PPC_WEAK_FUNC(sub_83B8DE5C);
PPC_FUNC_IMPL(__imp__sub_83B8DE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8DE60"))) PPC_WEAK_FUNC(sub_83B8DE60);
PPC_FUNC_IMPL(__imp__sub_83B8DE60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7800
	ctx.r3.s64 = ctx.r11.s64 + -7800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8DE6C"))) PPC_WEAK_FUNC(sub_83B8DE6C);
PPC_FUNC_IMPL(__imp__sub_83B8DE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8DE70"))) PPC_WEAK_FUNC(sub_83B8DE70);
PPC_FUNC_IMPL(__imp__sub_83B8DE70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7792
	ctx.r3.s64 = ctx.r11.s64 + -7792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8DE7C"))) PPC_WEAK_FUNC(sub_83B8DE7C);
PPC_FUNC_IMPL(__imp__sub_83B8DE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8DE80"))) PPC_WEAK_FUNC(sub_83B8DE80);
PPC_FUNC_IMPL(__imp__sub_83B8DE80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7784
	ctx.r3.s64 = ctx.r11.s64 + -7784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8DE8C"))) PPC_WEAK_FUNC(sub_83B8DE8C);
PPC_FUNC_IMPL(__imp__sub_83B8DE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8DE90"))) PPC_WEAK_FUNC(sub_83B8DE90);
PPC_FUNC_IMPL(__imp__sub_83B8DE90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7776
	ctx.r3.s64 = ctx.r11.s64 + -7776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8DE9C"))) PPC_WEAK_FUNC(sub_83B8DE9C);
PPC_FUNC_IMPL(__imp__sub_83B8DE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8DEA0"))) PPC_WEAK_FUNC(sub_83B8DEA0);
PPC_FUNC_IMPL(__imp__sub_83B8DEA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7768
	ctx.r3.s64 = ctx.r11.s64 + -7768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8DEAC"))) PPC_WEAK_FUNC(sub_83B8DEAC);
PPC_FUNC_IMPL(__imp__sub_83B8DEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8DEB0"))) PPC_WEAK_FUNC(sub_83B8DEB0);
PPC_FUNC_IMPL(__imp__sub_83B8DEB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7760
	ctx.r3.s64 = ctx.r11.s64 + -7760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8DEBC"))) PPC_WEAK_FUNC(sub_83B8DEBC);
PPC_FUNC_IMPL(__imp__sub_83B8DEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8DEC0"))) PPC_WEAK_FUNC(sub_83B8DEC0);
PPC_FUNC_IMPL(__imp__sub_83B8DEC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7752
	ctx.r3.s64 = ctx.r11.s64 + -7752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8DECC"))) PPC_WEAK_FUNC(sub_83B8DECC);
PPC_FUNC_IMPL(__imp__sub_83B8DECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8DED0"))) PPC_WEAK_FUNC(sub_83B8DED0);
PPC_FUNC_IMPL(__imp__sub_83B8DED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7744
	ctx.r3.s64 = ctx.r11.s64 + -7744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8DEDC"))) PPC_WEAK_FUNC(sub_83B8DEDC);
PPC_FUNC_IMPL(__imp__sub_83B8DEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8DEE0"))) PPC_WEAK_FUNC(sub_83B8DEE0);
PPC_FUNC_IMPL(__imp__sub_83B8DEE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7736
	ctx.r3.s64 = ctx.r11.s64 + -7736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8DEEC"))) PPC_WEAK_FUNC(sub_83B8DEEC);
PPC_FUNC_IMPL(__imp__sub_83B8DEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8DEF0"))) PPC_WEAK_FUNC(sub_83B8DEF0);
PPC_FUNC_IMPL(__imp__sub_83B8DEF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7728
	ctx.r3.s64 = ctx.r11.s64 + -7728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8DEFC"))) PPC_WEAK_FUNC(sub_83B8DEFC);
PPC_FUNC_IMPL(__imp__sub_83B8DEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8DF00"))) PPC_WEAK_FUNC(sub_83B8DF00);
PPC_FUNC_IMPL(__imp__sub_83B8DF00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7720
	ctx.r3.s64 = ctx.r11.s64 + -7720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8DF0C"))) PPC_WEAK_FUNC(sub_83B8DF0C);
PPC_FUNC_IMPL(__imp__sub_83B8DF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8DF10"))) PPC_WEAK_FUNC(sub_83B8DF10);
PPC_FUNC_IMPL(__imp__sub_83B8DF10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7712
	ctx.r3.s64 = ctx.r11.s64 + -7712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8DF1C"))) PPC_WEAK_FUNC(sub_83B8DF1C);
PPC_FUNC_IMPL(__imp__sub_83B8DF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8DF20"))) PPC_WEAK_FUNC(sub_83B8DF20);
PPC_FUNC_IMPL(__imp__sub_83B8DF20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7704
	ctx.r3.s64 = ctx.r11.s64 + -7704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8DF2C"))) PPC_WEAK_FUNC(sub_83B8DF2C);
PPC_FUNC_IMPL(__imp__sub_83B8DF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8DF30"))) PPC_WEAK_FUNC(sub_83B8DF30);
PPC_FUNC_IMPL(__imp__sub_83B8DF30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7696
	ctx.r3.s64 = ctx.r11.s64 + -7696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8DF3C"))) PPC_WEAK_FUNC(sub_83B8DF3C);
PPC_FUNC_IMPL(__imp__sub_83B8DF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8DF40"))) PPC_WEAK_FUNC(sub_83B8DF40);
PPC_FUNC_IMPL(__imp__sub_83B8DF40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7688
	ctx.r3.s64 = ctx.r11.s64 + -7688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8DF4C"))) PPC_WEAK_FUNC(sub_83B8DF4C);
PPC_FUNC_IMPL(__imp__sub_83B8DF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8DF50"))) PPC_WEAK_FUNC(sub_83B8DF50);
PPC_FUNC_IMPL(__imp__sub_83B8DF50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7680
	ctx.r3.s64 = ctx.r11.s64 + -7680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8DF5C"))) PPC_WEAK_FUNC(sub_83B8DF5C);
PPC_FUNC_IMPL(__imp__sub_83B8DF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8DF60"))) PPC_WEAK_FUNC(sub_83B8DF60);
PPC_FUNC_IMPL(__imp__sub_83B8DF60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7672
	ctx.r3.s64 = ctx.r11.s64 + -7672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8DF6C"))) PPC_WEAK_FUNC(sub_83B8DF6C);
PPC_FUNC_IMPL(__imp__sub_83B8DF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8DF70"))) PPC_WEAK_FUNC(sub_83B8DF70);
PPC_FUNC_IMPL(__imp__sub_83B8DF70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7664
	ctx.r3.s64 = ctx.r11.s64 + -7664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8DF7C"))) PPC_WEAK_FUNC(sub_83B8DF7C);
PPC_FUNC_IMPL(__imp__sub_83B8DF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8DF80"))) PPC_WEAK_FUNC(sub_83B8DF80);
PPC_FUNC_IMPL(__imp__sub_83B8DF80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7656
	ctx.r3.s64 = ctx.r11.s64 + -7656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8DF8C"))) PPC_WEAK_FUNC(sub_83B8DF8C);
PPC_FUNC_IMPL(__imp__sub_83B8DF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8DF90"))) PPC_WEAK_FUNC(sub_83B8DF90);
PPC_FUNC_IMPL(__imp__sub_83B8DF90) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-7168
	ctx.r7.s64 = ctx.r8.s64 + -7168;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-7168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7168);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-7168(r8)
	PPC_STORE_U32(ctx.r8.u32 + -7168, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B8DFB8"))) PPC_WEAK_FUNC(sub_83B8DFB8);
PPC_FUNC_IMPL(__imp__sub_83B8DFB8) {
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
	// addi r3,r11,-7172
	ctx.r3.s64 = ctx.r11.s64 + -7172;
	// bl 0x83523120
	ctx.lr = 0x83B8DFD0;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-7648
	ctx.r3.s64 = ctx.r10.s64 + -7648;
	// bl 0x831cdcc8
	ctx.lr = 0x83B8DFDC;
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

__attribute__((alias("__imp__sub_83B8DFEC"))) PPC_WEAK_FUNC(sub_83B8DFEC);
PPC_FUNC_IMPL(__imp__sub_83B8DFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8DFF0"))) PPC_WEAK_FUNC(sub_83B8DFF0);
PPC_FUNC_IMPL(__imp__sub_83B8DFF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7632
	ctx.r3.s64 = ctx.r11.s64 + -7632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8DFFC"))) PPC_WEAK_FUNC(sub_83B8DFFC);
PPC_FUNC_IMPL(__imp__sub_83B8DFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E000"))) PPC_WEAK_FUNC(sub_83B8E000);
PPC_FUNC_IMPL(__imp__sub_83B8E000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7624
	ctx.r3.s64 = ctx.r11.s64 + -7624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E00C"))) PPC_WEAK_FUNC(sub_83B8E00C);
PPC_FUNC_IMPL(__imp__sub_83B8E00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E010"))) PPC_WEAK_FUNC(sub_83B8E010);
PPC_FUNC_IMPL(__imp__sub_83B8E010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7616
	ctx.r3.s64 = ctx.r11.s64 + -7616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E01C"))) PPC_WEAK_FUNC(sub_83B8E01C);
PPC_FUNC_IMPL(__imp__sub_83B8E01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E020"))) PPC_WEAK_FUNC(sub_83B8E020);
PPC_FUNC_IMPL(__imp__sub_83B8E020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7608
	ctx.r3.s64 = ctx.r11.s64 + -7608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E02C"))) PPC_WEAK_FUNC(sub_83B8E02C);
PPC_FUNC_IMPL(__imp__sub_83B8E02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E030"))) PPC_WEAK_FUNC(sub_83B8E030);
PPC_FUNC_IMPL(__imp__sub_83B8E030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7600
	ctx.r3.s64 = ctx.r11.s64 + -7600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E03C"))) PPC_WEAK_FUNC(sub_83B8E03C);
PPC_FUNC_IMPL(__imp__sub_83B8E03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E040"))) PPC_WEAK_FUNC(sub_83B8E040);
PPC_FUNC_IMPL(__imp__sub_83B8E040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7592
	ctx.r3.s64 = ctx.r11.s64 + -7592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E04C"))) PPC_WEAK_FUNC(sub_83B8E04C);
PPC_FUNC_IMPL(__imp__sub_83B8E04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E050"))) PPC_WEAK_FUNC(sub_83B8E050);
PPC_FUNC_IMPL(__imp__sub_83B8E050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7584
	ctx.r3.s64 = ctx.r11.s64 + -7584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E05C"))) PPC_WEAK_FUNC(sub_83B8E05C);
PPC_FUNC_IMPL(__imp__sub_83B8E05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E060"))) PPC_WEAK_FUNC(sub_83B8E060);
PPC_FUNC_IMPL(__imp__sub_83B8E060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7576
	ctx.r3.s64 = ctx.r11.s64 + -7576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E06C"))) PPC_WEAK_FUNC(sub_83B8E06C);
PPC_FUNC_IMPL(__imp__sub_83B8E06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E070"))) PPC_WEAK_FUNC(sub_83B8E070);
PPC_FUNC_IMPL(__imp__sub_83B8E070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7568
	ctx.r3.s64 = ctx.r11.s64 + -7568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E07C"))) PPC_WEAK_FUNC(sub_83B8E07C);
PPC_FUNC_IMPL(__imp__sub_83B8E07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E080"))) PPC_WEAK_FUNC(sub_83B8E080);
PPC_FUNC_IMPL(__imp__sub_83B8E080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7560
	ctx.r3.s64 = ctx.r11.s64 + -7560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E08C"))) PPC_WEAK_FUNC(sub_83B8E08C);
PPC_FUNC_IMPL(__imp__sub_83B8E08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E090"))) PPC_WEAK_FUNC(sub_83B8E090);
PPC_FUNC_IMPL(__imp__sub_83B8E090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7552
	ctx.r3.s64 = ctx.r11.s64 + -7552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E09C"))) PPC_WEAK_FUNC(sub_83B8E09C);
PPC_FUNC_IMPL(__imp__sub_83B8E09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E0A0"))) PPC_WEAK_FUNC(sub_83B8E0A0);
PPC_FUNC_IMPL(__imp__sub_83B8E0A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7544
	ctx.r3.s64 = ctx.r11.s64 + -7544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E0AC"))) PPC_WEAK_FUNC(sub_83B8E0AC);
PPC_FUNC_IMPL(__imp__sub_83B8E0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E0B0"))) PPC_WEAK_FUNC(sub_83B8E0B0);
PPC_FUNC_IMPL(__imp__sub_83B8E0B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7536
	ctx.r3.s64 = ctx.r11.s64 + -7536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E0BC"))) PPC_WEAK_FUNC(sub_83B8E0BC);
PPC_FUNC_IMPL(__imp__sub_83B8E0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E0C0"))) PPC_WEAK_FUNC(sub_83B8E0C0);
PPC_FUNC_IMPL(__imp__sub_83B8E0C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7528
	ctx.r3.s64 = ctx.r11.s64 + -7528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E0CC"))) PPC_WEAK_FUNC(sub_83B8E0CC);
PPC_FUNC_IMPL(__imp__sub_83B8E0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E0D0"))) PPC_WEAK_FUNC(sub_83B8E0D0);
PPC_FUNC_IMPL(__imp__sub_83B8E0D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7520
	ctx.r3.s64 = ctx.r11.s64 + -7520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E0DC"))) PPC_WEAK_FUNC(sub_83B8E0DC);
PPC_FUNC_IMPL(__imp__sub_83B8E0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E0E0"))) PPC_WEAK_FUNC(sub_83B8E0E0);
PPC_FUNC_IMPL(__imp__sub_83B8E0E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7512
	ctx.r3.s64 = ctx.r11.s64 + -7512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E0EC"))) PPC_WEAK_FUNC(sub_83B8E0EC);
PPC_FUNC_IMPL(__imp__sub_83B8E0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E0F0"))) PPC_WEAK_FUNC(sub_83B8E0F0);
PPC_FUNC_IMPL(__imp__sub_83B8E0F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7504
	ctx.r3.s64 = ctx.r11.s64 + -7504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E0FC"))) PPC_WEAK_FUNC(sub_83B8E0FC);
PPC_FUNC_IMPL(__imp__sub_83B8E0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E100"))) PPC_WEAK_FUNC(sub_83B8E100);
PPC_FUNC_IMPL(__imp__sub_83B8E100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7496
	ctx.r3.s64 = ctx.r11.s64 + -7496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E10C"))) PPC_WEAK_FUNC(sub_83B8E10C);
PPC_FUNC_IMPL(__imp__sub_83B8E10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E110"))) PPC_WEAK_FUNC(sub_83B8E110);
PPC_FUNC_IMPL(__imp__sub_83B8E110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7488
	ctx.r3.s64 = ctx.r11.s64 + -7488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8E11C"))) PPC_WEAK_FUNC(sub_83B8E11C);
PPC_FUNC_IMPL(__imp__sub_83B8E11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8E120"))) PPC_WEAK_FUNC(sub_83B8E120);
PPC_FUNC_IMPL(__imp__sub_83B8E120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-7480
	ctx.r3.s64 = ctx.r11.s64 + -7480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

