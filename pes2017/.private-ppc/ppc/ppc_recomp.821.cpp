#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C6A180"))) PPC_WEAK_FUNC(sub_83C6A180);
PPC_FUNC_IMPL(__imp__sub_83C6A180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23288
	ctx.r3.s64 = ctx.r11.s64 + 23288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A18C"))) PPC_WEAK_FUNC(sub_83C6A18C);
PPC_FUNC_IMPL(__imp__sub_83C6A18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A190"))) PPC_WEAK_FUNC(sub_83C6A190);
PPC_FUNC_IMPL(__imp__sub_83C6A190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23296
	ctx.r3.s64 = ctx.r11.s64 + 23296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A19C"))) PPC_WEAK_FUNC(sub_83C6A19C);
PPC_FUNC_IMPL(__imp__sub_83C6A19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A1A0"))) PPC_WEAK_FUNC(sub_83C6A1A0);
PPC_FUNC_IMPL(__imp__sub_83C6A1A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23304
	ctx.r3.s64 = ctx.r11.s64 + 23304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A1AC"))) PPC_WEAK_FUNC(sub_83C6A1AC);
PPC_FUNC_IMPL(__imp__sub_83C6A1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A1B0"))) PPC_WEAK_FUNC(sub_83C6A1B0);
PPC_FUNC_IMPL(__imp__sub_83C6A1B0) {
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
	// addi r3,r11,32384
	ctx.r3.s64 = ctx.r11.s64 + 32384;
	// bl 0x83523120
	ctx.lr = 0x83C6A1C8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,23312
	ctx.r3.s64 = ctx.r10.s64 + 23312;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6A1D4;
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

__attribute__((alias("__imp__sub_83C6A1E4"))) PPC_WEAK_FUNC(sub_83C6A1E4);
PPC_FUNC_IMPL(__imp__sub_83C6A1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A1E8"))) PPC_WEAK_FUNC(sub_83C6A1E8);
PPC_FUNC_IMPL(__imp__sub_83C6A1E8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,32400
	ctx.r7.s64 = ctx.r8.s64 + 32400;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,32400(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32400);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,32400(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32400, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6A210"))) PPC_WEAK_FUNC(sub_83C6A210);
PPC_FUNC_IMPL(__imp__sub_83C6A210) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-26112
	ctx.r6.s64 = ctx.r7.s64 + -26112;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-26184(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -26184);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,32400(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32400);
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
	// std r9,-26112(r7)
	PPC_STORE_U64(ctx.r7.u32 + -26112, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6A258"))) PPC_WEAK_FUNC(sub_83C6A258);
PPC_FUNC_IMPL(__imp__sub_83C6A258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23328
	ctx.r3.s64 = ctx.r11.s64 + 23328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A264"))) PPC_WEAK_FUNC(sub_83C6A264);
PPC_FUNC_IMPL(__imp__sub_83C6A264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A268"))) PPC_WEAK_FUNC(sub_83C6A268);
PPC_FUNC_IMPL(__imp__sub_83C6A268) {
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
	// addi r3,r11,32408
	ctx.r3.s64 = ctx.r11.s64 + 32408;
	// bl 0x8259af80
	ctx.lr = 0x83C6A280;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,23344
	ctx.r3.s64 = ctx.r10.s64 + 23344;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6A28C;
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

__attribute__((alias("__imp__sub_83C6A29C"))) PPC_WEAK_FUNC(sub_83C6A29C);
PPC_FUNC_IMPL(__imp__sub_83C6A29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A2A0"))) PPC_WEAK_FUNC(sub_83C6A2A0);
PPC_FUNC_IMPL(__imp__sub_83C6A2A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,32388
	ctx.r11.s64 = ctx.r8.s64 + 32388;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-26136(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26136);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,23336
	ctx.r3.s64 = ctx.r6.s64 + 23336;
	// stw r10,32388(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32388, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A2D0"))) PPC_WEAK_FUNC(sub_83C6A2D0);
PPC_FUNC_IMPL(__imp__sub_83C6A2D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23352
	ctx.r3.s64 = ctx.r11.s64 + 23352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A2DC"))) PPC_WEAK_FUNC(sub_83C6A2DC);
PPC_FUNC_IMPL(__imp__sub_83C6A2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A2E0"))) PPC_WEAK_FUNC(sub_83C6A2E0);
PPC_FUNC_IMPL(__imp__sub_83C6A2E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23360
	ctx.r3.s64 = ctx.r11.s64 + 23360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A2EC"))) PPC_WEAK_FUNC(sub_83C6A2EC);
PPC_FUNC_IMPL(__imp__sub_83C6A2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A2F0"))) PPC_WEAK_FUNC(sub_83C6A2F0);
PPC_FUNC_IMPL(__imp__sub_83C6A2F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23368
	ctx.r3.s64 = ctx.r11.s64 + 23368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A2FC"))) PPC_WEAK_FUNC(sub_83C6A2FC);
PPC_FUNC_IMPL(__imp__sub_83C6A2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A300"))) PPC_WEAK_FUNC(sub_83C6A300);
PPC_FUNC_IMPL(__imp__sub_83C6A300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23376
	ctx.r3.s64 = ctx.r11.s64 + 23376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A30C"))) PPC_WEAK_FUNC(sub_83C6A30C);
PPC_FUNC_IMPL(__imp__sub_83C6A30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A310"))) PPC_WEAK_FUNC(sub_83C6A310);
PPC_FUNC_IMPL(__imp__sub_83C6A310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23384
	ctx.r3.s64 = ctx.r11.s64 + 23384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A31C"))) PPC_WEAK_FUNC(sub_83C6A31C);
PPC_FUNC_IMPL(__imp__sub_83C6A31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A320"))) PPC_WEAK_FUNC(sub_83C6A320);
PPC_FUNC_IMPL(__imp__sub_83C6A320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23392
	ctx.r3.s64 = ctx.r11.s64 + 23392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A32C"))) PPC_WEAK_FUNC(sub_83C6A32C);
PPC_FUNC_IMPL(__imp__sub_83C6A32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A330"))) PPC_WEAK_FUNC(sub_83C6A330);
PPC_FUNC_IMPL(__imp__sub_83C6A330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23400
	ctx.r3.s64 = ctx.r11.s64 + 23400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A33C"))) PPC_WEAK_FUNC(sub_83C6A33C);
PPC_FUNC_IMPL(__imp__sub_83C6A33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A340"))) PPC_WEAK_FUNC(sub_83C6A340);
PPC_FUNC_IMPL(__imp__sub_83C6A340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23408
	ctx.r3.s64 = ctx.r11.s64 + 23408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A34C"))) PPC_WEAK_FUNC(sub_83C6A34C);
PPC_FUNC_IMPL(__imp__sub_83C6A34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A350"))) PPC_WEAK_FUNC(sub_83C6A350);
PPC_FUNC_IMPL(__imp__sub_83C6A350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23416
	ctx.r3.s64 = ctx.r11.s64 + 23416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A35C"))) PPC_WEAK_FUNC(sub_83C6A35C);
PPC_FUNC_IMPL(__imp__sub_83C6A35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A360"))) PPC_WEAK_FUNC(sub_83C6A360);
PPC_FUNC_IMPL(__imp__sub_83C6A360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23424
	ctx.r3.s64 = ctx.r11.s64 + 23424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A36C"))) PPC_WEAK_FUNC(sub_83C6A36C);
PPC_FUNC_IMPL(__imp__sub_83C6A36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A370"))) PPC_WEAK_FUNC(sub_83C6A370);
PPC_FUNC_IMPL(__imp__sub_83C6A370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23432
	ctx.r3.s64 = ctx.r11.s64 + 23432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A37C"))) PPC_WEAK_FUNC(sub_83C6A37C);
PPC_FUNC_IMPL(__imp__sub_83C6A37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A380"))) PPC_WEAK_FUNC(sub_83C6A380);
PPC_FUNC_IMPL(__imp__sub_83C6A380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23440
	ctx.r3.s64 = ctx.r11.s64 + 23440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A38C"))) PPC_WEAK_FUNC(sub_83C6A38C);
PPC_FUNC_IMPL(__imp__sub_83C6A38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A390"))) PPC_WEAK_FUNC(sub_83C6A390);
PPC_FUNC_IMPL(__imp__sub_83C6A390) {
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
	// addi r3,r11,32752
	ctx.r3.s64 = ctx.r11.s64 + 32752;
	// bl 0x83523120
	ctx.lr = 0x83C6A3A8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,23448
	ctx.r3.s64 = ctx.r10.s64 + 23448;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6A3B4;
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

__attribute__((alias("__imp__sub_83C6A3C4"))) PPC_WEAK_FUNC(sub_83C6A3C4);
PPC_FUNC_IMPL(__imp__sub_83C6A3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A3C8"))) PPC_WEAK_FUNC(sub_83C6A3C8);
PPC_FUNC_IMPL(__imp__sub_83C6A3C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-32768
	ctx.r7.s64 = ctx.r8.s64 + -32768;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-32768(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32768);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-32768(r8)
	PPC_STORE_U32(ctx.r8.u32 + -32768, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6A3F0"))) PPC_WEAK_FUNC(sub_83C6A3F0);
PPC_FUNC_IMPL(__imp__sub_83C6A3F0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-25964
	ctx.r6.s64 = ctx.r7.s64 + -25964;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-26036(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -26036);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-32768(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -32768);
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
	// std r9,-25964(r7)
	PPC_STORE_U64(ctx.r7.u32 + -25964, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6A438"))) PPC_WEAK_FUNC(sub_83C6A438);
PPC_FUNC_IMPL(__imp__sub_83C6A438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23464
	ctx.r3.s64 = ctx.r11.s64 + 23464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A444"))) PPC_WEAK_FUNC(sub_83C6A444);
PPC_FUNC_IMPL(__imp__sub_83C6A444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A448"))) PPC_WEAK_FUNC(sub_83C6A448);
PPC_FUNC_IMPL(__imp__sub_83C6A448) {
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
	// addi r3,r11,-32760
	ctx.r3.s64 = ctx.r11.s64 + -32760;
	// bl 0x8259af80
	ctx.lr = 0x83C6A460;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,23480
	ctx.r3.s64 = ctx.r10.s64 + 23480;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6A46C;
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

__attribute__((alias("__imp__sub_83C6A47C"))) PPC_WEAK_FUNC(sub_83C6A47C);
PPC_FUNC_IMPL(__imp__sub_83C6A47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A480"))) PPC_WEAK_FUNC(sub_83C6A480);
PPC_FUNC_IMPL(__imp__sub_83C6A480) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,32756
	ctx.r11.s64 = ctx.r8.s64 + 32756;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-25988(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25988);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,23472
	ctx.r3.s64 = ctx.r6.s64 + 23472;
	// stw r10,32756(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32756, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A4B0"))) PPC_WEAK_FUNC(sub_83C6A4B0);
PPC_FUNC_IMPL(__imp__sub_83C6A4B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23488
	ctx.r3.s64 = ctx.r11.s64 + 23488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A4BC"))) PPC_WEAK_FUNC(sub_83C6A4BC);
PPC_FUNC_IMPL(__imp__sub_83C6A4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A4C0"))) PPC_WEAK_FUNC(sub_83C6A4C0);
PPC_FUNC_IMPL(__imp__sub_83C6A4C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23496
	ctx.r3.s64 = ctx.r11.s64 + 23496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A4CC"))) PPC_WEAK_FUNC(sub_83C6A4CC);
PPC_FUNC_IMPL(__imp__sub_83C6A4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A4D0"))) PPC_WEAK_FUNC(sub_83C6A4D0);
PPC_FUNC_IMPL(__imp__sub_83C6A4D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A4DC"))) PPC_WEAK_FUNC(sub_83C6A4DC);
PPC_FUNC_IMPL(__imp__sub_83C6A4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A4E0"))) PPC_WEAK_FUNC(sub_83C6A4E0);
PPC_FUNC_IMPL(__imp__sub_83C6A4E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23512
	ctx.r3.s64 = ctx.r11.s64 + 23512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A4EC"))) PPC_WEAK_FUNC(sub_83C6A4EC);
PPC_FUNC_IMPL(__imp__sub_83C6A4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A4F0"))) PPC_WEAK_FUNC(sub_83C6A4F0);
PPC_FUNC_IMPL(__imp__sub_83C6A4F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23520
	ctx.r3.s64 = ctx.r11.s64 + 23520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A4FC"))) PPC_WEAK_FUNC(sub_83C6A4FC);
PPC_FUNC_IMPL(__imp__sub_83C6A4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A500"))) PPC_WEAK_FUNC(sub_83C6A500);
PPC_FUNC_IMPL(__imp__sub_83C6A500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23528
	ctx.r3.s64 = ctx.r11.s64 + 23528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A50C"))) PPC_WEAK_FUNC(sub_83C6A50C);
PPC_FUNC_IMPL(__imp__sub_83C6A50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A510"))) PPC_WEAK_FUNC(sub_83C6A510);
PPC_FUNC_IMPL(__imp__sub_83C6A510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23536
	ctx.r3.s64 = ctx.r11.s64 + 23536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A51C"))) PPC_WEAK_FUNC(sub_83C6A51C);
PPC_FUNC_IMPL(__imp__sub_83C6A51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A520"))) PPC_WEAK_FUNC(sub_83C6A520);
PPC_FUNC_IMPL(__imp__sub_83C6A520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23544
	ctx.r3.s64 = ctx.r11.s64 + 23544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A52C"))) PPC_WEAK_FUNC(sub_83C6A52C);
PPC_FUNC_IMPL(__imp__sub_83C6A52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A530"))) PPC_WEAK_FUNC(sub_83C6A530);
PPC_FUNC_IMPL(__imp__sub_83C6A530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23552
	ctx.r3.s64 = ctx.r11.s64 + 23552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A53C"))) PPC_WEAK_FUNC(sub_83C6A53C);
PPC_FUNC_IMPL(__imp__sub_83C6A53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A540"))) PPC_WEAK_FUNC(sub_83C6A540);
PPC_FUNC_IMPL(__imp__sub_83C6A540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23560
	ctx.r3.s64 = ctx.r11.s64 + 23560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A54C"))) PPC_WEAK_FUNC(sub_83C6A54C);
PPC_FUNC_IMPL(__imp__sub_83C6A54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A550"))) PPC_WEAK_FUNC(sub_83C6A550);
PPC_FUNC_IMPL(__imp__sub_83C6A550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23568
	ctx.r3.s64 = ctx.r11.s64 + 23568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A55C"))) PPC_WEAK_FUNC(sub_83C6A55C);
PPC_FUNC_IMPL(__imp__sub_83C6A55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A560"))) PPC_WEAK_FUNC(sub_83C6A560);
PPC_FUNC_IMPL(__imp__sub_83C6A560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23576
	ctx.r3.s64 = ctx.r11.s64 + 23576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A56C"))) PPC_WEAK_FUNC(sub_83C6A56C);
PPC_FUNC_IMPL(__imp__sub_83C6A56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A570"))) PPC_WEAK_FUNC(sub_83C6A570);
PPC_FUNC_IMPL(__imp__sub_83C6A570) {
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
	// addi r3,r11,-32416
	ctx.r3.s64 = ctx.r11.s64 + -32416;
	// bl 0x83523120
	ctx.lr = 0x83C6A588;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,23584
	ctx.r3.s64 = ctx.r10.s64 + 23584;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6A594;
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

__attribute__((alias("__imp__sub_83C6A5A4"))) PPC_WEAK_FUNC(sub_83C6A5A4);
PPC_FUNC_IMPL(__imp__sub_83C6A5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A5A8"))) PPC_WEAK_FUNC(sub_83C6A5A8);
PPC_FUNC_IMPL(__imp__sub_83C6A5A8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-32400
	ctx.r7.s64 = ctx.r8.s64 + -32400;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-32400(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32400);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-32400(r8)
	PPC_STORE_U32(ctx.r8.u32 + -32400, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6A5D0"))) PPC_WEAK_FUNC(sub_83C6A5D0);
PPC_FUNC_IMPL(__imp__sub_83C6A5D0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-25836
	ctx.r6.s64 = ctx.r7.s64 + -25836;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-25908(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -25908);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-32400(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -32400);
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
	// std r9,-25836(r7)
	PPC_STORE_U64(ctx.r7.u32 + -25836, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6A618"))) PPC_WEAK_FUNC(sub_83C6A618);
PPC_FUNC_IMPL(__imp__sub_83C6A618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23600
	ctx.r3.s64 = ctx.r11.s64 + 23600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A624"))) PPC_WEAK_FUNC(sub_83C6A624);
PPC_FUNC_IMPL(__imp__sub_83C6A624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A628"))) PPC_WEAK_FUNC(sub_83C6A628);
PPC_FUNC_IMPL(__imp__sub_83C6A628) {
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
	// addi r3,r11,-32392
	ctx.r3.s64 = ctx.r11.s64 + -32392;
	// bl 0x8259af80
	ctx.lr = 0x83C6A640;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,23616
	ctx.r3.s64 = ctx.r10.s64 + 23616;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6A64C;
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

__attribute__((alias("__imp__sub_83C6A65C"))) PPC_WEAK_FUNC(sub_83C6A65C);
PPC_FUNC_IMPL(__imp__sub_83C6A65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A660"))) PPC_WEAK_FUNC(sub_83C6A660);
PPC_FUNC_IMPL(__imp__sub_83C6A660) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-32412
	ctx.r11.s64 = ctx.r8.s64 + -32412;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-25860(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25860);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,23608
	ctx.r3.s64 = ctx.r6.s64 + 23608;
	// stw r10,-32412(r8)
	PPC_STORE_U32(ctx.r8.u32 + -32412, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A690"))) PPC_WEAK_FUNC(sub_83C6A690);
PPC_FUNC_IMPL(__imp__sub_83C6A690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23624
	ctx.r3.s64 = ctx.r11.s64 + 23624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A69C"))) PPC_WEAK_FUNC(sub_83C6A69C);
PPC_FUNC_IMPL(__imp__sub_83C6A69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A6A0"))) PPC_WEAK_FUNC(sub_83C6A6A0);
PPC_FUNC_IMPL(__imp__sub_83C6A6A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23632
	ctx.r3.s64 = ctx.r11.s64 + 23632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A6AC"))) PPC_WEAK_FUNC(sub_83C6A6AC);
PPC_FUNC_IMPL(__imp__sub_83C6A6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A6B0"))) PPC_WEAK_FUNC(sub_83C6A6B0);
PPC_FUNC_IMPL(__imp__sub_83C6A6B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23640
	ctx.r3.s64 = ctx.r11.s64 + 23640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A6BC"))) PPC_WEAK_FUNC(sub_83C6A6BC);
PPC_FUNC_IMPL(__imp__sub_83C6A6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A6C0"))) PPC_WEAK_FUNC(sub_83C6A6C0);
PPC_FUNC_IMPL(__imp__sub_83C6A6C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23648
	ctx.r3.s64 = ctx.r11.s64 + 23648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A6CC"))) PPC_WEAK_FUNC(sub_83C6A6CC);
PPC_FUNC_IMPL(__imp__sub_83C6A6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A6D0"))) PPC_WEAK_FUNC(sub_83C6A6D0);
PPC_FUNC_IMPL(__imp__sub_83C6A6D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23656
	ctx.r3.s64 = ctx.r11.s64 + 23656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A6DC"))) PPC_WEAK_FUNC(sub_83C6A6DC);
PPC_FUNC_IMPL(__imp__sub_83C6A6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A6E0"))) PPC_WEAK_FUNC(sub_83C6A6E0);
PPC_FUNC_IMPL(__imp__sub_83C6A6E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23664
	ctx.r3.s64 = ctx.r11.s64 + 23664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A6EC"))) PPC_WEAK_FUNC(sub_83C6A6EC);
PPC_FUNC_IMPL(__imp__sub_83C6A6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A6F0"))) PPC_WEAK_FUNC(sub_83C6A6F0);
PPC_FUNC_IMPL(__imp__sub_83C6A6F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23672
	ctx.r3.s64 = ctx.r11.s64 + 23672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A6FC"))) PPC_WEAK_FUNC(sub_83C6A6FC);
PPC_FUNC_IMPL(__imp__sub_83C6A6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A700"))) PPC_WEAK_FUNC(sub_83C6A700);
PPC_FUNC_IMPL(__imp__sub_83C6A700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23680
	ctx.r3.s64 = ctx.r11.s64 + 23680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A70C"))) PPC_WEAK_FUNC(sub_83C6A70C);
PPC_FUNC_IMPL(__imp__sub_83C6A70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A710"))) PPC_WEAK_FUNC(sub_83C6A710);
PPC_FUNC_IMPL(__imp__sub_83C6A710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23688
	ctx.r3.s64 = ctx.r11.s64 + 23688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A71C"))) PPC_WEAK_FUNC(sub_83C6A71C);
PPC_FUNC_IMPL(__imp__sub_83C6A71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A720"))) PPC_WEAK_FUNC(sub_83C6A720);
PPC_FUNC_IMPL(__imp__sub_83C6A720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23696
	ctx.r3.s64 = ctx.r11.s64 + 23696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A72C"))) PPC_WEAK_FUNC(sub_83C6A72C);
PPC_FUNC_IMPL(__imp__sub_83C6A72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A730"))) PPC_WEAK_FUNC(sub_83C6A730);
PPC_FUNC_IMPL(__imp__sub_83C6A730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23704
	ctx.r3.s64 = ctx.r11.s64 + 23704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A73C"))) PPC_WEAK_FUNC(sub_83C6A73C);
PPC_FUNC_IMPL(__imp__sub_83C6A73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A740"))) PPC_WEAK_FUNC(sub_83C6A740);
PPC_FUNC_IMPL(__imp__sub_83C6A740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23712
	ctx.r3.s64 = ctx.r11.s64 + 23712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A74C"))) PPC_WEAK_FUNC(sub_83C6A74C);
PPC_FUNC_IMPL(__imp__sub_83C6A74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A750"))) PPC_WEAK_FUNC(sub_83C6A750);
PPC_FUNC_IMPL(__imp__sub_83C6A750) {
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
	// addi r3,r11,-32048
	ctx.r3.s64 = ctx.r11.s64 + -32048;
	// bl 0x83523120
	ctx.lr = 0x83C6A768;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,23720
	ctx.r3.s64 = ctx.r10.s64 + 23720;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6A774;
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

__attribute__((alias("__imp__sub_83C6A784"))) PPC_WEAK_FUNC(sub_83C6A784);
PPC_FUNC_IMPL(__imp__sub_83C6A784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A788"))) PPC_WEAK_FUNC(sub_83C6A788);
PPC_FUNC_IMPL(__imp__sub_83C6A788) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-32032
	ctx.r7.s64 = ctx.r8.s64 + -32032;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-32032(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32032);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-32032(r8)
	PPC_STORE_U32(ctx.r8.u32 + -32032, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6A7B0"))) PPC_WEAK_FUNC(sub_83C6A7B0);
PPC_FUNC_IMPL(__imp__sub_83C6A7B0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-25708
	ctx.r6.s64 = ctx.r7.s64 + -25708;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-25780(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -25780);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-32032(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -32032);
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
	// std r9,-25708(r7)
	PPC_STORE_U64(ctx.r7.u32 + -25708, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6A7F8"))) PPC_WEAK_FUNC(sub_83C6A7F8);
PPC_FUNC_IMPL(__imp__sub_83C6A7F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23736
	ctx.r3.s64 = ctx.r11.s64 + 23736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A804"))) PPC_WEAK_FUNC(sub_83C6A804);
PPC_FUNC_IMPL(__imp__sub_83C6A804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A808"))) PPC_WEAK_FUNC(sub_83C6A808);
PPC_FUNC_IMPL(__imp__sub_83C6A808) {
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
	// addi r3,r11,-32024
	ctx.r3.s64 = ctx.r11.s64 + -32024;
	// bl 0x8259af80
	ctx.lr = 0x83C6A820;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,23752
	ctx.r3.s64 = ctx.r10.s64 + 23752;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6A82C;
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

__attribute__((alias("__imp__sub_83C6A83C"))) PPC_WEAK_FUNC(sub_83C6A83C);
PPC_FUNC_IMPL(__imp__sub_83C6A83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A840"))) PPC_WEAK_FUNC(sub_83C6A840);
PPC_FUNC_IMPL(__imp__sub_83C6A840) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-32044
	ctx.r11.s64 = ctx.r8.s64 + -32044;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-25732(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25732);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,23744
	ctx.r3.s64 = ctx.r6.s64 + 23744;
	// stw r10,-32044(r8)
	PPC_STORE_U32(ctx.r8.u32 + -32044, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A870"))) PPC_WEAK_FUNC(sub_83C6A870);
PPC_FUNC_IMPL(__imp__sub_83C6A870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23760
	ctx.r3.s64 = ctx.r11.s64 + 23760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A87C"))) PPC_WEAK_FUNC(sub_83C6A87C);
PPC_FUNC_IMPL(__imp__sub_83C6A87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A880"))) PPC_WEAK_FUNC(sub_83C6A880);
PPC_FUNC_IMPL(__imp__sub_83C6A880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23768
	ctx.r3.s64 = ctx.r11.s64 + 23768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A88C"))) PPC_WEAK_FUNC(sub_83C6A88C);
PPC_FUNC_IMPL(__imp__sub_83C6A88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A890"))) PPC_WEAK_FUNC(sub_83C6A890);
PPC_FUNC_IMPL(__imp__sub_83C6A890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23776
	ctx.r3.s64 = ctx.r11.s64 + 23776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A89C"))) PPC_WEAK_FUNC(sub_83C6A89C);
PPC_FUNC_IMPL(__imp__sub_83C6A89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A8A0"))) PPC_WEAK_FUNC(sub_83C6A8A0);
PPC_FUNC_IMPL(__imp__sub_83C6A8A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23784
	ctx.r3.s64 = ctx.r11.s64 + 23784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A8AC"))) PPC_WEAK_FUNC(sub_83C6A8AC);
PPC_FUNC_IMPL(__imp__sub_83C6A8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A8B0"))) PPC_WEAK_FUNC(sub_83C6A8B0);
PPC_FUNC_IMPL(__imp__sub_83C6A8B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23792
	ctx.r3.s64 = ctx.r11.s64 + 23792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A8BC"))) PPC_WEAK_FUNC(sub_83C6A8BC);
PPC_FUNC_IMPL(__imp__sub_83C6A8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A8C0"))) PPC_WEAK_FUNC(sub_83C6A8C0);
PPC_FUNC_IMPL(__imp__sub_83C6A8C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23800
	ctx.r3.s64 = ctx.r11.s64 + 23800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A8CC"))) PPC_WEAK_FUNC(sub_83C6A8CC);
PPC_FUNC_IMPL(__imp__sub_83C6A8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A8D0"))) PPC_WEAK_FUNC(sub_83C6A8D0);
PPC_FUNC_IMPL(__imp__sub_83C6A8D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23808
	ctx.r3.s64 = ctx.r11.s64 + 23808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A8DC"))) PPC_WEAK_FUNC(sub_83C6A8DC);
PPC_FUNC_IMPL(__imp__sub_83C6A8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A8E0"))) PPC_WEAK_FUNC(sub_83C6A8E0);
PPC_FUNC_IMPL(__imp__sub_83C6A8E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23816
	ctx.r3.s64 = ctx.r11.s64 + 23816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A8EC"))) PPC_WEAK_FUNC(sub_83C6A8EC);
PPC_FUNC_IMPL(__imp__sub_83C6A8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A8F0"))) PPC_WEAK_FUNC(sub_83C6A8F0);
PPC_FUNC_IMPL(__imp__sub_83C6A8F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23824
	ctx.r3.s64 = ctx.r11.s64 + 23824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A8FC"))) PPC_WEAK_FUNC(sub_83C6A8FC);
PPC_FUNC_IMPL(__imp__sub_83C6A8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A900"))) PPC_WEAK_FUNC(sub_83C6A900);
PPC_FUNC_IMPL(__imp__sub_83C6A900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23832
	ctx.r3.s64 = ctx.r11.s64 + 23832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A90C"))) PPC_WEAK_FUNC(sub_83C6A90C);
PPC_FUNC_IMPL(__imp__sub_83C6A90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A910"))) PPC_WEAK_FUNC(sub_83C6A910);
PPC_FUNC_IMPL(__imp__sub_83C6A910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23840
	ctx.r3.s64 = ctx.r11.s64 + 23840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A91C"))) PPC_WEAK_FUNC(sub_83C6A91C);
PPC_FUNC_IMPL(__imp__sub_83C6A91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A920"))) PPC_WEAK_FUNC(sub_83C6A920);
PPC_FUNC_IMPL(__imp__sub_83C6A920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23848
	ctx.r3.s64 = ctx.r11.s64 + 23848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A92C"))) PPC_WEAK_FUNC(sub_83C6A92C);
PPC_FUNC_IMPL(__imp__sub_83C6A92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A930"))) PPC_WEAK_FUNC(sub_83C6A930);
PPC_FUNC_IMPL(__imp__sub_83C6A930) {
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
	// addi r3,r11,-31680
	ctx.r3.s64 = ctx.r11.s64 + -31680;
	// bl 0x83523120
	ctx.lr = 0x83C6A948;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,23856
	ctx.r3.s64 = ctx.r10.s64 + 23856;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6A954;
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

__attribute__((alias("__imp__sub_83C6A964"))) PPC_WEAK_FUNC(sub_83C6A964);
PPC_FUNC_IMPL(__imp__sub_83C6A964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A968"))) PPC_WEAK_FUNC(sub_83C6A968);
PPC_FUNC_IMPL(__imp__sub_83C6A968) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-31664
	ctx.r7.s64 = ctx.r8.s64 + -31664;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-31664(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31664);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-31664(r8)
	PPC_STORE_U32(ctx.r8.u32 + -31664, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6A990"))) PPC_WEAK_FUNC(sub_83C6A990);
PPC_FUNC_IMPL(__imp__sub_83C6A990) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-25580
	ctx.r6.s64 = ctx.r7.s64 + -25580;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-25652(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -25652);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-31664(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -31664);
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
	// std r9,-25580(r7)
	PPC_STORE_U64(ctx.r7.u32 + -25580, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6A9D8"))) PPC_WEAK_FUNC(sub_83C6A9D8);
PPC_FUNC_IMPL(__imp__sub_83C6A9D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23872
	ctx.r3.s64 = ctx.r11.s64 + 23872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6A9E4"))) PPC_WEAK_FUNC(sub_83C6A9E4);
PPC_FUNC_IMPL(__imp__sub_83C6A9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6A9E8"))) PPC_WEAK_FUNC(sub_83C6A9E8);
PPC_FUNC_IMPL(__imp__sub_83C6A9E8) {
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
	// addi r3,r11,-31656
	ctx.r3.s64 = ctx.r11.s64 + -31656;
	// bl 0x8259af80
	ctx.lr = 0x83C6AA00;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,23888
	ctx.r3.s64 = ctx.r10.s64 + 23888;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6AA0C;
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

__attribute__((alias("__imp__sub_83C6AA1C"))) PPC_WEAK_FUNC(sub_83C6AA1C);
PPC_FUNC_IMPL(__imp__sub_83C6AA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6AA20"))) PPC_WEAK_FUNC(sub_83C6AA20);
PPC_FUNC_IMPL(__imp__sub_83C6AA20) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-31676
	ctx.r11.s64 = ctx.r8.s64 + -31676;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-25604(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25604);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,23880
	ctx.r3.s64 = ctx.r6.s64 + 23880;
	// stw r10,-31676(r8)
	PPC_STORE_U32(ctx.r8.u32 + -31676, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6AA50"))) PPC_WEAK_FUNC(sub_83C6AA50);
PPC_FUNC_IMPL(__imp__sub_83C6AA50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23896
	ctx.r3.s64 = ctx.r11.s64 + 23896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6AA5C"))) PPC_WEAK_FUNC(sub_83C6AA5C);
PPC_FUNC_IMPL(__imp__sub_83C6AA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6AA60"))) PPC_WEAK_FUNC(sub_83C6AA60);
PPC_FUNC_IMPL(__imp__sub_83C6AA60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23904
	ctx.r3.s64 = ctx.r11.s64 + 23904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6AA6C"))) PPC_WEAK_FUNC(sub_83C6AA6C);
PPC_FUNC_IMPL(__imp__sub_83C6AA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6AA70"))) PPC_WEAK_FUNC(sub_83C6AA70);
PPC_FUNC_IMPL(__imp__sub_83C6AA70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23912
	ctx.r3.s64 = ctx.r11.s64 + 23912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6AA7C"))) PPC_WEAK_FUNC(sub_83C6AA7C);
PPC_FUNC_IMPL(__imp__sub_83C6AA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6AA80"))) PPC_WEAK_FUNC(sub_83C6AA80);
PPC_FUNC_IMPL(__imp__sub_83C6AA80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23920
	ctx.r3.s64 = ctx.r11.s64 + 23920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6AA8C"))) PPC_WEAK_FUNC(sub_83C6AA8C);
PPC_FUNC_IMPL(__imp__sub_83C6AA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6AA90"))) PPC_WEAK_FUNC(sub_83C6AA90);
PPC_FUNC_IMPL(__imp__sub_83C6AA90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23928
	ctx.r3.s64 = ctx.r11.s64 + 23928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6AA9C"))) PPC_WEAK_FUNC(sub_83C6AA9C);
PPC_FUNC_IMPL(__imp__sub_83C6AA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6AAA0"))) PPC_WEAK_FUNC(sub_83C6AAA0);
PPC_FUNC_IMPL(__imp__sub_83C6AAA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23936
	ctx.r3.s64 = ctx.r11.s64 + 23936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6AAAC"))) PPC_WEAK_FUNC(sub_83C6AAAC);
PPC_FUNC_IMPL(__imp__sub_83C6AAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6AAB0"))) PPC_WEAK_FUNC(sub_83C6AAB0);
PPC_FUNC_IMPL(__imp__sub_83C6AAB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23944
	ctx.r3.s64 = ctx.r11.s64 + 23944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6AABC"))) PPC_WEAK_FUNC(sub_83C6AABC);
PPC_FUNC_IMPL(__imp__sub_83C6AABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6AAC0"))) PPC_WEAK_FUNC(sub_83C6AAC0);
PPC_FUNC_IMPL(__imp__sub_83C6AAC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23952
	ctx.r3.s64 = ctx.r11.s64 + 23952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6AACC"))) PPC_WEAK_FUNC(sub_83C6AACC);
PPC_FUNC_IMPL(__imp__sub_83C6AACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6AAD0"))) PPC_WEAK_FUNC(sub_83C6AAD0);
PPC_FUNC_IMPL(__imp__sub_83C6AAD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23960
	ctx.r3.s64 = ctx.r11.s64 + 23960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6AADC"))) PPC_WEAK_FUNC(sub_83C6AADC);
PPC_FUNC_IMPL(__imp__sub_83C6AADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6AAE0"))) PPC_WEAK_FUNC(sub_83C6AAE0);
PPC_FUNC_IMPL(__imp__sub_83C6AAE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23968
	ctx.r3.s64 = ctx.r11.s64 + 23968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6AAEC"))) PPC_WEAK_FUNC(sub_83C6AAEC);
PPC_FUNC_IMPL(__imp__sub_83C6AAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6AAF0"))) PPC_WEAK_FUNC(sub_83C6AAF0);
PPC_FUNC_IMPL(__imp__sub_83C6AAF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23976
	ctx.r3.s64 = ctx.r11.s64 + 23976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6AAFC"))) PPC_WEAK_FUNC(sub_83C6AAFC);
PPC_FUNC_IMPL(__imp__sub_83C6AAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6AB00"))) PPC_WEAK_FUNC(sub_83C6AB00);
PPC_FUNC_IMPL(__imp__sub_83C6AB00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,23984
	ctx.r3.s64 = ctx.r11.s64 + 23984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6AB0C"))) PPC_WEAK_FUNC(sub_83C6AB0C);
PPC_FUNC_IMPL(__imp__sub_83C6AB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6AB10"))) PPC_WEAK_FUNC(sub_83C6AB10);
PPC_FUNC_IMPL(__imp__sub_83C6AB10) {
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
	// addi r3,r11,-31312
	ctx.r3.s64 = ctx.r11.s64 + -31312;
	// bl 0x83523120
	ctx.lr = 0x83C6AB28;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,23992
	ctx.r3.s64 = ctx.r10.s64 + 23992;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6AB34;
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

__attribute__((alias("__imp__sub_83C6AB44"))) PPC_WEAK_FUNC(sub_83C6AB44);
PPC_FUNC_IMPL(__imp__sub_83C6AB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6AB48"))) PPC_WEAK_FUNC(sub_83C6AB48);
PPC_FUNC_IMPL(__imp__sub_83C6AB48) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-31296
	ctx.r7.s64 = ctx.r8.s64 + -31296;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-31296(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31296);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-31296(r8)
	PPC_STORE_U32(ctx.r8.u32 + -31296, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6AB70"))) PPC_WEAK_FUNC(sub_83C6AB70);
PPC_FUNC_IMPL(__imp__sub_83C6AB70) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-25452
	ctx.r6.s64 = ctx.r7.s64 + -25452;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-25524(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -25524);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-31296(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -31296);
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
	// std r9,-25452(r7)
	PPC_STORE_U64(ctx.r7.u32 + -25452, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6ABB8"))) PPC_WEAK_FUNC(sub_83C6ABB8);
PPC_FUNC_IMPL(__imp__sub_83C6ABB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24008
	ctx.r3.s64 = ctx.r11.s64 + 24008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6ABC4"))) PPC_WEAK_FUNC(sub_83C6ABC4);
PPC_FUNC_IMPL(__imp__sub_83C6ABC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6ABC8"))) PPC_WEAK_FUNC(sub_83C6ABC8);
PPC_FUNC_IMPL(__imp__sub_83C6ABC8) {
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
	// addi r3,r11,-31288
	ctx.r3.s64 = ctx.r11.s64 + -31288;
	// bl 0x8259af80
	ctx.lr = 0x83C6ABE0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,24024
	ctx.r3.s64 = ctx.r10.s64 + 24024;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6ABEC;
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

__attribute__((alias("__imp__sub_83C6ABFC"))) PPC_WEAK_FUNC(sub_83C6ABFC);
PPC_FUNC_IMPL(__imp__sub_83C6ABFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6AC00"))) PPC_WEAK_FUNC(sub_83C6AC00);
PPC_FUNC_IMPL(__imp__sub_83C6AC00) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-31308
	ctx.r11.s64 = ctx.r8.s64 + -31308;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-25476(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25476);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,24016
	ctx.r3.s64 = ctx.r6.s64 + 24016;
	// stw r10,-31308(r8)
	PPC_STORE_U32(ctx.r8.u32 + -31308, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6AC30"))) PPC_WEAK_FUNC(sub_83C6AC30);
PPC_FUNC_IMPL(__imp__sub_83C6AC30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24032
	ctx.r3.s64 = ctx.r11.s64 + 24032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6AC3C"))) PPC_WEAK_FUNC(sub_83C6AC3C);
PPC_FUNC_IMPL(__imp__sub_83C6AC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6AC40"))) PPC_WEAK_FUNC(sub_83C6AC40);
PPC_FUNC_IMPL(__imp__sub_83C6AC40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24040
	ctx.r3.s64 = ctx.r11.s64 + 24040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6AC4C"))) PPC_WEAK_FUNC(sub_83C6AC4C);
PPC_FUNC_IMPL(__imp__sub_83C6AC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6AC50"))) PPC_WEAK_FUNC(sub_83C6AC50);
PPC_FUNC_IMPL(__imp__sub_83C6AC50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24048
	ctx.r3.s64 = ctx.r11.s64 + 24048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6AC5C"))) PPC_WEAK_FUNC(sub_83C6AC5C);
PPC_FUNC_IMPL(__imp__sub_83C6AC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6AC60"))) PPC_WEAK_FUNC(sub_83C6AC60);
PPC_FUNC_IMPL(__imp__sub_83C6AC60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24056
	ctx.r3.s64 = ctx.r11.s64 + 24056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6AC6C"))) PPC_WEAK_FUNC(sub_83C6AC6C);
PPC_FUNC_IMPL(__imp__sub_83C6AC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6AC70"))) PPC_WEAK_FUNC(sub_83C6AC70);
PPC_FUNC_IMPL(__imp__sub_83C6AC70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24064
	ctx.r3.s64 = ctx.r11.s64 + 24064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6AC7C"))) PPC_WEAK_FUNC(sub_83C6AC7C);
PPC_FUNC_IMPL(__imp__sub_83C6AC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6AC80"))) PPC_WEAK_FUNC(sub_83C6AC80);
PPC_FUNC_IMPL(__imp__sub_83C6AC80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24072
	ctx.r3.s64 = ctx.r11.s64 + 24072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6AC8C"))) PPC_WEAK_FUNC(sub_83C6AC8C);
PPC_FUNC_IMPL(__imp__sub_83C6AC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6AC90"))) PPC_WEAK_FUNC(sub_83C6AC90);
PPC_FUNC_IMPL(__imp__sub_83C6AC90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24080
	ctx.r3.s64 = ctx.r11.s64 + 24080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6AC9C"))) PPC_WEAK_FUNC(sub_83C6AC9C);
PPC_FUNC_IMPL(__imp__sub_83C6AC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6ACA0"))) PPC_WEAK_FUNC(sub_83C6ACA0);
PPC_FUNC_IMPL(__imp__sub_83C6ACA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24088
	ctx.r3.s64 = ctx.r11.s64 + 24088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6ACAC"))) PPC_WEAK_FUNC(sub_83C6ACAC);
PPC_FUNC_IMPL(__imp__sub_83C6ACAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6ACB0"))) PPC_WEAK_FUNC(sub_83C6ACB0);
PPC_FUNC_IMPL(__imp__sub_83C6ACB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24096
	ctx.r3.s64 = ctx.r11.s64 + 24096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6ACBC"))) PPC_WEAK_FUNC(sub_83C6ACBC);
PPC_FUNC_IMPL(__imp__sub_83C6ACBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6ACC0"))) PPC_WEAK_FUNC(sub_83C6ACC0);
PPC_FUNC_IMPL(__imp__sub_83C6ACC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24104
	ctx.r3.s64 = ctx.r11.s64 + 24104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6ACCC"))) PPC_WEAK_FUNC(sub_83C6ACCC);
PPC_FUNC_IMPL(__imp__sub_83C6ACCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6ACD0"))) PPC_WEAK_FUNC(sub_83C6ACD0);
PPC_FUNC_IMPL(__imp__sub_83C6ACD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24112
	ctx.r3.s64 = ctx.r11.s64 + 24112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6ACDC"))) PPC_WEAK_FUNC(sub_83C6ACDC);
PPC_FUNC_IMPL(__imp__sub_83C6ACDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6ACE0"))) PPC_WEAK_FUNC(sub_83C6ACE0);
PPC_FUNC_IMPL(__imp__sub_83C6ACE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24120
	ctx.r3.s64 = ctx.r11.s64 + 24120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6ACEC"))) PPC_WEAK_FUNC(sub_83C6ACEC);
PPC_FUNC_IMPL(__imp__sub_83C6ACEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6ACF0"))) PPC_WEAK_FUNC(sub_83C6ACF0);
PPC_FUNC_IMPL(__imp__sub_83C6ACF0) {
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
	// addi r3,r11,-30944
	ctx.r3.s64 = ctx.r11.s64 + -30944;
	// bl 0x83523120
	ctx.lr = 0x83C6AD08;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,24128
	ctx.r3.s64 = ctx.r10.s64 + 24128;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6AD14;
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

__attribute__((alias("__imp__sub_83C6AD24"))) PPC_WEAK_FUNC(sub_83C6AD24);
PPC_FUNC_IMPL(__imp__sub_83C6AD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6AD28"))) PPC_WEAK_FUNC(sub_83C6AD28);
PPC_FUNC_IMPL(__imp__sub_83C6AD28) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-30928
	ctx.r7.s64 = ctx.r8.s64 + -30928;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-30928(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30928);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-30928(r8)
	PPC_STORE_U32(ctx.r8.u32 + -30928, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6AD50"))) PPC_WEAK_FUNC(sub_83C6AD50);
PPC_FUNC_IMPL(__imp__sub_83C6AD50) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-25324
	ctx.r6.s64 = ctx.r7.s64 + -25324;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-25396(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -25396);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-30928(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -30928);
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
	// std r9,-25324(r7)
	PPC_STORE_U64(ctx.r7.u32 + -25324, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6AD98"))) PPC_WEAK_FUNC(sub_83C6AD98);
PPC_FUNC_IMPL(__imp__sub_83C6AD98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24144
	ctx.r3.s64 = ctx.r11.s64 + 24144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6ADA4"))) PPC_WEAK_FUNC(sub_83C6ADA4);
PPC_FUNC_IMPL(__imp__sub_83C6ADA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6ADA8"))) PPC_WEAK_FUNC(sub_83C6ADA8);
PPC_FUNC_IMPL(__imp__sub_83C6ADA8) {
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
	// addi r3,r11,-30920
	ctx.r3.s64 = ctx.r11.s64 + -30920;
	// bl 0x8259af80
	ctx.lr = 0x83C6ADC0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,24160
	ctx.r3.s64 = ctx.r10.s64 + 24160;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6ADCC;
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

__attribute__((alias("__imp__sub_83C6ADDC"))) PPC_WEAK_FUNC(sub_83C6ADDC);
PPC_FUNC_IMPL(__imp__sub_83C6ADDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6ADE0"))) PPC_WEAK_FUNC(sub_83C6ADE0);
PPC_FUNC_IMPL(__imp__sub_83C6ADE0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-30940
	ctx.r11.s64 = ctx.r8.s64 + -30940;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-25348(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25348);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,24152
	ctx.r3.s64 = ctx.r6.s64 + 24152;
	// stw r10,-30940(r8)
	PPC_STORE_U32(ctx.r8.u32 + -30940, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6AE10"))) PPC_WEAK_FUNC(sub_83C6AE10);
PPC_FUNC_IMPL(__imp__sub_83C6AE10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24168
	ctx.r3.s64 = ctx.r11.s64 + 24168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6AE1C"))) PPC_WEAK_FUNC(sub_83C6AE1C);
PPC_FUNC_IMPL(__imp__sub_83C6AE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6AE20"))) PPC_WEAK_FUNC(sub_83C6AE20);
PPC_FUNC_IMPL(__imp__sub_83C6AE20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24176
	ctx.r3.s64 = ctx.r11.s64 + 24176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6AE2C"))) PPC_WEAK_FUNC(sub_83C6AE2C);
PPC_FUNC_IMPL(__imp__sub_83C6AE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6AE30"))) PPC_WEAK_FUNC(sub_83C6AE30);
PPC_FUNC_IMPL(__imp__sub_83C6AE30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24184
	ctx.r3.s64 = ctx.r11.s64 + 24184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6AE3C"))) PPC_WEAK_FUNC(sub_83C6AE3C);
PPC_FUNC_IMPL(__imp__sub_83C6AE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6AE40"))) PPC_WEAK_FUNC(sub_83C6AE40);
PPC_FUNC_IMPL(__imp__sub_83C6AE40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24192
	ctx.r3.s64 = ctx.r11.s64 + 24192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6AE4C"))) PPC_WEAK_FUNC(sub_83C6AE4C);
PPC_FUNC_IMPL(__imp__sub_83C6AE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6AE50"))) PPC_WEAK_FUNC(sub_83C6AE50);
PPC_FUNC_IMPL(__imp__sub_83C6AE50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24200
	ctx.r3.s64 = ctx.r11.s64 + 24200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6AE5C"))) PPC_WEAK_FUNC(sub_83C6AE5C);
PPC_FUNC_IMPL(__imp__sub_83C6AE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6AE60"))) PPC_WEAK_FUNC(sub_83C6AE60);
PPC_FUNC_IMPL(__imp__sub_83C6AE60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24208
	ctx.r3.s64 = ctx.r11.s64 + 24208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6AE6C"))) PPC_WEAK_FUNC(sub_83C6AE6C);
PPC_FUNC_IMPL(__imp__sub_83C6AE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6AE70"))) PPC_WEAK_FUNC(sub_83C6AE70);
PPC_FUNC_IMPL(__imp__sub_83C6AE70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24216
	ctx.r3.s64 = ctx.r11.s64 + 24216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6AE7C"))) PPC_WEAK_FUNC(sub_83C6AE7C);
PPC_FUNC_IMPL(__imp__sub_83C6AE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6AE80"))) PPC_WEAK_FUNC(sub_83C6AE80);
PPC_FUNC_IMPL(__imp__sub_83C6AE80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24224
	ctx.r3.s64 = ctx.r11.s64 + 24224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6AE8C"))) PPC_WEAK_FUNC(sub_83C6AE8C);
PPC_FUNC_IMPL(__imp__sub_83C6AE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6AE90"))) PPC_WEAK_FUNC(sub_83C6AE90);
PPC_FUNC_IMPL(__imp__sub_83C6AE90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24232
	ctx.r3.s64 = ctx.r11.s64 + 24232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6AE9C"))) PPC_WEAK_FUNC(sub_83C6AE9C);
PPC_FUNC_IMPL(__imp__sub_83C6AE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6AEA0"))) PPC_WEAK_FUNC(sub_83C6AEA0);
PPC_FUNC_IMPL(__imp__sub_83C6AEA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24240
	ctx.r3.s64 = ctx.r11.s64 + 24240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6AEAC"))) PPC_WEAK_FUNC(sub_83C6AEAC);
PPC_FUNC_IMPL(__imp__sub_83C6AEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6AEB0"))) PPC_WEAK_FUNC(sub_83C6AEB0);
PPC_FUNC_IMPL(__imp__sub_83C6AEB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24248
	ctx.r3.s64 = ctx.r11.s64 + 24248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6AEBC"))) PPC_WEAK_FUNC(sub_83C6AEBC);
PPC_FUNC_IMPL(__imp__sub_83C6AEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6AEC0"))) PPC_WEAK_FUNC(sub_83C6AEC0);
PPC_FUNC_IMPL(__imp__sub_83C6AEC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24256
	ctx.r3.s64 = ctx.r11.s64 + 24256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6AECC"))) PPC_WEAK_FUNC(sub_83C6AECC);
PPC_FUNC_IMPL(__imp__sub_83C6AECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6AED0"))) PPC_WEAK_FUNC(sub_83C6AED0);
PPC_FUNC_IMPL(__imp__sub_83C6AED0) {
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
	// addi r3,r11,-30576
	ctx.r3.s64 = ctx.r11.s64 + -30576;
	// bl 0x83523120
	ctx.lr = 0x83C6AEE8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,24264
	ctx.r3.s64 = ctx.r10.s64 + 24264;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6AEF4;
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

__attribute__((alias("__imp__sub_83C6AF04"))) PPC_WEAK_FUNC(sub_83C6AF04);
PPC_FUNC_IMPL(__imp__sub_83C6AF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6AF08"))) PPC_WEAK_FUNC(sub_83C6AF08);
PPC_FUNC_IMPL(__imp__sub_83C6AF08) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-30560
	ctx.r7.s64 = ctx.r8.s64 + -30560;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-30560(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30560);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-30560(r8)
	PPC_STORE_U32(ctx.r8.u32 + -30560, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6AF30"))) PPC_WEAK_FUNC(sub_83C6AF30);
PPC_FUNC_IMPL(__imp__sub_83C6AF30) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-25196
	ctx.r6.s64 = ctx.r7.s64 + -25196;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-25268(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -25268);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-30560(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -30560);
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
	// std r9,-25196(r7)
	PPC_STORE_U64(ctx.r7.u32 + -25196, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6AF78"))) PPC_WEAK_FUNC(sub_83C6AF78);
PPC_FUNC_IMPL(__imp__sub_83C6AF78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24280
	ctx.r3.s64 = ctx.r11.s64 + 24280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6AF84"))) PPC_WEAK_FUNC(sub_83C6AF84);
PPC_FUNC_IMPL(__imp__sub_83C6AF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6AF88"))) PPC_WEAK_FUNC(sub_83C6AF88);
PPC_FUNC_IMPL(__imp__sub_83C6AF88) {
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
	// addi r3,r11,-30552
	ctx.r3.s64 = ctx.r11.s64 + -30552;
	// bl 0x8259af80
	ctx.lr = 0x83C6AFA0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,24296
	ctx.r3.s64 = ctx.r10.s64 + 24296;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6AFAC;
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

__attribute__((alias("__imp__sub_83C6AFBC"))) PPC_WEAK_FUNC(sub_83C6AFBC);
PPC_FUNC_IMPL(__imp__sub_83C6AFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6AFC0"))) PPC_WEAK_FUNC(sub_83C6AFC0);
PPC_FUNC_IMPL(__imp__sub_83C6AFC0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-30572
	ctx.r11.s64 = ctx.r8.s64 + -30572;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-25220(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25220);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,24288
	ctx.r3.s64 = ctx.r6.s64 + 24288;
	// stw r10,-30572(r8)
	PPC_STORE_U32(ctx.r8.u32 + -30572, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6AFF0"))) PPC_WEAK_FUNC(sub_83C6AFF0);
PPC_FUNC_IMPL(__imp__sub_83C6AFF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24304
	ctx.r3.s64 = ctx.r11.s64 + 24304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6AFFC"))) PPC_WEAK_FUNC(sub_83C6AFFC);
PPC_FUNC_IMPL(__imp__sub_83C6AFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B000"))) PPC_WEAK_FUNC(sub_83C6B000);
PPC_FUNC_IMPL(__imp__sub_83C6B000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24312
	ctx.r3.s64 = ctx.r11.s64 + 24312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B00C"))) PPC_WEAK_FUNC(sub_83C6B00C);
PPC_FUNC_IMPL(__imp__sub_83C6B00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B010"))) PPC_WEAK_FUNC(sub_83C6B010);
PPC_FUNC_IMPL(__imp__sub_83C6B010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24320
	ctx.r3.s64 = ctx.r11.s64 + 24320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B01C"))) PPC_WEAK_FUNC(sub_83C6B01C);
PPC_FUNC_IMPL(__imp__sub_83C6B01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B020"))) PPC_WEAK_FUNC(sub_83C6B020);
PPC_FUNC_IMPL(__imp__sub_83C6B020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24328
	ctx.r3.s64 = ctx.r11.s64 + 24328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B02C"))) PPC_WEAK_FUNC(sub_83C6B02C);
PPC_FUNC_IMPL(__imp__sub_83C6B02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6B030"))) PPC_WEAK_FUNC(sub_83C6B030);
PPC_FUNC_IMPL(__imp__sub_83C6B030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,24336
	ctx.r3.s64 = ctx.r11.s64 + 24336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6B03C"))) PPC_WEAK_FUNC(sub_83C6B03C);
PPC_FUNC_IMPL(__imp__sub_83C6B03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

