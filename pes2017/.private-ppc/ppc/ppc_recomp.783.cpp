#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C48404"))) PPC_WEAK_FUNC(sub_83C48404);
PPC_FUNC_IMPL(__imp__sub_83C48404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48408"))) PPC_WEAK_FUNC(sub_83C48408);
PPC_FUNC_IMPL(__imp__sub_83C48408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17376
	ctx.r3.s64 = ctx.r11.s64 + -17376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48414"))) PPC_WEAK_FUNC(sub_83C48414);
PPC_FUNC_IMPL(__imp__sub_83C48414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48418"))) PPC_WEAK_FUNC(sub_83C48418);
PPC_FUNC_IMPL(__imp__sub_83C48418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17368
	ctx.r3.s64 = ctx.r11.s64 + -17368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48424"))) PPC_WEAK_FUNC(sub_83C48424);
PPC_FUNC_IMPL(__imp__sub_83C48424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48428"))) PPC_WEAK_FUNC(sub_83C48428);
PPC_FUNC_IMPL(__imp__sub_83C48428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17360
	ctx.r3.s64 = ctx.r11.s64 + -17360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48434"))) PPC_WEAK_FUNC(sub_83C48434);
PPC_FUNC_IMPL(__imp__sub_83C48434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48438"))) PPC_WEAK_FUNC(sub_83C48438);
PPC_FUNC_IMPL(__imp__sub_83C48438) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-4912
	ctx.r7.s64 = ctx.r8.s64 + -4912;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-4912(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4912);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-4912(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4912, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C48460"))) PPC_WEAK_FUNC(sub_83C48460);
PPC_FUNC_IMPL(__imp__sub_83C48460) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-36
	ctx.r6.s64 = ctx.r7.s64 + -36;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-108(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -108);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-4912(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4912);
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
	// std r9,-36(r7)
	PPC_STORE_U64(ctx.r7.u32 + -36, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C484A8"))) PPC_WEAK_FUNC(sub_83C484A8);
PPC_FUNC_IMPL(__imp__sub_83C484A8) {
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
	// addi r3,r11,-4928
	ctx.r3.s64 = ctx.r11.s64 + -4928;
	// bl 0x83523120
	ctx.lr = 0x83C484C0;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-17352
	ctx.r3.s64 = ctx.r10.s64 + -17352;
	// bl 0x831cdcc8
	ctx.lr = 0x83C484CC;
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

__attribute__((alias("__imp__sub_83C484DC"))) PPC_WEAK_FUNC(sub_83C484DC);
PPC_FUNC_IMPL(__imp__sub_83C484DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C484E0"))) PPC_WEAK_FUNC(sub_83C484E0);
PPC_FUNC_IMPL(__imp__sub_83C484E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17336
	ctx.r3.s64 = ctx.r11.s64 + -17336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C484EC"))) PPC_WEAK_FUNC(sub_83C484EC);
PPC_FUNC_IMPL(__imp__sub_83C484EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C484F0"))) PPC_WEAK_FUNC(sub_83C484F0);
PPC_FUNC_IMPL(__imp__sub_83C484F0) {
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
	// addi r3,r11,-4904
	ctx.r3.s64 = ctx.r11.s64 + -4904;
	// bl 0x8259af80
	ctx.lr = 0x83C48508;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-17320
	ctx.r3.s64 = ctx.r10.s64 + -17320;
	// bl 0x831cdcc8
	ctx.lr = 0x83C48514;
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

__attribute__((alias("__imp__sub_83C48524"))) PPC_WEAK_FUNC(sub_83C48524);
PPC_FUNC_IMPL(__imp__sub_83C48524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48528"))) PPC_WEAK_FUNC(sub_83C48528);
PPC_FUNC_IMPL(__imp__sub_83C48528) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-4924
	ctx.r11.s64 = ctx.r8.s64 + -4924;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-60(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -60);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-17328
	ctx.r3.s64 = ctx.r6.s64 + -17328;
	// stw r10,-4924(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4924, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48558"))) PPC_WEAK_FUNC(sub_83C48558);
PPC_FUNC_IMPL(__imp__sub_83C48558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17312
	ctx.r3.s64 = ctx.r11.s64 + -17312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48564"))) PPC_WEAK_FUNC(sub_83C48564);
PPC_FUNC_IMPL(__imp__sub_83C48564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48568"))) PPC_WEAK_FUNC(sub_83C48568);
PPC_FUNC_IMPL(__imp__sub_83C48568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17304
	ctx.r3.s64 = ctx.r11.s64 + -17304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48574"))) PPC_WEAK_FUNC(sub_83C48574);
PPC_FUNC_IMPL(__imp__sub_83C48574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48578"))) PPC_WEAK_FUNC(sub_83C48578);
PPC_FUNC_IMPL(__imp__sub_83C48578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17296
	ctx.r3.s64 = ctx.r11.s64 + -17296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48584"))) PPC_WEAK_FUNC(sub_83C48584);
PPC_FUNC_IMPL(__imp__sub_83C48584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48588"))) PPC_WEAK_FUNC(sub_83C48588);
PPC_FUNC_IMPL(__imp__sub_83C48588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17288
	ctx.r3.s64 = ctx.r11.s64 + -17288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48594"))) PPC_WEAK_FUNC(sub_83C48594);
PPC_FUNC_IMPL(__imp__sub_83C48594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48598"))) PPC_WEAK_FUNC(sub_83C48598);
PPC_FUNC_IMPL(__imp__sub_83C48598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17280
	ctx.r3.s64 = ctx.r11.s64 + -17280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C485A4"))) PPC_WEAK_FUNC(sub_83C485A4);
PPC_FUNC_IMPL(__imp__sub_83C485A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C485A8"))) PPC_WEAK_FUNC(sub_83C485A8);
PPC_FUNC_IMPL(__imp__sub_83C485A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17272
	ctx.r3.s64 = ctx.r11.s64 + -17272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C485B4"))) PPC_WEAK_FUNC(sub_83C485B4);
PPC_FUNC_IMPL(__imp__sub_83C485B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C485B8"))) PPC_WEAK_FUNC(sub_83C485B8);
PPC_FUNC_IMPL(__imp__sub_83C485B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17264
	ctx.r3.s64 = ctx.r11.s64 + -17264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C485C4"))) PPC_WEAK_FUNC(sub_83C485C4);
PPC_FUNC_IMPL(__imp__sub_83C485C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C485C8"))) PPC_WEAK_FUNC(sub_83C485C8);
PPC_FUNC_IMPL(__imp__sub_83C485C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17256
	ctx.r3.s64 = ctx.r11.s64 + -17256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C485D4"))) PPC_WEAK_FUNC(sub_83C485D4);
PPC_FUNC_IMPL(__imp__sub_83C485D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C485D8"))) PPC_WEAK_FUNC(sub_83C485D8);
PPC_FUNC_IMPL(__imp__sub_83C485D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17248
	ctx.r3.s64 = ctx.r11.s64 + -17248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C485E4"))) PPC_WEAK_FUNC(sub_83C485E4);
PPC_FUNC_IMPL(__imp__sub_83C485E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C485E8"))) PPC_WEAK_FUNC(sub_83C485E8);
PPC_FUNC_IMPL(__imp__sub_83C485E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17240
	ctx.r3.s64 = ctx.r11.s64 + -17240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C485F4"))) PPC_WEAK_FUNC(sub_83C485F4);
PPC_FUNC_IMPL(__imp__sub_83C485F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C485F8"))) PPC_WEAK_FUNC(sub_83C485F8);
PPC_FUNC_IMPL(__imp__sub_83C485F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17232
	ctx.r3.s64 = ctx.r11.s64 + -17232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48604"))) PPC_WEAK_FUNC(sub_83C48604);
PPC_FUNC_IMPL(__imp__sub_83C48604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48608"))) PPC_WEAK_FUNC(sub_83C48608);
PPC_FUNC_IMPL(__imp__sub_83C48608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17224
	ctx.r3.s64 = ctx.r11.s64 + -17224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48614"))) PPC_WEAK_FUNC(sub_83C48614);
PPC_FUNC_IMPL(__imp__sub_83C48614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48618"))) PPC_WEAK_FUNC(sub_83C48618);
PPC_FUNC_IMPL(__imp__sub_83C48618) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-4544
	ctx.r7.s64 = ctx.r8.s64 + -4544;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-4544(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4544);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-4544(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4544, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C48640"))) PPC_WEAK_FUNC(sub_83C48640);
PPC_FUNC_IMPL(__imp__sub_83C48640) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,92
	ctx.r6.s64 = ctx.r7.s64 + 92;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,20(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 20);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-4544(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4544);
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
	// std r9,92(r7)
	PPC_STORE_U64(ctx.r7.u32 + 92, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C48688"))) PPC_WEAK_FUNC(sub_83C48688);
PPC_FUNC_IMPL(__imp__sub_83C48688) {
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
	// addi r3,r11,-4560
	ctx.r3.s64 = ctx.r11.s64 + -4560;
	// bl 0x83523120
	ctx.lr = 0x83C486A0;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-17216
	ctx.r3.s64 = ctx.r10.s64 + -17216;
	// bl 0x831cdcc8
	ctx.lr = 0x83C486AC;
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

__attribute__((alias("__imp__sub_83C486BC"))) PPC_WEAK_FUNC(sub_83C486BC);
PPC_FUNC_IMPL(__imp__sub_83C486BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C486C0"))) PPC_WEAK_FUNC(sub_83C486C0);
PPC_FUNC_IMPL(__imp__sub_83C486C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17200
	ctx.r3.s64 = ctx.r11.s64 + -17200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C486CC"))) PPC_WEAK_FUNC(sub_83C486CC);
PPC_FUNC_IMPL(__imp__sub_83C486CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C486D0"))) PPC_WEAK_FUNC(sub_83C486D0);
PPC_FUNC_IMPL(__imp__sub_83C486D0) {
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
	// addi r3,r11,-4536
	ctx.r3.s64 = ctx.r11.s64 + -4536;
	// bl 0x8259af80
	ctx.lr = 0x83C486E8;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-17184
	ctx.r3.s64 = ctx.r10.s64 + -17184;
	// bl 0x831cdcc8
	ctx.lr = 0x83C486F4;
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

__attribute__((alias("__imp__sub_83C48704"))) PPC_WEAK_FUNC(sub_83C48704);
PPC_FUNC_IMPL(__imp__sub_83C48704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48708"))) PPC_WEAK_FUNC(sub_83C48708);
PPC_FUNC_IMPL(__imp__sub_83C48708) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-4556
	ctx.r11.s64 = ctx.r8.s64 + -4556;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,68(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-17192
	ctx.r3.s64 = ctx.r6.s64 + -17192;
	// stw r10,-4556(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4556, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48738"))) PPC_WEAK_FUNC(sub_83C48738);
PPC_FUNC_IMPL(__imp__sub_83C48738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17176
	ctx.r3.s64 = ctx.r11.s64 + -17176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48744"))) PPC_WEAK_FUNC(sub_83C48744);
PPC_FUNC_IMPL(__imp__sub_83C48744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48748"))) PPC_WEAK_FUNC(sub_83C48748);
PPC_FUNC_IMPL(__imp__sub_83C48748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17168
	ctx.r3.s64 = ctx.r11.s64 + -17168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48754"))) PPC_WEAK_FUNC(sub_83C48754);
PPC_FUNC_IMPL(__imp__sub_83C48754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48758"))) PPC_WEAK_FUNC(sub_83C48758);
PPC_FUNC_IMPL(__imp__sub_83C48758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17160
	ctx.r3.s64 = ctx.r11.s64 + -17160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48764"))) PPC_WEAK_FUNC(sub_83C48764);
PPC_FUNC_IMPL(__imp__sub_83C48764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48768"))) PPC_WEAK_FUNC(sub_83C48768);
PPC_FUNC_IMPL(__imp__sub_83C48768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17152
	ctx.r3.s64 = ctx.r11.s64 + -17152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48774"))) PPC_WEAK_FUNC(sub_83C48774);
PPC_FUNC_IMPL(__imp__sub_83C48774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48778"))) PPC_WEAK_FUNC(sub_83C48778);
PPC_FUNC_IMPL(__imp__sub_83C48778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17144
	ctx.r3.s64 = ctx.r11.s64 + -17144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48784"))) PPC_WEAK_FUNC(sub_83C48784);
PPC_FUNC_IMPL(__imp__sub_83C48784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48788"))) PPC_WEAK_FUNC(sub_83C48788);
PPC_FUNC_IMPL(__imp__sub_83C48788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17136
	ctx.r3.s64 = ctx.r11.s64 + -17136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48794"))) PPC_WEAK_FUNC(sub_83C48794);
PPC_FUNC_IMPL(__imp__sub_83C48794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48798"))) PPC_WEAK_FUNC(sub_83C48798);
PPC_FUNC_IMPL(__imp__sub_83C48798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17128
	ctx.r3.s64 = ctx.r11.s64 + -17128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C487A4"))) PPC_WEAK_FUNC(sub_83C487A4);
PPC_FUNC_IMPL(__imp__sub_83C487A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C487A8"))) PPC_WEAK_FUNC(sub_83C487A8);
PPC_FUNC_IMPL(__imp__sub_83C487A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17120
	ctx.r3.s64 = ctx.r11.s64 + -17120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C487B4"))) PPC_WEAK_FUNC(sub_83C487B4);
PPC_FUNC_IMPL(__imp__sub_83C487B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C487B8"))) PPC_WEAK_FUNC(sub_83C487B8);
PPC_FUNC_IMPL(__imp__sub_83C487B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17112
	ctx.r3.s64 = ctx.r11.s64 + -17112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C487C4"))) PPC_WEAK_FUNC(sub_83C487C4);
PPC_FUNC_IMPL(__imp__sub_83C487C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C487C8"))) PPC_WEAK_FUNC(sub_83C487C8);
PPC_FUNC_IMPL(__imp__sub_83C487C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17104
	ctx.r3.s64 = ctx.r11.s64 + -17104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C487D4"))) PPC_WEAK_FUNC(sub_83C487D4);
PPC_FUNC_IMPL(__imp__sub_83C487D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C487D8"))) PPC_WEAK_FUNC(sub_83C487D8);
PPC_FUNC_IMPL(__imp__sub_83C487D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17096
	ctx.r3.s64 = ctx.r11.s64 + -17096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C487E4"))) PPC_WEAK_FUNC(sub_83C487E4);
PPC_FUNC_IMPL(__imp__sub_83C487E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C487E8"))) PPC_WEAK_FUNC(sub_83C487E8);
PPC_FUNC_IMPL(__imp__sub_83C487E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17088
	ctx.r3.s64 = ctx.r11.s64 + -17088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C487F4"))) PPC_WEAK_FUNC(sub_83C487F4);
PPC_FUNC_IMPL(__imp__sub_83C487F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C487F8"))) PPC_WEAK_FUNC(sub_83C487F8);
PPC_FUNC_IMPL(__imp__sub_83C487F8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-4176
	ctx.r7.s64 = ctx.r8.s64 + -4176;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-4176(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4176);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-4176(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4176, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C48820"))) PPC_WEAK_FUNC(sub_83C48820);
PPC_FUNC_IMPL(__imp__sub_83C48820) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,220
	ctx.r6.s64 = ctx.r7.s64 + 220;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,148(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 148);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-4176(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4176);
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
	// std r9,220(r7)
	PPC_STORE_U64(ctx.r7.u32 + 220, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C48868"))) PPC_WEAK_FUNC(sub_83C48868);
PPC_FUNC_IMPL(__imp__sub_83C48868) {
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
	// addi r3,r11,-4192
	ctx.r3.s64 = ctx.r11.s64 + -4192;
	// bl 0x83523120
	ctx.lr = 0x83C48880;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-17080
	ctx.r3.s64 = ctx.r10.s64 + -17080;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4888C;
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

__attribute__((alias("__imp__sub_83C4889C"))) PPC_WEAK_FUNC(sub_83C4889C);
PPC_FUNC_IMPL(__imp__sub_83C4889C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C488A0"))) PPC_WEAK_FUNC(sub_83C488A0);
PPC_FUNC_IMPL(__imp__sub_83C488A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17064
	ctx.r3.s64 = ctx.r11.s64 + -17064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C488AC"))) PPC_WEAK_FUNC(sub_83C488AC);
PPC_FUNC_IMPL(__imp__sub_83C488AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C488B0"))) PPC_WEAK_FUNC(sub_83C488B0);
PPC_FUNC_IMPL(__imp__sub_83C488B0) {
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
	// addi r3,r11,-4168
	ctx.r3.s64 = ctx.r11.s64 + -4168;
	// bl 0x8259af80
	ctx.lr = 0x83C488C8;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-17048
	ctx.r3.s64 = ctx.r10.s64 + -17048;
	// bl 0x831cdcc8
	ctx.lr = 0x83C488D4;
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

__attribute__((alias("__imp__sub_83C488E4"))) PPC_WEAK_FUNC(sub_83C488E4);
PPC_FUNC_IMPL(__imp__sub_83C488E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C488E8"))) PPC_WEAK_FUNC(sub_83C488E8);
PPC_FUNC_IMPL(__imp__sub_83C488E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-4188
	ctx.r11.s64 = ctx.r8.s64 + -4188;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,196(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 196);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-17056
	ctx.r3.s64 = ctx.r6.s64 + -17056;
	// stw r10,-4188(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4188, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48918"))) PPC_WEAK_FUNC(sub_83C48918);
PPC_FUNC_IMPL(__imp__sub_83C48918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17040
	ctx.r3.s64 = ctx.r11.s64 + -17040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48924"))) PPC_WEAK_FUNC(sub_83C48924);
PPC_FUNC_IMPL(__imp__sub_83C48924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48928"))) PPC_WEAK_FUNC(sub_83C48928);
PPC_FUNC_IMPL(__imp__sub_83C48928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17032
	ctx.r3.s64 = ctx.r11.s64 + -17032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48934"))) PPC_WEAK_FUNC(sub_83C48934);
PPC_FUNC_IMPL(__imp__sub_83C48934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48938"))) PPC_WEAK_FUNC(sub_83C48938);
PPC_FUNC_IMPL(__imp__sub_83C48938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17024
	ctx.r3.s64 = ctx.r11.s64 + -17024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48944"))) PPC_WEAK_FUNC(sub_83C48944);
PPC_FUNC_IMPL(__imp__sub_83C48944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48948"))) PPC_WEAK_FUNC(sub_83C48948);
PPC_FUNC_IMPL(__imp__sub_83C48948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17016
	ctx.r3.s64 = ctx.r11.s64 + -17016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48954"))) PPC_WEAK_FUNC(sub_83C48954);
PPC_FUNC_IMPL(__imp__sub_83C48954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48958"))) PPC_WEAK_FUNC(sub_83C48958);
PPC_FUNC_IMPL(__imp__sub_83C48958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17008
	ctx.r3.s64 = ctx.r11.s64 + -17008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48964"))) PPC_WEAK_FUNC(sub_83C48964);
PPC_FUNC_IMPL(__imp__sub_83C48964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48968"))) PPC_WEAK_FUNC(sub_83C48968);
PPC_FUNC_IMPL(__imp__sub_83C48968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-17000
	ctx.r3.s64 = ctx.r11.s64 + -17000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48974"))) PPC_WEAK_FUNC(sub_83C48974);
PPC_FUNC_IMPL(__imp__sub_83C48974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48978"))) PPC_WEAK_FUNC(sub_83C48978);
PPC_FUNC_IMPL(__imp__sub_83C48978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16992
	ctx.r3.s64 = ctx.r11.s64 + -16992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48984"))) PPC_WEAK_FUNC(sub_83C48984);
PPC_FUNC_IMPL(__imp__sub_83C48984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48988"))) PPC_WEAK_FUNC(sub_83C48988);
PPC_FUNC_IMPL(__imp__sub_83C48988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16984
	ctx.r3.s64 = ctx.r11.s64 + -16984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48994"))) PPC_WEAK_FUNC(sub_83C48994);
PPC_FUNC_IMPL(__imp__sub_83C48994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48998"))) PPC_WEAK_FUNC(sub_83C48998);
PPC_FUNC_IMPL(__imp__sub_83C48998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16976
	ctx.r3.s64 = ctx.r11.s64 + -16976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C489A4"))) PPC_WEAK_FUNC(sub_83C489A4);
PPC_FUNC_IMPL(__imp__sub_83C489A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C489A8"))) PPC_WEAK_FUNC(sub_83C489A8);
PPC_FUNC_IMPL(__imp__sub_83C489A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16968
	ctx.r3.s64 = ctx.r11.s64 + -16968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C489B4"))) PPC_WEAK_FUNC(sub_83C489B4);
PPC_FUNC_IMPL(__imp__sub_83C489B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C489B8"))) PPC_WEAK_FUNC(sub_83C489B8);
PPC_FUNC_IMPL(__imp__sub_83C489B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16960
	ctx.r3.s64 = ctx.r11.s64 + -16960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C489C4"))) PPC_WEAK_FUNC(sub_83C489C4);
PPC_FUNC_IMPL(__imp__sub_83C489C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C489C8"))) PPC_WEAK_FUNC(sub_83C489C8);
PPC_FUNC_IMPL(__imp__sub_83C489C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16952
	ctx.r3.s64 = ctx.r11.s64 + -16952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C489D4"))) PPC_WEAK_FUNC(sub_83C489D4);
PPC_FUNC_IMPL(__imp__sub_83C489D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C489D8"))) PPC_WEAK_FUNC(sub_83C489D8);
PPC_FUNC_IMPL(__imp__sub_83C489D8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-3808
	ctx.r7.s64 = ctx.r8.s64 + -3808;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-3808(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -3808);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-3808(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3808, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C48A00"))) PPC_WEAK_FUNC(sub_83C48A00);
PPC_FUNC_IMPL(__imp__sub_83C48A00) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,360
	ctx.r6.s64 = ctx.r7.s64 + 360;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,288(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 288);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-3808(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -3808);
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
	// std r9,360(r7)
	PPC_STORE_U64(ctx.r7.u32 + 360, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C48A48"))) PPC_WEAK_FUNC(sub_83C48A48);
PPC_FUNC_IMPL(__imp__sub_83C48A48) {
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
	// addi r3,r11,-3824
	ctx.r3.s64 = ctx.r11.s64 + -3824;
	// bl 0x83523120
	ctx.lr = 0x83C48A60;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-16944
	ctx.r3.s64 = ctx.r10.s64 + -16944;
	// bl 0x831cdcc8
	ctx.lr = 0x83C48A6C;
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

__attribute__((alias("__imp__sub_83C48A7C"))) PPC_WEAK_FUNC(sub_83C48A7C);
PPC_FUNC_IMPL(__imp__sub_83C48A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48A80"))) PPC_WEAK_FUNC(sub_83C48A80);
PPC_FUNC_IMPL(__imp__sub_83C48A80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16928
	ctx.r3.s64 = ctx.r11.s64 + -16928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48A8C"))) PPC_WEAK_FUNC(sub_83C48A8C);
PPC_FUNC_IMPL(__imp__sub_83C48A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48A90"))) PPC_WEAK_FUNC(sub_83C48A90);
PPC_FUNC_IMPL(__imp__sub_83C48A90) {
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
	// addi r3,r11,-3800
	ctx.r3.s64 = ctx.r11.s64 + -3800;
	// bl 0x8259af80
	ctx.lr = 0x83C48AA8;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-16912
	ctx.r3.s64 = ctx.r10.s64 + -16912;
	// bl 0x831cdcc8
	ctx.lr = 0x83C48AB4;
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

__attribute__((alias("__imp__sub_83C48AC4"))) PPC_WEAK_FUNC(sub_83C48AC4);
PPC_FUNC_IMPL(__imp__sub_83C48AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48AC8"))) PPC_WEAK_FUNC(sub_83C48AC8);
PPC_FUNC_IMPL(__imp__sub_83C48AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-3820
	ctx.r11.s64 = ctx.r8.s64 + -3820;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,336(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 336);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-16920
	ctx.r3.s64 = ctx.r6.s64 + -16920;
	// stw r10,-3820(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3820, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48AF8"))) PPC_WEAK_FUNC(sub_83C48AF8);
PPC_FUNC_IMPL(__imp__sub_83C48AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16904
	ctx.r3.s64 = ctx.r11.s64 + -16904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48B04"))) PPC_WEAK_FUNC(sub_83C48B04);
PPC_FUNC_IMPL(__imp__sub_83C48B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48B08"))) PPC_WEAK_FUNC(sub_83C48B08);
PPC_FUNC_IMPL(__imp__sub_83C48B08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16896
	ctx.r3.s64 = ctx.r11.s64 + -16896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48B14"))) PPC_WEAK_FUNC(sub_83C48B14);
PPC_FUNC_IMPL(__imp__sub_83C48B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48B18"))) PPC_WEAK_FUNC(sub_83C48B18);
PPC_FUNC_IMPL(__imp__sub_83C48B18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16888
	ctx.r3.s64 = ctx.r11.s64 + -16888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48B24"))) PPC_WEAK_FUNC(sub_83C48B24);
PPC_FUNC_IMPL(__imp__sub_83C48B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48B28"))) PPC_WEAK_FUNC(sub_83C48B28);
PPC_FUNC_IMPL(__imp__sub_83C48B28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16880
	ctx.r3.s64 = ctx.r11.s64 + -16880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48B34"))) PPC_WEAK_FUNC(sub_83C48B34);
PPC_FUNC_IMPL(__imp__sub_83C48B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48B38"))) PPC_WEAK_FUNC(sub_83C48B38);
PPC_FUNC_IMPL(__imp__sub_83C48B38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16872
	ctx.r3.s64 = ctx.r11.s64 + -16872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48B44"))) PPC_WEAK_FUNC(sub_83C48B44);
PPC_FUNC_IMPL(__imp__sub_83C48B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48B48"))) PPC_WEAK_FUNC(sub_83C48B48);
PPC_FUNC_IMPL(__imp__sub_83C48B48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16864
	ctx.r3.s64 = ctx.r11.s64 + -16864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48B54"))) PPC_WEAK_FUNC(sub_83C48B54);
PPC_FUNC_IMPL(__imp__sub_83C48B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48B58"))) PPC_WEAK_FUNC(sub_83C48B58);
PPC_FUNC_IMPL(__imp__sub_83C48B58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16856
	ctx.r3.s64 = ctx.r11.s64 + -16856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48B64"))) PPC_WEAK_FUNC(sub_83C48B64);
PPC_FUNC_IMPL(__imp__sub_83C48B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48B68"))) PPC_WEAK_FUNC(sub_83C48B68);
PPC_FUNC_IMPL(__imp__sub_83C48B68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16848
	ctx.r3.s64 = ctx.r11.s64 + -16848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48B74"))) PPC_WEAK_FUNC(sub_83C48B74);
PPC_FUNC_IMPL(__imp__sub_83C48B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48B78"))) PPC_WEAK_FUNC(sub_83C48B78);
PPC_FUNC_IMPL(__imp__sub_83C48B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16840
	ctx.r3.s64 = ctx.r11.s64 + -16840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48B84"))) PPC_WEAK_FUNC(sub_83C48B84);
PPC_FUNC_IMPL(__imp__sub_83C48B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48B88"))) PPC_WEAK_FUNC(sub_83C48B88);
PPC_FUNC_IMPL(__imp__sub_83C48B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16832
	ctx.r3.s64 = ctx.r11.s64 + -16832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48B94"))) PPC_WEAK_FUNC(sub_83C48B94);
PPC_FUNC_IMPL(__imp__sub_83C48B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48B98"))) PPC_WEAK_FUNC(sub_83C48B98);
PPC_FUNC_IMPL(__imp__sub_83C48B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16824
	ctx.r3.s64 = ctx.r11.s64 + -16824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48BA4"))) PPC_WEAK_FUNC(sub_83C48BA4);
PPC_FUNC_IMPL(__imp__sub_83C48BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48BA8"))) PPC_WEAK_FUNC(sub_83C48BA8);
PPC_FUNC_IMPL(__imp__sub_83C48BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16816
	ctx.r3.s64 = ctx.r11.s64 + -16816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48BB4"))) PPC_WEAK_FUNC(sub_83C48BB4);
PPC_FUNC_IMPL(__imp__sub_83C48BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48BB8"))) PPC_WEAK_FUNC(sub_83C48BB8);
PPC_FUNC_IMPL(__imp__sub_83C48BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-3440
	ctx.r7.s64 = ctx.r8.s64 + -3440;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-3440(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -3440);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-3440(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3440, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C48BE0"))) PPC_WEAK_FUNC(sub_83C48BE0);
PPC_FUNC_IMPL(__imp__sub_83C48BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,488
	ctx.r6.s64 = ctx.r7.s64 + 488;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,416(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 416);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-3440(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -3440);
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
	// std r9,488(r7)
	PPC_STORE_U64(ctx.r7.u32 + 488, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C48C28"))) PPC_WEAK_FUNC(sub_83C48C28);
PPC_FUNC_IMPL(__imp__sub_83C48C28) {
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
	// addi r3,r11,-3456
	ctx.r3.s64 = ctx.r11.s64 + -3456;
	// bl 0x83523120
	ctx.lr = 0x83C48C40;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-16808
	ctx.r3.s64 = ctx.r10.s64 + -16808;
	// bl 0x831cdcc8
	ctx.lr = 0x83C48C4C;
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

__attribute__((alias("__imp__sub_83C48C5C"))) PPC_WEAK_FUNC(sub_83C48C5C);
PPC_FUNC_IMPL(__imp__sub_83C48C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48C60"))) PPC_WEAK_FUNC(sub_83C48C60);
PPC_FUNC_IMPL(__imp__sub_83C48C60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16792
	ctx.r3.s64 = ctx.r11.s64 + -16792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48C6C"))) PPC_WEAK_FUNC(sub_83C48C6C);
PPC_FUNC_IMPL(__imp__sub_83C48C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48C70"))) PPC_WEAK_FUNC(sub_83C48C70);
PPC_FUNC_IMPL(__imp__sub_83C48C70) {
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
	// addi r3,r11,-3432
	ctx.r3.s64 = ctx.r11.s64 + -3432;
	// bl 0x8259af80
	ctx.lr = 0x83C48C88;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-16776
	ctx.r3.s64 = ctx.r10.s64 + -16776;
	// bl 0x831cdcc8
	ctx.lr = 0x83C48C94;
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

__attribute__((alias("__imp__sub_83C48CA4"))) PPC_WEAK_FUNC(sub_83C48CA4);
PPC_FUNC_IMPL(__imp__sub_83C48CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48CA8"))) PPC_WEAK_FUNC(sub_83C48CA8);
PPC_FUNC_IMPL(__imp__sub_83C48CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-3452
	ctx.r11.s64 = ctx.r8.s64 + -3452;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,464(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 464);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-16784
	ctx.r3.s64 = ctx.r6.s64 + -16784;
	// stw r10,-3452(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3452, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48CD8"))) PPC_WEAK_FUNC(sub_83C48CD8);
PPC_FUNC_IMPL(__imp__sub_83C48CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16768
	ctx.r3.s64 = ctx.r11.s64 + -16768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48CE4"))) PPC_WEAK_FUNC(sub_83C48CE4);
PPC_FUNC_IMPL(__imp__sub_83C48CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48CE8"))) PPC_WEAK_FUNC(sub_83C48CE8);
PPC_FUNC_IMPL(__imp__sub_83C48CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16760
	ctx.r3.s64 = ctx.r11.s64 + -16760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48CF4"))) PPC_WEAK_FUNC(sub_83C48CF4);
PPC_FUNC_IMPL(__imp__sub_83C48CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48CF8"))) PPC_WEAK_FUNC(sub_83C48CF8);
PPC_FUNC_IMPL(__imp__sub_83C48CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16752
	ctx.r3.s64 = ctx.r11.s64 + -16752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48D04"))) PPC_WEAK_FUNC(sub_83C48D04);
PPC_FUNC_IMPL(__imp__sub_83C48D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48D08"))) PPC_WEAK_FUNC(sub_83C48D08);
PPC_FUNC_IMPL(__imp__sub_83C48D08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16744
	ctx.r3.s64 = ctx.r11.s64 + -16744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48D14"))) PPC_WEAK_FUNC(sub_83C48D14);
PPC_FUNC_IMPL(__imp__sub_83C48D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48D18"))) PPC_WEAK_FUNC(sub_83C48D18);
PPC_FUNC_IMPL(__imp__sub_83C48D18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16736
	ctx.r3.s64 = ctx.r11.s64 + -16736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48D24"))) PPC_WEAK_FUNC(sub_83C48D24);
PPC_FUNC_IMPL(__imp__sub_83C48D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48D28"))) PPC_WEAK_FUNC(sub_83C48D28);
PPC_FUNC_IMPL(__imp__sub_83C48D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16728
	ctx.r3.s64 = ctx.r11.s64 + -16728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48D34"))) PPC_WEAK_FUNC(sub_83C48D34);
PPC_FUNC_IMPL(__imp__sub_83C48D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48D38"))) PPC_WEAK_FUNC(sub_83C48D38);
PPC_FUNC_IMPL(__imp__sub_83C48D38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16720
	ctx.r3.s64 = ctx.r11.s64 + -16720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48D44"))) PPC_WEAK_FUNC(sub_83C48D44);
PPC_FUNC_IMPL(__imp__sub_83C48D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48D48"))) PPC_WEAK_FUNC(sub_83C48D48);
PPC_FUNC_IMPL(__imp__sub_83C48D48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16712
	ctx.r3.s64 = ctx.r11.s64 + -16712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48D54"))) PPC_WEAK_FUNC(sub_83C48D54);
PPC_FUNC_IMPL(__imp__sub_83C48D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48D58"))) PPC_WEAK_FUNC(sub_83C48D58);
PPC_FUNC_IMPL(__imp__sub_83C48D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16704
	ctx.r3.s64 = ctx.r11.s64 + -16704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48D64"))) PPC_WEAK_FUNC(sub_83C48D64);
PPC_FUNC_IMPL(__imp__sub_83C48D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48D68"))) PPC_WEAK_FUNC(sub_83C48D68);
PPC_FUNC_IMPL(__imp__sub_83C48D68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16696
	ctx.r3.s64 = ctx.r11.s64 + -16696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48D74"))) PPC_WEAK_FUNC(sub_83C48D74);
PPC_FUNC_IMPL(__imp__sub_83C48D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48D78"))) PPC_WEAK_FUNC(sub_83C48D78);
PPC_FUNC_IMPL(__imp__sub_83C48D78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16688
	ctx.r3.s64 = ctx.r11.s64 + -16688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48D84"))) PPC_WEAK_FUNC(sub_83C48D84);
PPC_FUNC_IMPL(__imp__sub_83C48D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48D88"))) PPC_WEAK_FUNC(sub_83C48D88);
PPC_FUNC_IMPL(__imp__sub_83C48D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16680
	ctx.r3.s64 = ctx.r11.s64 + -16680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48D94"))) PPC_WEAK_FUNC(sub_83C48D94);
PPC_FUNC_IMPL(__imp__sub_83C48D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48D98"))) PPC_WEAK_FUNC(sub_83C48D98);
PPC_FUNC_IMPL(__imp__sub_83C48D98) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-3072
	ctx.r7.s64 = ctx.r8.s64 + -3072;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-3072(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -3072);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-3072(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3072, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C48DC0"))) PPC_WEAK_FUNC(sub_83C48DC0);
PPC_FUNC_IMPL(__imp__sub_83C48DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,616
	ctx.r6.s64 = ctx.r7.s64 + 616;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,544(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 544);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-3072(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -3072);
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
	// std r9,616(r7)
	PPC_STORE_U64(ctx.r7.u32 + 616, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C48E08"))) PPC_WEAK_FUNC(sub_83C48E08);
PPC_FUNC_IMPL(__imp__sub_83C48E08) {
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
	// addi r3,r11,-3088
	ctx.r3.s64 = ctx.r11.s64 + -3088;
	// bl 0x83523120
	ctx.lr = 0x83C48E20;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-16672
	ctx.r3.s64 = ctx.r10.s64 + -16672;
	// bl 0x831cdcc8
	ctx.lr = 0x83C48E2C;
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

__attribute__((alias("__imp__sub_83C48E3C"))) PPC_WEAK_FUNC(sub_83C48E3C);
PPC_FUNC_IMPL(__imp__sub_83C48E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48E40"))) PPC_WEAK_FUNC(sub_83C48E40);
PPC_FUNC_IMPL(__imp__sub_83C48E40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16656
	ctx.r3.s64 = ctx.r11.s64 + -16656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48E4C"))) PPC_WEAK_FUNC(sub_83C48E4C);
PPC_FUNC_IMPL(__imp__sub_83C48E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48E50"))) PPC_WEAK_FUNC(sub_83C48E50);
PPC_FUNC_IMPL(__imp__sub_83C48E50) {
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
	// addi r3,r11,-3064
	ctx.r3.s64 = ctx.r11.s64 + -3064;
	// bl 0x8259af80
	ctx.lr = 0x83C48E68;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-16640
	ctx.r3.s64 = ctx.r10.s64 + -16640;
	// bl 0x831cdcc8
	ctx.lr = 0x83C48E74;
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

__attribute__((alias("__imp__sub_83C48E84"))) PPC_WEAK_FUNC(sub_83C48E84);
PPC_FUNC_IMPL(__imp__sub_83C48E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48E88"))) PPC_WEAK_FUNC(sub_83C48E88);
PPC_FUNC_IMPL(__imp__sub_83C48E88) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-3084
	ctx.r11.s64 = ctx.r8.s64 + -3084;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,592(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 592);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-16648
	ctx.r3.s64 = ctx.r6.s64 + -16648;
	// stw r10,-3084(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3084, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48EB8"))) PPC_WEAK_FUNC(sub_83C48EB8);
PPC_FUNC_IMPL(__imp__sub_83C48EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16632
	ctx.r3.s64 = ctx.r11.s64 + -16632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48EC4"))) PPC_WEAK_FUNC(sub_83C48EC4);
PPC_FUNC_IMPL(__imp__sub_83C48EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48EC8"))) PPC_WEAK_FUNC(sub_83C48EC8);
PPC_FUNC_IMPL(__imp__sub_83C48EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16624
	ctx.r3.s64 = ctx.r11.s64 + -16624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48ED4"))) PPC_WEAK_FUNC(sub_83C48ED4);
PPC_FUNC_IMPL(__imp__sub_83C48ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48ED8"))) PPC_WEAK_FUNC(sub_83C48ED8);
PPC_FUNC_IMPL(__imp__sub_83C48ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16616
	ctx.r3.s64 = ctx.r11.s64 + -16616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48EE4"))) PPC_WEAK_FUNC(sub_83C48EE4);
PPC_FUNC_IMPL(__imp__sub_83C48EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48EE8"))) PPC_WEAK_FUNC(sub_83C48EE8);
PPC_FUNC_IMPL(__imp__sub_83C48EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16608
	ctx.r3.s64 = ctx.r11.s64 + -16608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48EF4"))) PPC_WEAK_FUNC(sub_83C48EF4);
PPC_FUNC_IMPL(__imp__sub_83C48EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48EF8"))) PPC_WEAK_FUNC(sub_83C48EF8);
PPC_FUNC_IMPL(__imp__sub_83C48EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16600
	ctx.r3.s64 = ctx.r11.s64 + -16600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48F04"))) PPC_WEAK_FUNC(sub_83C48F04);
PPC_FUNC_IMPL(__imp__sub_83C48F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48F08"))) PPC_WEAK_FUNC(sub_83C48F08);
PPC_FUNC_IMPL(__imp__sub_83C48F08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16592
	ctx.r3.s64 = ctx.r11.s64 + -16592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48F14"))) PPC_WEAK_FUNC(sub_83C48F14);
PPC_FUNC_IMPL(__imp__sub_83C48F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48F18"))) PPC_WEAK_FUNC(sub_83C48F18);
PPC_FUNC_IMPL(__imp__sub_83C48F18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16584
	ctx.r3.s64 = ctx.r11.s64 + -16584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48F24"))) PPC_WEAK_FUNC(sub_83C48F24);
PPC_FUNC_IMPL(__imp__sub_83C48F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48F28"))) PPC_WEAK_FUNC(sub_83C48F28);
PPC_FUNC_IMPL(__imp__sub_83C48F28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16576
	ctx.r3.s64 = ctx.r11.s64 + -16576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48F34"))) PPC_WEAK_FUNC(sub_83C48F34);
PPC_FUNC_IMPL(__imp__sub_83C48F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48F38"))) PPC_WEAK_FUNC(sub_83C48F38);
PPC_FUNC_IMPL(__imp__sub_83C48F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16568
	ctx.r3.s64 = ctx.r11.s64 + -16568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48F44"))) PPC_WEAK_FUNC(sub_83C48F44);
PPC_FUNC_IMPL(__imp__sub_83C48F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48F48"))) PPC_WEAK_FUNC(sub_83C48F48);
PPC_FUNC_IMPL(__imp__sub_83C48F48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16560
	ctx.r3.s64 = ctx.r11.s64 + -16560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48F54"))) PPC_WEAK_FUNC(sub_83C48F54);
PPC_FUNC_IMPL(__imp__sub_83C48F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48F58"))) PPC_WEAK_FUNC(sub_83C48F58);
PPC_FUNC_IMPL(__imp__sub_83C48F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16552
	ctx.r3.s64 = ctx.r11.s64 + -16552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48F64"))) PPC_WEAK_FUNC(sub_83C48F64);
PPC_FUNC_IMPL(__imp__sub_83C48F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48F68"))) PPC_WEAK_FUNC(sub_83C48F68);
PPC_FUNC_IMPL(__imp__sub_83C48F68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16544
	ctx.r3.s64 = ctx.r11.s64 + -16544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C48F74"))) PPC_WEAK_FUNC(sub_83C48F74);
PPC_FUNC_IMPL(__imp__sub_83C48F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C48F78"))) PPC_WEAK_FUNC(sub_83C48F78);
PPC_FUNC_IMPL(__imp__sub_83C48F78) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-2704
	ctx.r7.s64 = ctx.r8.s64 + -2704;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-2704(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2704);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-2704(r8)
	PPC_STORE_U32(ctx.r8.u32 + -2704, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C48FA0"))) PPC_WEAK_FUNC(sub_83C48FA0);
PPC_FUNC_IMPL(__imp__sub_83C48FA0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,744
	ctx.r6.s64 = ctx.r7.s64 + 744;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,672(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 672);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-2704(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -2704);
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
	// std r9,744(r7)
	PPC_STORE_U64(ctx.r7.u32 + 744, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C48FE8"))) PPC_WEAK_FUNC(sub_83C48FE8);
PPC_FUNC_IMPL(__imp__sub_83C48FE8) {
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
	// addi r3,r11,-2720
	ctx.r3.s64 = ctx.r11.s64 + -2720;
	// bl 0x83523120
	ctx.lr = 0x83C49000;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-16536
	ctx.r3.s64 = ctx.r10.s64 + -16536;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4900C;
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

__attribute__((alias("__imp__sub_83C4901C"))) PPC_WEAK_FUNC(sub_83C4901C);
PPC_FUNC_IMPL(__imp__sub_83C4901C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49020"))) PPC_WEAK_FUNC(sub_83C49020);
PPC_FUNC_IMPL(__imp__sub_83C49020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16520
	ctx.r3.s64 = ctx.r11.s64 + -16520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4902C"))) PPC_WEAK_FUNC(sub_83C4902C);
PPC_FUNC_IMPL(__imp__sub_83C4902C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49030"))) PPC_WEAK_FUNC(sub_83C49030);
PPC_FUNC_IMPL(__imp__sub_83C49030) {
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
	// addi r3,r11,-2696
	ctx.r3.s64 = ctx.r11.s64 + -2696;
	// bl 0x8259af80
	ctx.lr = 0x83C49048;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-16504
	ctx.r3.s64 = ctx.r10.s64 + -16504;
	// bl 0x831cdcc8
	ctx.lr = 0x83C49054;
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

__attribute__((alias("__imp__sub_83C49064"))) PPC_WEAK_FUNC(sub_83C49064);
PPC_FUNC_IMPL(__imp__sub_83C49064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49068"))) PPC_WEAK_FUNC(sub_83C49068);
PPC_FUNC_IMPL(__imp__sub_83C49068) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-2716
	ctx.r11.s64 = ctx.r8.s64 + -2716;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,720(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 720);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-16512
	ctx.r3.s64 = ctx.r6.s64 + -16512;
	// stw r10,-2716(r8)
	PPC_STORE_U32(ctx.r8.u32 + -2716, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49098"))) PPC_WEAK_FUNC(sub_83C49098);
PPC_FUNC_IMPL(__imp__sub_83C49098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16496
	ctx.r3.s64 = ctx.r11.s64 + -16496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C490A4"))) PPC_WEAK_FUNC(sub_83C490A4);
PPC_FUNC_IMPL(__imp__sub_83C490A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C490A8"))) PPC_WEAK_FUNC(sub_83C490A8);
PPC_FUNC_IMPL(__imp__sub_83C490A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16488
	ctx.r3.s64 = ctx.r11.s64 + -16488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C490B4"))) PPC_WEAK_FUNC(sub_83C490B4);
PPC_FUNC_IMPL(__imp__sub_83C490B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C490B8"))) PPC_WEAK_FUNC(sub_83C490B8);
PPC_FUNC_IMPL(__imp__sub_83C490B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16480
	ctx.r3.s64 = ctx.r11.s64 + -16480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C490C4"))) PPC_WEAK_FUNC(sub_83C490C4);
PPC_FUNC_IMPL(__imp__sub_83C490C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C490C8"))) PPC_WEAK_FUNC(sub_83C490C8);
PPC_FUNC_IMPL(__imp__sub_83C490C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16472
	ctx.r3.s64 = ctx.r11.s64 + -16472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C490D4"))) PPC_WEAK_FUNC(sub_83C490D4);
PPC_FUNC_IMPL(__imp__sub_83C490D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C490D8"))) PPC_WEAK_FUNC(sub_83C490D8);
PPC_FUNC_IMPL(__imp__sub_83C490D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16464
	ctx.r3.s64 = ctx.r11.s64 + -16464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C490E4"))) PPC_WEAK_FUNC(sub_83C490E4);
PPC_FUNC_IMPL(__imp__sub_83C490E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C490E8"))) PPC_WEAK_FUNC(sub_83C490E8);
PPC_FUNC_IMPL(__imp__sub_83C490E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16456
	ctx.r3.s64 = ctx.r11.s64 + -16456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C490F4"))) PPC_WEAK_FUNC(sub_83C490F4);
PPC_FUNC_IMPL(__imp__sub_83C490F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C490F8"))) PPC_WEAK_FUNC(sub_83C490F8);
PPC_FUNC_IMPL(__imp__sub_83C490F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16448
	ctx.r3.s64 = ctx.r11.s64 + -16448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49104"))) PPC_WEAK_FUNC(sub_83C49104);
PPC_FUNC_IMPL(__imp__sub_83C49104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49108"))) PPC_WEAK_FUNC(sub_83C49108);
PPC_FUNC_IMPL(__imp__sub_83C49108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16440
	ctx.r3.s64 = ctx.r11.s64 + -16440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49114"))) PPC_WEAK_FUNC(sub_83C49114);
PPC_FUNC_IMPL(__imp__sub_83C49114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49118"))) PPC_WEAK_FUNC(sub_83C49118);
PPC_FUNC_IMPL(__imp__sub_83C49118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16432
	ctx.r3.s64 = ctx.r11.s64 + -16432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49124"))) PPC_WEAK_FUNC(sub_83C49124);
PPC_FUNC_IMPL(__imp__sub_83C49124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49128"))) PPC_WEAK_FUNC(sub_83C49128);
PPC_FUNC_IMPL(__imp__sub_83C49128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16424
	ctx.r3.s64 = ctx.r11.s64 + -16424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49134"))) PPC_WEAK_FUNC(sub_83C49134);
PPC_FUNC_IMPL(__imp__sub_83C49134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49138"))) PPC_WEAK_FUNC(sub_83C49138);
PPC_FUNC_IMPL(__imp__sub_83C49138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16416
	ctx.r3.s64 = ctx.r11.s64 + -16416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49144"))) PPC_WEAK_FUNC(sub_83C49144);
PPC_FUNC_IMPL(__imp__sub_83C49144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49148"))) PPC_WEAK_FUNC(sub_83C49148);
PPC_FUNC_IMPL(__imp__sub_83C49148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16408
	ctx.r3.s64 = ctx.r11.s64 + -16408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49154"))) PPC_WEAK_FUNC(sub_83C49154);
PPC_FUNC_IMPL(__imp__sub_83C49154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49158"))) PPC_WEAK_FUNC(sub_83C49158);
PPC_FUNC_IMPL(__imp__sub_83C49158) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-2336
	ctx.r7.s64 = ctx.r8.s64 + -2336;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-2336(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2336);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-2336(r8)
	PPC_STORE_U32(ctx.r8.u32 + -2336, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C49180"))) PPC_WEAK_FUNC(sub_83C49180);
PPC_FUNC_IMPL(__imp__sub_83C49180) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,872
	ctx.r6.s64 = ctx.r7.s64 + 872;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,800(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 800);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-2336(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -2336);
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
	// std r9,872(r7)
	PPC_STORE_U64(ctx.r7.u32 + 872, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C491C8"))) PPC_WEAK_FUNC(sub_83C491C8);
PPC_FUNC_IMPL(__imp__sub_83C491C8) {
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
	// addi r3,r11,-2352
	ctx.r3.s64 = ctx.r11.s64 + -2352;
	// bl 0x83523120
	ctx.lr = 0x83C491E0;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-16400
	ctx.r3.s64 = ctx.r10.s64 + -16400;
	// bl 0x831cdcc8
	ctx.lr = 0x83C491EC;
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

__attribute__((alias("__imp__sub_83C491FC"))) PPC_WEAK_FUNC(sub_83C491FC);
PPC_FUNC_IMPL(__imp__sub_83C491FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49200"))) PPC_WEAK_FUNC(sub_83C49200);
PPC_FUNC_IMPL(__imp__sub_83C49200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16384
	ctx.r3.s64 = ctx.r11.s64 + -16384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4920C"))) PPC_WEAK_FUNC(sub_83C4920C);
PPC_FUNC_IMPL(__imp__sub_83C4920C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49210"))) PPC_WEAK_FUNC(sub_83C49210);
PPC_FUNC_IMPL(__imp__sub_83C49210) {
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
	// addi r3,r11,-2328
	ctx.r3.s64 = ctx.r11.s64 + -2328;
	// bl 0x8259af80
	ctx.lr = 0x83C49228;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-16368
	ctx.r3.s64 = ctx.r10.s64 + -16368;
	// bl 0x831cdcc8
	ctx.lr = 0x83C49234;
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

__attribute__((alias("__imp__sub_83C49244"))) PPC_WEAK_FUNC(sub_83C49244);
PPC_FUNC_IMPL(__imp__sub_83C49244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49248"))) PPC_WEAK_FUNC(sub_83C49248);
PPC_FUNC_IMPL(__imp__sub_83C49248) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-2348
	ctx.r11.s64 = ctx.r8.s64 + -2348;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,848(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 848);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-16376
	ctx.r3.s64 = ctx.r6.s64 + -16376;
	// stw r10,-2348(r8)
	PPC_STORE_U32(ctx.r8.u32 + -2348, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49278"))) PPC_WEAK_FUNC(sub_83C49278);
PPC_FUNC_IMPL(__imp__sub_83C49278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16360
	ctx.r3.s64 = ctx.r11.s64 + -16360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49284"))) PPC_WEAK_FUNC(sub_83C49284);
PPC_FUNC_IMPL(__imp__sub_83C49284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49288"))) PPC_WEAK_FUNC(sub_83C49288);
PPC_FUNC_IMPL(__imp__sub_83C49288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16352
	ctx.r3.s64 = ctx.r11.s64 + -16352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C49294"))) PPC_WEAK_FUNC(sub_83C49294);
PPC_FUNC_IMPL(__imp__sub_83C49294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C49298"))) PPC_WEAK_FUNC(sub_83C49298);
PPC_FUNC_IMPL(__imp__sub_83C49298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16344
	ctx.r3.s64 = ctx.r11.s64 + -16344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C492A4"))) PPC_WEAK_FUNC(sub_83C492A4);
PPC_FUNC_IMPL(__imp__sub_83C492A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C492A8"))) PPC_WEAK_FUNC(sub_83C492A8);
PPC_FUNC_IMPL(__imp__sub_83C492A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16336
	ctx.r3.s64 = ctx.r11.s64 + -16336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C492B4"))) PPC_WEAK_FUNC(sub_83C492B4);
PPC_FUNC_IMPL(__imp__sub_83C492B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C492B8"))) PPC_WEAK_FUNC(sub_83C492B8);
PPC_FUNC_IMPL(__imp__sub_83C492B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-16328
	ctx.r3.s64 = ctx.r11.s64 + -16328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

