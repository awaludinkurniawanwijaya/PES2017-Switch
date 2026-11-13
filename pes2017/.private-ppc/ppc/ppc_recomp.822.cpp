#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C6B040"))) PPC_WEAK_FUNC(sub_83C6B040);
PPC_FUNC_IMPL(__imp__sub_83C6B040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24344
	ctx.r3.s64 = ctx.r11.s64 + 24344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B04C"))) PPC_WEAK_FUNC(sub_83C6B04C);
PPC_FUNC_IMPL(__imp__sub_83C6B04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B050"))) PPC_WEAK_FUNC(sub_83C6B050);
PPC_FUNC_IMPL(__imp__sub_83C6B050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24352
	ctx.r3.s64 = ctx.r11.s64 + 24352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B05C"))) PPC_WEAK_FUNC(sub_83C6B05C);
PPC_FUNC_IMPL(__imp__sub_83C6B05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B060"))) PPC_WEAK_FUNC(sub_83C6B060);
PPC_FUNC_IMPL(__imp__sub_83C6B060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24360
	ctx.r3.s64 = ctx.r11.s64 + 24360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B06C"))) PPC_WEAK_FUNC(sub_83C6B06C);
PPC_FUNC_IMPL(__imp__sub_83C6B06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B070"))) PPC_WEAK_FUNC(sub_83C6B070);
PPC_FUNC_IMPL(__imp__sub_83C6B070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24368
	ctx.r3.s64 = ctx.r11.s64 + 24368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B07C"))) PPC_WEAK_FUNC(sub_83C6B07C);
PPC_FUNC_IMPL(__imp__sub_83C6B07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B080"))) PPC_WEAK_FUNC(sub_83C6B080);
PPC_FUNC_IMPL(__imp__sub_83C6B080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24376
	ctx.r3.s64 = ctx.r11.s64 + 24376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B08C"))) PPC_WEAK_FUNC(sub_83C6B08C);
PPC_FUNC_IMPL(__imp__sub_83C6B08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B090"))) PPC_WEAK_FUNC(sub_83C6B090);
PPC_FUNC_IMPL(__imp__sub_83C6B090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24384
	ctx.r3.s64 = ctx.r11.s64 + 24384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B09C"))) PPC_WEAK_FUNC(sub_83C6B09C);
PPC_FUNC_IMPL(__imp__sub_83C6B09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B0A0"))) PPC_WEAK_FUNC(sub_83C6B0A0);
PPC_FUNC_IMPL(__imp__sub_83C6B0A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24392
	ctx.r3.s64 = ctx.r11.s64 + 24392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B0AC"))) PPC_WEAK_FUNC(sub_83C6B0AC);
PPC_FUNC_IMPL(__imp__sub_83C6B0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B0B0"))) PPC_WEAK_FUNC(sub_83C6B0B0);
PPC_FUNC_IMPL(__imp__sub_83C6B0B0) {
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
	// addi r3,r11,-30208
	ctx.r3.s64 = ctx.r11.s64 + -30208;
	// bl 0x83523120
	ctx.lr = 0x83C6B0C8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,24400
	ctx.r3.s64 = ctx.r10.s64 + 24400;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6B0D4;
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

__attribute__((alias("__imp__sub_83C6B0E4"))) PPC_WEAK_FUNC(sub_83C6B0E4);
PPC_FUNC_IMPL(__imp__sub_83C6B0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B0E8"))) PPC_WEAK_FUNC(sub_83C6B0E8);
PPC_FUNC_IMPL(__imp__sub_83C6B0E8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-30192
	ctx.r7.s64 = ctx.r8.s64 + -30192;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-30192(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30192);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-30192(r8)
	PPC_STORE_U32(ctx.r8.u32 + -30192, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6B110"))) PPC_WEAK_FUNC(sub_83C6B110);
PPC_FUNC_IMPL(__imp__sub_83C6B110) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-25068
	ctx.r6.s64 = ctx.r7.s64 + -25068;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-25140(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -25140);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-30192(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -30192);
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
	// std r9,-25068(r7)
	PPC_STORE_U64(ctx.r7.u32 + -25068, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6B158"))) PPC_WEAK_FUNC(sub_83C6B158);
PPC_FUNC_IMPL(__imp__sub_83C6B158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24416
	ctx.r3.s64 = ctx.r11.s64 + 24416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B164"))) PPC_WEAK_FUNC(sub_83C6B164);
PPC_FUNC_IMPL(__imp__sub_83C6B164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B168"))) PPC_WEAK_FUNC(sub_83C6B168);
PPC_FUNC_IMPL(__imp__sub_83C6B168) {
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
	// addi r3,r11,-30184
	ctx.r3.s64 = ctx.r11.s64 + -30184;
	// bl 0x8259af80
	ctx.lr = 0x83C6B180;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,24432
	ctx.r3.s64 = ctx.r10.s64 + 24432;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6B18C;
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

__attribute__((alias("__imp__sub_83C6B19C"))) PPC_WEAK_FUNC(sub_83C6B19C);
PPC_FUNC_IMPL(__imp__sub_83C6B19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B1A0"))) PPC_WEAK_FUNC(sub_83C6B1A0);
PPC_FUNC_IMPL(__imp__sub_83C6B1A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-30204
	ctx.r11.s64 = ctx.r8.s64 + -30204;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-25092(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25092);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,24424
	ctx.r3.s64 = ctx.r6.s64 + 24424;
	// stw r10,-30204(r8)
	PPC_STORE_U32(ctx.r8.u32 + -30204, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B1D0"))) PPC_WEAK_FUNC(sub_83C6B1D0);
PPC_FUNC_IMPL(__imp__sub_83C6B1D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24440
	ctx.r3.s64 = ctx.r11.s64 + 24440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B1DC"))) PPC_WEAK_FUNC(sub_83C6B1DC);
PPC_FUNC_IMPL(__imp__sub_83C6B1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B1E0"))) PPC_WEAK_FUNC(sub_83C6B1E0);
PPC_FUNC_IMPL(__imp__sub_83C6B1E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24448
	ctx.r3.s64 = ctx.r11.s64 + 24448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B1EC"))) PPC_WEAK_FUNC(sub_83C6B1EC);
PPC_FUNC_IMPL(__imp__sub_83C6B1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B1F0"))) PPC_WEAK_FUNC(sub_83C6B1F0);
PPC_FUNC_IMPL(__imp__sub_83C6B1F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24456
	ctx.r3.s64 = ctx.r11.s64 + 24456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B1FC"))) PPC_WEAK_FUNC(sub_83C6B1FC);
PPC_FUNC_IMPL(__imp__sub_83C6B1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B200"))) PPC_WEAK_FUNC(sub_83C6B200);
PPC_FUNC_IMPL(__imp__sub_83C6B200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24464
	ctx.r3.s64 = ctx.r11.s64 + 24464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B20C"))) PPC_WEAK_FUNC(sub_83C6B20C);
PPC_FUNC_IMPL(__imp__sub_83C6B20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B210"))) PPC_WEAK_FUNC(sub_83C6B210);
PPC_FUNC_IMPL(__imp__sub_83C6B210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24472
	ctx.r3.s64 = ctx.r11.s64 + 24472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B21C"))) PPC_WEAK_FUNC(sub_83C6B21C);
PPC_FUNC_IMPL(__imp__sub_83C6B21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B220"))) PPC_WEAK_FUNC(sub_83C6B220);
PPC_FUNC_IMPL(__imp__sub_83C6B220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24480
	ctx.r3.s64 = ctx.r11.s64 + 24480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B22C"))) PPC_WEAK_FUNC(sub_83C6B22C);
PPC_FUNC_IMPL(__imp__sub_83C6B22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B230"))) PPC_WEAK_FUNC(sub_83C6B230);
PPC_FUNC_IMPL(__imp__sub_83C6B230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24488
	ctx.r3.s64 = ctx.r11.s64 + 24488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B23C"))) PPC_WEAK_FUNC(sub_83C6B23C);
PPC_FUNC_IMPL(__imp__sub_83C6B23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B240"))) PPC_WEAK_FUNC(sub_83C6B240);
PPC_FUNC_IMPL(__imp__sub_83C6B240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24496
	ctx.r3.s64 = ctx.r11.s64 + 24496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B24C"))) PPC_WEAK_FUNC(sub_83C6B24C);
PPC_FUNC_IMPL(__imp__sub_83C6B24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B250"))) PPC_WEAK_FUNC(sub_83C6B250);
PPC_FUNC_IMPL(__imp__sub_83C6B250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24504
	ctx.r3.s64 = ctx.r11.s64 + 24504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B25C"))) PPC_WEAK_FUNC(sub_83C6B25C);
PPC_FUNC_IMPL(__imp__sub_83C6B25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B260"))) PPC_WEAK_FUNC(sub_83C6B260);
PPC_FUNC_IMPL(__imp__sub_83C6B260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24512
	ctx.r3.s64 = ctx.r11.s64 + 24512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B26C"))) PPC_WEAK_FUNC(sub_83C6B26C);
PPC_FUNC_IMPL(__imp__sub_83C6B26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B270"))) PPC_WEAK_FUNC(sub_83C6B270);
PPC_FUNC_IMPL(__imp__sub_83C6B270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24520
	ctx.r3.s64 = ctx.r11.s64 + 24520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B27C"))) PPC_WEAK_FUNC(sub_83C6B27C);
PPC_FUNC_IMPL(__imp__sub_83C6B27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B280"))) PPC_WEAK_FUNC(sub_83C6B280);
PPC_FUNC_IMPL(__imp__sub_83C6B280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24528
	ctx.r3.s64 = ctx.r11.s64 + 24528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B28C"))) PPC_WEAK_FUNC(sub_83C6B28C);
PPC_FUNC_IMPL(__imp__sub_83C6B28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B290"))) PPC_WEAK_FUNC(sub_83C6B290);
PPC_FUNC_IMPL(__imp__sub_83C6B290) {
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
	// addi r3,r11,-29840
	ctx.r3.s64 = ctx.r11.s64 + -29840;
	// bl 0x83523120
	ctx.lr = 0x83C6B2A8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,24536
	ctx.r3.s64 = ctx.r10.s64 + 24536;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6B2B4;
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

__attribute__((alias("__imp__sub_83C6B2C4"))) PPC_WEAK_FUNC(sub_83C6B2C4);
PPC_FUNC_IMPL(__imp__sub_83C6B2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B2C8"))) PPC_WEAK_FUNC(sub_83C6B2C8);
PPC_FUNC_IMPL(__imp__sub_83C6B2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-29824
	ctx.r7.s64 = ctx.r8.s64 + -29824;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-29824(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -29824);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-29824(r8)
	PPC_STORE_U32(ctx.r8.u32 + -29824, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6B2F0"))) PPC_WEAK_FUNC(sub_83C6B2F0);
PPC_FUNC_IMPL(__imp__sub_83C6B2F0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-24940
	ctx.r6.s64 = ctx.r7.s64 + -24940;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-25012(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -25012);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-29824(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -29824);
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
	// std r9,-24940(r7)
	PPC_STORE_U64(ctx.r7.u32 + -24940, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6B338"))) PPC_WEAK_FUNC(sub_83C6B338);
PPC_FUNC_IMPL(__imp__sub_83C6B338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24552
	ctx.r3.s64 = ctx.r11.s64 + 24552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B344"))) PPC_WEAK_FUNC(sub_83C6B344);
PPC_FUNC_IMPL(__imp__sub_83C6B344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B348"))) PPC_WEAK_FUNC(sub_83C6B348);
PPC_FUNC_IMPL(__imp__sub_83C6B348) {
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
	// addi r3,r11,-29816
	ctx.r3.s64 = ctx.r11.s64 + -29816;
	// bl 0x8259af80
	ctx.lr = 0x83C6B360;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,24568
	ctx.r3.s64 = ctx.r10.s64 + 24568;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6B36C;
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

__attribute__((alias("__imp__sub_83C6B37C"))) PPC_WEAK_FUNC(sub_83C6B37C);
PPC_FUNC_IMPL(__imp__sub_83C6B37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B380"))) PPC_WEAK_FUNC(sub_83C6B380);
PPC_FUNC_IMPL(__imp__sub_83C6B380) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-29836
	ctx.r11.s64 = ctx.r8.s64 + -29836;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-24964(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24964);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,24560
	ctx.r3.s64 = ctx.r6.s64 + 24560;
	// stw r10,-29836(r8)
	PPC_STORE_U32(ctx.r8.u32 + -29836, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B3B0"))) PPC_WEAK_FUNC(sub_83C6B3B0);
PPC_FUNC_IMPL(__imp__sub_83C6B3B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24576
	ctx.r3.s64 = ctx.r11.s64 + 24576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B3BC"))) PPC_WEAK_FUNC(sub_83C6B3BC);
PPC_FUNC_IMPL(__imp__sub_83C6B3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B3C0"))) PPC_WEAK_FUNC(sub_83C6B3C0);
PPC_FUNC_IMPL(__imp__sub_83C6B3C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24584
	ctx.r3.s64 = ctx.r11.s64 + 24584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B3CC"))) PPC_WEAK_FUNC(sub_83C6B3CC);
PPC_FUNC_IMPL(__imp__sub_83C6B3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B3D0"))) PPC_WEAK_FUNC(sub_83C6B3D0);
PPC_FUNC_IMPL(__imp__sub_83C6B3D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24592
	ctx.r3.s64 = ctx.r11.s64 + 24592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B3DC"))) PPC_WEAK_FUNC(sub_83C6B3DC);
PPC_FUNC_IMPL(__imp__sub_83C6B3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B3E0"))) PPC_WEAK_FUNC(sub_83C6B3E0);
PPC_FUNC_IMPL(__imp__sub_83C6B3E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24600
	ctx.r3.s64 = ctx.r11.s64 + 24600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B3EC"))) PPC_WEAK_FUNC(sub_83C6B3EC);
PPC_FUNC_IMPL(__imp__sub_83C6B3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B3F0"))) PPC_WEAK_FUNC(sub_83C6B3F0);
PPC_FUNC_IMPL(__imp__sub_83C6B3F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24608
	ctx.r3.s64 = ctx.r11.s64 + 24608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B3FC"))) PPC_WEAK_FUNC(sub_83C6B3FC);
PPC_FUNC_IMPL(__imp__sub_83C6B3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B400"))) PPC_WEAK_FUNC(sub_83C6B400);
PPC_FUNC_IMPL(__imp__sub_83C6B400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24616
	ctx.r3.s64 = ctx.r11.s64 + 24616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B40C"))) PPC_WEAK_FUNC(sub_83C6B40C);
PPC_FUNC_IMPL(__imp__sub_83C6B40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B410"))) PPC_WEAK_FUNC(sub_83C6B410);
PPC_FUNC_IMPL(__imp__sub_83C6B410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24624
	ctx.r3.s64 = ctx.r11.s64 + 24624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B41C"))) PPC_WEAK_FUNC(sub_83C6B41C);
PPC_FUNC_IMPL(__imp__sub_83C6B41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B420"))) PPC_WEAK_FUNC(sub_83C6B420);
PPC_FUNC_IMPL(__imp__sub_83C6B420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24632
	ctx.r3.s64 = ctx.r11.s64 + 24632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B42C"))) PPC_WEAK_FUNC(sub_83C6B42C);
PPC_FUNC_IMPL(__imp__sub_83C6B42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B430"))) PPC_WEAK_FUNC(sub_83C6B430);
PPC_FUNC_IMPL(__imp__sub_83C6B430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24640
	ctx.r3.s64 = ctx.r11.s64 + 24640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B43C"))) PPC_WEAK_FUNC(sub_83C6B43C);
PPC_FUNC_IMPL(__imp__sub_83C6B43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B440"))) PPC_WEAK_FUNC(sub_83C6B440);
PPC_FUNC_IMPL(__imp__sub_83C6B440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24648
	ctx.r3.s64 = ctx.r11.s64 + 24648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B44C"))) PPC_WEAK_FUNC(sub_83C6B44C);
PPC_FUNC_IMPL(__imp__sub_83C6B44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B450"))) PPC_WEAK_FUNC(sub_83C6B450);
PPC_FUNC_IMPL(__imp__sub_83C6B450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24656
	ctx.r3.s64 = ctx.r11.s64 + 24656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B45C"))) PPC_WEAK_FUNC(sub_83C6B45C);
PPC_FUNC_IMPL(__imp__sub_83C6B45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B460"))) PPC_WEAK_FUNC(sub_83C6B460);
PPC_FUNC_IMPL(__imp__sub_83C6B460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24664
	ctx.r3.s64 = ctx.r11.s64 + 24664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B46C"))) PPC_WEAK_FUNC(sub_83C6B46C);
PPC_FUNC_IMPL(__imp__sub_83C6B46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B470"))) PPC_WEAK_FUNC(sub_83C6B470);
PPC_FUNC_IMPL(__imp__sub_83C6B470) {
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
	// addi r3,r11,-29472
	ctx.r3.s64 = ctx.r11.s64 + -29472;
	// bl 0x83523120
	ctx.lr = 0x83C6B488;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,24672
	ctx.r3.s64 = ctx.r10.s64 + 24672;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6B494;
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

__attribute__((alias("__imp__sub_83C6B4A4"))) PPC_WEAK_FUNC(sub_83C6B4A4);
PPC_FUNC_IMPL(__imp__sub_83C6B4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B4A8"))) PPC_WEAK_FUNC(sub_83C6B4A8);
PPC_FUNC_IMPL(__imp__sub_83C6B4A8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-29456
	ctx.r7.s64 = ctx.r8.s64 + -29456;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-29456(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -29456);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-29456(r8)
	PPC_STORE_U32(ctx.r8.u32 + -29456, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6B4D0"))) PPC_WEAK_FUNC(sub_83C6B4D0);
PPC_FUNC_IMPL(__imp__sub_83C6B4D0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-24812
	ctx.r6.s64 = ctx.r7.s64 + -24812;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-24884(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -24884);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-29456(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -29456);
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
	// std r9,-24812(r7)
	PPC_STORE_U64(ctx.r7.u32 + -24812, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6B518"))) PPC_WEAK_FUNC(sub_83C6B518);
PPC_FUNC_IMPL(__imp__sub_83C6B518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24688
	ctx.r3.s64 = ctx.r11.s64 + 24688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B524"))) PPC_WEAK_FUNC(sub_83C6B524);
PPC_FUNC_IMPL(__imp__sub_83C6B524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B528"))) PPC_WEAK_FUNC(sub_83C6B528);
PPC_FUNC_IMPL(__imp__sub_83C6B528) {
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
	// addi r3,r11,-29448
	ctx.r3.s64 = ctx.r11.s64 + -29448;
	// bl 0x8259af80
	ctx.lr = 0x83C6B540;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,24704
	ctx.r3.s64 = ctx.r10.s64 + 24704;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6B54C;
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

__attribute__((alias("__imp__sub_83C6B55C"))) PPC_WEAK_FUNC(sub_83C6B55C);
PPC_FUNC_IMPL(__imp__sub_83C6B55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B560"))) PPC_WEAK_FUNC(sub_83C6B560);
PPC_FUNC_IMPL(__imp__sub_83C6B560) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-29468
	ctx.r11.s64 = ctx.r8.s64 + -29468;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-24836(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24836);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,24696
	ctx.r3.s64 = ctx.r6.s64 + 24696;
	// stw r10,-29468(r8)
	PPC_STORE_U32(ctx.r8.u32 + -29468, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B590"))) PPC_WEAK_FUNC(sub_83C6B590);
PPC_FUNC_IMPL(__imp__sub_83C6B590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24712
	ctx.r3.s64 = ctx.r11.s64 + 24712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B59C"))) PPC_WEAK_FUNC(sub_83C6B59C);
PPC_FUNC_IMPL(__imp__sub_83C6B59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B5A0"))) PPC_WEAK_FUNC(sub_83C6B5A0);
PPC_FUNC_IMPL(__imp__sub_83C6B5A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24720
	ctx.r3.s64 = ctx.r11.s64 + 24720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B5AC"))) PPC_WEAK_FUNC(sub_83C6B5AC);
PPC_FUNC_IMPL(__imp__sub_83C6B5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B5B0"))) PPC_WEAK_FUNC(sub_83C6B5B0);
PPC_FUNC_IMPL(__imp__sub_83C6B5B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24728
	ctx.r3.s64 = ctx.r11.s64 + 24728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B5BC"))) PPC_WEAK_FUNC(sub_83C6B5BC);
PPC_FUNC_IMPL(__imp__sub_83C6B5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B5C0"))) PPC_WEAK_FUNC(sub_83C6B5C0);
PPC_FUNC_IMPL(__imp__sub_83C6B5C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24736
	ctx.r3.s64 = ctx.r11.s64 + 24736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B5CC"))) PPC_WEAK_FUNC(sub_83C6B5CC);
PPC_FUNC_IMPL(__imp__sub_83C6B5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B5D0"))) PPC_WEAK_FUNC(sub_83C6B5D0);
PPC_FUNC_IMPL(__imp__sub_83C6B5D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24744
	ctx.r3.s64 = ctx.r11.s64 + 24744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B5DC"))) PPC_WEAK_FUNC(sub_83C6B5DC);
PPC_FUNC_IMPL(__imp__sub_83C6B5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B5E0"))) PPC_WEAK_FUNC(sub_83C6B5E0);
PPC_FUNC_IMPL(__imp__sub_83C6B5E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24752
	ctx.r3.s64 = ctx.r11.s64 + 24752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B5EC"))) PPC_WEAK_FUNC(sub_83C6B5EC);
PPC_FUNC_IMPL(__imp__sub_83C6B5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B5F0"))) PPC_WEAK_FUNC(sub_83C6B5F0);
PPC_FUNC_IMPL(__imp__sub_83C6B5F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24760
	ctx.r3.s64 = ctx.r11.s64 + 24760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B5FC"))) PPC_WEAK_FUNC(sub_83C6B5FC);
PPC_FUNC_IMPL(__imp__sub_83C6B5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B600"))) PPC_WEAK_FUNC(sub_83C6B600);
PPC_FUNC_IMPL(__imp__sub_83C6B600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24768
	ctx.r3.s64 = ctx.r11.s64 + 24768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B60C"))) PPC_WEAK_FUNC(sub_83C6B60C);
PPC_FUNC_IMPL(__imp__sub_83C6B60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B610"))) PPC_WEAK_FUNC(sub_83C6B610);
PPC_FUNC_IMPL(__imp__sub_83C6B610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24776
	ctx.r3.s64 = ctx.r11.s64 + 24776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B61C"))) PPC_WEAK_FUNC(sub_83C6B61C);
PPC_FUNC_IMPL(__imp__sub_83C6B61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B620"))) PPC_WEAK_FUNC(sub_83C6B620);
PPC_FUNC_IMPL(__imp__sub_83C6B620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24784
	ctx.r3.s64 = ctx.r11.s64 + 24784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B62C"))) PPC_WEAK_FUNC(sub_83C6B62C);
PPC_FUNC_IMPL(__imp__sub_83C6B62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B630"))) PPC_WEAK_FUNC(sub_83C6B630);
PPC_FUNC_IMPL(__imp__sub_83C6B630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24792
	ctx.r3.s64 = ctx.r11.s64 + 24792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B63C"))) PPC_WEAK_FUNC(sub_83C6B63C);
PPC_FUNC_IMPL(__imp__sub_83C6B63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B640"))) PPC_WEAK_FUNC(sub_83C6B640);
PPC_FUNC_IMPL(__imp__sub_83C6B640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24800
	ctx.r3.s64 = ctx.r11.s64 + 24800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B64C"))) PPC_WEAK_FUNC(sub_83C6B64C);
PPC_FUNC_IMPL(__imp__sub_83C6B64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B650"))) PPC_WEAK_FUNC(sub_83C6B650);
PPC_FUNC_IMPL(__imp__sub_83C6B650) {
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
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
	// bl 0x83523120
	ctx.lr = 0x83C6B668;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,24808
	ctx.r3.s64 = ctx.r10.s64 + 24808;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6B674;
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

__attribute__((alias("__imp__sub_83C6B684"))) PPC_WEAK_FUNC(sub_83C6B684);
PPC_FUNC_IMPL(__imp__sub_83C6B684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B688"))) PPC_WEAK_FUNC(sub_83C6B688);
PPC_FUNC_IMPL(__imp__sub_83C6B688) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-29088
	ctx.r7.s64 = ctx.r8.s64 + -29088;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-29088(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -29088);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-29088(r8)
	PPC_STORE_U32(ctx.r8.u32 + -29088, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6B6B0"))) PPC_WEAK_FUNC(sub_83C6B6B0);
PPC_FUNC_IMPL(__imp__sub_83C6B6B0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-24684
	ctx.r6.s64 = ctx.r7.s64 + -24684;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-24756(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -24756);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-29088(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -29088);
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
	// std r9,-24684(r7)
	PPC_STORE_U64(ctx.r7.u32 + -24684, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6B6F8"))) PPC_WEAK_FUNC(sub_83C6B6F8);
PPC_FUNC_IMPL(__imp__sub_83C6B6F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24824
	ctx.r3.s64 = ctx.r11.s64 + 24824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B704"))) PPC_WEAK_FUNC(sub_83C6B704);
PPC_FUNC_IMPL(__imp__sub_83C6B704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B708"))) PPC_WEAK_FUNC(sub_83C6B708);
PPC_FUNC_IMPL(__imp__sub_83C6B708) {
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
	// addi r3,r11,-29080
	ctx.r3.s64 = ctx.r11.s64 + -29080;
	// bl 0x8259af80
	ctx.lr = 0x83C6B720;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,24840
	ctx.r3.s64 = ctx.r10.s64 + 24840;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6B72C;
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

__attribute__((alias("__imp__sub_83C6B73C"))) PPC_WEAK_FUNC(sub_83C6B73C);
PPC_FUNC_IMPL(__imp__sub_83C6B73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B740"))) PPC_WEAK_FUNC(sub_83C6B740);
PPC_FUNC_IMPL(__imp__sub_83C6B740) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-29100
	ctx.r11.s64 = ctx.r8.s64 + -29100;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-24708(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24708);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,24832
	ctx.r3.s64 = ctx.r6.s64 + 24832;
	// stw r10,-29100(r8)
	PPC_STORE_U32(ctx.r8.u32 + -29100, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B770"))) PPC_WEAK_FUNC(sub_83C6B770);
PPC_FUNC_IMPL(__imp__sub_83C6B770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24848
	ctx.r3.s64 = ctx.r11.s64 + 24848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B77C"))) PPC_WEAK_FUNC(sub_83C6B77C);
PPC_FUNC_IMPL(__imp__sub_83C6B77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B780"))) PPC_WEAK_FUNC(sub_83C6B780);
PPC_FUNC_IMPL(__imp__sub_83C6B780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24856
	ctx.r3.s64 = ctx.r11.s64 + 24856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B78C"))) PPC_WEAK_FUNC(sub_83C6B78C);
PPC_FUNC_IMPL(__imp__sub_83C6B78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B790"))) PPC_WEAK_FUNC(sub_83C6B790);
PPC_FUNC_IMPL(__imp__sub_83C6B790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24864
	ctx.r3.s64 = ctx.r11.s64 + 24864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B79C"))) PPC_WEAK_FUNC(sub_83C6B79C);
PPC_FUNC_IMPL(__imp__sub_83C6B79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B7A0"))) PPC_WEAK_FUNC(sub_83C6B7A0);
PPC_FUNC_IMPL(__imp__sub_83C6B7A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24872
	ctx.r3.s64 = ctx.r11.s64 + 24872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B7AC"))) PPC_WEAK_FUNC(sub_83C6B7AC);
PPC_FUNC_IMPL(__imp__sub_83C6B7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B7B0"))) PPC_WEAK_FUNC(sub_83C6B7B0);
PPC_FUNC_IMPL(__imp__sub_83C6B7B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24880
	ctx.r3.s64 = ctx.r11.s64 + 24880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B7BC"))) PPC_WEAK_FUNC(sub_83C6B7BC);
PPC_FUNC_IMPL(__imp__sub_83C6B7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B7C0"))) PPC_WEAK_FUNC(sub_83C6B7C0);
PPC_FUNC_IMPL(__imp__sub_83C6B7C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24888
	ctx.r3.s64 = ctx.r11.s64 + 24888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B7CC"))) PPC_WEAK_FUNC(sub_83C6B7CC);
PPC_FUNC_IMPL(__imp__sub_83C6B7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B7D0"))) PPC_WEAK_FUNC(sub_83C6B7D0);
PPC_FUNC_IMPL(__imp__sub_83C6B7D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24896
	ctx.r3.s64 = ctx.r11.s64 + 24896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B7DC"))) PPC_WEAK_FUNC(sub_83C6B7DC);
PPC_FUNC_IMPL(__imp__sub_83C6B7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B7E0"))) PPC_WEAK_FUNC(sub_83C6B7E0);
PPC_FUNC_IMPL(__imp__sub_83C6B7E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24904
	ctx.r3.s64 = ctx.r11.s64 + 24904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B7EC"))) PPC_WEAK_FUNC(sub_83C6B7EC);
PPC_FUNC_IMPL(__imp__sub_83C6B7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B7F0"))) PPC_WEAK_FUNC(sub_83C6B7F0);
PPC_FUNC_IMPL(__imp__sub_83C6B7F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24912
	ctx.r3.s64 = ctx.r11.s64 + 24912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B7FC"))) PPC_WEAK_FUNC(sub_83C6B7FC);
PPC_FUNC_IMPL(__imp__sub_83C6B7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B800"))) PPC_WEAK_FUNC(sub_83C6B800);
PPC_FUNC_IMPL(__imp__sub_83C6B800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24920
	ctx.r3.s64 = ctx.r11.s64 + 24920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B80C"))) PPC_WEAK_FUNC(sub_83C6B80C);
PPC_FUNC_IMPL(__imp__sub_83C6B80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B810"))) PPC_WEAK_FUNC(sub_83C6B810);
PPC_FUNC_IMPL(__imp__sub_83C6B810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24928
	ctx.r3.s64 = ctx.r11.s64 + 24928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B81C"))) PPC_WEAK_FUNC(sub_83C6B81C);
PPC_FUNC_IMPL(__imp__sub_83C6B81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B820"))) PPC_WEAK_FUNC(sub_83C6B820);
PPC_FUNC_IMPL(__imp__sub_83C6B820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24936
	ctx.r3.s64 = ctx.r11.s64 + 24936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B82C"))) PPC_WEAK_FUNC(sub_83C6B82C);
PPC_FUNC_IMPL(__imp__sub_83C6B82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B830"))) PPC_WEAK_FUNC(sub_83C6B830);
PPC_FUNC_IMPL(__imp__sub_83C6B830) {
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
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
	// bl 0x83523120
	ctx.lr = 0x83C6B848;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,24944
	ctx.r3.s64 = ctx.r10.s64 + 24944;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6B854;
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

__attribute__((alias("__imp__sub_83C6B864"))) PPC_WEAK_FUNC(sub_83C6B864);
PPC_FUNC_IMPL(__imp__sub_83C6B864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B868"))) PPC_WEAK_FUNC(sub_83C6B868);
PPC_FUNC_IMPL(__imp__sub_83C6B868) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-28720
	ctx.r7.s64 = ctx.r8.s64 + -28720;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-28720(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -28720);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-28720(r8)
	PPC_STORE_U32(ctx.r8.u32 + -28720, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6B890"))) PPC_WEAK_FUNC(sub_83C6B890);
PPC_FUNC_IMPL(__imp__sub_83C6B890) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-24556
	ctx.r6.s64 = ctx.r7.s64 + -24556;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-24628(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -24628);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-28720(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28720);
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
	// std r9,-24556(r7)
	PPC_STORE_U64(ctx.r7.u32 + -24556, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6B8D8"))) PPC_WEAK_FUNC(sub_83C6B8D8);
PPC_FUNC_IMPL(__imp__sub_83C6B8D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24960
	ctx.r3.s64 = ctx.r11.s64 + 24960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B8E4"))) PPC_WEAK_FUNC(sub_83C6B8E4);
PPC_FUNC_IMPL(__imp__sub_83C6B8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B8E8"))) PPC_WEAK_FUNC(sub_83C6B8E8);
PPC_FUNC_IMPL(__imp__sub_83C6B8E8) {
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
	// addi r3,r11,-28712
	ctx.r3.s64 = ctx.r11.s64 + -28712;
	// bl 0x8259af80
	ctx.lr = 0x83C6B900;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,24976
	ctx.r3.s64 = ctx.r10.s64 + 24976;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6B90C;
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

__attribute__((alias("__imp__sub_83C6B91C"))) PPC_WEAK_FUNC(sub_83C6B91C);
PPC_FUNC_IMPL(__imp__sub_83C6B91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B920"))) PPC_WEAK_FUNC(sub_83C6B920);
PPC_FUNC_IMPL(__imp__sub_83C6B920) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-28732
	ctx.r11.s64 = ctx.r8.s64 + -28732;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-24580(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24580);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,24968
	ctx.r3.s64 = ctx.r6.s64 + 24968;
	// stw r10,-28732(r8)
	PPC_STORE_U32(ctx.r8.u32 + -28732, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B950"))) PPC_WEAK_FUNC(sub_83C6B950);
PPC_FUNC_IMPL(__imp__sub_83C6B950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24984
	ctx.r3.s64 = ctx.r11.s64 + 24984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B95C"))) PPC_WEAK_FUNC(sub_83C6B95C);
PPC_FUNC_IMPL(__imp__sub_83C6B95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B960"))) PPC_WEAK_FUNC(sub_83C6B960);
PPC_FUNC_IMPL(__imp__sub_83C6B960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24992
	ctx.r3.s64 = ctx.r11.s64 + 24992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B96C"))) PPC_WEAK_FUNC(sub_83C6B96C);
PPC_FUNC_IMPL(__imp__sub_83C6B96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B970"))) PPC_WEAK_FUNC(sub_83C6B970);
PPC_FUNC_IMPL(__imp__sub_83C6B970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,25000
	ctx.r3.s64 = ctx.r11.s64 + 25000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B97C"))) PPC_WEAK_FUNC(sub_83C6B97C);
PPC_FUNC_IMPL(__imp__sub_83C6B97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B980"))) PPC_WEAK_FUNC(sub_83C6B980);
PPC_FUNC_IMPL(__imp__sub_83C6B980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,25008
	ctx.r3.s64 = ctx.r11.s64 + 25008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B98C"))) PPC_WEAK_FUNC(sub_83C6B98C);
PPC_FUNC_IMPL(__imp__sub_83C6B98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B990"))) PPC_WEAK_FUNC(sub_83C6B990);
PPC_FUNC_IMPL(__imp__sub_83C6B990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,25016
	ctx.r3.s64 = ctx.r11.s64 + 25016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B99C"))) PPC_WEAK_FUNC(sub_83C6B99C);
PPC_FUNC_IMPL(__imp__sub_83C6B99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B9A0"))) PPC_WEAK_FUNC(sub_83C6B9A0);
PPC_FUNC_IMPL(__imp__sub_83C6B9A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,25024
	ctx.r3.s64 = ctx.r11.s64 + 25024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B9AC"))) PPC_WEAK_FUNC(sub_83C6B9AC);
PPC_FUNC_IMPL(__imp__sub_83C6B9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B9B0"))) PPC_WEAK_FUNC(sub_83C6B9B0);
PPC_FUNC_IMPL(__imp__sub_83C6B9B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,25032
	ctx.r3.s64 = ctx.r11.s64 + 25032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B9BC"))) PPC_WEAK_FUNC(sub_83C6B9BC);
PPC_FUNC_IMPL(__imp__sub_83C6B9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B9C0"))) PPC_WEAK_FUNC(sub_83C6B9C0);
PPC_FUNC_IMPL(__imp__sub_83C6B9C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,25040
	ctx.r3.s64 = ctx.r11.s64 + 25040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B9CC"))) PPC_WEAK_FUNC(sub_83C6B9CC);
PPC_FUNC_IMPL(__imp__sub_83C6B9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B9D0"))) PPC_WEAK_FUNC(sub_83C6B9D0);
PPC_FUNC_IMPL(__imp__sub_83C6B9D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,25048
	ctx.r3.s64 = ctx.r11.s64 + 25048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B9DC"))) PPC_WEAK_FUNC(sub_83C6B9DC);
PPC_FUNC_IMPL(__imp__sub_83C6B9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B9E0"))) PPC_WEAK_FUNC(sub_83C6B9E0);
PPC_FUNC_IMPL(__imp__sub_83C6B9E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,25056
	ctx.r3.s64 = ctx.r11.s64 + 25056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B9EC"))) PPC_WEAK_FUNC(sub_83C6B9EC);
PPC_FUNC_IMPL(__imp__sub_83C6B9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B9F0"))) PPC_WEAK_FUNC(sub_83C6B9F0);
PPC_FUNC_IMPL(__imp__sub_83C6B9F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,25064
	ctx.r3.s64 = ctx.r11.s64 + 25064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B9FC"))) PPC_WEAK_FUNC(sub_83C6B9FC);
PPC_FUNC_IMPL(__imp__sub_83C6B9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6BA00"))) PPC_WEAK_FUNC(sub_83C6BA00);
PPC_FUNC_IMPL(__imp__sub_83C6BA00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,25072
	ctx.r3.s64 = ctx.r11.s64 + 25072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6BA0C"))) PPC_WEAK_FUNC(sub_83C6BA0C);
PPC_FUNC_IMPL(__imp__sub_83C6BA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6BA10"))) PPC_WEAK_FUNC(sub_83C6BA10);
PPC_FUNC_IMPL(__imp__sub_83C6BA10) {
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
	// addi r3,r11,-28368
	ctx.r3.s64 = ctx.r11.s64 + -28368;
	// bl 0x83523120
	ctx.lr = 0x83C6BA28;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,25080
	ctx.r3.s64 = ctx.r10.s64 + 25080;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6BA34;
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

__attribute__((alias("__imp__sub_83C6BA44"))) PPC_WEAK_FUNC(sub_83C6BA44);
PPC_FUNC_IMPL(__imp__sub_83C6BA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6BA48"))) PPC_WEAK_FUNC(sub_83C6BA48);
PPC_FUNC_IMPL(__imp__sub_83C6BA48) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-28352
	ctx.r7.s64 = ctx.r8.s64 + -28352;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-28352(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -28352);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-28352(r8)
	PPC_STORE_U32(ctx.r8.u32 + -28352, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6BA70"))) PPC_WEAK_FUNC(sub_83C6BA70);
PPC_FUNC_IMPL(__imp__sub_83C6BA70) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-24428
	ctx.r6.s64 = ctx.r7.s64 + -24428;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-24500(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -24500);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-28352(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28352);
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
	// std r9,-24428(r7)
	PPC_STORE_U64(ctx.r7.u32 + -24428, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6BAB8"))) PPC_WEAK_FUNC(sub_83C6BAB8);
PPC_FUNC_IMPL(__imp__sub_83C6BAB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,25096
	ctx.r3.s64 = ctx.r11.s64 + 25096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6BAC4"))) PPC_WEAK_FUNC(sub_83C6BAC4);
PPC_FUNC_IMPL(__imp__sub_83C6BAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6BAC8"))) PPC_WEAK_FUNC(sub_83C6BAC8);
PPC_FUNC_IMPL(__imp__sub_83C6BAC8) {
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
	// addi r3,r11,-28344
	ctx.r3.s64 = ctx.r11.s64 + -28344;
	// bl 0x8259af80
	ctx.lr = 0x83C6BAE0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,25112
	ctx.r3.s64 = ctx.r10.s64 + 25112;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6BAEC;
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

__attribute__((alias("__imp__sub_83C6BAFC"))) PPC_WEAK_FUNC(sub_83C6BAFC);
PPC_FUNC_IMPL(__imp__sub_83C6BAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6BB00"))) PPC_WEAK_FUNC(sub_83C6BB00);
PPC_FUNC_IMPL(__imp__sub_83C6BB00) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-28364
	ctx.r11.s64 = ctx.r8.s64 + -28364;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-24452(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24452);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,25104
	ctx.r3.s64 = ctx.r6.s64 + 25104;
	// stw r10,-28364(r8)
	PPC_STORE_U32(ctx.r8.u32 + -28364, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6BB30"))) PPC_WEAK_FUNC(sub_83C6BB30);
PPC_FUNC_IMPL(__imp__sub_83C6BB30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,25120
	ctx.r3.s64 = ctx.r11.s64 + 25120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6BB3C"))) PPC_WEAK_FUNC(sub_83C6BB3C);
PPC_FUNC_IMPL(__imp__sub_83C6BB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6BB40"))) PPC_WEAK_FUNC(sub_83C6BB40);
PPC_FUNC_IMPL(__imp__sub_83C6BB40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,25128
	ctx.r3.s64 = ctx.r11.s64 + 25128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6BB4C"))) PPC_WEAK_FUNC(sub_83C6BB4C);
PPC_FUNC_IMPL(__imp__sub_83C6BB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6BB50"))) PPC_WEAK_FUNC(sub_83C6BB50);
PPC_FUNC_IMPL(__imp__sub_83C6BB50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,25136
	ctx.r3.s64 = ctx.r11.s64 + 25136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6BB5C"))) PPC_WEAK_FUNC(sub_83C6BB5C);
PPC_FUNC_IMPL(__imp__sub_83C6BB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6BB60"))) PPC_WEAK_FUNC(sub_83C6BB60);
PPC_FUNC_IMPL(__imp__sub_83C6BB60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,25144
	ctx.r3.s64 = ctx.r11.s64 + 25144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6BB6C"))) PPC_WEAK_FUNC(sub_83C6BB6C);
PPC_FUNC_IMPL(__imp__sub_83C6BB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6BB70"))) PPC_WEAK_FUNC(sub_83C6BB70);
PPC_FUNC_IMPL(__imp__sub_83C6BB70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,25152
	ctx.r3.s64 = ctx.r11.s64 + 25152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6BB7C"))) PPC_WEAK_FUNC(sub_83C6BB7C);
PPC_FUNC_IMPL(__imp__sub_83C6BB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6BB80"))) PPC_WEAK_FUNC(sub_83C6BB80);
PPC_FUNC_IMPL(__imp__sub_83C6BB80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,25160
	ctx.r3.s64 = ctx.r11.s64 + 25160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6BB8C"))) PPC_WEAK_FUNC(sub_83C6BB8C);
PPC_FUNC_IMPL(__imp__sub_83C6BB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6BB90"))) PPC_WEAK_FUNC(sub_83C6BB90);
PPC_FUNC_IMPL(__imp__sub_83C6BB90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,25168
	ctx.r3.s64 = ctx.r11.s64 + 25168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6BB9C"))) PPC_WEAK_FUNC(sub_83C6BB9C);
PPC_FUNC_IMPL(__imp__sub_83C6BB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6BBA0"))) PPC_WEAK_FUNC(sub_83C6BBA0);
PPC_FUNC_IMPL(__imp__sub_83C6BBA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,25176
	ctx.r3.s64 = ctx.r11.s64 + 25176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6BBAC"))) PPC_WEAK_FUNC(sub_83C6BBAC);
PPC_FUNC_IMPL(__imp__sub_83C6BBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6BBB0"))) PPC_WEAK_FUNC(sub_83C6BBB0);
PPC_FUNC_IMPL(__imp__sub_83C6BBB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,25184
	ctx.r3.s64 = ctx.r11.s64 + 25184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6BBBC"))) PPC_WEAK_FUNC(sub_83C6BBBC);
PPC_FUNC_IMPL(__imp__sub_83C6BBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6BBC0"))) PPC_WEAK_FUNC(sub_83C6BBC0);
PPC_FUNC_IMPL(__imp__sub_83C6BBC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,25192
	ctx.r3.s64 = ctx.r11.s64 + 25192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6BBCC"))) PPC_WEAK_FUNC(sub_83C6BBCC);
PPC_FUNC_IMPL(__imp__sub_83C6BBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6BBD0"))) PPC_WEAK_FUNC(sub_83C6BBD0);
PPC_FUNC_IMPL(__imp__sub_83C6BBD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,25200
	ctx.r3.s64 = ctx.r11.s64 + 25200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6BBDC"))) PPC_WEAK_FUNC(sub_83C6BBDC);
PPC_FUNC_IMPL(__imp__sub_83C6BBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6BBE0"))) PPC_WEAK_FUNC(sub_83C6BBE0);
PPC_FUNC_IMPL(__imp__sub_83C6BBE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,25208
	ctx.r3.s64 = ctx.r11.s64 + 25208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6BBEC"))) PPC_WEAK_FUNC(sub_83C6BBEC);
PPC_FUNC_IMPL(__imp__sub_83C6BBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6BBF0"))) PPC_WEAK_FUNC(sub_83C6BBF0);
PPC_FUNC_IMPL(__imp__sub_83C6BBF0) {
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
	// addi r3,r11,-28000
	ctx.r3.s64 = ctx.r11.s64 + -28000;
	// bl 0x83523120
	ctx.lr = 0x83C6BC08;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,25216
	ctx.r3.s64 = ctx.r10.s64 + 25216;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6BC14;
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

__attribute__((alias("__imp__sub_83C6BC24"))) PPC_WEAK_FUNC(sub_83C6BC24);
PPC_FUNC_IMPL(__imp__sub_83C6BC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6BC28"))) PPC_WEAK_FUNC(sub_83C6BC28);
PPC_FUNC_IMPL(__imp__sub_83C6BC28) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-27984
	ctx.r7.s64 = ctx.r8.s64 + -27984;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-27984(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -27984);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-27984(r8)
	PPC_STORE_U32(ctx.r8.u32 + -27984, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6BC50"))) PPC_WEAK_FUNC(sub_83C6BC50);
PPC_FUNC_IMPL(__imp__sub_83C6BC50) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-24300
	ctx.r6.s64 = ctx.r7.s64 + -24300;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-24372(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -24372);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-27984(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -27984);
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
	// std r9,-24300(r7)
	PPC_STORE_U64(ctx.r7.u32 + -24300, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6BC98"))) PPC_WEAK_FUNC(sub_83C6BC98);
PPC_FUNC_IMPL(__imp__sub_83C6BC98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,25232
	ctx.r3.s64 = ctx.r11.s64 + 25232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6BCA4"))) PPC_WEAK_FUNC(sub_83C6BCA4);
PPC_FUNC_IMPL(__imp__sub_83C6BCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6BCA8"))) PPC_WEAK_FUNC(sub_83C6BCA8);
PPC_FUNC_IMPL(__imp__sub_83C6BCA8) {
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
	// addi r3,r11,-27976
	ctx.r3.s64 = ctx.r11.s64 + -27976;
	// bl 0x8259af80
	ctx.lr = 0x83C6BCC0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,25248
	ctx.r3.s64 = ctx.r10.s64 + 25248;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6BCCC;
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

__attribute__((alias("__imp__sub_83C6BCDC"))) PPC_WEAK_FUNC(sub_83C6BCDC);
PPC_FUNC_IMPL(__imp__sub_83C6BCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6BCE0"))) PPC_WEAK_FUNC(sub_83C6BCE0);
PPC_FUNC_IMPL(__imp__sub_83C6BCE0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-27996
	ctx.r11.s64 = ctx.r8.s64 + -27996;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-24324(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24324);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,25240
	ctx.r3.s64 = ctx.r6.s64 + 25240;
	// stw r10,-27996(r8)
	PPC_STORE_U32(ctx.r8.u32 + -27996, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6BD10"))) PPC_WEAK_FUNC(sub_83C6BD10);
PPC_FUNC_IMPL(__imp__sub_83C6BD10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,25256
	ctx.r3.s64 = ctx.r11.s64 + 25256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6BD1C"))) PPC_WEAK_FUNC(sub_83C6BD1C);
PPC_FUNC_IMPL(__imp__sub_83C6BD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6BD20"))) PPC_WEAK_FUNC(sub_83C6BD20);
PPC_FUNC_IMPL(__imp__sub_83C6BD20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,25264
	ctx.r3.s64 = ctx.r11.s64 + 25264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6BD2C"))) PPC_WEAK_FUNC(sub_83C6BD2C);
PPC_FUNC_IMPL(__imp__sub_83C6BD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6BD30"))) PPC_WEAK_FUNC(sub_83C6BD30);
PPC_FUNC_IMPL(__imp__sub_83C6BD30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,25272
	ctx.r3.s64 = ctx.r11.s64 + 25272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6BD3C"))) PPC_WEAK_FUNC(sub_83C6BD3C);
PPC_FUNC_IMPL(__imp__sub_83C6BD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6BD40"))) PPC_WEAK_FUNC(sub_83C6BD40);
PPC_FUNC_IMPL(__imp__sub_83C6BD40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,25280
	ctx.r3.s64 = ctx.r11.s64 + 25280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6BD4C"))) PPC_WEAK_FUNC(sub_83C6BD4C);
PPC_FUNC_IMPL(__imp__sub_83C6BD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6BD50"))) PPC_WEAK_FUNC(sub_83C6BD50);
PPC_FUNC_IMPL(__imp__sub_83C6BD50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,25288
	ctx.r3.s64 = ctx.r11.s64 + 25288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6BD5C"))) PPC_WEAK_FUNC(sub_83C6BD5C);
PPC_FUNC_IMPL(__imp__sub_83C6BD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6BD60"))) PPC_WEAK_FUNC(sub_83C6BD60);
PPC_FUNC_IMPL(__imp__sub_83C6BD60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,25296
	ctx.r3.s64 = ctx.r11.s64 + 25296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6BD6C"))) PPC_WEAK_FUNC(sub_83C6BD6C);
PPC_FUNC_IMPL(__imp__sub_83C6BD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6BD70"))) PPC_WEAK_FUNC(sub_83C6BD70);
PPC_FUNC_IMPL(__imp__sub_83C6BD70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,25304
	ctx.r3.s64 = ctx.r11.s64 + 25304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6BD7C"))) PPC_WEAK_FUNC(sub_83C6BD7C);
PPC_FUNC_IMPL(__imp__sub_83C6BD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6BD80"))) PPC_WEAK_FUNC(sub_83C6BD80);
PPC_FUNC_IMPL(__imp__sub_83C6BD80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,25312
	ctx.r3.s64 = ctx.r11.s64 + 25312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6BD8C"))) PPC_WEAK_FUNC(sub_83C6BD8C);
PPC_FUNC_IMPL(__imp__sub_83C6BD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6BD90"))) PPC_WEAK_FUNC(sub_83C6BD90);
PPC_FUNC_IMPL(__imp__sub_83C6BD90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,25320
	ctx.r3.s64 = ctx.r11.s64 + 25320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6BD9C"))) PPC_WEAK_FUNC(sub_83C6BD9C);
PPC_FUNC_IMPL(__imp__sub_83C6BD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6BDA0"))) PPC_WEAK_FUNC(sub_83C6BDA0);
PPC_FUNC_IMPL(__imp__sub_83C6BDA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,25328
	ctx.r3.s64 = ctx.r11.s64 + 25328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6BDAC"))) PPC_WEAK_FUNC(sub_83C6BDAC);
PPC_FUNC_IMPL(__imp__sub_83C6BDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6BDB0"))) PPC_WEAK_FUNC(sub_83C6BDB0);
PPC_FUNC_IMPL(__imp__sub_83C6BDB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,25336
	ctx.r3.s64 = ctx.r11.s64 + 25336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6BDBC"))) PPC_WEAK_FUNC(sub_83C6BDBC);
PPC_FUNC_IMPL(__imp__sub_83C6BDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6BDC0"))) PPC_WEAK_FUNC(sub_83C6BDC0);
PPC_FUNC_IMPL(__imp__sub_83C6BDC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,25344
	ctx.r3.s64 = ctx.r11.s64 + 25344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6BDCC"))) PPC_WEAK_FUNC(sub_83C6BDCC);
PPC_FUNC_IMPL(__imp__sub_83C6BDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6BDD0"))) PPC_WEAK_FUNC(sub_83C6BDD0);
PPC_FUNC_IMPL(__imp__sub_83C6BDD0) {
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
	// addi r3,r11,-27632
	ctx.r3.s64 = ctx.r11.s64 + -27632;
	// bl 0x83523120
	ctx.lr = 0x83C6BDE8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,25352
	ctx.r3.s64 = ctx.r10.s64 + 25352;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6BDF4;
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

__attribute__((alias("__imp__sub_83C6BE04"))) PPC_WEAK_FUNC(sub_83C6BE04);
PPC_FUNC_IMPL(__imp__sub_83C6BE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6BE08"))) PPC_WEAK_FUNC(sub_83C6BE08);
PPC_FUNC_IMPL(__imp__sub_83C6BE08) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-27616
	ctx.r7.s64 = ctx.r8.s64 + -27616;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-27616(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -27616);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-27616(r8)
	PPC_STORE_U32(ctx.r8.u32 + -27616, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6BE30"))) PPC_WEAK_FUNC(sub_83C6BE30);
PPC_FUNC_IMPL(__imp__sub_83C6BE30) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-24172
	ctx.r6.s64 = ctx.r7.s64 + -24172;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-24244(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -24244);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-27616(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -27616);
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
	// std r9,-24172(r7)
	PPC_STORE_U64(ctx.r7.u32 + -24172, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6BE78"))) PPC_WEAK_FUNC(sub_83C6BE78);
PPC_FUNC_IMPL(__imp__sub_83C6BE78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,25368
	ctx.r3.s64 = ctx.r11.s64 + 25368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6BE84"))) PPC_WEAK_FUNC(sub_83C6BE84);
PPC_FUNC_IMPL(__imp__sub_83C6BE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6BE88"))) PPC_WEAK_FUNC(sub_83C6BE88);
PPC_FUNC_IMPL(__imp__sub_83C6BE88) {
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
	// addi r3,r11,-27608
	ctx.r3.s64 = ctx.r11.s64 + -27608;
	// bl 0x8259af80
	ctx.lr = 0x83C6BEA0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,25384
	ctx.r3.s64 = ctx.r10.s64 + 25384;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6BEAC;
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

__attribute__((alias("__imp__sub_83C6BEBC"))) PPC_WEAK_FUNC(sub_83C6BEBC);
PPC_FUNC_IMPL(__imp__sub_83C6BEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6BEC0"))) PPC_WEAK_FUNC(sub_83C6BEC0);
PPC_FUNC_IMPL(__imp__sub_83C6BEC0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-27628
	ctx.r11.s64 = ctx.r8.s64 + -27628;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-24196(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24196);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,25376
	ctx.r3.s64 = ctx.r6.s64 + 25376;
	// stw r10,-27628(r8)
	PPC_STORE_U32(ctx.r8.u32 + -27628, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6BEF0"))) PPC_WEAK_FUNC(sub_83C6BEF0);
PPC_FUNC_IMPL(__imp__sub_83C6BEF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,25392
	ctx.r3.s64 = ctx.r11.s64 + 25392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6BEFC"))) PPC_WEAK_FUNC(sub_83C6BEFC);
PPC_FUNC_IMPL(__imp__sub_83C6BEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

