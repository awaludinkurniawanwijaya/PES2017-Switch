#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C44BDC"))) PPC_WEAK_FUNC(sub_83C44BDC);
PPC_FUNC_IMPL(__imp__sub_83C44BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44BE0"))) PPC_WEAK_FUNC(sub_83C44BE0);
PPC_FUNC_IMPL(__imp__sub_83C44BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21584
	ctx.r3.s64 = ctx.r11.s64 + -21584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44BEC"))) PPC_WEAK_FUNC(sub_83C44BEC);
PPC_FUNC_IMPL(__imp__sub_83C44BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44BF0"))) PPC_WEAK_FUNC(sub_83C44BF0);
PPC_FUNC_IMPL(__imp__sub_83C44BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21576
	ctx.r3.s64 = ctx.r11.s64 + -21576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44BFC"))) PPC_WEAK_FUNC(sub_83C44BFC);
PPC_FUNC_IMPL(__imp__sub_83C44BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44C00"))) PPC_WEAK_FUNC(sub_83C44C00);
PPC_FUNC_IMPL(__imp__sub_83C44C00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21568
	ctx.r3.s64 = ctx.r11.s64 + -21568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44C0C"))) PPC_WEAK_FUNC(sub_83C44C0C);
PPC_FUNC_IMPL(__imp__sub_83C44C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44C10"))) PPC_WEAK_FUNC(sub_83C44C10);
PPC_FUNC_IMPL(__imp__sub_83C44C10) {
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
	// addi r3,r11,-15272
	ctx.r3.s64 = ctx.r11.s64 + -15272;
	// bl 0x83523120
	ctx.lr = 0x83C44C28;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-21560
	ctx.r3.s64 = ctx.r10.s64 + -21560;
	// bl 0x831cdcc8
	ctx.lr = 0x83C44C34;
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

__attribute__((alias("__imp__sub_83C44C44"))) PPC_WEAK_FUNC(sub_83C44C44);
PPC_FUNC_IMPL(__imp__sub_83C44C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44C48"))) PPC_WEAK_FUNC(sub_83C44C48);
PPC_FUNC_IMPL(__imp__sub_83C44C48) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-15256
	ctx.r7.s64 = ctx.r8.s64 + -15256;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-15256(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -15256);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-15256(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15256, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C44C70"))) PPC_WEAK_FUNC(sub_83C44C70);
PPC_FUNC_IMPL(__imp__sub_83C44C70) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-4064
	ctx.r6.s64 = ctx.r7.s64 + -4064;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-4136(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -4136);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-15256(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -15256);
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
	// std r9,-4064(r7)
	PPC_STORE_U64(ctx.r7.u32 + -4064, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C44CB8"))) PPC_WEAK_FUNC(sub_83C44CB8);
PPC_FUNC_IMPL(__imp__sub_83C44CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21544
	ctx.r3.s64 = ctx.r11.s64 + -21544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44CC4"))) PPC_WEAK_FUNC(sub_83C44CC4);
PPC_FUNC_IMPL(__imp__sub_83C44CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44CC8"))) PPC_WEAK_FUNC(sub_83C44CC8);
PPC_FUNC_IMPL(__imp__sub_83C44CC8) {
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
	// addi r3,r11,-15248
	ctx.r3.s64 = ctx.r11.s64 + -15248;
	// bl 0x8259af80
	ctx.lr = 0x83C44CE0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-21528
	ctx.r3.s64 = ctx.r10.s64 + -21528;
	// bl 0x831cdcc8
	ctx.lr = 0x83C44CEC;
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

__attribute__((alias("__imp__sub_83C44CFC"))) PPC_WEAK_FUNC(sub_83C44CFC);
PPC_FUNC_IMPL(__imp__sub_83C44CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44D00"))) PPC_WEAK_FUNC(sub_83C44D00);
PPC_FUNC_IMPL(__imp__sub_83C44D00) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-15268
	ctx.r11.s64 = ctx.r8.s64 + -15268;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-4088(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4088);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-21536
	ctx.r3.s64 = ctx.r6.s64 + -21536;
	// stw r10,-15268(r8)
	PPC_STORE_U32(ctx.r8.u32 + -15268, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44D30"))) PPC_WEAK_FUNC(sub_83C44D30);
PPC_FUNC_IMPL(__imp__sub_83C44D30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21520
	ctx.r3.s64 = ctx.r11.s64 + -21520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44D3C"))) PPC_WEAK_FUNC(sub_83C44D3C);
PPC_FUNC_IMPL(__imp__sub_83C44D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44D40"))) PPC_WEAK_FUNC(sub_83C44D40);
PPC_FUNC_IMPL(__imp__sub_83C44D40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21512
	ctx.r3.s64 = ctx.r11.s64 + -21512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44D4C"))) PPC_WEAK_FUNC(sub_83C44D4C);
PPC_FUNC_IMPL(__imp__sub_83C44D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44D50"))) PPC_WEAK_FUNC(sub_83C44D50);
PPC_FUNC_IMPL(__imp__sub_83C44D50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21504
	ctx.r3.s64 = ctx.r11.s64 + -21504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44D5C"))) PPC_WEAK_FUNC(sub_83C44D5C);
PPC_FUNC_IMPL(__imp__sub_83C44D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44D60"))) PPC_WEAK_FUNC(sub_83C44D60);
PPC_FUNC_IMPL(__imp__sub_83C44D60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21496
	ctx.r3.s64 = ctx.r11.s64 + -21496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44D6C"))) PPC_WEAK_FUNC(sub_83C44D6C);
PPC_FUNC_IMPL(__imp__sub_83C44D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44D70"))) PPC_WEAK_FUNC(sub_83C44D70);
PPC_FUNC_IMPL(__imp__sub_83C44D70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21488
	ctx.r3.s64 = ctx.r11.s64 + -21488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44D7C"))) PPC_WEAK_FUNC(sub_83C44D7C);
PPC_FUNC_IMPL(__imp__sub_83C44D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44D80"))) PPC_WEAK_FUNC(sub_83C44D80);
PPC_FUNC_IMPL(__imp__sub_83C44D80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21480
	ctx.r3.s64 = ctx.r11.s64 + -21480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44D8C"))) PPC_WEAK_FUNC(sub_83C44D8C);
PPC_FUNC_IMPL(__imp__sub_83C44D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44D90"))) PPC_WEAK_FUNC(sub_83C44D90);
PPC_FUNC_IMPL(__imp__sub_83C44D90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21472
	ctx.r3.s64 = ctx.r11.s64 + -21472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44D9C"))) PPC_WEAK_FUNC(sub_83C44D9C);
PPC_FUNC_IMPL(__imp__sub_83C44D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44DA0"))) PPC_WEAK_FUNC(sub_83C44DA0);
PPC_FUNC_IMPL(__imp__sub_83C44DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21464
	ctx.r3.s64 = ctx.r11.s64 + -21464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44DAC"))) PPC_WEAK_FUNC(sub_83C44DAC);
PPC_FUNC_IMPL(__imp__sub_83C44DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44DB0"))) PPC_WEAK_FUNC(sub_83C44DB0);
PPC_FUNC_IMPL(__imp__sub_83C44DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21456
	ctx.r3.s64 = ctx.r11.s64 + -21456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44DBC"))) PPC_WEAK_FUNC(sub_83C44DBC);
PPC_FUNC_IMPL(__imp__sub_83C44DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44DC0"))) PPC_WEAK_FUNC(sub_83C44DC0);
PPC_FUNC_IMPL(__imp__sub_83C44DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21448
	ctx.r3.s64 = ctx.r11.s64 + -21448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44DCC"))) PPC_WEAK_FUNC(sub_83C44DCC);
PPC_FUNC_IMPL(__imp__sub_83C44DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44DD0"))) PPC_WEAK_FUNC(sub_83C44DD0);
PPC_FUNC_IMPL(__imp__sub_83C44DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21440
	ctx.r3.s64 = ctx.r11.s64 + -21440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44DDC"))) PPC_WEAK_FUNC(sub_83C44DDC);
PPC_FUNC_IMPL(__imp__sub_83C44DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44DE0"))) PPC_WEAK_FUNC(sub_83C44DE0);
PPC_FUNC_IMPL(__imp__sub_83C44DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21432
	ctx.r3.s64 = ctx.r11.s64 + -21432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44DEC"))) PPC_WEAK_FUNC(sub_83C44DEC);
PPC_FUNC_IMPL(__imp__sub_83C44DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44DF0"))) PPC_WEAK_FUNC(sub_83C44DF0);
PPC_FUNC_IMPL(__imp__sub_83C44DF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21424
	ctx.r3.s64 = ctx.r11.s64 + -21424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44DFC"))) PPC_WEAK_FUNC(sub_83C44DFC);
PPC_FUNC_IMPL(__imp__sub_83C44DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44E00"))) PPC_WEAK_FUNC(sub_83C44E00);
PPC_FUNC_IMPL(__imp__sub_83C44E00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21416
	ctx.r3.s64 = ctx.r11.s64 + -21416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44E0C"))) PPC_WEAK_FUNC(sub_83C44E0C);
PPC_FUNC_IMPL(__imp__sub_83C44E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44E10"))) PPC_WEAK_FUNC(sub_83C44E10);
PPC_FUNC_IMPL(__imp__sub_83C44E10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21408
	ctx.r3.s64 = ctx.r11.s64 + -21408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44E1C"))) PPC_WEAK_FUNC(sub_83C44E1C);
PPC_FUNC_IMPL(__imp__sub_83C44E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44E20"))) PPC_WEAK_FUNC(sub_83C44E20);
PPC_FUNC_IMPL(__imp__sub_83C44E20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21400
	ctx.r3.s64 = ctx.r11.s64 + -21400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44E2C"))) PPC_WEAK_FUNC(sub_83C44E2C);
PPC_FUNC_IMPL(__imp__sub_83C44E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44E30"))) PPC_WEAK_FUNC(sub_83C44E30);
PPC_FUNC_IMPL(__imp__sub_83C44E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21392
	ctx.r3.s64 = ctx.r11.s64 + -21392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44E3C"))) PPC_WEAK_FUNC(sub_83C44E3C);
PPC_FUNC_IMPL(__imp__sub_83C44E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44E40"))) PPC_WEAK_FUNC(sub_83C44E40);
PPC_FUNC_IMPL(__imp__sub_83C44E40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21384
	ctx.r3.s64 = ctx.r11.s64 + -21384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44E4C"))) PPC_WEAK_FUNC(sub_83C44E4C);
PPC_FUNC_IMPL(__imp__sub_83C44E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44E50"))) PPC_WEAK_FUNC(sub_83C44E50);
PPC_FUNC_IMPL(__imp__sub_83C44E50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21376
	ctx.r3.s64 = ctx.r11.s64 + -21376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44E5C"))) PPC_WEAK_FUNC(sub_83C44E5C);
PPC_FUNC_IMPL(__imp__sub_83C44E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44E60"))) PPC_WEAK_FUNC(sub_83C44E60);
PPC_FUNC_IMPL(__imp__sub_83C44E60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21368
	ctx.r3.s64 = ctx.r11.s64 + -21368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44E6C"))) PPC_WEAK_FUNC(sub_83C44E6C);
PPC_FUNC_IMPL(__imp__sub_83C44E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44E70"))) PPC_WEAK_FUNC(sub_83C44E70);
PPC_FUNC_IMPL(__imp__sub_83C44E70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21360
	ctx.r3.s64 = ctx.r11.s64 + -21360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44E7C"))) PPC_WEAK_FUNC(sub_83C44E7C);
PPC_FUNC_IMPL(__imp__sub_83C44E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44E80"))) PPC_WEAK_FUNC(sub_83C44E80);
PPC_FUNC_IMPL(__imp__sub_83C44E80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21352
	ctx.r3.s64 = ctx.r11.s64 + -21352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44E8C"))) PPC_WEAK_FUNC(sub_83C44E8C);
PPC_FUNC_IMPL(__imp__sub_83C44E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44E90"))) PPC_WEAK_FUNC(sub_83C44E90);
PPC_FUNC_IMPL(__imp__sub_83C44E90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21344
	ctx.r3.s64 = ctx.r11.s64 + -21344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44E9C"))) PPC_WEAK_FUNC(sub_83C44E9C);
PPC_FUNC_IMPL(__imp__sub_83C44E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44EA0"))) PPC_WEAK_FUNC(sub_83C44EA0);
PPC_FUNC_IMPL(__imp__sub_83C44EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21336
	ctx.r3.s64 = ctx.r11.s64 + -21336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44EAC"))) PPC_WEAK_FUNC(sub_83C44EAC);
PPC_FUNC_IMPL(__imp__sub_83C44EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44EB0"))) PPC_WEAK_FUNC(sub_83C44EB0);
PPC_FUNC_IMPL(__imp__sub_83C44EB0) {
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
	// addi r3,r11,-14896
	ctx.r3.s64 = ctx.r11.s64 + -14896;
	// bl 0x83523120
	ctx.lr = 0x83C44EC8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-21328
	ctx.r3.s64 = ctx.r10.s64 + -21328;
	// bl 0x831cdcc8
	ctx.lr = 0x83C44ED4;
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

__attribute__((alias("__imp__sub_83C44EE4"))) PPC_WEAK_FUNC(sub_83C44EE4);
PPC_FUNC_IMPL(__imp__sub_83C44EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44EE8"))) PPC_WEAK_FUNC(sub_83C44EE8);
PPC_FUNC_IMPL(__imp__sub_83C44EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14880
	ctx.r7.s64 = ctx.r8.s64 + -14880;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14880(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14880);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14880(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14880, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C44F10"))) PPC_WEAK_FUNC(sub_83C44F10);
PPC_FUNC_IMPL(__imp__sub_83C44F10) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-3832
	ctx.r6.s64 = ctx.r7.s64 + -3832;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-3904(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -3904);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-14880(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -14880);
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
	// std r9,-3832(r7)
	PPC_STORE_U64(ctx.r7.u32 + -3832, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C44F58"))) PPC_WEAK_FUNC(sub_83C44F58);
PPC_FUNC_IMPL(__imp__sub_83C44F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21312
	ctx.r3.s64 = ctx.r11.s64 + -21312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44F64"))) PPC_WEAK_FUNC(sub_83C44F64);
PPC_FUNC_IMPL(__imp__sub_83C44F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44F68"))) PPC_WEAK_FUNC(sub_83C44F68);
PPC_FUNC_IMPL(__imp__sub_83C44F68) {
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
	// addi r3,r11,-14872
	ctx.r3.s64 = ctx.r11.s64 + -14872;
	// bl 0x8259af80
	ctx.lr = 0x83C44F80;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-21296
	ctx.r3.s64 = ctx.r10.s64 + -21296;
	// bl 0x831cdcc8
	ctx.lr = 0x83C44F8C;
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

__attribute__((alias("__imp__sub_83C44F9C"))) PPC_WEAK_FUNC(sub_83C44F9C);
PPC_FUNC_IMPL(__imp__sub_83C44F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44FA0"))) PPC_WEAK_FUNC(sub_83C44FA0);
PPC_FUNC_IMPL(__imp__sub_83C44FA0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-14892
	ctx.r11.s64 = ctx.r8.s64 + -14892;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-3856(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3856);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-21304
	ctx.r3.s64 = ctx.r6.s64 + -21304;
	// stw r10,-14892(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14892, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44FD0"))) PPC_WEAK_FUNC(sub_83C44FD0);
PPC_FUNC_IMPL(__imp__sub_83C44FD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21288
	ctx.r3.s64 = ctx.r11.s64 + -21288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44FDC"))) PPC_WEAK_FUNC(sub_83C44FDC);
PPC_FUNC_IMPL(__imp__sub_83C44FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44FE0"))) PPC_WEAK_FUNC(sub_83C44FE0);
PPC_FUNC_IMPL(__imp__sub_83C44FE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21280
	ctx.r3.s64 = ctx.r11.s64 + -21280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44FEC"))) PPC_WEAK_FUNC(sub_83C44FEC);
PPC_FUNC_IMPL(__imp__sub_83C44FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C44FF0"))) PPC_WEAK_FUNC(sub_83C44FF0);
PPC_FUNC_IMPL(__imp__sub_83C44FF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21272
	ctx.r3.s64 = ctx.r11.s64 + -21272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C44FFC"))) PPC_WEAK_FUNC(sub_83C44FFC);
PPC_FUNC_IMPL(__imp__sub_83C44FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45000"))) PPC_WEAK_FUNC(sub_83C45000);
PPC_FUNC_IMPL(__imp__sub_83C45000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21264
	ctx.r3.s64 = ctx.r11.s64 + -21264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4500C"))) PPC_WEAK_FUNC(sub_83C4500C);
PPC_FUNC_IMPL(__imp__sub_83C4500C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45010"))) PPC_WEAK_FUNC(sub_83C45010);
PPC_FUNC_IMPL(__imp__sub_83C45010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21256
	ctx.r3.s64 = ctx.r11.s64 + -21256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4501C"))) PPC_WEAK_FUNC(sub_83C4501C);
PPC_FUNC_IMPL(__imp__sub_83C4501C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45020"))) PPC_WEAK_FUNC(sub_83C45020);
PPC_FUNC_IMPL(__imp__sub_83C45020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21248
	ctx.r3.s64 = ctx.r11.s64 + -21248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4502C"))) PPC_WEAK_FUNC(sub_83C4502C);
PPC_FUNC_IMPL(__imp__sub_83C4502C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45030"))) PPC_WEAK_FUNC(sub_83C45030);
PPC_FUNC_IMPL(__imp__sub_83C45030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21240
	ctx.r3.s64 = ctx.r11.s64 + -21240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4503C"))) PPC_WEAK_FUNC(sub_83C4503C);
PPC_FUNC_IMPL(__imp__sub_83C4503C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45040"))) PPC_WEAK_FUNC(sub_83C45040);
PPC_FUNC_IMPL(__imp__sub_83C45040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21232
	ctx.r3.s64 = ctx.r11.s64 + -21232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4504C"))) PPC_WEAK_FUNC(sub_83C4504C);
PPC_FUNC_IMPL(__imp__sub_83C4504C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45050"))) PPC_WEAK_FUNC(sub_83C45050);
PPC_FUNC_IMPL(__imp__sub_83C45050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21224
	ctx.r3.s64 = ctx.r11.s64 + -21224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4505C"))) PPC_WEAK_FUNC(sub_83C4505C);
PPC_FUNC_IMPL(__imp__sub_83C4505C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45060"))) PPC_WEAK_FUNC(sub_83C45060);
PPC_FUNC_IMPL(__imp__sub_83C45060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21216
	ctx.r3.s64 = ctx.r11.s64 + -21216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4506C"))) PPC_WEAK_FUNC(sub_83C4506C);
PPC_FUNC_IMPL(__imp__sub_83C4506C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45070"))) PPC_WEAK_FUNC(sub_83C45070);
PPC_FUNC_IMPL(__imp__sub_83C45070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21208
	ctx.r3.s64 = ctx.r11.s64 + -21208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4507C"))) PPC_WEAK_FUNC(sub_83C4507C);
PPC_FUNC_IMPL(__imp__sub_83C4507C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45080"))) PPC_WEAK_FUNC(sub_83C45080);
PPC_FUNC_IMPL(__imp__sub_83C45080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21200
	ctx.r3.s64 = ctx.r11.s64 + -21200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4508C"))) PPC_WEAK_FUNC(sub_83C4508C);
PPC_FUNC_IMPL(__imp__sub_83C4508C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45090"))) PPC_WEAK_FUNC(sub_83C45090);
PPC_FUNC_IMPL(__imp__sub_83C45090) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14512
	ctx.r7.s64 = ctx.r8.s64 + -14512;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14512(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14512);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14512(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14512, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C450B8"))) PPC_WEAK_FUNC(sub_83C450B8);
PPC_FUNC_IMPL(__imp__sub_83C450B8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-3704
	ctx.r6.s64 = ctx.r7.s64 + -3704;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-3776(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -3776);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-14512(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -14512);
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
	// std r9,-3704(r7)
	PPC_STORE_U64(ctx.r7.u32 + -3704, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C45100"))) PPC_WEAK_FUNC(sub_83C45100);
PPC_FUNC_IMPL(__imp__sub_83C45100) {
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
	// addi r3,r11,-14528
	ctx.r3.s64 = ctx.r11.s64 + -14528;
	// bl 0x83523120
	ctx.lr = 0x83C45118;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-21192
	ctx.r3.s64 = ctx.r10.s64 + -21192;
	// bl 0x831cdcc8
	ctx.lr = 0x83C45124;
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

__attribute__((alias("__imp__sub_83C45134"))) PPC_WEAK_FUNC(sub_83C45134);
PPC_FUNC_IMPL(__imp__sub_83C45134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45138"))) PPC_WEAK_FUNC(sub_83C45138);
PPC_FUNC_IMPL(__imp__sub_83C45138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21176
	ctx.r3.s64 = ctx.r11.s64 + -21176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C45144"))) PPC_WEAK_FUNC(sub_83C45144);
PPC_FUNC_IMPL(__imp__sub_83C45144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45148"))) PPC_WEAK_FUNC(sub_83C45148);
PPC_FUNC_IMPL(__imp__sub_83C45148) {
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
	// addi r3,r11,-14504
	ctx.r3.s64 = ctx.r11.s64 + -14504;
	// bl 0x8259af80
	ctx.lr = 0x83C45160;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-21160
	ctx.r3.s64 = ctx.r10.s64 + -21160;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4516C;
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

__attribute__((alias("__imp__sub_83C4517C"))) PPC_WEAK_FUNC(sub_83C4517C);
PPC_FUNC_IMPL(__imp__sub_83C4517C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45180"))) PPC_WEAK_FUNC(sub_83C45180);
PPC_FUNC_IMPL(__imp__sub_83C45180) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-14524
	ctx.r11.s64 = ctx.r8.s64 + -14524;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-3728(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3728);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-21168
	ctx.r3.s64 = ctx.r6.s64 + -21168;
	// stw r10,-14524(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14524, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C451B0"))) PPC_WEAK_FUNC(sub_83C451B0);
PPC_FUNC_IMPL(__imp__sub_83C451B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21152
	ctx.r3.s64 = ctx.r11.s64 + -21152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C451BC"))) PPC_WEAK_FUNC(sub_83C451BC);
PPC_FUNC_IMPL(__imp__sub_83C451BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C451C0"))) PPC_WEAK_FUNC(sub_83C451C0);
PPC_FUNC_IMPL(__imp__sub_83C451C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21144
	ctx.r3.s64 = ctx.r11.s64 + -21144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C451CC"))) PPC_WEAK_FUNC(sub_83C451CC);
PPC_FUNC_IMPL(__imp__sub_83C451CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C451D0"))) PPC_WEAK_FUNC(sub_83C451D0);
PPC_FUNC_IMPL(__imp__sub_83C451D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21136
	ctx.r3.s64 = ctx.r11.s64 + -21136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C451DC"))) PPC_WEAK_FUNC(sub_83C451DC);
PPC_FUNC_IMPL(__imp__sub_83C451DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C451E0"))) PPC_WEAK_FUNC(sub_83C451E0);
PPC_FUNC_IMPL(__imp__sub_83C451E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21128
	ctx.r3.s64 = ctx.r11.s64 + -21128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C451EC"))) PPC_WEAK_FUNC(sub_83C451EC);
PPC_FUNC_IMPL(__imp__sub_83C451EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C451F0"))) PPC_WEAK_FUNC(sub_83C451F0);
PPC_FUNC_IMPL(__imp__sub_83C451F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21120
	ctx.r3.s64 = ctx.r11.s64 + -21120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C451FC"))) PPC_WEAK_FUNC(sub_83C451FC);
PPC_FUNC_IMPL(__imp__sub_83C451FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45200"))) PPC_WEAK_FUNC(sub_83C45200);
PPC_FUNC_IMPL(__imp__sub_83C45200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21112
	ctx.r3.s64 = ctx.r11.s64 + -21112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4520C"))) PPC_WEAK_FUNC(sub_83C4520C);
PPC_FUNC_IMPL(__imp__sub_83C4520C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45210"))) PPC_WEAK_FUNC(sub_83C45210);
PPC_FUNC_IMPL(__imp__sub_83C45210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21104
	ctx.r3.s64 = ctx.r11.s64 + -21104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4521C"))) PPC_WEAK_FUNC(sub_83C4521C);
PPC_FUNC_IMPL(__imp__sub_83C4521C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45220"))) PPC_WEAK_FUNC(sub_83C45220);
PPC_FUNC_IMPL(__imp__sub_83C45220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21096
	ctx.r3.s64 = ctx.r11.s64 + -21096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4522C"))) PPC_WEAK_FUNC(sub_83C4522C);
PPC_FUNC_IMPL(__imp__sub_83C4522C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45230"))) PPC_WEAK_FUNC(sub_83C45230);
PPC_FUNC_IMPL(__imp__sub_83C45230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21088
	ctx.r3.s64 = ctx.r11.s64 + -21088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4523C"))) PPC_WEAK_FUNC(sub_83C4523C);
PPC_FUNC_IMPL(__imp__sub_83C4523C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45240"))) PPC_WEAK_FUNC(sub_83C45240);
PPC_FUNC_IMPL(__imp__sub_83C45240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21080
	ctx.r3.s64 = ctx.r11.s64 + -21080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4524C"))) PPC_WEAK_FUNC(sub_83C4524C);
PPC_FUNC_IMPL(__imp__sub_83C4524C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45250"))) PPC_WEAK_FUNC(sub_83C45250);
PPC_FUNC_IMPL(__imp__sub_83C45250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21072
	ctx.r3.s64 = ctx.r11.s64 + -21072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4525C"))) PPC_WEAK_FUNC(sub_83C4525C);
PPC_FUNC_IMPL(__imp__sub_83C4525C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45260"))) PPC_WEAK_FUNC(sub_83C45260);
PPC_FUNC_IMPL(__imp__sub_83C45260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21064
	ctx.r3.s64 = ctx.r11.s64 + -21064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4526C"))) PPC_WEAK_FUNC(sub_83C4526C);
PPC_FUNC_IMPL(__imp__sub_83C4526C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45270"))) PPC_WEAK_FUNC(sub_83C45270);
PPC_FUNC_IMPL(__imp__sub_83C45270) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14144
	ctx.r7.s64 = ctx.r8.s64 + -14144;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14144(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14144);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14144(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14144, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C45298"))) PPC_WEAK_FUNC(sub_83C45298);
PPC_FUNC_IMPL(__imp__sub_83C45298) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-3576
	ctx.r6.s64 = ctx.r7.s64 + -3576;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-3648(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -3648);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-14144(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -14144);
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
	// std r9,-3576(r7)
	PPC_STORE_U64(ctx.r7.u32 + -3576, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C452E0"))) PPC_WEAK_FUNC(sub_83C452E0);
PPC_FUNC_IMPL(__imp__sub_83C452E0) {
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
	// addi r3,r11,-14160
	ctx.r3.s64 = ctx.r11.s64 + -14160;
	// bl 0x83523120
	ctx.lr = 0x83C452F8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-21056
	ctx.r3.s64 = ctx.r10.s64 + -21056;
	// bl 0x831cdcc8
	ctx.lr = 0x83C45304;
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

__attribute__((alias("__imp__sub_83C45314"))) PPC_WEAK_FUNC(sub_83C45314);
PPC_FUNC_IMPL(__imp__sub_83C45314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45318"))) PPC_WEAK_FUNC(sub_83C45318);
PPC_FUNC_IMPL(__imp__sub_83C45318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21040
	ctx.r3.s64 = ctx.r11.s64 + -21040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C45324"))) PPC_WEAK_FUNC(sub_83C45324);
PPC_FUNC_IMPL(__imp__sub_83C45324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45328"))) PPC_WEAK_FUNC(sub_83C45328);
PPC_FUNC_IMPL(__imp__sub_83C45328) {
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
	// addi r3,r11,-14136
	ctx.r3.s64 = ctx.r11.s64 + -14136;
	// bl 0x8259af80
	ctx.lr = 0x83C45340;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-21024
	ctx.r3.s64 = ctx.r10.s64 + -21024;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4534C;
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

__attribute__((alias("__imp__sub_83C4535C"))) PPC_WEAK_FUNC(sub_83C4535C);
PPC_FUNC_IMPL(__imp__sub_83C4535C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45360"))) PPC_WEAK_FUNC(sub_83C45360);
PPC_FUNC_IMPL(__imp__sub_83C45360) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-14156
	ctx.r11.s64 = ctx.r8.s64 + -14156;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-3600(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3600);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-21032
	ctx.r3.s64 = ctx.r6.s64 + -21032;
	// stw r10,-14156(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14156, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C45390"))) PPC_WEAK_FUNC(sub_83C45390);
PPC_FUNC_IMPL(__imp__sub_83C45390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21016
	ctx.r3.s64 = ctx.r11.s64 + -21016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4539C"))) PPC_WEAK_FUNC(sub_83C4539C);
PPC_FUNC_IMPL(__imp__sub_83C4539C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C453A0"))) PPC_WEAK_FUNC(sub_83C453A0);
PPC_FUNC_IMPL(__imp__sub_83C453A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21008
	ctx.r3.s64 = ctx.r11.s64 + -21008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C453AC"))) PPC_WEAK_FUNC(sub_83C453AC);
PPC_FUNC_IMPL(__imp__sub_83C453AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C453B0"))) PPC_WEAK_FUNC(sub_83C453B0);
PPC_FUNC_IMPL(__imp__sub_83C453B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-21000
	ctx.r3.s64 = ctx.r11.s64 + -21000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C453BC"))) PPC_WEAK_FUNC(sub_83C453BC);
PPC_FUNC_IMPL(__imp__sub_83C453BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C453C0"))) PPC_WEAK_FUNC(sub_83C453C0);
PPC_FUNC_IMPL(__imp__sub_83C453C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20992
	ctx.r3.s64 = ctx.r11.s64 + -20992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C453CC"))) PPC_WEAK_FUNC(sub_83C453CC);
PPC_FUNC_IMPL(__imp__sub_83C453CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C453D0"))) PPC_WEAK_FUNC(sub_83C453D0);
PPC_FUNC_IMPL(__imp__sub_83C453D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20984
	ctx.r3.s64 = ctx.r11.s64 + -20984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C453DC"))) PPC_WEAK_FUNC(sub_83C453DC);
PPC_FUNC_IMPL(__imp__sub_83C453DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C453E0"))) PPC_WEAK_FUNC(sub_83C453E0);
PPC_FUNC_IMPL(__imp__sub_83C453E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20976
	ctx.r3.s64 = ctx.r11.s64 + -20976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C453EC"))) PPC_WEAK_FUNC(sub_83C453EC);
PPC_FUNC_IMPL(__imp__sub_83C453EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C453F0"))) PPC_WEAK_FUNC(sub_83C453F0);
PPC_FUNC_IMPL(__imp__sub_83C453F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20968
	ctx.r3.s64 = ctx.r11.s64 + -20968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C453FC"))) PPC_WEAK_FUNC(sub_83C453FC);
PPC_FUNC_IMPL(__imp__sub_83C453FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45400"))) PPC_WEAK_FUNC(sub_83C45400);
PPC_FUNC_IMPL(__imp__sub_83C45400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20960
	ctx.r3.s64 = ctx.r11.s64 + -20960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4540C"))) PPC_WEAK_FUNC(sub_83C4540C);
PPC_FUNC_IMPL(__imp__sub_83C4540C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45410"))) PPC_WEAK_FUNC(sub_83C45410);
PPC_FUNC_IMPL(__imp__sub_83C45410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20952
	ctx.r3.s64 = ctx.r11.s64 + -20952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4541C"))) PPC_WEAK_FUNC(sub_83C4541C);
PPC_FUNC_IMPL(__imp__sub_83C4541C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45420"))) PPC_WEAK_FUNC(sub_83C45420);
PPC_FUNC_IMPL(__imp__sub_83C45420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20944
	ctx.r3.s64 = ctx.r11.s64 + -20944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4542C"))) PPC_WEAK_FUNC(sub_83C4542C);
PPC_FUNC_IMPL(__imp__sub_83C4542C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45430"))) PPC_WEAK_FUNC(sub_83C45430);
PPC_FUNC_IMPL(__imp__sub_83C45430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20936
	ctx.r3.s64 = ctx.r11.s64 + -20936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4543C"))) PPC_WEAK_FUNC(sub_83C4543C);
PPC_FUNC_IMPL(__imp__sub_83C4543C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45440"))) PPC_WEAK_FUNC(sub_83C45440);
PPC_FUNC_IMPL(__imp__sub_83C45440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20928
	ctx.r3.s64 = ctx.r11.s64 + -20928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4544C"))) PPC_WEAK_FUNC(sub_83C4544C);
PPC_FUNC_IMPL(__imp__sub_83C4544C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45450"))) PPC_WEAK_FUNC(sub_83C45450);
PPC_FUNC_IMPL(__imp__sub_83C45450) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13776
	ctx.r7.s64 = ctx.r8.s64 + -13776;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13776(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13776);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13776(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13776, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C45478"))) PPC_WEAK_FUNC(sub_83C45478);
PPC_FUNC_IMPL(__imp__sub_83C45478) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-3448
	ctx.r6.s64 = ctx.r7.s64 + -3448;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-3520(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -3520);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-13776(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -13776);
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
	// std r9,-3448(r7)
	PPC_STORE_U64(ctx.r7.u32 + -3448, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C454C0"))) PPC_WEAK_FUNC(sub_83C454C0);
PPC_FUNC_IMPL(__imp__sub_83C454C0) {
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
	// addi r3,r11,-13792
	ctx.r3.s64 = ctx.r11.s64 + -13792;
	// bl 0x83523120
	ctx.lr = 0x83C454D8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-20920
	ctx.r3.s64 = ctx.r10.s64 + -20920;
	// bl 0x831cdcc8
	ctx.lr = 0x83C454E4;
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

__attribute__((alias("__imp__sub_83C454F4"))) PPC_WEAK_FUNC(sub_83C454F4);
PPC_FUNC_IMPL(__imp__sub_83C454F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C454F8"))) PPC_WEAK_FUNC(sub_83C454F8);
PPC_FUNC_IMPL(__imp__sub_83C454F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20904
	ctx.r3.s64 = ctx.r11.s64 + -20904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C45504"))) PPC_WEAK_FUNC(sub_83C45504);
PPC_FUNC_IMPL(__imp__sub_83C45504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45508"))) PPC_WEAK_FUNC(sub_83C45508);
PPC_FUNC_IMPL(__imp__sub_83C45508) {
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
	// addi r3,r11,-13768
	ctx.r3.s64 = ctx.r11.s64 + -13768;
	// bl 0x8259af80
	ctx.lr = 0x83C45520;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-20888
	ctx.r3.s64 = ctx.r10.s64 + -20888;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4552C;
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

__attribute__((alias("__imp__sub_83C4553C"))) PPC_WEAK_FUNC(sub_83C4553C);
PPC_FUNC_IMPL(__imp__sub_83C4553C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45540"))) PPC_WEAK_FUNC(sub_83C45540);
PPC_FUNC_IMPL(__imp__sub_83C45540) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-13788
	ctx.r11.s64 = ctx.r8.s64 + -13788;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-3472(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3472);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-20896
	ctx.r3.s64 = ctx.r6.s64 + -20896;
	// stw r10,-13788(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13788, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C45570"))) PPC_WEAK_FUNC(sub_83C45570);
PPC_FUNC_IMPL(__imp__sub_83C45570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20880
	ctx.r3.s64 = ctx.r11.s64 + -20880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4557C"))) PPC_WEAK_FUNC(sub_83C4557C);
PPC_FUNC_IMPL(__imp__sub_83C4557C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45580"))) PPC_WEAK_FUNC(sub_83C45580);
PPC_FUNC_IMPL(__imp__sub_83C45580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20872
	ctx.r3.s64 = ctx.r11.s64 + -20872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4558C"))) PPC_WEAK_FUNC(sub_83C4558C);
PPC_FUNC_IMPL(__imp__sub_83C4558C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45590"))) PPC_WEAK_FUNC(sub_83C45590);
PPC_FUNC_IMPL(__imp__sub_83C45590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20864
	ctx.r3.s64 = ctx.r11.s64 + -20864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4559C"))) PPC_WEAK_FUNC(sub_83C4559C);
PPC_FUNC_IMPL(__imp__sub_83C4559C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C455A0"))) PPC_WEAK_FUNC(sub_83C455A0);
PPC_FUNC_IMPL(__imp__sub_83C455A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20856
	ctx.r3.s64 = ctx.r11.s64 + -20856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C455AC"))) PPC_WEAK_FUNC(sub_83C455AC);
PPC_FUNC_IMPL(__imp__sub_83C455AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C455B0"))) PPC_WEAK_FUNC(sub_83C455B0);
PPC_FUNC_IMPL(__imp__sub_83C455B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20848
	ctx.r3.s64 = ctx.r11.s64 + -20848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C455BC"))) PPC_WEAK_FUNC(sub_83C455BC);
PPC_FUNC_IMPL(__imp__sub_83C455BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C455C0"))) PPC_WEAK_FUNC(sub_83C455C0);
PPC_FUNC_IMPL(__imp__sub_83C455C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20840
	ctx.r3.s64 = ctx.r11.s64 + -20840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C455CC"))) PPC_WEAK_FUNC(sub_83C455CC);
PPC_FUNC_IMPL(__imp__sub_83C455CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C455D0"))) PPC_WEAK_FUNC(sub_83C455D0);
PPC_FUNC_IMPL(__imp__sub_83C455D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20832
	ctx.r3.s64 = ctx.r11.s64 + -20832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C455DC"))) PPC_WEAK_FUNC(sub_83C455DC);
PPC_FUNC_IMPL(__imp__sub_83C455DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C455E0"))) PPC_WEAK_FUNC(sub_83C455E0);
PPC_FUNC_IMPL(__imp__sub_83C455E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20824
	ctx.r3.s64 = ctx.r11.s64 + -20824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C455EC"))) PPC_WEAK_FUNC(sub_83C455EC);
PPC_FUNC_IMPL(__imp__sub_83C455EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C455F0"))) PPC_WEAK_FUNC(sub_83C455F0);
PPC_FUNC_IMPL(__imp__sub_83C455F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20816
	ctx.r3.s64 = ctx.r11.s64 + -20816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C455FC"))) PPC_WEAK_FUNC(sub_83C455FC);
PPC_FUNC_IMPL(__imp__sub_83C455FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45600"))) PPC_WEAK_FUNC(sub_83C45600);
PPC_FUNC_IMPL(__imp__sub_83C45600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20808
	ctx.r3.s64 = ctx.r11.s64 + -20808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4560C"))) PPC_WEAK_FUNC(sub_83C4560C);
PPC_FUNC_IMPL(__imp__sub_83C4560C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45610"))) PPC_WEAK_FUNC(sub_83C45610);
PPC_FUNC_IMPL(__imp__sub_83C45610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20800
	ctx.r3.s64 = ctx.r11.s64 + -20800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4561C"))) PPC_WEAK_FUNC(sub_83C4561C);
PPC_FUNC_IMPL(__imp__sub_83C4561C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45620"))) PPC_WEAK_FUNC(sub_83C45620);
PPC_FUNC_IMPL(__imp__sub_83C45620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20792
	ctx.r3.s64 = ctx.r11.s64 + -20792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4562C"))) PPC_WEAK_FUNC(sub_83C4562C);
PPC_FUNC_IMPL(__imp__sub_83C4562C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45630"))) PPC_WEAK_FUNC(sub_83C45630);
PPC_FUNC_IMPL(__imp__sub_83C45630) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13408
	ctx.r7.s64 = ctx.r8.s64 + -13408;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13408(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13408);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13408(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13408, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C45658"))) PPC_WEAK_FUNC(sub_83C45658);
PPC_FUNC_IMPL(__imp__sub_83C45658) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-3320
	ctx.r6.s64 = ctx.r7.s64 + -3320;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-3392(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -3392);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-13408(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -13408);
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
	// std r9,-3320(r7)
	PPC_STORE_U64(ctx.r7.u32 + -3320, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C456A0"))) PPC_WEAK_FUNC(sub_83C456A0);
PPC_FUNC_IMPL(__imp__sub_83C456A0) {
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
	// addi r3,r11,-13424
	ctx.r3.s64 = ctx.r11.s64 + -13424;
	// bl 0x83523120
	ctx.lr = 0x83C456B8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-20784
	ctx.r3.s64 = ctx.r10.s64 + -20784;
	// bl 0x831cdcc8
	ctx.lr = 0x83C456C4;
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

__attribute__((alias("__imp__sub_83C456D4"))) PPC_WEAK_FUNC(sub_83C456D4);
PPC_FUNC_IMPL(__imp__sub_83C456D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C456D8"))) PPC_WEAK_FUNC(sub_83C456D8);
PPC_FUNC_IMPL(__imp__sub_83C456D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20768
	ctx.r3.s64 = ctx.r11.s64 + -20768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C456E4"))) PPC_WEAK_FUNC(sub_83C456E4);
PPC_FUNC_IMPL(__imp__sub_83C456E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C456E8"))) PPC_WEAK_FUNC(sub_83C456E8);
PPC_FUNC_IMPL(__imp__sub_83C456E8) {
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
	// addi r3,r11,-13400
	ctx.r3.s64 = ctx.r11.s64 + -13400;
	// bl 0x8259af80
	ctx.lr = 0x83C45700;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-20752
	ctx.r3.s64 = ctx.r10.s64 + -20752;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4570C;
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

__attribute__((alias("__imp__sub_83C4571C"))) PPC_WEAK_FUNC(sub_83C4571C);
PPC_FUNC_IMPL(__imp__sub_83C4571C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45720"))) PPC_WEAK_FUNC(sub_83C45720);
PPC_FUNC_IMPL(__imp__sub_83C45720) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-13420
	ctx.r11.s64 = ctx.r8.s64 + -13420;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-3344(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3344);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-20760
	ctx.r3.s64 = ctx.r6.s64 + -20760;
	// stw r10,-13420(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13420, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C45750"))) PPC_WEAK_FUNC(sub_83C45750);
PPC_FUNC_IMPL(__imp__sub_83C45750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20744
	ctx.r3.s64 = ctx.r11.s64 + -20744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4575C"))) PPC_WEAK_FUNC(sub_83C4575C);
PPC_FUNC_IMPL(__imp__sub_83C4575C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45760"))) PPC_WEAK_FUNC(sub_83C45760);
PPC_FUNC_IMPL(__imp__sub_83C45760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20736
	ctx.r3.s64 = ctx.r11.s64 + -20736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4576C"))) PPC_WEAK_FUNC(sub_83C4576C);
PPC_FUNC_IMPL(__imp__sub_83C4576C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45770"))) PPC_WEAK_FUNC(sub_83C45770);
PPC_FUNC_IMPL(__imp__sub_83C45770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20728
	ctx.r3.s64 = ctx.r11.s64 + -20728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4577C"))) PPC_WEAK_FUNC(sub_83C4577C);
PPC_FUNC_IMPL(__imp__sub_83C4577C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45780"))) PPC_WEAK_FUNC(sub_83C45780);
PPC_FUNC_IMPL(__imp__sub_83C45780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20720
	ctx.r3.s64 = ctx.r11.s64 + -20720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4578C"))) PPC_WEAK_FUNC(sub_83C4578C);
PPC_FUNC_IMPL(__imp__sub_83C4578C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45790"))) PPC_WEAK_FUNC(sub_83C45790);
PPC_FUNC_IMPL(__imp__sub_83C45790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20712
	ctx.r3.s64 = ctx.r11.s64 + -20712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4579C"))) PPC_WEAK_FUNC(sub_83C4579C);
PPC_FUNC_IMPL(__imp__sub_83C4579C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C457A0"))) PPC_WEAK_FUNC(sub_83C457A0);
PPC_FUNC_IMPL(__imp__sub_83C457A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20704
	ctx.r3.s64 = ctx.r11.s64 + -20704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C457AC"))) PPC_WEAK_FUNC(sub_83C457AC);
PPC_FUNC_IMPL(__imp__sub_83C457AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C457B0"))) PPC_WEAK_FUNC(sub_83C457B0);
PPC_FUNC_IMPL(__imp__sub_83C457B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20696
	ctx.r3.s64 = ctx.r11.s64 + -20696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C457BC"))) PPC_WEAK_FUNC(sub_83C457BC);
PPC_FUNC_IMPL(__imp__sub_83C457BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C457C0"))) PPC_WEAK_FUNC(sub_83C457C0);
PPC_FUNC_IMPL(__imp__sub_83C457C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20688
	ctx.r3.s64 = ctx.r11.s64 + -20688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C457CC"))) PPC_WEAK_FUNC(sub_83C457CC);
PPC_FUNC_IMPL(__imp__sub_83C457CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C457D0"))) PPC_WEAK_FUNC(sub_83C457D0);
PPC_FUNC_IMPL(__imp__sub_83C457D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20680
	ctx.r3.s64 = ctx.r11.s64 + -20680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C457DC"))) PPC_WEAK_FUNC(sub_83C457DC);
PPC_FUNC_IMPL(__imp__sub_83C457DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C457E0"))) PPC_WEAK_FUNC(sub_83C457E0);
PPC_FUNC_IMPL(__imp__sub_83C457E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20672
	ctx.r3.s64 = ctx.r11.s64 + -20672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C457EC"))) PPC_WEAK_FUNC(sub_83C457EC);
PPC_FUNC_IMPL(__imp__sub_83C457EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C457F0"))) PPC_WEAK_FUNC(sub_83C457F0);
PPC_FUNC_IMPL(__imp__sub_83C457F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20664
	ctx.r3.s64 = ctx.r11.s64 + -20664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C457FC"))) PPC_WEAK_FUNC(sub_83C457FC);
PPC_FUNC_IMPL(__imp__sub_83C457FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45800"))) PPC_WEAK_FUNC(sub_83C45800);
PPC_FUNC_IMPL(__imp__sub_83C45800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20656
	ctx.r3.s64 = ctx.r11.s64 + -20656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4580C"))) PPC_WEAK_FUNC(sub_83C4580C);
PPC_FUNC_IMPL(__imp__sub_83C4580C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45810"))) PPC_WEAK_FUNC(sub_83C45810);
PPC_FUNC_IMPL(__imp__sub_83C45810) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-13040
	ctx.r7.s64 = ctx.r8.s64 + -13040;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-13040(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -13040);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-13040(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13040, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C45838"))) PPC_WEAK_FUNC(sub_83C45838);
PPC_FUNC_IMPL(__imp__sub_83C45838) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-3192
	ctx.r6.s64 = ctx.r7.s64 + -3192;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-3264(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -3264);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-13040(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -13040);
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
	// std r9,-3192(r7)
	PPC_STORE_U64(ctx.r7.u32 + -3192, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C45880"))) PPC_WEAK_FUNC(sub_83C45880);
PPC_FUNC_IMPL(__imp__sub_83C45880) {
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
	// addi r3,r11,-13056
	ctx.r3.s64 = ctx.r11.s64 + -13056;
	// bl 0x83523120
	ctx.lr = 0x83C45898;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-20648
	ctx.r3.s64 = ctx.r10.s64 + -20648;
	// bl 0x831cdcc8
	ctx.lr = 0x83C458A4;
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

__attribute__((alias("__imp__sub_83C458B4"))) PPC_WEAK_FUNC(sub_83C458B4);
PPC_FUNC_IMPL(__imp__sub_83C458B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C458B8"))) PPC_WEAK_FUNC(sub_83C458B8);
PPC_FUNC_IMPL(__imp__sub_83C458B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20632
	ctx.r3.s64 = ctx.r11.s64 + -20632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C458C4"))) PPC_WEAK_FUNC(sub_83C458C4);
PPC_FUNC_IMPL(__imp__sub_83C458C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C458C8"))) PPC_WEAK_FUNC(sub_83C458C8);
PPC_FUNC_IMPL(__imp__sub_83C458C8) {
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
	// addi r3,r11,-13032
	ctx.r3.s64 = ctx.r11.s64 + -13032;
	// bl 0x8259af80
	ctx.lr = 0x83C458E0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-20616
	ctx.r3.s64 = ctx.r10.s64 + -20616;
	// bl 0x831cdcc8
	ctx.lr = 0x83C458EC;
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

__attribute__((alias("__imp__sub_83C458FC"))) PPC_WEAK_FUNC(sub_83C458FC);
PPC_FUNC_IMPL(__imp__sub_83C458FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45900"))) PPC_WEAK_FUNC(sub_83C45900);
PPC_FUNC_IMPL(__imp__sub_83C45900) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-13052
	ctx.r11.s64 = ctx.r8.s64 + -13052;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-3216(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3216);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-20624
	ctx.r3.s64 = ctx.r6.s64 + -20624;
	// stw r10,-13052(r8)
	PPC_STORE_U32(ctx.r8.u32 + -13052, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C45930"))) PPC_WEAK_FUNC(sub_83C45930);
PPC_FUNC_IMPL(__imp__sub_83C45930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20608
	ctx.r3.s64 = ctx.r11.s64 + -20608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4593C"))) PPC_WEAK_FUNC(sub_83C4593C);
PPC_FUNC_IMPL(__imp__sub_83C4593C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45940"))) PPC_WEAK_FUNC(sub_83C45940);
PPC_FUNC_IMPL(__imp__sub_83C45940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20600
	ctx.r3.s64 = ctx.r11.s64 + -20600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4594C"))) PPC_WEAK_FUNC(sub_83C4594C);
PPC_FUNC_IMPL(__imp__sub_83C4594C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45950"))) PPC_WEAK_FUNC(sub_83C45950);
PPC_FUNC_IMPL(__imp__sub_83C45950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20592
	ctx.r3.s64 = ctx.r11.s64 + -20592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4595C"))) PPC_WEAK_FUNC(sub_83C4595C);
PPC_FUNC_IMPL(__imp__sub_83C4595C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45960"))) PPC_WEAK_FUNC(sub_83C45960);
PPC_FUNC_IMPL(__imp__sub_83C45960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20584
	ctx.r3.s64 = ctx.r11.s64 + -20584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4596C"))) PPC_WEAK_FUNC(sub_83C4596C);
PPC_FUNC_IMPL(__imp__sub_83C4596C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45970"))) PPC_WEAK_FUNC(sub_83C45970);
PPC_FUNC_IMPL(__imp__sub_83C45970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20576
	ctx.r3.s64 = ctx.r11.s64 + -20576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4597C"))) PPC_WEAK_FUNC(sub_83C4597C);
PPC_FUNC_IMPL(__imp__sub_83C4597C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45980"))) PPC_WEAK_FUNC(sub_83C45980);
PPC_FUNC_IMPL(__imp__sub_83C45980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20568
	ctx.r3.s64 = ctx.r11.s64 + -20568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4598C"))) PPC_WEAK_FUNC(sub_83C4598C);
PPC_FUNC_IMPL(__imp__sub_83C4598C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45990"))) PPC_WEAK_FUNC(sub_83C45990);
PPC_FUNC_IMPL(__imp__sub_83C45990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20560
	ctx.r3.s64 = ctx.r11.s64 + -20560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4599C"))) PPC_WEAK_FUNC(sub_83C4599C);
PPC_FUNC_IMPL(__imp__sub_83C4599C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C459A0"))) PPC_WEAK_FUNC(sub_83C459A0);
PPC_FUNC_IMPL(__imp__sub_83C459A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20552
	ctx.r3.s64 = ctx.r11.s64 + -20552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C459AC"))) PPC_WEAK_FUNC(sub_83C459AC);
PPC_FUNC_IMPL(__imp__sub_83C459AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C459B0"))) PPC_WEAK_FUNC(sub_83C459B0);
PPC_FUNC_IMPL(__imp__sub_83C459B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20544
	ctx.r3.s64 = ctx.r11.s64 + -20544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C459BC"))) PPC_WEAK_FUNC(sub_83C459BC);
PPC_FUNC_IMPL(__imp__sub_83C459BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

