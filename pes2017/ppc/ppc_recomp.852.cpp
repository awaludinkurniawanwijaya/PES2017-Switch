#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C832D0"))) PPC_WEAK_FUNC(sub_83C832D0);
PPC_FUNC_IMPL(__imp__sub_83C832D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-5312
	ctx.r3.s64 = ctx.r11.s64 + -5312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C832DC"))) PPC_WEAK_FUNC(sub_83C832DC);
PPC_FUNC_IMPL(__imp__sub_83C832DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C832E0"))) PPC_WEAK_FUNC(sub_83C832E0);
PPC_FUNC_IMPL(__imp__sub_83C832E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-5304
	ctx.r3.s64 = ctx.r11.s64 + -5304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C832EC"))) PPC_WEAK_FUNC(sub_83C832EC);
PPC_FUNC_IMPL(__imp__sub_83C832EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C832F0"))) PPC_WEAK_FUNC(sub_83C832F0);
PPC_FUNC_IMPL(__imp__sub_83C832F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-5296
	ctx.r3.s64 = ctx.r11.s64 + -5296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C832FC"))) PPC_WEAK_FUNC(sub_83C832FC);
PPC_FUNC_IMPL(__imp__sub_83C832FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83300"))) PPC_WEAK_FUNC(sub_83C83300);
PPC_FUNC_IMPL(__imp__sub_83C83300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-5288
	ctx.r3.s64 = ctx.r11.s64 + -5288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8330C"))) PPC_WEAK_FUNC(sub_83C8330C);
PPC_FUNC_IMPL(__imp__sub_83C8330C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83310"))) PPC_WEAK_FUNC(sub_83C83310);
PPC_FUNC_IMPL(__imp__sub_83C83310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-5280
	ctx.r3.s64 = ctx.r11.s64 + -5280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8331C"))) PPC_WEAK_FUNC(sub_83C8331C);
PPC_FUNC_IMPL(__imp__sub_83C8331C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83320"))) PPC_WEAK_FUNC(sub_83C83320);
PPC_FUNC_IMPL(__imp__sub_83C83320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-5272
	ctx.r3.s64 = ctx.r11.s64 + -5272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8332C"))) PPC_WEAK_FUNC(sub_83C8332C);
PPC_FUNC_IMPL(__imp__sub_83C8332C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83330"))) PPC_WEAK_FUNC(sub_83C83330);
PPC_FUNC_IMPL(__imp__sub_83C83330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-5264
	ctx.r3.s64 = ctx.r11.s64 + -5264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8333C"))) PPC_WEAK_FUNC(sub_83C8333C);
PPC_FUNC_IMPL(__imp__sub_83C8333C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83340"))) PPC_WEAK_FUNC(sub_83C83340);
PPC_FUNC_IMPL(__imp__sub_83C83340) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,23264
	ctx.r7.s64 = ctx.r8.s64 + 23264;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,23264(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 23264);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,23264(r8)
	PPC_STORE_U32(ctx.r8.u32 + 23264, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C83368"))) PPC_WEAK_FUNC(sub_83C83368);
PPC_FUNC_IMPL(__imp__sub_83C83368) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,23260
	ctx.r3.s64 = ctx.r11.s64 + 23260;
	// bl 0x83523120
	ctx.lr = 0x83C83380;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-5256
	ctx.r3.s64 = ctx.r10.s64 + -5256;
	// bl 0x831cdcc8
	ctx.lr = 0x83C8338C;
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

__attribute__((alias("__imp__sub_83C8339C"))) PPC_WEAK_FUNC(sub_83C8339C);
PPC_FUNC_IMPL(__imp__sub_83C8339C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C833A0"))) PPC_WEAK_FUNC(sub_83C833A0);
PPC_FUNC_IMPL(__imp__sub_83C833A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-5240
	ctx.r3.s64 = ctx.r11.s64 + -5240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C833AC"))) PPC_WEAK_FUNC(sub_83C833AC);
PPC_FUNC_IMPL(__imp__sub_83C833AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C833B0"))) PPC_WEAK_FUNC(sub_83C833B0);
PPC_FUNC_IMPL(__imp__sub_83C833B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-5232
	ctx.r3.s64 = ctx.r11.s64 + -5232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C833BC"))) PPC_WEAK_FUNC(sub_83C833BC);
PPC_FUNC_IMPL(__imp__sub_83C833BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C833C0"))) PPC_WEAK_FUNC(sub_83C833C0);
PPC_FUNC_IMPL(__imp__sub_83C833C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-5224
	ctx.r3.s64 = ctx.r11.s64 + -5224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C833CC"))) PPC_WEAK_FUNC(sub_83C833CC);
PPC_FUNC_IMPL(__imp__sub_83C833CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C833D0"))) PPC_WEAK_FUNC(sub_83C833D0);
PPC_FUNC_IMPL(__imp__sub_83C833D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-5216
	ctx.r3.s64 = ctx.r11.s64 + -5216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C833DC"))) PPC_WEAK_FUNC(sub_83C833DC);
PPC_FUNC_IMPL(__imp__sub_83C833DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C833E0"))) PPC_WEAK_FUNC(sub_83C833E0);
PPC_FUNC_IMPL(__imp__sub_83C833E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-5208
	ctx.r3.s64 = ctx.r11.s64 + -5208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C833EC"))) PPC_WEAK_FUNC(sub_83C833EC);
PPC_FUNC_IMPL(__imp__sub_83C833EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C833F0"))) PPC_WEAK_FUNC(sub_83C833F0);
PPC_FUNC_IMPL(__imp__sub_83C833F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-5200
	ctx.r3.s64 = ctx.r11.s64 + -5200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C833FC"))) PPC_WEAK_FUNC(sub_83C833FC);
PPC_FUNC_IMPL(__imp__sub_83C833FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83400"))) PPC_WEAK_FUNC(sub_83C83400);
PPC_FUNC_IMPL(__imp__sub_83C83400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-5192
	ctx.r3.s64 = ctx.r11.s64 + -5192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8340C"))) PPC_WEAK_FUNC(sub_83C8340C);
PPC_FUNC_IMPL(__imp__sub_83C8340C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83410"))) PPC_WEAK_FUNC(sub_83C83410);
PPC_FUNC_IMPL(__imp__sub_83C83410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-5184
	ctx.r3.s64 = ctx.r11.s64 + -5184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8341C"))) PPC_WEAK_FUNC(sub_83C8341C);
PPC_FUNC_IMPL(__imp__sub_83C8341C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83420"))) PPC_WEAK_FUNC(sub_83C83420);
PPC_FUNC_IMPL(__imp__sub_83C83420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-5176
	ctx.r3.s64 = ctx.r11.s64 + -5176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8342C"))) PPC_WEAK_FUNC(sub_83C8342C);
PPC_FUNC_IMPL(__imp__sub_83C8342C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83430"))) PPC_WEAK_FUNC(sub_83C83430);
PPC_FUNC_IMPL(__imp__sub_83C83430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-5168
	ctx.r3.s64 = ctx.r11.s64 + -5168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8343C"))) PPC_WEAK_FUNC(sub_83C8343C);
PPC_FUNC_IMPL(__imp__sub_83C8343C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83440"))) PPC_WEAK_FUNC(sub_83C83440);
PPC_FUNC_IMPL(__imp__sub_83C83440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-5160
	ctx.r3.s64 = ctx.r11.s64 + -5160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8344C"))) PPC_WEAK_FUNC(sub_83C8344C);
PPC_FUNC_IMPL(__imp__sub_83C8344C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83450"))) PPC_WEAK_FUNC(sub_83C83450);
PPC_FUNC_IMPL(__imp__sub_83C83450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-5152
	ctx.r3.s64 = ctx.r11.s64 + -5152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8345C"))) PPC_WEAK_FUNC(sub_83C8345C);
PPC_FUNC_IMPL(__imp__sub_83C8345C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83460"))) PPC_WEAK_FUNC(sub_83C83460);
PPC_FUNC_IMPL(__imp__sub_83C83460) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,23276
	ctx.r7.s64 = ctx.r8.s64 + 23276;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,23276(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 23276);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,23276(r8)
	PPC_STORE_U32(ctx.r8.u32 + 23276, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C83488"))) PPC_WEAK_FUNC(sub_83C83488);
PPC_FUNC_IMPL(__imp__sub_83C83488) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,23272
	ctx.r3.s64 = ctx.r11.s64 + 23272;
	// bl 0x83523120
	ctx.lr = 0x83C834A0;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-5144
	ctx.r3.s64 = ctx.r10.s64 + -5144;
	// bl 0x831cdcc8
	ctx.lr = 0x83C834AC;
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

__attribute__((alias("__imp__sub_83C834BC"))) PPC_WEAK_FUNC(sub_83C834BC);
PPC_FUNC_IMPL(__imp__sub_83C834BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C834C0"))) PPC_WEAK_FUNC(sub_83C834C0);
PPC_FUNC_IMPL(__imp__sub_83C834C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-5128
	ctx.r3.s64 = ctx.r11.s64 + -5128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C834CC"))) PPC_WEAK_FUNC(sub_83C834CC);
PPC_FUNC_IMPL(__imp__sub_83C834CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C834D0"))) PPC_WEAK_FUNC(sub_83C834D0);
PPC_FUNC_IMPL(__imp__sub_83C834D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-5120
	ctx.r3.s64 = ctx.r11.s64 + -5120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C834DC"))) PPC_WEAK_FUNC(sub_83C834DC);
PPC_FUNC_IMPL(__imp__sub_83C834DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C834E0"))) PPC_WEAK_FUNC(sub_83C834E0);
PPC_FUNC_IMPL(__imp__sub_83C834E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-5112
	ctx.r3.s64 = ctx.r11.s64 + -5112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C834EC"))) PPC_WEAK_FUNC(sub_83C834EC);
PPC_FUNC_IMPL(__imp__sub_83C834EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C834F0"))) PPC_WEAK_FUNC(sub_83C834F0);
PPC_FUNC_IMPL(__imp__sub_83C834F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-5104
	ctx.r3.s64 = ctx.r11.s64 + -5104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C834FC"))) PPC_WEAK_FUNC(sub_83C834FC);
PPC_FUNC_IMPL(__imp__sub_83C834FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83500"))) PPC_WEAK_FUNC(sub_83C83500);
PPC_FUNC_IMPL(__imp__sub_83C83500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-5096
	ctx.r3.s64 = ctx.r11.s64 + -5096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8350C"))) PPC_WEAK_FUNC(sub_83C8350C);
PPC_FUNC_IMPL(__imp__sub_83C8350C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83510"))) PPC_WEAK_FUNC(sub_83C83510);
PPC_FUNC_IMPL(__imp__sub_83C83510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-5088
	ctx.r3.s64 = ctx.r11.s64 + -5088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8351C"))) PPC_WEAK_FUNC(sub_83C8351C);
PPC_FUNC_IMPL(__imp__sub_83C8351C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83520"))) PPC_WEAK_FUNC(sub_83C83520);
PPC_FUNC_IMPL(__imp__sub_83C83520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-5080
	ctx.r3.s64 = ctx.r11.s64 + -5080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8352C"))) PPC_WEAK_FUNC(sub_83C8352C);
PPC_FUNC_IMPL(__imp__sub_83C8352C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83530"))) PPC_WEAK_FUNC(sub_83C83530);
PPC_FUNC_IMPL(__imp__sub_83C83530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-5072
	ctx.r3.s64 = ctx.r11.s64 + -5072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8353C"))) PPC_WEAK_FUNC(sub_83C8353C);
PPC_FUNC_IMPL(__imp__sub_83C8353C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83540"))) PPC_WEAK_FUNC(sub_83C83540);
PPC_FUNC_IMPL(__imp__sub_83C83540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-5064
	ctx.r3.s64 = ctx.r11.s64 + -5064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8354C"))) PPC_WEAK_FUNC(sub_83C8354C);
PPC_FUNC_IMPL(__imp__sub_83C8354C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83550"))) PPC_WEAK_FUNC(sub_83C83550);
PPC_FUNC_IMPL(__imp__sub_83C83550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-5056
	ctx.r3.s64 = ctx.r11.s64 + -5056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8355C"))) PPC_WEAK_FUNC(sub_83C8355C);
PPC_FUNC_IMPL(__imp__sub_83C8355C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83560"))) PPC_WEAK_FUNC(sub_83C83560);
PPC_FUNC_IMPL(__imp__sub_83C83560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-5048
	ctx.r3.s64 = ctx.r11.s64 + -5048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8356C"))) PPC_WEAK_FUNC(sub_83C8356C);
PPC_FUNC_IMPL(__imp__sub_83C8356C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83570"))) PPC_WEAK_FUNC(sub_83C83570);
PPC_FUNC_IMPL(__imp__sub_83C83570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-5040
	ctx.r3.s64 = ctx.r11.s64 + -5040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8357C"))) PPC_WEAK_FUNC(sub_83C8357C);
PPC_FUNC_IMPL(__imp__sub_83C8357C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83580"))) PPC_WEAK_FUNC(sub_83C83580);
PPC_FUNC_IMPL(__imp__sub_83C83580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-5032
	ctx.r3.s64 = ctx.r11.s64 + -5032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8358C"))) PPC_WEAK_FUNC(sub_83C8358C);
PPC_FUNC_IMPL(__imp__sub_83C8358C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83590"))) PPC_WEAK_FUNC(sub_83C83590);
PPC_FUNC_IMPL(__imp__sub_83C83590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-5024
	ctx.r3.s64 = ctx.r11.s64 + -5024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8359C"))) PPC_WEAK_FUNC(sub_83C8359C);
PPC_FUNC_IMPL(__imp__sub_83C8359C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C835A0"))) PPC_WEAK_FUNC(sub_83C835A0);
PPC_FUNC_IMPL(__imp__sub_83C835A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-5016
	ctx.r3.s64 = ctx.r11.s64 + -5016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C835AC"))) PPC_WEAK_FUNC(sub_83C835AC);
PPC_FUNC_IMPL(__imp__sub_83C835AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C835B0"))) PPC_WEAK_FUNC(sub_83C835B0);
PPC_FUNC_IMPL(__imp__sub_83C835B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-5008
	ctx.r3.s64 = ctx.r11.s64 + -5008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C835BC"))) PPC_WEAK_FUNC(sub_83C835BC);
PPC_FUNC_IMPL(__imp__sub_83C835BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C835C0"))) PPC_WEAK_FUNC(sub_83C835C0);
PPC_FUNC_IMPL(__imp__sub_83C835C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-5000
	ctx.r3.s64 = ctx.r11.s64 + -5000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C835CC"))) PPC_WEAK_FUNC(sub_83C835CC);
PPC_FUNC_IMPL(__imp__sub_83C835CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C835D0"))) PPC_WEAK_FUNC(sub_83C835D0);
PPC_FUNC_IMPL(__imp__sub_83C835D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4992
	ctx.r3.s64 = ctx.r11.s64 + -4992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C835DC"))) PPC_WEAK_FUNC(sub_83C835DC);
PPC_FUNC_IMPL(__imp__sub_83C835DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C835E0"))) PPC_WEAK_FUNC(sub_83C835E0);
PPC_FUNC_IMPL(__imp__sub_83C835E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4984
	ctx.r3.s64 = ctx.r11.s64 + -4984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C835EC"))) PPC_WEAK_FUNC(sub_83C835EC);
PPC_FUNC_IMPL(__imp__sub_83C835EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C835F0"))) PPC_WEAK_FUNC(sub_83C835F0);
PPC_FUNC_IMPL(__imp__sub_83C835F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4976
	ctx.r3.s64 = ctx.r11.s64 + -4976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C835FC"))) PPC_WEAK_FUNC(sub_83C835FC);
PPC_FUNC_IMPL(__imp__sub_83C835FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83600"))) PPC_WEAK_FUNC(sub_83C83600);
PPC_FUNC_IMPL(__imp__sub_83C83600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4968
	ctx.r3.s64 = ctx.r11.s64 + -4968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8360C"))) PPC_WEAK_FUNC(sub_83C8360C);
PPC_FUNC_IMPL(__imp__sub_83C8360C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83610"))) PPC_WEAK_FUNC(sub_83C83610);
PPC_FUNC_IMPL(__imp__sub_83C83610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4960
	ctx.r3.s64 = ctx.r11.s64 + -4960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8361C"))) PPC_WEAK_FUNC(sub_83C8361C);
PPC_FUNC_IMPL(__imp__sub_83C8361C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83620"))) PPC_WEAK_FUNC(sub_83C83620);
PPC_FUNC_IMPL(__imp__sub_83C83620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4952
	ctx.r3.s64 = ctx.r11.s64 + -4952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8362C"))) PPC_WEAK_FUNC(sub_83C8362C);
PPC_FUNC_IMPL(__imp__sub_83C8362C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83630"))) PPC_WEAK_FUNC(sub_83C83630);
PPC_FUNC_IMPL(__imp__sub_83C83630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4944
	ctx.r3.s64 = ctx.r11.s64 + -4944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8363C"))) PPC_WEAK_FUNC(sub_83C8363C);
PPC_FUNC_IMPL(__imp__sub_83C8363C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83640"))) PPC_WEAK_FUNC(sub_83C83640);
PPC_FUNC_IMPL(__imp__sub_83C83640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4936
	ctx.r3.s64 = ctx.r11.s64 + -4936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8364C"))) PPC_WEAK_FUNC(sub_83C8364C);
PPC_FUNC_IMPL(__imp__sub_83C8364C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83650"))) PPC_WEAK_FUNC(sub_83C83650);
PPC_FUNC_IMPL(__imp__sub_83C83650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4928
	ctx.r3.s64 = ctx.r11.s64 + -4928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8365C"))) PPC_WEAK_FUNC(sub_83C8365C);
PPC_FUNC_IMPL(__imp__sub_83C8365C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83660"))) PPC_WEAK_FUNC(sub_83C83660);
PPC_FUNC_IMPL(__imp__sub_83C83660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4920
	ctx.r3.s64 = ctx.r11.s64 + -4920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8366C"))) PPC_WEAK_FUNC(sub_83C8366C);
PPC_FUNC_IMPL(__imp__sub_83C8366C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83670"))) PPC_WEAK_FUNC(sub_83C83670);
PPC_FUNC_IMPL(__imp__sub_83C83670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4912
	ctx.r3.s64 = ctx.r11.s64 + -4912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8367C"))) PPC_WEAK_FUNC(sub_83C8367C);
PPC_FUNC_IMPL(__imp__sub_83C8367C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83680"))) PPC_WEAK_FUNC(sub_83C83680);
PPC_FUNC_IMPL(__imp__sub_83C83680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4904
	ctx.r3.s64 = ctx.r11.s64 + -4904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8368C"))) PPC_WEAK_FUNC(sub_83C8368C);
PPC_FUNC_IMPL(__imp__sub_83C8368C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83690"))) PPC_WEAK_FUNC(sub_83C83690);
PPC_FUNC_IMPL(__imp__sub_83C83690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4896
	ctx.r3.s64 = ctx.r11.s64 + -4896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C8369C"))) PPC_WEAK_FUNC(sub_83C8369C);
PPC_FUNC_IMPL(__imp__sub_83C8369C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C836A0"))) PPC_WEAK_FUNC(sub_83C836A0);
PPC_FUNC_IMPL(__imp__sub_83C836A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4888
	ctx.r3.s64 = ctx.r11.s64 + -4888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C836AC"))) PPC_WEAK_FUNC(sub_83C836AC);
PPC_FUNC_IMPL(__imp__sub_83C836AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C836B0"))) PPC_WEAK_FUNC(sub_83C836B0);
PPC_FUNC_IMPL(__imp__sub_83C836B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4880
	ctx.r3.s64 = ctx.r11.s64 + -4880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C836BC"))) PPC_WEAK_FUNC(sub_83C836BC);
PPC_FUNC_IMPL(__imp__sub_83C836BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C836C0"))) PPC_WEAK_FUNC(sub_83C836C0);
PPC_FUNC_IMPL(__imp__sub_83C836C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4872
	ctx.r3.s64 = ctx.r11.s64 + -4872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C836CC"))) PPC_WEAK_FUNC(sub_83C836CC);
PPC_FUNC_IMPL(__imp__sub_83C836CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C836D0"))) PPC_WEAK_FUNC(sub_83C836D0);
PPC_FUNC_IMPL(__imp__sub_83C836D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4864
	ctx.r3.s64 = ctx.r11.s64 + -4864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C836DC"))) PPC_WEAK_FUNC(sub_83C836DC);
PPC_FUNC_IMPL(__imp__sub_83C836DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C836E0"))) PPC_WEAK_FUNC(sub_83C836E0);
PPC_FUNC_IMPL(__imp__sub_83C836E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4856
	ctx.r3.s64 = ctx.r11.s64 + -4856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C836EC"))) PPC_WEAK_FUNC(sub_83C836EC);
PPC_FUNC_IMPL(__imp__sub_83C836EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C836F0"))) PPC_WEAK_FUNC(sub_83C836F0);
PPC_FUNC_IMPL(__imp__sub_83C836F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4848
	ctx.r3.s64 = ctx.r11.s64 + -4848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C836FC"))) PPC_WEAK_FUNC(sub_83C836FC);
PPC_FUNC_IMPL(__imp__sub_83C836FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83700"))) PPC_WEAK_FUNC(sub_83C83700);
PPC_FUNC_IMPL(__imp__sub_83C83700) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,23300
	ctx.r3.s64 = ctx.r11.s64 + 23300;
	// bl 0x830af788
	ctx.lr = 0x83C83718;
	sub_830AF788(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-4840
	ctx.r3.s64 = ctx.r10.s64 + -4840;
	// bl 0x831cdcc8
	ctx.lr = 0x83C83724;
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

__attribute__((alias("__imp__sub_83C83734"))) PPC_WEAK_FUNC(sub_83C83734);
PPC_FUNC_IMPL(__imp__sub_83C83734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83738"))) PPC_WEAK_FUNC(sub_83C83738);
PPC_FUNC_IMPL(__imp__sub_83C83738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4824
	ctx.r3.s64 = ctx.r11.s64 + -4824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C83744"))) PPC_WEAK_FUNC(sub_83C83744);
PPC_FUNC_IMPL(__imp__sub_83C83744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83748"))) PPC_WEAK_FUNC(sub_83C83748);
PPC_FUNC_IMPL(__imp__sub_83C83748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4816
	ctx.r3.s64 = ctx.r11.s64 + -4816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C83754"))) PPC_WEAK_FUNC(sub_83C83754);
PPC_FUNC_IMPL(__imp__sub_83C83754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83758"))) PPC_WEAK_FUNC(sub_83C83758);
PPC_FUNC_IMPL(__imp__sub_83C83758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4808
	ctx.r3.s64 = ctx.r11.s64 + -4808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C83764"))) PPC_WEAK_FUNC(sub_83C83764);
PPC_FUNC_IMPL(__imp__sub_83C83764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83768"))) PPC_WEAK_FUNC(sub_83C83768);
PPC_FUNC_IMPL(__imp__sub_83C83768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4800
	ctx.r3.s64 = ctx.r11.s64 + -4800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C83774"))) PPC_WEAK_FUNC(sub_83C83774);
PPC_FUNC_IMPL(__imp__sub_83C83774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83778"))) PPC_WEAK_FUNC(sub_83C83778);
PPC_FUNC_IMPL(__imp__sub_83C83778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4792
	ctx.r3.s64 = ctx.r11.s64 + -4792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C83784"))) PPC_WEAK_FUNC(sub_83C83784);
PPC_FUNC_IMPL(__imp__sub_83C83784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83788"))) PPC_WEAK_FUNC(sub_83C83788);
PPC_FUNC_IMPL(__imp__sub_83C83788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4784
	ctx.r3.s64 = ctx.r11.s64 + -4784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C83794"))) PPC_WEAK_FUNC(sub_83C83794);
PPC_FUNC_IMPL(__imp__sub_83C83794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83798"))) PPC_WEAK_FUNC(sub_83C83798);
PPC_FUNC_IMPL(__imp__sub_83C83798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4776
	ctx.r3.s64 = ctx.r11.s64 + -4776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C837A4"))) PPC_WEAK_FUNC(sub_83C837A4);
PPC_FUNC_IMPL(__imp__sub_83C837A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C837A8"))) PPC_WEAK_FUNC(sub_83C837A8);
PPC_FUNC_IMPL(__imp__sub_83C837A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4768
	ctx.r3.s64 = ctx.r11.s64 + -4768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C837B4"))) PPC_WEAK_FUNC(sub_83C837B4);
PPC_FUNC_IMPL(__imp__sub_83C837B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C837B8"))) PPC_WEAK_FUNC(sub_83C837B8);
PPC_FUNC_IMPL(__imp__sub_83C837B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4760
	ctx.r3.s64 = ctx.r11.s64 + -4760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C837C4"))) PPC_WEAK_FUNC(sub_83C837C4);
PPC_FUNC_IMPL(__imp__sub_83C837C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C837C8"))) PPC_WEAK_FUNC(sub_83C837C8);
PPC_FUNC_IMPL(__imp__sub_83C837C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4752
	ctx.r3.s64 = ctx.r11.s64 + -4752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C837D4"))) PPC_WEAK_FUNC(sub_83C837D4);
PPC_FUNC_IMPL(__imp__sub_83C837D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C837D8"))) PPC_WEAK_FUNC(sub_83C837D8);
PPC_FUNC_IMPL(__imp__sub_83C837D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4744
	ctx.r3.s64 = ctx.r11.s64 + -4744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C837E4"))) PPC_WEAK_FUNC(sub_83C837E4);
PPC_FUNC_IMPL(__imp__sub_83C837E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C837E8"))) PPC_WEAK_FUNC(sub_83C837E8);
PPC_FUNC_IMPL(__imp__sub_83C837E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4736
	ctx.r3.s64 = ctx.r11.s64 + -4736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C837F4"))) PPC_WEAK_FUNC(sub_83C837F4);
PPC_FUNC_IMPL(__imp__sub_83C837F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C837F8"))) PPC_WEAK_FUNC(sub_83C837F8);
PPC_FUNC_IMPL(__imp__sub_83C837F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4728
	ctx.r3.s64 = ctx.r11.s64 + -4728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C83804"))) PPC_WEAK_FUNC(sub_83C83804);
PPC_FUNC_IMPL(__imp__sub_83C83804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83808"))) PPC_WEAK_FUNC(sub_83C83808);
PPC_FUNC_IMPL(__imp__sub_83C83808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4720
	ctx.r3.s64 = ctx.r11.s64 + -4720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C83814"))) PPC_WEAK_FUNC(sub_83C83814);
PPC_FUNC_IMPL(__imp__sub_83C83814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83818"))) PPC_WEAK_FUNC(sub_83C83818);
PPC_FUNC_IMPL(__imp__sub_83C83818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4712
	ctx.r3.s64 = ctx.r11.s64 + -4712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C83824"))) PPC_WEAK_FUNC(sub_83C83824);
PPC_FUNC_IMPL(__imp__sub_83C83824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83828"))) PPC_WEAK_FUNC(sub_83C83828);
PPC_FUNC_IMPL(__imp__sub_83C83828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4704
	ctx.r3.s64 = ctx.r11.s64 + -4704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C83834"))) PPC_WEAK_FUNC(sub_83C83834);
PPC_FUNC_IMPL(__imp__sub_83C83834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83838"))) PPC_WEAK_FUNC(sub_83C83838);
PPC_FUNC_IMPL(__imp__sub_83C83838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4696
	ctx.r3.s64 = ctx.r11.s64 + -4696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C83844"))) PPC_WEAK_FUNC(sub_83C83844);
PPC_FUNC_IMPL(__imp__sub_83C83844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83848"))) PPC_WEAK_FUNC(sub_83C83848);
PPC_FUNC_IMPL(__imp__sub_83C83848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4688
	ctx.r3.s64 = ctx.r11.s64 + -4688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C83854"))) PPC_WEAK_FUNC(sub_83C83854);
PPC_FUNC_IMPL(__imp__sub_83C83854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83858"))) PPC_WEAK_FUNC(sub_83C83858);
PPC_FUNC_IMPL(__imp__sub_83C83858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4680
	ctx.r3.s64 = ctx.r11.s64 + -4680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C83864"))) PPC_WEAK_FUNC(sub_83C83864);
PPC_FUNC_IMPL(__imp__sub_83C83864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83868"))) PPC_WEAK_FUNC(sub_83C83868);
PPC_FUNC_IMPL(__imp__sub_83C83868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4672
	ctx.r3.s64 = ctx.r11.s64 + -4672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C83874"))) PPC_WEAK_FUNC(sub_83C83874);
PPC_FUNC_IMPL(__imp__sub_83C83874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83878"))) PPC_WEAK_FUNC(sub_83C83878);
PPC_FUNC_IMPL(__imp__sub_83C83878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4664
	ctx.r3.s64 = ctx.r11.s64 + -4664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C83884"))) PPC_WEAK_FUNC(sub_83C83884);
PPC_FUNC_IMPL(__imp__sub_83C83884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83888"))) PPC_WEAK_FUNC(sub_83C83888);
PPC_FUNC_IMPL(__imp__sub_83C83888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4656
	ctx.r3.s64 = ctx.r11.s64 + -4656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C83894"))) PPC_WEAK_FUNC(sub_83C83894);
PPC_FUNC_IMPL(__imp__sub_83C83894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83898"))) PPC_WEAK_FUNC(sub_83C83898);
PPC_FUNC_IMPL(__imp__sub_83C83898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4648
	ctx.r3.s64 = ctx.r11.s64 + -4648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C838A4"))) PPC_WEAK_FUNC(sub_83C838A4);
PPC_FUNC_IMPL(__imp__sub_83C838A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C838A8"))) PPC_WEAK_FUNC(sub_83C838A8);
PPC_FUNC_IMPL(__imp__sub_83C838A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4640
	ctx.r3.s64 = ctx.r11.s64 + -4640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C838B4"))) PPC_WEAK_FUNC(sub_83C838B4);
PPC_FUNC_IMPL(__imp__sub_83C838B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C838B8"))) PPC_WEAK_FUNC(sub_83C838B8);
PPC_FUNC_IMPL(__imp__sub_83C838B8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,23312
	ctx.r7.s64 = ctx.r8.s64 + 23312;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,23312(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 23312);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,23312(r8)
	PPC_STORE_U32(ctx.r8.u32 + 23312, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C838E0"))) PPC_WEAK_FUNC(sub_83C838E0);
PPC_FUNC_IMPL(__imp__sub_83C838E0) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,23308
	ctx.r3.s64 = ctx.r11.s64 + 23308;
	// bl 0x83523120
	ctx.lr = 0x83C838F8;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-4632
	ctx.r3.s64 = ctx.r10.s64 + -4632;
	// bl 0x831cdcc8
	ctx.lr = 0x83C83904;
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

__attribute__((alias("__imp__sub_83C83914"))) PPC_WEAK_FUNC(sub_83C83914);
PPC_FUNC_IMPL(__imp__sub_83C83914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83918"))) PPC_WEAK_FUNC(sub_83C83918);
PPC_FUNC_IMPL(__imp__sub_83C83918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4616
	ctx.r3.s64 = ctx.r11.s64 + -4616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C83924"))) PPC_WEAK_FUNC(sub_83C83924);
PPC_FUNC_IMPL(__imp__sub_83C83924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83928"))) PPC_WEAK_FUNC(sub_83C83928);
PPC_FUNC_IMPL(__imp__sub_83C83928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4608
	ctx.r3.s64 = ctx.r11.s64 + -4608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C83934"))) PPC_WEAK_FUNC(sub_83C83934);
PPC_FUNC_IMPL(__imp__sub_83C83934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83938"))) PPC_WEAK_FUNC(sub_83C83938);
PPC_FUNC_IMPL(__imp__sub_83C83938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4600
	ctx.r3.s64 = ctx.r11.s64 + -4600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C83944"))) PPC_WEAK_FUNC(sub_83C83944);
PPC_FUNC_IMPL(__imp__sub_83C83944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83948"))) PPC_WEAK_FUNC(sub_83C83948);
PPC_FUNC_IMPL(__imp__sub_83C83948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4592
	ctx.r3.s64 = ctx.r11.s64 + -4592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C83954"))) PPC_WEAK_FUNC(sub_83C83954);
PPC_FUNC_IMPL(__imp__sub_83C83954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83958"))) PPC_WEAK_FUNC(sub_83C83958);
PPC_FUNC_IMPL(__imp__sub_83C83958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4584
	ctx.r3.s64 = ctx.r11.s64 + -4584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C83964"))) PPC_WEAK_FUNC(sub_83C83964);
PPC_FUNC_IMPL(__imp__sub_83C83964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83968"))) PPC_WEAK_FUNC(sub_83C83968);
PPC_FUNC_IMPL(__imp__sub_83C83968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4576
	ctx.r3.s64 = ctx.r11.s64 + -4576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C83974"))) PPC_WEAK_FUNC(sub_83C83974);
PPC_FUNC_IMPL(__imp__sub_83C83974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83978"))) PPC_WEAK_FUNC(sub_83C83978);
PPC_FUNC_IMPL(__imp__sub_83C83978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4568
	ctx.r3.s64 = ctx.r11.s64 + -4568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C83984"))) PPC_WEAK_FUNC(sub_83C83984);
PPC_FUNC_IMPL(__imp__sub_83C83984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83988"))) PPC_WEAK_FUNC(sub_83C83988);
PPC_FUNC_IMPL(__imp__sub_83C83988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4560
	ctx.r3.s64 = ctx.r11.s64 + -4560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C83994"))) PPC_WEAK_FUNC(sub_83C83994);
PPC_FUNC_IMPL(__imp__sub_83C83994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83998"))) PPC_WEAK_FUNC(sub_83C83998);
PPC_FUNC_IMPL(__imp__sub_83C83998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4552
	ctx.r3.s64 = ctx.r11.s64 + -4552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C839A4"))) PPC_WEAK_FUNC(sub_83C839A4);
PPC_FUNC_IMPL(__imp__sub_83C839A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C839A8"))) PPC_WEAK_FUNC(sub_83C839A8);
PPC_FUNC_IMPL(__imp__sub_83C839A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4544
	ctx.r3.s64 = ctx.r11.s64 + -4544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C839B4"))) PPC_WEAK_FUNC(sub_83C839B4);
PPC_FUNC_IMPL(__imp__sub_83C839B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C839B8"))) PPC_WEAK_FUNC(sub_83C839B8);
PPC_FUNC_IMPL(__imp__sub_83C839B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4536
	ctx.r3.s64 = ctx.r11.s64 + -4536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C839C4"))) PPC_WEAK_FUNC(sub_83C839C4);
PPC_FUNC_IMPL(__imp__sub_83C839C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C839C8"))) PPC_WEAK_FUNC(sub_83C839C8);
PPC_FUNC_IMPL(__imp__sub_83C839C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4528
	ctx.r3.s64 = ctx.r11.s64 + -4528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C839D4"))) PPC_WEAK_FUNC(sub_83C839D4);
PPC_FUNC_IMPL(__imp__sub_83C839D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C839D8"))) PPC_WEAK_FUNC(sub_83C839D8);
PPC_FUNC_IMPL(__imp__sub_83C839D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4520
	ctx.r3.s64 = ctx.r11.s64 + -4520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C839E4"))) PPC_WEAK_FUNC(sub_83C839E4);
PPC_FUNC_IMPL(__imp__sub_83C839E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C839E8"))) PPC_WEAK_FUNC(sub_83C839E8);
PPC_FUNC_IMPL(__imp__sub_83C839E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4512
	ctx.r3.s64 = ctx.r11.s64 + -4512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C839F4"))) PPC_WEAK_FUNC(sub_83C839F4);
PPC_FUNC_IMPL(__imp__sub_83C839F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C839F8"))) PPC_WEAK_FUNC(sub_83C839F8);
PPC_FUNC_IMPL(__imp__sub_83C839F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4504
	ctx.r3.s64 = ctx.r11.s64 + -4504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C83A04"))) PPC_WEAK_FUNC(sub_83C83A04);
PPC_FUNC_IMPL(__imp__sub_83C83A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83A08"))) PPC_WEAK_FUNC(sub_83C83A08);
PPC_FUNC_IMPL(__imp__sub_83C83A08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4496
	ctx.r3.s64 = ctx.r11.s64 + -4496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C83A14"))) PPC_WEAK_FUNC(sub_83C83A14);
PPC_FUNC_IMPL(__imp__sub_83C83A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83A18"))) PPC_WEAK_FUNC(sub_83C83A18);
PPC_FUNC_IMPL(__imp__sub_83C83A18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4488
	ctx.r3.s64 = ctx.r11.s64 + -4488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C83A24"))) PPC_WEAK_FUNC(sub_83C83A24);
PPC_FUNC_IMPL(__imp__sub_83C83A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83A28"))) PPC_WEAK_FUNC(sub_83C83A28);
PPC_FUNC_IMPL(__imp__sub_83C83A28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4480
	ctx.r3.s64 = ctx.r11.s64 + -4480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C83A34"))) PPC_WEAK_FUNC(sub_83C83A34);
PPC_FUNC_IMPL(__imp__sub_83C83A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83A38"))) PPC_WEAK_FUNC(sub_83C83A38);
PPC_FUNC_IMPL(__imp__sub_83C83A38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4472
	ctx.r3.s64 = ctx.r11.s64 + -4472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C83A44"))) PPC_WEAK_FUNC(sub_83C83A44);
PPC_FUNC_IMPL(__imp__sub_83C83A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83A48"))) PPC_WEAK_FUNC(sub_83C83A48);
PPC_FUNC_IMPL(__imp__sub_83C83A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4464
	ctx.r3.s64 = ctx.r11.s64 + -4464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C83A54"))) PPC_WEAK_FUNC(sub_83C83A54);
PPC_FUNC_IMPL(__imp__sub_83C83A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83A58"))) PPC_WEAK_FUNC(sub_83C83A58);
PPC_FUNC_IMPL(__imp__sub_83C83A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4456
	ctx.r3.s64 = ctx.r11.s64 + -4456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C83A64"))) PPC_WEAK_FUNC(sub_83C83A64);
PPC_FUNC_IMPL(__imp__sub_83C83A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83A68"))) PPC_WEAK_FUNC(sub_83C83A68);
PPC_FUNC_IMPL(__imp__sub_83C83A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4448
	ctx.r3.s64 = ctx.r11.s64 + -4448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C83A74"))) PPC_WEAK_FUNC(sub_83C83A74);
PPC_FUNC_IMPL(__imp__sub_83C83A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83A78"))) PPC_WEAK_FUNC(sub_83C83A78);
PPC_FUNC_IMPL(__imp__sub_83C83A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4440
	ctx.r3.s64 = ctx.r11.s64 + -4440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C83A84"))) PPC_WEAK_FUNC(sub_83C83A84);
PPC_FUNC_IMPL(__imp__sub_83C83A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83A88"))) PPC_WEAK_FUNC(sub_83C83A88);
PPC_FUNC_IMPL(__imp__sub_83C83A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4432
	ctx.r3.s64 = ctx.r11.s64 + -4432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C83A94"))) PPC_WEAK_FUNC(sub_83C83A94);
PPC_FUNC_IMPL(__imp__sub_83C83A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83A98"))) PPC_WEAK_FUNC(sub_83C83A98);
PPC_FUNC_IMPL(__imp__sub_83C83A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4424
	ctx.r3.s64 = ctx.r11.s64 + -4424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C83AA4"))) PPC_WEAK_FUNC(sub_83C83AA4);
PPC_FUNC_IMPL(__imp__sub_83C83AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83AA8"))) PPC_WEAK_FUNC(sub_83C83AA8);
PPC_FUNC_IMPL(__imp__sub_83C83AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4416
	ctx.r3.s64 = ctx.r11.s64 + -4416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C83AB4"))) PPC_WEAK_FUNC(sub_83C83AB4);
PPC_FUNC_IMPL(__imp__sub_83C83AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83AB8"))) PPC_WEAK_FUNC(sub_83C83AB8);
PPC_FUNC_IMPL(__imp__sub_83C83AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4408
	ctx.r3.s64 = ctx.r11.s64 + -4408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C83AC4"))) PPC_WEAK_FUNC(sub_83C83AC4);
PPC_FUNC_IMPL(__imp__sub_83C83AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83AC8"))) PPC_WEAK_FUNC(sub_83C83AC8);
PPC_FUNC_IMPL(__imp__sub_83C83AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4400
	ctx.r3.s64 = ctx.r11.s64 + -4400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C83AD4"))) PPC_WEAK_FUNC(sub_83C83AD4);
PPC_FUNC_IMPL(__imp__sub_83C83AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83AD8"))) PPC_WEAK_FUNC(sub_83C83AD8);
PPC_FUNC_IMPL(__imp__sub_83C83AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4392
	ctx.r3.s64 = ctx.r11.s64 + -4392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C83AE4"))) PPC_WEAK_FUNC(sub_83C83AE4);
PPC_FUNC_IMPL(__imp__sub_83C83AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83AE8"))) PPC_WEAK_FUNC(sub_83C83AE8);
PPC_FUNC_IMPL(__imp__sub_83C83AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4384
	ctx.r3.s64 = ctx.r11.s64 + -4384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C83AF4"))) PPC_WEAK_FUNC(sub_83C83AF4);
PPC_FUNC_IMPL(__imp__sub_83C83AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83AF8"))) PPC_WEAK_FUNC(sub_83C83AF8);
PPC_FUNC_IMPL(__imp__sub_83C83AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4376
	ctx.r3.s64 = ctx.r11.s64 + -4376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C83B04"))) PPC_WEAK_FUNC(sub_83C83B04);
PPC_FUNC_IMPL(__imp__sub_83C83B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83B08"))) PPC_WEAK_FUNC(sub_83C83B08);
PPC_FUNC_IMPL(__imp__sub_83C83B08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4368
	ctx.r3.s64 = ctx.r11.s64 + -4368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C83B14"))) PPC_WEAK_FUNC(sub_83C83B14);
PPC_FUNC_IMPL(__imp__sub_83C83B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83B18"))) PPC_WEAK_FUNC(sub_83C83B18);
PPC_FUNC_IMPL(__imp__sub_83C83B18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4360
	ctx.r3.s64 = ctx.r11.s64 + -4360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C83B24"))) PPC_WEAK_FUNC(sub_83C83B24);
PPC_FUNC_IMPL(__imp__sub_83C83B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83B28"))) PPC_WEAK_FUNC(sub_83C83B28);
PPC_FUNC_IMPL(__imp__sub_83C83B28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4352
	ctx.r3.s64 = ctx.r11.s64 + -4352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C83B34"))) PPC_WEAK_FUNC(sub_83C83B34);
PPC_FUNC_IMPL(__imp__sub_83C83B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83B38"))) PPC_WEAK_FUNC(sub_83C83B38);
PPC_FUNC_IMPL(__imp__sub_83C83B38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4344
	ctx.r3.s64 = ctx.r11.s64 + -4344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C83B44"))) PPC_WEAK_FUNC(sub_83C83B44);
PPC_FUNC_IMPL(__imp__sub_83C83B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83B48"))) PPC_WEAK_FUNC(sub_83C83B48);
PPC_FUNC_IMPL(__imp__sub_83C83B48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4336
	ctx.r3.s64 = ctx.r11.s64 + -4336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C83B54"))) PPC_WEAK_FUNC(sub_83C83B54);
PPC_FUNC_IMPL(__imp__sub_83C83B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83B58"))) PPC_WEAK_FUNC(sub_83C83B58);
PPC_FUNC_IMPL(__imp__sub_83C83B58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4328
	ctx.r3.s64 = ctx.r11.s64 + -4328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C83B64"))) PPC_WEAK_FUNC(sub_83C83B64);
PPC_FUNC_IMPL(__imp__sub_83C83B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83B68"))) PPC_WEAK_FUNC(sub_83C83B68);
PPC_FUNC_IMPL(__imp__sub_83C83B68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4320
	ctx.r3.s64 = ctx.r11.s64 + -4320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C83B74"))) PPC_WEAK_FUNC(sub_83C83B74);
PPC_FUNC_IMPL(__imp__sub_83C83B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83B78"))) PPC_WEAK_FUNC(sub_83C83B78);
PPC_FUNC_IMPL(__imp__sub_83C83B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4312
	ctx.r3.s64 = ctx.r11.s64 + -4312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C83B84"))) PPC_WEAK_FUNC(sub_83C83B84);
PPC_FUNC_IMPL(__imp__sub_83C83B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83B88"))) PPC_WEAK_FUNC(sub_83C83B88);
PPC_FUNC_IMPL(__imp__sub_83C83B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4304
	ctx.r3.s64 = ctx.r11.s64 + -4304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C83B94"))) PPC_WEAK_FUNC(sub_83C83B94);
PPC_FUNC_IMPL(__imp__sub_83C83B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83B98"))) PPC_WEAK_FUNC(sub_83C83B98);
PPC_FUNC_IMPL(__imp__sub_83C83B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4296
	ctx.r3.s64 = ctx.r11.s64 + -4296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C83BA4"))) PPC_WEAK_FUNC(sub_83C83BA4);
PPC_FUNC_IMPL(__imp__sub_83C83BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83BA8"))) PPC_WEAK_FUNC(sub_83C83BA8);
PPC_FUNC_IMPL(__imp__sub_83C83BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4288
	ctx.r3.s64 = ctx.r11.s64 + -4288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C83BB4"))) PPC_WEAK_FUNC(sub_83C83BB4);
PPC_FUNC_IMPL(__imp__sub_83C83BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83BB8"))) PPC_WEAK_FUNC(sub_83C83BB8);
PPC_FUNC_IMPL(__imp__sub_83C83BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4280
	ctx.r3.s64 = ctx.r11.s64 + -4280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C83BC4"))) PPC_WEAK_FUNC(sub_83C83BC4);
PPC_FUNC_IMPL(__imp__sub_83C83BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C83BC8"))) PPC_WEAK_FUNC(sub_83C83BC8);
PPC_FUNC_IMPL(__imp__sub_83C83BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-4272
	ctx.r3.s64 = ctx.r11.s64 + -4272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

