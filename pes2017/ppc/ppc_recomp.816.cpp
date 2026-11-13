#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C65888"))) PPC_WEAK_FUNC(sub_83C65888);
PPC_FUNC_IMPL(__imp__sub_83C65888) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,18048
	ctx.r7.s64 = ctx.r8.s64 + 18048;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,18048(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18048);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,18048(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18048, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C658B0"))) PPC_WEAK_FUNC(sub_83C658B0);
PPC_FUNC_IMPL(__imp__sub_83C658B0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-31180
	ctx.r6.s64 = ctx.r7.s64 + -31180;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-31252(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -31252);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,18048(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18048);
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
	// std r9,-31180(r7)
	PPC_STORE_U64(ctx.r7.u32 + -31180, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C658F8"))) PPC_WEAK_FUNC(sub_83C658F8);
PPC_FUNC_IMPL(__imp__sub_83C658F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,17920
	ctx.r3.s64 = ctx.r11.s64 + 17920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C65904"))) PPC_WEAK_FUNC(sub_83C65904);
PPC_FUNC_IMPL(__imp__sub_83C65904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C65908"))) PPC_WEAK_FUNC(sub_83C65908);
PPC_FUNC_IMPL(__imp__sub_83C65908) {
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
	// addi r3,r11,18056
	ctx.r3.s64 = ctx.r11.s64 + 18056;
	// bl 0x8259af80
	ctx.lr = 0x83C65920;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,17936
	ctx.r3.s64 = ctx.r10.s64 + 17936;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6592C;
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

__attribute__((alias("__imp__sub_83C6593C"))) PPC_WEAK_FUNC(sub_83C6593C);
PPC_FUNC_IMPL(__imp__sub_83C6593C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C65940"))) PPC_WEAK_FUNC(sub_83C65940);
PPC_FUNC_IMPL(__imp__sub_83C65940) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,18036
	ctx.r11.s64 = ctx.r8.s64 + 18036;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-31204(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31204);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,17928
	ctx.r3.s64 = ctx.r6.s64 + 17928;
	// stw r10,18036(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18036, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C65970"))) PPC_WEAK_FUNC(sub_83C65970);
PPC_FUNC_IMPL(__imp__sub_83C65970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,17944
	ctx.r3.s64 = ctx.r11.s64 + 17944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6597C"))) PPC_WEAK_FUNC(sub_83C6597C);
PPC_FUNC_IMPL(__imp__sub_83C6597C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C65980"))) PPC_WEAK_FUNC(sub_83C65980);
PPC_FUNC_IMPL(__imp__sub_83C65980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,17952
	ctx.r3.s64 = ctx.r11.s64 + 17952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6598C"))) PPC_WEAK_FUNC(sub_83C6598C);
PPC_FUNC_IMPL(__imp__sub_83C6598C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C65990"))) PPC_WEAK_FUNC(sub_83C65990);
PPC_FUNC_IMPL(__imp__sub_83C65990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,17960
	ctx.r3.s64 = ctx.r11.s64 + 17960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6599C"))) PPC_WEAK_FUNC(sub_83C6599C);
PPC_FUNC_IMPL(__imp__sub_83C6599C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C659A0"))) PPC_WEAK_FUNC(sub_83C659A0);
PPC_FUNC_IMPL(__imp__sub_83C659A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,17968
	ctx.r3.s64 = ctx.r11.s64 + 17968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C659AC"))) PPC_WEAK_FUNC(sub_83C659AC);
PPC_FUNC_IMPL(__imp__sub_83C659AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C659B0"))) PPC_WEAK_FUNC(sub_83C659B0);
PPC_FUNC_IMPL(__imp__sub_83C659B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,17976
	ctx.r3.s64 = ctx.r11.s64 + 17976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C659BC"))) PPC_WEAK_FUNC(sub_83C659BC);
PPC_FUNC_IMPL(__imp__sub_83C659BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C659C0"))) PPC_WEAK_FUNC(sub_83C659C0);
PPC_FUNC_IMPL(__imp__sub_83C659C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,17984
	ctx.r3.s64 = ctx.r11.s64 + 17984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C659CC"))) PPC_WEAK_FUNC(sub_83C659CC);
PPC_FUNC_IMPL(__imp__sub_83C659CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C659D0"))) PPC_WEAK_FUNC(sub_83C659D0);
PPC_FUNC_IMPL(__imp__sub_83C659D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,17992
	ctx.r3.s64 = ctx.r11.s64 + 17992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C659DC"))) PPC_WEAK_FUNC(sub_83C659DC);
PPC_FUNC_IMPL(__imp__sub_83C659DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C659E0"))) PPC_WEAK_FUNC(sub_83C659E0);
PPC_FUNC_IMPL(__imp__sub_83C659E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18000
	ctx.r3.s64 = ctx.r11.s64 + 18000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C659EC"))) PPC_WEAK_FUNC(sub_83C659EC);
PPC_FUNC_IMPL(__imp__sub_83C659EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C659F0"))) PPC_WEAK_FUNC(sub_83C659F0);
PPC_FUNC_IMPL(__imp__sub_83C659F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18008
	ctx.r3.s64 = ctx.r11.s64 + 18008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C659FC"))) PPC_WEAK_FUNC(sub_83C659FC);
PPC_FUNC_IMPL(__imp__sub_83C659FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C65A00"))) PPC_WEAK_FUNC(sub_83C65A00);
PPC_FUNC_IMPL(__imp__sub_83C65A00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18016
	ctx.r3.s64 = ctx.r11.s64 + 18016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C65A0C"))) PPC_WEAK_FUNC(sub_83C65A0C);
PPC_FUNC_IMPL(__imp__sub_83C65A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C65A10"))) PPC_WEAK_FUNC(sub_83C65A10);
PPC_FUNC_IMPL(__imp__sub_83C65A10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18024
	ctx.r3.s64 = ctx.r11.s64 + 18024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C65A1C"))) PPC_WEAK_FUNC(sub_83C65A1C);
PPC_FUNC_IMPL(__imp__sub_83C65A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C65A20"))) PPC_WEAK_FUNC(sub_83C65A20);
PPC_FUNC_IMPL(__imp__sub_83C65A20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18032
	ctx.r3.s64 = ctx.r11.s64 + 18032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C65A2C"))) PPC_WEAK_FUNC(sub_83C65A2C);
PPC_FUNC_IMPL(__imp__sub_83C65A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C65A30"))) PPC_WEAK_FUNC(sub_83C65A30);
PPC_FUNC_IMPL(__imp__sub_83C65A30) {
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
	// addi r3,r11,18400
	ctx.r3.s64 = ctx.r11.s64 + 18400;
	// bl 0x83523120
	ctx.lr = 0x83C65A48;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,18040
	ctx.r3.s64 = ctx.r10.s64 + 18040;
	// bl 0x831cdcc8
	ctx.lr = 0x83C65A54;
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

__attribute__((alias("__imp__sub_83C65A64"))) PPC_WEAK_FUNC(sub_83C65A64);
PPC_FUNC_IMPL(__imp__sub_83C65A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C65A68"))) PPC_WEAK_FUNC(sub_83C65A68);
PPC_FUNC_IMPL(__imp__sub_83C65A68) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,18416
	ctx.r7.s64 = ctx.r8.s64 + 18416;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,18416(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18416);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,18416(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18416, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C65A90"))) PPC_WEAK_FUNC(sub_83C65A90);
PPC_FUNC_IMPL(__imp__sub_83C65A90) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-31052
	ctx.r6.s64 = ctx.r7.s64 + -31052;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-31124(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -31124);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,18416(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18416);
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
	// std r9,-31052(r7)
	PPC_STORE_U64(ctx.r7.u32 + -31052, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C65AD8"))) PPC_WEAK_FUNC(sub_83C65AD8);
PPC_FUNC_IMPL(__imp__sub_83C65AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18056
	ctx.r3.s64 = ctx.r11.s64 + 18056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C65AE4"))) PPC_WEAK_FUNC(sub_83C65AE4);
PPC_FUNC_IMPL(__imp__sub_83C65AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C65AE8"))) PPC_WEAK_FUNC(sub_83C65AE8);
PPC_FUNC_IMPL(__imp__sub_83C65AE8) {
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
	// addi r3,r11,18424
	ctx.r3.s64 = ctx.r11.s64 + 18424;
	// bl 0x8259af80
	ctx.lr = 0x83C65B00;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,18072
	ctx.r3.s64 = ctx.r10.s64 + 18072;
	// bl 0x831cdcc8
	ctx.lr = 0x83C65B0C;
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

__attribute__((alias("__imp__sub_83C65B1C"))) PPC_WEAK_FUNC(sub_83C65B1C);
PPC_FUNC_IMPL(__imp__sub_83C65B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C65B20"))) PPC_WEAK_FUNC(sub_83C65B20);
PPC_FUNC_IMPL(__imp__sub_83C65B20) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,18404
	ctx.r11.s64 = ctx.r8.s64 + 18404;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-31076(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31076);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,18064
	ctx.r3.s64 = ctx.r6.s64 + 18064;
	// stw r10,18404(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18404, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C65B50"))) PPC_WEAK_FUNC(sub_83C65B50);
PPC_FUNC_IMPL(__imp__sub_83C65B50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18080
	ctx.r3.s64 = ctx.r11.s64 + 18080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C65B5C"))) PPC_WEAK_FUNC(sub_83C65B5C);
PPC_FUNC_IMPL(__imp__sub_83C65B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C65B60"))) PPC_WEAK_FUNC(sub_83C65B60);
PPC_FUNC_IMPL(__imp__sub_83C65B60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18088
	ctx.r3.s64 = ctx.r11.s64 + 18088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C65B6C"))) PPC_WEAK_FUNC(sub_83C65B6C);
PPC_FUNC_IMPL(__imp__sub_83C65B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C65B70"))) PPC_WEAK_FUNC(sub_83C65B70);
PPC_FUNC_IMPL(__imp__sub_83C65B70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18096
	ctx.r3.s64 = ctx.r11.s64 + 18096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C65B7C"))) PPC_WEAK_FUNC(sub_83C65B7C);
PPC_FUNC_IMPL(__imp__sub_83C65B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C65B80"))) PPC_WEAK_FUNC(sub_83C65B80);
PPC_FUNC_IMPL(__imp__sub_83C65B80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18104
	ctx.r3.s64 = ctx.r11.s64 + 18104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C65B8C"))) PPC_WEAK_FUNC(sub_83C65B8C);
PPC_FUNC_IMPL(__imp__sub_83C65B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C65B90"))) PPC_WEAK_FUNC(sub_83C65B90);
PPC_FUNC_IMPL(__imp__sub_83C65B90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18112
	ctx.r3.s64 = ctx.r11.s64 + 18112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C65B9C"))) PPC_WEAK_FUNC(sub_83C65B9C);
PPC_FUNC_IMPL(__imp__sub_83C65B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C65BA0"))) PPC_WEAK_FUNC(sub_83C65BA0);
PPC_FUNC_IMPL(__imp__sub_83C65BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18120
	ctx.r3.s64 = ctx.r11.s64 + 18120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C65BAC"))) PPC_WEAK_FUNC(sub_83C65BAC);
PPC_FUNC_IMPL(__imp__sub_83C65BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C65BB0"))) PPC_WEAK_FUNC(sub_83C65BB0);
PPC_FUNC_IMPL(__imp__sub_83C65BB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18128
	ctx.r3.s64 = ctx.r11.s64 + 18128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C65BBC"))) PPC_WEAK_FUNC(sub_83C65BBC);
PPC_FUNC_IMPL(__imp__sub_83C65BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C65BC0"))) PPC_WEAK_FUNC(sub_83C65BC0);
PPC_FUNC_IMPL(__imp__sub_83C65BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18136
	ctx.r3.s64 = ctx.r11.s64 + 18136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C65BCC"))) PPC_WEAK_FUNC(sub_83C65BCC);
PPC_FUNC_IMPL(__imp__sub_83C65BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C65BD0"))) PPC_WEAK_FUNC(sub_83C65BD0);
PPC_FUNC_IMPL(__imp__sub_83C65BD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18144
	ctx.r3.s64 = ctx.r11.s64 + 18144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C65BDC"))) PPC_WEAK_FUNC(sub_83C65BDC);
PPC_FUNC_IMPL(__imp__sub_83C65BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C65BE0"))) PPC_WEAK_FUNC(sub_83C65BE0);
PPC_FUNC_IMPL(__imp__sub_83C65BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18152
	ctx.r3.s64 = ctx.r11.s64 + 18152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C65BEC"))) PPC_WEAK_FUNC(sub_83C65BEC);
PPC_FUNC_IMPL(__imp__sub_83C65BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C65BF0"))) PPC_WEAK_FUNC(sub_83C65BF0);
PPC_FUNC_IMPL(__imp__sub_83C65BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18160
	ctx.r3.s64 = ctx.r11.s64 + 18160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C65BFC"))) PPC_WEAK_FUNC(sub_83C65BFC);
PPC_FUNC_IMPL(__imp__sub_83C65BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C65C00"))) PPC_WEAK_FUNC(sub_83C65C00);
PPC_FUNC_IMPL(__imp__sub_83C65C00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18168
	ctx.r3.s64 = ctx.r11.s64 + 18168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C65C0C"))) PPC_WEAK_FUNC(sub_83C65C0C);
PPC_FUNC_IMPL(__imp__sub_83C65C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C65C10"))) PPC_WEAK_FUNC(sub_83C65C10);
PPC_FUNC_IMPL(__imp__sub_83C65C10) {
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
	// addi r3,r11,18768
	ctx.r3.s64 = ctx.r11.s64 + 18768;
	// bl 0x83523120
	ctx.lr = 0x83C65C28;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,18176
	ctx.r3.s64 = ctx.r10.s64 + 18176;
	// bl 0x831cdcc8
	ctx.lr = 0x83C65C34;
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

__attribute__((alias("__imp__sub_83C65C44"))) PPC_WEAK_FUNC(sub_83C65C44);
PPC_FUNC_IMPL(__imp__sub_83C65C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C65C48"))) PPC_WEAK_FUNC(sub_83C65C48);
PPC_FUNC_IMPL(__imp__sub_83C65C48) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,18784
	ctx.r7.s64 = ctx.r8.s64 + 18784;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,18784(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18784);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,18784(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18784, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C65C70"))) PPC_WEAK_FUNC(sub_83C65C70);
PPC_FUNC_IMPL(__imp__sub_83C65C70) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-30924
	ctx.r6.s64 = ctx.r7.s64 + -30924;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-30996(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -30996);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,18784(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18784);
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
	// std r9,-30924(r7)
	PPC_STORE_U64(ctx.r7.u32 + -30924, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C65CB8"))) PPC_WEAK_FUNC(sub_83C65CB8);
PPC_FUNC_IMPL(__imp__sub_83C65CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18192
	ctx.r3.s64 = ctx.r11.s64 + 18192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C65CC4"))) PPC_WEAK_FUNC(sub_83C65CC4);
PPC_FUNC_IMPL(__imp__sub_83C65CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C65CC8"))) PPC_WEAK_FUNC(sub_83C65CC8);
PPC_FUNC_IMPL(__imp__sub_83C65CC8) {
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
	// addi r3,r11,18792
	ctx.r3.s64 = ctx.r11.s64 + 18792;
	// bl 0x8259af80
	ctx.lr = 0x83C65CE0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,18208
	ctx.r3.s64 = ctx.r10.s64 + 18208;
	// bl 0x831cdcc8
	ctx.lr = 0x83C65CEC;
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

__attribute__((alias("__imp__sub_83C65CFC"))) PPC_WEAK_FUNC(sub_83C65CFC);
PPC_FUNC_IMPL(__imp__sub_83C65CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C65D00"))) PPC_WEAK_FUNC(sub_83C65D00);
PPC_FUNC_IMPL(__imp__sub_83C65D00) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,18772
	ctx.r11.s64 = ctx.r8.s64 + 18772;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-30948(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30948);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,18200
	ctx.r3.s64 = ctx.r6.s64 + 18200;
	// stw r10,18772(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18772, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C65D30"))) PPC_WEAK_FUNC(sub_83C65D30);
PPC_FUNC_IMPL(__imp__sub_83C65D30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18216
	ctx.r3.s64 = ctx.r11.s64 + 18216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C65D3C"))) PPC_WEAK_FUNC(sub_83C65D3C);
PPC_FUNC_IMPL(__imp__sub_83C65D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C65D40"))) PPC_WEAK_FUNC(sub_83C65D40);
PPC_FUNC_IMPL(__imp__sub_83C65D40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18224
	ctx.r3.s64 = ctx.r11.s64 + 18224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C65D4C"))) PPC_WEAK_FUNC(sub_83C65D4C);
PPC_FUNC_IMPL(__imp__sub_83C65D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C65D50"))) PPC_WEAK_FUNC(sub_83C65D50);
PPC_FUNC_IMPL(__imp__sub_83C65D50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18232
	ctx.r3.s64 = ctx.r11.s64 + 18232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C65D5C"))) PPC_WEAK_FUNC(sub_83C65D5C);
PPC_FUNC_IMPL(__imp__sub_83C65D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C65D60"))) PPC_WEAK_FUNC(sub_83C65D60);
PPC_FUNC_IMPL(__imp__sub_83C65D60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18240
	ctx.r3.s64 = ctx.r11.s64 + 18240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C65D6C"))) PPC_WEAK_FUNC(sub_83C65D6C);
PPC_FUNC_IMPL(__imp__sub_83C65D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C65D70"))) PPC_WEAK_FUNC(sub_83C65D70);
PPC_FUNC_IMPL(__imp__sub_83C65D70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18248
	ctx.r3.s64 = ctx.r11.s64 + 18248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C65D7C"))) PPC_WEAK_FUNC(sub_83C65D7C);
PPC_FUNC_IMPL(__imp__sub_83C65D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C65D80"))) PPC_WEAK_FUNC(sub_83C65D80);
PPC_FUNC_IMPL(__imp__sub_83C65D80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18256
	ctx.r3.s64 = ctx.r11.s64 + 18256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C65D8C"))) PPC_WEAK_FUNC(sub_83C65D8C);
PPC_FUNC_IMPL(__imp__sub_83C65D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C65D90"))) PPC_WEAK_FUNC(sub_83C65D90);
PPC_FUNC_IMPL(__imp__sub_83C65D90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18264
	ctx.r3.s64 = ctx.r11.s64 + 18264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C65D9C"))) PPC_WEAK_FUNC(sub_83C65D9C);
PPC_FUNC_IMPL(__imp__sub_83C65D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C65DA0"))) PPC_WEAK_FUNC(sub_83C65DA0);
PPC_FUNC_IMPL(__imp__sub_83C65DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18272
	ctx.r3.s64 = ctx.r11.s64 + 18272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C65DAC"))) PPC_WEAK_FUNC(sub_83C65DAC);
PPC_FUNC_IMPL(__imp__sub_83C65DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C65DB0"))) PPC_WEAK_FUNC(sub_83C65DB0);
PPC_FUNC_IMPL(__imp__sub_83C65DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18280
	ctx.r3.s64 = ctx.r11.s64 + 18280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C65DBC"))) PPC_WEAK_FUNC(sub_83C65DBC);
PPC_FUNC_IMPL(__imp__sub_83C65DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C65DC0"))) PPC_WEAK_FUNC(sub_83C65DC0);
PPC_FUNC_IMPL(__imp__sub_83C65DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18288
	ctx.r3.s64 = ctx.r11.s64 + 18288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C65DCC"))) PPC_WEAK_FUNC(sub_83C65DCC);
PPC_FUNC_IMPL(__imp__sub_83C65DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C65DD0"))) PPC_WEAK_FUNC(sub_83C65DD0);
PPC_FUNC_IMPL(__imp__sub_83C65DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18296
	ctx.r3.s64 = ctx.r11.s64 + 18296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C65DDC"))) PPC_WEAK_FUNC(sub_83C65DDC);
PPC_FUNC_IMPL(__imp__sub_83C65DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C65DE0"))) PPC_WEAK_FUNC(sub_83C65DE0);
PPC_FUNC_IMPL(__imp__sub_83C65DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18304
	ctx.r3.s64 = ctx.r11.s64 + 18304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C65DEC"))) PPC_WEAK_FUNC(sub_83C65DEC);
PPC_FUNC_IMPL(__imp__sub_83C65DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C65DF0"))) PPC_WEAK_FUNC(sub_83C65DF0);
PPC_FUNC_IMPL(__imp__sub_83C65DF0) {
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
	// addi r3,r11,19136
	ctx.r3.s64 = ctx.r11.s64 + 19136;
	// bl 0x83523120
	ctx.lr = 0x83C65E08;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,18312
	ctx.r3.s64 = ctx.r10.s64 + 18312;
	// bl 0x831cdcc8
	ctx.lr = 0x83C65E14;
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

__attribute__((alias("__imp__sub_83C65E24"))) PPC_WEAK_FUNC(sub_83C65E24);
PPC_FUNC_IMPL(__imp__sub_83C65E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C65E28"))) PPC_WEAK_FUNC(sub_83C65E28);
PPC_FUNC_IMPL(__imp__sub_83C65E28) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,19152
	ctx.r7.s64 = ctx.r8.s64 + 19152;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,19152(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19152);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,19152(r8)
	PPC_STORE_U32(ctx.r8.u32 + 19152, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C65E50"))) PPC_WEAK_FUNC(sub_83C65E50);
PPC_FUNC_IMPL(__imp__sub_83C65E50) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-30776
	ctx.r6.s64 = ctx.r7.s64 + -30776;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-30848(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -30848);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,19152(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19152);
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
	// std r9,-30776(r7)
	PPC_STORE_U64(ctx.r7.u32 + -30776, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C65E98"))) PPC_WEAK_FUNC(sub_83C65E98);
PPC_FUNC_IMPL(__imp__sub_83C65E98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18328
	ctx.r3.s64 = ctx.r11.s64 + 18328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C65EA4"))) PPC_WEAK_FUNC(sub_83C65EA4);
PPC_FUNC_IMPL(__imp__sub_83C65EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C65EA8"))) PPC_WEAK_FUNC(sub_83C65EA8);
PPC_FUNC_IMPL(__imp__sub_83C65EA8) {
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
	// addi r3,r11,19160
	ctx.r3.s64 = ctx.r11.s64 + 19160;
	// bl 0x8259af80
	ctx.lr = 0x83C65EC0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,18344
	ctx.r3.s64 = ctx.r10.s64 + 18344;
	// bl 0x831cdcc8
	ctx.lr = 0x83C65ECC;
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

__attribute__((alias("__imp__sub_83C65EDC"))) PPC_WEAK_FUNC(sub_83C65EDC);
PPC_FUNC_IMPL(__imp__sub_83C65EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C65EE0"))) PPC_WEAK_FUNC(sub_83C65EE0);
PPC_FUNC_IMPL(__imp__sub_83C65EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,19140
	ctx.r11.s64 = ctx.r8.s64 + 19140;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-30800(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30800);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,18336
	ctx.r3.s64 = ctx.r6.s64 + 18336;
	// stw r10,19140(r8)
	PPC_STORE_U32(ctx.r8.u32 + 19140, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C65F10"))) PPC_WEAK_FUNC(sub_83C65F10);
PPC_FUNC_IMPL(__imp__sub_83C65F10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18352
	ctx.r3.s64 = ctx.r11.s64 + 18352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C65F1C"))) PPC_WEAK_FUNC(sub_83C65F1C);
PPC_FUNC_IMPL(__imp__sub_83C65F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C65F20"))) PPC_WEAK_FUNC(sub_83C65F20);
PPC_FUNC_IMPL(__imp__sub_83C65F20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18360
	ctx.r3.s64 = ctx.r11.s64 + 18360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C65F2C"))) PPC_WEAK_FUNC(sub_83C65F2C);
PPC_FUNC_IMPL(__imp__sub_83C65F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C65F30"))) PPC_WEAK_FUNC(sub_83C65F30);
PPC_FUNC_IMPL(__imp__sub_83C65F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18368
	ctx.r3.s64 = ctx.r11.s64 + 18368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C65F3C"))) PPC_WEAK_FUNC(sub_83C65F3C);
PPC_FUNC_IMPL(__imp__sub_83C65F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C65F40"))) PPC_WEAK_FUNC(sub_83C65F40);
PPC_FUNC_IMPL(__imp__sub_83C65F40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18376
	ctx.r3.s64 = ctx.r11.s64 + 18376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C65F4C"))) PPC_WEAK_FUNC(sub_83C65F4C);
PPC_FUNC_IMPL(__imp__sub_83C65F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C65F50"))) PPC_WEAK_FUNC(sub_83C65F50);
PPC_FUNC_IMPL(__imp__sub_83C65F50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18384
	ctx.r3.s64 = ctx.r11.s64 + 18384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C65F5C"))) PPC_WEAK_FUNC(sub_83C65F5C);
PPC_FUNC_IMPL(__imp__sub_83C65F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C65F60"))) PPC_WEAK_FUNC(sub_83C65F60);
PPC_FUNC_IMPL(__imp__sub_83C65F60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18392
	ctx.r3.s64 = ctx.r11.s64 + 18392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C65F6C"))) PPC_WEAK_FUNC(sub_83C65F6C);
PPC_FUNC_IMPL(__imp__sub_83C65F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C65F70"))) PPC_WEAK_FUNC(sub_83C65F70);
PPC_FUNC_IMPL(__imp__sub_83C65F70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18400
	ctx.r3.s64 = ctx.r11.s64 + 18400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C65F7C"))) PPC_WEAK_FUNC(sub_83C65F7C);
PPC_FUNC_IMPL(__imp__sub_83C65F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C65F80"))) PPC_WEAK_FUNC(sub_83C65F80);
PPC_FUNC_IMPL(__imp__sub_83C65F80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18408
	ctx.r3.s64 = ctx.r11.s64 + 18408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C65F8C"))) PPC_WEAK_FUNC(sub_83C65F8C);
PPC_FUNC_IMPL(__imp__sub_83C65F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C65F90"))) PPC_WEAK_FUNC(sub_83C65F90);
PPC_FUNC_IMPL(__imp__sub_83C65F90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18416
	ctx.r3.s64 = ctx.r11.s64 + 18416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C65F9C"))) PPC_WEAK_FUNC(sub_83C65F9C);
PPC_FUNC_IMPL(__imp__sub_83C65F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C65FA0"))) PPC_WEAK_FUNC(sub_83C65FA0);
PPC_FUNC_IMPL(__imp__sub_83C65FA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18424
	ctx.r3.s64 = ctx.r11.s64 + 18424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C65FAC"))) PPC_WEAK_FUNC(sub_83C65FAC);
PPC_FUNC_IMPL(__imp__sub_83C65FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C65FB0"))) PPC_WEAK_FUNC(sub_83C65FB0);
PPC_FUNC_IMPL(__imp__sub_83C65FB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18432
	ctx.r3.s64 = ctx.r11.s64 + 18432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C65FBC"))) PPC_WEAK_FUNC(sub_83C65FBC);
PPC_FUNC_IMPL(__imp__sub_83C65FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C65FC0"))) PPC_WEAK_FUNC(sub_83C65FC0);
PPC_FUNC_IMPL(__imp__sub_83C65FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18440
	ctx.r3.s64 = ctx.r11.s64 + 18440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C65FCC"))) PPC_WEAK_FUNC(sub_83C65FCC);
PPC_FUNC_IMPL(__imp__sub_83C65FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C65FD0"))) PPC_WEAK_FUNC(sub_83C65FD0);
PPC_FUNC_IMPL(__imp__sub_83C65FD0) {
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
	// addi r3,r11,19504
	ctx.r3.s64 = ctx.r11.s64 + 19504;
	// bl 0x83523120
	ctx.lr = 0x83C65FE8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,18448
	ctx.r3.s64 = ctx.r10.s64 + 18448;
	// bl 0x831cdcc8
	ctx.lr = 0x83C65FF4;
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

__attribute__((alias("__imp__sub_83C66004"))) PPC_WEAK_FUNC(sub_83C66004);
PPC_FUNC_IMPL(__imp__sub_83C66004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66008"))) PPC_WEAK_FUNC(sub_83C66008);
PPC_FUNC_IMPL(__imp__sub_83C66008) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,19520
	ctx.r7.s64 = ctx.r8.s64 + 19520;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,19520(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19520);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,19520(r8)
	PPC_STORE_U32(ctx.r8.u32 + 19520, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C66030"))) PPC_WEAK_FUNC(sub_83C66030);
PPC_FUNC_IMPL(__imp__sub_83C66030) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-30648
	ctx.r6.s64 = ctx.r7.s64 + -30648;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-30720(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -30720);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,19520(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19520);
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
	// std r9,-30648(r7)
	PPC_STORE_U64(ctx.r7.u32 + -30648, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C66078"))) PPC_WEAK_FUNC(sub_83C66078);
PPC_FUNC_IMPL(__imp__sub_83C66078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18464
	ctx.r3.s64 = ctx.r11.s64 + 18464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C66084"))) PPC_WEAK_FUNC(sub_83C66084);
PPC_FUNC_IMPL(__imp__sub_83C66084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66088"))) PPC_WEAK_FUNC(sub_83C66088);
PPC_FUNC_IMPL(__imp__sub_83C66088) {
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
	// addi r3,r11,19528
	ctx.r3.s64 = ctx.r11.s64 + 19528;
	// bl 0x8259af80
	ctx.lr = 0x83C660A0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,18480
	ctx.r3.s64 = ctx.r10.s64 + 18480;
	// bl 0x831cdcc8
	ctx.lr = 0x83C660AC;
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

__attribute__((alias("__imp__sub_83C660BC"))) PPC_WEAK_FUNC(sub_83C660BC);
PPC_FUNC_IMPL(__imp__sub_83C660BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C660C0"))) PPC_WEAK_FUNC(sub_83C660C0);
PPC_FUNC_IMPL(__imp__sub_83C660C0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,19508
	ctx.r11.s64 = ctx.r8.s64 + 19508;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-30672(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30672);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,18472
	ctx.r3.s64 = ctx.r6.s64 + 18472;
	// stw r10,19508(r8)
	PPC_STORE_U32(ctx.r8.u32 + 19508, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C660F0"))) PPC_WEAK_FUNC(sub_83C660F0);
PPC_FUNC_IMPL(__imp__sub_83C660F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18488
	ctx.r3.s64 = ctx.r11.s64 + 18488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C660FC"))) PPC_WEAK_FUNC(sub_83C660FC);
PPC_FUNC_IMPL(__imp__sub_83C660FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66100"))) PPC_WEAK_FUNC(sub_83C66100);
PPC_FUNC_IMPL(__imp__sub_83C66100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18496
	ctx.r3.s64 = ctx.r11.s64 + 18496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6610C"))) PPC_WEAK_FUNC(sub_83C6610C);
PPC_FUNC_IMPL(__imp__sub_83C6610C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66110"))) PPC_WEAK_FUNC(sub_83C66110);
PPC_FUNC_IMPL(__imp__sub_83C66110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18504
	ctx.r3.s64 = ctx.r11.s64 + 18504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6611C"))) PPC_WEAK_FUNC(sub_83C6611C);
PPC_FUNC_IMPL(__imp__sub_83C6611C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66120"))) PPC_WEAK_FUNC(sub_83C66120);
PPC_FUNC_IMPL(__imp__sub_83C66120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18512
	ctx.r3.s64 = ctx.r11.s64 + 18512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6612C"))) PPC_WEAK_FUNC(sub_83C6612C);
PPC_FUNC_IMPL(__imp__sub_83C6612C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66130"))) PPC_WEAK_FUNC(sub_83C66130);
PPC_FUNC_IMPL(__imp__sub_83C66130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18520
	ctx.r3.s64 = ctx.r11.s64 + 18520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6613C"))) PPC_WEAK_FUNC(sub_83C6613C);
PPC_FUNC_IMPL(__imp__sub_83C6613C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66140"))) PPC_WEAK_FUNC(sub_83C66140);
PPC_FUNC_IMPL(__imp__sub_83C66140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18528
	ctx.r3.s64 = ctx.r11.s64 + 18528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6614C"))) PPC_WEAK_FUNC(sub_83C6614C);
PPC_FUNC_IMPL(__imp__sub_83C6614C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66150"))) PPC_WEAK_FUNC(sub_83C66150);
PPC_FUNC_IMPL(__imp__sub_83C66150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18536
	ctx.r3.s64 = ctx.r11.s64 + 18536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6615C"))) PPC_WEAK_FUNC(sub_83C6615C);
PPC_FUNC_IMPL(__imp__sub_83C6615C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66160"))) PPC_WEAK_FUNC(sub_83C66160);
PPC_FUNC_IMPL(__imp__sub_83C66160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18544
	ctx.r3.s64 = ctx.r11.s64 + 18544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6616C"))) PPC_WEAK_FUNC(sub_83C6616C);
PPC_FUNC_IMPL(__imp__sub_83C6616C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66170"))) PPC_WEAK_FUNC(sub_83C66170);
PPC_FUNC_IMPL(__imp__sub_83C66170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18552
	ctx.r3.s64 = ctx.r11.s64 + 18552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6617C"))) PPC_WEAK_FUNC(sub_83C6617C);
PPC_FUNC_IMPL(__imp__sub_83C6617C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66180"))) PPC_WEAK_FUNC(sub_83C66180);
PPC_FUNC_IMPL(__imp__sub_83C66180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18560
	ctx.r3.s64 = ctx.r11.s64 + 18560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6618C"))) PPC_WEAK_FUNC(sub_83C6618C);
PPC_FUNC_IMPL(__imp__sub_83C6618C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66190"))) PPC_WEAK_FUNC(sub_83C66190);
PPC_FUNC_IMPL(__imp__sub_83C66190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18568
	ctx.r3.s64 = ctx.r11.s64 + 18568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6619C"))) PPC_WEAK_FUNC(sub_83C6619C);
PPC_FUNC_IMPL(__imp__sub_83C6619C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C661A0"))) PPC_WEAK_FUNC(sub_83C661A0);
PPC_FUNC_IMPL(__imp__sub_83C661A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18576
	ctx.r3.s64 = ctx.r11.s64 + 18576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C661AC"))) PPC_WEAK_FUNC(sub_83C661AC);
PPC_FUNC_IMPL(__imp__sub_83C661AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C661B0"))) PPC_WEAK_FUNC(sub_83C661B0);
PPC_FUNC_IMPL(__imp__sub_83C661B0) {
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
	// addi r3,r11,19872
	ctx.r3.s64 = ctx.r11.s64 + 19872;
	// bl 0x83523120
	ctx.lr = 0x83C661C8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,18584
	ctx.r3.s64 = ctx.r10.s64 + 18584;
	// bl 0x831cdcc8
	ctx.lr = 0x83C661D4;
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

__attribute__((alias("__imp__sub_83C661E4"))) PPC_WEAK_FUNC(sub_83C661E4);
PPC_FUNC_IMPL(__imp__sub_83C661E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C661E8"))) PPC_WEAK_FUNC(sub_83C661E8);
PPC_FUNC_IMPL(__imp__sub_83C661E8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,19888
	ctx.r7.s64 = ctx.r8.s64 + 19888;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,19888(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19888);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,19888(r8)
	PPC_STORE_U32(ctx.r8.u32 + 19888, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C66210"))) PPC_WEAK_FUNC(sub_83C66210);
PPC_FUNC_IMPL(__imp__sub_83C66210) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-30520
	ctx.r6.s64 = ctx.r7.s64 + -30520;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-30592(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -30592);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,19888(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19888);
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
	// std r9,-30520(r7)
	PPC_STORE_U64(ctx.r7.u32 + -30520, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C66258"))) PPC_WEAK_FUNC(sub_83C66258);
PPC_FUNC_IMPL(__imp__sub_83C66258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18600
	ctx.r3.s64 = ctx.r11.s64 + 18600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C66264"))) PPC_WEAK_FUNC(sub_83C66264);
PPC_FUNC_IMPL(__imp__sub_83C66264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66268"))) PPC_WEAK_FUNC(sub_83C66268);
PPC_FUNC_IMPL(__imp__sub_83C66268) {
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
	// addi r3,r11,19896
	ctx.r3.s64 = ctx.r11.s64 + 19896;
	// bl 0x8259af80
	ctx.lr = 0x83C66280;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,18616
	ctx.r3.s64 = ctx.r10.s64 + 18616;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6628C;
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

__attribute__((alias("__imp__sub_83C6629C"))) PPC_WEAK_FUNC(sub_83C6629C);
PPC_FUNC_IMPL(__imp__sub_83C6629C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C662A0"))) PPC_WEAK_FUNC(sub_83C662A0);
PPC_FUNC_IMPL(__imp__sub_83C662A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,19876
	ctx.r11.s64 = ctx.r8.s64 + 19876;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-30544(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30544);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,18608
	ctx.r3.s64 = ctx.r6.s64 + 18608;
	// stw r10,19876(r8)
	PPC_STORE_U32(ctx.r8.u32 + 19876, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C662D0"))) PPC_WEAK_FUNC(sub_83C662D0);
PPC_FUNC_IMPL(__imp__sub_83C662D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18624
	ctx.r3.s64 = ctx.r11.s64 + 18624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C662DC"))) PPC_WEAK_FUNC(sub_83C662DC);
PPC_FUNC_IMPL(__imp__sub_83C662DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C662E0"))) PPC_WEAK_FUNC(sub_83C662E0);
PPC_FUNC_IMPL(__imp__sub_83C662E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18632
	ctx.r3.s64 = ctx.r11.s64 + 18632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C662EC"))) PPC_WEAK_FUNC(sub_83C662EC);
PPC_FUNC_IMPL(__imp__sub_83C662EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C662F0"))) PPC_WEAK_FUNC(sub_83C662F0);
PPC_FUNC_IMPL(__imp__sub_83C662F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18640
	ctx.r3.s64 = ctx.r11.s64 + 18640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C662FC"))) PPC_WEAK_FUNC(sub_83C662FC);
PPC_FUNC_IMPL(__imp__sub_83C662FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66300"))) PPC_WEAK_FUNC(sub_83C66300);
PPC_FUNC_IMPL(__imp__sub_83C66300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18648
	ctx.r3.s64 = ctx.r11.s64 + 18648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6630C"))) PPC_WEAK_FUNC(sub_83C6630C);
PPC_FUNC_IMPL(__imp__sub_83C6630C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66310"))) PPC_WEAK_FUNC(sub_83C66310);
PPC_FUNC_IMPL(__imp__sub_83C66310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18656
	ctx.r3.s64 = ctx.r11.s64 + 18656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6631C"))) PPC_WEAK_FUNC(sub_83C6631C);
PPC_FUNC_IMPL(__imp__sub_83C6631C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66320"))) PPC_WEAK_FUNC(sub_83C66320);
PPC_FUNC_IMPL(__imp__sub_83C66320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18664
	ctx.r3.s64 = ctx.r11.s64 + 18664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6632C"))) PPC_WEAK_FUNC(sub_83C6632C);
PPC_FUNC_IMPL(__imp__sub_83C6632C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66330"))) PPC_WEAK_FUNC(sub_83C66330);
PPC_FUNC_IMPL(__imp__sub_83C66330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18672
	ctx.r3.s64 = ctx.r11.s64 + 18672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6633C"))) PPC_WEAK_FUNC(sub_83C6633C);
PPC_FUNC_IMPL(__imp__sub_83C6633C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66340"))) PPC_WEAK_FUNC(sub_83C66340);
PPC_FUNC_IMPL(__imp__sub_83C66340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18680
	ctx.r3.s64 = ctx.r11.s64 + 18680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6634C"))) PPC_WEAK_FUNC(sub_83C6634C);
PPC_FUNC_IMPL(__imp__sub_83C6634C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66350"))) PPC_WEAK_FUNC(sub_83C66350);
PPC_FUNC_IMPL(__imp__sub_83C66350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18688
	ctx.r3.s64 = ctx.r11.s64 + 18688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6635C"))) PPC_WEAK_FUNC(sub_83C6635C);
PPC_FUNC_IMPL(__imp__sub_83C6635C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66360"))) PPC_WEAK_FUNC(sub_83C66360);
PPC_FUNC_IMPL(__imp__sub_83C66360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18696
	ctx.r3.s64 = ctx.r11.s64 + 18696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6636C"))) PPC_WEAK_FUNC(sub_83C6636C);
PPC_FUNC_IMPL(__imp__sub_83C6636C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66370"))) PPC_WEAK_FUNC(sub_83C66370);
PPC_FUNC_IMPL(__imp__sub_83C66370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18704
	ctx.r3.s64 = ctx.r11.s64 + 18704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6637C"))) PPC_WEAK_FUNC(sub_83C6637C);
PPC_FUNC_IMPL(__imp__sub_83C6637C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66380"))) PPC_WEAK_FUNC(sub_83C66380);
PPC_FUNC_IMPL(__imp__sub_83C66380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18712
	ctx.r3.s64 = ctx.r11.s64 + 18712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6638C"))) PPC_WEAK_FUNC(sub_83C6638C);
PPC_FUNC_IMPL(__imp__sub_83C6638C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66390"))) PPC_WEAK_FUNC(sub_83C66390);
PPC_FUNC_IMPL(__imp__sub_83C66390) {
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
	// addi r3,r11,20240
	ctx.r3.s64 = ctx.r11.s64 + 20240;
	// bl 0x83523120
	ctx.lr = 0x83C663A8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,18720
	ctx.r3.s64 = ctx.r10.s64 + 18720;
	// bl 0x831cdcc8
	ctx.lr = 0x83C663B4;
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

__attribute__((alias("__imp__sub_83C663C4"))) PPC_WEAK_FUNC(sub_83C663C4);
PPC_FUNC_IMPL(__imp__sub_83C663C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C663C8"))) PPC_WEAK_FUNC(sub_83C663C8);
PPC_FUNC_IMPL(__imp__sub_83C663C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,20256
	ctx.r7.s64 = ctx.r8.s64 + 20256;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,20256(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20256);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,20256(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20256, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C663F0"))) PPC_WEAK_FUNC(sub_83C663F0);
PPC_FUNC_IMPL(__imp__sub_83C663F0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-30392
	ctx.r6.s64 = ctx.r7.s64 + -30392;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-30464(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -30464);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,20256(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20256);
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
	// std r9,-30392(r7)
	PPC_STORE_U64(ctx.r7.u32 + -30392, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C66438"))) PPC_WEAK_FUNC(sub_83C66438);
PPC_FUNC_IMPL(__imp__sub_83C66438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18736
	ctx.r3.s64 = ctx.r11.s64 + 18736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C66444"))) PPC_WEAK_FUNC(sub_83C66444);
PPC_FUNC_IMPL(__imp__sub_83C66444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66448"))) PPC_WEAK_FUNC(sub_83C66448);
PPC_FUNC_IMPL(__imp__sub_83C66448) {
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
	// addi r3,r11,20264
	ctx.r3.s64 = ctx.r11.s64 + 20264;
	// bl 0x8259af80
	ctx.lr = 0x83C66460;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,18752
	ctx.r3.s64 = ctx.r10.s64 + 18752;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6646C;
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

__attribute__((alias("__imp__sub_83C6647C"))) PPC_WEAK_FUNC(sub_83C6647C);
PPC_FUNC_IMPL(__imp__sub_83C6647C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66480"))) PPC_WEAK_FUNC(sub_83C66480);
PPC_FUNC_IMPL(__imp__sub_83C66480) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,20244
	ctx.r11.s64 = ctx.r8.s64 + 20244;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-30416(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30416);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,18744
	ctx.r3.s64 = ctx.r6.s64 + 18744;
	// stw r10,20244(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20244, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C664B0"))) PPC_WEAK_FUNC(sub_83C664B0);
PPC_FUNC_IMPL(__imp__sub_83C664B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18760
	ctx.r3.s64 = ctx.r11.s64 + 18760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C664BC"))) PPC_WEAK_FUNC(sub_83C664BC);
PPC_FUNC_IMPL(__imp__sub_83C664BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C664C0"))) PPC_WEAK_FUNC(sub_83C664C0);
PPC_FUNC_IMPL(__imp__sub_83C664C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18768
	ctx.r3.s64 = ctx.r11.s64 + 18768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C664CC"))) PPC_WEAK_FUNC(sub_83C664CC);
PPC_FUNC_IMPL(__imp__sub_83C664CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C664D0"))) PPC_WEAK_FUNC(sub_83C664D0);
PPC_FUNC_IMPL(__imp__sub_83C664D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18776
	ctx.r3.s64 = ctx.r11.s64 + 18776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C664DC"))) PPC_WEAK_FUNC(sub_83C664DC);
PPC_FUNC_IMPL(__imp__sub_83C664DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C664E0"))) PPC_WEAK_FUNC(sub_83C664E0);
PPC_FUNC_IMPL(__imp__sub_83C664E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18784
	ctx.r3.s64 = ctx.r11.s64 + 18784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C664EC"))) PPC_WEAK_FUNC(sub_83C664EC);
PPC_FUNC_IMPL(__imp__sub_83C664EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C664F0"))) PPC_WEAK_FUNC(sub_83C664F0);
PPC_FUNC_IMPL(__imp__sub_83C664F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18792
	ctx.r3.s64 = ctx.r11.s64 + 18792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C664FC"))) PPC_WEAK_FUNC(sub_83C664FC);
PPC_FUNC_IMPL(__imp__sub_83C664FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66500"))) PPC_WEAK_FUNC(sub_83C66500);
PPC_FUNC_IMPL(__imp__sub_83C66500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18800
	ctx.r3.s64 = ctx.r11.s64 + 18800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6650C"))) PPC_WEAK_FUNC(sub_83C6650C);
PPC_FUNC_IMPL(__imp__sub_83C6650C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66510"))) PPC_WEAK_FUNC(sub_83C66510);
PPC_FUNC_IMPL(__imp__sub_83C66510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18808
	ctx.r3.s64 = ctx.r11.s64 + 18808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6651C"))) PPC_WEAK_FUNC(sub_83C6651C);
PPC_FUNC_IMPL(__imp__sub_83C6651C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66520"))) PPC_WEAK_FUNC(sub_83C66520);
PPC_FUNC_IMPL(__imp__sub_83C66520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18816
	ctx.r3.s64 = ctx.r11.s64 + 18816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6652C"))) PPC_WEAK_FUNC(sub_83C6652C);
PPC_FUNC_IMPL(__imp__sub_83C6652C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66530"))) PPC_WEAK_FUNC(sub_83C66530);
PPC_FUNC_IMPL(__imp__sub_83C66530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18824
	ctx.r3.s64 = ctx.r11.s64 + 18824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6653C"))) PPC_WEAK_FUNC(sub_83C6653C);
PPC_FUNC_IMPL(__imp__sub_83C6653C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66540"))) PPC_WEAK_FUNC(sub_83C66540);
PPC_FUNC_IMPL(__imp__sub_83C66540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18832
	ctx.r3.s64 = ctx.r11.s64 + 18832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6654C"))) PPC_WEAK_FUNC(sub_83C6654C);
PPC_FUNC_IMPL(__imp__sub_83C6654C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66550"))) PPC_WEAK_FUNC(sub_83C66550);
PPC_FUNC_IMPL(__imp__sub_83C66550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18840
	ctx.r3.s64 = ctx.r11.s64 + 18840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6655C"))) PPC_WEAK_FUNC(sub_83C6655C);
PPC_FUNC_IMPL(__imp__sub_83C6655C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66560"))) PPC_WEAK_FUNC(sub_83C66560);
PPC_FUNC_IMPL(__imp__sub_83C66560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18848
	ctx.r3.s64 = ctx.r11.s64 + 18848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6656C"))) PPC_WEAK_FUNC(sub_83C6656C);
PPC_FUNC_IMPL(__imp__sub_83C6656C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66570"))) PPC_WEAK_FUNC(sub_83C66570);
PPC_FUNC_IMPL(__imp__sub_83C66570) {
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
	// addi r3,r11,20608
	ctx.r3.s64 = ctx.r11.s64 + 20608;
	// bl 0x83523120
	ctx.lr = 0x83C66588;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,18856
	ctx.r3.s64 = ctx.r10.s64 + 18856;
	// bl 0x831cdcc8
	ctx.lr = 0x83C66594;
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

__attribute__((alias("__imp__sub_83C665A4"))) PPC_WEAK_FUNC(sub_83C665A4);
PPC_FUNC_IMPL(__imp__sub_83C665A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C665A8"))) PPC_WEAK_FUNC(sub_83C665A8);
PPC_FUNC_IMPL(__imp__sub_83C665A8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,20624
	ctx.r7.s64 = ctx.r8.s64 + 20624;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,20624(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20624);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,20624(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20624, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C665D0"))) PPC_WEAK_FUNC(sub_83C665D0);
PPC_FUNC_IMPL(__imp__sub_83C665D0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-30264
	ctx.r6.s64 = ctx.r7.s64 + -30264;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-30336(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -30336);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,20624(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20624);
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
	// std r9,-30264(r7)
	PPC_STORE_U64(ctx.r7.u32 + -30264, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C66618"))) PPC_WEAK_FUNC(sub_83C66618);
PPC_FUNC_IMPL(__imp__sub_83C66618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18872
	ctx.r3.s64 = ctx.r11.s64 + 18872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C66624"))) PPC_WEAK_FUNC(sub_83C66624);
PPC_FUNC_IMPL(__imp__sub_83C66624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66628"))) PPC_WEAK_FUNC(sub_83C66628);
PPC_FUNC_IMPL(__imp__sub_83C66628) {
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
	// addi r3,r11,20632
	ctx.r3.s64 = ctx.r11.s64 + 20632;
	// bl 0x8259af80
	ctx.lr = 0x83C66640;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,18888
	ctx.r3.s64 = ctx.r10.s64 + 18888;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6664C;
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

__attribute__((alias("__imp__sub_83C6665C"))) PPC_WEAK_FUNC(sub_83C6665C);
PPC_FUNC_IMPL(__imp__sub_83C6665C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66660"))) PPC_WEAK_FUNC(sub_83C66660);
PPC_FUNC_IMPL(__imp__sub_83C66660) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,20612
	ctx.r11.s64 = ctx.r8.s64 + 20612;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-30288(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30288);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,18880
	ctx.r3.s64 = ctx.r6.s64 + 18880;
	// stw r10,20612(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20612, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C66690"))) PPC_WEAK_FUNC(sub_83C66690);
PPC_FUNC_IMPL(__imp__sub_83C66690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18896
	ctx.r3.s64 = ctx.r11.s64 + 18896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6669C"))) PPC_WEAK_FUNC(sub_83C6669C);
PPC_FUNC_IMPL(__imp__sub_83C6669C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C666A0"))) PPC_WEAK_FUNC(sub_83C666A0);
PPC_FUNC_IMPL(__imp__sub_83C666A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18904
	ctx.r3.s64 = ctx.r11.s64 + 18904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C666AC"))) PPC_WEAK_FUNC(sub_83C666AC);
PPC_FUNC_IMPL(__imp__sub_83C666AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C666B0"))) PPC_WEAK_FUNC(sub_83C666B0);
PPC_FUNC_IMPL(__imp__sub_83C666B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18912
	ctx.r3.s64 = ctx.r11.s64 + 18912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C666BC"))) PPC_WEAK_FUNC(sub_83C666BC);
PPC_FUNC_IMPL(__imp__sub_83C666BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C666C0"))) PPC_WEAK_FUNC(sub_83C666C0);
PPC_FUNC_IMPL(__imp__sub_83C666C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18920
	ctx.r3.s64 = ctx.r11.s64 + 18920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C666CC"))) PPC_WEAK_FUNC(sub_83C666CC);
PPC_FUNC_IMPL(__imp__sub_83C666CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C666D0"))) PPC_WEAK_FUNC(sub_83C666D0);
PPC_FUNC_IMPL(__imp__sub_83C666D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18928
	ctx.r3.s64 = ctx.r11.s64 + 18928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C666DC"))) PPC_WEAK_FUNC(sub_83C666DC);
PPC_FUNC_IMPL(__imp__sub_83C666DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C666E0"))) PPC_WEAK_FUNC(sub_83C666E0);
PPC_FUNC_IMPL(__imp__sub_83C666E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18936
	ctx.r3.s64 = ctx.r11.s64 + 18936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C666EC"))) PPC_WEAK_FUNC(sub_83C666EC);
PPC_FUNC_IMPL(__imp__sub_83C666EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C666F0"))) PPC_WEAK_FUNC(sub_83C666F0);
PPC_FUNC_IMPL(__imp__sub_83C666F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18944
	ctx.r3.s64 = ctx.r11.s64 + 18944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C666FC"))) PPC_WEAK_FUNC(sub_83C666FC);
PPC_FUNC_IMPL(__imp__sub_83C666FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66700"))) PPC_WEAK_FUNC(sub_83C66700);
PPC_FUNC_IMPL(__imp__sub_83C66700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18952
	ctx.r3.s64 = ctx.r11.s64 + 18952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6670C"))) PPC_WEAK_FUNC(sub_83C6670C);
PPC_FUNC_IMPL(__imp__sub_83C6670C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C66710"))) PPC_WEAK_FUNC(sub_83C66710);
PPC_FUNC_IMPL(__imp__sub_83C66710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,18960
	ctx.r3.s64 = ctx.r11.s64 + 18960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6671C"))) PPC_WEAK_FUNC(sub_83C6671C);
PPC_FUNC_IMPL(__imp__sub_83C6671C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

