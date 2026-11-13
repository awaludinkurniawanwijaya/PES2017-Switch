#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BEF820"))) PPC_WEAK_FUNC(sub_83BEF820);
PPC_FUNC_IMPL(__imp__sub_83BEF820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12680
	ctx.r3.s64 = ctx.r11.s64 + -12680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF82C"))) PPC_WEAK_FUNC(sub_83BEF82C);
PPC_FUNC_IMPL(__imp__sub_83BEF82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF830"))) PPC_WEAK_FUNC(sub_83BEF830);
PPC_FUNC_IMPL(__imp__sub_83BEF830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12672
	ctx.r3.s64 = ctx.r11.s64 + -12672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF83C"))) PPC_WEAK_FUNC(sub_83BEF83C);
PPC_FUNC_IMPL(__imp__sub_83BEF83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF840"))) PPC_WEAK_FUNC(sub_83BEF840);
PPC_FUNC_IMPL(__imp__sub_83BEF840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12664
	ctx.r3.s64 = ctx.r11.s64 + -12664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF84C"))) PPC_WEAK_FUNC(sub_83BEF84C);
PPC_FUNC_IMPL(__imp__sub_83BEF84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF850"))) PPC_WEAK_FUNC(sub_83BEF850);
PPC_FUNC_IMPL(__imp__sub_83BEF850) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-22040
	ctx.r3.s64 = ctx.r11.s64 + -22040;
	// bl 0x83523120
	ctx.lr = 0x83BEF868;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-12656
	ctx.r3.s64 = ctx.r10.s64 + -12656;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEF874;
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

__attribute__((alias("__imp__sub_83BEF884"))) PPC_WEAK_FUNC(sub_83BEF884);
PPC_FUNC_IMPL(__imp__sub_83BEF884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF888"))) PPC_WEAK_FUNC(sub_83BEF888);
PPC_FUNC_IMPL(__imp__sub_83BEF888) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-22024
	ctx.r7.s64 = ctx.r8.s64 + -22024;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-22024(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22024);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-22024(r8)
	PPC_STORE_U32(ctx.r8.u32 + -22024, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEF8B0"))) PPC_WEAK_FUNC(sub_83BEF8B0);
PPC_FUNC_IMPL(__imp__sub_83BEF8B0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-4072
	ctx.r6.s64 = ctx.r7.s64 + -4072;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-4144(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -4144);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-22024(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -22024);
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
	// std r9,-4072(r7)
	PPC_STORE_U64(ctx.r7.u32 + -4072, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEF8F8"))) PPC_WEAK_FUNC(sub_83BEF8F8);
PPC_FUNC_IMPL(__imp__sub_83BEF8F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12640
	ctx.r3.s64 = ctx.r11.s64 + -12640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF904"))) PPC_WEAK_FUNC(sub_83BEF904);
PPC_FUNC_IMPL(__imp__sub_83BEF904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF908"))) PPC_WEAK_FUNC(sub_83BEF908);
PPC_FUNC_IMPL(__imp__sub_83BEF908) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-22016
	ctx.r3.s64 = ctx.r11.s64 + -22016;
	// bl 0x8259af80
	ctx.lr = 0x83BEF920;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-12624
	ctx.r3.s64 = ctx.r10.s64 + -12624;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEF92C;
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

__attribute__((alias("__imp__sub_83BEF93C"))) PPC_WEAK_FUNC(sub_83BEF93C);
PPC_FUNC_IMPL(__imp__sub_83BEF93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF940"))) PPC_WEAK_FUNC(sub_83BEF940);
PPC_FUNC_IMPL(__imp__sub_83BEF940) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-22036
	ctx.r11.s64 = ctx.r8.s64 + -22036;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-4096(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4096);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-12632
	ctx.r3.s64 = ctx.r6.s64 + -12632;
	// stw r10,-22036(r8)
	PPC_STORE_U32(ctx.r8.u32 + -22036, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF970"))) PPC_WEAK_FUNC(sub_83BEF970);
PPC_FUNC_IMPL(__imp__sub_83BEF970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12616
	ctx.r3.s64 = ctx.r11.s64 + -12616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF97C"))) PPC_WEAK_FUNC(sub_83BEF97C);
PPC_FUNC_IMPL(__imp__sub_83BEF97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF980"))) PPC_WEAK_FUNC(sub_83BEF980);
PPC_FUNC_IMPL(__imp__sub_83BEF980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12608
	ctx.r3.s64 = ctx.r11.s64 + -12608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF98C"))) PPC_WEAK_FUNC(sub_83BEF98C);
PPC_FUNC_IMPL(__imp__sub_83BEF98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF990"))) PPC_WEAK_FUNC(sub_83BEF990);
PPC_FUNC_IMPL(__imp__sub_83BEF990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12600
	ctx.r3.s64 = ctx.r11.s64 + -12600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF99C"))) PPC_WEAK_FUNC(sub_83BEF99C);
PPC_FUNC_IMPL(__imp__sub_83BEF99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF9A0"))) PPC_WEAK_FUNC(sub_83BEF9A0);
PPC_FUNC_IMPL(__imp__sub_83BEF9A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12592
	ctx.r3.s64 = ctx.r11.s64 + -12592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF9AC"))) PPC_WEAK_FUNC(sub_83BEF9AC);
PPC_FUNC_IMPL(__imp__sub_83BEF9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF9B0"))) PPC_WEAK_FUNC(sub_83BEF9B0);
PPC_FUNC_IMPL(__imp__sub_83BEF9B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12584
	ctx.r3.s64 = ctx.r11.s64 + -12584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF9BC"))) PPC_WEAK_FUNC(sub_83BEF9BC);
PPC_FUNC_IMPL(__imp__sub_83BEF9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF9C0"))) PPC_WEAK_FUNC(sub_83BEF9C0);
PPC_FUNC_IMPL(__imp__sub_83BEF9C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12576
	ctx.r3.s64 = ctx.r11.s64 + -12576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF9CC"))) PPC_WEAK_FUNC(sub_83BEF9CC);
PPC_FUNC_IMPL(__imp__sub_83BEF9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF9D0"))) PPC_WEAK_FUNC(sub_83BEF9D0);
PPC_FUNC_IMPL(__imp__sub_83BEF9D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12568
	ctx.r3.s64 = ctx.r11.s64 + -12568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF9DC"))) PPC_WEAK_FUNC(sub_83BEF9DC);
PPC_FUNC_IMPL(__imp__sub_83BEF9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF9E0"))) PPC_WEAK_FUNC(sub_83BEF9E0);
PPC_FUNC_IMPL(__imp__sub_83BEF9E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12560
	ctx.r3.s64 = ctx.r11.s64 + -12560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF9EC"))) PPC_WEAK_FUNC(sub_83BEF9EC);
PPC_FUNC_IMPL(__imp__sub_83BEF9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEF9F0"))) PPC_WEAK_FUNC(sub_83BEF9F0);
PPC_FUNC_IMPL(__imp__sub_83BEF9F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12552
	ctx.r3.s64 = ctx.r11.s64 + -12552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEF9FC"))) PPC_WEAK_FUNC(sub_83BEF9FC);
PPC_FUNC_IMPL(__imp__sub_83BEF9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEFA00"))) PPC_WEAK_FUNC(sub_83BEFA00);
PPC_FUNC_IMPL(__imp__sub_83BEFA00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12544
	ctx.r3.s64 = ctx.r11.s64 + -12544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEFA0C"))) PPC_WEAK_FUNC(sub_83BEFA0C);
PPC_FUNC_IMPL(__imp__sub_83BEFA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEFA10"))) PPC_WEAK_FUNC(sub_83BEFA10);
PPC_FUNC_IMPL(__imp__sub_83BEFA10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12536
	ctx.r3.s64 = ctx.r11.s64 + -12536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEFA1C"))) PPC_WEAK_FUNC(sub_83BEFA1C);
PPC_FUNC_IMPL(__imp__sub_83BEFA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEFA20"))) PPC_WEAK_FUNC(sub_83BEFA20);
PPC_FUNC_IMPL(__imp__sub_83BEFA20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12528
	ctx.r3.s64 = ctx.r11.s64 + -12528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEFA2C"))) PPC_WEAK_FUNC(sub_83BEFA2C);
PPC_FUNC_IMPL(__imp__sub_83BEFA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEFA30"))) PPC_WEAK_FUNC(sub_83BEFA30);
PPC_FUNC_IMPL(__imp__sub_83BEFA30) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-21672
	ctx.r3.s64 = ctx.r11.s64 + -21672;
	// bl 0x83523120
	ctx.lr = 0x83BEFA48;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-12520
	ctx.r3.s64 = ctx.r10.s64 + -12520;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEFA54;
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

__attribute__((alias("__imp__sub_83BEFA64"))) PPC_WEAK_FUNC(sub_83BEFA64);
PPC_FUNC_IMPL(__imp__sub_83BEFA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEFA68"))) PPC_WEAK_FUNC(sub_83BEFA68);
PPC_FUNC_IMPL(__imp__sub_83BEFA68) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-21656
	ctx.r7.s64 = ctx.r8.s64 + -21656;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-21656(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21656);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-21656(r8)
	PPC_STORE_U32(ctx.r8.u32 + -21656, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEFA90"))) PPC_WEAK_FUNC(sub_83BEFA90);
PPC_FUNC_IMPL(__imp__sub_83BEFA90) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-3932
	ctx.r6.s64 = ctx.r7.s64 + -3932;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-4004(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -4004);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-21656(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -21656);
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
	// std r9,-3932(r7)
	PPC_STORE_U64(ctx.r7.u32 + -3932, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEFAD8"))) PPC_WEAK_FUNC(sub_83BEFAD8);
PPC_FUNC_IMPL(__imp__sub_83BEFAD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12504
	ctx.r3.s64 = ctx.r11.s64 + -12504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEFAE4"))) PPC_WEAK_FUNC(sub_83BEFAE4);
PPC_FUNC_IMPL(__imp__sub_83BEFAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEFAE8"))) PPC_WEAK_FUNC(sub_83BEFAE8);
PPC_FUNC_IMPL(__imp__sub_83BEFAE8) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-21648
	ctx.r3.s64 = ctx.r11.s64 + -21648;
	// bl 0x8259af80
	ctx.lr = 0x83BEFB00;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-12488
	ctx.r3.s64 = ctx.r10.s64 + -12488;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEFB0C;
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

__attribute__((alias("__imp__sub_83BEFB1C"))) PPC_WEAK_FUNC(sub_83BEFB1C);
PPC_FUNC_IMPL(__imp__sub_83BEFB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEFB20"))) PPC_WEAK_FUNC(sub_83BEFB20);
PPC_FUNC_IMPL(__imp__sub_83BEFB20) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-21668
	ctx.r11.s64 = ctx.r8.s64 + -21668;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-3956(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3956);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-12496
	ctx.r3.s64 = ctx.r6.s64 + -12496;
	// stw r10,-21668(r8)
	PPC_STORE_U32(ctx.r8.u32 + -21668, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEFB50"))) PPC_WEAK_FUNC(sub_83BEFB50);
PPC_FUNC_IMPL(__imp__sub_83BEFB50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12480
	ctx.r3.s64 = ctx.r11.s64 + -12480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEFB5C"))) PPC_WEAK_FUNC(sub_83BEFB5C);
PPC_FUNC_IMPL(__imp__sub_83BEFB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEFB60"))) PPC_WEAK_FUNC(sub_83BEFB60);
PPC_FUNC_IMPL(__imp__sub_83BEFB60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12472
	ctx.r3.s64 = ctx.r11.s64 + -12472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEFB6C"))) PPC_WEAK_FUNC(sub_83BEFB6C);
PPC_FUNC_IMPL(__imp__sub_83BEFB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEFB70"))) PPC_WEAK_FUNC(sub_83BEFB70);
PPC_FUNC_IMPL(__imp__sub_83BEFB70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12464
	ctx.r3.s64 = ctx.r11.s64 + -12464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEFB7C"))) PPC_WEAK_FUNC(sub_83BEFB7C);
PPC_FUNC_IMPL(__imp__sub_83BEFB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEFB80"))) PPC_WEAK_FUNC(sub_83BEFB80);
PPC_FUNC_IMPL(__imp__sub_83BEFB80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12456
	ctx.r3.s64 = ctx.r11.s64 + -12456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEFB8C"))) PPC_WEAK_FUNC(sub_83BEFB8C);
PPC_FUNC_IMPL(__imp__sub_83BEFB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEFB90"))) PPC_WEAK_FUNC(sub_83BEFB90);
PPC_FUNC_IMPL(__imp__sub_83BEFB90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12448
	ctx.r3.s64 = ctx.r11.s64 + -12448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEFB9C"))) PPC_WEAK_FUNC(sub_83BEFB9C);
PPC_FUNC_IMPL(__imp__sub_83BEFB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEFBA0"))) PPC_WEAK_FUNC(sub_83BEFBA0);
PPC_FUNC_IMPL(__imp__sub_83BEFBA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12440
	ctx.r3.s64 = ctx.r11.s64 + -12440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEFBAC"))) PPC_WEAK_FUNC(sub_83BEFBAC);
PPC_FUNC_IMPL(__imp__sub_83BEFBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEFBB0"))) PPC_WEAK_FUNC(sub_83BEFBB0);
PPC_FUNC_IMPL(__imp__sub_83BEFBB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12432
	ctx.r3.s64 = ctx.r11.s64 + -12432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEFBBC"))) PPC_WEAK_FUNC(sub_83BEFBBC);
PPC_FUNC_IMPL(__imp__sub_83BEFBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEFBC0"))) PPC_WEAK_FUNC(sub_83BEFBC0);
PPC_FUNC_IMPL(__imp__sub_83BEFBC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12424
	ctx.r3.s64 = ctx.r11.s64 + -12424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEFBCC"))) PPC_WEAK_FUNC(sub_83BEFBCC);
PPC_FUNC_IMPL(__imp__sub_83BEFBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEFBD0"))) PPC_WEAK_FUNC(sub_83BEFBD0);
PPC_FUNC_IMPL(__imp__sub_83BEFBD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12416
	ctx.r3.s64 = ctx.r11.s64 + -12416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEFBDC"))) PPC_WEAK_FUNC(sub_83BEFBDC);
PPC_FUNC_IMPL(__imp__sub_83BEFBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEFBE0"))) PPC_WEAK_FUNC(sub_83BEFBE0);
PPC_FUNC_IMPL(__imp__sub_83BEFBE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12408
	ctx.r3.s64 = ctx.r11.s64 + -12408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEFBEC"))) PPC_WEAK_FUNC(sub_83BEFBEC);
PPC_FUNC_IMPL(__imp__sub_83BEFBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEFBF0"))) PPC_WEAK_FUNC(sub_83BEFBF0);
PPC_FUNC_IMPL(__imp__sub_83BEFBF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12400
	ctx.r3.s64 = ctx.r11.s64 + -12400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEFBFC"))) PPC_WEAK_FUNC(sub_83BEFBFC);
PPC_FUNC_IMPL(__imp__sub_83BEFBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEFC00"))) PPC_WEAK_FUNC(sub_83BEFC00);
PPC_FUNC_IMPL(__imp__sub_83BEFC00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12392
	ctx.r3.s64 = ctx.r11.s64 + -12392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEFC0C"))) PPC_WEAK_FUNC(sub_83BEFC0C);
PPC_FUNC_IMPL(__imp__sub_83BEFC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEFC10"))) PPC_WEAK_FUNC(sub_83BEFC10);
PPC_FUNC_IMPL(__imp__sub_83BEFC10) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-21304
	ctx.r3.s64 = ctx.r11.s64 + -21304;
	// bl 0x83523120
	ctx.lr = 0x83BEFC28;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-12384
	ctx.r3.s64 = ctx.r10.s64 + -12384;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEFC34;
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

__attribute__((alias("__imp__sub_83BEFC44"))) PPC_WEAK_FUNC(sub_83BEFC44);
PPC_FUNC_IMPL(__imp__sub_83BEFC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEFC48"))) PPC_WEAK_FUNC(sub_83BEFC48);
PPC_FUNC_IMPL(__imp__sub_83BEFC48) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-21288
	ctx.r7.s64 = ctx.r8.s64 + -21288;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-21288(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21288);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-21288(r8)
	PPC_STORE_U32(ctx.r8.u32 + -21288, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEFC70"))) PPC_WEAK_FUNC(sub_83BEFC70);
PPC_FUNC_IMPL(__imp__sub_83BEFC70) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-3804
	ctx.r6.s64 = ctx.r7.s64 + -3804;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-3876(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -3876);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-21288(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -21288);
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
	// std r9,-3804(r7)
	PPC_STORE_U64(ctx.r7.u32 + -3804, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEFCB8"))) PPC_WEAK_FUNC(sub_83BEFCB8);
PPC_FUNC_IMPL(__imp__sub_83BEFCB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12368
	ctx.r3.s64 = ctx.r11.s64 + -12368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEFCC4"))) PPC_WEAK_FUNC(sub_83BEFCC4);
PPC_FUNC_IMPL(__imp__sub_83BEFCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEFCC8"))) PPC_WEAK_FUNC(sub_83BEFCC8);
PPC_FUNC_IMPL(__imp__sub_83BEFCC8) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-21280
	ctx.r3.s64 = ctx.r11.s64 + -21280;
	// bl 0x8259af80
	ctx.lr = 0x83BEFCE0;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-12352
	ctx.r3.s64 = ctx.r10.s64 + -12352;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEFCEC;
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

__attribute__((alias("__imp__sub_83BEFCFC"))) PPC_WEAK_FUNC(sub_83BEFCFC);
PPC_FUNC_IMPL(__imp__sub_83BEFCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEFD00"))) PPC_WEAK_FUNC(sub_83BEFD00);
PPC_FUNC_IMPL(__imp__sub_83BEFD00) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-21300
	ctx.r11.s64 = ctx.r8.s64 + -21300;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-3828(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3828);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-12360
	ctx.r3.s64 = ctx.r6.s64 + -12360;
	// stw r10,-21300(r8)
	PPC_STORE_U32(ctx.r8.u32 + -21300, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEFD30"))) PPC_WEAK_FUNC(sub_83BEFD30);
PPC_FUNC_IMPL(__imp__sub_83BEFD30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12344
	ctx.r3.s64 = ctx.r11.s64 + -12344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEFD3C"))) PPC_WEAK_FUNC(sub_83BEFD3C);
PPC_FUNC_IMPL(__imp__sub_83BEFD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEFD40"))) PPC_WEAK_FUNC(sub_83BEFD40);
PPC_FUNC_IMPL(__imp__sub_83BEFD40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12336
	ctx.r3.s64 = ctx.r11.s64 + -12336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEFD4C"))) PPC_WEAK_FUNC(sub_83BEFD4C);
PPC_FUNC_IMPL(__imp__sub_83BEFD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEFD50"))) PPC_WEAK_FUNC(sub_83BEFD50);
PPC_FUNC_IMPL(__imp__sub_83BEFD50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12328
	ctx.r3.s64 = ctx.r11.s64 + -12328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEFD5C"))) PPC_WEAK_FUNC(sub_83BEFD5C);
PPC_FUNC_IMPL(__imp__sub_83BEFD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEFD60"))) PPC_WEAK_FUNC(sub_83BEFD60);
PPC_FUNC_IMPL(__imp__sub_83BEFD60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12320
	ctx.r3.s64 = ctx.r11.s64 + -12320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEFD6C"))) PPC_WEAK_FUNC(sub_83BEFD6C);
PPC_FUNC_IMPL(__imp__sub_83BEFD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEFD70"))) PPC_WEAK_FUNC(sub_83BEFD70);
PPC_FUNC_IMPL(__imp__sub_83BEFD70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12312
	ctx.r3.s64 = ctx.r11.s64 + -12312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEFD7C"))) PPC_WEAK_FUNC(sub_83BEFD7C);
PPC_FUNC_IMPL(__imp__sub_83BEFD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEFD80"))) PPC_WEAK_FUNC(sub_83BEFD80);
PPC_FUNC_IMPL(__imp__sub_83BEFD80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12304
	ctx.r3.s64 = ctx.r11.s64 + -12304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEFD8C"))) PPC_WEAK_FUNC(sub_83BEFD8C);
PPC_FUNC_IMPL(__imp__sub_83BEFD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEFD90"))) PPC_WEAK_FUNC(sub_83BEFD90);
PPC_FUNC_IMPL(__imp__sub_83BEFD90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12296
	ctx.r3.s64 = ctx.r11.s64 + -12296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEFD9C"))) PPC_WEAK_FUNC(sub_83BEFD9C);
PPC_FUNC_IMPL(__imp__sub_83BEFD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEFDA0"))) PPC_WEAK_FUNC(sub_83BEFDA0);
PPC_FUNC_IMPL(__imp__sub_83BEFDA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12288
	ctx.r3.s64 = ctx.r11.s64 + -12288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEFDAC"))) PPC_WEAK_FUNC(sub_83BEFDAC);
PPC_FUNC_IMPL(__imp__sub_83BEFDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEFDB0"))) PPC_WEAK_FUNC(sub_83BEFDB0);
PPC_FUNC_IMPL(__imp__sub_83BEFDB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12280
	ctx.r3.s64 = ctx.r11.s64 + -12280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEFDBC"))) PPC_WEAK_FUNC(sub_83BEFDBC);
PPC_FUNC_IMPL(__imp__sub_83BEFDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEFDC0"))) PPC_WEAK_FUNC(sub_83BEFDC0);
PPC_FUNC_IMPL(__imp__sub_83BEFDC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12272
	ctx.r3.s64 = ctx.r11.s64 + -12272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEFDCC"))) PPC_WEAK_FUNC(sub_83BEFDCC);
PPC_FUNC_IMPL(__imp__sub_83BEFDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEFDD0"))) PPC_WEAK_FUNC(sub_83BEFDD0);
PPC_FUNC_IMPL(__imp__sub_83BEFDD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12264
	ctx.r3.s64 = ctx.r11.s64 + -12264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEFDDC"))) PPC_WEAK_FUNC(sub_83BEFDDC);
PPC_FUNC_IMPL(__imp__sub_83BEFDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEFDE0"))) PPC_WEAK_FUNC(sub_83BEFDE0);
PPC_FUNC_IMPL(__imp__sub_83BEFDE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12256
	ctx.r3.s64 = ctx.r11.s64 + -12256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEFDEC"))) PPC_WEAK_FUNC(sub_83BEFDEC);
PPC_FUNC_IMPL(__imp__sub_83BEFDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEFDF0"))) PPC_WEAK_FUNC(sub_83BEFDF0);
PPC_FUNC_IMPL(__imp__sub_83BEFDF0) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-20936
	ctx.r3.s64 = ctx.r11.s64 + -20936;
	// bl 0x83523120
	ctx.lr = 0x83BEFE08;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-12248
	ctx.r3.s64 = ctx.r10.s64 + -12248;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEFE14;
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

__attribute__((alias("__imp__sub_83BEFE24"))) PPC_WEAK_FUNC(sub_83BEFE24);
PPC_FUNC_IMPL(__imp__sub_83BEFE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEFE28"))) PPC_WEAK_FUNC(sub_83BEFE28);
PPC_FUNC_IMPL(__imp__sub_83BEFE28) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-20920
	ctx.r7.s64 = ctx.r8.s64 + -20920;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-20920(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20920);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-20920(r8)
	PPC_STORE_U32(ctx.r8.u32 + -20920, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEFE50"))) PPC_WEAK_FUNC(sub_83BEFE50);
PPC_FUNC_IMPL(__imp__sub_83BEFE50) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-3676
	ctx.r6.s64 = ctx.r7.s64 + -3676;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-3748(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -3748);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-20920(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -20920);
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
	// std r9,-3676(r7)
	PPC_STORE_U64(ctx.r7.u32 + -3676, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEFE98"))) PPC_WEAK_FUNC(sub_83BEFE98);
PPC_FUNC_IMPL(__imp__sub_83BEFE98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12232
	ctx.r3.s64 = ctx.r11.s64 + -12232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEFEA4"))) PPC_WEAK_FUNC(sub_83BEFEA4);
PPC_FUNC_IMPL(__imp__sub_83BEFEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEFEA8"))) PPC_WEAK_FUNC(sub_83BEFEA8);
PPC_FUNC_IMPL(__imp__sub_83BEFEA8) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-20912
	ctx.r3.s64 = ctx.r11.s64 + -20912;
	// bl 0x8259af80
	ctx.lr = 0x83BEFEC0;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-12216
	ctx.r3.s64 = ctx.r10.s64 + -12216;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEFECC;
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

__attribute__((alias("__imp__sub_83BEFEDC"))) PPC_WEAK_FUNC(sub_83BEFEDC);
PPC_FUNC_IMPL(__imp__sub_83BEFEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEFEE0"))) PPC_WEAK_FUNC(sub_83BEFEE0);
PPC_FUNC_IMPL(__imp__sub_83BEFEE0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-20932
	ctx.r11.s64 = ctx.r8.s64 + -20932;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-3700(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3700);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-12224
	ctx.r3.s64 = ctx.r6.s64 + -12224;
	// stw r10,-20932(r8)
	PPC_STORE_U32(ctx.r8.u32 + -20932, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEFF10"))) PPC_WEAK_FUNC(sub_83BEFF10);
PPC_FUNC_IMPL(__imp__sub_83BEFF10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12208
	ctx.r3.s64 = ctx.r11.s64 + -12208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEFF1C"))) PPC_WEAK_FUNC(sub_83BEFF1C);
PPC_FUNC_IMPL(__imp__sub_83BEFF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEFF20"))) PPC_WEAK_FUNC(sub_83BEFF20);
PPC_FUNC_IMPL(__imp__sub_83BEFF20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12200
	ctx.r3.s64 = ctx.r11.s64 + -12200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEFF2C"))) PPC_WEAK_FUNC(sub_83BEFF2C);
PPC_FUNC_IMPL(__imp__sub_83BEFF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEFF30"))) PPC_WEAK_FUNC(sub_83BEFF30);
PPC_FUNC_IMPL(__imp__sub_83BEFF30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12192
	ctx.r3.s64 = ctx.r11.s64 + -12192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEFF3C"))) PPC_WEAK_FUNC(sub_83BEFF3C);
PPC_FUNC_IMPL(__imp__sub_83BEFF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEFF40"))) PPC_WEAK_FUNC(sub_83BEFF40);
PPC_FUNC_IMPL(__imp__sub_83BEFF40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12184
	ctx.r3.s64 = ctx.r11.s64 + -12184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEFF4C"))) PPC_WEAK_FUNC(sub_83BEFF4C);
PPC_FUNC_IMPL(__imp__sub_83BEFF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEFF50"))) PPC_WEAK_FUNC(sub_83BEFF50);
PPC_FUNC_IMPL(__imp__sub_83BEFF50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12176
	ctx.r3.s64 = ctx.r11.s64 + -12176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEFF5C"))) PPC_WEAK_FUNC(sub_83BEFF5C);
PPC_FUNC_IMPL(__imp__sub_83BEFF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEFF60"))) PPC_WEAK_FUNC(sub_83BEFF60);
PPC_FUNC_IMPL(__imp__sub_83BEFF60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12168
	ctx.r3.s64 = ctx.r11.s64 + -12168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEFF6C"))) PPC_WEAK_FUNC(sub_83BEFF6C);
PPC_FUNC_IMPL(__imp__sub_83BEFF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEFF70"))) PPC_WEAK_FUNC(sub_83BEFF70);
PPC_FUNC_IMPL(__imp__sub_83BEFF70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12160
	ctx.r3.s64 = ctx.r11.s64 + -12160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEFF7C"))) PPC_WEAK_FUNC(sub_83BEFF7C);
PPC_FUNC_IMPL(__imp__sub_83BEFF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEFF80"))) PPC_WEAK_FUNC(sub_83BEFF80);
PPC_FUNC_IMPL(__imp__sub_83BEFF80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12152
	ctx.r3.s64 = ctx.r11.s64 + -12152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEFF8C"))) PPC_WEAK_FUNC(sub_83BEFF8C);
PPC_FUNC_IMPL(__imp__sub_83BEFF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEFF90"))) PPC_WEAK_FUNC(sub_83BEFF90);
PPC_FUNC_IMPL(__imp__sub_83BEFF90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12144
	ctx.r3.s64 = ctx.r11.s64 + -12144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEFF9C"))) PPC_WEAK_FUNC(sub_83BEFF9C);
PPC_FUNC_IMPL(__imp__sub_83BEFF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEFFA0"))) PPC_WEAK_FUNC(sub_83BEFFA0);
PPC_FUNC_IMPL(__imp__sub_83BEFFA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12136
	ctx.r3.s64 = ctx.r11.s64 + -12136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEFFAC"))) PPC_WEAK_FUNC(sub_83BEFFAC);
PPC_FUNC_IMPL(__imp__sub_83BEFFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEFFB0"))) PPC_WEAK_FUNC(sub_83BEFFB0);
PPC_FUNC_IMPL(__imp__sub_83BEFFB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12128
	ctx.r3.s64 = ctx.r11.s64 + -12128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEFFBC"))) PPC_WEAK_FUNC(sub_83BEFFBC);
PPC_FUNC_IMPL(__imp__sub_83BEFFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEFFC0"))) PPC_WEAK_FUNC(sub_83BEFFC0);
PPC_FUNC_IMPL(__imp__sub_83BEFFC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12120
	ctx.r3.s64 = ctx.r11.s64 + -12120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEFFCC"))) PPC_WEAK_FUNC(sub_83BEFFCC);
PPC_FUNC_IMPL(__imp__sub_83BEFFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEFFD0"))) PPC_WEAK_FUNC(sub_83BEFFD0);
PPC_FUNC_IMPL(__imp__sub_83BEFFD0) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-20568
	ctx.r3.s64 = ctx.r11.s64 + -20568;
	// bl 0x83523120
	ctx.lr = 0x83BEFFE8;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-12112
	ctx.r3.s64 = ctx.r10.s64 + -12112;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEFFF4;
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

__attribute__((alias("__imp__sub_83BF0004"))) PPC_WEAK_FUNC(sub_83BF0004);
PPC_FUNC_IMPL(__imp__sub_83BF0004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0008"))) PPC_WEAK_FUNC(sub_83BF0008);
PPC_FUNC_IMPL(__imp__sub_83BF0008) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-20552
	ctx.r7.s64 = ctx.r8.s64 + -20552;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-20552(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20552);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-20552(r8)
	PPC_STORE_U32(ctx.r8.u32 + -20552, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF0030"))) PPC_WEAK_FUNC(sub_83BF0030);
PPC_FUNC_IMPL(__imp__sub_83BF0030) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-3520
	ctx.r6.s64 = ctx.r7.s64 + -3520;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-3592(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -3592);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-20552(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -20552);
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
	// std r9,-3520(r7)
	PPC_STORE_U64(ctx.r7.u32 + -3520, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF0078"))) PPC_WEAK_FUNC(sub_83BF0078);
PPC_FUNC_IMPL(__imp__sub_83BF0078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12096
	ctx.r3.s64 = ctx.r11.s64 + -12096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF0084"))) PPC_WEAK_FUNC(sub_83BF0084);
PPC_FUNC_IMPL(__imp__sub_83BF0084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0088"))) PPC_WEAK_FUNC(sub_83BF0088);
PPC_FUNC_IMPL(__imp__sub_83BF0088) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-20544
	ctx.r3.s64 = ctx.r11.s64 + -20544;
	// bl 0x8259af80
	ctx.lr = 0x83BF00A0;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-12080
	ctx.r3.s64 = ctx.r10.s64 + -12080;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF00AC;
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

__attribute__((alias("__imp__sub_83BF00BC"))) PPC_WEAK_FUNC(sub_83BF00BC);
PPC_FUNC_IMPL(__imp__sub_83BF00BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF00C0"))) PPC_WEAK_FUNC(sub_83BF00C0);
PPC_FUNC_IMPL(__imp__sub_83BF00C0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-20564
	ctx.r11.s64 = ctx.r8.s64 + -20564;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-3544(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3544);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-12088
	ctx.r3.s64 = ctx.r6.s64 + -12088;
	// stw r10,-20564(r8)
	PPC_STORE_U32(ctx.r8.u32 + -20564, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF00F0"))) PPC_WEAK_FUNC(sub_83BF00F0);
PPC_FUNC_IMPL(__imp__sub_83BF00F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12072
	ctx.r3.s64 = ctx.r11.s64 + -12072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF00FC"))) PPC_WEAK_FUNC(sub_83BF00FC);
PPC_FUNC_IMPL(__imp__sub_83BF00FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0100"))) PPC_WEAK_FUNC(sub_83BF0100);
PPC_FUNC_IMPL(__imp__sub_83BF0100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12064
	ctx.r3.s64 = ctx.r11.s64 + -12064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF010C"))) PPC_WEAK_FUNC(sub_83BF010C);
PPC_FUNC_IMPL(__imp__sub_83BF010C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0110"))) PPC_WEAK_FUNC(sub_83BF0110);
PPC_FUNC_IMPL(__imp__sub_83BF0110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12056
	ctx.r3.s64 = ctx.r11.s64 + -12056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF011C"))) PPC_WEAK_FUNC(sub_83BF011C);
PPC_FUNC_IMPL(__imp__sub_83BF011C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0120"))) PPC_WEAK_FUNC(sub_83BF0120);
PPC_FUNC_IMPL(__imp__sub_83BF0120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12048
	ctx.r3.s64 = ctx.r11.s64 + -12048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF012C"))) PPC_WEAK_FUNC(sub_83BF012C);
PPC_FUNC_IMPL(__imp__sub_83BF012C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0130"))) PPC_WEAK_FUNC(sub_83BF0130);
PPC_FUNC_IMPL(__imp__sub_83BF0130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12040
	ctx.r3.s64 = ctx.r11.s64 + -12040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF013C"))) PPC_WEAK_FUNC(sub_83BF013C);
PPC_FUNC_IMPL(__imp__sub_83BF013C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0140"))) PPC_WEAK_FUNC(sub_83BF0140);
PPC_FUNC_IMPL(__imp__sub_83BF0140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12032
	ctx.r3.s64 = ctx.r11.s64 + -12032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF014C"))) PPC_WEAK_FUNC(sub_83BF014C);
PPC_FUNC_IMPL(__imp__sub_83BF014C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0150"))) PPC_WEAK_FUNC(sub_83BF0150);
PPC_FUNC_IMPL(__imp__sub_83BF0150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12024
	ctx.r3.s64 = ctx.r11.s64 + -12024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF015C"))) PPC_WEAK_FUNC(sub_83BF015C);
PPC_FUNC_IMPL(__imp__sub_83BF015C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0160"))) PPC_WEAK_FUNC(sub_83BF0160);
PPC_FUNC_IMPL(__imp__sub_83BF0160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12016
	ctx.r3.s64 = ctx.r11.s64 + -12016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF016C"))) PPC_WEAK_FUNC(sub_83BF016C);
PPC_FUNC_IMPL(__imp__sub_83BF016C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0170"))) PPC_WEAK_FUNC(sub_83BF0170);
PPC_FUNC_IMPL(__imp__sub_83BF0170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12008
	ctx.r3.s64 = ctx.r11.s64 + -12008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF017C"))) PPC_WEAK_FUNC(sub_83BF017C);
PPC_FUNC_IMPL(__imp__sub_83BF017C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0180"))) PPC_WEAK_FUNC(sub_83BF0180);
PPC_FUNC_IMPL(__imp__sub_83BF0180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-12000
	ctx.r3.s64 = ctx.r11.s64 + -12000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF018C"))) PPC_WEAK_FUNC(sub_83BF018C);
PPC_FUNC_IMPL(__imp__sub_83BF018C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0190"))) PPC_WEAK_FUNC(sub_83BF0190);
PPC_FUNC_IMPL(__imp__sub_83BF0190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11992
	ctx.r3.s64 = ctx.r11.s64 + -11992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF019C"))) PPC_WEAK_FUNC(sub_83BF019C);
PPC_FUNC_IMPL(__imp__sub_83BF019C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF01A0"))) PPC_WEAK_FUNC(sub_83BF01A0);
PPC_FUNC_IMPL(__imp__sub_83BF01A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11984
	ctx.r3.s64 = ctx.r11.s64 + -11984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF01AC"))) PPC_WEAK_FUNC(sub_83BF01AC);
PPC_FUNC_IMPL(__imp__sub_83BF01AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF01B0"))) PPC_WEAK_FUNC(sub_83BF01B0);
PPC_FUNC_IMPL(__imp__sub_83BF01B0) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-20200
	ctx.r3.s64 = ctx.r11.s64 + -20200;
	// bl 0x83523120
	ctx.lr = 0x83BF01C8;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-11976
	ctx.r3.s64 = ctx.r10.s64 + -11976;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF01D4;
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

__attribute__((alias("__imp__sub_83BF01E4"))) PPC_WEAK_FUNC(sub_83BF01E4);
PPC_FUNC_IMPL(__imp__sub_83BF01E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF01E8"))) PPC_WEAK_FUNC(sub_83BF01E8);
PPC_FUNC_IMPL(__imp__sub_83BF01E8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-20184
	ctx.r7.s64 = ctx.r8.s64 + -20184;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-20184(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20184);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-20184(r8)
	PPC_STORE_U32(ctx.r8.u32 + -20184, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF0210"))) PPC_WEAK_FUNC(sub_83BF0210);
PPC_FUNC_IMPL(__imp__sub_83BF0210) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-3348
	ctx.r6.s64 = ctx.r7.s64 + -3348;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-3420(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -3420);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-20184(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -20184);
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
	// std r9,-3348(r7)
	PPC_STORE_U64(ctx.r7.u32 + -3348, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF0258"))) PPC_WEAK_FUNC(sub_83BF0258);
PPC_FUNC_IMPL(__imp__sub_83BF0258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11960
	ctx.r3.s64 = ctx.r11.s64 + -11960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF0264"))) PPC_WEAK_FUNC(sub_83BF0264);
PPC_FUNC_IMPL(__imp__sub_83BF0264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0268"))) PPC_WEAK_FUNC(sub_83BF0268);
PPC_FUNC_IMPL(__imp__sub_83BF0268) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-20176
	ctx.r3.s64 = ctx.r11.s64 + -20176;
	// bl 0x8259af80
	ctx.lr = 0x83BF0280;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-11944
	ctx.r3.s64 = ctx.r10.s64 + -11944;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF028C;
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

__attribute__((alias("__imp__sub_83BF029C"))) PPC_WEAK_FUNC(sub_83BF029C);
PPC_FUNC_IMPL(__imp__sub_83BF029C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF02A0"))) PPC_WEAK_FUNC(sub_83BF02A0);
PPC_FUNC_IMPL(__imp__sub_83BF02A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-20196
	ctx.r11.s64 = ctx.r8.s64 + -20196;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-3372(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3372);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-11952
	ctx.r3.s64 = ctx.r6.s64 + -11952;
	// stw r10,-20196(r8)
	PPC_STORE_U32(ctx.r8.u32 + -20196, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF02D0"))) PPC_WEAK_FUNC(sub_83BF02D0);
PPC_FUNC_IMPL(__imp__sub_83BF02D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11936
	ctx.r3.s64 = ctx.r11.s64 + -11936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF02DC"))) PPC_WEAK_FUNC(sub_83BF02DC);
PPC_FUNC_IMPL(__imp__sub_83BF02DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF02E0"))) PPC_WEAK_FUNC(sub_83BF02E0);
PPC_FUNC_IMPL(__imp__sub_83BF02E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11928
	ctx.r3.s64 = ctx.r11.s64 + -11928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF02EC"))) PPC_WEAK_FUNC(sub_83BF02EC);
PPC_FUNC_IMPL(__imp__sub_83BF02EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF02F0"))) PPC_WEAK_FUNC(sub_83BF02F0);
PPC_FUNC_IMPL(__imp__sub_83BF02F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11920
	ctx.r3.s64 = ctx.r11.s64 + -11920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF02FC"))) PPC_WEAK_FUNC(sub_83BF02FC);
PPC_FUNC_IMPL(__imp__sub_83BF02FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0300"))) PPC_WEAK_FUNC(sub_83BF0300);
PPC_FUNC_IMPL(__imp__sub_83BF0300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11912
	ctx.r3.s64 = ctx.r11.s64 + -11912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF030C"))) PPC_WEAK_FUNC(sub_83BF030C);
PPC_FUNC_IMPL(__imp__sub_83BF030C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0310"))) PPC_WEAK_FUNC(sub_83BF0310);
PPC_FUNC_IMPL(__imp__sub_83BF0310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11904
	ctx.r3.s64 = ctx.r11.s64 + -11904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF031C"))) PPC_WEAK_FUNC(sub_83BF031C);
PPC_FUNC_IMPL(__imp__sub_83BF031C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0320"))) PPC_WEAK_FUNC(sub_83BF0320);
PPC_FUNC_IMPL(__imp__sub_83BF0320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11896
	ctx.r3.s64 = ctx.r11.s64 + -11896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF032C"))) PPC_WEAK_FUNC(sub_83BF032C);
PPC_FUNC_IMPL(__imp__sub_83BF032C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0330"))) PPC_WEAK_FUNC(sub_83BF0330);
PPC_FUNC_IMPL(__imp__sub_83BF0330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11888
	ctx.r3.s64 = ctx.r11.s64 + -11888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF033C"))) PPC_WEAK_FUNC(sub_83BF033C);
PPC_FUNC_IMPL(__imp__sub_83BF033C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0340"))) PPC_WEAK_FUNC(sub_83BF0340);
PPC_FUNC_IMPL(__imp__sub_83BF0340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11880
	ctx.r3.s64 = ctx.r11.s64 + -11880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF034C"))) PPC_WEAK_FUNC(sub_83BF034C);
PPC_FUNC_IMPL(__imp__sub_83BF034C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0350"))) PPC_WEAK_FUNC(sub_83BF0350);
PPC_FUNC_IMPL(__imp__sub_83BF0350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11872
	ctx.r3.s64 = ctx.r11.s64 + -11872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF035C"))) PPC_WEAK_FUNC(sub_83BF035C);
PPC_FUNC_IMPL(__imp__sub_83BF035C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0360"))) PPC_WEAK_FUNC(sub_83BF0360);
PPC_FUNC_IMPL(__imp__sub_83BF0360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11864
	ctx.r3.s64 = ctx.r11.s64 + -11864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF036C"))) PPC_WEAK_FUNC(sub_83BF036C);
PPC_FUNC_IMPL(__imp__sub_83BF036C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0370"))) PPC_WEAK_FUNC(sub_83BF0370);
PPC_FUNC_IMPL(__imp__sub_83BF0370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11856
	ctx.r3.s64 = ctx.r11.s64 + -11856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF037C"))) PPC_WEAK_FUNC(sub_83BF037C);
PPC_FUNC_IMPL(__imp__sub_83BF037C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0380"))) PPC_WEAK_FUNC(sub_83BF0380);
PPC_FUNC_IMPL(__imp__sub_83BF0380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11848
	ctx.r3.s64 = ctx.r11.s64 + -11848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF038C"))) PPC_WEAK_FUNC(sub_83BF038C);
PPC_FUNC_IMPL(__imp__sub_83BF038C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0390"))) PPC_WEAK_FUNC(sub_83BF0390);
PPC_FUNC_IMPL(__imp__sub_83BF0390) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-19832
	ctx.r3.s64 = ctx.r11.s64 + -19832;
	// bl 0x83523120
	ctx.lr = 0x83BF03A8;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-11840
	ctx.r3.s64 = ctx.r10.s64 + -11840;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF03B4;
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

__attribute__((alias("__imp__sub_83BF03C4"))) PPC_WEAK_FUNC(sub_83BF03C4);
PPC_FUNC_IMPL(__imp__sub_83BF03C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF03C8"))) PPC_WEAK_FUNC(sub_83BF03C8);
PPC_FUNC_IMPL(__imp__sub_83BF03C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-19816
	ctx.r7.s64 = ctx.r8.s64 + -19816;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-19816(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19816);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-19816(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19816, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF03F0"))) PPC_WEAK_FUNC(sub_83BF03F0);
PPC_FUNC_IMPL(__imp__sub_83BF03F0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-3180
	ctx.r6.s64 = ctx.r7.s64 + -3180;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-3252(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -3252);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-19816(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -19816);
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
	// std r9,-3180(r7)
	PPC_STORE_U64(ctx.r7.u32 + -3180, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF0438"))) PPC_WEAK_FUNC(sub_83BF0438);
PPC_FUNC_IMPL(__imp__sub_83BF0438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11824
	ctx.r3.s64 = ctx.r11.s64 + -11824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF0444"))) PPC_WEAK_FUNC(sub_83BF0444);
PPC_FUNC_IMPL(__imp__sub_83BF0444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0448"))) PPC_WEAK_FUNC(sub_83BF0448);
PPC_FUNC_IMPL(__imp__sub_83BF0448) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-19808
	ctx.r3.s64 = ctx.r11.s64 + -19808;
	// bl 0x8259af80
	ctx.lr = 0x83BF0460;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-11808
	ctx.r3.s64 = ctx.r10.s64 + -11808;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF046C;
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

__attribute__((alias("__imp__sub_83BF047C"))) PPC_WEAK_FUNC(sub_83BF047C);
PPC_FUNC_IMPL(__imp__sub_83BF047C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0480"))) PPC_WEAK_FUNC(sub_83BF0480);
PPC_FUNC_IMPL(__imp__sub_83BF0480) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-19828
	ctx.r11.s64 = ctx.r8.s64 + -19828;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-3204(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3204);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-11816
	ctx.r3.s64 = ctx.r6.s64 + -11816;
	// stw r10,-19828(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19828, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF04B0"))) PPC_WEAK_FUNC(sub_83BF04B0);
PPC_FUNC_IMPL(__imp__sub_83BF04B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11800
	ctx.r3.s64 = ctx.r11.s64 + -11800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF04BC"))) PPC_WEAK_FUNC(sub_83BF04BC);
PPC_FUNC_IMPL(__imp__sub_83BF04BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF04C0"))) PPC_WEAK_FUNC(sub_83BF04C0);
PPC_FUNC_IMPL(__imp__sub_83BF04C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11792
	ctx.r3.s64 = ctx.r11.s64 + -11792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF04CC"))) PPC_WEAK_FUNC(sub_83BF04CC);
PPC_FUNC_IMPL(__imp__sub_83BF04CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF04D0"))) PPC_WEAK_FUNC(sub_83BF04D0);
PPC_FUNC_IMPL(__imp__sub_83BF04D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11784
	ctx.r3.s64 = ctx.r11.s64 + -11784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF04DC"))) PPC_WEAK_FUNC(sub_83BF04DC);
PPC_FUNC_IMPL(__imp__sub_83BF04DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF04E0"))) PPC_WEAK_FUNC(sub_83BF04E0);
PPC_FUNC_IMPL(__imp__sub_83BF04E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11776
	ctx.r3.s64 = ctx.r11.s64 + -11776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF04EC"))) PPC_WEAK_FUNC(sub_83BF04EC);
PPC_FUNC_IMPL(__imp__sub_83BF04EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF04F0"))) PPC_WEAK_FUNC(sub_83BF04F0);
PPC_FUNC_IMPL(__imp__sub_83BF04F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11768
	ctx.r3.s64 = ctx.r11.s64 + -11768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF04FC"))) PPC_WEAK_FUNC(sub_83BF04FC);
PPC_FUNC_IMPL(__imp__sub_83BF04FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0500"))) PPC_WEAK_FUNC(sub_83BF0500);
PPC_FUNC_IMPL(__imp__sub_83BF0500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11760
	ctx.r3.s64 = ctx.r11.s64 + -11760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF050C"))) PPC_WEAK_FUNC(sub_83BF050C);
PPC_FUNC_IMPL(__imp__sub_83BF050C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0510"))) PPC_WEAK_FUNC(sub_83BF0510);
PPC_FUNC_IMPL(__imp__sub_83BF0510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11752
	ctx.r3.s64 = ctx.r11.s64 + -11752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF051C"))) PPC_WEAK_FUNC(sub_83BF051C);
PPC_FUNC_IMPL(__imp__sub_83BF051C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0520"))) PPC_WEAK_FUNC(sub_83BF0520);
PPC_FUNC_IMPL(__imp__sub_83BF0520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11744
	ctx.r3.s64 = ctx.r11.s64 + -11744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF052C"))) PPC_WEAK_FUNC(sub_83BF052C);
PPC_FUNC_IMPL(__imp__sub_83BF052C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0530"))) PPC_WEAK_FUNC(sub_83BF0530);
PPC_FUNC_IMPL(__imp__sub_83BF0530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11736
	ctx.r3.s64 = ctx.r11.s64 + -11736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF053C"))) PPC_WEAK_FUNC(sub_83BF053C);
PPC_FUNC_IMPL(__imp__sub_83BF053C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0540"))) PPC_WEAK_FUNC(sub_83BF0540);
PPC_FUNC_IMPL(__imp__sub_83BF0540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11728
	ctx.r3.s64 = ctx.r11.s64 + -11728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF054C"))) PPC_WEAK_FUNC(sub_83BF054C);
PPC_FUNC_IMPL(__imp__sub_83BF054C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0550"))) PPC_WEAK_FUNC(sub_83BF0550);
PPC_FUNC_IMPL(__imp__sub_83BF0550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11720
	ctx.r3.s64 = ctx.r11.s64 + -11720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF055C"))) PPC_WEAK_FUNC(sub_83BF055C);
PPC_FUNC_IMPL(__imp__sub_83BF055C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0560"))) PPC_WEAK_FUNC(sub_83BF0560);
PPC_FUNC_IMPL(__imp__sub_83BF0560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11712
	ctx.r3.s64 = ctx.r11.s64 + -11712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF056C"))) PPC_WEAK_FUNC(sub_83BF056C);
PPC_FUNC_IMPL(__imp__sub_83BF056C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0570"))) PPC_WEAK_FUNC(sub_83BF0570);
PPC_FUNC_IMPL(__imp__sub_83BF0570) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-19464
	ctx.r3.s64 = ctx.r11.s64 + -19464;
	// bl 0x83523120
	ctx.lr = 0x83BF0588;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-11704
	ctx.r3.s64 = ctx.r10.s64 + -11704;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF0594;
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

__attribute__((alias("__imp__sub_83BF05A4"))) PPC_WEAK_FUNC(sub_83BF05A4);
PPC_FUNC_IMPL(__imp__sub_83BF05A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF05A8"))) PPC_WEAK_FUNC(sub_83BF05A8);
PPC_FUNC_IMPL(__imp__sub_83BF05A8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-19448
	ctx.r7.s64 = ctx.r8.s64 + -19448;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-19448(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19448);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-19448(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19448, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF05D0"))) PPC_WEAK_FUNC(sub_83BF05D0);
PPC_FUNC_IMPL(__imp__sub_83BF05D0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-3052
	ctx.r6.s64 = ctx.r7.s64 + -3052;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-3124(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -3124);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-19448(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -19448);
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
	// std r9,-3052(r7)
	PPC_STORE_U64(ctx.r7.u32 + -3052, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF0618"))) PPC_WEAK_FUNC(sub_83BF0618);
PPC_FUNC_IMPL(__imp__sub_83BF0618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11688
	ctx.r3.s64 = ctx.r11.s64 + -11688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF0624"))) PPC_WEAK_FUNC(sub_83BF0624);
PPC_FUNC_IMPL(__imp__sub_83BF0624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0628"))) PPC_WEAK_FUNC(sub_83BF0628);
PPC_FUNC_IMPL(__imp__sub_83BF0628) {
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
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-19440
	ctx.r3.s64 = ctx.r11.s64 + -19440;
	// bl 0x8259af80
	ctx.lr = 0x83BF0640;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-11672
	ctx.r3.s64 = ctx.r10.s64 + -11672;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF064C;
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

__attribute__((alias("__imp__sub_83BF065C"))) PPC_WEAK_FUNC(sub_83BF065C);
PPC_FUNC_IMPL(__imp__sub_83BF065C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF0660"))) PPC_WEAK_FUNC(sub_83BF0660);
PPC_FUNC_IMPL(__imp__sub_83BF0660) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-19460
	ctx.r11.s64 = ctx.r8.s64 + -19460;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-3076(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3076);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-11680
	ctx.r3.s64 = ctx.r6.s64 + -11680;
	// stw r10,-19460(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19460, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF0690"))) PPC_WEAK_FUNC(sub_83BF0690);
PPC_FUNC_IMPL(__imp__sub_83BF0690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11664
	ctx.r3.s64 = ctx.r11.s64 + -11664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF069C"))) PPC_WEAK_FUNC(sub_83BF069C);
PPC_FUNC_IMPL(__imp__sub_83BF069C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF06A0"))) PPC_WEAK_FUNC(sub_83BF06A0);
PPC_FUNC_IMPL(__imp__sub_83BF06A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11656
	ctx.r3.s64 = ctx.r11.s64 + -11656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF06AC"))) PPC_WEAK_FUNC(sub_83BF06AC);
PPC_FUNC_IMPL(__imp__sub_83BF06AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF06B0"))) PPC_WEAK_FUNC(sub_83BF06B0);
PPC_FUNC_IMPL(__imp__sub_83BF06B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11648
	ctx.r3.s64 = ctx.r11.s64 + -11648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF06BC"))) PPC_WEAK_FUNC(sub_83BF06BC);
PPC_FUNC_IMPL(__imp__sub_83BF06BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF06C0"))) PPC_WEAK_FUNC(sub_83BF06C0);
PPC_FUNC_IMPL(__imp__sub_83BF06C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11640
	ctx.r3.s64 = ctx.r11.s64 + -11640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF06CC"))) PPC_WEAK_FUNC(sub_83BF06CC);
PPC_FUNC_IMPL(__imp__sub_83BF06CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF06D0"))) PPC_WEAK_FUNC(sub_83BF06D0);
PPC_FUNC_IMPL(__imp__sub_83BF06D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-11632
	ctx.r3.s64 = ctx.r11.s64 + -11632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF06DC"))) PPC_WEAK_FUNC(sub_83BF06DC);
PPC_FUNC_IMPL(__imp__sub_83BF06DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

