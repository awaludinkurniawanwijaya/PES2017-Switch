#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C5B130"))) PPC_WEAK_FUNC(sub_83C5B130);
PPC_FUNC_IMPL(__imp__sub_83C5B130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5272
	ctx.r3.s64 = ctx.r11.s64 + 5272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B13C"))) PPC_WEAK_FUNC(sub_83C5B13C);
PPC_FUNC_IMPL(__imp__sub_83C5B13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B140"))) PPC_WEAK_FUNC(sub_83C5B140);
PPC_FUNC_IMPL(__imp__sub_83C5B140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5280
	ctx.r3.s64 = ctx.r11.s64 + 5280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B14C"))) PPC_WEAK_FUNC(sub_83C5B14C);
PPC_FUNC_IMPL(__imp__sub_83C5B14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B150"))) PPC_WEAK_FUNC(sub_83C5B150);
PPC_FUNC_IMPL(__imp__sub_83C5B150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5288
	ctx.r3.s64 = ctx.r11.s64 + 5288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B15C"))) PPC_WEAK_FUNC(sub_83C5B15C);
PPC_FUNC_IMPL(__imp__sub_83C5B15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B160"))) PPC_WEAK_FUNC(sub_83C5B160);
PPC_FUNC_IMPL(__imp__sub_83C5B160) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-12968
	ctx.r3.s64 = ctx.r11.s64 + -12968;
	// bl 0x83523120
	ctx.lr = 0x83C5B178;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,5296
	ctx.r3.s64 = ctx.r10.s64 + 5296;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5B184;
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

__attribute__((alias("__imp__sub_83C5B194"))) PPC_WEAK_FUNC(sub_83C5B194);
PPC_FUNC_IMPL(__imp__sub_83C5B194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B198"))) PPC_WEAK_FUNC(sub_83C5B198);
PPC_FUNC_IMPL(__imp__sub_83C5B198) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-12952
	ctx.r7.s64 = ctx.r8.s64 + -12952;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-12952(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12952);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-12952(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12952, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5B1C0"))) PPC_WEAK_FUNC(sub_83C5B1C0);
PPC_FUNC_IMPL(__imp__sub_83C5B1C0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,21736
	ctx.r6.s64 = ctx.r7.s64 + 21736;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,21664(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 21664);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-12952(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12952);
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
	// std r9,21736(r7)
	PPC_STORE_U64(ctx.r7.u32 + 21736, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5B208"))) PPC_WEAK_FUNC(sub_83C5B208);
PPC_FUNC_IMPL(__imp__sub_83C5B208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5312
	ctx.r3.s64 = ctx.r11.s64 + 5312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B214"))) PPC_WEAK_FUNC(sub_83C5B214);
PPC_FUNC_IMPL(__imp__sub_83C5B214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B218"))) PPC_WEAK_FUNC(sub_83C5B218);
PPC_FUNC_IMPL(__imp__sub_83C5B218) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-12944
	ctx.r3.s64 = ctx.r11.s64 + -12944;
	// bl 0x8259af80
	ctx.lr = 0x83C5B230;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,5328
	ctx.r3.s64 = ctx.r10.s64 + 5328;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5B23C;
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

__attribute__((alias("__imp__sub_83C5B24C"))) PPC_WEAK_FUNC(sub_83C5B24C);
PPC_FUNC_IMPL(__imp__sub_83C5B24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B250"))) PPC_WEAK_FUNC(sub_83C5B250);
PPC_FUNC_IMPL(__imp__sub_83C5B250) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-12964
	ctx.r11.s64 = ctx.r8.s64 + -12964;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,21712(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21712);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,5320
	ctx.r3.s64 = ctx.r6.s64 + 5320;
	// stw r10,-12964(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12964, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B280"))) PPC_WEAK_FUNC(sub_83C5B280);
PPC_FUNC_IMPL(__imp__sub_83C5B280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5336
	ctx.r3.s64 = ctx.r11.s64 + 5336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B28C"))) PPC_WEAK_FUNC(sub_83C5B28C);
PPC_FUNC_IMPL(__imp__sub_83C5B28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B290"))) PPC_WEAK_FUNC(sub_83C5B290);
PPC_FUNC_IMPL(__imp__sub_83C5B290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5344
	ctx.r3.s64 = ctx.r11.s64 + 5344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B29C"))) PPC_WEAK_FUNC(sub_83C5B29C);
PPC_FUNC_IMPL(__imp__sub_83C5B29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B2A0"))) PPC_WEAK_FUNC(sub_83C5B2A0);
PPC_FUNC_IMPL(__imp__sub_83C5B2A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5352
	ctx.r3.s64 = ctx.r11.s64 + 5352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B2AC"))) PPC_WEAK_FUNC(sub_83C5B2AC);
PPC_FUNC_IMPL(__imp__sub_83C5B2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B2B0"))) PPC_WEAK_FUNC(sub_83C5B2B0);
PPC_FUNC_IMPL(__imp__sub_83C5B2B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5360
	ctx.r3.s64 = ctx.r11.s64 + 5360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B2BC"))) PPC_WEAK_FUNC(sub_83C5B2BC);
PPC_FUNC_IMPL(__imp__sub_83C5B2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B2C0"))) PPC_WEAK_FUNC(sub_83C5B2C0);
PPC_FUNC_IMPL(__imp__sub_83C5B2C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5368
	ctx.r3.s64 = ctx.r11.s64 + 5368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B2CC"))) PPC_WEAK_FUNC(sub_83C5B2CC);
PPC_FUNC_IMPL(__imp__sub_83C5B2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B2D0"))) PPC_WEAK_FUNC(sub_83C5B2D0);
PPC_FUNC_IMPL(__imp__sub_83C5B2D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5376
	ctx.r3.s64 = ctx.r11.s64 + 5376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B2DC"))) PPC_WEAK_FUNC(sub_83C5B2DC);
PPC_FUNC_IMPL(__imp__sub_83C5B2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B2E0"))) PPC_WEAK_FUNC(sub_83C5B2E0);
PPC_FUNC_IMPL(__imp__sub_83C5B2E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5384
	ctx.r3.s64 = ctx.r11.s64 + 5384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B2EC"))) PPC_WEAK_FUNC(sub_83C5B2EC);
PPC_FUNC_IMPL(__imp__sub_83C5B2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B2F0"))) PPC_WEAK_FUNC(sub_83C5B2F0);
PPC_FUNC_IMPL(__imp__sub_83C5B2F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5392
	ctx.r3.s64 = ctx.r11.s64 + 5392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B2FC"))) PPC_WEAK_FUNC(sub_83C5B2FC);
PPC_FUNC_IMPL(__imp__sub_83C5B2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B300"))) PPC_WEAK_FUNC(sub_83C5B300);
PPC_FUNC_IMPL(__imp__sub_83C5B300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5400
	ctx.r3.s64 = ctx.r11.s64 + 5400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B30C"))) PPC_WEAK_FUNC(sub_83C5B30C);
PPC_FUNC_IMPL(__imp__sub_83C5B30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B310"))) PPC_WEAK_FUNC(sub_83C5B310);
PPC_FUNC_IMPL(__imp__sub_83C5B310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5408
	ctx.r3.s64 = ctx.r11.s64 + 5408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B31C"))) PPC_WEAK_FUNC(sub_83C5B31C);
PPC_FUNC_IMPL(__imp__sub_83C5B31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B320"))) PPC_WEAK_FUNC(sub_83C5B320);
PPC_FUNC_IMPL(__imp__sub_83C5B320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5416
	ctx.r3.s64 = ctx.r11.s64 + 5416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B32C"))) PPC_WEAK_FUNC(sub_83C5B32C);
PPC_FUNC_IMPL(__imp__sub_83C5B32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B330"))) PPC_WEAK_FUNC(sub_83C5B330);
PPC_FUNC_IMPL(__imp__sub_83C5B330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5424
	ctx.r3.s64 = ctx.r11.s64 + 5424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B33C"))) PPC_WEAK_FUNC(sub_83C5B33C);
PPC_FUNC_IMPL(__imp__sub_83C5B33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B340"))) PPC_WEAK_FUNC(sub_83C5B340);
PPC_FUNC_IMPL(__imp__sub_83C5B340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5432
	ctx.r3.s64 = ctx.r11.s64 + 5432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B34C"))) PPC_WEAK_FUNC(sub_83C5B34C);
PPC_FUNC_IMPL(__imp__sub_83C5B34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B350"))) PPC_WEAK_FUNC(sub_83C5B350);
PPC_FUNC_IMPL(__imp__sub_83C5B350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5440
	ctx.r3.s64 = ctx.r11.s64 + 5440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B35C"))) PPC_WEAK_FUNC(sub_83C5B35C);
PPC_FUNC_IMPL(__imp__sub_83C5B35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B360"))) PPC_WEAK_FUNC(sub_83C5B360);
PPC_FUNC_IMPL(__imp__sub_83C5B360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5448
	ctx.r3.s64 = ctx.r11.s64 + 5448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B36C"))) PPC_WEAK_FUNC(sub_83C5B36C);
PPC_FUNC_IMPL(__imp__sub_83C5B36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B370"))) PPC_WEAK_FUNC(sub_83C5B370);
PPC_FUNC_IMPL(__imp__sub_83C5B370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5456
	ctx.r3.s64 = ctx.r11.s64 + 5456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B37C"))) PPC_WEAK_FUNC(sub_83C5B37C);
PPC_FUNC_IMPL(__imp__sub_83C5B37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B380"))) PPC_WEAK_FUNC(sub_83C5B380);
PPC_FUNC_IMPL(__imp__sub_83C5B380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5464
	ctx.r3.s64 = ctx.r11.s64 + 5464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B38C"))) PPC_WEAK_FUNC(sub_83C5B38C);
PPC_FUNC_IMPL(__imp__sub_83C5B38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B390"))) PPC_WEAK_FUNC(sub_83C5B390);
PPC_FUNC_IMPL(__imp__sub_83C5B390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5472
	ctx.r3.s64 = ctx.r11.s64 + 5472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B39C"))) PPC_WEAK_FUNC(sub_83C5B39C);
PPC_FUNC_IMPL(__imp__sub_83C5B39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B3A0"))) PPC_WEAK_FUNC(sub_83C5B3A0);
PPC_FUNC_IMPL(__imp__sub_83C5B3A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5480
	ctx.r3.s64 = ctx.r11.s64 + 5480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B3AC"))) PPC_WEAK_FUNC(sub_83C5B3AC);
PPC_FUNC_IMPL(__imp__sub_83C5B3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B3B0"))) PPC_WEAK_FUNC(sub_83C5B3B0);
PPC_FUNC_IMPL(__imp__sub_83C5B3B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5488
	ctx.r3.s64 = ctx.r11.s64 + 5488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B3BC"))) PPC_WEAK_FUNC(sub_83C5B3BC);
PPC_FUNC_IMPL(__imp__sub_83C5B3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B3C0"))) PPC_WEAK_FUNC(sub_83C5B3C0);
PPC_FUNC_IMPL(__imp__sub_83C5B3C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5496
	ctx.r3.s64 = ctx.r11.s64 + 5496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B3CC"))) PPC_WEAK_FUNC(sub_83C5B3CC);
PPC_FUNC_IMPL(__imp__sub_83C5B3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B3D0"))) PPC_WEAK_FUNC(sub_83C5B3D0);
PPC_FUNC_IMPL(__imp__sub_83C5B3D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5504
	ctx.r3.s64 = ctx.r11.s64 + 5504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B3DC"))) PPC_WEAK_FUNC(sub_83C5B3DC);
PPC_FUNC_IMPL(__imp__sub_83C5B3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B3E0"))) PPC_WEAK_FUNC(sub_83C5B3E0);
PPC_FUNC_IMPL(__imp__sub_83C5B3E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5512
	ctx.r3.s64 = ctx.r11.s64 + 5512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B3EC"))) PPC_WEAK_FUNC(sub_83C5B3EC);
PPC_FUNC_IMPL(__imp__sub_83C5B3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B3F0"))) PPC_WEAK_FUNC(sub_83C5B3F0);
PPC_FUNC_IMPL(__imp__sub_83C5B3F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5520
	ctx.r3.s64 = ctx.r11.s64 + 5520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B3FC"))) PPC_WEAK_FUNC(sub_83C5B3FC);
PPC_FUNC_IMPL(__imp__sub_83C5B3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B400"))) PPC_WEAK_FUNC(sub_83C5B400);
PPC_FUNC_IMPL(__imp__sub_83C5B400) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-12592
	ctx.r3.s64 = ctx.r11.s64 + -12592;
	// bl 0x83523120
	ctx.lr = 0x83C5B418;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,5528
	ctx.r3.s64 = ctx.r10.s64 + 5528;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5B424;
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

__attribute__((alias("__imp__sub_83C5B434"))) PPC_WEAK_FUNC(sub_83C5B434);
PPC_FUNC_IMPL(__imp__sub_83C5B434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B438"))) PPC_WEAK_FUNC(sub_83C5B438);
PPC_FUNC_IMPL(__imp__sub_83C5B438) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-12576
	ctx.r7.s64 = ctx.r8.s64 + -12576;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-12576(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12576);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-12576(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12576, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5B460"))) PPC_WEAK_FUNC(sub_83C5B460);
PPC_FUNC_IMPL(__imp__sub_83C5B460) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,21984
	ctx.r6.s64 = ctx.r7.s64 + 21984;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,21904(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 21904);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-12576(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12576);
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
	// std r9,21984(r7)
	PPC_STORE_U64(ctx.r7.u32 + 21984, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5B4A8"))) PPC_WEAK_FUNC(sub_83C5B4A8);
PPC_FUNC_IMPL(__imp__sub_83C5B4A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5544
	ctx.r3.s64 = ctx.r11.s64 + 5544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B4B4"))) PPC_WEAK_FUNC(sub_83C5B4B4);
PPC_FUNC_IMPL(__imp__sub_83C5B4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B4B8"))) PPC_WEAK_FUNC(sub_83C5B4B8);
PPC_FUNC_IMPL(__imp__sub_83C5B4B8) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-12568
	ctx.r3.s64 = ctx.r11.s64 + -12568;
	// bl 0x8259af80
	ctx.lr = 0x83C5B4D0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,5560
	ctx.r3.s64 = ctx.r10.s64 + 5560;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5B4DC;
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

__attribute__((alias("__imp__sub_83C5B4EC"))) PPC_WEAK_FUNC(sub_83C5B4EC);
PPC_FUNC_IMPL(__imp__sub_83C5B4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B4F0"))) PPC_WEAK_FUNC(sub_83C5B4F0);
PPC_FUNC_IMPL(__imp__sub_83C5B4F0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-12588
	ctx.r11.s64 = ctx.r8.s64 + -12588;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,21952(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21952);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,5552
	ctx.r3.s64 = ctx.r6.s64 + 5552;
	// stw r10,-12588(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12588, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B520"))) PPC_WEAK_FUNC(sub_83C5B520);
PPC_FUNC_IMPL(__imp__sub_83C5B520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5568
	ctx.r3.s64 = ctx.r11.s64 + 5568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B52C"))) PPC_WEAK_FUNC(sub_83C5B52C);
PPC_FUNC_IMPL(__imp__sub_83C5B52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B530"))) PPC_WEAK_FUNC(sub_83C5B530);
PPC_FUNC_IMPL(__imp__sub_83C5B530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5576
	ctx.r3.s64 = ctx.r11.s64 + 5576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B53C"))) PPC_WEAK_FUNC(sub_83C5B53C);
PPC_FUNC_IMPL(__imp__sub_83C5B53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B540"))) PPC_WEAK_FUNC(sub_83C5B540);
PPC_FUNC_IMPL(__imp__sub_83C5B540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5584
	ctx.r3.s64 = ctx.r11.s64 + 5584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B54C"))) PPC_WEAK_FUNC(sub_83C5B54C);
PPC_FUNC_IMPL(__imp__sub_83C5B54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B550"))) PPC_WEAK_FUNC(sub_83C5B550);
PPC_FUNC_IMPL(__imp__sub_83C5B550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5592
	ctx.r3.s64 = ctx.r11.s64 + 5592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B55C"))) PPC_WEAK_FUNC(sub_83C5B55C);
PPC_FUNC_IMPL(__imp__sub_83C5B55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B560"))) PPC_WEAK_FUNC(sub_83C5B560);
PPC_FUNC_IMPL(__imp__sub_83C5B560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5600
	ctx.r3.s64 = ctx.r11.s64 + 5600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B56C"))) PPC_WEAK_FUNC(sub_83C5B56C);
PPC_FUNC_IMPL(__imp__sub_83C5B56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B570"))) PPC_WEAK_FUNC(sub_83C5B570);
PPC_FUNC_IMPL(__imp__sub_83C5B570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5608
	ctx.r3.s64 = ctx.r11.s64 + 5608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B57C"))) PPC_WEAK_FUNC(sub_83C5B57C);
PPC_FUNC_IMPL(__imp__sub_83C5B57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B580"))) PPC_WEAK_FUNC(sub_83C5B580);
PPC_FUNC_IMPL(__imp__sub_83C5B580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5616
	ctx.r3.s64 = ctx.r11.s64 + 5616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B58C"))) PPC_WEAK_FUNC(sub_83C5B58C);
PPC_FUNC_IMPL(__imp__sub_83C5B58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B590"))) PPC_WEAK_FUNC(sub_83C5B590);
PPC_FUNC_IMPL(__imp__sub_83C5B590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5624
	ctx.r3.s64 = ctx.r11.s64 + 5624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B59C"))) PPC_WEAK_FUNC(sub_83C5B59C);
PPC_FUNC_IMPL(__imp__sub_83C5B59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B5A0"))) PPC_WEAK_FUNC(sub_83C5B5A0);
PPC_FUNC_IMPL(__imp__sub_83C5B5A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5632
	ctx.r3.s64 = ctx.r11.s64 + 5632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B5AC"))) PPC_WEAK_FUNC(sub_83C5B5AC);
PPC_FUNC_IMPL(__imp__sub_83C5B5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B5B0"))) PPC_WEAK_FUNC(sub_83C5B5B0);
PPC_FUNC_IMPL(__imp__sub_83C5B5B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5640
	ctx.r3.s64 = ctx.r11.s64 + 5640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B5BC"))) PPC_WEAK_FUNC(sub_83C5B5BC);
PPC_FUNC_IMPL(__imp__sub_83C5B5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B5C0"))) PPC_WEAK_FUNC(sub_83C5B5C0);
PPC_FUNC_IMPL(__imp__sub_83C5B5C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5648
	ctx.r3.s64 = ctx.r11.s64 + 5648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B5CC"))) PPC_WEAK_FUNC(sub_83C5B5CC);
PPC_FUNC_IMPL(__imp__sub_83C5B5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B5D0"))) PPC_WEAK_FUNC(sub_83C5B5D0);
PPC_FUNC_IMPL(__imp__sub_83C5B5D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5656
	ctx.r3.s64 = ctx.r11.s64 + 5656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B5DC"))) PPC_WEAK_FUNC(sub_83C5B5DC);
PPC_FUNC_IMPL(__imp__sub_83C5B5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B5E0"))) PPC_WEAK_FUNC(sub_83C5B5E0);
PPC_FUNC_IMPL(__imp__sub_83C5B5E0) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-12224
	ctx.r3.s64 = ctx.r11.s64 + -12224;
	// bl 0x83523120
	ctx.lr = 0x83C5B5F8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,5664
	ctx.r3.s64 = ctx.r10.s64 + 5664;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5B604;
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

__attribute__((alias("__imp__sub_83C5B614"))) PPC_WEAK_FUNC(sub_83C5B614);
PPC_FUNC_IMPL(__imp__sub_83C5B614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B618"))) PPC_WEAK_FUNC(sub_83C5B618);
PPC_FUNC_IMPL(__imp__sub_83C5B618) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-12208
	ctx.r7.s64 = ctx.r8.s64 + -12208;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-12208(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12208);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-12208(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12208, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5B640"))) PPC_WEAK_FUNC(sub_83C5B640);
PPC_FUNC_IMPL(__imp__sub_83C5B640) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,22136
	ctx.r6.s64 = ctx.r7.s64 + 22136;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,22056(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 22056);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-12208(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12208);
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
	// std r9,22136(r7)
	PPC_STORE_U64(ctx.r7.u32 + 22136, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5B688"))) PPC_WEAK_FUNC(sub_83C5B688);
PPC_FUNC_IMPL(__imp__sub_83C5B688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5680
	ctx.r3.s64 = ctx.r11.s64 + 5680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B694"))) PPC_WEAK_FUNC(sub_83C5B694);
PPC_FUNC_IMPL(__imp__sub_83C5B694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B698"))) PPC_WEAK_FUNC(sub_83C5B698);
PPC_FUNC_IMPL(__imp__sub_83C5B698) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-12200
	ctx.r3.s64 = ctx.r11.s64 + -12200;
	// bl 0x8259af80
	ctx.lr = 0x83C5B6B0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,5696
	ctx.r3.s64 = ctx.r10.s64 + 5696;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5B6BC;
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

__attribute__((alias("__imp__sub_83C5B6CC"))) PPC_WEAK_FUNC(sub_83C5B6CC);
PPC_FUNC_IMPL(__imp__sub_83C5B6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B6D0"))) PPC_WEAK_FUNC(sub_83C5B6D0);
PPC_FUNC_IMPL(__imp__sub_83C5B6D0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-12220
	ctx.r11.s64 = ctx.r8.s64 + -12220;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,22104(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22104);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,5688
	ctx.r3.s64 = ctx.r6.s64 + 5688;
	// stw r10,-12220(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12220, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B700"))) PPC_WEAK_FUNC(sub_83C5B700);
PPC_FUNC_IMPL(__imp__sub_83C5B700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5704
	ctx.r3.s64 = ctx.r11.s64 + 5704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B70C"))) PPC_WEAK_FUNC(sub_83C5B70C);
PPC_FUNC_IMPL(__imp__sub_83C5B70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B710"))) PPC_WEAK_FUNC(sub_83C5B710);
PPC_FUNC_IMPL(__imp__sub_83C5B710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5712
	ctx.r3.s64 = ctx.r11.s64 + 5712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B71C"))) PPC_WEAK_FUNC(sub_83C5B71C);
PPC_FUNC_IMPL(__imp__sub_83C5B71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B720"))) PPC_WEAK_FUNC(sub_83C5B720);
PPC_FUNC_IMPL(__imp__sub_83C5B720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5720
	ctx.r3.s64 = ctx.r11.s64 + 5720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B72C"))) PPC_WEAK_FUNC(sub_83C5B72C);
PPC_FUNC_IMPL(__imp__sub_83C5B72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B730"))) PPC_WEAK_FUNC(sub_83C5B730);
PPC_FUNC_IMPL(__imp__sub_83C5B730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5728
	ctx.r3.s64 = ctx.r11.s64 + 5728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B73C"))) PPC_WEAK_FUNC(sub_83C5B73C);
PPC_FUNC_IMPL(__imp__sub_83C5B73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B740"))) PPC_WEAK_FUNC(sub_83C5B740);
PPC_FUNC_IMPL(__imp__sub_83C5B740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5736
	ctx.r3.s64 = ctx.r11.s64 + 5736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B74C"))) PPC_WEAK_FUNC(sub_83C5B74C);
PPC_FUNC_IMPL(__imp__sub_83C5B74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B750"))) PPC_WEAK_FUNC(sub_83C5B750);
PPC_FUNC_IMPL(__imp__sub_83C5B750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5744
	ctx.r3.s64 = ctx.r11.s64 + 5744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B75C"))) PPC_WEAK_FUNC(sub_83C5B75C);
PPC_FUNC_IMPL(__imp__sub_83C5B75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B760"))) PPC_WEAK_FUNC(sub_83C5B760);
PPC_FUNC_IMPL(__imp__sub_83C5B760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5752
	ctx.r3.s64 = ctx.r11.s64 + 5752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B76C"))) PPC_WEAK_FUNC(sub_83C5B76C);
PPC_FUNC_IMPL(__imp__sub_83C5B76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B770"))) PPC_WEAK_FUNC(sub_83C5B770);
PPC_FUNC_IMPL(__imp__sub_83C5B770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5760
	ctx.r3.s64 = ctx.r11.s64 + 5760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B77C"))) PPC_WEAK_FUNC(sub_83C5B77C);
PPC_FUNC_IMPL(__imp__sub_83C5B77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B780"))) PPC_WEAK_FUNC(sub_83C5B780);
PPC_FUNC_IMPL(__imp__sub_83C5B780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5768
	ctx.r3.s64 = ctx.r11.s64 + 5768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B78C"))) PPC_WEAK_FUNC(sub_83C5B78C);
PPC_FUNC_IMPL(__imp__sub_83C5B78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B790"))) PPC_WEAK_FUNC(sub_83C5B790);
PPC_FUNC_IMPL(__imp__sub_83C5B790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5776
	ctx.r3.s64 = ctx.r11.s64 + 5776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B79C"))) PPC_WEAK_FUNC(sub_83C5B79C);
PPC_FUNC_IMPL(__imp__sub_83C5B79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B7A0"))) PPC_WEAK_FUNC(sub_83C5B7A0);
PPC_FUNC_IMPL(__imp__sub_83C5B7A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5784
	ctx.r3.s64 = ctx.r11.s64 + 5784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B7AC"))) PPC_WEAK_FUNC(sub_83C5B7AC);
PPC_FUNC_IMPL(__imp__sub_83C5B7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B7B0"))) PPC_WEAK_FUNC(sub_83C5B7B0);
PPC_FUNC_IMPL(__imp__sub_83C5B7B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5792
	ctx.r3.s64 = ctx.r11.s64 + 5792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B7BC"))) PPC_WEAK_FUNC(sub_83C5B7BC);
PPC_FUNC_IMPL(__imp__sub_83C5B7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B7C0"))) PPC_WEAK_FUNC(sub_83C5B7C0);
PPC_FUNC_IMPL(__imp__sub_83C5B7C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5800
	ctx.r3.s64 = ctx.r11.s64 + 5800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B7CC"))) PPC_WEAK_FUNC(sub_83C5B7CC);
PPC_FUNC_IMPL(__imp__sub_83C5B7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B7D0"))) PPC_WEAK_FUNC(sub_83C5B7D0);
PPC_FUNC_IMPL(__imp__sub_83C5B7D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5808
	ctx.r3.s64 = ctx.r11.s64 + 5808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B7DC"))) PPC_WEAK_FUNC(sub_83C5B7DC);
PPC_FUNC_IMPL(__imp__sub_83C5B7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B7E0"))) PPC_WEAK_FUNC(sub_83C5B7E0);
PPC_FUNC_IMPL(__imp__sub_83C5B7E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5816
	ctx.r3.s64 = ctx.r11.s64 + 5816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B7EC"))) PPC_WEAK_FUNC(sub_83C5B7EC);
PPC_FUNC_IMPL(__imp__sub_83C5B7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B7F0"))) PPC_WEAK_FUNC(sub_83C5B7F0);
PPC_FUNC_IMPL(__imp__sub_83C5B7F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5824
	ctx.r3.s64 = ctx.r11.s64 + 5824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B7FC"))) PPC_WEAK_FUNC(sub_83C5B7FC);
PPC_FUNC_IMPL(__imp__sub_83C5B7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B800"))) PPC_WEAK_FUNC(sub_83C5B800);
PPC_FUNC_IMPL(__imp__sub_83C5B800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5832
	ctx.r3.s64 = ctx.r11.s64 + 5832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B80C"))) PPC_WEAK_FUNC(sub_83C5B80C);
PPC_FUNC_IMPL(__imp__sub_83C5B80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B810"))) PPC_WEAK_FUNC(sub_83C5B810);
PPC_FUNC_IMPL(__imp__sub_83C5B810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5840
	ctx.r3.s64 = ctx.r11.s64 + 5840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B81C"))) PPC_WEAK_FUNC(sub_83C5B81C);
PPC_FUNC_IMPL(__imp__sub_83C5B81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B820"))) PPC_WEAK_FUNC(sub_83C5B820);
PPC_FUNC_IMPL(__imp__sub_83C5B820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5848
	ctx.r3.s64 = ctx.r11.s64 + 5848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B82C"))) PPC_WEAK_FUNC(sub_83C5B82C);
PPC_FUNC_IMPL(__imp__sub_83C5B82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B830"))) PPC_WEAK_FUNC(sub_83C5B830);
PPC_FUNC_IMPL(__imp__sub_83C5B830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5856
	ctx.r3.s64 = ctx.r11.s64 + 5856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B83C"))) PPC_WEAK_FUNC(sub_83C5B83C);
PPC_FUNC_IMPL(__imp__sub_83C5B83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B840"))) PPC_WEAK_FUNC(sub_83C5B840);
PPC_FUNC_IMPL(__imp__sub_83C5B840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5864
	ctx.r3.s64 = ctx.r11.s64 + 5864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B84C"))) PPC_WEAK_FUNC(sub_83C5B84C);
PPC_FUNC_IMPL(__imp__sub_83C5B84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B850"))) PPC_WEAK_FUNC(sub_83C5B850);
PPC_FUNC_IMPL(__imp__sub_83C5B850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5872
	ctx.r3.s64 = ctx.r11.s64 + 5872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B85C"))) PPC_WEAK_FUNC(sub_83C5B85C);
PPC_FUNC_IMPL(__imp__sub_83C5B85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B860"))) PPC_WEAK_FUNC(sub_83C5B860);
PPC_FUNC_IMPL(__imp__sub_83C5B860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5880
	ctx.r3.s64 = ctx.r11.s64 + 5880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B86C"))) PPC_WEAK_FUNC(sub_83C5B86C);
PPC_FUNC_IMPL(__imp__sub_83C5B86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B870"))) PPC_WEAK_FUNC(sub_83C5B870);
PPC_FUNC_IMPL(__imp__sub_83C5B870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5888
	ctx.r3.s64 = ctx.r11.s64 + 5888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B87C"))) PPC_WEAK_FUNC(sub_83C5B87C);
PPC_FUNC_IMPL(__imp__sub_83C5B87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B880"))) PPC_WEAK_FUNC(sub_83C5B880);
PPC_FUNC_IMPL(__imp__sub_83C5B880) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-11844
	ctx.r3.s64 = ctx.r11.s64 + -11844;
	// bl 0x83523120
	ctx.lr = 0x83C5B898;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,5896
	ctx.r3.s64 = ctx.r10.s64 + 5896;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5B8A4;
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

__attribute__((alias("__imp__sub_83C5B8B4"))) PPC_WEAK_FUNC(sub_83C5B8B4);
PPC_FUNC_IMPL(__imp__sub_83C5B8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B8B8"))) PPC_WEAK_FUNC(sub_83C5B8B8);
PPC_FUNC_IMPL(__imp__sub_83C5B8B8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-11828
	ctx.r7.s64 = ctx.r8.s64 + -11828;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-11828(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11828);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-11828(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11828, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5B8E0"))) PPC_WEAK_FUNC(sub_83C5B8E0);
PPC_FUNC_IMPL(__imp__sub_83C5B8E0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,22384
	ctx.r6.s64 = ctx.r7.s64 + 22384;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,22312(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 22312);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-11828(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11828);
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
	// std r9,22384(r7)
	PPC_STORE_U64(ctx.r7.u32 + 22384, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5B928"))) PPC_WEAK_FUNC(sub_83C5B928);
PPC_FUNC_IMPL(__imp__sub_83C5B928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5912
	ctx.r3.s64 = ctx.r11.s64 + 5912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B934"))) PPC_WEAK_FUNC(sub_83C5B934);
PPC_FUNC_IMPL(__imp__sub_83C5B934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B938"))) PPC_WEAK_FUNC(sub_83C5B938);
PPC_FUNC_IMPL(__imp__sub_83C5B938) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-11816
	ctx.r3.s64 = ctx.r11.s64 + -11816;
	// bl 0x8259af80
	ctx.lr = 0x83C5B950;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,5928
	ctx.r3.s64 = ctx.r10.s64 + 5928;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5B95C;
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

__attribute__((alias("__imp__sub_83C5B96C"))) PPC_WEAK_FUNC(sub_83C5B96C);
PPC_FUNC_IMPL(__imp__sub_83C5B96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B970"))) PPC_WEAK_FUNC(sub_83C5B970);
PPC_FUNC_IMPL(__imp__sub_83C5B970) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-11840
	ctx.r11.s64 = ctx.r8.s64 + -11840;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,22360(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22360);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,5920
	ctx.r3.s64 = ctx.r6.s64 + 5920;
	// stw r10,-11840(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11840, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B9A0"))) PPC_WEAK_FUNC(sub_83C5B9A0);
PPC_FUNC_IMPL(__imp__sub_83C5B9A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5936
	ctx.r3.s64 = ctx.r11.s64 + 5936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B9AC"))) PPC_WEAK_FUNC(sub_83C5B9AC);
PPC_FUNC_IMPL(__imp__sub_83C5B9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B9B0"))) PPC_WEAK_FUNC(sub_83C5B9B0);
PPC_FUNC_IMPL(__imp__sub_83C5B9B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5944
	ctx.r3.s64 = ctx.r11.s64 + 5944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B9BC"))) PPC_WEAK_FUNC(sub_83C5B9BC);
PPC_FUNC_IMPL(__imp__sub_83C5B9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B9C0"))) PPC_WEAK_FUNC(sub_83C5B9C0);
PPC_FUNC_IMPL(__imp__sub_83C5B9C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5952
	ctx.r3.s64 = ctx.r11.s64 + 5952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B9CC"))) PPC_WEAK_FUNC(sub_83C5B9CC);
PPC_FUNC_IMPL(__imp__sub_83C5B9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B9D0"))) PPC_WEAK_FUNC(sub_83C5B9D0);
PPC_FUNC_IMPL(__imp__sub_83C5B9D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5960
	ctx.r3.s64 = ctx.r11.s64 + 5960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B9DC"))) PPC_WEAK_FUNC(sub_83C5B9DC);
PPC_FUNC_IMPL(__imp__sub_83C5B9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B9E0"))) PPC_WEAK_FUNC(sub_83C5B9E0);
PPC_FUNC_IMPL(__imp__sub_83C5B9E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5968
	ctx.r3.s64 = ctx.r11.s64 + 5968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B9EC"))) PPC_WEAK_FUNC(sub_83C5B9EC);
PPC_FUNC_IMPL(__imp__sub_83C5B9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B9F0"))) PPC_WEAK_FUNC(sub_83C5B9F0);
PPC_FUNC_IMPL(__imp__sub_83C5B9F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5976
	ctx.r3.s64 = ctx.r11.s64 + 5976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B9FC"))) PPC_WEAK_FUNC(sub_83C5B9FC);
PPC_FUNC_IMPL(__imp__sub_83C5B9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5BA00"))) PPC_WEAK_FUNC(sub_83C5BA00);
PPC_FUNC_IMPL(__imp__sub_83C5BA00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5984
	ctx.r3.s64 = ctx.r11.s64 + 5984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5BA0C"))) PPC_WEAK_FUNC(sub_83C5BA0C);
PPC_FUNC_IMPL(__imp__sub_83C5BA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5BA10"))) PPC_WEAK_FUNC(sub_83C5BA10);
PPC_FUNC_IMPL(__imp__sub_83C5BA10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5992
	ctx.r3.s64 = ctx.r11.s64 + 5992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5BA1C"))) PPC_WEAK_FUNC(sub_83C5BA1C);
PPC_FUNC_IMPL(__imp__sub_83C5BA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5BA20"))) PPC_WEAK_FUNC(sub_83C5BA20);
PPC_FUNC_IMPL(__imp__sub_83C5BA20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6000
	ctx.r3.s64 = ctx.r11.s64 + 6000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5BA2C"))) PPC_WEAK_FUNC(sub_83C5BA2C);
PPC_FUNC_IMPL(__imp__sub_83C5BA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5BA30"))) PPC_WEAK_FUNC(sub_83C5BA30);
PPC_FUNC_IMPL(__imp__sub_83C5BA30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6008
	ctx.r3.s64 = ctx.r11.s64 + 6008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5BA3C"))) PPC_WEAK_FUNC(sub_83C5BA3C);
PPC_FUNC_IMPL(__imp__sub_83C5BA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5BA40"))) PPC_WEAK_FUNC(sub_83C5BA40);
PPC_FUNC_IMPL(__imp__sub_83C5BA40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6016
	ctx.r3.s64 = ctx.r11.s64 + 6016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5BA4C"))) PPC_WEAK_FUNC(sub_83C5BA4C);
PPC_FUNC_IMPL(__imp__sub_83C5BA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5BA50"))) PPC_WEAK_FUNC(sub_83C5BA50);
PPC_FUNC_IMPL(__imp__sub_83C5BA50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6024
	ctx.r3.s64 = ctx.r11.s64 + 6024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5BA5C"))) PPC_WEAK_FUNC(sub_83C5BA5C);
PPC_FUNC_IMPL(__imp__sub_83C5BA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5BA60"))) PPC_WEAK_FUNC(sub_83C5BA60);
PPC_FUNC_IMPL(__imp__sub_83C5BA60) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-11472
	ctx.r3.s64 = ctx.r11.s64 + -11472;
	// bl 0x83523120
	ctx.lr = 0x83C5BA78;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,6032
	ctx.r3.s64 = ctx.r10.s64 + 6032;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5BA84;
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

__attribute__((alias("__imp__sub_83C5BA94"))) PPC_WEAK_FUNC(sub_83C5BA94);
PPC_FUNC_IMPL(__imp__sub_83C5BA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5BA98"))) PPC_WEAK_FUNC(sub_83C5BA98);
PPC_FUNC_IMPL(__imp__sub_83C5BA98) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-11456
	ctx.r7.s64 = ctx.r8.s64 + -11456;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-11456(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11456);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-11456(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11456, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5BAC0"))) PPC_WEAK_FUNC(sub_83C5BAC0);
PPC_FUNC_IMPL(__imp__sub_83C5BAC0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,22536
	ctx.r6.s64 = ctx.r7.s64 + 22536;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,22456(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 22456);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-11456(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11456);
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
	// std r9,22536(r7)
	PPC_STORE_U64(ctx.r7.u32 + 22536, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5BB08"))) PPC_WEAK_FUNC(sub_83C5BB08);
PPC_FUNC_IMPL(__imp__sub_83C5BB08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6048
	ctx.r3.s64 = ctx.r11.s64 + 6048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5BB14"))) PPC_WEAK_FUNC(sub_83C5BB14);
PPC_FUNC_IMPL(__imp__sub_83C5BB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5BB18"))) PPC_WEAK_FUNC(sub_83C5BB18);
PPC_FUNC_IMPL(__imp__sub_83C5BB18) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-11448
	ctx.r3.s64 = ctx.r11.s64 + -11448;
	// bl 0x8259af80
	ctx.lr = 0x83C5BB30;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,6064
	ctx.r3.s64 = ctx.r10.s64 + 6064;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5BB3C;
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

__attribute__((alias("__imp__sub_83C5BB4C"))) PPC_WEAK_FUNC(sub_83C5BB4C);
PPC_FUNC_IMPL(__imp__sub_83C5BB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5BB50"))) PPC_WEAK_FUNC(sub_83C5BB50);
PPC_FUNC_IMPL(__imp__sub_83C5BB50) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-11468
	ctx.r11.s64 = ctx.r8.s64 + -11468;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,22504(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22504);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,6056
	ctx.r3.s64 = ctx.r6.s64 + 6056;
	// stw r10,-11468(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11468, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5BB80"))) PPC_WEAK_FUNC(sub_83C5BB80);
PPC_FUNC_IMPL(__imp__sub_83C5BB80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6072
	ctx.r3.s64 = ctx.r11.s64 + 6072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5BB8C"))) PPC_WEAK_FUNC(sub_83C5BB8C);
PPC_FUNC_IMPL(__imp__sub_83C5BB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5BB90"))) PPC_WEAK_FUNC(sub_83C5BB90);
PPC_FUNC_IMPL(__imp__sub_83C5BB90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6080
	ctx.r3.s64 = ctx.r11.s64 + 6080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5BB9C"))) PPC_WEAK_FUNC(sub_83C5BB9C);
PPC_FUNC_IMPL(__imp__sub_83C5BB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5BBA0"))) PPC_WEAK_FUNC(sub_83C5BBA0);
PPC_FUNC_IMPL(__imp__sub_83C5BBA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6088
	ctx.r3.s64 = ctx.r11.s64 + 6088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5BBAC"))) PPC_WEAK_FUNC(sub_83C5BBAC);
PPC_FUNC_IMPL(__imp__sub_83C5BBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5BBB0"))) PPC_WEAK_FUNC(sub_83C5BBB0);
PPC_FUNC_IMPL(__imp__sub_83C5BBB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6096
	ctx.r3.s64 = ctx.r11.s64 + 6096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5BBBC"))) PPC_WEAK_FUNC(sub_83C5BBBC);
PPC_FUNC_IMPL(__imp__sub_83C5BBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5BBC0"))) PPC_WEAK_FUNC(sub_83C5BBC0);
PPC_FUNC_IMPL(__imp__sub_83C5BBC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6104
	ctx.r3.s64 = ctx.r11.s64 + 6104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5BBCC"))) PPC_WEAK_FUNC(sub_83C5BBCC);
PPC_FUNC_IMPL(__imp__sub_83C5BBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5BBD0"))) PPC_WEAK_FUNC(sub_83C5BBD0);
PPC_FUNC_IMPL(__imp__sub_83C5BBD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6112
	ctx.r3.s64 = ctx.r11.s64 + 6112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5BBDC"))) PPC_WEAK_FUNC(sub_83C5BBDC);
PPC_FUNC_IMPL(__imp__sub_83C5BBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5BBE0"))) PPC_WEAK_FUNC(sub_83C5BBE0);
PPC_FUNC_IMPL(__imp__sub_83C5BBE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6120
	ctx.r3.s64 = ctx.r11.s64 + 6120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5BBEC"))) PPC_WEAK_FUNC(sub_83C5BBEC);
PPC_FUNC_IMPL(__imp__sub_83C5BBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5BBF0"))) PPC_WEAK_FUNC(sub_83C5BBF0);
PPC_FUNC_IMPL(__imp__sub_83C5BBF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6128
	ctx.r3.s64 = ctx.r11.s64 + 6128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5BBFC"))) PPC_WEAK_FUNC(sub_83C5BBFC);
PPC_FUNC_IMPL(__imp__sub_83C5BBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5BC00"))) PPC_WEAK_FUNC(sub_83C5BC00);
PPC_FUNC_IMPL(__imp__sub_83C5BC00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6136
	ctx.r3.s64 = ctx.r11.s64 + 6136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5BC0C"))) PPC_WEAK_FUNC(sub_83C5BC0C);
PPC_FUNC_IMPL(__imp__sub_83C5BC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5BC10"))) PPC_WEAK_FUNC(sub_83C5BC10);
PPC_FUNC_IMPL(__imp__sub_83C5BC10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6144
	ctx.r3.s64 = ctx.r11.s64 + 6144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5BC1C"))) PPC_WEAK_FUNC(sub_83C5BC1C);
PPC_FUNC_IMPL(__imp__sub_83C5BC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5BC20"))) PPC_WEAK_FUNC(sub_83C5BC20);
PPC_FUNC_IMPL(__imp__sub_83C5BC20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6152
	ctx.r3.s64 = ctx.r11.s64 + 6152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5BC2C"))) PPC_WEAK_FUNC(sub_83C5BC2C);
PPC_FUNC_IMPL(__imp__sub_83C5BC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5BC30"))) PPC_WEAK_FUNC(sub_83C5BC30);
PPC_FUNC_IMPL(__imp__sub_83C5BC30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6160
	ctx.r3.s64 = ctx.r11.s64 + 6160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5BC3C"))) PPC_WEAK_FUNC(sub_83C5BC3C);
PPC_FUNC_IMPL(__imp__sub_83C5BC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5BC40"))) PPC_WEAK_FUNC(sub_83C5BC40);
PPC_FUNC_IMPL(__imp__sub_83C5BC40) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-11104
	ctx.r3.s64 = ctx.r11.s64 + -11104;
	// bl 0x83523120
	ctx.lr = 0x83C5BC58;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,6168
	ctx.r3.s64 = ctx.r10.s64 + 6168;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5BC64;
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

__attribute__((alias("__imp__sub_83C5BC74"))) PPC_WEAK_FUNC(sub_83C5BC74);
PPC_FUNC_IMPL(__imp__sub_83C5BC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5BC78"))) PPC_WEAK_FUNC(sub_83C5BC78);
PPC_FUNC_IMPL(__imp__sub_83C5BC78) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-11088
	ctx.r7.s64 = ctx.r8.s64 + -11088;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-11088(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11088);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-11088(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11088, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5BCA0"))) PPC_WEAK_FUNC(sub_83C5BCA0);
PPC_FUNC_IMPL(__imp__sub_83C5BCA0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,22672
	ctx.r6.s64 = ctx.r7.s64 + 22672;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,22592(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 22592);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-11088(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11088);
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
	// std r9,22672(r7)
	PPC_STORE_U64(ctx.r7.u32 + 22672, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5BCE8"))) PPC_WEAK_FUNC(sub_83C5BCE8);
PPC_FUNC_IMPL(__imp__sub_83C5BCE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6184
	ctx.r3.s64 = ctx.r11.s64 + 6184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5BCF4"))) PPC_WEAK_FUNC(sub_83C5BCF4);
PPC_FUNC_IMPL(__imp__sub_83C5BCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5BCF8"))) PPC_WEAK_FUNC(sub_83C5BCF8);
PPC_FUNC_IMPL(__imp__sub_83C5BCF8) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-11080
	ctx.r3.s64 = ctx.r11.s64 + -11080;
	// bl 0x8259af80
	ctx.lr = 0x83C5BD10;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,6200
	ctx.r3.s64 = ctx.r10.s64 + 6200;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5BD1C;
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

__attribute__((alias("__imp__sub_83C5BD2C"))) PPC_WEAK_FUNC(sub_83C5BD2C);
PPC_FUNC_IMPL(__imp__sub_83C5BD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5BD30"))) PPC_WEAK_FUNC(sub_83C5BD30);
PPC_FUNC_IMPL(__imp__sub_83C5BD30) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-11100
	ctx.r11.s64 = ctx.r8.s64 + -11100;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,22640(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22640);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,6192
	ctx.r3.s64 = ctx.r6.s64 + 6192;
	// stw r10,-11100(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11100, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5BD60"))) PPC_WEAK_FUNC(sub_83C5BD60);
PPC_FUNC_IMPL(__imp__sub_83C5BD60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6208
	ctx.r3.s64 = ctx.r11.s64 + 6208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5BD6C"))) PPC_WEAK_FUNC(sub_83C5BD6C);
PPC_FUNC_IMPL(__imp__sub_83C5BD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5BD70"))) PPC_WEAK_FUNC(sub_83C5BD70);
PPC_FUNC_IMPL(__imp__sub_83C5BD70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6216
	ctx.r3.s64 = ctx.r11.s64 + 6216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5BD7C"))) PPC_WEAK_FUNC(sub_83C5BD7C);
PPC_FUNC_IMPL(__imp__sub_83C5BD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5BD80"))) PPC_WEAK_FUNC(sub_83C5BD80);
PPC_FUNC_IMPL(__imp__sub_83C5BD80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6224
	ctx.r3.s64 = ctx.r11.s64 + 6224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5BD8C"))) PPC_WEAK_FUNC(sub_83C5BD8C);
PPC_FUNC_IMPL(__imp__sub_83C5BD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5BD90"))) PPC_WEAK_FUNC(sub_83C5BD90);
PPC_FUNC_IMPL(__imp__sub_83C5BD90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6232
	ctx.r3.s64 = ctx.r11.s64 + 6232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5BD9C"))) PPC_WEAK_FUNC(sub_83C5BD9C);
PPC_FUNC_IMPL(__imp__sub_83C5BD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5BDA0"))) PPC_WEAK_FUNC(sub_83C5BDA0);
PPC_FUNC_IMPL(__imp__sub_83C5BDA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6240
	ctx.r3.s64 = ctx.r11.s64 + 6240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5BDAC"))) PPC_WEAK_FUNC(sub_83C5BDAC);
PPC_FUNC_IMPL(__imp__sub_83C5BDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5BDB0"))) PPC_WEAK_FUNC(sub_83C5BDB0);
PPC_FUNC_IMPL(__imp__sub_83C5BDB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6248
	ctx.r3.s64 = ctx.r11.s64 + 6248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5BDBC"))) PPC_WEAK_FUNC(sub_83C5BDBC);
PPC_FUNC_IMPL(__imp__sub_83C5BDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5BDC0"))) PPC_WEAK_FUNC(sub_83C5BDC0);
PPC_FUNC_IMPL(__imp__sub_83C5BDC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6256
	ctx.r3.s64 = ctx.r11.s64 + 6256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5BDCC"))) PPC_WEAK_FUNC(sub_83C5BDCC);
PPC_FUNC_IMPL(__imp__sub_83C5BDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5BDD0"))) PPC_WEAK_FUNC(sub_83C5BDD0);
PPC_FUNC_IMPL(__imp__sub_83C5BDD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6264
	ctx.r3.s64 = ctx.r11.s64 + 6264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5BDDC"))) PPC_WEAK_FUNC(sub_83C5BDDC);
PPC_FUNC_IMPL(__imp__sub_83C5BDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5BDE0"))) PPC_WEAK_FUNC(sub_83C5BDE0);
PPC_FUNC_IMPL(__imp__sub_83C5BDE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6272
	ctx.r3.s64 = ctx.r11.s64 + 6272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5BDEC"))) PPC_WEAK_FUNC(sub_83C5BDEC);
PPC_FUNC_IMPL(__imp__sub_83C5BDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5BDF0"))) PPC_WEAK_FUNC(sub_83C5BDF0);
PPC_FUNC_IMPL(__imp__sub_83C5BDF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6280
	ctx.r3.s64 = ctx.r11.s64 + 6280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5BDFC"))) PPC_WEAK_FUNC(sub_83C5BDFC);
PPC_FUNC_IMPL(__imp__sub_83C5BDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5BE00"))) PPC_WEAK_FUNC(sub_83C5BE00);
PPC_FUNC_IMPL(__imp__sub_83C5BE00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6288
	ctx.r3.s64 = ctx.r11.s64 + 6288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5BE0C"))) PPC_WEAK_FUNC(sub_83C5BE0C);
PPC_FUNC_IMPL(__imp__sub_83C5BE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5BE10"))) PPC_WEAK_FUNC(sub_83C5BE10);
PPC_FUNC_IMPL(__imp__sub_83C5BE10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,6296
	ctx.r3.s64 = ctx.r11.s64 + 6296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5BE1C"))) PPC_WEAK_FUNC(sub_83C5BE1C);
PPC_FUNC_IMPL(__imp__sub_83C5BE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5BE20"))) PPC_WEAK_FUNC(sub_83C5BE20);
PPC_FUNC_IMPL(__imp__sub_83C5BE20) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-10736
	ctx.r3.s64 = ctx.r11.s64 + -10736;
	// bl 0x83523120
	ctx.lr = 0x83C5BE38;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,6304
	ctx.r3.s64 = ctx.r10.s64 + 6304;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5BE44;
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

__attribute__((alias("__imp__sub_83C5BE54"))) PPC_WEAK_FUNC(sub_83C5BE54);
PPC_FUNC_IMPL(__imp__sub_83C5BE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5BE58"))) PPC_WEAK_FUNC(sub_83C5BE58);
PPC_FUNC_IMPL(__imp__sub_83C5BE58) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-10720
	ctx.r7.s64 = ctx.r8.s64 + -10720;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-10720(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10720);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-10720(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10720, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5BE80"))) PPC_WEAK_FUNC(sub_83C5BE80);
PPC_FUNC_IMPL(__imp__sub_83C5BE80) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,22812
	ctx.r6.s64 = ctx.r7.s64 + 22812;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,22732(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 22732);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-10720(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -10720);
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
	// std r9,22812(r7)
	PPC_STORE_U64(ctx.r7.u32 + 22812, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

