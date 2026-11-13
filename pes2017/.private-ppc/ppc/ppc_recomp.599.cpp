#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BA3010"))) PPC_WEAK_FUNC(sub_83BA3010);
PPC_FUNC_IMPL(__imp__sub_83BA3010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26152
	ctx.r3.s64 = ctx.r11.s64 + 26152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA301C"))) PPC_WEAK_FUNC(sub_83BA301C);
PPC_FUNC_IMPL(__imp__sub_83BA301C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3020"))) PPC_WEAK_FUNC(sub_83BA3020);
PPC_FUNC_IMPL(__imp__sub_83BA3020) {
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
	// addi r3,r11,5672
	ctx.r3.s64 = ctx.r11.s64 + 5672;
	// bl 0x8259af80
	ctx.lr = 0x83BA3038;
	sub_8259AF80(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,26168
	ctx.r3.s64 = ctx.r10.s64 + 26168;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA3044;
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

__attribute__((alias("__imp__sub_83BA3054"))) PPC_WEAK_FUNC(sub_83BA3054);
PPC_FUNC_IMPL(__imp__sub_83BA3054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3058"))) PPC_WEAK_FUNC(sub_83BA3058);
PPC_FUNC_IMPL(__imp__sub_83BA3058) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,5652
	ctx.r11.s64 = ctx.r8.s64 + 5652;
	// lis r6,-31792
	ctx.r6.s64 = -2083520512;
	// lwz r10,22260(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22260);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,26160
	ctx.r3.s64 = ctx.r6.s64 + 26160;
	// stw r10,5652(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5652, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3088"))) PPC_WEAK_FUNC(sub_83BA3088);
PPC_FUNC_IMPL(__imp__sub_83BA3088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26176
	ctx.r3.s64 = ctx.r11.s64 + 26176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3094"))) PPC_WEAK_FUNC(sub_83BA3094);
PPC_FUNC_IMPL(__imp__sub_83BA3094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3098"))) PPC_WEAK_FUNC(sub_83BA3098);
PPC_FUNC_IMPL(__imp__sub_83BA3098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26184
	ctx.r3.s64 = ctx.r11.s64 + 26184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA30A4"))) PPC_WEAK_FUNC(sub_83BA30A4);
PPC_FUNC_IMPL(__imp__sub_83BA30A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA30A8"))) PPC_WEAK_FUNC(sub_83BA30A8);
PPC_FUNC_IMPL(__imp__sub_83BA30A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26192
	ctx.r3.s64 = ctx.r11.s64 + 26192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA30B4"))) PPC_WEAK_FUNC(sub_83BA30B4);
PPC_FUNC_IMPL(__imp__sub_83BA30B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA30B8"))) PPC_WEAK_FUNC(sub_83BA30B8);
PPC_FUNC_IMPL(__imp__sub_83BA30B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26200
	ctx.r3.s64 = ctx.r11.s64 + 26200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA30C4"))) PPC_WEAK_FUNC(sub_83BA30C4);
PPC_FUNC_IMPL(__imp__sub_83BA30C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA30C8"))) PPC_WEAK_FUNC(sub_83BA30C8);
PPC_FUNC_IMPL(__imp__sub_83BA30C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26208
	ctx.r3.s64 = ctx.r11.s64 + 26208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA30D4"))) PPC_WEAK_FUNC(sub_83BA30D4);
PPC_FUNC_IMPL(__imp__sub_83BA30D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA30D8"))) PPC_WEAK_FUNC(sub_83BA30D8);
PPC_FUNC_IMPL(__imp__sub_83BA30D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26216
	ctx.r3.s64 = ctx.r11.s64 + 26216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA30E4"))) PPC_WEAK_FUNC(sub_83BA30E4);
PPC_FUNC_IMPL(__imp__sub_83BA30E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA30E8"))) PPC_WEAK_FUNC(sub_83BA30E8);
PPC_FUNC_IMPL(__imp__sub_83BA30E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26224
	ctx.r3.s64 = ctx.r11.s64 + 26224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA30F4"))) PPC_WEAK_FUNC(sub_83BA30F4);
PPC_FUNC_IMPL(__imp__sub_83BA30F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA30F8"))) PPC_WEAK_FUNC(sub_83BA30F8);
PPC_FUNC_IMPL(__imp__sub_83BA30F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26232
	ctx.r3.s64 = ctx.r11.s64 + 26232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3104"))) PPC_WEAK_FUNC(sub_83BA3104);
PPC_FUNC_IMPL(__imp__sub_83BA3104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3108"))) PPC_WEAK_FUNC(sub_83BA3108);
PPC_FUNC_IMPL(__imp__sub_83BA3108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26240
	ctx.r3.s64 = ctx.r11.s64 + 26240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3114"))) PPC_WEAK_FUNC(sub_83BA3114);
PPC_FUNC_IMPL(__imp__sub_83BA3114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3118"))) PPC_WEAK_FUNC(sub_83BA3118);
PPC_FUNC_IMPL(__imp__sub_83BA3118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26248
	ctx.r3.s64 = ctx.r11.s64 + 26248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3124"))) PPC_WEAK_FUNC(sub_83BA3124);
PPC_FUNC_IMPL(__imp__sub_83BA3124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3128"))) PPC_WEAK_FUNC(sub_83BA3128);
PPC_FUNC_IMPL(__imp__sub_83BA3128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26256
	ctx.r3.s64 = ctx.r11.s64 + 26256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3134"))) PPC_WEAK_FUNC(sub_83BA3134);
PPC_FUNC_IMPL(__imp__sub_83BA3134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3138"))) PPC_WEAK_FUNC(sub_83BA3138);
PPC_FUNC_IMPL(__imp__sub_83BA3138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26264
	ctx.r3.s64 = ctx.r11.s64 + 26264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3144"))) PPC_WEAK_FUNC(sub_83BA3144);
PPC_FUNC_IMPL(__imp__sub_83BA3144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3148"))) PPC_WEAK_FUNC(sub_83BA3148);
PPC_FUNC_IMPL(__imp__sub_83BA3148) {
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
	// addi r3,r11,6016
	ctx.r3.s64 = ctx.r11.s64 + 6016;
	// bl 0x83523120
	ctx.lr = 0x83BA3160;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,26272
	ctx.r3.s64 = ctx.r10.s64 + 26272;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA316C;
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

__attribute__((alias("__imp__sub_83BA317C"))) PPC_WEAK_FUNC(sub_83BA317C);
PPC_FUNC_IMPL(__imp__sub_83BA317C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3180"))) PPC_WEAK_FUNC(sub_83BA3180);
PPC_FUNC_IMPL(__imp__sub_83BA3180) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,6032
	ctx.r7.s64 = ctx.r8.s64 + 6032;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,6032(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6032);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,6032(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6032, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA31A8"))) PPC_WEAK_FUNC(sub_83BA31A8);
PPC_FUNC_IMPL(__imp__sub_83BA31A8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,22416
	ctx.r6.s64 = ctx.r7.s64 + 22416;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,22344(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 22344);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,6032(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6032);
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
	// std r9,22416(r7)
	PPC_STORE_U64(ctx.r7.u32 + 22416, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA31F0"))) PPC_WEAK_FUNC(sub_83BA31F0);
PPC_FUNC_IMPL(__imp__sub_83BA31F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26288
	ctx.r3.s64 = ctx.r11.s64 + 26288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA31FC"))) PPC_WEAK_FUNC(sub_83BA31FC);
PPC_FUNC_IMPL(__imp__sub_83BA31FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3200"))) PPC_WEAK_FUNC(sub_83BA3200);
PPC_FUNC_IMPL(__imp__sub_83BA3200) {
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
	// addi r3,r11,6040
	ctx.r3.s64 = ctx.r11.s64 + 6040;
	// bl 0x8259af80
	ctx.lr = 0x83BA3218;
	sub_8259AF80(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,26304
	ctx.r3.s64 = ctx.r10.s64 + 26304;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA3224;
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

__attribute__((alias("__imp__sub_83BA3234"))) PPC_WEAK_FUNC(sub_83BA3234);
PPC_FUNC_IMPL(__imp__sub_83BA3234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3238"))) PPC_WEAK_FUNC(sub_83BA3238);
PPC_FUNC_IMPL(__imp__sub_83BA3238) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,6020
	ctx.r11.s64 = ctx.r8.s64 + 6020;
	// lis r6,-31792
	ctx.r6.s64 = -2083520512;
	// lwz r10,22392(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22392);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,26296
	ctx.r3.s64 = ctx.r6.s64 + 26296;
	// stw r10,6020(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6020, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3268"))) PPC_WEAK_FUNC(sub_83BA3268);
PPC_FUNC_IMPL(__imp__sub_83BA3268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26312
	ctx.r3.s64 = ctx.r11.s64 + 26312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3274"))) PPC_WEAK_FUNC(sub_83BA3274);
PPC_FUNC_IMPL(__imp__sub_83BA3274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3278"))) PPC_WEAK_FUNC(sub_83BA3278);
PPC_FUNC_IMPL(__imp__sub_83BA3278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26320
	ctx.r3.s64 = ctx.r11.s64 + 26320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3284"))) PPC_WEAK_FUNC(sub_83BA3284);
PPC_FUNC_IMPL(__imp__sub_83BA3284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3288"))) PPC_WEAK_FUNC(sub_83BA3288);
PPC_FUNC_IMPL(__imp__sub_83BA3288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26328
	ctx.r3.s64 = ctx.r11.s64 + 26328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3294"))) PPC_WEAK_FUNC(sub_83BA3294);
PPC_FUNC_IMPL(__imp__sub_83BA3294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3298"))) PPC_WEAK_FUNC(sub_83BA3298);
PPC_FUNC_IMPL(__imp__sub_83BA3298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26336
	ctx.r3.s64 = ctx.r11.s64 + 26336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA32A4"))) PPC_WEAK_FUNC(sub_83BA32A4);
PPC_FUNC_IMPL(__imp__sub_83BA32A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA32A8"))) PPC_WEAK_FUNC(sub_83BA32A8);
PPC_FUNC_IMPL(__imp__sub_83BA32A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26344
	ctx.r3.s64 = ctx.r11.s64 + 26344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA32B4"))) PPC_WEAK_FUNC(sub_83BA32B4);
PPC_FUNC_IMPL(__imp__sub_83BA32B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA32B8"))) PPC_WEAK_FUNC(sub_83BA32B8);
PPC_FUNC_IMPL(__imp__sub_83BA32B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26352
	ctx.r3.s64 = ctx.r11.s64 + 26352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA32C4"))) PPC_WEAK_FUNC(sub_83BA32C4);
PPC_FUNC_IMPL(__imp__sub_83BA32C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA32C8"))) PPC_WEAK_FUNC(sub_83BA32C8);
PPC_FUNC_IMPL(__imp__sub_83BA32C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26360
	ctx.r3.s64 = ctx.r11.s64 + 26360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA32D4"))) PPC_WEAK_FUNC(sub_83BA32D4);
PPC_FUNC_IMPL(__imp__sub_83BA32D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA32D8"))) PPC_WEAK_FUNC(sub_83BA32D8);
PPC_FUNC_IMPL(__imp__sub_83BA32D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26368
	ctx.r3.s64 = ctx.r11.s64 + 26368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA32E4"))) PPC_WEAK_FUNC(sub_83BA32E4);
PPC_FUNC_IMPL(__imp__sub_83BA32E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA32E8"))) PPC_WEAK_FUNC(sub_83BA32E8);
PPC_FUNC_IMPL(__imp__sub_83BA32E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26376
	ctx.r3.s64 = ctx.r11.s64 + 26376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA32F4"))) PPC_WEAK_FUNC(sub_83BA32F4);
PPC_FUNC_IMPL(__imp__sub_83BA32F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA32F8"))) PPC_WEAK_FUNC(sub_83BA32F8);
PPC_FUNC_IMPL(__imp__sub_83BA32F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26384
	ctx.r3.s64 = ctx.r11.s64 + 26384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3304"))) PPC_WEAK_FUNC(sub_83BA3304);
PPC_FUNC_IMPL(__imp__sub_83BA3304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3308"))) PPC_WEAK_FUNC(sub_83BA3308);
PPC_FUNC_IMPL(__imp__sub_83BA3308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26392
	ctx.r3.s64 = ctx.r11.s64 + 26392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3314"))) PPC_WEAK_FUNC(sub_83BA3314);
PPC_FUNC_IMPL(__imp__sub_83BA3314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3318"))) PPC_WEAK_FUNC(sub_83BA3318);
PPC_FUNC_IMPL(__imp__sub_83BA3318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26400
	ctx.r3.s64 = ctx.r11.s64 + 26400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3324"))) PPC_WEAK_FUNC(sub_83BA3324);
PPC_FUNC_IMPL(__imp__sub_83BA3324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3328"))) PPC_WEAK_FUNC(sub_83BA3328);
PPC_FUNC_IMPL(__imp__sub_83BA3328) {
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
	// addi r3,r11,6384
	ctx.r3.s64 = ctx.r11.s64 + 6384;
	// bl 0x83523120
	ctx.lr = 0x83BA3340;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,26408
	ctx.r3.s64 = ctx.r10.s64 + 26408;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA334C;
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

__attribute__((alias("__imp__sub_83BA335C"))) PPC_WEAK_FUNC(sub_83BA335C);
PPC_FUNC_IMPL(__imp__sub_83BA335C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3360"))) PPC_WEAK_FUNC(sub_83BA3360);
PPC_FUNC_IMPL(__imp__sub_83BA3360) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,6400
	ctx.r7.s64 = ctx.r8.s64 + 6400;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,6400(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6400);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,6400(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6400, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA3388"))) PPC_WEAK_FUNC(sub_83BA3388);
PPC_FUNC_IMPL(__imp__sub_83BA3388) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,22548
	ctx.r6.s64 = ctx.r7.s64 + 22548;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,22476(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 22476);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,6400(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6400);
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
	// std r9,22548(r7)
	PPC_STORE_U64(ctx.r7.u32 + 22548, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA33D0"))) PPC_WEAK_FUNC(sub_83BA33D0);
PPC_FUNC_IMPL(__imp__sub_83BA33D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26424
	ctx.r3.s64 = ctx.r11.s64 + 26424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA33DC"))) PPC_WEAK_FUNC(sub_83BA33DC);
PPC_FUNC_IMPL(__imp__sub_83BA33DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA33E0"))) PPC_WEAK_FUNC(sub_83BA33E0);
PPC_FUNC_IMPL(__imp__sub_83BA33E0) {
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
	// addi r3,r11,6408
	ctx.r3.s64 = ctx.r11.s64 + 6408;
	// bl 0x8259af80
	ctx.lr = 0x83BA33F8;
	sub_8259AF80(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,26440
	ctx.r3.s64 = ctx.r10.s64 + 26440;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA3404;
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

__attribute__((alias("__imp__sub_83BA3414"))) PPC_WEAK_FUNC(sub_83BA3414);
PPC_FUNC_IMPL(__imp__sub_83BA3414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3418"))) PPC_WEAK_FUNC(sub_83BA3418);
PPC_FUNC_IMPL(__imp__sub_83BA3418) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,6388
	ctx.r11.s64 = ctx.r8.s64 + 6388;
	// lis r6,-31792
	ctx.r6.s64 = -2083520512;
	// lwz r10,22524(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22524);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,26432
	ctx.r3.s64 = ctx.r6.s64 + 26432;
	// stw r10,6388(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6388, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3448"))) PPC_WEAK_FUNC(sub_83BA3448);
PPC_FUNC_IMPL(__imp__sub_83BA3448) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// addi r4,r11,-22520
	ctx.r4.s64 = ctx.r11.s64 + -22520;
	// addi r3,r10,22572
	ctx.r3.s64 = ctx.r10.s64 + 22572;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83BA346C;
	sub_8259CC28(ctx, base);
	// lis r9,-31792
	ctx.r9.s64 = -2083520512;
	// addi r3,r9,26448
	ctx.r3.s64 = ctx.r9.s64 + 26448;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA3478;
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

__attribute__((alias("__imp__sub_83BA3488"))) PPC_WEAK_FUNC(sub_83BA3488);
PPC_FUNC_IMPL(__imp__sub_83BA3488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26552
	ctx.r3.s64 = ctx.r11.s64 + 26552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3494"))) PPC_WEAK_FUNC(sub_83BA3494);
PPC_FUNC_IMPL(__imp__sub_83BA3494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3498"))) PPC_WEAK_FUNC(sub_83BA3498);
PPC_FUNC_IMPL(__imp__sub_83BA3498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26560
	ctx.r3.s64 = ctx.r11.s64 + 26560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA34A4"))) PPC_WEAK_FUNC(sub_83BA34A4);
PPC_FUNC_IMPL(__imp__sub_83BA34A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA34A8"))) PPC_WEAK_FUNC(sub_83BA34A8);
PPC_FUNC_IMPL(__imp__sub_83BA34A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26568
	ctx.r3.s64 = ctx.r11.s64 + 26568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA34B4"))) PPC_WEAK_FUNC(sub_83BA34B4);
PPC_FUNC_IMPL(__imp__sub_83BA34B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA34B8"))) PPC_WEAK_FUNC(sub_83BA34B8);
PPC_FUNC_IMPL(__imp__sub_83BA34B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26576
	ctx.r3.s64 = ctx.r11.s64 + 26576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA34C4"))) PPC_WEAK_FUNC(sub_83BA34C4);
PPC_FUNC_IMPL(__imp__sub_83BA34C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA34C8"))) PPC_WEAK_FUNC(sub_83BA34C8);
PPC_FUNC_IMPL(__imp__sub_83BA34C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26584
	ctx.r3.s64 = ctx.r11.s64 + 26584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA34D4"))) PPC_WEAK_FUNC(sub_83BA34D4);
PPC_FUNC_IMPL(__imp__sub_83BA34D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA34D8"))) PPC_WEAK_FUNC(sub_83BA34D8);
PPC_FUNC_IMPL(__imp__sub_83BA34D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26592
	ctx.r3.s64 = ctx.r11.s64 + 26592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA34E4"))) PPC_WEAK_FUNC(sub_83BA34E4);
PPC_FUNC_IMPL(__imp__sub_83BA34E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA34E8"))) PPC_WEAK_FUNC(sub_83BA34E8);
PPC_FUNC_IMPL(__imp__sub_83BA34E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26600
	ctx.r3.s64 = ctx.r11.s64 + 26600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA34F4"))) PPC_WEAK_FUNC(sub_83BA34F4);
PPC_FUNC_IMPL(__imp__sub_83BA34F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA34F8"))) PPC_WEAK_FUNC(sub_83BA34F8);
PPC_FUNC_IMPL(__imp__sub_83BA34F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26608
	ctx.r3.s64 = ctx.r11.s64 + 26608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3504"))) PPC_WEAK_FUNC(sub_83BA3504);
PPC_FUNC_IMPL(__imp__sub_83BA3504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3508"))) PPC_WEAK_FUNC(sub_83BA3508);
PPC_FUNC_IMPL(__imp__sub_83BA3508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26616
	ctx.r3.s64 = ctx.r11.s64 + 26616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3514"))) PPC_WEAK_FUNC(sub_83BA3514);
PPC_FUNC_IMPL(__imp__sub_83BA3514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3518"))) PPC_WEAK_FUNC(sub_83BA3518);
PPC_FUNC_IMPL(__imp__sub_83BA3518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26624
	ctx.r3.s64 = ctx.r11.s64 + 26624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3524"))) PPC_WEAK_FUNC(sub_83BA3524);
PPC_FUNC_IMPL(__imp__sub_83BA3524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3528"))) PPC_WEAK_FUNC(sub_83BA3528);
PPC_FUNC_IMPL(__imp__sub_83BA3528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26632
	ctx.r3.s64 = ctx.r11.s64 + 26632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3534"))) PPC_WEAK_FUNC(sub_83BA3534);
PPC_FUNC_IMPL(__imp__sub_83BA3534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3538"))) PPC_WEAK_FUNC(sub_83BA3538);
PPC_FUNC_IMPL(__imp__sub_83BA3538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26640
	ctx.r3.s64 = ctx.r11.s64 + 26640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3544"))) PPC_WEAK_FUNC(sub_83BA3544);
PPC_FUNC_IMPL(__imp__sub_83BA3544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3548"))) PPC_WEAK_FUNC(sub_83BA3548);
PPC_FUNC_IMPL(__imp__sub_83BA3548) {
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
	// addi r3,r11,6752
	ctx.r3.s64 = ctx.r11.s64 + 6752;
	// bl 0x83523120
	ctx.lr = 0x83BA3560;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,26648
	ctx.r3.s64 = ctx.r10.s64 + 26648;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA356C;
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

__attribute__((alias("__imp__sub_83BA357C"))) PPC_WEAK_FUNC(sub_83BA357C);
PPC_FUNC_IMPL(__imp__sub_83BA357C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3580"))) PPC_WEAK_FUNC(sub_83BA3580);
PPC_FUNC_IMPL(__imp__sub_83BA3580) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,6768
	ctx.r7.s64 = ctx.r8.s64 + 6768;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,6768(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6768);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,6768(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6768, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA35A8"))) PPC_WEAK_FUNC(sub_83BA35A8);
PPC_FUNC_IMPL(__imp__sub_83BA35A8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,22704
	ctx.r6.s64 = ctx.r7.s64 + 22704;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,22632(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 22632);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,6768(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6768);
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
	// std r9,22704(r7)
	PPC_STORE_U64(ctx.r7.u32 + 22704, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA35F0"))) PPC_WEAK_FUNC(sub_83BA35F0);
PPC_FUNC_IMPL(__imp__sub_83BA35F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26664
	ctx.r3.s64 = ctx.r11.s64 + 26664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA35FC"))) PPC_WEAK_FUNC(sub_83BA35FC);
PPC_FUNC_IMPL(__imp__sub_83BA35FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3600"))) PPC_WEAK_FUNC(sub_83BA3600);
PPC_FUNC_IMPL(__imp__sub_83BA3600) {
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
	// addi r3,r11,6776
	ctx.r3.s64 = ctx.r11.s64 + 6776;
	// bl 0x8259af80
	ctx.lr = 0x83BA3618;
	sub_8259AF80(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,26680
	ctx.r3.s64 = ctx.r10.s64 + 26680;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA3624;
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

__attribute__((alias("__imp__sub_83BA3634"))) PPC_WEAK_FUNC(sub_83BA3634);
PPC_FUNC_IMPL(__imp__sub_83BA3634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3638"))) PPC_WEAK_FUNC(sub_83BA3638);
PPC_FUNC_IMPL(__imp__sub_83BA3638) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,6756
	ctx.r11.s64 = ctx.r8.s64 + 6756;
	// lis r6,-31792
	ctx.r6.s64 = -2083520512;
	// lwz r10,22680(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22680);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,26672
	ctx.r3.s64 = ctx.r6.s64 + 26672;
	// stw r10,6756(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6756, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3668"))) PPC_WEAK_FUNC(sub_83BA3668);
PPC_FUNC_IMPL(__imp__sub_83BA3668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26688
	ctx.r3.s64 = ctx.r11.s64 + 26688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3674"))) PPC_WEAK_FUNC(sub_83BA3674);
PPC_FUNC_IMPL(__imp__sub_83BA3674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3678"))) PPC_WEAK_FUNC(sub_83BA3678);
PPC_FUNC_IMPL(__imp__sub_83BA3678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26696
	ctx.r3.s64 = ctx.r11.s64 + 26696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3684"))) PPC_WEAK_FUNC(sub_83BA3684);
PPC_FUNC_IMPL(__imp__sub_83BA3684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3688"))) PPC_WEAK_FUNC(sub_83BA3688);
PPC_FUNC_IMPL(__imp__sub_83BA3688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26704
	ctx.r3.s64 = ctx.r11.s64 + 26704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3694"))) PPC_WEAK_FUNC(sub_83BA3694);
PPC_FUNC_IMPL(__imp__sub_83BA3694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3698"))) PPC_WEAK_FUNC(sub_83BA3698);
PPC_FUNC_IMPL(__imp__sub_83BA3698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26712
	ctx.r3.s64 = ctx.r11.s64 + 26712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA36A4"))) PPC_WEAK_FUNC(sub_83BA36A4);
PPC_FUNC_IMPL(__imp__sub_83BA36A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA36A8"))) PPC_WEAK_FUNC(sub_83BA36A8);
PPC_FUNC_IMPL(__imp__sub_83BA36A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26720
	ctx.r3.s64 = ctx.r11.s64 + 26720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA36B4"))) PPC_WEAK_FUNC(sub_83BA36B4);
PPC_FUNC_IMPL(__imp__sub_83BA36B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA36B8"))) PPC_WEAK_FUNC(sub_83BA36B8);
PPC_FUNC_IMPL(__imp__sub_83BA36B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26728
	ctx.r3.s64 = ctx.r11.s64 + 26728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA36C4"))) PPC_WEAK_FUNC(sub_83BA36C4);
PPC_FUNC_IMPL(__imp__sub_83BA36C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA36C8"))) PPC_WEAK_FUNC(sub_83BA36C8);
PPC_FUNC_IMPL(__imp__sub_83BA36C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26736
	ctx.r3.s64 = ctx.r11.s64 + 26736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA36D4"))) PPC_WEAK_FUNC(sub_83BA36D4);
PPC_FUNC_IMPL(__imp__sub_83BA36D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA36D8"))) PPC_WEAK_FUNC(sub_83BA36D8);
PPC_FUNC_IMPL(__imp__sub_83BA36D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26744
	ctx.r3.s64 = ctx.r11.s64 + 26744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA36E4"))) PPC_WEAK_FUNC(sub_83BA36E4);
PPC_FUNC_IMPL(__imp__sub_83BA36E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA36E8"))) PPC_WEAK_FUNC(sub_83BA36E8);
PPC_FUNC_IMPL(__imp__sub_83BA36E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26752
	ctx.r3.s64 = ctx.r11.s64 + 26752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA36F4"))) PPC_WEAK_FUNC(sub_83BA36F4);
PPC_FUNC_IMPL(__imp__sub_83BA36F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA36F8"))) PPC_WEAK_FUNC(sub_83BA36F8);
PPC_FUNC_IMPL(__imp__sub_83BA36F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26760
	ctx.r3.s64 = ctx.r11.s64 + 26760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3704"))) PPC_WEAK_FUNC(sub_83BA3704);
PPC_FUNC_IMPL(__imp__sub_83BA3704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3708"))) PPC_WEAK_FUNC(sub_83BA3708);
PPC_FUNC_IMPL(__imp__sub_83BA3708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26768
	ctx.r3.s64 = ctx.r11.s64 + 26768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3714"))) PPC_WEAK_FUNC(sub_83BA3714);
PPC_FUNC_IMPL(__imp__sub_83BA3714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3718"))) PPC_WEAK_FUNC(sub_83BA3718);
PPC_FUNC_IMPL(__imp__sub_83BA3718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26776
	ctx.r3.s64 = ctx.r11.s64 + 26776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3724"))) PPC_WEAK_FUNC(sub_83BA3724);
PPC_FUNC_IMPL(__imp__sub_83BA3724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3728"))) PPC_WEAK_FUNC(sub_83BA3728);
PPC_FUNC_IMPL(__imp__sub_83BA3728) {
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
	// addi r3,r11,7120
	ctx.r3.s64 = ctx.r11.s64 + 7120;
	// bl 0x83523120
	ctx.lr = 0x83BA3740;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,26784
	ctx.r3.s64 = ctx.r10.s64 + 26784;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA374C;
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

__attribute__((alias("__imp__sub_83BA375C"))) PPC_WEAK_FUNC(sub_83BA375C);
PPC_FUNC_IMPL(__imp__sub_83BA375C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3760"))) PPC_WEAK_FUNC(sub_83BA3760);
PPC_FUNC_IMPL(__imp__sub_83BA3760) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,7136
	ctx.r7.s64 = ctx.r8.s64 + 7136;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,7136(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 7136);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,7136(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7136, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA3788"))) PPC_WEAK_FUNC(sub_83BA3788);
PPC_FUNC_IMPL(__imp__sub_83BA3788) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,22848
	ctx.r6.s64 = ctx.r7.s64 + 22848;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,22776(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 22776);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,7136(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7136);
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
	// std r9,22848(r7)
	PPC_STORE_U64(ctx.r7.u32 + 22848, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA37D0"))) PPC_WEAK_FUNC(sub_83BA37D0);
PPC_FUNC_IMPL(__imp__sub_83BA37D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26800
	ctx.r3.s64 = ctx.r11.s64 + 26800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA37DC"))) PPC_WEAK_FUNC(sub_83BA37DC);
PPC_FUNC_IMPL(__imp__sub_83BA37DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA37E0"))) PPC_WEAK_FUNC(sub_83BA37E0);
PPC_FUNC_IMPL(__imp__sub_83BA37E0) {
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
	// addi r3,r11,7144
	ctx.r3.s64 = ctx.r11.s64 + 7144;
	// bl 0x8259af80
	ctx.lr = 0x83BA37F8;
	sub_8259AF80(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,26816
	ctx.r3.s64 = ctx.r10.s64 + 26816;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA3804;
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

__attribute__((alias("__imp__sub_83BA3814"))) PPC_WEAK_FUNC(sub_83BA3814);
PPC_FUNC_IMPL(__imp__sub_83BA3814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3818"))) PPC_WEAK_FUNC(sub_83BA3818);
PPC_FUNC_IMPL(__imp__sub_83BA3818) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,7124
	ctx.r11.s64 = ctx.r8.s64 + 7124;
	// lis r6,-31792
	ctx.r6.s64 = -2083520512;
	// lwz r10,22824(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22824);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,26808
	ctx.r3.s64 = ctx.r6.s64 + 26808;
	// stw r10,7124(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7124, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3848"))) PPC_WEAK_FUNC(sub_83BA3848);
PPC_FUNC_IMPL(__imp__sub_83BA3848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26824
	ctx.r3.s64 = ctx.r11.s64 + 26824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3854"))) PPC_WEAK_FUNC(sub_83BA3854);
PPC_FUNC_IMPL(__imp__sub_83BA3854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3858"))) PPC_WEAK_FUNC(sub_83BA3858);
PPC_FUNC_IMPL(__imp__sub_83BA3858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26832
	ctx.r3.s64 = ctx.r11.s64 + 26832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3864"))) PPC_WEAK_FUNC(sub_83BA3864);
PPC_FUNC_IMPL(__imp__sub_83BA3864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3868"))) PPC_WEAK_FUNC(sub_83BA3868);
PPC_FUNC_IMPL(__imp__sub_83BA3868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26840
	ctx.r3.s64 = ctx.r11.s64 + 26840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3874"))) PPC_WEAK_FUNC(sub_83BA3874);
PPC_FUNC_IMPL(__imp__sub_83BA3874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3878"))) PPC_WEAK_FUNC(sub_83BA3878);
PPC_FUNC_IMPL(__imp__sub_83BA3878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26848
	ctx.r3.s64 = ctx.r11.s64 + 26848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3884"))) PPC_WEAK_FUNC(sub_83BA3884);
PPC_FUNC_IMPL(__imp__sub_83BA3884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3888"))) PPC_WEAK_FUNC(sub_83BA3888);
PPC_FUNC_IMPL(__imp__sub_83BA3888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26856
	ctx.r3.s64 = ctx.r11.s64 + 26856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3894"))) PPC_WEAK_FUNC(sub_83BA3894);
PPC_FUNC_IMPL(__imp__sub_83BA3894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3898"))) PPC_WEAK_FUNC(sub_83BA3898);
PPC_FUNC_IMPL(__imp__sub_83BA3898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26864
	ctx.r3.s64 = ctx.r11.s64 + 26864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA38A4"))) PPC_WEAK_FUNC(sub_83BA38A4);
PPC_FUNC_IMPL(__imp__sub_83BA38A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA38A8"))) PPC_WEAK_FUNC(sub_83BA38A8);
PPC_FUNC_IMPL(__imp__sub_83BA38A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26872
	ctx.r3.s64 = ctx.r11.s64 + 26872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA38B4"))) PPC_WEAK_FUNC(sub_83BA38B4);
PPC_FUNC_IMPL(__imp__sub_83BA38B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA38B8"))) PPC_WEAK_FUNC(sub_83BA38B8);
PPC_FUNC_IMPL(__imp__sub_83BA38B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26880
	ctx.r3.s64 = ctx.r11.s64 + 26880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA38C4"))) PPC_WEAK_FUNC(sub_83BA38C4);
PPC_FUNC_IMPL(__imp__sub_83BA38C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA38C8"))) PPC_WEAK_FUNC(sub_83BA38C8);
PPC_FUNC_IMPL(__imp__sub_83BA38C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26888
	ctx.r3.s64 = ctx.r11.s64 + 26888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA38D4"))) PPC_WEAK_FUNC(sub_83BA38D4);
PPC_FUNC_IMPL(__imp__sub_83BA38D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA38D8"))) PPC_WEAK_FUNC(sub_83BA38D8);
PPC_FUNC_IMPL(__imp__sub_83BA38D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26896
	ctx.r3.s64 = ctx.r11.s64 + 26896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA38E4"))) PPC_WEAK_FUNC(sub_83BA38E4);
PPC_FUNC_IMPL(__imp__sub_83BA38E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA38E8"))) PPC_WEAK_FUNC(sub_83BA38E8);
PPC_FUNC_IMPL(__imp__sub_83BA38E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26904
	ctx.r3.s64 = ctx.r11.s64 + 26904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA38F4"))) PPC_WEAK_FUNC(sub_83BA38F4);
PPC_FUNC_IMPL(__imp__sub_83BA38F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA38F8"))) PPC_WEAK_FUNC(sub_83BA38F8);
PPC_FUNC_IMPL(__imp__sub_83BA38F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26912
	ctx.r3.s64 = ctx.r11.s64 + 26912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3904"))) PPC_WEAK_FUNC(sub_83BA3904);
PPC_FUNC_IMPL(__imp__sub_83BA3904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3908"))) PPC_WEAK_FUNC(sub_83BA3908);
PPC_FUNC_IMPL(__imp__sub_83BA3908) {
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
	// addi r3,r11,7488
	ctx.r3.s64 = ctx.r11.s64 + 7488;
	// bl 0x83523120
	ctx.lr = 0x83BA3920;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,26920
	ctx.r3.s64 = ctx.r10.s64 + 26920;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA392C;
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

__attribute__((alias("__imp__sub_83BA393C"))) PPC_WEAK_FUNC(sub_83BA393C);
PPC_FUNC_IMPL(__imp__sub_83BA393C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3940"))) PPC_WEAK_FUNC(sub_83BA3940);
PPC_FUNC_IMPL(__imp__sub_83BA3940) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,7504
	ctx.r7.s64 = ctx.r8.s64 + 7504;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,7504(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 7504);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,7504(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7504, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA3968"))) PPC_WEAK_FUNC(sub_83BA3968);
PPC_FUNC_IMPL(__imp__sub_83BA3968) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,22976
	ctx.r6.s64 = ctx.r7.s64 + 22976;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,22904(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 22904);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,7504(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7504);
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
	// std r9,22976(r7)
	PPC_STORE_U64(ctx.r7.u32 + 22976, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA39B0"))) PPC_WEAK_FUNC(sub_83BA39B0);
PPC_FUNC_IMPL(__imp__sub_83BA39B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26936
	ctx.r3.s64 = ctx.r11.s64 + 26936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA39BC"))) PPC_WEAK_FUNC(sub_83BA39BC);
PPC_FUNC_IMPL(__imp__sub_83BA39BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA39C0"))) PPC_WEAK_FUNC(sub_83BA39C0);
PPC_FUNC_IMPL(__imp__sub_83BA39C0) {
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
	// addi r3,r11,7512
	ctx.r3.s64 = ctx.r11.s64 + 7512;
	// bl 0x8259af80
	ctx.lr = 0x83BA39D8;
	sub_8259AF80(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,26952
	ctx.r3.s64 = ctx.r10.s64 + 26952;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA39E4;
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

__attribute__((alias("__imp__sub_83BA39F4"))) PPC_WEAK_FUNC(sub_83BA39F4);
PPC_FUNC_IMPL(__imp__sub_83BA39F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA39F8"))) PPC_WEAK_FUNC(sub_83BA39F8);
PPC_FUNC_IMPL(__imp__sub_83BA39F8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,7492
	ctx.r11.s64 = ctx.r8.s64 + 7492;
	// lis r6,-31792
	ctx.r6.s64 = -2083520512;
	// lwz r10,22952(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22952);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,26944
	ctx.r3.s64 = ctx.r6.s64 + 26944;
	// stw r10,7492(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7492, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3A28"))) PPC_WEAK_FUNC(sub_83BA3A28);
PPC_FUNC_IMPL(__imp__sub_83BA3A28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26960
	ctx.r3.s64 = ctx.r11.s64 + 26960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3A34"))) PPC_WEAK_FUNC(sub_83BA3A34);
PPC_FUNC_IMPL(__imp__sub_83BA3A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3A38"))) PPC_WEAK_FUNC(sub_83BA3A38);
PPC_FUNC_IMPL(__imp__sub_83BA3A38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26968
	ctx.r3.s64 = ctx.r11.s64 + 26968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3A44"))) PPC_WEAK_FUNC(sub_83BA3A44);
PPC_FUNC_IMPL(__imp__sub_83BA3A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3A48"))) PPC_WEAK_FUNC(sub_83BA3A48);
PPC_FUNC_IMPL(__imp__sub_83BA3A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26976
	ctx.r3.s64 = ctx.r11.s64 + 26976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3A54"))) PPC_WEAK_FUNC(sub_83BA3A54);
PPC_FUNC_IMPL(__imp__sub_83BA3A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3A58"))) PPC_WEAK_FUNC(sub_83BA3A58);
PPC_FUNC_IMPL(__imp__sub_83BA3A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26984
	ctx.r3.s64 = ctx.r11.s64 + 26984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3A64"))) PPC_WEAK_FUNC(sub_83BA3A64);
PPC_FUNC_IMPL(__imp__sub_83BA3A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3A68"))) PPC_WEAK_FUNC(sub_83BA3A68);
PPC_FUNC_IMPL(__imp__sub_83BA3A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,26992
	ctx.r3.s64 = ctx.r11.s64 + 26992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3A74"))) PPC_WEAK_FUNC(sub_83BA3A74);
PPC_FUNC_IMPL(__imp__sub_83BA3A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3A78"))) PPC_WEAK_FUNC(sub_83BA3A78);
PPC_FUNC_IMPL(__imp__sub_83BA3A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27000
	ctx.r3.s64 = ctx.r11.s64 + 27000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3A84"))) PPC_WEAK_FUNC(sub_83BA3A84);
PPC_FUNC_IMPL(__imp__sub_83BA3A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3A88"))) PPC_WEAK_FUNC(sub_83BA3A88);
PPC_FUNC_IMPL(__imp__sub_83BA3A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27008
	ctx.r3.s64 = ctx.r11.s64 + 27008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3A94"))) PPC_WEAK_FUNC(sub_83BA3A94);
PPC_FUNC_IMPL(__imp__sub_83BA3A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3A98"))) PPC_WEAK_FUNC(sub_83BA3A98);
PPC_FUNC_IMPL(__imp__sub_83BA3A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27016
	ctx.r3.s64 = ctx.r11.s64 + 27016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3AA4"))) PPC_WEAK_FUNC(sub_83BA3AA4);
PPC_FUNC_IMPL(__imp__sub_83BA3AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3AA8"))) PPC_WEAK_FUNC(sub_83BA3AA8);
PPC_FUNC_IMPL(__imp__sub_83BA3AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27024
	ctx.r3.s64 = ctx.r11.s64 + 27024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3AB4"))) PPC_WEAK_FUNC(sub_83BA3AB4);
PPC_FUNC_IMPL(__imp__sub_83BA3AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3AB8"))) PPC_WEAK_FUNC(sub_83BA3AB8);
PPC_FUNC_IMPL(__imp__sub_83BA3AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27032
	ctx.r3.s64 = ctx.r11.s64 + 27032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3AC4"))) PPC_WEAK_FUNC(sub_83BA3AC4);
PPC_FUNC_IMPL(__imp__sub_83BA3AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3AC8"))) PPC_WEAK_FUNC(sub_83BA3AC8);
PPC_FUNC_IMPL(__imp__sub_83BA3AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27040
	ctx.r3.s64 = ctx.r11.s64 + 27040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3AD4"))) PPC_WEAK_FUNC(sub_83BA3AD4);
PPC_FUNC_IMPL(__imp__sub_83BA3AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3AD8"))) PPC_WEAK_FUNC(sub_83BA3AD8);
PPC_FUNC_IMPL(__imp__sub_83BA3AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27048
	ctx.r3.s64 = ctx.r11.s64 + 27048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3AE4"))) PPC_WEAK_FUNC(sub_83BA3AE4);
PPC_FUNC_IMPL(__imp__sub_83BA3AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3AE8"))) PPC_WEAK_FUNC(sub_83BA3AE8);
PPC_FUNC_IMPL(__imp__sub_83BA3AE8) {
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
	// addi r3,r11,7856
	ctx.r3.s64 = ctx.r11.s64 + 7856;
	// bl 0x83523120
	ctx.lr = 0x83BA3B00;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,27056
	ctx.r3.s64 = ctx.r10.s64 + 27056;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA3B0C;
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

__attribute__((alias("__imp__sub_83BA3B1C"))) PPC_WEAK_FUNC(sub_83BA3B1C);
PPC_FUNC_IMPL(__imp__sub_83BA3B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3B20"))) PPC_WEAK_FUNC(sub_83BA3B20);
PPC_FUNC_IMPL(__imp__sub_83BA3B20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,7872
	ctx.r7.s64 = ctx.r8.s64 + 7872;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,7872(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 7872);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,7872(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7872, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA3B48"))) PPC_WEAK_FUNC(sub_83BA3B48);
PPC_FUNC_IMPL(__imp__sub_83BA3B48) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,23112
	ctx.r6.s64 = ctx.r7.s64 + 23112;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,23040(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 23040);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,7872(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7872);
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
	// std r9,23112(r7)
	PPC_STORE_U64(ctx.r7.u32 + 23112, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA3B90"))) PPC_WEAK_FUNC(sub_83BA3B90);
PPC_FUNC_IMPL(__imp__sub_83BA3B90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27072
	ctx.r3.s64 = ctx.r11.s64 + 27072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3B9C"))) PPC_WEAK_FUNC(sub_83BA3B9C);
PPC_FUNC_IMPL(__imp__sub_83BA3B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3BA0"))) PPC_WEAK_FUNC(sub_83BA3BA0);
PPC_FUNC_IMPL(__imp__sub_83BA3BA0) {
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
	// addi r3,r11,7880
	ctx.r3.s64 = ctx.r11.s64 + 7880;
	// bl 0x8259af80
	ctx.lr = 0x83BA3BB8;
	sub_8259AF80(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,27088
	ctx.r3.s64 = ctx.r10.s64 + 27088;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA3BC4;
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

__attribute__((alias("__imp__sub_83BA3BD4"))) PPC_WEAK_FUNC(sub_83BA3BD4);
PPC_FUNC_IMPL(__imp__sub_83BA3BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3BD8"))) PPC_WEAK_FUNC(sub_83BA3BD8);
PPC_FUNC_IMPL(__imp__sub_83BA3BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,7860
	ctx.r11.s64 = ctx.r8.s64 + 7860;
	// lis r6,-31792
	ctx.r6.s64 = -2083520512;
	// lwz r10,23088(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23088);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,27080
	ctx.r3.s64 = ctx.r6.s64 + 27080;
	// stw r10,7860(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7860, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3C08"))) PPC_WEAK_FUNC(sub_83BA3C08);
PPC_FUNC_IMPL(__imp__sub_83BA3C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27096
	ctx.r3.s64 = ctx.r11.s64 + 27096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3C14"))) PPC_WEAK_FUNC(sub_83BA3C14);
PPC_FUNC_IMPL(__imp__sub_83BA3C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3C18"))) PPC_WEAK_FUNC(sub_83BA3C18);
PPC_FUNC_IMPL(__imp__sub_83BA3C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27104
	ctx.r3.s64 = ctx.r11.s64 + 27104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3C24"))) PPC_WEAK_FUNC(sub_83BA3C24);
PPC_FUNC_IMPL(__imp__sub_83BA3C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3C28"))) PPC_WEAK_FUNC(sub_83BA3C28);
PPC_FUNC_IMPL(__imp__sub_83BA3C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27112
	ctx.r3.s64 = ctx.r11.s64 + 27112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3C34"))) PPC_WEAK_FUNC(sub_83BA3C34);
PPC_FUNC_IMPL(__imp__sub_83BA3C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3C38"))) PPC_WEAK_FUNC(sub_83BA3C38);
PPC_FUNC_IMPL(__imp__sub_83BA3C38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27120
	ctx.r3.s64 = ctx.r11.s64 + 27120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3C44"))) PPC_WEAK_FUNC(sub_83BA3C44);
PPC_FUNC_IMPL(__imp__sub_83BA3C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3C48"))) PPC_WEAK_FUNC(sub_83BA3C48);
PPC_FUNC_IMPL(__imp__sub_83BA3C48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27128
	ctx.r3.s64 = ctx.r11.s64 + 27128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3C54"))) PPC_WEAK_FUNC(sub_83BA3C54);
PPC_FUNC_IMPL(__imp__sub_83BA3C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3C58"))) PPC_WEAK_FUNC(sub_83BA3C58);
PPC_FUNC_IMPL(__imp__sub_83BA3C58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27136
	ctx.r3.s64 = ctx.r11.s64 + 27136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3C64"))) PPC_WEAK_FUNC(sub_83BA3C64);
PPC_FUNC_IMPL(__imp__sub_83BA3C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3C68"))) PPC_WEAK_FUNC(sub_83BA3C68);
PPC_FUNC_IMPL(__imp__sub_83BA3C68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27144
	ctx.r3.s64 = ctx.r11.s64 + 27144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3C74"))) PPC_WEAK_FUNC(sub_83BA3C74);
PPC_FUNC_IMPL(__imp__sub_83BA3C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3C78"))) PPC_WEAK_FUNC(sub_83BA3C78);
PPC_FUNC_IMPL(__imp__sub_83BA3C78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27152
	ctx.r3.s64 = ctx.r11.s64 + 27152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3C84"))) PPC_WEAK_FUNC(sub_83BA3C84);
PPC_FUNC_IMPL(__imp__sub_83BA3C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3C88"))) PPC_WEAK_FUNC(sub_83BA3C88);
PPC_FUNC_IMPL(__imp__sub_83BA3C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27160
	ctx.r3.s64 = ctx.r11.s64 + 27160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3C94"))) PPC_WEAK_FUNC(sub_83BA3C94);
PPC_FUNC_IMPL(__imp__sub_83BA3C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3C98"))) PPC_WEAK_FUNC(sub_83BA3C98);
PPC_FUNC_IMPL(__imp__sub_83BA3C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27168
	ctx.r3.s64 = ctx.r11.s64 + 27168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3CA4"))) PPC_WEAK_FUNC(sub_83BA3CA4);
PPC_FUNC_IMPL(__imp__sub_83BA3CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3CA8"))) PPC_WEAK_FUNC(sub_83BA3CA8);
PPC_FUNC_IMPL(__imp__sub_83BA3CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27176
	ctx.r3.s64 = ctx.r11.s64 + 27176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3CB4"))) PPC_WEAK_FUNC(sub_83BA3CB4);
PPC_FUNC_IMPL(__imp__sub_83BA3CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3CB8"))) PPC_WEAK_FUNC(sub_83BA3CB8);
PPC_FUNC_IMPL(__imp__sub_83BA3CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27184
	ctx.r3.s64 = ctx.r11.s64 + 27184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3CC4"))) PPC_WEAK_FUNC(sub_83BA3CC4);
PPC_FUNC_IMPL(__imp__sub_83BA3CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3CC8"))) PPC_WEAK_FUNC(sub_83BA3CC8);
PPC_FUNC_IMPL(__imp__sub_83BA3CC8) {
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
	// addi r3,r11,8224
	ctx.r3.s64 = ctx.r11.s64 + 8224;
	// bl 0x83523120
	ctx.lr = 0x83BA3CE0;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,27192
	ctx.r3.s64 = ctx.r10.s64 + 27192;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA3CEC;
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

__attribute__((alias("__imp__sub_83BA3CFC"))) PPC_WEAK_FUNC(sub_83BA3CFC);
PPC_FUNC_IMPL(__imp__sub_83BA3CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3D00"))) PPC_WEAK_FUNC(sub_83BA3D00);
PPC_FUNC_IMPL(__imp__sub_83BA3D00) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,8240
	ctx.r7.s64 = ctx.r8.s64 + 8240;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,8240(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8240);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,8240(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8240, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA3D28"))) PPC_WEAK_FUNC(sub_83BA3D28);
PPC_FUNC_IMPL(__imp__sub_83BA3D28) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,23252
	ctx.r6.s64 = ctx.r7.s64 + 23252;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,23180(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 23180);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,8240(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8240);
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
	// std r9,23252(r7)
	PPC_STORE_U64(ctx.r7.u32 + 23252, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA3D70"))) PPC_WEAK_FUNC(sub_83BA3D70);
PPC_FUNC_IMPL(__imp__sub_83BA3D70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27208
	ctx.r3.s64 = ctx.r11.s64 + 27208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3D7C"))) PPC_WEAK_FUNC(sub_83BA3D7C);
PPC_FUNC_IMPL(__imp__sub_83BA3D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3D80"))) PPC_WEAK_FUNC(sub_83BA3D80);
PPC_FUNC_IMPL(__imp__sub_83BA3D80) {
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
	// addi r3,r11,8248
	ctx.r3.s64 = ctx.r11.s64 + 8248;
	// bl 0x8259af80
	ctx.lr = 0x83BA3D98;
	sub_8259AF80(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,27224
	ctx.r3.s64 = ctx.r10.s64 + 27224;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA3DA4;
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

__attribute__((alias("__imp__sub_83BA3DB4"))) PPC_WEAK_FUNC(sub_83BA3DB4);
PPC_FUNC_IMPL(__imp__sub_83BA3DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3DB8"))) PPC_WEAK_FUNC(sub_83BA3DB8);
PPC_FUNC_IMPL(__imp__sub_83BA3DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,8228
	ctx.r11.s64 = ctx.r8.s64 + 8228;
	// lis r6,-31792
	ctx.r6.s64 = -2083520512;
	// lwz r10,23228(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23228);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,27216
	ctx.r3.s64 = ctx.r6.s64 + 27216;
	// stw r10,8228(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8228, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3DE8"))) PPC_WEAK_FUNC(sub_83BA3DE8);
PPC_FUNC_IMPL(__imp__sub_83BA3DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27232
	ctx.r3.s64 = ctx.r11.s64 + 27232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3DF4"))) PPC_WEAK_FUNC(sub_83BA3DF4);
PPC_FUNC_IMPL(__imp__sub_83BA3DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3DF8"))) PPC_WEAK_FUNC(sub_83BA3DF8);
PPC_FUNC_IMPL(__imp__sub_83BA3DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27240
	ctx.r3.s64 = ctx.r11.s64 + 27240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3E04"))) PPC_WEAK_FUNC(sub_83BA3E04);
PPC_FUNC_IMPL(__imp__sub_83BA3E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3E08"))) PPC_WEAK_FUNC(sub_83BA3E08);
PPC_FUNC_IMPL(__imp__sub_83BA3E08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27248
	ctx.r3.s64 = ctx.r11.s64 + 27248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3E14"))) PPC_WEAK_FUNC(sub_83BA3E14);
PPC_FUNC_IMPL(__imp__sub_83BA3E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3E18"))) PPC_WEAK_FUNC(sub_83BA3E18);
PPC_FUNC_IMPL(__imp__sub_83BA3E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27256
	ctx.r3.s64 = ctx.r11.s64 + 27256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3E24"))) PPC_WEAK_FUNC(sub_83BA3E24);
PPC_FUNC_IMPL(__imp__sub_83BA3E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3E28"))) PPC_WEAK_FUNC(sub_83BA3E28);
PPC_FUNC_IMPL(__imp__sub_83BA3E28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27264
	ctx.r3.s64 = ctx.r11.s64 + 27264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3E34"))) PPC_WEAK_FUNC(sub_83BA3E34);
PPC_FUNC_IMPL(__imp__sub_83BA3E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3E38"))) PPC_WEAK_FUNC(sub_83BA3E38);
PPC_FUNC_IMPL(__imp__sub_83BA3E38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27272
	ctx.r3.s64 = ctx.r11.s64 + 27272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3E44"))) PPC_WEAK_FUNC(sub_83BA3E44);
PPC_FUNC_IMPL(__imp__sub_83BA3E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3E48"))) PPC_WEAK_FUNC(sub_83BA3E48);
PPC_FUNC_IMPL(__imp__sub_83BA3E48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27280
	ctx.r3.s64 = ctx.r11.s64 + 27280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3E54"))) PPC_WEAK_FUNC(sub_83BA3E54);
PPC_FUNC_IMPL(__imp__sub_83BA3E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3E58"))) PPC_WEAK_FUNC(sub_83BA3E58);
PPC_FUNC_IMPL(__imp__sub_83BA3E58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27288
	ctx.r3.s64 = ctx.r11.s64 + 27288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3E64"))) PPC_WEAK_FUNC(sub_83BA3E64);
PPC_FUNC_IMPL(__imp__sub_83BA3E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3E68"))) PPC_WEAK_FUNC(sub_83BA3E68);
PPC_FUNC_IMPL(__imp__sub_83BA3E68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27296
	ctx.r3.s64 = ctx.r11.s64 + 27296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3E74"))) PPC_WEAK_FUNC(sub_83BA3E74);
PPC_FUNC_IMPL(__imp__sub_83BA3E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3E78"))) PPC_WEAK_FUNC(sub_83BA3E78);
PPC_FUNC_IMPL(__imp__sub_83BA3E78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27304
	ctx.r3.s64 = ctx.r11.s64 + 27304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

