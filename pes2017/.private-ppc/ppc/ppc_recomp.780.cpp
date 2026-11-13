#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C459C0"))) PPC_WEAK_FUNC(sub_83C459C0);
PPC_FUNC_IMPL(__imp__sub_83C459C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20536
	ctx.r3.s64 = ctx.r11.s64 + -20536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C459CC"))) PPC_WEAK_FUNC(sub_83C459CC);
PPC_FUNC_IMPL(__imp__sub_83C459CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C459D0"))) PPC_WEAK_FUNC(sub_83C459D0);
PPC_FUNC_IMPL(__imp__sub_83C459D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20528
	ctx.r3.s64 = ctx.r11.s64 + -20528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C459DC"))) PPC_WEAK_FUNC(sub_83C459DC);
PPC_FUNC_IMPL(__imp__sub_83C459DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C459E0"))) PPC_WEAK_FUNC(sub_83C459E0);
PPC_FUNC_IMPL(__imp__sub_83C459E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20520
	ctx.r3.s64 = ctx.r11.s64 + -20520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C459EC"))) PPC_WEAK_FUNC(sub_83C459EC);
PPC_FUNC_IMPL(__imp__sub_83C459EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C459F0"))) PPC_WEAK_FUNC(sub_83C459F0);
PPC_FUNC_IMPL(__imp__sub_83C459F0) {
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
	// addi r3,r11,-12688
	ctx.r3.s64 = ctx.r11.s64 + -12688;
	// bl 0x83523120
	ctx.lr = 0x83C45A08;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-20512
	ctx.r3.s64 = ctx.r10.s64 + -20512;
	// bl 0x831cdcc8
	ctx.lr = 0x83C45A14;
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

__attribute__((alias("__imp__sub_83C45A24"))) PPC_WEAK_FUNC(sub_83C45A24);
PPC_FUNC_IMPL(__imp__sub_83C45A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45A28"))) PPC_WEAK_FUNC(sub_83C45A28);
PPC_FUNC_IMPL(__imp__sub_83C45A28) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-12672
	ctx.r7.s64 = ctx.r8.s64 + -12672;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-12672(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12672);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-12672(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12672, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C45A50"))) PPC_WEAK_FUNC(sub_83C45A50);
PPC_FUNC_IMPL(__imp__sub_83C45A50) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-3056
	ctx.r6.s64 = ctx.r7.s64 + -3056;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-3136(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -3136);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-12672(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12672);
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
	// std r9,-3056(r7)
	PPC_STORE_U64(ctx.r7.u32 + -3056, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C45A98"))) PPC_WEAK_FUNC(sub_83C45A98);
PPC_FUNC_IMPL(__imp__sub_83C45A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20496
	ctx.r3.s64 = ctx.r11.s64 + -20496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C45AA4"))) PPC_WEAK_FUNC(sub_83C45AA4);
PPC_FUNC_IMPL(__imp__sub_83C45AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45AA8"))) PPC_WEAK_FUNC(sub_83C45AA8);
PPC_FUNC_IMPL(__imp__sub_83C45AA8) {
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
	// addi r3,r11,-12664
	ctx.r3.s64 = ctx.r11.s64 + -12664;
	// bl 0x8259af80
	ctx.lr = 0x83C45AC0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-20480
	ctx.r3.s64 = ctx.r10.s64 + -20480;
	// bl 0x831cdcc8
	ctx.lr = 0x83C45ACC;
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

__attribute__((alias("__imp__sub_83C45ADC"))) PPC_WEAK_FUNC(sub_83C45ADC);
PPC_FUNC_IMPL(__imp__sub_83C45ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45AE0"))) PPC_WEAK_FUNC(sub_83C45AE0);
PPC_FUNC_IMPL(__imp__sub_83C45AE0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-12684
	ctx.r11.s64 = ctx.r8.s64 + -12684;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-3088(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3088);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-20488
	ctx.r3.s64 = ctx.r6.s64 + -20488;
	// stw r10,-12684(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12684, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C45B10"))) PPC_WEAK_FUNC(sub_83C45B10);
PPC_FUNC_IMPL(__imp__sub_83C45B10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20472
	ctx.r3.s64 = ctx.r11.s64 + -20472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C45B1C"))) PPC_WEAK_FUNC(sub_83C45B1C);
PPC_FUNC_IMPL(__imp__sub_83C45B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45B20"))) PPC_WEAK_FUNC(sub_83C45B20);
PPC_FUNC_IMPL(__imp__sub_83C45B20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20464
	ctx.r3.s64 = ctx.r11.s64 + -20464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C45B2C"))) PPC_WEAK_FUNC(sub_83C45B2C);
PPC_FUNC_IMPL(__imp__sub_83C45B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45B30"))) PPC_WEAK_FUNC(sub_83C45B30);
PPC_FUNC_IMPL(__imp__sub_83C45B30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20456
	ctx.r3.s64 = ctx.r11.s64 + -20456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C45B3C"))) PPC_WEAK_FUNC(sub_83C45B3C);
PPC_FUNC_IMPL(__imp__sub_83C45B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45B40"))) PPC_WEAK_FUNC(sub_83C45B40);
PPC_FUNC_IMPL(__imp__sub_83C45B40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20448
	ctx.r3.s64 = ctx.r11.s64 + -20448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C45B4C"))) PPC_WEAK_FUNC(sub_83C45B4C);
PPC_FUNC_IMPL(__imp__sub_83C45B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45B50"))) PPC_WEAK_FUNC(sub_83C45B50);
PPC_FUNC_IMPL(__imp__sub_83C45B50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20440
	ctx.r3.s64 = ctx.r11.s64 + -20440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C45B5C"))) PPC_WEAK_FUNC(sub_83C45B5C);
PPC_FUNC_IMPL(__imp__sub_83C45B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45B60"))) PPC_WEAK_FUNC(sub_83C45B60);
PPC_FUNC_IMPL(__imp__sub_83C45B60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20432
	ctx.r3.s64 = ctx.r11.s64 + -20432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C45B6C"))) PPC_WEAK_FUNC(sub_83C45B6C);
PPC_FUNC_IMPL(__imp__sub_83C45B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45B70"))) PPC_WEAK_FUNC(sub_83C45B70);
PPC_FUNC_IMPL(__imp__sub_83C45B70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20424
	ctx.r3.s64 = ctx.r11.s64 + -20424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C45B7C"))) PPC_WEAK_FUNC(sub_83C45B7C);
PPC_FUNC_IMPL(__imp__sub_83C45B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45B80"))) PPC_WEAK_FUNC(sub_83C45B80);
PPC_FUNC_IMPL(__imp__sub_83C45B80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20416
	ctx.r3.s64 = ctx.r11.s64 + -20416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C45B8C"))) PPC_WEAK_FUNC(sub_83C45B8C);
PPC_FUNC_IMPL(__imp__sub_83C45B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45B90"))) PPC_WEAK_FUNC(sub_83C45B90);
PPC_FUNC_IMPL(__imp__sub_83C45B90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20408
	ctx.r3.s64 = ctx.r11.s64 + -20408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C45B9C"))) PPC_WEAK_FUNC(sub_83C45B9C);
PPC_FUNC_IMPL(__imp__sub_83C45B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45BA0"))) PPC_WEAK_FUNC(sub_83C45BA0);
PPC_FUNC_IMPL(__imp__sub_83C45BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20400
	ctx.r3.s64 = ctx.r11.s64 + -20400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C45BAC"))) PPC_WEAK_FUNC(sub_83C45BAC);
PPC_FUNC_IMPL(__imp__sub_83C45BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45BB0"))) PPC_WEAK_FUNC(sub_83C45BB0);
PPC_FUNC_IMPL(__imp__sub_83C45BB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20392
	ctx.r3.s64 = ctx.r11.s64 + -20392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C45BBC"))) PPC_WEAK_FUNC(sub_83C45BBC);
PPC_FUNC_IMPL(__imp__sub_83C45BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45BC0"))) PPC_WEAK_FUNC(sub_83C45BC0);
PPC_FUNC_IMPL(__imp__sub_83C45BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20384
	ctx.r3.s64 = ctx.r11.s64 + -20384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C45BCC"))) PPC_WEAK_FUNC(sub_83C45BCC);
PPC_FUNC_IMPL(__imp__sub_83C45BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45BD0"))) PPC_WEAK_FUNC(sub_83C45BD0);
PPC_FUNC_IMPL(__imp__sub_83C45BD0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-12304
	ctx.r7.s64 = ctx.r8.s64 + -12304;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-12304(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12304);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-12304(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12304, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C45BF8"))) PPC_WEAK_FUNC(sub_83C45BF8);
PPC_FUNC_IMPL(__imp__sub_83C45BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-2928
	ctx.r6.s64 = ctx.r7.s64 + -2928;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-3000(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -3000);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-12304(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12304);
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
	// std r9,-2928(r7)
	PPC_STORE_U64(ctx.r7.u32 + -2928, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C45C40"))) PPC_WEAK_FUNC(sub_83C45C40);
PPC_FUNC_IMPL(__imp__sub_83C45C40) {
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
	// addi r3,r11,-12320
	ctx.r3.s64 = ctx.r11.s64 + -12320;
	// bl 0x83523120
	ctx.lr = 0x83C45C58;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-20376
	ctx.r3.s64 = ctx.r10.s64 + -20376;
	// bl 0x831cdcc8
	ctx.lr = 0x83C45C64;
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

__attribute__((alias("__imp__sub_83C45C74"))) PPC_WEAK_FUNC(sub_83C45C74);
PPC_FUNC_IMPL(__imp__sub_83C45C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45C78"))) PPC_WEAK_FUNC(sub_83C45C78);
PPC_FUNC_IMPL(__imp__sub_83C45C78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20360
	ctx.r3.s64 = ctx.r11.s64 + -20360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C45C84"))) PPC_WEAK_FUNC(sub_83C45C84);
PPC_FUNC_IMPL(__imp__sub_83C45C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45C88"))) PPC_WEAK_FUNC(sub_83C45C88);
PPC_FUNC_IMPL(__imp__sub_83C45C88) {
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
	// addi r3,r11,-12296
	ctx.r3.s64 = ctx.r11.s64 + -12296;
	// bl 0x8259af80
	ctx.lr = 0x83C45CA0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-20344
	ctx.r3.s64 = ctx.r10.s64 + -20344;
	// bl 0x831cdcc8
	ctx.lr = 0x83C45CAC;
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

__attribute__((alias("__imp__sub_83C45CBC"))) PPC_WEAK_FUNC(sub_83C45CBC);
PPC_FUNC_IMPL(__imp__sub_83C45CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45CC0"))) PPC_WEAK_FUNC(sub_83C45CC0);
PPC_FUNC_IMPL(__imp__sub_83C45CC0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-12316
	ctx.r11.s64 = ctx.r8.s64 + -12316;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-2952(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2952);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-20352
	ctx.r3.s64 = ctx.r6.s64 + -20352;
	// stw r10,-12316(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12316, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C45CF0"))) PPC_WEAK_FUNC(sub_83C45CF0);
PPC_FUNC_IMPL(__imp__sub_83C45CF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20336
	ctx.r3.s64 = ctx.r11.s64 + -20336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C45CFC"))) PPC_WEAK_FUNC(sub_83C45CFC);
PPC_FUNC_IMPL(__imp__sub_83C45CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45D00"))) PPC_WEAK_FUNC(sub_83C45D00);
PPC_FUNC_IMPL(__imp__sub_83C45D00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20328
	ctx.r3.s64 = ctx.r11.s64 + -20328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C45D0C"))) PPC_WEAK_FUNC(sub_83C45D0C);
PPC_FUNC_IMPL(__imp__sub_83C45D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45D10"))) PPC_WEAK_FUNC(sub_83C45D10);
PPC_FUNC_IMPL(__imp__sub_83C45D10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20320
	ctx.r3.s64 = ctx.r11.s64 + -20320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C45D1C"))) PPC_WEAK_FUNC(sub_83C45D1C);
PPC_FUNC_IMPL(__imp__sub_83C45D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45D20"))) PPC_WEAK_FUNC(sub_83C45D20);
PPC_FUNC_IMPL(__imp__sub_83C45D20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20312
	ctx.r3.s64 = ctx.r11.s64 + -20312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C45D2C"))) PPC_WEAK_FUNC(sub_83C45D2C);
PPC_FUNC_IMPL(__imp__sub_83C45D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45D30"))) PPC_WEAK_FUNC(sub_83C45D30);
PPC_FUNC_IMPL(__imp__sub_83C45D30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20304
	ctx.r3.s64 = ctx.r11.s64 + -20304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C45D3C"))) PPC_WEAK_FUNC(sub_83C45D3C);
PPC_FUNC_IMPL(__imp__sub_83C45D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45D40"))) PPC_WEAK_FUNC(sub_83C45D40);
PPC_FUNC_IMPL(__imp__sub_83C45D40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20296
	ctx.r3.s64 = ctx.r11.s64 + -20296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C45D4C"))) PPC_WEAK_FUNC(sub_83C45D4C);
PPC_FUNC_IMPL(__imp__sub_83C45D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45D50"))) PPC_WEAK_FUNC(sub_83C45D50);
PPC_FUNC_IMPL(__imp__sub_83C45D50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20288
	ctx.r3.s64 = ctx.r11.s64 + -20288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C45D5C"))) PPC_WEAK_FUNC(sub_83C45D5C);
PPC_FUNC_IMPL(__imp__sub_83C45D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45D60"))) PPC_WEAK_FUNC(sub_83C45D60);
PPC_FUNC_IMPL(__imp__sub_83C45D60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20280
	ctx.r3.s64 = ctx.r11.s64 + -20280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C45D6C"))) PPC_WEAK_FUNC(sub_83C45D6C);
PPC_FUNC_IMPL(__imp__sub_83C45D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45D70"))) PPC_WEAK_FUNC(sub_83C45D70);
PPC_FUNC_IMPL(__imp__sub_83C45D70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20272
	ctx.r3.s64 = ctx.r11.s64 + -20272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C45D7C"))) PPC_WEAK_FUNC(sub_83C45D7C);
PPC_FUNC_IMPL(__imp__sub_83C45D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45D80"))) PPC_WEAK_FUNC(sub_83C45D80);
PPC_FUNC_IMPL(__imp__sub_83C45D80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20264
	ctx.r3.s64 = ctx.r11.s64 + -20264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C45D8C"))) PPC_WEAK_FUNC(sub_83C45D8C);
PPC_FUNC_IMPL(__imp__sub_83C45D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45D90"))) PPC_WEAK_FUNC(sub_83C45D90);
PPC_FUNC_IMPL(__imp__sub_83C45D90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20256
	ctx.r3.s64 = ctx.r11.s64 + -20256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C45D9C"))) PPC_WEAK_FUNC(sub_83C45D9C);
PPC_FUNC_IMPL(__imp__sub_83C45D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45DA0"))) PPC_WEAK_FUNC(sub_83C45DA0);
PPC_FUNC_IMPL(__imp__sub_83C45DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20248
	ctx.r3.s64 = ctx.r11.s64 + -20248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C45DAC"))) PPC_WEAK_FUNC(sub_83C45DAC);
PPC_FUNC_IMPL(__imp__sub_83C45DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45DB0"))) PPC_WEAK_FUNC(sub_83C45DB0);
PPC_FUNC_IMPL(__imp__sub_83C45DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-11936
	ctx.r7.s64 = ctx.r8.s64 + -11936;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-11936(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11936);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-11936(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11936, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C45DD8"))) PPC_WEAK_FUNC(sub_83C45DD8);
PPC_FUNC_IMPL(__imp__sub_83C45DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-2800
	ctx.r6.s64 = ctx.r7.s64 + -2800;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-2872(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -2872);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-11936(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11936);
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
	// std r9,-2800(r7)
	PPC_STORE_U64(ctx.r7.u32 + -2800, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C45E20"))) PPC_WEAK_FUNC(sub_83C45E20);
PPC_FUNC_IMPL(__imp__sub_83C45E20) {
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
	// addi r3,r11,-11952
	ctx.r3.s64 = ctx.r11.s64 + -11952;
	// bl 0x83523120
	ctx.lr = 0x83C45E38;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-20240
	ctx.r3.s64 = ctx.r10.s64 + -20240;
	// bl 0x831cdcc8
	ctx.lr = 0x83C45E44;
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

__attribute__((alias("__imp__sub_83C45E54"))) PPC_WEAK_FUNC(sub_83C45E54);
PPC_FUNC_IMPL(__imp__sub_83C45E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45E58"))) PPC_WEAK_FUNC(sub_83C45E58);
PPC_FUNC_IMPL(__imp__sub_83C45E58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20224
	ctx.r3.s64 = ctx.r11.s64 + -20224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C45E64"))) PPC_WEAK_FUNC(sub_83C45E64);
PPC_FUNC_IMPL(__imp__sub_83C45E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45E68"))) PPC_WEAK_FUNC(sub_83C45E68);
PPC_FUNC_IMPL(__imp__sub_83C45E68) {
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
	// addi r3,r11,-11928
	ctx.r3.s64 = ctx.r11.s64 + -11928;
	// bl 0x8259af80
	ctx.lr = 0x83C45E80;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-20208
	ctx.r3.s64 = ctx.r10.s64 + -20208;
	// bl 0x831cdcc8
	ctx.lr = 0x83C45E8C;
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

__attribute__((alias("__imp__sub_83C45E9C"))) PPC_WEAK_FUNC(sub_83C45E9C);
PPC_FUNC_IMPL(__imp__sub_83C45E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45EA0"))) PPC_WEAK_FUNC(sub_83C45EA0);
PPC_FUNC_IMPL(__imp__sub_83C45EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-11948
	ctx.r11.s64 = ctx.r8.s64 + -11948;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-2824(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2824);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-20216
	ctx.r3.s64 = ctx.r6.s64 + -20216;
	// stw r10,-11948(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11948, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C45ED0"))) PPC_WEAK_FUNC(sub_83C45ED0);
PPC_FUNC_IMPL(__imp__sub_83C45ED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20200
	ctx.r3.s64 = ctx.r11.s64 + -20200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C45EDC"))) PPC_WEAK_FUNC(sub_83C45EDC);
PPC_FUNC_IMPL(__imp__sub_83C45EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45EE0"))) PPC_WEAK_FUNC(sub_83C45EE0);
PPC_FUNC_IMPL(__imp__sub_83C45EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20192
	ctx.r3.s64 = ctx.r11.s64 + -20192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C45EEC"))) PPC_WEAK_FUNC(sub_83C45EEC);
PPC_FUNC_IMPL(__imp__sub_83C45EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45EF0"))) PPC_WEAK_FUNC(sub_83C45EF0);
PPC_FUNC_IMPL(__imp__sub_83C45EF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20184
	ctx.r3.s64 = ctx.r11.s64 + -20184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C45EFC"))) PPC_WEAK_FUNC(sub_83C45EFC);
PPC_FUNC_IMPL(__imp__sub_83C45EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45F00"))) PPC_WEAK_FUNC(sub_83C45F00);
PPC_FUNC_IMPL(__imp__sub_83C45F00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20176
	ctx.r3.s64 = ctx.r11.s64 + -20176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C45F0C"))) PPC_WEAK_FUNC(sub_83C45F0C);
PPC_FUNC_IMPL(__imp__sub_83C45F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45F10"))) PPC_WEAK_FUNC(sub_83C45F10);
PPC_FUNC_IMPL(__imp__sub_83C45F10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20168
	ctx.r3.s64 = ctx.r11.s64 + -20168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C45F1C"))) PPC_WEAK_FUNC(sub_83C45F1C);
PPC_FUNC_IMPL(__imp__sub_83C45F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45F20"))) PPC_WEAK_FUNC(sub_83C45F20);
PPC_FUNC_IMPL(__imp__sub_83C45F20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20160
	ctx.r3.s64 = ctx.r11.s64 + -20160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C45F2C"))) PPC_WEAK_FUNC(sub_83C45F2C);
PPC_FUNC_IMPL(__imp__sub_83C45F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45F30"))) PPC_WEAK_FUNC(sub_83C45F30);
PPC_FUNC_IMPL(__imp__sub_83C45F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20152
	ctx.r3.s64 = ctx.r11.s64 + -20152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C45F3C"))) PPC_WEAK_FUNC(sub_83C45F3C);
PPC_FUNC_IMPL(__imp__sub_83C45F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45F40"))) PPC_WEAK_FUNC(sub_83C45F40);
PPC_FUNC_IMPL(__imp__sub_83C45F40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20144
	ctx.r3.s64 = ctx.r11.s64 + -20144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C45F4C"))) PPC_WEAK_FUNC(sub_83C45F4C);
PPC_FUNC_IMPL(__imp__sub_83C45F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45F50"))) PPC_WEAK_FUNC(sub_83C45F50);
PPC_FUNC_IMPL(__imp__sub_83C45F50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20136
	ctx.r3.s64 = ctx.r11.s64 + -20136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C45F5C"))) PPC_WEAK_FUNC(sub_83C45F5C);
PPC_FUNC_IMPL(__imp__sub_83C45F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45F60"))) PPC_WEAK_FUNC(sub_83C45F60);
PPC_FUNC_IMPL(__imp__sub_83C45F60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20128
	ctx.r3.s64 = ctx.r11.s64 + -20128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C45F6C"))) PPC_WEAK_FUNC(sub_83C45F6C);
PPC_FUNC_IMPL(__imp__sub_83C45F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45F70"))) PPC_WEAK_FUNC(sub_83C45F70);
PPC_FUNC_IMPL(__imp__sub_83C45F70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20120
	ctx.r3.s64 = ctx.r11.s64 + -20120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C45F7C"))) PPC_WEAK_FUNC(sub_83C45F7C);
PPC_FUNC_IMPL(__imp__sub_83C45F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45F80"))) PPC_WEAK_FUNC(sub_83C45F80);
PPC_FUNC_IMPL(__imp__sub_83C45F80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20112
	ctx.r3.s64 = ctx.r11.s64 + -20112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C45F8C"))) PPC_WEAK_FUNC(sub_83C45F8C);
PPC_FUNC_IMPL(__imp__sub_83C45F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C45F90"))) PPC_WEAK_FUNC(sub_83C45F90);
PPC_FUNC_IMPL(__imp__sub_83C45F90) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-11568
	ctx.r7.s64 = ctx.r8.s64 + -11568;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-11568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11568);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-11568(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11568, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C45FB8"))) PPC_WEAK_FUNC(sub_83C45FB8);
PPC_FUNC_IMPL(__imp__sub_83C45FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-2672
	ctx.r6.s64 = ctx.r7.s64 + -2672;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-2744(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -2744);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-11568(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11568);
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
	// std r9,-2672(r7)
	PPC_STORE_U64(ctx.r7.u32 + -2672, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C46000"))) PPC_WEAK_FUNC(sub_83C46000);
PPC_FUNC_IMPL(__imp__sub_83C46000) {
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
	// addi r3,r11,-11584
	ctx.r3.s64 = ctx.r11.s64 + -11584;
	// bl 0x83523120
	ctx.lr = 0x83C46018;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-20104
	ctx.r3.s64 = ctx.r10.s64 + -20104;
	// bl 0x831cdcc8
	ctx.lr = 0x83C46024;
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

__attribute__((alias("__imp__sub_83C46034"))) PPC_WEAK_FUNC(sub_83C46034);
PPC_FUNC_IMPL(__imp__sub_83C46034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46038"))) PPC_WEAK_FUNC(sub_83C46038);
PPC_FUNC_IMPL(__imp__sub_83C46038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20088
	ctx.r3.s64 = ctx.r11.s64 + -20088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46044"))) PPC_WEAK_FUNC(sub_83C46044);
PPC_FUNC_IMPL(__imp__sub_83C46044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46048"))) PPC_WEAK_FUNC(sub_83C46048);
PPC_FUNC_IMPL(__imp__sub_83C46048) {
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
	// addi r3,r11,-11560
	ctx.r3.s64 = ctx.r11.s64 + -11560;
	// bl 0x8259af80
	ctx.lr = 0x83C46060;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-20072
	ctx.r3.s64 = ctx.r10.s64 + -20072;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4606C;
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

__attribute__((alias("__imp__sub_83C4607C"))) PPC_WEAK_FUNC(sub_83C4607C);
PPC_FUNC_IMPL(__imp__sub_83C4607C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46080"))) PPC_WEAK_FUNC(sub_83C46080);
PPC_FUNC_IMPL(__imp__sub_83C46080) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-11580
	ctx.r11.s64 = ctx.r8.s64 + -11580;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-2696(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2696);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-20080
	ctx.r3.s64 = ctx.r6.s64 + -20080;
	// stw r10,-11580(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11580, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C460B0"))) PPC_WEAK_FUNC(sub_83C460B0);
PPC_FUNC_IMPL(__imp__sub_83C460B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20064
	ctx.r3.s64 = ctx.r11.s64 + -20064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C460BC"))) PPC_WEAK_FUNC(sub_83C460BC);
PPC_FUNC_IMPL(__imp__sub_83C460BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C460C0"))) PPC_WEAK_FUNC(sub_83C460C0);
PPC_FUNC_IMPL(__imp__sub_83C460C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20056
	ctx.r3.s64 = ctx.r11.s64 + -20056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C460CC"))) PPC_WEAK_FUNC(sub_83C460CC);
PPC_FUNC_IMPL(__imp__sub_83C460CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C460D0"))) PPC_WEAK_FUNC(sub_83C460D0);
PPC_FUNC_IMPL(__imp__sub_83C460D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20048
	ctx.r3.s64 = ctx.r11.s64 + -20048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C460DC"))) PPC_WEAK_FUNC(sub_83C460DC);
PPC_FUNC_IMPL(__imp__sub_83C460DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C460E0"))) PPC_WEAK_FUNC(sub_83C460E0);
PPC_FUNC_IMPL(__imp__sub_83C460E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20040
	ctx.r3.s64 = ctx.r11.s64 + -20040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C460EC"))) PPC_WEAK_FUNC(sub_83C460EC);
PPC_FUNC_IMPL(__imp__sub_83C460EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C460F0"))) PPC_WEAK_FUNC(sub_83C460F0);
PPC_FUNC_IMPL(__imp__sub_83C460F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20032
	ctx.r3.s64 = ctx.r11.s64 + -20032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C460FC"))) PPC_WEAK_FUNC(sub_83C460FC);
PPC_FUNC_IMPL(__imp__sub_83C460FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46100"))) PPC_WEAK_FUNC(sub_83C46100);
PPC_FUNC_IMPL(__imp__sub_83C46100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20024
	ctx.r3.s64 = ctx.r11.s64 + -20024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4610C"))) PPC_WEAK_FUNC(sub_83C4610C);
PPC_FUNC_IMPL(__imp__sub_83C4610C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46110"))) PPC_WEAK_FUNC(sub_83C46110);
PPC_FUNC_IMPL(__imp__sub_83C46110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20016
	ctx.r3.s64 = ctx.r11.s64 + -20016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4611C"))) PPC_WEAK_FUNC(sub_83C4611C);
PPC_FUNC_IMPL(__imp__sub_83C4611C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46120"))) PPC_WEAK_FUNC(sub_83C46120);
PPC_FUNC_IMPL(__imp__sub_83C46120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20008
	ctx.r3.s64 = ctx.r11.s64 + -20008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4612C"))) PPC_WEAK_FUNC(sub_83C4612C);
PPC_FUNC_IMPL(__imp__sub_83C4612C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46130"))) PPC_WEAK_FUNC(sub_83C46130);
PPC_FUNC_IMPL(__imp__sub_83C46130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-20000
	ctx.r3.s64 = ctx.r11.s64 + -20000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4613C"))) PPC_WEAK_FUNC(sub_83C4613C);
PPC_FUNC_IMPL(__imp__sub_83C4613C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46140"))) PPC_WEAK_FUNC(sub_83C46140);
PPC_FUNC_IMPL(__imp__sub_83C46140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19992
	ctx.r3.s64 = ctx.r11.s64 + -19992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4614C"))) PPC_WEAK_FUNC(sub_83C4614C);
PPC_FUNC_IMPL(__imp__sub_83C4614C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46150"))) PPC_WEAK_FUNC(sub_83C46150);
PPC_FUNC_IMPL(__imp__sub_83C46150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19984
	ctx.r3.s64 = ctx.r11.s64 + -19984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4615C"))) PPC_WEAK_FUNC(sub_83C4615C);
PPC_FUNC_IMPL(__imp__sub_83C4615C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46160"))) PPC_WEAK_FUNC(sub_83C46160);
PPC_FUNC_IMPL(__imp__sub_83C46160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19976
	ctx.r3.s64 = ctx.r11.s64 + -19976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4616C"))) PPC_WEAK_FUNC(sub_83C4616C);
PPC_FUNC_IMPL(__imp__sub_83C4616C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46170"))) PPC_WEAK_FUNC(sub_83C46170);
PPC_FUNC_IMPL(__imp__sub_83C46170) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-11200
	ctx.r7.s64 = ctx.r8.s64 + -11200;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-11200(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11200);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-11200(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11200, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C46198"))) PPC_WEAK_FUNC(sub_83C46198);
PPC_FUNC_IMPL(__imp__sub_83C46198) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-2544
	ctx.r6.s64 = ctx.r7.s64 + -2544;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-2616(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -2616);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-11200(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -11200);
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
	// std r9,-2544(r7)
	PPC_STORE_U64(ctx.r7.u32 + -2544, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C461E0"))) PPC_WEAK_FUNC(sub_83C461E0);
PPC_FUNC_IMPL(__imp__sub_83C461E0) {
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
	// addi r3,r11,-11216
	ctx.r3.s64 = ctx.r11.s64 + -11216;
	// bl 0x83523120
	ctx.lr = 0x83C461F8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-19968
	ctx.r3.s64 = ctx.r10.s64 + -19968;
	// bl 0x831cdcc8
	ctx.lr = 0x83C46204;
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

__attribute__((alias("__imp__sub_83C46214"))) PPC_WEAK_FUNC(sub_83C46214);
PPC_FUNC_IMPL(__imp__sub_83C46214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46218"))) PPC_WEAK_FUNC(sub_83C46218);
PPC_FUNC_IMPL(__imp__sub_83C46218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19952
	ctx.r3.s64 = ctx.r11.s64 + -19952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46224"))) PPC_WEAK_FUNC(sub_83C46224);
PPC_FUNC_IMPL(__imp__sub_83C46224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46228"))) PPC_WEAK_FUNC(sub_83C46228);
PPC_FUNC_IMPL(__imp__sub_83C46228) {
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
	// addi r3,r11,-11192
	ctx.r3.s64 = ctx.r11.s64 + -11192;
	// bl 0x8259af80
	ctx.lr = 0x83C46240;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-19936
	ctx.r3.s64 = ctx.r10.s64 + -19936;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4624C;
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

__attribute__((alias("__imp__sub_83C4625C"))) PPC_WEAK_FUNC(sub_83C4625C);
PPC_FUNC_IMPL(__imp__sub_83C4625C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46260"))) PPC_WEAK_FUNC(sub_83C46260);
PPC_FUNC_IMPL(__imp__sub_83C46260) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-11212
	ctx.r11.s64 = ctx.r8.s64 + -11212;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-2568(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2568);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-19944
	ctx.r3.s64 = ctx.r6.s64 + -19944;
	// stw r10,-11212(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11212, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46290"))) PPC_WEAK_FUNC(sub_83C46290);
PPC_FUNC_IMPL(__imp__sub_83C46290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19928
	ctx.r3.s64 = ctx.r11.s64 + -19928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4629C"))) PPC_WEAK_FUNC(sub_83C4629C);
PPC_FUNC_IMPL(__imp__sub_83C4629C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C462A0"))) PPC_WEAK_FUNC(sub_83C462A0);
PPC_FUNC_IMPL(__imp__sub_83C462A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19920
	ctx.r3.s64 = ctx.r11.s64 + -19920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C462AC"))) PPC_WEAK_FUNC(sub_83C462AC);
PPC_FUNC_IMPL(__imp__sub_83C462AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C462B0"))) PPC_WEAK_FUNC(sub_83C462B0);
PPC_FUNC_IMPL(__imp__sub_83C462B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19912
	ctx.r3.s64 = ctx.r11.s64 + -19912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C462BC"))) PPC_WEAK_FUNC(sub_83C462BC);
PPC_FUNC_IMPL(__imp__sub_83C462BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C462C0"))) PPC_WEAK_FUNC(sub_83C462C0);
PPC_FUNC_IMPL(__imp__sub_83C462C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19904
	ctx.r3.s64 = ctx.r11.s64 + -19904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C462CC"))) PPC_WEAK_FUNC(sub_83C462CC);
PPC_FUNC_IMPL(__imp__sub_83C462CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C462D0"))) PPC_WEAK_FUNC(sub_83C462D0);
PPC_FUNC_IMPL(__imp__sub_83C462D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19896
	ctx.r3.s64 = ctx.r11.s64 + -19896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C462DC"))) PPC_WEAK_FUNC(sub_83C462DC);
PPC_FUNC_IMPL(__imp__sub_83C462DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C462E0"))) PPC_WEAK_FUNC(sub_83C462E0);
PPC_FUNC_IMPL(__imp__sub_83C462E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19888
	ctx.r3.s64 = ctx.r11.s64 + -19888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C462EC"))) PPC_WEAK_FUNC(sub_83C462EC);
PPC_FUNC_IMPL(__imp__sub_83C462EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C462F0"))) PPC_WEAK_FUNC(sub_83C462F0);
PPC_FUNC_IMPL(__imp__sub_83C462F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19880
	ctx.r3.s64 = ctx.r11.s64 + -19880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C462FC"))) PPC_WEAK_FUNC(sub_83C462FC);
PPC_FUNC_IMPL(__imp__sub_83C462FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46300"))) PPC_WEAK_FUNC(sub_83C46300);
PPC_FUNC_IMPL(__imp__sub_83C46300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19872
	ctx.r3.s64 = ctx.r11.s64 + -19872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4630C"))) PPC_WEAK_FUNC(sub_83C4630C);
PPC_FUNC_IMPL(__imp__sub_83C4630C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46310"))) PPC_WEAK_FUNC(sub_83C46310);
PPC_FUNC_IMPL(__imp__sub_83C46310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19864
	ctx.r3.s64 = ctx.r11.s64 + -19864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4631C"))) PPC_WEAK_FUNC(sub_83C4631C);
PPC_FUNC_IMPL(__imp__sub_83C4631C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46320"))) PPC_WEAK_FUNC(sub_83C46320);
PPC_FUNC_IMPL(__imp__sub_83C46320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19856
	ctx.r3.s64 = ctx.r11.s64 + -19856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4632C"))) PPC_WEAK_FUNC(sub_83C4632C);
PPC_FUNC_IMPL(__imp__sub_83C4632C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46330"))) PPC_WEAK_FUNC(sub_83C46330);
PPC_FUNC_IMPL(__imp__sub_83C46330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19848
	ctx.r3.s64 = ctx.r11.s64 + -19848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4633C"))) PPC_WEAK_FUNC(sub_83C4633C);
PPC_FUNC_IMPL(__imp__sub_83C4633C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46340"))) PPC_WEAK_FUNC(sub_83C46340);
PPC_FUNC_IMPL(__imp__sub_83C46340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19840
	ctx.r3.s64 = ctx.r11.s64 + -19840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4634C"))) PPC_WEAK_FUNC(sub_83C4634C);
PPC_FUNC_IMPL(__imp__sub_83C4634C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46350"))) PPC_WEAK_FUNC(sub_83C46350);
PPC_FUNC_IMPL(__imp__sub_83C46350) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-10832
	ctx.r7.s64 = ctx.r8.s64 + -10832;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-10832(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10832);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-10832(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10832, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C46378"))) PPC_WEAK_FUNC(sub_83C46378);
PPC_FUNC_IMPL(__imp__sub_83C46378) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-2416
	ctx.r6.s64 = ctx.r7.s64 + -2416;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-2488(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -2488);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-10832(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -10832);
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
	// std r9,-2416(r7)
	PPC_STORE_U64(ctx.r7.u32 + -2416, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C463C0"))) PPC_WEAK_FUNC(sub_83C463C0);
PPC_FUNC_IMPL(__imp__sub_83C463C0) {
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
	// addi r3,r11,-10848
	ctx.r3.s64 = ctx.r11.s64 + -10848;
	// bl 0x83523120
	ctx.lr = 0x83C463D8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-19832
	ctx.r3.s64 = ctx.r10.s64 + -19832;
	// bl 0x831cdcc8
	ctx.lr = 0x83C463E4;
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

__attribute__((alias("__imp__sub_83C463F4"))) PPC_WEAK_FUNC(sub_83C463F4);
PPC_FUNC_IMPL(__imp__sub_83C463F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C463F8"))) PPC_WEAK_FUNC(sub_83C463F8);
PPC_FUNC_IMPL(__imp__sub_83C463F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19816
	ctx.r3.s64 = ctx.r11.s64 + -19816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46404"))) PPC_WEAK_FUNC(sub_83C46404);
PPC_FUNC_IMPL(__imp__sub_83C46404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46408"))) PPC_WEAK_FUNC(sub_83C46408);
PPC_FUNC_IMPL(__imp__sub_83C46408) {
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
	// addi r3,r11,-10824
	ctx.r3.s64 = ctx.r11.s64 + -10824;
	// bl 0x8259af80
	ctx.lr = 0x83C46420;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-19800
	ctx.r3.s64 = ctx.r10.s64 + -19800;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4642C;
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

__attribute__((alias("__imp__sub_83C4643C"))) PPC_WEAK_FUNC(sub_83C4643C);
PPC_FUNC_IMPL(__imp__sub_83C4643C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46440"))) PPC_WEAK_FUNC(sub_83C46440);
PPC_FUNC_IMPL(__imp__sub_83C46440) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-10844
	ctx.r11.s64 = ctx.r8.s64 + -10844;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-2440(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2440);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-19808
	ctx.r3.s64 = ctx.r6.s64 + -19808;
	// stw r10,-10844(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10844, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46470"))) PPC_WEAK_FUNC(sub_83C46470);
PPC_FUNC_IMPL(__imp__sub_83C46470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19792
	ctx.r3.s64 = ctx.r11.s64 + -19792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4647C"))) PPC_WEAK_FUNC(sub_83C4647C);
PPC_FUNC_IMPL(__imp__sub_83C4647C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46480"))) PPC_WEAK_FUNC(sub_83C46480);
PPC_FUNC_IMPL(__imp__sub_83C46480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19784
	ctx.r3.s64 = ctx.r11.s64 + -19784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4648C"))) PPC_WEAK_FUNC(sub_83C4648C);
PPC_FUNC_IMPL(__imp__sub_83C4648C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46490"))) PPC_WEAK_FUNC(sub_83C46490);
PPC_FUNC_IMPL(__imp__sub_83C46490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19776
	ctx.r3.s64 = ctx.r11.s64 + -19776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4649C"))) PPC_WEAK_FUNC(sub_83C4649C);
PPC_FUNC_IMPL(__imp__sub_83C4649C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C464A0"))) PPC_WEAK_FUNC(sub_83C464A0);
PPC_FUNC_IMPL(__imp__sub_83C464A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19768
	ctx.r3.s64 = ctx.r11.s64 + -19768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C464AC"))) PPC_WEAK_FUNC(sub_83C464AC);
PPC_FUNC_IMPL(__imp__sub_83C464AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C464B0"))) PPC_WEAK_FUNC(sub_83C464B0);
PPC_FUNC_IMPL(__imp__sub_83C464B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19760
	ctx.r3.s64 = ctx.r11.s64 + -19760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C464BC"))) PPC_WEAK_FUNC(sub_83C464BC);
PPC_FUNC_IMPL(__imp__sub_83C464BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C464C0"))) PPC_WEAK_FUNC(sub_83C464C0);
PPC_FUNC_IMPL(__imp__sub_83C464C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19752
	ctx.r3.s64 = ctx.r11.s64 + -19752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C464CC"))) PPC_WEAK_FUNC(sub_83C464CC);
PPC_FUNC_IMPL(__imp__sub_83C464CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C464D0"))) PPC_WEAK_FUNC(sub_83C464D0);
PPC_FUNC_IMPL(__imp__sub_83C464D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19744
	ctx.r3.s64 = ctx.r11.s64 + -19744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C464DC"))) PPC_WEAK_FUNC(sub_83C464DC);
PPC_FUNC_IMPL(__imp__sub_83C464DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C464E0"))) PPC_WEAK_FUNC(sub_83C464E0);
PPC_FUNC_IMPL(__imp__sub_83C464E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19736
	ctx.r3.s64 = ctx.r11.s64 + -19736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C464EC"))) PPC_WEAK_FUNC(sub_83C464EC);
PPC_FUNC_IMPL(__imp__sub_83C464EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C464F0"))) PPC_WEAK_FUNC(sub_83C464F0);
PPC_FUNC_IMPL(__imp__sub_83C464F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19728
	ctx.r3.s64 = ctx.r11.s64 + -19728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C464FC"))) PPC_WEAK_FUNC(sub_83C464FC);
PPC_FUNC_IMPL(__imp__sub_83C464FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46500"))) PPC_WEAK_FUNC(sub_83C46500);
PPC_FUNC_IMPL(__imp__sub_83C46500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19720
	ctx.r3.s64 = ctx.r11.s64 + -19720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4650C"))) PPC_WEAK_FUNC(sub_83C4650C);
PPC_FUNC_IMPL(__imp__sub_83C4650C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46510"))) PPC_WEAK_FUNC(sub_83C46510);
PPC_FUNC_IMPL(__imp__sub_83C46510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19712
	ctx.r3.s64 = ctx.r11.s64 + -19712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4651C"))) PPC_WEAK_FUNC(sub_83C4651C);
PPC_FUNC_IMPL(__imp__sub_83C4651C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46520"))) PPC_WEAK_FUNC(sub_83C46520);
PPC_FUNC_IMPL(__imp__sub_83C46520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19704
	ctx.r3.s64 = ctx.r11.s64 + -19704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4652C"))) PPC_WEAK_FUNC(sub_83C4652C);
PPC_FUNC_IMPL(__imp__sub_83C4652C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46530"))) PPC_WEAK_FUNC(sub_83C46530);
PPC_FUNC_IMPL(__imp__sub_83C46530) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-10476
	ctx.r7.s64 = ctx.r8.s64 + -10476;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-10476(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10476);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-10476(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10476, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C46558"))) PPC_WEAK_FUNC(sub_83C46558);
PPC_FUNC_IMPL(__imp__sub_83C46558) {
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
	// addi r3,r11,-10480
	ctx.r3.s64 = ctx.r11.s64 + -10480;
	// bl 0x83523120
	ctx.lr = 0x83C46570;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-19696
	ctx.r3.s64 = ctx.r10.s64 + -19696;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4657C;
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

__attribute__((alias("__imp__sub_83C4658C"))) PPC_WEAK_FUNC(sub_83C4658C);
PPC_FUNC_IMPL(__imp__sub_83C4658C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46590"))) PPC_WEAK_FUNC(sub_83C46590);
PPC_FUNC_IMPL(__imp__sub_83C46590) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-2288
	ctx.r6.s64 = ctx.r7.s64 + -2288;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-2360(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -2360);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-10476(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -10476);
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
	// std r9,-2288(r7)
	PPC_STORE_U64(ctx.r7.u32 + -2288, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C465D8"))) PPC_WEAK_FUNC(sub_83C465D8);
PPC_FUNC_IMPL(__imp__sub_83C465D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19680
	ctx.r3.s64 = ctx.r11.s64 + -19680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C465E4"))) PPC_WEAK_FUNC(sub_83C465E4);
PPC_FUNC_IMPL(__imp__sub_83C465E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C465E8"))) PPC_WEAK_FUNC(sub_83C465E8);
PPC_FUNC_IMPL(__imp__sub_83C465E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19672
	ctx.r3.s64 = ctx.r11.s64 + -19672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C465F4"))) PPC_WEAK_FUNC(sub_83C465F4);
PPC_FUNC_IMPL(__imp__sub_83C465F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C465F8"))) PPC_WEAK_FUNC(sub_83C465F8);
PPC_FUNC_IMPL(__imp__sub_83C465F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19664
	ctx.r3.s64 = ctx.r11.s64 + -19664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46604"))) PPC_WEAK_FUNC(sub_83C46604);
PPC_FUNC_IMPL(__imp__sub_83C46604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46608"))) PPC_WEAK_FUNC(sub_83C46608);
PPC_FUNC_IMPL(__imp__sub_83C46608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19656
	ctx.r3.s64 = ctx.r11.s64 + -19656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46614"))) PPC_WEAK_FUNC(sub_83C46614);
PPC_FUNC_IMPL(__imp__sub_83C46614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46618"))) PPC_WEAK_FUNC(sub_83C46618);
PPC_FUNC_IMPL(__imp__sub_83C46618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19648
	ctx.r3.s64 = ctx.r11.s64 + -19648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46624"))) PPC_WEAK_FUNC(sub_83C46624);
PPC_FUNC_IMPL(__imp__sub_83C46624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46628"))) PPC_WEAK_FUNC(sub_83C46628);
PPC_FUNC_IMPL(__imp__sub_83C46628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19640
	ctx.r3.s64 = ctx.r11.s64 + -19640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46634"))) PPC_WEAK_FUNC(sub_83C46634);
PPC_FUNC_IMPL(__imp__sub_83C46634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46638"))) PPC_WEAK_FUNC(sub_83C46638);
PPC_FUNC_IMPL(__imp__sub_83C46638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19632
	ctx.r3.s64 = ctx.r11.s64 + -19632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46644"))) PPC_WEAK_FUNC(sub_83C46644);
PPC_FUNC_IMPL(__imp__sub_83C46644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46648"))) PPC_WEAK_FUNC(sub_83C46648);
PPC_FUNC_IMPL(__imp__sub_83C46648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19624
	ctx.r3.s64 = ctx.r11.s64 + -19624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46654"))) PPC_WEAK_FUNC(sub_83C46654);
PPC_FUNC_IMPL(__imp__sub_83C46654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46658"))) PPC_WEAK_FUNC(sub_83C46658);
PPC_FUNC_IMPL(__imp__sub_83C46658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19616
	ctx.r3.s64 = ctx.r11.s64 + -19616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46664"))) PPC_WEAK_FUNC(sub_83C46664);
PPC_FUNC_IMPL(__imp__sub_83C46664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46668"))) PPC_WEAK_FUNC(sub_83C46668);
PPC_FUNC_IMPL(__imp__sub_83C46668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19608
	ctx.r3.s64 = ctx.r11.s64 + -19608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46674"))) PPC_WEAK_FUNC(sub_83C46674);
PPC_FUNC_IMPL(__imp__sub_83C46674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46678"))) PPC_WEAK_FUNC(sub_83C46678);
PPC_FUNC_IMPL(__imp__sub_83C46678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19600
	ctx.r3.s64 = ctx.r11.s64 + -19600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46684"))) PPC_WEAK_FUNC(sub_83C46684);
PPC_FUNC_IMPL(__imp__sub_83C46684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46688"))) PPC_WEAK_FUNC(sub_83C46688);
PPC_FUNC_IMPL(__imp__sub_83C46688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19592
	ctx.r3.s64 = ctx.r11.s64 + -19592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46694"))) PPC_WEAK_FUNC(sub_83C46694);
PPC_FUNC_IMPL(__imp__sub_83C46694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46698"))) PPC_WEAK_FUNC(sub_83C46698);
PPC_FUNC_IMPL(__imp__sub_83C46698) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-10448
	ctx.r7.s64 = ctx.r8.s64 + -10448;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-10448(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10448);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-10448(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10448, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C466C0"))) PPC_WEAK_FUNC(sub_83C466C0);
PPC_FUNC_IMPL(__imp__sub_83C466C0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,-2164
	ctx.r6.s64 = ctx.r7.s64 + -2164;
	// lis r3,-31756
	ctx.r3.s64 = -2081161216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-2236(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -2236);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-10448(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -10448);
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
	// std r9,-2164(r7)
	PPC_STORE_U64(ctx.r7.u32 + -2164, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C46708"))) PPC_WEAK_FUNC(sub_83C46708);
PPC_FUNC_IMPL(__imp__sub_83C46708) {
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
	// addi r3,r11,-10464
	ctx.r3.s64 = ctx.r11.s64 + -10464;
	// bl 0x83523120
	ctx.lr = 0x83C46720;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-19584
	ctx.r3.s64 = ctx.r10.s64 + -19584;
	// bl 0x831cdcc8
	ctx.lr = 0x83C4672C;
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

__attribute__((alias("__imp__sub_83C4673C"))) PPC_WEAK_FUNC(sub_83C4673C);
PPC_FUNC_IMPL(__imp__sub_83C4673C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46740"))) PPC_WEAK_FUNC(sub_83C46740);
PPC_FUNC_IMPL(__imp__sub_83C46740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19568
	ctx.r3.s64 = ctx.r11.s64 + -19568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C4674C"))) PPC_WEAK_FUNC(sub_83C4674C);
PPC_FUNC_IMPL(__imp__sub_83C4674C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46750"))) PPC_WEAK_FUNC(sub_83C46750);
PPC_FUNC_IMPL(__imp__sub_83C46750) {
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
	// addi r3,r11,-10440
	ctx.r3.s64 = ctx.r11.s64 + -10440;
	// bl 0x8259af80
	ctx.lr = 0x83C46768;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,-19552
	ctx.r3.s64 = ctx.r10.s64 + -19552;
	// bl 0x831cdcc8
	ctx.lr = 0x83C46774;
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

__attribute__((alias("__imp__sub_83C46784"))) PPC_WEAK_FUNC(sub_83C46784);
PPC_FUNC_IMPL(__imp__sub_83C46784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46788"))) PPC_WEAK_FUNC(sub_83C46788);
PPC_FUNC_IMPL(__imp__sub_83C46788) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31756
	ctx.r8.s64 = -2081161216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-10460
	ctx.r11.s64 = ctx.r8.s64 + -10460;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-2188(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2188);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-19560
	ctx.r3.s64 = ctx.r6.s64 + -19560;
	// stw r10,-10460(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10460, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C467B8"))) PPC_WEAK_FUNC(sub_83C467B8);
PPC_FUNC_IMPL(__imp__sub_83C467B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19544
	ctx.r3.s64 = ctx.r11.s64 + -19544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C467C4"))) PPC_WEAK_FUNC(sub_83C467C4);
PPC_FUNC_IMPL(__imp__sub_83C467C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C467C8"))) PPC_WEAK_FUNC(sub_83C467C8);
PPC_FUNC_IMPL(__imp__sub_83C467C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19536
	ctx.r3.s64 = ctx.r11.s64 + -19536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C467D4"))) PPC_WEAK_FUNC(sub_83C467D4);
PPC_FUNC_IMPL(__imp__sub_83C467D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C467D8"))) PPC_WEAK_FUNC(sub_83C467D8);
PPC_FUNC_IMPL(__imp__sub_83C467D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19528
	ctx.r3.s64 = ctx.r11.s64 + -19528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C467E4"))) PPC_WEAK_FUNC(sub_83C467E4);
PPC_FUNC_IMPL(__imp__sub_83C467E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C467E8"))) PPC_WEAK_FUNC(sub_83C467E8);
PPC_FUNC_IMPL(__imp__sub_83C467E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19520
	ctx.r3.s64 = ctx.r11.s64 + -19520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C467F4"))) PPC_WEAK_FUNC(sub_83C467F4);
PPC_FUNC_IMPL(__imp__sub_83C467F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C467F8"))) PPC_WEAK_FUNC(sub_83C467F8);
PPC_FUNC_IMPL(__imp__sub_83C467F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19512
	ctx.r3.s64 = ctx.r11.s64 + -19512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46804"))) PPC_WEAK_FUNC(sub_83C46804);
PPC_FUNC_IMPL(__imp__sub_83C46804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46808"))) PPC_WEAK_FUNC(sub_83C46808);
PPC_FUNC_IMPL(__imp__sub_83C46808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19504
	ctx.r3.s64 = ctx.r11.s64 + -19504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46814"))) PPC_WEAK_FUNC(sub_83C46814);
PPC_FUNC_IMPL(__imp__sub_83C46814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46818"))) PPC_WEAK_FUNC(sub_83C46818);
PPC_FUNC_IMPL(__imp__sub_83C46818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19496
	ctx.r3.s64 = ctx.r11.s64 + -19496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C46824"))) PPC_WEAK_FUNC(sub_83C46824);
PPC_FUNC_IMPL(__imp__sub_83C46824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C46828"))) PPC_WEAK_FUNC(sub_83C46828);
PPC_FUNC_IMPL(__imp__sub_83C46828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,-19488
	ctx.r3.s64 = ctx.r11.s64 + -19488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

