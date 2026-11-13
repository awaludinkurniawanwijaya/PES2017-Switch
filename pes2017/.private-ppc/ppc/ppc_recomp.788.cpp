#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C4CC14"))) PPC_WEAK_FUNC(sub_83C4CC14);
PPC_FUNC_IMPL(__imp__sub_83C4CC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4CC18"))) PPC_WEAK_FUNC(sub_83C4CC18);
PPC_FUNC_IMPL(__imp__sub_83C4CC18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12104
	ctx.r3.s64 = ctx.r11.s64 + -12104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4CC24"))) PPC_WEAK_FUNC(sub_83C4CC24);
PPC_FUNC_IMPL(__imp__sub_83C4CC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4CC28"))) PPC_WEAK_FUNC(sub_83C4CC28);
PPC_FUNC_IMPL(__imp__sub_83C4CC28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12096
	ctx.r3.s64 = ctx.r11.s64 + -12096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4CC34"))) PPC_WEAK_FUNC(sub_83C4CC34);
PPC_FUNC_IMPL(__imp__sub_83C4CC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4CC38"))) PPC_WEAK_FUNC(sub_83C4CC38);
PPC_FUNC_IMPL(__imp__sub_83C4CC38) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,9088
	ctx.r7.s64 = ctx.r8.s64 + 9088;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,9088(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 9088);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,9088(r8)
	PPC_STORE_U32(ctx.r8.u32 + 9088, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4CC60"))) PPC_WEAK_FUNC(sub_83C4CC60);
PPC_FUNC_IMPL(__imp__sub_83C4CC60) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,4968
	ctx.r6.s64 = ctx.r7.s64 + 4968;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,4896(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 4896);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,9088(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 9088);
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
	// std r9,4968(r7)
	PPC_STORE_U64(ctx.r7.u32 + 4968, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4CCA8"))) PPC_WEAK_FUNC(sub_83C4CCA8);
PPC_FUNC_IMPL(__imp__sub_83C4CCA8) {
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
	// addi r3,r11,9072
	ctx.r3.s64 = ctx.r11.s64 + 9072;
	// bl 0x83523120
	ctx.lr = 0x83C4CCC0;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-12088
	ctx.r3.s64 = ctx.r10.s64 + -12088;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4CCCC;
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

__attribute__((alias("__imp__sub_83C4CCDC"))) PPC_WEAK_FUNC(sub_83C4CCDC);
PPC_FUNC_IMPL(__imp__sub_83C4CCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4CCE0"))) PPC_WEAK_FUNC(sub_83C4CCE0);
PPC_FUNC_IMPL(__imp__sub_83C4CCE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12072
	ctx.r3.s64 = ctx.r11.s64 + -12072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4CCEC"))) PPC_WEAK_FUNC(sub_83C4CCEC);
PPC_FUNC_IMPL(__imp__sub_83C4CCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4CCF0"))) PPC_WEAK_FUNC(sub_83C4CCF0);
PPC_FUNC_IMPL(__imp__sub_83C4CCF0) {
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
	// addi r3,r11,9096
	ctx.r3.s64 = ctx.r11.s64 + 9096;
	// bl 0x8259af80
	ctx.lr = 0x83C4CD08;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-12056
	ctx.r3.s64 = ctx.r10.s64 + -12056;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4CD14;
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

__attribute__((alias("__imp__sub_83C4CD24"))) PPC_WEAK_FUNC(sub_83C4CD24);
PPC_FUNC_IMPL(__imp__sub_83C4CD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4CD28"))) PPC_WEAK_FUNC(sub_83C4CD28);
PPC_FUNC_IMPL(__imp__sub_83C4CD28) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,9076
	ctx.r11.s64 = ctx.r8.s64 + 9076;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,4944(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4944);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-12064
	ctx.r3.s64 = ctx.r6.s64 + -12064;
	// stw r10,9076(r8)
	PPC_STORE_U32(ctx.r8.u32 + 9076, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4CD58"))) PPC_WEAK_FUNC(sub_83C4CD58);
PPC_FUNC_IMPL(__imp__sub_83C4CD58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12048
	ctx.r3.s64 = ctx.r11.s64 + -12048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4CD64"))) PPC_WEAK_FUNC(sub_83C4CD64);
PPC_FUNC_IMPL(__imp__sub_83C4CD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4CD68"))) PPC_WEAK_FUNC(sub_83C4CD68);
PPC_FUNC_IMPL(__imp__sub_83C4CD68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12040
	ctx.r3.s64 = ctx.r11.s64 + -12040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4CD74"))) PPC_WEAK_FUNC(sub_83C4CD74);
PPC_FUNC_IMPL(__imp__sub_83C4CD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4CD78"))) PPC_WEAK_FUNC(sub_83C4CD78);
PPC_FUNC_IMPL(__imp__sub_83C4CD78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12032
	ctx.r3.s64 = ctx.r11.s64 + -12032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4CD84"))) PPC_WEAK_FUNC(sub_83C4CD84);
PPC_FUNC_IMPL(__imp__sub_83C4CD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4CD88"))) PPC_WEAK_FUNC(sub_83C4CD88);
PPC_FUNC_IMPL(__imp__sub_83C4CD88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12024
	ctx.r3.s64 = ctx.r11.s64 + -12024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4CD94"))) PPC_WEAK_FUNC(sub_83C4CD94);
PPC_FUNC_IMPL(__imp__sub_83C4CD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4CD98"))) PPC_WEAK_FUNC(sub_83C4CD98);
PPC_FUNC_IMPL(__imp__sub_83C4CD98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12016
	ctx.r3.s64 = ctx.r11.s64 + -12016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4CDA4"))) PPC_WEAK_FUNC(sub_83C4CDA4);
PPC_FUNC_IMPL(__imp__sub_83C4CDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4CDA8"))) PPC_WEAK_FUNC(sub_83C4CDA8);
PPC_FUNC_IMPL(__imp__sub_83C4CDA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12008
	ctx.r3.s64 = ctx.r11.s64 + -12008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4CDB4"))) PPC_WEAK_FUNC(sub_83C4CDB4);
PPC_FUNC_IMPL(__imp__sub_83C4CDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4CDB8"))) PPC_WEAK_FUNC(sub_83C4CDB8);
PPC_FUNC_IMPL(__imp__sub_83C4CDB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-12000
	ctx.r3.s64 = ctx.r11.s64 + -12000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4CDC4"))) PPC_WEAK_FUNC(sub_83C4CDC4);
PPC_FUNC_IMPL(__imp__sub_83C4CDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4CDC8"))) PPC_WEAK_FUNC(sub_83C4CDC8);
PPC_FUNC_IMPL(__imp__sub_83C4CDC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11992
	ctx.r3.s64 = ctx.r11.s64 + -11992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4CDD4"))) PPC_WEAK_FUNC(sub_83C4CDD4);
PPC_FUNC_IMPL(__imp__sub_83C4CDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4CDD8"))) PPC_WEAK_FUNC(sub_83C4CDD8);
PPC_FUNC_IMPL(__imp__sub_83C4CDD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11984
	ctx.r3.s64 = ctx.r11.s64 + -11984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4CDE4"))) PPC_WEAK_FUNC(sub_83C4CDE4);
PPC_FUNC_IMPL(__imp__sub_83C4CDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4CDE8"))) PPC_WEAK_FUNC(sub_83C4CDE8);
PPC_FUNC_IMPL(__imp__sub_83C4CDE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11976
	ctx.r3.s64 = ctx.r11.s64 + -11976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4CDF4"))) PPC_WEAK_FUNC(sub_83C4CDF4);
PPC_FUNC_IMPL(__imp__sub_83C4CDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4CDF8"))) PPC_WEAK_FUNC(sub_83C4CDF8);
PPC_FUNC_IMPL(__imp__sub_83C4CDF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11968
	ctx.r3.s64 = ctx.r11.s64 + -11968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4CE04"))) PPC_WEAK_FUNC(sub_83C4CE04);
PPC_FUNC_IMPL(__imp__sub_83C4CE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4CE08"))) PPC_WEAK_FUNC(sub_83C4CE08);
PPC_FUNC_IMPL(__imp__sub_83C4CE08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11960
	ctx.r3.s64 = ctx.r11.s64 + -11960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4CE14"))) PPC_WEAK_FUNC(sub_83C4CE14);
PPC_FUNC_IMPL(__imp__sub_83C4CE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4CE18"))) PPC_WEAK_FUNC(sub_83C4CE18);
PPC_FUNC_IMPL(__imp__sub_83C4CE18) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,9456
	ctx.r7.s64 = ctx.r8.s64 + 9456;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,9456(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 9456);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,9456(r8)
	PPC_STORE_U32(ctx.r8.u32 + 9456, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4CE40"))) PPC_WEAK_FUNC(sub_83C4CE40);
PPC_FUNC_IMPL(__imp__sub_83C4CE40) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,5096
	ctx.r6.s64 = ctx.r7.s64 + 5096;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,5024(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 5024);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,9456(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 9456);
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
	// std r9,5096(r7)
	PPC_STORE_U64(ctx.r7.u32 + 5096, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4CE88"))) PPC_WEAK_FUNC(sub_83C4CE88);
PPC_FUNC_IMPL(__imp__sub_83C4CE88) {
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
	// addi r3,r11,9440
	ctx.r3.s64 = ctx.r11.s64 + 9440;
	// bl 0x83523120
	ctx.lr = 0x83C4CEA0;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-11952
	ctx.r3.s64 = ctx.r10.s64 + -11952;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4CEAC;
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

__attribute__((alias("__imp__sub_83C4CEBC"))) PPC_WEAK_FUNC(sub_83C4CEBC);
PPC_FUNC_IMPL(__imp__sub_83C4CEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4CEC0"))) PPC_WEAK_FUNC(sub_83C4CEC0);
PPC_FUNC_IMPL(__imp__sub_83C4CEC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11936
	ctx.r3.s64 = ctx.r11.s64 + -11936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4CECC"))) PPC_WEAK_FUNC(sub_83C4CECC);
PPC_FUNC_IMPL(__imp__sub_83C4CECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4CED0"))) PPC_WEAK_FUNC(sub_83C4CED0);
PPC_FUNC_IMPL(__imp__sub_83C4CED0) {
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
	// addi r3,r11,9464
	ctx.r3.s64 = ctx.r11.s64 + 9464;
	// bl 0x8259af80
	ctx.lr = 0x83C4CEE8;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-11920
	ctx.r3.s64 = ctx.r10.s64 + -11920;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4CEF4;
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

__attribute__((alias("__imp__sub_83C4CF04"))) PPC_WEAK_FUNC(sub_83C4CF04);
PPC_FUNC_IMPL(__imp__sub_83C4CF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4CF08"))) PPC_WEAK_FUNC(sub_83C4CF08);
PPC_FUNC_IMPL(__imp__sub_83C4CF08) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,9444
	ctx.r11.s64 = ctx.r8.s64 + 9444;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,5072(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5072);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-11928
	ctx.r3.s64 = ctx.r6.s64 + -11928;
	// stw r10,9444(r8)
	PPC_STORE_U32(ctx.r8.u32 + 9444, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4CF38"))) PPC_WEAK_FUNC(sub_83C4CF38);
PPC_FUNC_IMPL(__imp__sub_83C4CF38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11912
	ctx.r3.s64 = ctx.r11.s64 + -11912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4CF44"))) PPC_WEAK_FUNC(sub_83C4CF44);
PPC_FUNC_IMPL(__imp__sub_83C4CF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4CF48"))) PPC_WEAK_FUNC(sub_83C4CF48);
PPC_FUNC_IMPL(__imp__sub_83C4CF48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11904
	ctx.r3.s64 = ctx.r11.s64 + -11904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4CF54"))) PPC_WEAK_FUNC(sub_83C4CF54);
PPC_FUNC_IMPL(__imp__sub_83C4CF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4CF58"))) PPC_WEAK_FUNC(sub_83C4CF58);
PPC_FUNC_IMPL(__imp__sub_83C4CF58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11896
	ctx.r3.s64 = ctx.r11.s64 + -11896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4CF64"))) PPC_WEAK_FUNC(sub_83C4CF64);
PPC_FUNC_IMPL(__imp__sub_83C4CF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4CF68"))) PPC_WEAK_FUNC(sub_83C4CF68);
PPC_FUNC_IMPL(__imp__sub_83C4CF68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11888
	ctx.r3.s64 = ctx.r11.s64 + -11888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4CF74"))) PPC_WEAK_FUNC(sub_83C4CF74);
PPC_FUNC_IMPL(__imp__sub_83C4CF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4CF78"))) PPC_WEAK_FUNC(sub_83C4CF78);
PPC_FUNC_IMPL(__imp__sub_83C4CF78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11880
	ctx.r3.s64 = ctx.r11.s64 + -11880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4CF84"))) PPC_WEAK_FUNC(sub_83C4CF84);
PPC_FUNC_IMPL(__imp__sub_83C4CF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4CF88"))) PPC_WEAK_FUNC(sub_83C4CF88);
PPC_FUNC_IMPL(__imp__sub_83C4CF88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11872
	ctx.r3.s64 = ctx.r11.s64 + -11872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4CF94"))) PPC_WEAK_FUNC(sub_83C4CF94);
PPC_FUNC_IMPL(__imp__sub_83C4CF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4CF98"))) PPC_WEAK_FUNC(sub_83C4CF98);
PPC_FUNC_IMPL(__imp__sub_83C4CF98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11864
	ctx.r3.s64 = ctx.r11.s64 + -11864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4CFA4"))) PPC_WEAK_FUNC(sub_83C4CFA4);
PPC_FUNC_IMPL(__imp__sub_83C4CFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4CFA8"))) PPC_WEAK_FUNC(sub_83C4CFA8);
PPC_FUNC_IMPL(__imp__sub_83C4CFA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11856
	ctx.r3.s64 = ctx.r11.s64 + -11856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4CFB4"))) PPC_WEAK_FUNC(sub_83C4CFB4);
PPC_FUNC_IMPL(__imp__sub_83C4CFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4CFB8"))) PPC_WEAK_FUNC(sub_83C4CFB8);
PPC_FUNC_IMPL(__imp__sub_83C4CFB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11848
	ctx.r3.s64 = ctx.r11.s64 + -11848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4CFC4"))) PPC_WEAK_FUNC(sub_83C4CFC4);
PPC_FUNC_IMPL(__imp__sub_83C4CFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4CFC8"))) PPC_WEAK_FUNC(sub_83C4CFC8);
PPC_FUNC_IMPL(__imp__sub_83C4CFC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11840
	ctx.r3.s64 = ctx.r11.s64 + -11840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4CFD4"))) PPC_WEAK_FUNC(sub_83C4CFD4);
PPC_FUNC_IMPL(__imp__sub_83C4CFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4CFD8"))) PPC_WEAK_FUNC(sub_83C4CFD8);
PPC_FUNC_IMPL(__imp__sub_83C4CFD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11832
	ctx.r3.s64 = ctx.r11.s64 + -11832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4CFE4"))) PPC_WEAK_FUNC(sub_83C4CFE4);
PPC_FUNC_IMPL(__imp__sub_83C4CFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4CFE8"))) PPC_WEAK_FUNC(sub_83C4CFE8);
PPC_FUNC_IMPL(__imp__sub_83C4CFE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11824
	ctx.r3.s64 = ctx.r11.s64 + -11824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4CFF4"))) PPC_WEAK_FUNC(sub_83C4CFF4);
PPC_FUNC_IMPL(__imp__sub_83C4CFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4CFF8"))) PPC_WEAK_FUNC(sub_83C4CFF8);
PPC_FUNC_IMPL(__imp__sub_83C4CFF8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,9824
	ctx.r7.s64 = ctx.r8.s64 + 9824;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,9824(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 9824);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,9824(r8)
	PPC_STORE_U32(ctx.r8.u32 + 9824, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4D020"))) PPC_WEAK_FUNC(sub_83C4D020);
PPC_FUNC_IMPL(__imp__sub_83C4D020) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,5224
	ctx.r6.s64 = ctx.r7.s64 + 5224;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,5152(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 5152);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,9824(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 9824);
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
	// std r9,5224(r7)
	PPC_STORE_U64(ctx.r7.u32 + 5224, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4D068"))) PPC_WEAK_FUNC(sub_83C4D068);
PPC_FUNC_IMPL(__imp__sub_83C4D068) {
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
	// addi r3,r11,9808
	ctx.r3.s64 = ctx.r11.s64 + 9808;
	// bl 0x83523120
	ctx.lr = 0x83C4D080;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-11816
	ctx.r3.s64 = ctx.r10.s64 + -11816;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4D08C;
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

__attribute__((alias("__imp__sub_83C4D09C"))) PPC_WEAK_FUNC(sub_83C4D09C);
PPC_FUNC_IMPL(__imp__sub_83C4D09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D0A0"))) PPC_WEAK_FUNC(sub_83C4D0A0);
PPC_FUNC_IMPL(__imp__sub_83C4D0A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11800
	ctx.r3.s64 = ctx.r11.s64 + -11800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D0AC"))) PPC_WEAK_FUNC(sub_83C4D0AC);
PPC_FUNC_IMPL(__imp__sub_83C4D0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D0B0"))) PPC_WEAK_FUNC(sub_83C4D0B0);
PPC_FUNC_IMPL(__imp__sub_83C4D0B0) {
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
	// addi r3,r11,9832
	ctx.r3.s64 = ctx.r11.s64 + 9832;
	// bl 0x8259af80
	ctx.lr = 0x83C4D0C8;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-11784
	ctx.r3.s64 = ctx.r10.s64 + -11784;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4D0D4;
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

__attribute__((alias("__imp__sub_83C4D0E4"))) PPC_WEAK_FUNC(sub_83C4D0E4);
PPC_FUNC_IMPL(__imp__sub_83C4D0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D0E8"))) PPC_WEAK_FUNC(sub_83C4D0E8);
PPC_FUNC_IMPL(__imp__sub_83C4D0E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,9812
	ctx.r11.s64 = ctx.r8.s64 + 9812;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,5200(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5200);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-11792
	ctx.r3.s64 = ctx.r6.s64 + -11792;
	// stw r10,9812(r8)
	PPC_STORE_U32(ctx.r8.u32 + 9812, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D118"))) PPC_WEAK_FUNC(sub_83C4D118);
PPC_FUNC_IMPL(__imp__sub_83C4D118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11776
	ctx.r3.s64 = ctx.r11.s64 + -11776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D124"))) PPC_WEAK_FUNC(sub_83C4D124);
PPC_FUNC_IMPL(__imp__sub_83C4D124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D128"))) PPC_WEAK_FUNC(sub_83C4D128);
PPC_FUNC_IMPL(__imp__sub_83C4D128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11768
	ctx.r3.s64 = ctx.r11.s64 + -11768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D134"))) PPC_WEAK_FUNC(sub_83C4D134);
PPC_FUNC_IMPL(__imp__sub_83C4D134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D138"))) PPC_WEAK_FUNC(sub_83C4D138);
PPC_FUNC_IMPL(__imp__sub_83C4D138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11760
	ctx.r3.s64 = ctx.r11.s64 + -11760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D144"))) PPC_WEAK_FUNC(sub_83C4D144);
PPC_FUNC_IMPL(__imp__sub_83C4D144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D148"))) PPC_WEAK_FUNC(sub_83C4D148);
PPC_FUNC_IMPL(__imp__sub_83C4D148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11752
	ctx.r3.s64 = ctx.r11.s64 + -11752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D154"))) PPC_WEAK_FUNC(sub_83C4D154);
PPC_FUNC_IMPL(__imp__sub_83C4D154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D158"))) PPC_WEAK_FUNC(sub_83C4D158);
PPC_FUNC_IMPL(__imp__sub_83C4D158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11744
	ctx.r3.s64 = ctx.r11.s64 + -11744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D164"))) PPC_WEAK_FUNC(sub_83C4D164);
PPC_FUNC_IMPL(__imp__sub_83C4D164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D168"))) PPC_WEAK_FUNC(sub_83C4D168);
PPC_FUNC_IMPL(__imp__sub_83C4D168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11736
	ctx.r3.s64 = ctx.r11.s64 + -11736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D174"))) PPC_WEAK_FUNC(sub_83C4D174);
PPC_FUNC_IMPL(__imp__sub_83C4D174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D178"))) PPC_WEAK_FUNC(sub_83C4D178);
PPC_FUNC_IMPL(__imp__sub_83C4D178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11728
	ctx.r3.s64 = ctx.r11.s64 + -11728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D184"))) PPC_WEAK_FUNC(sub_83C4D184);
PPC_FUNC_IMPL(__imp__sub_83C4D184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D188"))) PPC_WEAK_FUNC(sub_83C4D188);
PPC_FUNC_IMPL(__imp__sub_83C4D188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11720
	ctx.r3.s64 = ctx.r11.s64 + -11720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D194"))) PPC_WEAK_FUNC(sub_83C4D194);
PPC_FUNC_IMPL(__imp__sub_83C4D194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D198"))) PPC_WEAK_FUNC(sub_83C4D198);
PPC_FUNC_IMPL(__imp__sub_83C4D198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11712
	ctx.r3.s64 = ctx.r11.s64 + -11712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D1A4"))) PPC_WEAK_FUNC(sub_83C4D1A4);
PPC_FUNC_IMPL(__imp__sub_83C4D1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D1A8"))) PPC_WEAK_FUNC(sub_83C4D1A8);
PPC_FUNC_IMPL(__imp__sub_83C4D1A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11704
	ctx.r3.s64 = ctx.r11.s64 + -11704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D1B4"))) PPC_WEAK_FUNC(sub_83C4D1B4);
PPC_FUNC_IMPL(__imp__sub_83C4D1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D1B8"))) PPC_WEAK_FUNC(sub_83C4D1B8);
PPC_FUNC_IMPL(__imp__sub_83C4D1B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11696
	ctx.r3.s64 = ctx.r11.s64 + -11696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D1C4"))) PPC_WEAK_FUNC(sub_83C4D1C4);
PPC_FUNC_IMPL(__imp__sub_83C4D1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D1C8"))) PPC_WEAK_FUNC(sub_83C4D1C8);
PPC_FUNC_IMPL(__imp__sub_83C4D1C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11688
	ctx.r3.s64 = ctx.r11.s64 + -11688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D1D4"))) PPC_WEAK_FUNC(sub_83C4D1D4);
PPC_FUNC_IMPL(__imp__sub_83C4D1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D1D8"))) PPC_WEAK_FUNC(sub_83C4D1D8);
PPC_FUNC_IMPL(__imp__sub_83C4D1D8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,10192
	ctx.r7.s64 = ctx.r8.s64 + 10192;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,10192(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10192);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,10192(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10192, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4D200"))) PPC_WEAK_FUNC(sub_83C4D200);
PPC_FUNC_IMPL(__imp__sub_83C4D200) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,5352
	ctx.r6.s64 = ctx.r7.s64 + 5352;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,5280(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 5280);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,10192(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10192);
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
	// std r9,5352(r7)
	PPC_STORE_U64(ctx.r7.u32 + 5352, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4D248"))) PPC_WEAK_FUNC(sub_83C4D248);
PPC_FUNC_IMPL(__imp__sub_83C4D248) {
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
	// addi r3,r11,10176
	ctx.r3.s64 = ctx.r11.s64 + 10176;
	// bl 0x83523120
	ctx.lr = 0x83C4D260;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-11680
	ctx.r3.s64 = ctx.r10.s64 + -11680;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4D26C;
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

__attribute__((alias("__imp__sub_83C4D27C"))) PPC_WEAK_FUNC(sub_83C4D27C);
PPC_FUNC_IMPL(__imp__sub_83C4D27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D280"))) PPC_WEAK_FUNC(sub_83C4D280);
PPC_FUNC_IMPL(__imp__sub_83C4D280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11664
	ctx.r3.s64 = ctx.r11.s64 + -11664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D28C"))) PPC_WEAK_FUNC(sub_83C4D28C);
PPC_FUNC_IMPL(__imp__sub_83C4D28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D290"))) PPC_WEAK_FUNC(sub_83C4D290);
PPC_FUNC_IMPL(__imp__sub_83C4D290) {
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
	// addi r3,r11,10200
	ctx.r3.s64 = ctx.r11.s64 + 10200;
	// bl 0x8259af80
	ctx.lr = 0x83C4D2A8;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-11648
	ctx.r3.s64 = ctx.r10.s64 + -11648;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4D2B4;
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

__attribute__((alias("__imp__sub_83C4D2C4"))) PPC_WEAK_FUNC(sub_83C4D2C4);
PPC_FUNC_IMPL(__imp__sub_83C4D2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D2C8"))) PPC_WEAK_FUNC(sub_83C4D2C8);
PPC_FUNC_IMPL(__imp__sub_83C4D2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,10180
	ctx.r11.s64 = ctx.r8.s64 + 10180;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,5328(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5328);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-11656
	ctx.r3.s64 = ctx.r6.s64 + -11656;
	// stw r10,10180(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10180, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D2F8"))) PPC_WEAK_FUNC(sub_83C4D2F8);
PPC_FUNC_IMPL(__imp__sub_83C4D2F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11640
	ctx.r3.s64 = ctx.r11.s64 + -11640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D304"))) PPC_WEAK_FUNC(sub_83C4D304);
PPC_FUNC_IMPL(__imp__sub_83C4D304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D308"))) PPC_WEAK_FUNC(sub_83C4D308);
PPC_FUNC_IMPL(__imp__sub_83C4D308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11632
	ctx.r3.s64 = ctx.r11.s64 + -11632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D314"))) PPC_WEAK_FUNC(sub_83C4D314);
PPC_FUNC_IMPL(__imp__sub_83C4D314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D318"))) PPC_WEAK_FUNC(sub_83C4D318);
PPC_FUNC_IMPL(__imp__sub_83C4D318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11624
	ctx.r3.s64 = ctx.r11.s64 + -11624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D324"))) PPC_WEAK_FUNC(sub_83C4D324);
PPC_FUNC_IMPL(__imp__sub_83C4D324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D328"))) PPC_WEAK_FUNC(sub_83C4D328);
PPC_FUNC_IMPL(__imp__sub_83C4D328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11616
	ctx.r3.s64 = ctx.r11.s64 + -11616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D334"))) PPC_WEAK_FUNC(sub_83C4D334);
PPC_FUNC_IMPL(__imp__sub_83C4D334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D338"))) PPC_WEAK_FUNC(sub_83C4D338);
PPC_FUNC_IMPL(__imp__sub_83C4D338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11608
	ctx.r3.s64 = ctx.r11.s64 + -11608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D344"))) PPC_WEAK_FUNC(sub_83C4D344);
PPC_FUNC_IMPL(__imp__sub_83C4D344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D348"))) PPC_WEAK_FUNC(sub_83C4D348);
PPC_FUNC_IMPL(__imp__sub_83C4D348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11600
	ctx.r3.s64 = ctx.r11.s64 + -11600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D354"))) PPC_WEAK_FUNC(sub_83C4D354);
PPC_FUNC_IMPL(__imp__sub_83C4D354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D358"))) PPC_WEAK_FUNC(sub_83C4D358);
PPC_FUNC_IMPL(__imp__sub_83C4D358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11592
	ctx.r3.s64 = ctx.r11.s64 + -11592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D364"))) PPC_WEAK_FUNC(sub_83C4D364);
PPC_FUNC_IMPL(__imp__sub_83C4D364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D368"))) PPC_WEAK_FUNC(sub_83C4D368);
PPC_FUNC_IMPL(__imp__sub_83C4D368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11584
	ctx.r3.s64 = ctx.r11.s64 + -11584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D374"))) PPC_WEAK_FUNC(sub_83C4D374);
PPC_FUNC_IMPL(__imp__sub_83C4D374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D378"))) PPC_WEAK_FUNC(sub_83C4D378);
PPC_FUNC_IMPL(__imp__sub_83C4D378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11576
	ctx.r3.s64 = ctx.r11.s64 + -11576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D384"))) PPC_WEAK_FUNC(sub_83C4D384);
PPC_FUNC_IMPL(__imp__sub_83C4D384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D388"))) PPC_WEAK_FUNC(sub_83C4D388);
PPC_FUNC_IMPL(__imp__sub_83C4D388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11568
	ctx.r3.s64 = ctx.r11.s64 + -11568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D394"))) PPC_WEAK_FUNC(sub_83C4D394);
PPC_FUNC_IMPL(__imp__sub_83C4D394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D398"))) PPC_WEAK_FUNC(sub_83C4D398);
PPC_FUNC_IMPL(__imp__sub_83C4D398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11560
	ctx.r3.s64 = ctx.r11.s64 + -11560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D3A4"))) PPC_WEAK_FUNC(sub_83C4D3A4);
PPC_FUNC_IMPL(__imp__sub_83C4D3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D3A8"))) PPC_WEAK_FUNC(sub_83C4D3A8);
PPC_FUNC_IMPL(__imp__sub_83C4D3A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11552
	ctx.r3.s64 = ctx.r11.s64 + -11552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D3B4"))) PPC_WEAK_FUNC(sub_83C4D3B4);
PPC_FUNC_IMPL(__imp__sub_83C4D3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D3B8"))) PPC_WEAK_FUNC(sub_83C4D3B8);
PPC_FUNC_IMPL(__imp__sub_83C4D3B8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,10560
	ctx.r7.s64 = ctx.r8.s64 + 10560;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,10560(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10560);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,10560(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10560, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4D3E0"))) PPC_WEAK_FUNC(sub_83C4D3E0);
PPC_FUNC_IMPL(__imp__sub_83C4D3E0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,5480
	ctx.r6.s64 = ctx.r7.s64 + 5480;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,5408(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 5408);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,10560(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10560);
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
	// std r9,5480(r7)
	PPC_STORE_U64(ctx.r7.u32 + 5480, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4D428"))) PPC_WEAK_FUNC(sub_83C4D428);
PPC_FUNC_IMPL(__imp__sub_83C4D428) {
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
	// addi r3,r11,10544
	ctx.r3.s64 = ctx.r11.s64 + 10544;
	// bl 0x83523120
	ctx.lr = 0x83C4D440;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-11544
	ctx.r3.s64 = ctx.r10.s64 + -11544;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4D44C;
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

__attribute__((alias("__imp__sub_83C4D45C"))) PPC_WEAK_FUNC(sub_83C4D45C);
PPC_FUNC_IMPL(__imp__sub_83C4D45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D460"))) PPC_WEAK_FUNC(sub_83C4D460);
PPC_FUNC_IMPL(__imp__sub_83C4D460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11528
	ctx.r3.s64 = ctx.r11.s64 + -11528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D46C"))) PPC_WEAK_FUNC(sub_83C4D46C);
PPC_FUNC_IMPL(__imp__sub_83C4D46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D470"))) PPC_WEAK_FUNC(sub_83C4D470);
PPC_FUNC_IMPL(__imp__sub_83C4D470) {
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
	// addi r3,r11,10568
	ctx.r3.s64 = ctx.r11.s64 + 10568;
	// bl 0x8259af80
	ctx.lr = 0x83C4D488;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-11512
	ctx.r3.s64 = ctx.r10.s64 + -11512;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4D494;
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

__attribute__((alias("__imp__sub_83C4D4A4"))) PPC_WEAK_FUNC(sub_83C4D4A4);
PPC_FUNC_IMPL(__imp__sub_83C4D4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D4A8"))) PPC_WEAK_FUNC(sub_83C4D4A8);
PPC_FUNC_IMPL(__imp__sub_83C4D4A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,10548
	ctx.r11.s64 = ctx.r8.s64 + 10548;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,5456(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5456);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-11520
	ctx.r3.s64 = ctx.r6.s64 + -11520;
	// stw r10,10548(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10548, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D4D8"))) PPC_WEAK_FUNC(sub_83C4D4D8);
PPC_FUNC_IMPL(__imp__sub_83C4D4D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11504
	ctx.r3.s64 = ctx.r11.s64 + -11504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D4E4"))) PPC_WEAK_FUNC(sub_83C4D4E4);
PPC_FUNC_IMPL(__imp__sub_83C4D4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D4E8"))) PPC_WEAK_FUNC(sub_83C4D4E8);
PPC_FUNC_IMPL(__imp__sub_83C4D4E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11496
	ctx.r3.s64 = ctx.r11.s64 + -11496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D4F4"))) PPC_WEAK_FUNC(sub_83C4D4F4);
PPC_FUNC_IMPL(__imp__sub_83C4D4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D4F8"))) PPC_WEAK_FUNC(sub_83C4D4F8);
PPC_FUNC_IMPL(__imp__sub_83C4D4F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11488
	ctx.r3.s64 = ctx.r11.s64 + -11488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D504"))) PPC_WEAK_FUNC(sub_83C4D504);
PPC_FUNC_IMPL(__imp__sub_83C4D504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D508"))) PPC_WEAK_FUNC(sub_83C4D508);
PPC_FUNC_IMPL(__imp__sub_83C4D508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11480
	ctx.r3.s64 = ctx.r11.s64 + -11480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D514"))) PPC_WEAK_FUNC(sub_83C4D514);
PPC_FUNC_IMPL(__imp__sub_83C4D514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D518"))) PPC_WEAK_FUNC(sub_83C4D518);
PPC_FUNC_IMPL(__imp__sub_83C4D518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11472
	ctx.r3.s64 = ctx.r11.s64 + -11472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D524"))) PPC_WEAK_FUNC(sub_83C4D524);
PPC_FUNC_IMPL(__imp__sub_83C4D524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D528"))) PPC_WEAK_FUNC(sub_83C4D528);
PPC_FUNC_IMPL(__imp__sub_83C4D528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11464
	ctx.r3.s64 = ctx.r11.s64 + -11464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D534"))) PPC_WEAK_FUNC(sub_83C4D534);
PPC_FUNC_IMPL(__imp__sub_83C4D534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D538"))) PPC_WEAK_FUNC(sub_83C4D538);
PPC_FUNC_IMPL(__imp__sub_83C4D538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11456
	ctx.r3.s64 = ctx.r11.s64 + -11456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D544"))) PPC_WEAK_FUNC(sub_83C4D544);
PPC_FUNC_IMPL(__imp__sub_83C4D544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D548"))) PPC_WEAK_FUNC(sub_83C4D548);
PPC_FUNC_IMPL(__imp__sub_83C4D548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11448
	ctx.r3.s64 = ctx.r11.s64 + -11448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D554"))) PPC_WEAK_FUNC(sub_83C4D554);
PPC_FUNC_IMPL(__imp__sub_83C4D554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D558"))) PPC_WEAK_FUNC(sub_83C4D558);
PPC_FUNC_IMPL(__imp__sub_83C4D558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11440
	ctx.r3.s64 = ctx.r11.s64 + -11440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D564"))) PPC_WEAK_FUNC(sub_83C4D564);
PPC_FUNC_IMPL(__imp__sub_83C4D564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D568"))) PPC_WEAK_FUNC(sub_83C4D568);
PPC_FUNC_IMPL(__imp__sub_83C4D568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11432
	ctx.r3.s64 = ctx.r11.s64 + -11432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D574"))) PPC_WEAK_FUNC(sub_83C4D574);
PPC_FUNC_IMPL(__imp__sub_83C4D574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D578"))) PPC_WEAK_FUNC(sub_83C4D578);
PPC_FUNC_IMPL(__imp__sub_83C4D578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11424
	ctx.r3.s64 = ctx.r11.s64 + -11424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D584"))) PPC_WEAK_FUNC(sub_83C4D584);
PPC_FUNC_IMPL(__imp__sub_83C4D584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D588"))) PPC_WEAK_FUNC(sub_83C4D588);
PPC_FUNC_IMPL(__imp__sub_83C4D588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11416
	ctx.r3.s64 = ctx.r11.s64 + -11416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D594"))) PPC_WEAK_FUNC(sub_83C4D594);
PPC_FUNC_IMPL(__imp__sub_83C4D594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D598"))) PPC_WEAK_FUNC(sub_83C4D598);
PPC_FUNC_IMPL(__imp__sub_83C4D598) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,10928
	ctx.r7.s64 = ctx.r8.s64 + 10928;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,10928(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10928);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,10928(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10928, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4D5C0"))) PPC_WEAK_FUNC(sub_83C4D5C0);
PPC_FUNC_IMPL(__imp__sub_83C4D5C0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,5608
	ctx.r6.s64 = ctx.r7.s64 + 5608;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,5536(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 5536);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,10928(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10928);
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
	// std r9,5608(r7)
	PPC_STORE_U64(ctx.r7.u32 + 5608, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4D608"))) PPC_WEAK_FUNC(sub_83C4D608);
PPC_FUNC_IMPL(__imp__sub_83C4D608) {
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
	// addi r3,r11,10912
	ctx.r3.s64 = ctx.r11.s64 + 10912;
	// bl 0x83523120
	ctx.lr = 0x83C4D620;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-11408
	ctx.r3.s64 = ctx.r10.s64 + -11408;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4D62C;
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

__attribute__((alias("__imp__sub_83C4D63C"))) PPC_WEAK_FUNC(sub_83C4D63C);
PPC_FUNC_IMPL(__imp__sub_83C4D63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D640"))) PPC_WEAK_FUNC(sub_83C4D640);
PPC_FUNC_IMPL(__imp__sub_83C4D640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11392
	ctx.r3.s64 = ctx.r11.s64 + -11392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D64C"))) PPC_WEAK_FUNC(sub_83C4D64C);
PPC_FUNC_IMPL(__imp__sub_83C4D64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D650"))) PPC_WEAK_FUNC(sub_83C4D650);
PPC_FUNC_IMPL(__imp__sub_83C4D650) {
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
	// addi r3,r11,10936
	ctx.r3.s64 = ctx.r11.s64 + 10936;
	// bl 0x8259af80
	ctx.lr = 0x83C4D668;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-11376
	ctx.r3.s64 = ctx.r10.s64 + -11376;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4D674;
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

__attribute__((alias("__imp__sub_83C4D684"))) PPC_WEAK_FUNC(sub_83C4D684);
PPC_FUNC_IMPL(__imp__sub_83C4D684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D688"))) PPC_WEAK_FUNC(sub_83C4D688);
PPC_FUNC_IMPL(__imp__sub_83C4D688) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,10916
	ctx.r11.s64 = ctx.r8.s64 + 10916;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,5584(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5584);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-11384
	ctx.r3.s64 = ctx.r6.s64 + -11384;
	// stw r10,10916(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10916, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D6B8"))) PPC_WEAK_FUNC(sub_83C4D6B8);
PPC_FUNC_IMPL(__imp__sub_83C4D6B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11368
	ctx.r3.s64 = ctx.r11.s64 + -11368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D6C4"))) PPC_WEAK_FUNC(sub_83C4D6C4);
PPC_FUNC_IMPL(__imp__sub_83C4D6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D6C8"))) PPC_WEAK_FUNC(sub_83C4D6C8);
PPC_FUNC_IMPL(__imp__sub_83C4D6C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11360
	ctx.r3.s64 = ctx.r11.s64 + -11360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D6D4"))) PPC_WEAK_FUNC(sub_83C4D6D4);
PPC_FUNC_IMPL(__imp__sub_83C4D6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D6D8"))) PPC_WEAK_FUNC(sub_83C4D6D8);
PPC_FUNC_IMPL(__imp__sub_83C4D6D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11352
	ctx.r3.s64 = ctx.r11.s64 + -11352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D6E4"))) PPC_WEAK_FUNC(sub_83C4D6E4);
PPC_FUNC_IMPL(__imp__sub_83C4D6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D6E8"))) PPC_WEAK_FUNC(sub_83C4D6E8);
PPC_FUNC_IMPL(__imp__sub_83C4D6E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11344
	ctx.r3.s64 = ctx.r11.s64 + -11344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D6F4"))) PPC_WEAK_FUNC(sub_83C4D6F4);
PPC_FUNC_IMPL(__imp__sub_83C4D6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D6F8"))) PPC_WEAK_FUNC(sub_83C4D6F8);
PPC_FUNC_IMPL(__imp__sub_83C4D6F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11336
	ctx.r3.s64 = ctx.r11.s64 + -11336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D704"))) PPC_WEAK_FUNC(sub_83C4D704);
PPC_FUNC_IMPL(__imp__sub_83C4D704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D708"))) PPC_WEAK_FUNC(sub_83C4D708);
PPC_FUNC_IMPL(__imp__sub_83C4D708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11328
	ctx.r3.s64 = ctx.r11.s64 + -11328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D714"))) PPC_WEAK_FUNC(sub_83C4D714);
PPC_FUNC_IMPL(__imp__sub_83C4D714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D718"))) PPC_WEAK_FUNC(sub_83C4D718);
PPC_FUNC_IMPL(__imp__sub_83C4D718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11320
	ctx.r3.s64 = ctx.r11.s64 + -11320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D724"))) PPC_WEAK_FUNC(sub_83C4D724);
PPC_FUNC_IMPL(__imp__sub_83C4D724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D728"))) PPC_WEAK_FUNC(sub_83C4D728);
PPC_FUNC_IMPL(__imp__sub_83C4D728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11312
	ctx.r3.s64 = ctx.r11.s64 + -11312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D734"))) PPC_WEAK_FUNC(sub_83C4D734);
PPC_FUNC_IMPL(__imp__sub_83C4D734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D738"))) PPC_WEAK_FUNC(sub_83C4D738);
PPC_FUNC_IMPL(__imp__sub_83C4D738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11304
	ctx.r3.s64 = ctx.r11.s64 + -11304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D744"))) PPC_WEAK_FUNC(sub_83C4D744);
PPC_FUNC_IMPL(__imp__sub_83C4D744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D748"))) PPC_WEAK_FUNC(sub_83C4D748);
PPC_FUNC_IMPL(__imp__sub_83C4D748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11296
	ctx.r3.s64 = ctx.r11.s64 + -11296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D754"))) PPC_WEAK_FUNC(sub_83C4D754);
PPC_FUNC_IMPL(__imp__sub_83C4D754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D758"))) PPC_WEAK_FUNC(sub_83C4D758);
PPC_FUNC_IMPL(__imp__sub_83C4D758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11288
	ctx.r3.s64 = ctx.r11.s64 + -11288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D764"))) PPC_WEAK_FUNC(sub_83C4D764);
PPC_FUNC_IMPL(__imp__sub_83C4D764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D768"))) PPC_WEAK_FUNC(sub_83C4D768);
PPC_FUNC_IMPL(__imp__sub_83C4D768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11280
	ctx.r3.s64 = ctx.r11.s64 + -11280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D774"))) PPC_WEAK_FUNC(sub_83C4D774);
PPC_FUNC_IMPL(__imp__sub_83C4D774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D778"))) PPC_WEAK_FUNC(sub_83C4D778);
PPC_FUNC_IMPL(__imp__sub_83C4D778) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,11296
	ctx.r7.s64 = ctx.r8.s64 + 11296;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,11296(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 11296);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,11296(r8)
	PPC_STORE_U32(ctx.r8.u32 + 11296, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4D7A0"))) PPC_WEAK_FUNC(sub_83C4D7A0);
PPC_FUNC_IMPL(__imp__sub_83C4D7A0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,5736
	ctx.r6.s64 = ctx.r7.s64 + 5736;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,5664(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 5664);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,11296(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11296);
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
	// std r9,5736(r7)
	PPC_STORE_U64(ctx.r7.u32 + 5736, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4D7E8"))) PPC_WEAK_FUNC(sub_83C4D7E8);
PPC_FUNC_IMPL(__imp__sub_83C4D7E8) {
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
	// addi r3,r11,11280
	ctx.r3.s64 = ctx.r11.s64 + 11280;
	// bl 0x83523120
	ctx.lr = 0x83C4D800;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-11272
	ctx.r3.s64 = ctx.r10.s64 + -11272;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4D80C;
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

__attribute__((alias("__imp__sub_83C4D81C"))) PPC_WEAK_FUNC(sub_83C4D81C);
PPC_FUNC_IMPL(__imp__sub_83C4D81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D820"))) PPC_WEAK_FUNC(sub_83C4D820);
PPC_FUNC_IMPL(__imp__sub_83C4D820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11256
	ctx.r3.s64 = ctx.r11.s64 + -11256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D82C"))) PPC_WEAK_FUNC(sub_83C4D82C);
PPC_FUNC_IMPL(__imp__sub_83C4D82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D830"))) PPC_WEAK_FUNC(sub_83C4D830);
PPC_FUNC_IMPL(__imp__sub_83C4D830) {
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
	// addi r3,r11,11304
	ctx.r3.s64 = ctx.r11.s64 + 11304;
	// bl 0x8259af80
	ctx.lr = 0x83C4D848;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-11240
	ctx.r3.s64 = ctx.r10.s64 + -11240;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4D854;
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

__attribute__((alias("__imp__sub_83C4D864"))) PPC_WEAK_FUNC(sub_83C4D864);
PPC_FUNC_IMPL(__imp__sub_83C4D864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D868"))) PPC_WEAK_FUNC(sub_83C4D868);
PPC_FUNC_IMPL(__imp__sub_83C4D868) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,11284
	ctx.r11.s64 = ctx.r8.s64 + 11284;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,5712(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5712);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-11248
	ctx.r3.s64 = ctx.r6.s64 + -11248;
	// stw r10,11284(r8)
	PPC_STORE_U32(ctx.r8.u32 + 11284, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D898"))) PPC_WEAK_FUNC(sub_83C4D898);
PPC_FUNC_IMPL(__imp__sub_83C4D898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11232
	ctx.r3.s64 = ctx.r11.s64 + -11232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D8A4"))) PPC_WEAK_FUNC(sub_83C4D8A4);
PPC_FUNC_IMPL(__imp__sub_83C4D8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D8A8"))) PPC_WEAK_FUNC(sub_83C4D8A8);
PPC_FUNC_IMPL(__imp__sub_83C4D8A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11224
	ctx.r3.s64 = ctx.r11.s64 + -11224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D8B4"))) PPC_WEAK_FUNC(sub_83C4D8B4);
PPC_FUNC_IMPL(__imp__sub_83C4D8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D8B8"))) PPC_WEAK_FUNC(sub_83C4D8B8);
PPC_FUNC_IMPL(__imp__sub_83C4D8B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11216
	ctx.r3.s64 = ctx.r11.s64 + -11216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D8C4"))) PPC_WEAK_FUNC(sub_83C4D8C4);
PPC_FUNC_IMPL(__imp__sub_83C4D8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D8C8"))) PPC_WEAK_FUNC(sub_83C4D8C8);
PPC_FUNC_IMPL(__imp__sub_83C4D8C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11208
	ctx.r3.s64 = ctx.r11.s64 + -11208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D8D4"))) PPC_WEAK_FUNC(sub_83C4D8D4);
PPC_FUNC_IMPL(__imp__sub_83C4D8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D8D8"))) PPC_WEAK_FUNC(sub_83C4D8D8);
PPC_FUNC_IMPL(__imp__sub_83C4D8D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11200
	ctx.r3.s64 = ctx.r11.s64 + -11200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D8E4"))) PPC_WEAK_FUNC(sub_83C4D8E4);
PPC_FUNC_IMPL(__imp__sub_83C4D8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D8E8"))) PPC_WEAK_FUNC(sub_83C4D8E8);
PPC_FUNC_IMPL(__imp__sub_83C4D8E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11192
	ctx.r3.s64 = ctx.r11.s64 + -11192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D8F4"))) PPC_WEAK_FUNC(sub_83C4D8F4);
PPC_FUNC_IMPL(__imp__sub_83C4D8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D8F8"))) PPC_WEAK_FUNC(sub_83C4D8F8);
PPC_FUNC_IMPL(__imp__sub_83C4D8F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11184
	ctx.r3.s64 = ctx.r11.s64 + -11184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D904"))) PPC_WEAK_FUNC(sub_83C4D904);
PPC_FUNC_IMPL(__imp__sub_83C4D904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D908"))) PPC_WEAK_FUNC(sub_83C4D908);
PPC_FUNC_IMPL(__imp__sub_83C4D908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11176
	ctx.r3.s64 = ctx.r11.s64 + -11176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D914"))) PPC_WEAK_FUNC(sub_83C4D914);
PPC_FUNC_IMPL(__imp__sub_83C4D914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D918"))) PPC_WEAK_FUNC(sub_83C4D918);
PPC_FUNC_IMPL(__imp__sub_83C4D918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11168
	ctx.r3.s64 = ctx.r11.s64 + -11168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D924"))) PPC_WEAK_FUNC(sub_83C4D924);
PPC_FUNC_IMPL(__imp__sub_83C4D924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D928"))) PPC_WEAK_FUNC(sub_83C4D928);
PPC_FUNC_IMPL(__imp__sub_83C4D928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11160
	ctx.r3.s64 = ctx.r11.s64 + -11160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D934"))) PPC_WEAK_FUNC(sub_83C4D934);
PPC_FUNC_IMPL(__imp__sub_83C4D934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D938"))) PPC_WEAK_FUNC(sub_83C4D938);
PPC_FUNC_IMPL(__imp__sub_83C4D938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11152
	ctx.r3.s64 = ctx.r11.s64 + -11152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D944"))) PPC_WEAK_FUNC(sub_83C4D944);
PPC_FUNC_IMPL(__imp__sub_83C4D944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D948"))) PPC_WEAK_FUNC(sub_83C4D948);
PPC_FUNC_IMPL(__imp__sub_83C4D948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11144
	ctx.r3.s64 = ctx.r11.s64 + -11144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4D954"))) PPC_WEAK_FUNC(sub_83C4D954);
PPC_FUNC_IMPL(__imp__sub_83C4D954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4D958"))) PPC_WEAK_FUNC(sub_83C4D958);
PPC_FUNC_IMPL(__imp__sub_83C4D958) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,11664
	ctx.r7.s64 = ctx.r8.s64 + 11664;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,11664(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 11664);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,11664(r8)
	PPC_STORE_U32(ctx.r8.u32 + 11664, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4D980"))) PPC_WEAK_FUNC(sub_83C4D980);
PPC_FUNC_IMPL(__imp__sub_83C4D980) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,5864
	ctx.r6.s64 = ctx.r7.s64 + 5864;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,5792(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 5792);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,11664(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11664);
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
	// std r9,5864(r7)
	PPC_STORE_U64(ctx.r7.u32 + 5864, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C4D9C8"))) PPC_WEAK_FUNC(sub_83C4D9C8);
PPC_FUNC_IMPL(__imp__sub_83C4D9C8) {
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
	// addi r3,r11,11648
	ctx.r3.s64 = ctx.r11.s64 + 11648;
	// bl 0x83523120
	ctx.lr = 0x83C4D9E0;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-11136
	ctx.r3.s64 = ctx.r10.s64 + -11136;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4D9EC;
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

__attribute__((alias("__imp__sub_83C4D9FC"))) PPC_WEAK_FUNC(sub_83C4D9FC);
PPC_FUNC_IMPL(__imp__sub_83C4D9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4DA00"))) PPC_WEAK_FUNC(sub_83C4DA00);
PPC_FUNC_IMPL(__imp__sub_83C4DA00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11120
	ctx.r3.s64 = ctx.r11.s64 + -11120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4DA0C"))) PPC_WEAK_FUNC(sub_83C4DA0C);
PPC_FUNC_IMPL(__imp__sub_83C4DA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4DA10"))) PPC_WEAK_FUNC(sub_83C4DA10);
PPC_FUNC_IMPL(__imp__sub_83C4DA10) {
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
	// addi r3,r11,11672
	ctx.r3.s64 = ctx.r11.s64 + 11672;
	// bl 0x8259af80
	ctx.lr = 0x83C4DA28;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-11104
	ctx.r3.s64 = ctx.r10.s64 + -11104;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4DA34;
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

__attribute__((alias("__imp__sub_83C4DA44"))) PPC_WEAK_FUNC(sub_83C4DA44);
PPC_FUNC_IMPL(__imp__sub_83C4DA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4DA48"))) PPC_WEAK_FUNC(sub_83C4DA48);
PPC_FUNC_IMPL(__imp__sub_83C4DA48) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,11652
	ctx.r11.s64 = ctx.r8.s64 + 11652;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,5840(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5840);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-11112
	ctx.r3.s64 = ctx.r6.s64 + -11112;
	// stw r10,11652(r8)
	PPC_STORE_U32(ctx.r8.u32 + 11652, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4DA78"))) PPC_WEAK_FUNC(sub_83C4DA78);
PPC_FUNC_IMPL(__imp__sub_83C4DA78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11096
	ctx.r3.s64 = ctx.r11.s64 + -11096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4DA84"))) PPC_WEAK_FUNC(sub_83C4DA84);
PPC_FUNC_IMPL(__imp__sub_83C4DA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4DA88"))) PPC_WEAK_FUNC(sub_83C4DA88);
PPC_FUNC_IMPL(__imp__sub_83C4DA88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11088
	ctx.r3.s64 = ctx.r11.s64 + -11088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4DA94"))) PPC_WEAK_FUNC(sub_83C4DA94);
PPC_FUNC_IMPL(__imp__sub_83C4DA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4DA98"))) PPC_WEAK_FUNC(sub_83C4DA98);
PPC_FUNC_IMPL(__imp__sub_83C4DA98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11080
	ctx.r3.s64 = ctx.r11.s64 + -11080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4DAA4"))) PPC_WEAK_FUNC(sub_83C4DAA4);
PPC_FUNC_IMPL(__imp__sub_83C4DAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4DAA8"))) PPC_WEAK_FUNC(sub_83C4DAA8);
PPC_FUNC_IMPL(__imp__sub_83C4DAA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11072
	ctx.r3.s64 = ctx.r11.s64 + -11072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4DAB4"))) PPC_WEAK_FUNC(sub_83C4DAB4);
PPC_FUNC_IMPL(__imp__sub_83C4DAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4DAB8"))) PPC_WEAK_FUNC(sub_83C4DAB8);
PPC_FUNC_IMPL(__imp__sub_83C4DAB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11064
	ctx.r3.s64 = ctx.r11.s64 + -11064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4DAC4"))) PPC_WEAK_FUNC(sub_83C4DAC4);
PPC_FUNC_IMPL(__imp__sub_83C4DAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C4DAC8"))) PPC_WEAK_FUNC(sub_83C4DAC8);
PPC_FUNC_IMPL(__imp__sub_83C4DAC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-11056
	ctx.r3.s64 = ctx.r11.s64 + -11056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

