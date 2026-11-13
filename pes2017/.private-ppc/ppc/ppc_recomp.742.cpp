#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C28CC0"))) PPC_WEAK_FUNC(sub_83C28CC0);
PPC_FUNC_IMPL(__imp__sub_83C28CC0) {
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
	// addi r3,r11,-7504
	ctx.r3.s64 = ctx.r11.s64 + -7504;
	// bl 0x83523120
	ctx.lr = 0x83C28CD8;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,3120
	ctx.r3.s64 = ctx.r10.s64 + 3120;
	// bl 0x831cdcc8
	ctx.lr = 0x83C28CE4;
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

__attribute__((alias("__imp__sub_83C28CF4"))) PPC_WEAK_FUNC(sub_83C28CF4);
PPC_FUNC_IMPL(__imp__sub_83C28CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C28CF8"))) PPC_WEAK_FUNC(sub_83C28CF8);
PPC_FUNC_IMPL(__imp__sub_83C28CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-7500
	ctx.r7.s64 = ctx.r8.s64 + -7500;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-7500(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7500);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-7500(r8)
	PPC_STORE_U32(ctx.r8.u32 + -7500, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C28D20"))) PPC_WEAK_FUNC(sub_83C28D20);
PPC_FUNC_IMPL(__imp__sub_83C28D20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3136
	ctx.r3.s64 = ctx.r11.s64 + 3136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C28D2C"))) PPC_WEAK_FUNC(sub_83C28D2C);
PPC_FUNC_IMPL(__imp__sub_83C28D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C28D30"))) PPC_WEAK_FUNC(sub_83C28D30);
PPC_FUNC_IMPL(__imp__sub_83C28D30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3144
	ctx.r3.s64 = ctx.r11.s64 + 3144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C28D3C"))) PPC_WEAK_FUNC(sub_83C28D3C);
PPC_FUNC_IMPL(__imp__sub_83C28D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C28D40"))) PPC_WEAK_FUNC(sub_83C28D40);
PPC_FUNC_IMPL(__imp__sub_83C28D40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3152
	ctx.r3.s64 = ctx.r11.s64 + 3152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C28D4C"))) PPC_WEAK_FUNC(sub_83C28D4C);
PPC_FUNC_IMPL(__imp__sub_83C28D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C28D50"))) PPC_WEAK_FUNC(sub_83C28D50);
PPC_FUNC_IMPL(__imp__sub_83C28D50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3160
	ctx.r3.s64 = ctx.r11.s64 + 3160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C28D5C"))) PPC_WEAK_FUNC(sub_83C28D5C);
PPC_FUNC_IMPL(__imp__sub_83C28D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C28D60"))) PPC_WEAK_FUNC(sub_83C28D60);
PPC_FUNC_IMPL(__imp__sub_83C28D60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3168
	ctx.r3.s64 = ctx.r11.s64 + 3168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C28D6C"))) PPC_WEAK_FUNC(sub_83C28D6C);
PPC_FUNC_IMPL(__imp__sub_83C28D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C28D70"))) PPC_WEAK_FUNC(sub_83C28D70);
PPC_FUNC_IMPL(__imp__sub_83C28D70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3176
	ctx.r3.s64 = ctx.r11.s64 + 3176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C28D7C"))) PPC_WEAK_FUNC(sub_83C28D7C);
PPC_FUNC_IMPL(__imp__sub_83C28D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C28D80"))) PPC_WEAK_FUNC(sub_83C28D80);
PPC_FUNC_IMPL(__imp__sub_83C28D80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3184
	ctx.r3.s64 = ctx.r11.s64 + 3184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C28D8C"))) PPC_WEAK_FUNC(sub_83C28D8C);
PPC_FUNC_IMPL(__imp__sub_83C28D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C28D90"))) PPC_WEAK_FUNC(sub_83C28D90);
PPC_FUNC_IMPL(__imp__sub_83C28D90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3192
	ctx.r3.s64 = ctx.r11.s64 + 3192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C28D9C"))) PPC_WEAK_FUNC(sub_83C28D9C);
PPC_FUNC_IMPL(__imp__sub_83C28D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C28DA0"))) PPC_WEAK_FUNC(sub_83C28DA0);
PPC_FUNC_IMPL(__imp__sub_83C28DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3200
	ctx.r3.s64 = ctx.r11.s64 + 3200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C28DAC"))) PPC_WEAK_FUNC(sub_83C28DAC);
PPC_FUNC_IMPL(__imp__sub_83C28DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C28DB0"))) PPC_WEAK_FUNC(sub_83C28DB0);
PPC_FUNC_IMPL(__imp__sub_83C28DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3208
	ctx.r3.s64 = ctx.r11.s64 + 3208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C28DBC"))) PPC_WEAK_FUNC(sub_83C28DBC);
PPC_FUNC_IMPL(__imp__sub_83C28DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C28DC0"))) PPC_WEAK_FUNC(sub_83C28DC0);
PPC_FUNC_IMPL(__imp__sub_83C28DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3216
	ctx.r3.s64 = ctx.r11.s64 + 3216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C28DCC"))) PPC_WEAK_FUNC(sub_83C28DCC);
PPC_FUNC_IMPL(__imp__sub_83C28DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C28DD0"))) PPC_WEAK_FUNC(sub_83C28DD0);
PPC_FUNC_IMPL(__imp__sub_83C28DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3224
	ctx.r3.s64 = ctx.r11.s64 + 3224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C28DDC"))) PPC_WEAK_FUNC(sub_83C28DDC);
PPC_FUNC_IMPL(__imp__sub_83C28DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C28DE0"))) PPC_WEAK_FUNC(sub_83C28DE0);
PPC_FUNC_IMPL(__imp__sub_83C28DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3232
	ctx.r3.s64 = ctx.r11.s64 + 3232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C28DEC"))) PPC_WEAK_FUNC(sub_83C28DEC);
PPC_FUNC_IMPL(__imp__sub_83C28DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C28DF0"))) PPC_WEAK_FUNC(sub_83C28DF0);
PPC_FUNC_IMPL(__imp__sub_83C28DF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3240
	ctx.r3.s64 = ctx.r11.s64 + 3240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C28DFC"))) PPC_WEAK_FUNC(sub_83C28DFC);
PPC_FUNC_IMPL(__imp__sub_83C28DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C28E00"))) PPC_WEAK_FUNC(sub_83C28E00);
PPC_FUNC_IMPL(__imp__sub_83C28E00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3248
	ctx.r3.s64 = ctx.r11.s64 + 3248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C28E0C"))) PPC_WEAK_FUNC(sub_83C28E0C);
PPC_FUNC_IMPL(__imp__sub_83C28E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C28E10"))) PPC_WEAK_FUNC(sub_83C28E10);
PPC_FUNC_IMPL(__imp__sub_83C28E10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3256
	ctx.r3.s64 = ctx.r11.s64 + 3256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C28E1C"))) PPC_WEAK_FUNC(sub_83C28E1C);
PPC_FUNC_IMPL(__imp__sub_83C28E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C28E20"))) PPC_WEAK_FUNC(sub_83C28E20);
PPC_FUNC_IMPL(__imp__sub_83C28E20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3264
	ctx.r3.s64 = ctx.r11.s64 + 3264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C28E2C"))) PPC_WEAK_FUNC(sub_83C28E2C);
PPC_FUNC_IMPL(__imp__sub_83C28E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C28E30"))) PPC_WEAK_FUNC(sub_83C28E30);
PPC_FUNC_IMPL(__imp__sub_83C28E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3272
	ctx.r3.s64 = ctx.r11.s64 + 3272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C28E3C"))) PPC_WEAK_FUNC(sub_83C28E3C);
PPC_FUNC_IMPL(__imp__sub_83C28E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C28E40"))) PPC_WEAK_FUNC(sub_83C28E40);
PPC_FUNC_IMPL(__imp__sub_83C28E40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3280
	ctx.r3.s64 = ctx.r11.s64 + 3280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C28E4C"))) PPC_WEAK_FUNC(sub_83C28E4C);
PPC_FUNC_IMPL(__imp__sub_83C28E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C28E50"))) PPC_WEAK_FUNC(sub_83C28E50);
PPC_FUNC_IMPL(__imp__sub_83C28E50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3288
	ctx.r3.s64 = ctx.r11.s64 + 3288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C28E5C"))) PPC_WEAK_FUNC(sub_83C28E5C);
PPC_FUNC_IMPL(__imp__sub_83C28E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C28E60"))) PPC_WEAK_FUNC(sub_83C28E60);
PPC_FUNC_IMPL(__imp__sub_83C28E60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3296
	ctx.r3.s64 = ctx.r11.s64 + 3296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C28E6C"))) PPC_WEAK_FUNC(sub_83C28E6C);
PPC_FUNC_IMPL(__imp__sub_83C28E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C28E70"))) PPC_WEAK_FUNC(sub_83C28E70);
PPC_FUNC_IMPL(__imp__sub_83C28E70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3304
	ctx.r3.s64 = ctx.r11.s64 + 3304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C28E7C"))) PPC_WEAK_FUNC(sub_83C28E7C);
PPC_FUNC_IMPL(__imp__sub_83C28E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C28E80"))) PPC_WEAK_FUNC(sub_83C28E80);
PPC_FUNC_IMPL(__imp__sub_83C28E80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3312
	ctx.r3.s64 = ctx.r11.s64 + 3312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C28E8C"))) PPC_WEAK_FUNC(sub_83C28E8C);
PPC_FUNC_IMPL(__imp__sub_83C28E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C28E90"))) PPC_WEAK_FUNC(sub_83C28E90);
PPC_FUNC_IMPL(__imp__sub_83C28E90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3320
	ctx.r3.s64 = ctx.r11.s64 + 3320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C28E9C"))) PPC_WEAK_FUNC(sub_83C28E9C);
PPC_FUNC_IMPL(__imp__sub_83C28E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C28EA0"))) PPC_WEAK_FUNC(sub_83C28EA0);
PPC_FUNC_IMPL(__imp__sub_83C28EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-7472
	ctx.r7.s64 = ctx.r8.s64 + -7472;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-7472(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7472);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-7472(r8)
	PPC_STORE_U32(ctx.r8.u32 + -7472, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C28EC8"))) PPC_WEAK_FUNC(sub_83C28EC8);
PPC_FUNC_IMPL(__imp__sub_83C28EC8) {
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
	// addi r3,r11,-7488
	ctx.r3.s64 = ctx.r11.s64 + -7488;
	// bl 0x83523120
	ctx.lr = 0x83C28EE0;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,3328
	ctx.r3.s64 = ctx.r10.s64 + 3328;
	// bl 0x831cdcc8
	ctx.lr = 0x83C28EEC;
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

__attribute__((alias("__imp__sub_83C28EFC"))) PPC_WEAK_FUNC(sub_83C28EFC);
PPC_FUNC_IMPL(__imp__sub_83C28EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C28F00"))) PPC_WEAK_FUNC(sub_83C28F00);
PPC_FUNC_IMPL(__imp__sub_83C28F00) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,19912
	ctx.r6.s64 = ctx.r7.s64 + 19912;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,19828(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 19828);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-7472(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -7472);
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
	// std r9,19912(r7)
	PPC_STORE_U64(ctx.r7.u32 + 19912, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C28F48"))) PPC_WEAK_FUNC(sub_83C28F48);
PPC_FUNC_IMPL(__imp__sub_83C28F48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3344
	ctx.r3.s64 = ctx.r11.s64 + 3344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C28F54"))) PPC_WEAK_FUNC(sub_83C28F54);
PPC_FUNC_IMPL(__imp__sub_83C28F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C28F58"))) PPC_WEAK_FUNC(sub_83C28F58);
PPC_FUNC_IMPL(__imp__sub_83C28F58) {
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
	// addi r3,r11,-7464
	ctx.r3.s64 = ctx.r11.s64 + -7464;
	// bl 0x8259af80
	ctx.lr = 0x83C28F70;
	sub_8259AF80(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,3360
	ctx.r3.s64 = ctx.r10.s64 + 3360;
	// bl 0x831cdcc8
	ctx.lr = 0x83C28F7C;
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

__attribute__((alias("__imp__sub_83C28F8C"))) PPC_WEAK_FUNC(sub_83C28F8C);
PPC_FUNC_IMPL(__imp__sub_83C28F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C28F90"))) PPC_WEAK_FUNC(sub_83C28F90);
PPC_FUNC_IMPL(__imp__sub_83C28F90) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-7484
	ctx.r11.s64 = ctx.r8.s64 + -7484;
	// lis r6,-31789
	ctx.r6.s64 = -2083323904;
	// lwz r10,19876(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19876);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,3352
	ctx.r3.s64 = ctx.r6.s64 + 3352;
	// stw r10,-7484(r8)
	PPC_STORE_U32(ctx.r8.u32 + -7484, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C28FC0"))) PPC_WEAK_FUNC(sub_83C28FC0);
PPC_FUNC_IMPL(__imp__sub_83C28FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3368
	ctx.r3.s64 = ctx.r11.s64 + 3368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C28FCC"))) PPC_WEAK_FUNC(sub_83C28FCC);
PPC_FUNC_IMPL(__imp__sub_83C28FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C28FD0"))) PPC_WEAK_FUNC(sub_83C28FD0);
PPC_FUNC_IMPL(__imp__sub_83C28FD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3376
	ctx.r3.s64 = ctx.r11.s64 + 3376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C28FDC"))) PPC_WEAK_FUNC(sub_83C28FDC);
PPC_FUNC_IMPL(__imp__sub_83C28FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C28FE0"))) PPC_WEAK_FUNC(sub_83C28FE0);
PPC_FUNC_IMPL(__imp__sub_83C28FE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3384
	ctx.r3.s64 = ctx.r11.s64 + 3384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C28FEC"))) PPC_WEAK_FUNC(sub_83C28FEC);
PPC_FUNC_IMPL(__imp__sub_83C28FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C28FF0"))) PPC_WEAK_FUNC(sub_83C28FF0);
PPC_FUNC_IMPL(__imp__sub_83C28FF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3392
	ctx.r3.s64 = ctx.r11.s64 + 3392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C28FFC"))) PPC_WEAK_FUNC(sub_83C28FFC);
PPC_FUNC_IMPL(__imp__sub_83C28FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29000"))) PPC_WEAK_FUNC(sub_83C29000);
PPC_FUNC_IMPL(__imp__sub_83C29000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3400
	ctx.r3.s64 = ctx.r11.s64 + 3400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2900C"))) PPC_WEAK_FUNC(sub_83C2900C);
PPC_FUNC_IMPL(__imp__sub_83C2900C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29010"))) PPC_WEAK_FUNC(sub_83C29010);
PPC_FUNC_IMPL(__imp__sub_83C29010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3408
	ctx.r3.s64 = ctx.r11.s64 + 3408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2901C"))) PPC_WEAK_FUNC(sub_83C2901C);
PPC_FUNC_IMPL(__imp__sub_83C2901C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29020"))) PPC_WEAK_FUNC(sub_83C29020);
PPC_FUNC_IMPL(__imp__sub_83C29020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3416
	ctx.r3.s64 = ctx.r11.s64 + 3416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2902C"))) PPC_WEAK_FUNC(sub_83C2902C);
PPC_FUNC_IMPL(__imp__sub_83C2902C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29030"))) PPC_WEAK_FUNC(sub_83C29030);
PPC_FUNC_IMPL(__imp__sub_83C29030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3424
	ctx.r3.s64 = ctx.r11.s64 + 3424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2903C"))) PPC_WEAK_FUNC(sub_83C2903C);
PPC_FUNC_IMPL(__imp__sub_83C2903C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29040"))) PPC_WEAK_FUNC(sub_83C29040);
PPC_FUNC_IMPL(__imp__sub_83C29040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3432
	ctx.r3.s64 = ctx.r11.s64 + 3432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2904C"))) PPC_WEAK_FUNC(sub_83C2904C);
PPC_FUNC_IMPL(__imp__sub_83C2904C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29050"))) PPC_WEAK_FUNC(sub_83C29050);
PPC_FUNC_IMPL(__imp__sub_83C29050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3440
	ctx.r3.s64 = ctx.r11.s64 + 3440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2905C"))) PPC_WEAK_FUNC(sub_83C2905C);
PPC_FUNC_IMPL(__imp__sub_83C2905C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29060"))) PPC_WEAK_FUNC(sub_83C29060);
PPC_FUNC_IMPL(__imp__sub_83C29060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3448
	ctx.r3.s64 = ctx.r11.s64 + 3448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2906C"))) PPC_WEAK_FUNC(sub_83C2906C);
PPC_FUNC_IMPL(__imp__sub_83C2906C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29070"))) PPC_WEAK_FUNC(sub_83C29070);
PPC_FUNC_IMPL(__imp__sub_83C29070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3456
	ctx.r3.s64 = ctx.r11.s64 + 3456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2907C"))) PPC_WEAK_FUNC(sub_83C2907C);
PPC_FUNC_IMPL(__imp__sub_83C2907C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29080"))) PPC_WEAK_FUNC(sub_83C29080);
PPC_FUNC_IMPL(__imp__sub_83C29080) {
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
	// addi r3,r11,-7120
	ctx.r3.s64 = ctx.r11.s64 + -7120;
	// bl 0x83523120
	ctx.lr = 0x83C29098;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,3464
	ctx.r3.s64 = ctx.r10.s64 + 3464;
	// bl 0x831cdcc8
	ctx.lr = 0x83C290A4;
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

__attribute__((alias("__imp__sub_83C290B4"))) PPC_WEAK_FUNC(sub_83C290B4);
PPC_FUNC_IMPL(__imp__sub_83C290B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C290B8"))) PPC_WEAK_FUNC(sub_83C290B8);
PPC_FUNC_IMPL(__imp__sub_83C290B8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-7116
	ctx.r7.s64 = ctx.r8.s64 + -7116;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-7116(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7116);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-7116(r8)
	PPC_STORE_U32(ctx.r8.u32 + -7116, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C290E0"))) PPC_WEAK_FUNC(sub_83C290E0);
PPC_FUNC_IMPL(__imp__sub_83C290E0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,20040
	ctx.r6.s64 = ctx.r7.s64 + 20040;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,19968(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 19968);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-7116(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -7116);
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
	// std r9,20040(r7)
	PPC_STORE_U64(ctx.r7.u32 + 20040, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C29128"))) PPC_WEAK_FUNC(sub_83C29128);
PPC_FUNC_IMPL(__imp__sub_83C29128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3480
	ctx.r3.s64 = ctx.r11.s64 + 3480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29134"))) PPC_WEAK_FUNC(sub_83C29134);
PPC_FUNC_IMPL(__imp__sub_83C29134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29138"))) PPC_WEAK_FUNC(sub_83C29138);
PPC_FUNC_IMPL(__imp__sub_83C29138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3488
	ctx.r3.s64 = ctx.r11.s64 + 3488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29144"))) PPC_WEAK_FUNC(sub_83C29144);
PPC_FUNC_IMPL(__imp__sub_83C29144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29148"))) PPC_WEAK_FUNC(sub_83C29148);
PPC_FUNC_IMPL(__imp__sub_83C29148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3496
	ctx.r3.s64 = ctx.r11.s64 + 3496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29154"))) PPC_WEAK_FUNC(sub_83C29154);
PPC_FUNC_IMPL(__imp__sub_83C29154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29158"))) PPC_WEAK_FUNC(sub_83C29158);
PPC_FUNC_IMPL(__imp__sub_83C29158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3504
	ctx.r3.s64 = ctx.r11.s64 + 3504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29164"))) PPC_WEAK_FUNC(sub_83C29164);
PPC_FUNC_IMPL(__imp__sub_83C29164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29168"))) PPC_WEAK_FUNC(sub_83C29168);
PPC_FUNC_IMPL(__imp__sub_83C29168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3512
	ctx.r3.s64 = ctx.r11.s64 + 3512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29174"))) PPC_WEAK_FUNC(sub_83C29174);
PPC_FUNC_IMPL(__imp__sub_83C29174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29178"))) PPC_WEAK_FUNC(sub_83C29178);
PPC_FUNC_IMPL(__imp__sub_83C29178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3520
	ctx.r3.s64 = ctx.r11.s64 + 3520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29184"))) PPC_WEAK_FUNC(sub_83C29184);
PPC_FUNC_IMPL(__imp__sub_83C29184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29188"))) PPC_WEAK_FUNC(sub_83C29188);
PPC_FUNC_IMPL(__imp__sub_83C29188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3528
	ctx.r3.s64 = ctx.r11.s64 + 3528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29194"))) PPC_WEAK_FUNC(sub_83C29194);
PPC_FUNC_IMPL(__imp__sub_83C29194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29198"))) PPC_WEAK_FUNC(sub_83C29198);
PPC_FUNC_IMPL(__imp__sub_83C29198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3536
	ctx.r3.s64 = ctx.r11.s64 + 3536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C291A4"))) PPC_WEAK_FUNC(sub_83C291A4);
PPC_FUNC_IMPL(__imp__sub_83C291A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C291A8"))) PPC_WEAK_FUNC(sub_83C291A8);
PPC_FUNC_IMPL(__imp__sub_83C291A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3544
	ctx.r3.s64 = ctx.r11.s64 + 3544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C291B4"))) PPC_WEAK_FUNC(sub_83C291B4);
PPC_FUNC_IMPL(__imp__sub_83C291B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C291B8"))) PPC_WEAK_FUNC(sub_83C291B8);
PPC_FUNC_IMPL(__imp__sub_83C291B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3552
	ctx.r3.s64 = ctx.r11.s64 + 3552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C291C4"))) PPC_WEAK_FUNC(sub_83C291C4);
PPC_FUNC_IMPL(__imp__sub_83C291C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C291C8"))) PPC_WEAK_FUNC(sub_83C291C8);
PPC_FUNC_IMPL(__imp__sub_83C291C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3560
	ctx.r3.s64 = ctx.r11.s64 + 3560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C291D4"))) PPC_WEAK_FUNC(sub_83C291D4);
PPC_FUNC_IMPL(__imp__sub_83C291D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C291D8"))) PPC_WEAK_FUNC(sub_83C291D8);
PPC_FUNC_IMPL(__imp__sub_83C291D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3568
	ctx.r3.s64 = ctx.r11.s64 + 3568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C291E4"))) PPC_WEAK_FUNC(sub_83C291E4);
PPC_FUNC_IMPL(__imp__sub_83C291E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C291E8"))) PPC_WEAK_FUNC(sub_83C291E8);
PPC_FUNC_IMPL(__imp__sub_83C291E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3576
	ctx.r3.s64 = ctx.r11.s64 + 3576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C291F4"))) PPC_WEAK_FUNC(sub_83C291F4);
PPC_FUNC_IMPL(__imp__sub_83C291F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C291F8"))) PPC_WEAK_FUNC(sub_83C291F8);
PPC_FUNC_IMPL(__imp__sub_83C291F8) {
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
	// addi r3,r11,-7108
	ctx.r3.s64 = ctx.r11.s64 + -7108;
	// bl 0x83523120
	ctx.lr = 0x83C29210;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,3584
	ctx.r3.s64 = ctx.r10.s64 + 3584;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2921C;
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

__attribute__((alias("__imp__sub_83C2922C"))) PPC_WEAK_FUNC(sub_83C2922C);
PPC_FUNC_IMPL(__imp__sub_83C2922C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29230"))) PPC_WEAK_FUNC(sub_83C29230);
PPC_FUNC_IMPL(__imp__sub_83C29230) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-7104
	ctx.r7.s64 = ctx.r8.s64 + -7104;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-7104(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7104);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-7104(r8)
	PPC_STORE_U32(ctx.r8.u32 + -7104, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C29258"))) PPC_WEAK_FUNC(sub_83C29258);
PPC_FUNC_IMPL(__imp__sub_83C29258) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,20168
	ctx.r6.s64 = ctx.r7.s64 + 20168;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,20096(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 20096);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-7104(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -7104);
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
	// std r9,20168(r7)
	PPC_STORE_U64(ctx.r7.u32 + 20168, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C292A0"))) PPC_WEAK_FUNC(sub_83C292A0);
PPC_FUNC_IMPL(__imp__sub_83C292A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3600
	ctx.r3.s64 = ctx.r11.s64 + 3600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C292AC"))) PPC_WEAK_FUNC(sub_83C292AC);
PPC_FUNC_IMPL(__imp__sub_83C292AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C292B0"))) PPC_WEAK_FUNC(sub_83C292B0);
PPC_FUNC_IMPL(__imp__sub_83C292B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3608
	ctx.r3.s64 = ctx.r11.s64 + 3608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C292BC"))) PPC_WEAK_FUNC(sub_83C292BC);
PPC_FUNC_IMPL(__imp__sub_83C292BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C292C0"))) PPC_WEAK_FUNC(sub_83C292C0);
PPC_FUNC_IMPL(__imp__sub_83C292C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3616
	ctx.r3.s64 = ctx.r11.s64 + 3616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C292CC"))) PPC_WEAK_FUNC(sub_83C292CC);
PPC_FUNC_IMPL(__imp__sub_83C292CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C292D0"))) PPC_WEAK_FUNC(sub_83C292D0);
PPC_FUNC_IMPL(__imp__sub_83C292D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3624
	ctx.r3.s64 = ctx.r11.s64 + 3624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C292DC"))) PPC_WEAK_FUNC(sub_83C292DC);
PPC_FUNC_IMPL(__imp__sub_83C292DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C292E0"))) PPC_WEAK_FUNC(sub_83C292E0);
PPC_FUNC_IMPL(__imp__sub_83C292E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3632
	ctx.r3.s64 = ctx.r11.s64 + 3632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C292EC"))) PPC_WEAK_FUNC(sub_83C292EC);
PPC_FUNC_IMPL(__imp__sub_83C292EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C292F0"))) PPC_WEAK_FUNC(sub_83C292F0);
PPC_FUNC_IMPL(__imp__sub_83C292F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3640
	ctx.r3.s64 = ctx.r11.s64 + 3640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C292FC"))) PPC_WEAK_FUNC(sub_83C292FC);
PPC_FUNC_IMPL(__imp__sub_83C292FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29300"))) PPC_WEAK_FUNC(sub_83C29300);
PPC_FUNC_IMPL(__imp__sub_83C29300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3648
	ctx.r3.s64 = ctx.r11.s64 + 3648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2930C"))) PPC_WEAK_FUNC(sub_83C2930C);
PPC_FUNC_IMPL(__imp__sub_83C2930C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29310"))) PPC_WEAK_FUNC(sub_83C29310);
PPC_FUNC_IMPL(__imp__sub_83C29310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3656
	ctx.r3.s64 = ctx.r11.s64 + 3656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2931C"))) PPC_WEAK_FUNC(sub_83C2931C);
PPC_FUNC_IMPL(__imp__sub_83C2931C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29320"))) PPC_WEAK_FUNC(sub_83C29320);
PPC_FUNC_IMPL(__imp__sub_83C29320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3664
	ctx.r3.s64 = ctx.r11.s64 + 3664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2932C"))) PPC_WEAK_FUNC(sub_83C2932C);
PPC_FUNC_IMPL(__imp__sub_83C2932C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29330"))) PPC_WEAK_FUNC(sub_83C29330);
PPC_FUNC_IMPL(__imp__sub_83C29330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3672
	ctx.r3.s64 = ctx.r11.s64 + 3672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2933C"))) PPC_WEAK_FUNC(sub_83C2933C);
PPC_FUNC_IMPL(__imp__sub_83C2933C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29340"))) PPC_WEAK_FUNC(sub_83C29340);
PPC_FUNC_IMPL(__imp__sub_83C29340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3680
	ctx.r3.s64 = ctx.r11.s64 + 3680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2934C"))) PPC_WEAK_FUNC(sub_83C2934C);
PPC_FUNC_IMPL(__imp__sub_83C2934C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29350"))) PPC_WEAK_FUNC(sub_83C29350);
PPC_FUNC_IMPL(__imp__sub_83C29350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3688
	ctx.r3.s64 = ctx.r11.s64 + 3688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2935C"))) PPC_WEAK_FUNC(sub_83C2935C);
PPC_FUNC_IMPL(__imp__sub_83C2935C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29360"))) PPC_WEAK_FUNC(sub_83C29360);
PPC_FUNC_IMPL(__imp__sub_83C29360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2936C"))) PPC_WEAK_FUNC(sub_83C2936C);
PPC_FUNC_IMPL(__imp__sub_83C2936C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29370"))) PPC_WEAK_FUNC(sub_83C29370);
PPC_FUNC_IMPL(__imp__sub_83C29370) {
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
	// addi r3,r11,-7096
	ctx.r3.s64 = ctx.r11.s64 + -7096;
	// bl 0x83523120
	ctx.lr = 0x83C29388;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,3704
	ctx.r3.s64 = ctx.r10.s64 + 3704;
	// bl 0x831cdcc8
	ctx.lr = 0x83C29394;
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

__attribute__((alias("__imp__sub_83C293A4"))) PPC_WEAK_FUNC(sub_83C293A4);
PPC_FUNC_IMPL(__imp__sub_83C293A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C293A8"))) PPC_WEAK_FUNC(sub_83C293A8);
PPC_FUNC_IMPL(__imp__sub_83C293A8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-7092
	ctx.r7.s64 = ctx.r8.s64 + -7092;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-7092(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7092);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-7092(r8)
	PPC_STORE_U32(ctx.r8.u32 + -7092, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C293D0"))) PPC_WEAK_FUNC(sub_83C293D0);
PPC_FUNC_IMPL(__imp__sub_83C293D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3720
	ctx.r3.s64 = ctx.r11.s64 + 3720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C293DC"))) PPC_WEAK_FUNC(sub_83C293DC);
PPC_FUNC_IMPL(__imp__sub_83C293DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C293E0"))) PPC_WEAK_FUNC(sub_83C293E0);
PPC_FUNC_IMPL(__imp__sub_83C293E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3728
	ctx.r3.s64 = ctx.r11.s64 + 3728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C293EC"))) PPC_WEAK_FUNC(sub_83C293EC);
PPC_FUNC_IMPL(__imp__sub_83C293EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C293F0"))) PPC_WEAK_FUNC(sub_83C293F0);
PPC_FUNC_IMPL(__imp__sub_83C293F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3736
	ctx.r3.s64 = ctx.r11.s64 + 3736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C293FC"))) PPC_WEAK_FUNC(sub_83C293FC);
PPC_FUNC_IMPL(__imp__sub_83C293FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29400"))) PPC_WEAK_FUNC(sub_83C29400);
PPC_FUNC_IMPL(__imp__sub_83C29400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3744
	ctx.r3.s64 = ctx.r11.s64 + 3744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2940C"))) PPC_WEAK_FUNC(sub_83C2940C);
PPC_FUNC_IMPL(__imp__sub_83C2940C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29410"))) PPC_WEAK_FUNC(sub_83C29410);
PPC_FUNC_IMPL(__imp__sub_83C29410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3752
	ctx.r3.s64 = ctx.r11.s64 + 3752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2941C"))) PPC_WEAK_FUNC(sub_83C2941C);
PPC_FUNC_IMPL(__imp__sub_83C2941C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29420"))) PPC_WEAK_FUNC(sub_83C29420);
PPC_FUNC_IMPL(__imp__sub_83C29420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3760
	ctx.r3.s64 = ctx.r11.s64 + 3760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2942C"))) PPC_WEAK_FUNC(sub_83C2942C);
PPC_FUNC_IMPL(__imp__sub_83C2942C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29430"))) PPC_WEAK_FUNC(sub_83C29430);
PPC_FUNC_IMPL(__imp__sub_83C29430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3768
	ctx.r3.s64 = ctx.r11.s64 + 3768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2943C"))) PPC_WEAK_FUNC(sub_83C2943C);
PPC_FUNC_IMPL(__imp__sub_83C2943C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29440"))) PPC_WEAK_FUNC(sub_83C29440);
PPC_FUNC_IMPL(__imp__sub_83C29440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3776
	ctx.r3.s64 = ctx.r11.s64 + 3776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2944C"))) PPC_WEAK_FUNC(sub_83C2944C);
PPC_FUNC_IMPL(__imp__sub_83C2944C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29450"))) PPC_WEAK_FUNC(sub_83C29450);
PPC_FUNC_IMPL(__imp__sub_83C29450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3784
	ctx.r3.s64 = ctx.r11.s64 + 3784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2945C"))) PPC_WEAK_FUNC(sub_83C2945C);
PPC_FUNC_IMPL(__imp__sub_83C2945C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29460"))) PPC_WEAK_FUNC(sub_83C29460);
PPC_FUNC_IMPL(__imp__sub_83C29460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3792
	ctx.r3.s64 = ctx.r11.s64 + 3792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2946C"))) PPC_WEAK_FUNC(sub_83C2946C);
PPC_FUNC_IMPL(__imp__sub_83C2946C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29470"))) PPC_WEAK_FUNC(sub_83C29470);
PPC_FUNC_IMPL(__imp__sub_83C29470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3800
	ctx.r3.s64 = ctx.r11.s64 + 3800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2947C"))) PPC_WEAK_FUNC(sub_83C2947C);
PPC_FUNC_IMPL(__imp__sub_83C2947C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29480"))) PPC_WEAK_FUNC(sub_83C29480);
PPC_FUNC_IMPL(__imp__sub_83C29480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3808
	ctx.r3.s64 = ctx.r11.s64 + 3808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2948C"))) PPC_WEAK_FUNC(sub_83C2948C);
PPC_FUNC_IMPL(__imp__sub_83C2948C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29490"))) PPC_WEAK_FUNC(sub_83C29490);
PPC_FUNC_IMPL(__imp__sub_83C29490) {
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
	// addi r3,r11,-7084
	ctx.r3.s64 = ctx.r11.s64 + -7084;
	// bl 0x83523120
	ctx.lr = 0x83C294A8;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,3816
	ctx.r3.s64 = ctx.r10.s64 + 3816;
	// bl 0x831cdcc8
	ctx.lr = 0x83C294B4;
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

__attribute__((alias("__imp__sub_83C294C4"))) PPC_WEAK_FUNC(sub_83C294C4);
PPC_FUNC_IMPL(__imp__sub_83C294C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C294C8"))) PPC_WEAK_FUNC(sub_83C294C8);
PPC_FUNC_IMPL(__imp__sub_83C294C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-7080
	ctx.r7.s64 = ctx.r8.s64 + -7080;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-7080(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7080);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-7080(r8)
	PPC_STORE_U32(ctx.r8.u32 + -7080, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C294F0"))) PPC_WEAK_FUNC(sub_83C294F0);
PPC_FUNC_IMPL(__imp__sub_83C294F0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,20400
	ctx.r6.s64 = ctx.r7.s64 + 20400;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,20328(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 20328);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-7080(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -7080);
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
	// std r9,20400(r7)
	PPC_STORE_U64(ctx.r7.u32 + 20400, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C29538"))) PPC_WEAK_FUNC(sub_83C29538);
PPC_FUNC_IMPL(__imp__sub_83C29538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3832
	ctx.r3.s64 = ctx.r11.s64 + 3832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29544"))) PPC_WEAK_FUNC(sub_83C29544);
PPC_FUNC_IMPL(__imp__sub_83C29544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29548"))) PPC_WEAK_FUNC(sub_83C29548);
PPC_FUNC_IMPL(__imp__sub_83C29548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3840
	ctx.r3.s64 = ctx.r11.s64 + 3840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29554"))) PPC_WEAK_FUNC(sub_83C29554);
PPC_FUNC_IMPL(__imp__sub_83C29554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29558"))) PPC_WEAK_FUNC(sub_83C29558);
PPC_FUNC_IMPL(__imp__sub_83C29558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3848
	ctx.r3.s64 = ctx.r11.s64 + 3848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29564"))) PPC_WEAK_FUNC(sub_83C29564);
PPC_FUNC_IMPL(__imp__sub_83C29564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29568"))) PPC_WEAK_FUNC(sub_83C29568);
PPC_FUNC_IMPL(__imp__sub_83C29568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3856
	ctx.r3.s64 = ctx.r11.s64 + 3856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29574"))) PPC_WEAK_FUNC(sub_83C29574);
PPC_FUNC_IMPL(__imp__sub_83C29574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29578"))) PPC_WEAK_FUNC(sub_83C29578);
PPC_FUNC_IMPL(__imp__sub_83C29578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3864
	ctx.r3.s64 = ctx.r11.s64 + 3864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29584"))) PPC_WEAK_FUNC(sub_83C29584);
PPC_FUNC_IMPL(__imp__sub_83C29584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29588"))) PPC_WEAK_FUNC(sub_83C29588);
PPC_FUNC_IMPL(__imp__sub_83C29588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3872
	ctx.r3.s64 = ctx.r11.s64 + 3872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29594"))) PPC_WEAK_FUNC(sub_83C29594);
PPC_FUNC_IMPL(__imp__sub_83C29594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29598"))) PPC_WEAK_FUNC(sub_83C29598);
PPC_FUNC_IMPL(__imp__sub_83C29598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3880
	ctx.r3.s64 = ctx.r11.s64 + 3880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C295A4"))) PPC_WEAK_FUNC(sub_83C295A4);
PPC_FUNC_IMPL(__imp__sub_83C295A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C295A8"))) PPC_WEAK_FUNC(sub_83C295A8);
PPC_FUNC_IMPL(__imp__sub_83C295A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3888
	ctx.r3.s64 = ctx.r11.s64 + 3888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C295B4"))) PPC_WEAK_FUNC(sub_83C295B4);
PPC_FUNC_IMPL(__imp__sub_83C295B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C295B8"))) PPC_WEAK_FUNC(sub_83C295B8);
PPC_FUNC_IMPL(__imp__sub_83C295B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3896
	ctx.r3.s64 = ctx.r11.s64 + 3896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C295C4"))) PPC_WEAK_FUNC(sub_83C295C4);
PPC_FUNC_IMPL(__imp__sub_83C295C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C295C8"))) PPC_WEAK_FUNC(sub_83C295C8);
PPC_FUNC_IMPL(__imp__sub_83C295C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3904
	ctx.r3.s64 = ctx.r11.s64 + 3904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C295D4"))) PPC_WEAK_FUNC(sub_83C295D4);
PPC_FUNC_IMPL(__imp__sub_83C295D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C295D8"))) PPC_WEAK_FUNC(sub_83C295D8);
PPC_FUNC_IMPL(__imp__sub_83C295D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3912
	ctx.r3.s64 = ctx.r11.s64 + 3912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C295E4"))) PPC_WEAK_FUNC(sub_83C295E4);
PPC_FUNC_IMPL(__imp__sub_83C295E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C295E8"))) PPC_WEAK_FUNC(sub_83C295E8);
PPC_FUNC_IMPL(__imp__sub_83C295E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3920
	ctx.r3.s64 = ctx.r11.s64 + 3920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C295F4"))) PPC_WEAK_FUNC(sub_83C295F4);
PPC_FUNC_IMPL(__imp__sub_83C295F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C295F8"))) PPC_WEAK_FUNC(sub_83C295F8);
PPC_FUNC_IMPL(__imp__sub_83C295F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3928
	ctx.r3.s64 = ctx.r11.s64 + 3928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29604"))) PPC_WEAK_FUNC(sub_83C29604);
PPC_FUNC_IMPL(__imp__sub_83C29604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29608"))) PPC_WEAK_FUNC(sub_83C29608);
PPC_FUNC_IMPL(__imp__sub_83C29608) {
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
	// addi r3,r11,-7072
	ctx.r3.s64 = ctx.r11.s64 + -7072;
	// bl 0x83523120
	ctx.lr = 0x83C29620;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,3936
	ctx.r3.s64 = ctx.r10.s64 + 3936;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2962C;
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

__attribute__((alias("__imp__sub_83C2963C"))) PPC_WEAK_FUNC(sub_83C2963C);
PPC_FUNC_IMPL(__imp__sub_83C2963C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29640"))) PPC_WEAK_FUNC(sub_83C29640);
PPC_FUNC_IMPL(__imp__sub_83C29640) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-7068
	ctx.r7.s64 = ctx.r8.s64 + -7068;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-7068(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7068);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-7068(r8)
	PPC_STORE_U32(ctx.r8.u32 + -7068, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C29668"))) PPC_WEAK_FUNC(sub_83C29668);
PPC_FUNC_IMPL(__imp__sub_83C29668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3952
	ctx.r3.s64 = ctx.r11.s64 + 3952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29674"))) PPC_WEAK_FUNC(sub_83C29674);
PPC_FUNC_IMPL(__imp__sub_83C29674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29678"))) PPC_WEAK_FUNC(sub_83C29678);
PPC_FUNC_IMPL(__imp__sub_83C29678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3960
	ctx.r3.s64 = ctx.r11.s64 + 3960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29684"))) PPC_WEAK_FUNC(sub_83C29684);
PPC_FUNC_IMPL(__imp__sub_83C29684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29688"))) PPC_WEAK_FUNC(sub_83C29688);
PPC_FUNC_IMPL(__imp__sub_83C29688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3968
	ctx.r3.s64 = ctx.r11.s64 + 3968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29694"))) PPC_WEAK_FUNC(sub_83C29694);
PPC_FUNC_IMPL(__imp__sub_83C29694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29698"))) PPC_WEAK_FUNC(sub_83C29698);
PPC_FUNC_IMPL(__imp__sub_83C29698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3976
	ctx.r3.s64 = ctx.r11.s64 + 3976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C296A4"))) PPC_WEAK_FUNC(sub_83C296A4);
PPC_FUNC_IMPL(__imp__sub_83C296A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C296A8"))) PPC_WEAK_FUNC(sub_83C296A8);
PPC_FUNC_IMPL(__imp__sub_83C296A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3984
	ctx.r3.s64 = ctx.r11.s64 + 3984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C296B4"))) PPC_WEAK_FUNC(sub_83C296B4);
PPC_FUNC_IMPL(__imp__sub_83C296B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C296B8"))) PPC_WEAK_FUNC(sub_83C296B8);
PPC_FUNC_IMPL(__imp__sub_83C296B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,3992
	ctx.r3.s64 = ctx.r11.s64 + 3992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C296C4"))) PPC_WEAK_FUNC(sub_83C296C4);
PPC_FUNC_IMPL(__imp__sub_83C296C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C296C8"))) PPC_WEAK_FUNC(sub_83C296C8);
PPC_FUNC_IMPL(__imp__sub_83C296C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4000
	ctx.r3.s64 = ctx.r11.s64 + 4000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C296D4"))) PPC_WEAK_FUNC(sub_83C296D4);
PPC_FUNC_IMPL(__imp__sub_83C296D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C296D8"))) PPC_WEAK_FUNC(sub_83C296D8);
PPC_FUNC_IMPL(__imp__sub_83C296D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4008
	ctx.r3.s64 = ctx.r11.s64 + 4008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C296E4"))) PPC_WEAK_FUNC(sub_83C296E4);
PPC_FUNC_IMPL(__imp__sub_83C296E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C296E8"))) PPC_WEAK_FUNC(sub_83C296E8);
PPC_FUNC_IMPL(__imp__sub_83C296E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4016
	ctx.r3.s64 = ctx.r11.s64 + 4016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C296F4"))) PPC_WEAK_FUNC(sub_83C296F4);
PPC_FUNC_IMPL(__imp__sub_83C296F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C296F8"))) PPC_WEAK_FUNC(sub_83C296F8);
PPC_FUNC_IMPL(__imp__sub_83C296F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4024
	ctx.r3.s64 = ctx.r11.s64 + 4024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29704"))) PPC_WEAK_FUNC(sub_83C29704);
PPC_FUNC_IMPL(__imp__sub_83C29704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29708"))) PPC_WEAK_FUNC(sub_83C29708);
PPC_FUNC_IMPL(__imp__sub_83C29708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4032
	ctx.r3.s64 = ctx.r11.s64 + 4032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29714"))) PPC_WEAK_FUNC(sub_83C29714);
PPC_FUNC_IMPL(__imp__sub_83C29714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29718"))) PPC_WEAK_FUNC(sub_83C29718);
PPC_FUNC_IMPL(__imp__sub_83C29718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4040
	ctx.r3.s64 = ctx.r11.s64 + 4040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C29724"))) PPC_WEAK_FUNC(sub_83C29724);
PPC_FUNC_IMPL(__imp__sub_83C29724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29728"))) PPC_WEAK_FUNC(sub_83C29728);
PPC_FUNC_IMPL(__imp__sub_83C29728) {
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
	// addi r3,r11,-7060
	ctx.r3.s64 = ctx.r11.s64 + -7060;
	// bl 0x83523120
	ctx.lr = 0x83C29740;
	sub_83523120(ctx, base);
	// lis r10,-31789
	ctx.r10.s64 = -2083323904;
	// addi r3,r10,4048
	ctx.r3.s64 = ctx.r10.s64 + 4048;
	// bl 0x831cdcc8
	ctx.lr = 0x83C2974C;
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

__attribute__((alias("__imp__sub_83C2975C"))) PPC_WEAK_FUNC(sub_83C2975C);
PPC_FUNC_IMPL(__imp__sub_83C2975C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29760"))) PPC_WEAK_FUNC(sub_83C29760);
PPC_FUNC_IMPL(__imp__sub_83C29760) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-7056
	ctx.r7.s64 = ctx.r8.s64 + -7056;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-7056(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7056);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-7056(r8)
	PPC_STORE_U32(ctx.r8.u32 + -7056, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C29788"))) PPC_WEAK_FUNC(sub_83C29788);
PPC_FUNC_IMPL(__imp__sub_83C29788) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,20632
	ctx.r6.s64 = ctx.r7.s64 + 20632;
	// lis r3,-31757
	ctx.r3.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,20560(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 20560);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-7056(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -7056);
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
	// std r9,20632(r7)
	PPC_STORE_U64(ctx.r7.u32 + 20632, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C297D0"))) PPC_WEAK_FUNC(sub_83C297D0);
PPC_FUNC_IMPL(__imp__sub_83C297D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4064
	ctx.r3.s64 = ctx.r11.s64 + 4064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C297DC"))) PPC_WEAK_FUNC(sub_83C297DC);
PPC_FUNC_IMPL(__imp__sub_83C297DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C297E0"))) PPC_WEAK_FUNC(sub_83C297E0);
PPC_FUNC_IMPL(__imp__sub_83C297E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4072
	ctx.r3.s64 = ctx.r11.s64 + 4072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C297EC"))) PPC_WEAK_FUNC(sub_83C297EC);
PPC_FUNC_IMPL(__imp__sub_83C297EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C297F0"))) PPC_WEAK_FUNC(sub_83C297F0);
PPC_FUNC_IMPL(__imp__sub_83C297F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4080
	ctx.r3.s64 = ctx.r11.s64 + 4080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C297FC"))) PPC_WEAK_FUNC(sub_83C297FC);
PPC_FUNC_IMPL(__imp__sub_83C297FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29800"))) PPC_WEAK_FUNC(sub_83C29800);
PPC_FUNC_IMPL(__imp__sub_83C29800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4088
	ctx.r3.s64 = ctx.r11.s64 + 4088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2980C"))) PPC_WEAK_FUNC(sub_83C2980C);
PPC_FUNC_IMPL(__imp__sub_83C2980C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29810"))) PPC_WEAK_FUNC(sub_83C29810);
PPC_FUNC_IMPL(__imp__sub_83C29810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4096
	ctx.r3.s64 = ctx.r11.s64 + 4096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2981C"))) PPC_WEAK_FUNC(sub_83C2981C);
PPC_FUNC_IMPL(__imp__sub_83C2981C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29820"))) PPC_WEAK_FUNC(sub_83C29820);
PPC_FUNC_IMPL(__imp__sub_83C29820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4104
	ctx.r3.s64 = ctx.r11.s64 + 4104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2982C"))) PPC_WEAK_FUNC(sub_83C2982C);
PPC_FUNC_IMPL(__imp__sub_83C2982C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29830"))) PPC_WEAK_FUNC(sub_83C29830);
PPC_FUNC_IMPL(__imp__sub_83C29830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4112
	ctx.r3.s64 = ctx.r11.s64 + 4112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2983C"))) PPC_WEAK_FUNC(sub_83C2983C);
PPC_FUNC_IMPL(__imp__sub_83C2983C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29840"))) PPC_WEAK_FUNC(sub_83C29840);
PPC_FUNC_IMPL(__imp__sub_83C29840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4120
	ctx.r3.s64 = ctx.r11.s64 + 4120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2984C"))) PPC_WEAK_FUNC(sub_83C2984C);
PPC_FUNC_IMPL(__imp__sub_83C2984C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29850"))) PPC_WEAK_FUNC(sub_83C29850);
PPC_FUNC_IMPL(__imp__sub_83C29850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4128
	ctx.r3.s64 = ctx.r11.s64 + 4128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2985C"))) PPC_WEAK_FUNC(sub_83C2985C);
PPC_FUNC_IMPL(__imp__sub_83C2985C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29860"))) PPC_WEAK_FUNC(sub_83C29860);
PPC_FUNC_IMPL(__imp__sub_83C29860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4136
	ctx.r3.s64 = ctx.r11.s64 + 4136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2986C"))) PPC_WEAK_FUNC(sub_83C2986C);
PPC_FUNC_IMPL(__imp__sub_83C2986C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29870"))) PPC_WEAK_FUNC(sub_83C29870);
PPC_FUNC_IMPL(__imp__sub_83C29870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4144
	ctx.r3.s64 = ctx.r11.s64 + 4144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2987C"))) PPC_WEAK_FUNC(sub_83C2987C);
PPC_FUNC_IMPL(__imp__sub_83C2987C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C29880"))) PPC_WEAK_FUNC(sub_83C29880);
PPC_FUNC_IMPL(__imp__sub_83C29880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31789
	ctx.r11.s64 = -2083323904;
	// addi r3,r11,4152
	ctx.r3.s64 = ctx.r11.s64 + 4152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C2988C"))) PPC_WEAK_FUNC(sub_83C2988C);
PPC_FUNC_IMPL(__imp__sub_83C2988C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

