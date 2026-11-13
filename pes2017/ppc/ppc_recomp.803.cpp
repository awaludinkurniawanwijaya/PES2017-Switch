#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C5A298"))) PPC_WEAK_FUNC(sub_83C5A298);
PPC_FUNC_IMPL(__imp__sub_83C5A298) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-15896
	ctx.r7.s64 = ctx.r8.s64 + -15896;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-15896(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15896);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-15896(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15896, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5A2C0"))) PPC_WEAK_FUNC(sub_83C5A2C0);
PPC_FUNC_IMPL(__imp__sub_83C5A2C0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,20680
	ctx.r6.s64 = ctx.r7.s64 + 20680;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,20608(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 20608);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-15896(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -15896);
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
	// std r9,20680(r7)
	PPC_STORE_U64(ctx.r7.u32 + 20680, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5A308"))) PPC_WEAK_FUNC(sub_83C5A308);
PPC_FUNC_IMPL(__imp__sub_83C5A308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4224
	ctx.r3.s64 = ctx.r11.s64 + 4224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A314"))) PPC_WEAK_FUNC(sub_83C5A314);
PPC_FUNC_IMPL(__imp__sub_83C5A314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A318"))) PPC_WEAK_FUNC(sub_83C5A318);
PPC_FUNC_IMPL(__imp__sub_83C5A318) {
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
	// addi r3,r11,-15888
	ctx.r3.s64 = ctx.r11.s64 + -15888;
	// bl 0x8259af80
	ctx.lr = 0x83C5A330;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,4240
	ctx.r3.s64 = ctx.r10.s64 + 4240;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5A33C;
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

__attribute__((alias("__imp__sub_83C5A34C"))) PPC_WEAK_FUNC(sub_83C5A34C);
PPC_FUNC_IMPL(__imp__sub_83C5A34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A350"))) PPC_WEAK_FUNC(sub_83C5A350);
PPC_FUNC_IMPL(__imp__sub_83C5A350) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-15908
	ctx.r11.s64 = ctx.r8.s64 + -15908;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,20656(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20656);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,4232
	ctx.r3.s64 = ctx.r6.s64 + 4232;
	// stw r10,-15908(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15908, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A380"))) PPC_WEAK_FUNC(sub_83C5A380);
PPC_FUNC_IMPL(__imp__sub_83C5A380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4248
	ctx.r3.s64 = ctx.r11.s64 + 4248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A38C"))) PPC_WEAK_FUNC(sub_83C5A38C);
PPC_FUNC_IMPL(__imp__sub_83C5A38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A390"))) PPC_WEAK_FUNC(sub_83C5A390);
PPC_FUNC_IMPL(__imp__sub_83C5A390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4256
	ctx.r3.s64 = ctx.r11.s64 + 4256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A39C"))) PPC_WEAK_FUNC(sub_83C5A39C);
PPC_FUNC_IMPL(__imp__sub_83C5A39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A3A0"))) PPC_WEAK_FUNC(sub_83C5A3A0);
PPC_FUNC_IMPL(__imp__sub_83C5A3A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4264
	ctx.r3.s64 = ctx.r11.s64 + 4264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A3AC"))) PPC_WEAK_FUNC(sub_83C5A3AC);
PPC_FUNC_IMPL(__imp__sub_83C5A3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A3B0"))) PPC_WEAK_FUNC(sub_83C5A3B0);
PPC_FUNC_IMPL(__imp__sub_83C5A3B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4272
	ctx.r3.s64 = ctx.r11.s64 + 4272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A3BC"))) PPC_WEAK_FUNC(sub_83C5A3BC);
PPC_FUNC_IMPL(__imp__sub_83C5A3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A3C0"))) PPC_WEAK_FUNC(sub_83C5A3C0);
PPC_FUNC_IMPL(__imp__sub_83C5A3C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4280
	ctx.r3.s64 = ctx.r11.s64 + 4280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A3CC"))) PPC_WEAK_FUNC(sub_83C5A3CC);
PPC_FUNC_IMPL(__imp__sub_83C5A3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A3D0"))) PPC_WEAK_FUNC(sub_83C5A3D0);
PPC_FUNC_IMPL(__imp__sub_83C5A3D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4288
	ctx.r3.s64 = ctx.r11.s64 + 4288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A3DC"))) PPC_WEAK_FUNC(sub_83C5A3DC);
PPC_FUNC_IMPL(__imp__sub_83C5A3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A3E0"))) PPC_WEAK_FUNC(sub_83C5A3E0);
PPC_FUNC_IMPL(__imp__sub_83C5A3E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4296
	ctx.r3.s64 = ctx.r11.s64 + 4296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A3EC"))) PPC_WEAK_FUNC(sub_83C5A3EC);
PPC_FUNC_IMPL(__imp__sub_83C5A3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A3F0"))) PPC_WEAK_FUNC(sub_83C5A3F0);
PPC_FUNC_IMPL(__imp__sub_83C5A3F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4304
	ctx.r3.s64 = ctx.r11.s64 + 4304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A3FC"))) PPC_WEAK_FUNC(sub_83C5A3FC);
PPC_FUNC_IMPL(__imp__sub_83C5A3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A400"))) PPC_WEAK_FUNC(sub_83C5A400);
PPC_FUNC_IMPL(__imp__sub_83C5A400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4312
	ctx.r3.s64 = ctx.r11.s64 + 4312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A40C"))) PPC_WEAK_FUNC(sub_83C5A40C);
PPC_FUNC_IMPL(__imp__sub_83C5A40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A410"))) PPC_WEAK_FUNC(sub_83C5A410);
PPC_FUNC_IMPL(__imp__sub_83C5A410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4320
	ctx.r3.s64 = ctx.r11.s64 + 4320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A41C"))) PPC_WEAK_FUNC(sub_83C5A41C);
PPC_FUNC_IMPL(__imp__sub_83C5A41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A420"))) PPC_WEAK_FUNC(sub_83C5A420);
PPC_FUNC_IMPL(__imp__sub_83C5A420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4328
	ctx.r3.s64 = ctx.r11.s64 + 4328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A42C"))) PPC_WEAK_FUNC(sub_83C5A42C);
PPC_FUNC_IMPL(__imp__sub_83C5A42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A430"))) PPC_WEAK_FUNC(sub_83C5A430);
PPC_FUNC_IMPL(__imp__sub_83C5A430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4336
	ctx.r3.s64 = ctx.r11.s64 + 4336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A43C"))) PPC_WEAK_FUNC(sub_83C5A43C);
PPC_FUNC_IMPL(__imp__sub_83C5A43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A440"))) PPC_WEAK_FUNC(sub_83C5A440);
PPC_FUNC_IMPL(__imp__sub_83C5A440) {
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
	// addi r3,r11,-15544
	ctx.r3.s64 = ctx.r11.s64 + -15544;
	// bl 0x83523120
	ctx.lr = 0x83C5A458;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,4344
	ctx.r3.s64 = ctx.r10.s64 + 4344;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5A464;
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

__attribute__((alias("__imp__sub_83C5A474"))) PPC_WEAK_FUNC(sub_83C5A474);
PPC_FUNC_IMPL(__imp__sub_83C5A474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A478"))) PPC_WEAK_FUNC(sub_83C5A478);
PPC_FUNC_IMPL(__imp__sub_83C5A478) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-15528
	ctx.r7.s64 = ctx.r8.s64 + -15528;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-15528(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15528);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-15528(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15528, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5A4A0"))) PPC_WEAK_FUNC(sub_83C5A4A0);
PPC_FUNC_IMPL(__imp__sub_83C5A4A0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,20816
	ctx.r6.s64 = ctx.r7.s64 + 20816;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,20736(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 20736);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-15528(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -15528);
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
	// std r9,20816(r7)
	PPC_STORE_U64(ctx.r7.u32 + 20816, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5A4E8"))) PPC_WEAK_FUNC(sub_83C5A4E8);
PPC_FUNC_IMPL(__imp__sub_83C5A4E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4360
	ctx.r3.s64 = ctx.r11.s64 + 4360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A4F4"))) PPC_WEAK_FUNC(sub_83C5A4F4);
PPC_FUNC_IMPL(__imp__sub_83C5A4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A4F8"))) PPC_WEAK_FUNC(sub_83C5A4F8);
PPC_FUNC_IMPL(__imp__sub_83C5A4F8) {
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
	// addi r3,r11,-15520
	ctx.r3.s64 = ctx.r11.s64 + -15520;
	// bl 0x8259af80
	ctx.lr = 0x83C5A510;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,4376
	ctx.r3.s64 = ctx.r10.s64 + 4376;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5A51C;
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

__attribute__((alias("__imp__sub_83C5A52C"))) PPC_WEAK_FUNC(sub_83C5A52C);
PPC_FUNC_IMPL(__imp__sub_83C5A52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A530"))) PPC_WEAK_FUNC(sub_83C5A530);
PPC_FUNC_IMPL(__imp__sub_83C5A530) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-15540
	ctx.r11.s64 = ctx.r8.s64 + -15540;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,20784(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20784);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,4368
	ctx.r3.s64 = ctx.r6.s64 + 4368;
	// stw r10,-15540(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15540, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A560"))) PPC_WEAK_FUNC(sub_83C5A560);
PPC_FUNC_IMPL(__imp__sub_83C5A560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4384
	ctx.r3.s64 = ctx.r11.s64 + 4384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A56C"))) PPC_WEAK_FUNC(sub_83C5A56C);
PPC_FUNC_IMPL(__imp__sub_83C5A56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A570"))) PPC_WEAK_FUNC(sub_83C5A570);
PPC_FUNC_IMPL(__imp__sub_83C5A570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4392
	ctx.r3.s64 = ctx.r11.s64 + 4392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A57C"))) PPC_WEAK_FUNC(sub_83C5A57C);
PPC_FUNC_IMPL(__imp__sub_83C5A57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A580"))) PPC_WEAK_FUNC(sub_83C5A580);
PPC_FUNC_IMPL(__imp__sub_83C5A580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4400
	ctx.r3.s64 = ctx.r11.s64 + 4400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A58C"))) PPC_WEAK_FUNC(sub_83C5A58C);
PPC_FUNC_IMPL(__imp__sub_83C5A58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A590"))) PPC_WEAK_FUNC(sub_83C5A590);
PPC_FUNC_IMPL(__imp__sub_83C5A590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4408
	ctx.r3.s64 = ctx.r11.s64 + 4408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A59C"))) PPC_WEAK_FUNC(sub_83C5A59C);
PPC_FUNC_IMPL(__imp__sub_83C5A59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A5A0"))) PPC_WEAK_FUNC(sub_83C5A5A0);
PPC_FUNC_IMPL(__imp__sub_83C5A5A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4416
	ctx.r3.s64 = ctx.r11.s64 + 4416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A5AC"))) PPC_WEAK_FUNC(sub_83C5A5AC);
PPC_FUNC_IMPL(__imp__sub_83C5A5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A5B0"))) PPC_WEAK_FUNC(sub_83C5A5B0);
PPC_FUNC_IMPL(__imp__sub_83C5A5B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4424
	ctx.r3.s64 = ctx.r11.s64 + 4424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A5BC"))) PPC_WEAK_FUNC(sub_83C5A5BC);
PPC_FUNC_IMPL(__imp__sub_83C5A5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A5C0"))) PPC_WEAK_FUNC(sub_83C5A5C0);
PPC_FUNC_IMPL(__imp__sub_83C5A5C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4432
	ctx.r3.s64 = ctx.r11.s64 + 4432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A5CC"))) PPC_WEAK_FUNC(sub_83C5A5CC);
PPC_FUNC_IMPL(__imp__sub_83C5A5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A5D0"))) PPC_WEAK_FUNC(sub_83C5A5D0);
PPC_FUNC_IMPL(__imp__sub_83C5A5D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4440
	ctx.r3.s64 = ctx.r11.s64 + 4440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A5DC"))) PPC_WEAK_FUNC(sub_83C5A5DC);
PPC_FUNC_IMPL(__imp__sub_83C5A5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A5E0"))) PPC_WEAK_FUNC(sub_83C5A5E0);
PPC_FUNC_IMPL(__imp__sub_83C5A5E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4448
	ctx.r3.s64 = ctx.r11.s64 + 4448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A5EC"))) PPC_WEAK_FUNC(sub_83C5A5EC);
PPC_FUNC_IMPL(__imp__sub_83C5A5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A5F0"))) PPC_WEAK_FUNC(sub_83C5A5F0);
PPC_FUNC_IMPL(__imp__sub_83C5A5F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4456
	ctx.r3.s64 = ctx.r11.s64 + 4456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A5FC"))) PPC_WEAK_FUNC(sub_83C5A5FC);
PPC_FUNC_IMPL(__imp__sub_83C5A5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A600"))) PPC_WEAK_FUNC(sub_83C5A600);
PPC_FUNC_IMPL(__imp__sub_83C5A600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4464
	ctx.r3.s64 = ctx.r11.s64 + 4464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A60C"))) PPC_WEAK_FUNC(sub_83C5A60C);
PPC_FUNC_IMPL(__imp__sub_83C5A60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A610"))) PPC_WEAK_FUNC(sub_83C5A610);
PPC_FUNC_IMPL(__imp__sub_83C5A610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4472
	ctx.r3.s64 = ctx.r11.s64 + 4472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A61C"))) PPC_WEAK_FUNC(sub_83C5A61C);
PPC_FUNC_IMPL(__imp__sub_83C5A61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A620"))) PPC_WEAK_FUNC(sub_83C5A620);
PPC_FUNC_IMPL(__imp__sub_83C5A620) {
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
	// addi r3,r11,-15176
	ctx.r3.s64 = ctx.r11.s64 + -15176;
	// bl 0x83523120
	ctx.lr = 0x83C5A638;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,4480
	ctx.r3.s64 = ctx.r10.s64 + 4480;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5A644;
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

__attribute__((alias("__imp__sub_83C5A654"))) PPC_WEAK_FUNC(sub_83C5A654);
PPC_FUNC_IMPL(__imp__sub_83C5A654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A658"))) PPC_WEAK_FUNC(sub_83C5A658);
PPC_FUNC_IMPL(__imp__sub_83C5A658) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-15160
	ctx.r7.s64 = ctx.r8.s64 + -15160;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-15160(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15160);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-15160(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15160, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5A680"))) PPC_WEAK_FUNC(sub_83C5A680);
PPC_FUNC_IMPL(__imp__sub_83C5A680) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,20944
	ctx.r6.s64 = ctx.r7.s64 + 20944;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,20872(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 20872);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-15160(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -15160);
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
	// std r9,20944(r7)
	PPC_STORE_U64(ctx.r7.u32 + 20944, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5A6C8"))) PPC_WEAK_FUNC(sub_83C5A6C8);
PPC_FUNC_IMPL(__imp__sub_83C5A6C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4496
	ctx.r3.s64 = ctx.r11.s64 + 4496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A6D4"))) PPC_WEAK_FUNC(sub_83C5A6D4);
PPC_FUNC_IMPL(__imp__sub_83C5A6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A6D8"))) PPC_WEAK_FUNC(sub_83C5A6D8);
PPC_FUNC_IMPL(__imp__sub_83C5A6D8) {
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
	// addi r3,r11,-15152
	ctx.r3.s64 = ctx.r11.s64 + -15152;
	// bl 0x8259af80
	ctx.lr = 0x83C5A6F0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,4512
	ctx.r3.s64 = ctx.r10.s64 + 4512;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5A6FC;
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

__attribute__((alias("__imp__sub_83C5A70C"))) PPC_WEAK_FUNC(sub_83C5A70C);
PPC_FUNC_IMPL(__imp__sub_83C5A70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A710"))) PPC_WEAK_FUNC(sub_83C5A710);
PPC_FUNC_IMPL(__imp__sub_83C5A710) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-15172
	ctx.r11.s64 = ctx.r8.s64 + -15172;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,20920(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20920);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,4504
	ctx.r3.s64 = ctx.r6.s64 + 4504;
	// stw r10,-15172(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15172, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A740"))) PPC_WEAK_FUNC(sub_83C5A740);
PPC_FUNC_IMPL(__imp__sub_83C5A740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4520
	ctx.r3.s64 = ctx.r11.s64 + 4520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A74C"))) PPC_WEAK_FUNC(sub_83C5A74C);
PPC_FUNC_IMPL(__imp__sub_83C5A74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A750"))) PPC_WEAK_FUNC(sub_83C5A750);
PPC_FUNC_IMPL(__imp__sub_83C5A750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4528
	ctx.r3.s64 = ctx.r11.s64 + 4528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A75C"))) PPC_WEAK_FUNC(sub_83C5A75C);
PPC_FUNC_IMPL(__imp__sub_83C5A75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A760"))) PPC_WEAK_FUNC(sub_83C5A760);
PPC_FUNC_IMPL(__imp__sub_83C5A760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4536
	ctx.r3.s64 = ctx.r11.s64 + 4536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A76C"))) PPC_WEAK_FUNC(sub_83C5A76C);
PPC_FUNC_IMPL(__imp__sub_83C5A76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A770"))) PPC_WEAK_FUNC(sub_83C5A770);
PPC_FUNC_IMPL(__imp__sub_83C5A770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4544
	ctx.r3.s64 = ctx.r11.s64 + 4544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A77C"))) PPC_WEAK_FUNC(sub_83C5A77C);
PPC_FUNC_IMPL(__imp__sub_83C5A77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A780"))) PPC_WEAK_FUNC(sub_83C5A780);
PPC_FUNC_IMPL(__imp__sub_83C5A780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4552
	ctx.r3.s64 = ctx.r11.s64 + 4552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A78C"))) PPC_WEAK_FUNC(sub_83C5A78C);
PPC_FUNC_IMPL(__imp__sub_83C5A78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A790"))) PPC_WEAK_FUNC(sub_83C5A790);
PPC_FUNC_IMPL(__imp__sub_83C5A790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4560
	ctx.r3.s64 = ctx.r11.s64 + 4560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A79C"))) PPC_WEAK_FUNC(sub_83C5A79C);
PPC_FUNC_IMPL(__imp__sub_83C5A79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A7A0"))) PPC_WEAK_FUNC(sub_83C5A7A0);
PPC_FUNC_IMPL(__imp__sub_83C5A7A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4568
	ctx.r3.s64 = ctx.r11.s64 + 4568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A7AC"))) PPC_WEAK_FUNC(sub_83C5A7AC);
PPC_FUNC_IMPL(__imp__sub_83C5A7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A7B0"))) PPC_WEAK_FUNC(sub_83C5A7B0);
PPC_FUNC_IMPL(__imp__sub_83C5A7B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4576
	ctx.r3.s64 = ctx.r11.s64 + 4576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A7BC"))) PPC_WEAK_FUNC(sub_83C5A7BC);
PPC_FUNC_IMPL(__imp__sub_83C5A7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A7C0"))) PPC_WEAK_FUNC(sub_83C5A7C0);
PPC_FUNC_IMPL(__imp__sub_83C5A7C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4584
	ctx.r3.s64 = ctx.r11.s64 + 4584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A7CC"))) PPC_WEAK_FUNC(sub_83C5A7CC);
PPC_FUNC_IMPL(__imp__sub_83C5A7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A7D0"))) PPC_WEAK_FUNC(sub_83C5A7D0);
PPC_FUNC_IMPL(__imp__sub_83C5A7D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4592
	ctx.r3.s64 = ctx.r11.s64 + 4592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A7DC"))) PPC_WEAK_FUNC(sub_83C5A7DC);
PPC_FUNC_IMPL(__imp__sub_83C5A7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A7E0"))) PPC_WEAK_FUNC(sub_83C5A7E0);
PPC_FUNC_IMPL(__imp__sub_83C5A7E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4600
	ctx.r3.s64 = ctx.r11.s64 + 4600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A7EC"))) PPC_WEAK_FUNC(sub_83C5A7EC);
PPC_FUNC_IMPL(__imp__sub_83C5A7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A7F0"))) PPC_WEAK_FUNC(sub_83C5A7F0);
PPC_FUNC_IMPL(__imp__sub_83C5A7F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4608
	ctx.r3.s64 = ctx.r11.s64 + 4608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A7FC"))) PPC_WEAK_FUNC(sub_83C5A7FC);
PPC_FUNC_IMPL(__imp__sub_83C5A7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A800"))) PPC_WEAK_FUNC(sub_83C5A800);
PPC_FUNC_IMPL(__imp__sub_83C5A800) {
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
	// addi r3,r11,-14808
	ctx.r3.s64 = ctx.r11.s64 + -14808;
	// bl 0x83523120
	ctx.lr = 0x83C5A818;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,4616
	ctx.r3.s64 = ctx.r10.s64 + 4616;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5A824;
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

__attribute__((alias("__imp__sub_83C5A834"))) PPC_WEAK_FUNC(sub_83C5A834);
PPC_FUNC_IMPL(__imp__sub_83C5A834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A838"))) PPC_WEAK_FUNC(sub_83C5A838);
PPC_FUNC_IMPL(__imp__sub_83C5A838) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14792
	ctx.r7.s64 = ctx.r8.s64 + -14792;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14792(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14792);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14792(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14792, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5A860"))) PPC_WEAK_FUNC(sub_83C5A860);
PPC_FUNC_IMPL(__imp__sub_83C5A860) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,21080
	ctx.r6.s64 = ctx.r7.s64 + 21080;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,21008(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 21008);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-14792(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -14792);
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
	// std r9,21080(r7)
	PPC_STORE_U64(ctx.r7.u32 + 21080, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5A8A8"))) PPC_WEAK_FUNC(sub_83C5A8A8);
PPC_FUNC_IMPL(__imp__sub_83C5A8A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4632
	ctx.r3.s64 = ctx.r11.s64 + 4632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A8B4"))) PPC_WEAK_FUNC(sub_83C5A8B4);
PPC_FUNC_IMPL(__imp__sub_83C5A8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A8B8"))) PPC_WEAK_FUNC(sub_83C5A8B8);
PPC_FUNC_IMPL(__imp__sub_83C5A8B8) {
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
	// addi r3,r11,-14784
	ctx.r3.s64 = ctx.r11.s64 + -14784;
	// bl 0x8259af80
	ctx.lr = 0x83C5A8D0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,4648
	ctx.r3.s64 = ctx.r10.s64 + 4648;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5A8DC;
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

__attribute__((alias("__imp__sub_83C5A8EC"))) PPC_WEAK_FUNC(sub_83C5A8EC);
PPC_FUNC_IMPL(__imp__sub_83C5A8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A8F0"))) PPC_WEAK_FUNC(sub_83C5A8F0);
PPC_FUNC_IMPL(__imp__sub_83C5A8F0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-14804
	ctx.r11.s64 = ctx.r8.s64 + -14804;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,21056(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21056);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,4640
	ctx.r3.s64 = ctx.r6.s64 + 4640;
	// stw r10,-14804(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14804, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A920"))) PPC_WEAK_FUNC(sub_83C5A920);
PPC_FUNC_IMPL(__imp__sub_83C5A920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4656
	ctx.r3.s64 = ctx.r11.s64 + 4656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A92C"))) PPC_WEAK_FUNC(sub_83C5A92C);
PPC_FUNC_IMPL(__imp__sub_83C5A92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A930"))) PPC_WEAK_FUNC(sub_83C5A930);
PPC_FUNC_IMPL(__imp__sub_83C5A930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4664
	ctx.r3.s64 = ctx.r11.s64 + 4664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A93C"))) PPC_WEAK_FUNC(sub_83C5A93C);
PPC_FUNC_IMPL(__imp__sub_83C5A93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A940"))) PPC_WEAK_FUNC(sub_83C5A940);
PPC_FUNC_IMPL(__imp__sub_83C5A940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4672
	ctx.r3.s64 = ctx.r11.s64 + 4672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A94C"))) PPC_WEAK_FUNC(sub_83C5A94C);
PPC_FUNC_IMPL(__imp__sub_83C5A94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A950"))) PPC_WEAK_FUNC(sub_83C5A950);
PPC_FUNC_IMPL(__imp__sub_83C5A950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4680
	ctx.r3.s64 = ctx.r11.s64 + 4680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A95C"))) PPC_WEAK_FUNC(sub_83C5A95C);
PPC_FUNC_IMPL(__imp__sub_83C5A95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A960"))) PPC_WEAK_FUNC(sub_83C5A960);
PPC_FUNC_IMPL(__imp__sub_83C5A960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4688
	ctx.r3.s64 = ctx.r11.s64 + 4688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A96C"))) PPC_WEAK_FUNC(sub_83C5A96C);
PPC_FUNC_IMPL(__imp__sub_83C5A96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A970"))) PPC_WEAK_FUNC(sub_83C5A970);
PPC_FUNC_IMPL(__imp__sub_83C5A970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4696
	ctx.r3.s64 = ctx.r11.s64 + 4696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A97C"))) PPC_WEAK_FUNC(sub_83C5A97C);
PPC_FUNC_IMPL(__imp__sub_83C5A97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A980"))) PPC_WEAK_FUNC(sub_83C5A980);
PPC_FUNC_IMPL(__imp__sub_83C5A980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4704
	ctx.r3.s64 = ctx.r11.s64 + 4704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A98C"))) PPC_WEAK_FUNC(sub_83C5A98C);
PPC_FUNC_IMPL(__imp__sub_83C5A98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A990"))) PPC_WEAK_FUNC(sub_83C5A990);
PPC_FUNC_IMPL(__imp__sub_83C5A990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4712
	ctx.r3.s64 = ctx.r11.s64 + 4712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A99C"))) PPC_WEAK_FUNC(sub_83C5A99C);
PPC_FUNC_IMPL(__imp__sub_83C5A99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A9A0"))) PPC_WEAK_FUNC(sub_83C5A9A0);
PPC_FUNC_IMPL(__imp__sub_83C5A9A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4720
	ctx.r3.s64 = ctx.r11.s64 + 4720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A9AC"))) PPC_WEAK_FUNC(sub_83C5A9AC);
PPC_FUNC_IMPL(__imp__sub_83C5A9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A9B0"))) PPC_WEAK_FUNC(sub_83C5A9B0);
PPC_FUNC_IMPL(__imp__sub_83C5A9B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4728
	ctx.r3.s64 = ctx.r11.s64 + 4728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A9BC"))) PPC_WEAK_FUNC(sub_83C5A9BC);
PPC_FUNC_IMPL(__imp__sub_83C5A9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A9C0"))) PPC_WEAK_FUNC(sub_83C5A9C0);
PPC_FUNC_IMPL(__imp__sub_83C5A9C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4736
	ctx.r3.s64 = ctx.r11.s64 + 4736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A9CC"))) PPC_WEAK_FUNC(sub_83C5A9CC);
PPC_FUNC_IMPL(__imp__sub_83C5A9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A9D0"))) PPC_WEAK_FUNC(sub_83C5A9D0);
PPC_FUNC_IMPL(__imp__sub_83C5A9D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4744
	ctx.r3.s64 = ctx.r11.s64 + 4744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5A9DC"))) PPC_WEAK_FUNC(sub_83C5A9DC);
PPC_FUNC_IMPL(__imp__sub_83C5A9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5A9E0"))) PPC_WEAK_FUNC(sub_83C5A9E0);
PPC_FUNC_IMPL(__imp__sub_83C5A9E0) {
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
	// addi r3,r11,-14440
	ctx.r3.s64 = ctx.r11.s64 + -14440;
	// bl 0x83523120
	ctx.lr = 0x83C5A9F8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,4752
	ctx.r3.s64 = ctx.r10.s64 + 4752;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5AA04;
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

__attribute__((alias("__imp__sub_83C5AA14"))) PPC_WEAK_FUNC(sub_83C5AA14);
PPC_FUNC_IMPL(__imp__sub_83C5AA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5AA18"))) PPC_WEAK_FUNC(sub_83C5AA18);
PPC_FUNC_IMPL(__imp__sub_83C5AA18) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14424
	ctx.r7.s64 = ctx.r8.s64 + -14424;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14424(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14424);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14424(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14424, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5AA40"))) PPC_WEAK_FUNC(sub_83C5AA40);
PPC_FUNC_IMPL(__imp__sub_83C5AA40) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,21224
	ctx.r6.s64 = ctx.r7.s64 + 21224;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,21144(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 21144);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-14424(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -14424);
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
	// std r9,21224(r7)
	PPC_STORE_U64(ctx.r7.u32 + 21224, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5AA88"))) PPC_WEAK_FUNC(sub_83C5AA88);
PPC_FUNC_IMPL(__imp__sub_83C5AA88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4768
	ctx.r3.s64 = ctx.r11.s64 + 4768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5AA94"))) PPC_WEAK_FUNC(sub_83C5AA94);
PPC_FUNC_IMPL(__imp__sub_83C5AA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5AA98"))) PPC_WEAK_FUNC(sub_83C5AA98);
PPC_FUNC_IMPL(__imp__sub_83C5AA98) {
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
	// addi r3,r11,-14416
	ctx.r3.s64 = ctx.r11.s64 + -14416;
	// bl 0x8259af80
	ctx.lr = 0x83C5AAB0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,4784
	ctx.r3.s64 = ctx.r10.s64 + 4784;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5AABC;
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

__attribute__((alias("__imp__sub_83C5AACC"))) PPC_WEAK_FUNC(sub_83C5AACC);
PPC_FUNC_IMPL(__imp__sub_83C5AACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5AAD0"))) PPC_WEAK_FUNC(sub_83C5AAD0);
PPC_FUNC_IMPL(__imp__sub_83C5AAD0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-14436
	ctx.r11.s64 = ctx.r8.s64 + -14436;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,21192(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21192);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,4776
	ctx.r3.s64 = ctx.r6.s64 + 4776;
	// stw r10,-14436(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14436, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5AB00"))) PPC_WEAK_FUNC(sub_83C5AB00);
PPC_FUNC_IMPL(__imp__sub_83C5AB00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4792
	ctx.r3.s64 = ctx.r11.s64 + 4792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5AB0C"))) PPC_WEAK_FUNC(sub_83C5AB0C);
PPC_FUNC_IMPL(__imp__sub_83C5AB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5AB10"))) PPC_WEAK_FUNC(sub_83C5AB10);
PPC_FUNC_IMPL(__imp__sub_83C5AB10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4800
	ctx.r3.s64 = ctx.r11.s64 + 4800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5AB1C"))) PPC_WEAK_FUNC(sub_83C5AB1C);
PPC_FUNC_IMPL(__imp__sub_83C5AB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5AB20"))) PPC_WEAK_FUNC(sub_83C5AB20);
PPC_FUNC_IMPL(__imp__sub_83C5AB20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4808
	ctx.r3.s64 = ctx.r11.s64 + 4808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5AB2C"))) PPC_WEAK_FUNC(sub_83C5AB2C);
PPC_FUNC_IMPL(__imp__sub_83C5AB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5AB30"))) PPC_WEAK_FUNC(sub_83C5AB30);
PPC_FUNC_IMPL(__imp__sub_83C5AB30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4816
	ctx.r3.s64 = ctx.r11.s64 + 4816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5AB3C"))) PPC_WEAK_FUNC(sub_83C5AB3C);
PPC_FUNC_IMPL(__imp__sub_83C5AB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5AB40"))) PPC_WEAK_FUNC(sub_83C5AB40);
PPC_FUNC_IMPL(__imp__sub_83C5AB40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4824
	ctx.r3.s64 = ctx.r11.s64 + 4824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5AB4C"))) PPC_WEAK_FUNC(sub_83C5AB4C);
PPC_FUNC_IMPL(__imp__sub_83C5AB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5AB50"))) PPC_WEAK_FUNC(sub_83C5AB50);
PPC_FUNC_IMPL(__imp__sub_83C5AB50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4832
	ctx.r3.s64 = ctx.r11.s64 + 4832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5AB5C"))) PPC_WEAK_FUNC(sub_83C5AB5C);
PPC_FUNC_IMPL(__imp__sub_83C5AB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5AB60"))) PPC_WEAK_FUNC(sub_83C5AB60);
PPC_FUNC_IMPL(__imp__sub_83C5AB60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4840
	ctx.r3.s64 = ctx.r11.s64 + 4840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5AB6C"))) PPC_WEAK_FUNC(sub_83C5AB6C);
PPC_FUNC_IMPL(__imp__sub_83C5AB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5AB70"))) PPC_WEAK_FUNC(sub_83C5AB70);
PPC_FUNC_IMPL(__imp__sub_83C5AB70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4848
	ctx.r3.s64 = ctx.r11.s64 + 4848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5AB7C"))) PPC_WEAK_FUNC(sub_83C5AB7C);
PPC_FUNC_IMPL(__imp__sub_83C5AB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5AB80"))) PPC_WEAK_FUNC(sub_83C5AB80);
PPC_FUNC_IMPL(__imp__sub_83C5AB80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4856
	ctx.r3.s64 = ctx.r11.s64 + 4856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5AB8C"))) PPC_WEAK_FUNC(sub_83C5AB8C);
PPC_FUNC_IMPL(__imp__sub_83C5AB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5AB90"))) PPC_WEAK_FUNC(sub_83C5AB90);
PPC_FUNC_IMPL(__imp__sub_83C5AB90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4864
	ctx.r3.s64 = ctx.r11.s64 + 4864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5AB9C"))) PPC_WEAK_FUNC(sub_83C5AB9C);
PPC_FUNC_IMPL(__imp__sub_83C5AB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5ABA0"))) PPC_WEAK_FUNC(sub_83C5ABA0);
PPC_FUNC_IMPL(__imp__sub_83C5ABA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4872
	ctx.r3.s64 = ctx.r11.s64 + 4872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5ABAC"))) PPC_WEAK_FUNC(sub_83C5ABAC);
PPC_FUNC_IMPL(__imp__sub_83C5ABAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5ABB0"))) PPC_WEAK_FUNC(sub_83C5ABB0);
PPC_FUNC_IMPL(__imp__sub_83C5ABB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4880
	ctx.r3.s64 = ctx.r11.s64 + 4880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5ABBC"))) PPC_WEAK_FUNC(sub_83C5ABBC);
PPC_FUNC_IMPL(__imp__sub_83C5ABBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5ABC0"))) PPC_WEAK_FUNC(sub_83C5ABC0);
PPC_FUNC_IMPL(__imp__sub_83C5ABC0) {
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
	// addi r3,r11,-14072
	ctx.r3.s64 = ctx.r11.s64 + -14072;
	// bl 0x83523120
	ctx.lr = 0x83C5ABD8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,4888
	ctx.r3.s64 = ctx.r10.s64 + 4888;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5ABE4;
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

__attribute__((alias("__imp__sub_83C5ABF4"))) PPC_WEAK_FUNC(sub_83C5ABF4);
PPC_FUNC_IMPL(__imp__sub_83C5ABF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5ABF8"))) PPC_WEAK_FUNC(sub_83C5ABF8);
PPC_FUNC_IMPL(__imp__sub_83C5ABF8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14056
	ctx.r7.s64 = ctx.r8.s64 + -14056;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14056(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14056);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14056(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14056, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5AC20"))) PPC_WEAK_FUNC(sub_83C5AC20);
PPC_FUNC_IMPL(__imp__sub_83C5AC20) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,21352
	ctx.r6.s64 = ctx.r7.s64 + 21352;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,21280(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 21280);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-14056(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -14056);
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
	// std r9,21352(r7)
	PPC_STORE_U64(ctx.r7.u32 + 21352, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5AC68"))) PPC_WEAK_FUNC(sub_83C5AC68);
PPC_FUNC_IMPL(__imp__sub_83C5AC68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4904
	ctx.r3.s64 = ctx.r11.s64 + 4904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5AC74"))) PPC_WEAK_FUNC(sub_83C5AC74);
PPC_FUNC_IMPL(__imp__sub_83C5AC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5AC78"))) PPC_WEAK_FUNC(sub_83C5AC78);
PPC_FUNC_IMPL(__imp__sub_83C5AC78) {
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
	// addi r3,r11,-14048
	ctx.r3.s64 = ctx.r11.s64 + -14048;
	// bl 0x8259af80
	ctx.lr = 0x83C5AC90;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,4920
	ctx.r3.s64 = ctx.r10.s64 + 4920;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5AC9C;
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

__attribute__((alias("__imp__sub_83C5ACAC"))) PPC_WEAK_FUNC(sub_83C5ACAC);
PPC_FUNC_IMPL(__imp__sub_83C5ACAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5ACB0"))) PPC_WEAK_FUNC(sub_83C5ACB0);
PPC_FUNC_IMPL(__imp__sub_83C5ACB0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-14068
	ctx.r11.s64 = ctx.r8.s64 + -14068;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,21328(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21328);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,4912
	ctx.r3.s64 = ctx.r6.s64 + 4912;
	// stw r10,-14068(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14068, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5ACE0"))) PPC_WEAK_FUNC(sub_83C5ACE0);
PPC_FUNC_IMPL(__imp__sub_83C5ACE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4928
	ctx.r3.s64 = ctx.r11.s64 + 4928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5ACEC"))) PPC_WEAK_FUNC(sub_83C5ACEC);
PPC_FUNC_IMPL(__imp__sub_83C5ACEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5ACF0"))) PPC_WEAK_FUNC(sub_83C5ACF0);
PPC_FUNC_IMPL(__imp__sub_83C5ACF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4936
	ctx.r3.s64 = ctx.r11.s64 + 4936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5ACFC"))) PPC_WEAK_FUNC(sub_83C5ACFC);
PPC_FUNC_IMPL(__imp__sub_83C5ACFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5AD00"))) PPC_WEAK_FUNC(sub_83C5AD00);
PPC_FUNC_IMPL(__imp__sub_83C5AD00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4944
	ctx.r3.s64 = ctx.r11.s64 + 4944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5AD0C"))) PPC_WEAK_FUNC(sub_83C5AD0C);
PPC_FUNC_IMPL(__imp__sub_83C5AD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5AD10"))) PPC_WEAK_FUNC(sub_83C5AD10);
PPC_FUNC_IMPL(__imp__sub_83C5AD10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4952
	ctx.r3.s64 = ctx.r11.s64 + 4952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5AD1C"))) PPC_WEAK_FUNC(sub_83C5AD1C);
PPC_FUNC_IMPL(__imp__sub_83C5AD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5AD20"))) PPC_WEAK_FUNC(sub_83C5AD20);
PPC_FUNC_IMPL(__imp__sub_83C5AD20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4960
	ctx.r3.s64 = ctx.r11.s64 + 4960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5AD2C"))) PPC_WEAK_FUNC(sub_83C5AD2C);
PPC_FUNC_IMPL(__imp__sub_83C5AD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5AD30"))) PPC_WEAK_FUNC(sub_83C5AD30);
PPC_FUNC_IMPL(__imp__sub_83C5AD30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4968
	ctx.r3.s64 = ctx.r11.s64 + 4968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5AD3C"))) PPC_WEAK_FUNC(sub_83C5AD3C);
PPC_FUNC_IMPL(__imp__sub_83C5AD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5AD40"))) PPC_WEAK_FUNC(sub_83C5AD40);
PPC_FUNC_IMPL(__imp__sub_83C5AD40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4976
	ctx.r3.s64 = ctx.r11.s64 + 4976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5AD4C"))) PPC_WEAK_FUNC(sub_83C5AD4C);
PPC_FUNC_IMPL(__imp__sub_83C5AD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5AD50"))) PPC_WEAK_FUNC(sub_83C5AD50);
PPC_FUNC_IMPL(__imp__sub_83C5AD50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4984
	ctx.r3.s64 = ctx.r11.s64 + 4984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5AD5C"))) PPC_WEAK_FUNC(sub_83C5AD5C);
PPC_FUNC_IMPL(__imp__sub_83C5AD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5AD60"))) PPC_WEAK_FUNC(sub_83C5AD60);
PPC_FUNC_IMPL(__imp__sub_83C5AD60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,4992
	ctx.r3.s64 = ctx.r11.s64 + 4992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5AD6C"))) PPC_WEAK_FUNC(sub_83C5AD6C);
PPC_FUNC_IMPL(__imp__sub_83C5AD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5AD70"))) PPC_WEAK_FUNC(sub_83C5AD70);
PPC_FUNC_IMPL(__imp__sub_83C5AD70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5000
	ctx.r3.s64 = ctx.r11.s64 + 5000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5AD7C"))) PPC_WEAK_FUNC(sub_83C5AD7C);
PPC_FUNC_IMPL(__imp__sub_83C5AD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5AD80"))) PPC_WEAK_FUNC(sub_83C5AD80);
PPC_FUNC_IMPL(__imp__sub_83C5AD80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5008
	ctx.r3.s64 = ctx.r11.s64 + 5008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5AD8C"))) PPC_WEAK_FUNC(sub_83C5AD8C);
PPC_FUNC_IMPL(__imp__sub_83C5AD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5AD90"))) PPC_WEAK_FUNC(sub_83C5AD90);
PPC_FUNC_IMPL(__imp__sub_83C5AD90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5016
	ctx.r3.s64 = ctx.r11.s64 + 5016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5AD9C"))) PPC_WEAK_FUNC(sub_83C5AD9C);
PPC_FUNC_IMPL(__imp__sub_83C5AD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5ADA0"))) PPC_WEAK_FUNC(sub_83C5ADA0);
PPC_FUNC_IMPL(__imp__sub_83C5ADA0) {
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
	// addi r3,r11,-13704
	ctx.r3.s64 = ctx.r11.s64 + -13704;
	// bl 0x83523120
	ctx.lr = 0x83C5ADB8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,5024
	ctx.r3.s64 = ctx.r10.s64 + 5024;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5ADC4;
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

__attribute__((alias("__imp__sub_83C5ADD4"))) PPC_WEAK_FUNC(sub_83C5ADD4);
PPC_FUNC_IMPL(__imp__sub_83C5ADD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5ADD8"))) PPC_WEAK_FUNC(sub_83C5ADD8);
PPC_FUNC_IMPL(__imp__sub_83C5ADD8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13688
	ctx.r7.s64 = ctx.r8.s64 + -13688;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13688(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13688);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13688(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13688, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5AE00"))) PPC_WEAK_FUNC(sub_83C5AE00);
PPC_FUNC_IMPL(__imp__sub_83C5AE00) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,21480
	ctx.r6.s64 = ctx.r7.s64 + 21480;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,21408(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 21408);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-13688(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -13688);
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
	// std r9,21480(r7)
	PPC_STORE_U64(ctx.r7.u32 + 21480, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5AE48"))) PPC_WEAK_FUNC(sub_83C5AE48);
PPC_FUNC_IMPL(__imp__sub_83C5AE48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5040
	ctx.r3.s64 = ctx.r11.s64 + 5040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5AE54"))) PPC_WEAK_FUNC(sub_83C5AE54);
PPC_FUNC_IMPL(__imp__sub_83C5AE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5AE58"))) PPC_WEAK_FUNC(sub_83C5AE58);
PPC_FUNC_IMPL(__imp__sub_83C5AE58) {
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
	// addi r3,r11,-13680
	ctx.r3.s64 = ctx.r11.s64 + -13680;
	// bl 0x8259af80
	ctx.lr = 0x83C5AE70;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,5056
	ctx.r3.s64 = ctx.r10.s64 + 5056;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5AE7C;
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

__attribute__((alias("__imp__sub_83C5AE8C"))) PPC_WEAK_FUNC(sub_83C5AE8C);
PPC_FUNC_IMPL(__imp__sub_83C5AE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5AE90"))) PPC_WEAK_FUNC(sub_83C5AE90);
PPC_FUNC_IMPL(__imp__sub_83C5AE90) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-13700
	ctx.r11.s64 = ctx.r8.s64 + -13700;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,21456(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21456);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,5048
	ctx.r3.s64 = ctx.r6.s64 + 5048;
	// stw r10,-13700(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13700, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5AEC0"))) PPC_WEAK_FUNC(sub_83C5AEC0);
PPC_FUNC_IMPL(__imp__sub_83C5AEC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5064
	ctx.r3.s64 = ctx.r11.s64 + 5064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5AECC"))) PPC_WEAK_FUNC(sub_83C5AECC);
PPC_FUNC_IMPL(__imp__sub_83C5AECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5AED0"))) PPC_WEAK_FUNC(sub_83C5AED0);
PPC_FUNC_IMPL(__imp__sub_83C5AED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5072
	ctx.r3.s64 = ctx.r11.s64 + 5072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5AEDC"))) PPC_WEAK_FUNC(sub_83C5AEDC);
PPC_FUNC_IMPL(__imp__sub_83C5AEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5AEE0"))) PPC_WEAK_FUNC(sub_83C5AEE0);
PPC_FUNC_IMPL(__imp__sub_83C5AEE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5080
	ctx.r3.s64 = ctx.r11.s64 + 5080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5AEEC"))) PPC_WEAK_FUNC(sub_83C5AEEC);
PPC_FUNC_IMPL(__imp__sub_83C5AEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5AEF0"))) PPC_WEAK_FUNC(sub_83C5AEF0);
PPC_FUNC_IMPL(__imp__sub_83C5AEF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5088
	ctx.r3.s64 = ctx.r11.s64 + 5088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5AEFC"))) PPC_WEAK_FUNC(sub_83C5AEFC);
PPC_FUNC_IMPL(__imp__sub_83C5AEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5AF00"))) PPC_WEAK_FUNC(sub_83C5AF00);
PPC_FUNC_IMPL(__imp__sub_83C5AF00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5096
	ctx.r3.s64 = ctx.r11.s64 + 5096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5AF0C"))) PPC_WEAK_FUNC(sub_83C5AF0C);
PPC_FUNC_IMPL(__imp__sub_83C5AF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5AF10"))) PPC_WEAK_FUNC(sub_83C5AF10);
PPC_FUNC_IMPL(__imp__sub_83C5AF10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5104
	ctx.r3.s64 = ctx.r11.s64 + 5104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5AF1C"))) PPC_WEAK_FUNC(sub_83C5AF1C);
PPC_FUNC_IMPL(__imp__sub_83C5AF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5AF20"))) PPC_WEAK_FUNC(sub_83C5AF20);
PPC_FUNC_IMPL(__imp__sub_83C5AF20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5112
	ctx.r3.s64 = ctx.r11.s64 + 5112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5AF2C"))) PPC_WEAK_FUNC(sub_83C5AF2C);
PPC_FUNC_IMPL(__imp__sub_83C5AF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5AF30"))) PPC_WEAK_FUNC(sub_83C5AF30);
PPC_FUNC_IMPL(__imp__sub_83C5AF30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5120
	ctx.r3.s64 = ctx.r11.s64 + 5120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5AF3C"))) PPC_WEAK_FUNC(sub_83C5AF3C);
PPC_FUNC_IMPL(__imp__sub_83C5AF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5AF40"))) PPC_WEAK_FUNC(sub_83C5AF40);
PPC_FUNC_IMPL(__imp__sub_83C5AF40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5128
	ctx.r3.s64 = ctx.r11.s64 + 5128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5AF4C"))) PPC_WEAK_FUNC(sub_83C5AF4C);
PPC_FUNC_IMPL(__imp__sub_83C5AF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5AF50"))) PPC_WEAK_FUNC(sub_83C5AF50);
PPC_FUNC_IMPL(__imp__sub_83C5AF50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5136
	ctx.r3.s64 = ctx.r11.s64 + 5136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5AF5C"))) PPC_WEAK_FUNC(sub_83C5AF5C);
PPC_FUNC_IMPL(__imp__sub_83C5AF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5AF60"))) PPC_WEAK_FUNC(sub_83C5AF60);
PPC_FUNC_IMPL(__imp__sub_83C5AF60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5144
	ctx.r3.s64 = ctx.r11.s64 + 5144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5AF6C"))) PPC_WEAK_FUNC(sub_83C5AF6C);
PPC_FUNC_IMPL(__imp__sub_83C5AF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5AF70"))) PPC_WEAK_FUNC(sub_83C5AF70);
PPC_FUNC_IMPL(__imp__sub_83C5AF70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5152
	ctx.r3.s64 = ctx.r11.s64 + 5152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5AF7C"))) PPC_WEAK_FUNC(sub_83C5AF7C);
PPC_FUNC_IMPL(__imp__sub_83C5AF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5AF80"))) PPC_WEAK_FUNC(sub_83C5AF80);
PPC_FUNC_IMPL(__imp__sub_83C5AF80) {
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
	// addi r3,r11,-13336
	ctx.r3.s64 = ctx.r11.s64 + -13336;
	// bl 0x83523120
	ctx.lr = 0x83C5AF98;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,5160
	ctx.r3.s64 = ctx.r10.s64 + 5160;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5AFA4;
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

__attribute__((alias("__imp__sub_83C5AFB4"))) PPC_WEAK_FUNC(sub_83C5AFB4);
PPC_FUNC_IMPL(__imp__sub_83C5AFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5AFB8"))) PPC_WEAK_FUNC(sub_83C5AFB8);
PPC_FUNC_IMPL(__imp__sub_83C5AFB8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13320
	ctx.r7.s64 = ctx.r8.s64 + -13320;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13320(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13320);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13320(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13320, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5AFE0"))) PPC_WEAK_FUNC(sub_83C5AFE0);
PPC_FUNC_IMPL(__imp__sub_83C5AFE0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,21608
	ctx.r6.s64 = ctx.r7.s64 + 21608;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,21536(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 21536);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-13320(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -13320);
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
	// std r9,21608(r7)
	PPC_STORE_U64(ctx.r7.u32 + 21608, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5B028"))) PPC_WEAK_FUNC(sub_83C5B028);
PPC_FUNC_IMPL(__imp__sub_83C5B028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5176
	ctx.r3.s64 = ctx.r11.s64 + 5176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B034"))) PPC_WEAK_FUNC(sub_83C5B034);
PPC_FUNC_IMPL(__imp__sub_83C5B034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B038"))) PPC_WEAK_FUNC(sub_83C5B038);
PPC_FUNC_IMPL(__imp__sub_83C5B038) {
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
	// addi r3,r11,-13312
	ctx.r3.s64 = ctx.r11.s64 + -13312;
	// bl 0x8259af80
	ctx.lr = 0x83C5B050;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,5192
	ctx.r3.s64 = ctx.r10.s64 + 5192;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5B05C;
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

__attribute__((alias("__imp__sub_83C5B06C"))) PPC_WEAK_FUNC(sub_83C5B06C);
PPC_FUNC_IMPL(__imp__sub_83C5B06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B070"))) PPC_WEAK_FUNC(sub_83C5B070);
PPC_FUNC_IMPL(__imp__sub_83C5B070) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-13332
	ctx.r11.s64 = ctx.r8.s64 + -13332;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,21584(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21584);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,5184
	ctx.r3.s64 = ctx.r6.s64 + 5184;
	// stw r10,-13332(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13332, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B0A0"))) PPC_WEAK_FUNC(sub_83C5B0A0);
PPC_FUNC_IMPL(__imp__sub_83C5B0A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5200
	ctx.r3.s64 = ctx.r11.s64 + 5200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B0AC"))) PPC_WEAK_FUNC(sub_83C5B0AC);
PPC_FUNC_IMPL(__imp__sub_83C5B0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B0B0"))) PPC_WEAK_FUNC(sub_83C5B0B0);
PPC_FUNC_IMPL(__imp__sub_83C5B0B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5208
	ctx.r3.s64 = ctx.r11.s64 + 5208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B0BC"))) PPC_WEAK_FUNC(sub_83C5B0BC);
PPC_FUNC_IMPL(__imp__sub_83C5B0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B0C0"))) PPC_WEAK_FUNC(sub_83C5B0C0);
PPC_FUNC_IMPL(__imp__sub_83C5B0C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5216
	ctx.r3.s64 = ctx.r11.s64 + 5216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B0CC"))) PPC_WEAK_FUNC(sub_83C5B0CC);
PPC_FUNC_IMPL(__imp__sub_83C5B0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B0D0"))) PPC_WEAK_FUNC(sub_83C5B0D0);
PPC_FUNC_IMPL(__imp__sub_83C5B0D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5224
	ctx.r3.s64 = ctx.r11.s64 + 5224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B0DC"))) PPC_WEAK_FUNC(sub_83C5B0DC);
PPC_FUNC_IMPL(__imp__sub_83C5B0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B0E0"))) PPC_WEAK_FUNC(sub_83C5B0E0);
PPC_FUNC_IMPL(__imp__sub_83C5B0E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5232
	ctx.r3.s64 = ctx.r11.s64 + 5232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B0EC"))) PPC_WEAK_FUNC(sub_83C5B0EC);
PPC_FUNC_IMPL(__imp__sub_83C5B0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B0F0"))) PPC_WEAK_FUNC(sub_83C5B0F0);
PPC_FUNC_IMPL(__imp__sub_83C5B0F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5240
	ctx.r3.s64 = ctx.r11.s64 + 5240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B0FC"))) PPC_WEAK_FUNC(sub_83C5B0FC);
PPC_FUNC_IMPL(__imp__sub_83C5B0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B100"))) PPC_WEAK_FUNC(sub_83C5B100);
PPC_FUNC_IMPL(__imp__sub_83C5B100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5248
	ctx.r3.s64 = ctx.r11.s64 + 5248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B10C"))) PPC_WEAK_FUNC(sub_83C5B10C);
PPC_FUNC_IMPL(__imp__sub_83C5B10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B110"))) PPC_WEAK_FUNC(sub_83C5B110);
PPC_FUNC_IMPL(__imp__sub_83C5B110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5256
	ctx.r3.s64 = ctx.r11.s64 + 5256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B11C"))) PPC_WEAK_FUNC(sub_83C5B11C);
PPC_FUNC_IMPL(__imp__sub_83C5B11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5B120"))) PPC_WEAK_FUNC(sub_83C5B120);
PPC_FUNC_IMPL(__imp__sub_83C5B120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,5264
	ctx.r3.s64 = ctx.r11.s64 + 5264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5B12C"))) PPC_WEAK_FUNC(sub_83C5B12C);
PPC_FUNC_IMPL(__imp__sub_83C5B12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

