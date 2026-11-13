#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C0F2E4"))) PPC_WEAK_FUNC(sub_83C0F2E4);
PPC_FUNC_IMPL(__imp__sub_83C0F2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F2E8"))) PPC_WEAK_FUNC(sub_83C0F2E8);
PPC_FUNC_IMPL(__imp__sub_83C0F2E8) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,9576
	ctx.r3.s64 = ctx.r11.s64 + 9576;
	// bl 0x8259af80
	ctx.lr = 0x83C0F300;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,30112
	ctx.r3.s64 = ctx.r10.s64 + 30112;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0F30C;
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

__attribute__((alias("__imp__sub_83C0F31C"))) PPC_WEAK_FUNC(sub_83C0F31C);
PPC_FUNC_IMPL(__imp__sub_83C0F31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F320"))) PPC_WEAK_FUNC(sub_83C0F320);
PPC_FUNC_IMPL(__imp__sub_83C0F320) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,9556
	ctx.r11.s64 = ctx.r8.s64 + 9556;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-16272(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16272);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,30104
	ctx.r3.s64 = ctx.r6.s64 + 30104;
	// stw r10,9556(r8)
	PPC_STORE_U32(ctx.r8.u32 + 9556, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F350"))) PPC_WEAK_FUNC(sub_83C0F350);
PPC_FUNC_IMPL(__imp__sub_83C0F350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30120
	ctx.r3.s64 = ctx.r11.s64 + 30120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F35C"))) PPC_WEAK_FUNC(sub_83C0F35C);
PPC_FUNC_IMPL(__imp__sub_83C0F35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F360"))) PPC_WEAK_FUNC(sub_83C0F360);
PPC_FUNC_IMPL(__imp__sub_83C0F360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30128
	ctx.r3.s64 = ctx.r11.s64 + 30128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F36C"))) PPC_WEAK_FUNC(sub_83C0F36C);
PPC_FUNC_IMPL(__imp__sub_83C0F36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F370"))) PPC_WEAK_FUNC(sub_83C0F370);
PPC_FUNC_IMPL(__imp__sub_83C0F370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30136
	ctx.r3.s64 = ctx.r11.s64 + 30136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F37C"))) PPC_WEAK_FUNC(sub_83C0F37C);
PPC_FUNC_IMPL(__imp__sub_83C0F37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F380"))) PPC_WEAK_FUNC(sub_83C0F380);
PPC_FUNC_IMPL(__imp__sub_83C0F380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30144
	ctx.r3.s64 = ctx.r11.s64 + 30144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F38C"))) PPC_WEAK_FUNC(sub_83C0F38C);
PPC_FUNC_IMPL(__imp__sub_83C0F38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F390"))) PPC_WEAK_FUNC(sub_83C0F390);
PPC_FUNC_IMPL(__imp__sub_83C0F390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30152
	ctx.r3.s64 = ctx.r11.s64 + 30152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F39C"))) PPC_WEAK_FUNC(sub_83C0F39C);
PPC_FUNC_IMPL(__imp__sub_83C0F39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F3A0"))) PPC_WEAK_FUNC(sub_83C0F3A0);
PPC_FUNC_IMPL(__imp__sub_83C0F3A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30160
	ctx.r3.s64 = ctx.r11.s64 + 30160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F3AC"))) PPC_WEAK_FUNC(sub_83C0F3AC);
PPC_FUNC_IMPL(__imp__sub_83C0F3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F3B0"))) PPC_WEAK_FUNC(sub_83C0F3B0);
PPC_FUNC_IMPL(__imp__sub_83C0F3B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30168
	ctx.r3.s64 = ctx.r11.s64 + 30168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F3BC"))) PPC_WEAK_FUNC(sub_83C0F3BC);
PPC_FUNC_IMPL(__imp__sub_83C0F3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F3C0"))) PPC_WEAK_FUNC(sub_83C0F3C0);
PPC_FUNC_IMPL(__imp__sub_83C0F3C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30176
	ctx.r3.s64 = ctx.r11.s64 + 30176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F3CC"))) PPC_WEAK_FUNC(sub_83C0F3CC);
PPC_FUNC_IMPL(__imp__sub_83C0F3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F3D0"))) PPC_WEAK_FUNC(sub_83C0F3D0);
PPC_FUNC_IMPL(__imp__sub_83C0F3D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30184
	ctx.r3.s64 = ctx.r11.s64 + 30184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F3DC"))) PPC_WEAK_FUNC(sub_83C0F3DC);
PPC_FUNC_IMPL(__imp__sub_83C0F3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F3E0"))) PPC_WEAK_FUNC(sub_83C0F3E0);
PPC_FUNC_IMPL(__imp__sub_83C0F3E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30192
	ctx.r3.s64 = ctx.r11.s64 + 30192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F3EC"))) PPC_WEAK_FUNC(sub_83C0F3EC);
PPC_FUNC_IMPL(__imp__sub_83C0F3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F3F0"))) PPC_WEAK_FUNC(sub_83C0F3F0);
PPC_FUNC_IMPL(__imp__sub_83C0F3F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30200
	ctx.r3.s64 = ctx.r11.s64 + 30200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F3FC"))) PPC_WEAK_FUNC(sub_83C0F3FC);
PPC_FUNC_IMPL(__imp__sub_83C0F3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F400"))) PPC_WEAK_FUNC(sub_83C0F400);
PPC_FUNC_IMPL(__imp__sub_83C0F400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30208
	ctx.r3.s64 = ctx.r11.s64 + 30208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F40C"))) PPC_WEAK_FUNC(sub_83C0F40C);
PPC_FUNC_IMPL(__imp__sub_83C0F40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F410"))) PPC_WEAK_FUNC(sub_83C0F410);
PPC_FUNC_IMPL(__imp__sub_83C0F410) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,9920
	ctx.r3.s64 = ctx.r11.s64 + 9920;
	// bl 0x83523120
	ctx.lr = 0x83C0F428;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,30216
	ctx.r3.s64 = ctx.r10.s64 + 30216;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0F434;
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

__attribute__((alias("__imp__sub_83C0F444"))) PPC_WEAK_FUNC(sub_83C0F444);
PPC_FUNC_IMPL(__imp__sub_83C0F444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F448"))) PPC_WEAK_FUNC(sub_83C0F448);
PPC_FUNC_IMPL(__imp__sub_83C0F448) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,9936
	ctx.r7.s64 = ctx.r8.s64 + 9936;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,9936(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 9936);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,9936(r8)
	PPC_STORE_U32(ctx.r8.u32 + 9936, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0F470"))) PPC_WEAK_FUNC(sub_83C0F470);
PPC_FUNC_IMPL(__imp__sub_83C0F470) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-16120
	ctx.r6.s64 = ctx.r7.s64 + -16120;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-16192(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -16192);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,9936(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 9936);
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
	// std r9,-16120(r7)
	PPC_STORE_U64(ctx.r7.u32 + -16120, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0F4B8"))) PPC_WEAK_FUNC(sub_83C0F4B8);
PPC_FUNC_IMPL(__imp__sub_83C0F4B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30232
	ctx.r3.s64 = ctx.r11.s64 + 30232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F4C4"))) PPC_WEAK_FUNC(sub_83C0F4C4);
PPC_FUNC_IMPL(__imp__sub_83C0F4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F4C8"))) PPC_WEAK_FUNC(sub_83C0F4C8);
PPC_FUNC_IMPL(__imp__sub_83C0F4C8) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,9944
	ctx.r3.s64 = ctx.r11.s64 + 9944;
	// bl 0x8259af80
	ctx.lr = 0x83C0F4E0;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,30248
	ctx.r3.s64 = ctx.r10.s64 + 30248;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0F4EC;
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

__attribute__((alias("__imp__sub_83C0F4FC"))) PPC_WEAK_FUNC(sub_83C0F4FC);
PPC_FUNC_IMPL(__imp__sub_83C0F4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F500"))) PPC_WEAK_FUNC(sub_83C0F500);
PPC_FUNC_IMPL(__imp__sub_83C0F500) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,9924
	ctx.r11.s64 = ctx.r8.s64 + 9924;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-16144(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16144);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,30240
	ctx.r3.s64 = ctx.r6.s64 + 30240;
	// stw r10,9924(r8)
	PPC_STORE_U32(ctx.r8.u32 + 9924, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F530"))) PPC_WEAK_FUNC(sub_83C0F530);
PPC_FUNC_IMPL(__imp__sub_83C0F530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30256
	ctx.r3.s64 = ctx.r11.s64 + 30256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F53C"))) PPC_WEAK_FUNC(sub_83C0F53C);
PPC_FUNC_IMPL(__imp__sub_83C0F53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F540"))) PPC_WEAK_FUNC(sub_83C0F540);
PPC_FUNC_IMPL(__imp__sub_83C0F540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30264
	ctx.r3.s64 = ctx.r11.s64 + 30264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F54C"))) PPC_WEAK_FUNC(sub_83C0F54C);
PPC_FUNC_IMPL(__imp__sub_83C0F54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F550"))) PPC_WEAK_FUNC(sub_83C0F550);
PPC_FUNC_IMPL(__imp__sub_83C0F550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30272
	ctx.r3.s64 = ctx.r11.s64 + 30272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F55C"))) PPC_WEAK_FUNC(sub_83C0F55C);
PPC_FUNC_IMPL(__imp__sub_83C0F55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F560"))) PPC_WEAK_FUNC(sub_83C0F560);
PPC_FUNC_IMPL(__imp__sub_83C0F560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30280
	ctx.r3.s64 = ctx.r11.s64 + 30280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F56C"))) PPC_WEAK_FUNC(sub_83C0F56C);
PPC_FUNC_IMPL(__imp__sub_83C0F56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F570"))) PPC_WEAK_FUNC(sub_83C0F570);
PPC_FUNC_IMPL(__imp__sub_83C0F570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30288
	ctx.r3.s64 = ctx.r11.s64 + 30288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F57C"))) PPC_WEAK_FUNC(sub_83C0F57C);
PPC_FUNC_IMPL(__imp__sub_83C0F57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F580"))) PPC_WEAK_FUNC(sub_83C0F580);
PPC_FUNC_IMPL(__imp__sub_83C0F580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30296
	ctx.r3.s64 = ctx.r11.s64 + 30296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F58C"))) PPC_WEAK_FUNC(sub_83C0F58C);
PPC_FUNC_IMPL(__imp__sub_83C0F58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F590"))) PPC_WEAK_FUNC(sub_83C0F590);
PPC_FUNC_IMPL(__imp__sub_83C0F590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30304
	ctx.r3.s64 = ctx.r11.s64 + 30304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F59C"))) PPC_WEAK_FUNC(sub_83C0F59C);
PPC_FUNC_IMPL(__imp__sub_83C0F59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F5A0"))) PPC_WEAK_FUNC(sub_83C0F5A0);
PPC_FUNC_IMPL(__imp__sub_83C0F5A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30312
	ctx.r3.s64 = ctx.r11.s64 + 30312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F5AC"))) PPC_WEAK_FUNC(sub_83C0F5AC);
PPC_FUNC_IMPL(__imp__sub_83C0F5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F5B0"))) PPC_WEAK_FUNC(sub_83C0F5B0);
PPC_FUNC_IMPL(__imp__sub_83C0F5B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30320
	ctx.r3.s64 = ctx.r11.s64 + 30320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F5BC"))) PPC_WEAK_FUNC(sub_83C0F5BC);
PPC_FUNC_IMPL(__imp__sub_83C0F5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F5C0"))) PPC_WEAK_FUNC(sub_83C0F5C0);
PPC_FUNC_IMPL(__imp__sub_83C0F5C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30328
	ctx.r3.s64 = ctx.r11.s64 + 30328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F5CC"))) PPC_WEAK_FUNC(sub_83C0F5CC);
PPC_FUNC_IMPL(__imp__sub_83C0F5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F5D0"))) PPC_WEAK_FUNC(sub_83C0F5D0);
PPC_FUNC_IMPL(__imp__sub_83C0F5D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30336
	ctx.r3.s64 = ctx.r11.s64 + 30336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F5DC"))) PPC_WEAK_FUNC(sub_83C0F5DC);
PPC_FUNC_IMPL(__imp__sub_83C0F5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F5E0"))) PPC_WEAK_FUNC(sub_83C0F5E0);
PPC_FUNC_IMPL(__imp__sub_83C0F5E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30344
	ctx.r3.s64 = ctx.r11.s64 + 30344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F5EC"))) PPC_WEAK_FUNC(sub_83C0F5EC);
PPC_FUNC_IMPL(__imp__sub_83C0F5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F5F0"))) PPC_WEAK_FUNC(sub_83C0F5F0);
PPC_FUNC_IMPL(__imp__sub_83C0F5F0) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,10288
	ctx.r3.s64 = ctx.r11.s64 + 10288;
	// bl 0x83523120
	ctx.lr = 0x83C0F608;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,30352
	ctx.r3.s64 = ctx.r10.s64 + 30352;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0F614;
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

__attribute__((alias("__imp__sub_83C0F624"))) PPC_WEAK_FUNC(sub_83C0F624);
PPC_FUNC_IMPL(__imp__sub_83C0F624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F628"))) PPC_WEAK_FUNC(sub_83C0F628);
PPC_FUNC_IMPL(__imp__sub_83C0F628) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,10304
	ctx.r7.s64 = ctx.r8.s64 + 10304;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,10304(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10304);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,10304(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10304, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0F650"))) PPC_WEAK_FUNC(sub_83C0F650);
PPC_FUNC_IMPL(__imp__sub_83C0F650) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-15992
	ctx.r6.s64 = ctx.r7.s64 + -15992;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-16064(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -16064);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,10304(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10304);
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
	// std r9,-15992(r7)
	PPC_STORE_U64(ctx.r7.u32 + -15992, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0F698"))) PPC_WEAK_FUNC(sub_83C0F698);
PPC_FUNC_IMPL(__imp__sub_83C0F698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30368
	ctx.r3.s64 = ctx.r11.s64 + 30368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F6A4"))) PPC_WEAK_FUNC(sub_83C0F6A4);
PPC_FUNC_IMPL(__imp__sub_83C0F6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F6A8"))) PPC_WEAK_FUNC(sub_83C0F6A8);
PPC_FUNC_IMPL(__imp__sub_83C0F6A8) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,10312
	ctx.r3.s64 = ctx.r11.s64 + 10312;
	// bl 0x8259af80
	ctx.lr = 0x83C0F6C0;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,30384
	ctx.r3.s64 = ctx.r10.s64 + 30384;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0F6CC;
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

__attribute__((alias("__imp__sub_83C0F6DC"))) PPC_WEAK_FUNC(sub_83C0F6DC);
PPC_FUNC_IMPL(__imp__sub_83C0F6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F6E0"))) PPC_WEAK_FUNC(sub_83C0F6E0);
PPC_FUNC_IMPL(__imp__sub_83C0F6E0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,10292
	ctx.r11.s64 = ctx.r8.s64 + 10292;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-16016(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16016);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,30376
	ctx.r3.s64 = ctx.r6.s64 + 30376;
	// stw r10,10292(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10292, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F710"))) PPC_WEAK_FUNC(sub_83C0F710);
PPC_FUNC_IMPL(__imp__sub_83C0F710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30392
	ctx.r3.s64 = ctx.r11.s64 + 30392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F71C"))) PPC_WEAK_FUNC(sub_83C0F71C);
PPC_FUNC_IMPL(__imp__sub_83C0F71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F720"))) PPC_WEAK_FUNC(sub_83C0F720);
PPC_FUNC_IMPL(__imp__sub_83C0F720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30400
	ctx.r3.s64 = ctx.r11.s64 + 30400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F72C"))) PPC_WEAK_FUNC(sub_83C0F72C);
PPC_FUNC_IMPL(__imp__sub_83C0F72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F730"))) PPC_WEAK_FUNC(sub_83C0F730);
PPC_FUNC_IMPL(__imp__sub_83C0F730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30408
	ctx.r3.s64 = ctx.r11.s64 + 30408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F73C"))) PPC_WEAK_FUNC(sub_83C0F73C);
PPC_FUNC_IMPL(__imp__sub_83C0F73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F740"))) PPC_WEAK_FUNC(sub_83C0F740);
PPC_FUNC_IMPL(__imp__sub_83C0F740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30416
	ctx.r3.s64 = ctx.r11.s64 + 30416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F74C"))) PPC_WEAK_FUNC(sub_83C0F74C);
PPC_FUNC_IMPL(__imp__sub_83C0F74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F750"))) PPC_WEAK_FUNC(sub_83C0F750);
PPC_FUNC_IMPL(__imp__sub_83C0F750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30424
	ctx.r3.s64 = ctx.r11.s64 + 30424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F75C"))) PPC_WEAK_FUNC(sub_83C0F75C);
PPC_FUNC_IMPL(__imp__sub_83C0F75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F760"))) PPC_WEAK_FUNC(sub_83C0F760);
PPC_FUNC_IMPL(__imp__sub_83C0F760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30432
	ctx.r3.s64 = ctx.r11.s64 + 30432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F76C"))) PPC_WEAK_FUNC(sub_83C0F76C);
PPC_FUNC_IMPL(__imp__sub_83C0F76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F770"))) PPC_WEAK_FUNC(sub_83C0F770);
PPC_FUNC_IMPL(__imp__sub_83C0F770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30440
	ctx.r3.s64 = ctx.r11.s64 + 30440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F77C"))) PPC_WEAK_FUNC(sub_83C0F77C);
PPC_FUNC_IMPL(__imp__sub_83C0F77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F780"))) PPC_WEAK_FUNC(sub_83C0F780);
PPC_FUNC_IMPL(__imp__sub_83C0F780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30448
	ctx.r3.s64 = ctx.r11.s64 + 30448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F78C"))) PPC_WEAK_FUNC(sub_83C0F78C);
PPC_FUNC_IMPL(__imp__sub_83C0F78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F790"))) PPC_WEAK_FUNC(sub_83C0F790);
PPC_FUNC_IMPL(__imp__sub_83C0F790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30456
	ctx.r3.s64 = ctx.r11.s64 + 30456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F79C"))) PPC_WEAK_FUNC(sub_83C0F79C);
PPC_FUNC_IMPL(__imp__sub_83C0F79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F7A0"))) PPC_WEAK_FUNC(sub_83C0F7A0);
PPC_FUNC_IMPL(__imp__sub_83C0F7A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30464
	ctx.r3.s64 = ctx.r11.s64 + 30464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F7AC"))) PPC_WEAK_FUNC(sub_83C0F7AC);
PPC_FUNC_IMPL(__imp__sub_83C0F7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F7B0"))) PPC_WEAK_FUNC(sub_83C0F7B0);
PPC_FUNC_IMPL(__imp__sub_83C0F7B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30472
	ctx.r3.s64 = ctx.r11.s64 + 30472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F7BC"))) PPC_WEAK_FUNC(sub_83C0F7BC);
PPC_FUNC_IMPL(__imp__sub_83C0F7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F7C0"))) PPC_WEAK_FUNC(sub_83C0F7C0);
PPC_FUNC_IMPL(__imp__sub_83C0F7C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30480
	ctx.r3.s64 = ctx.r11.s64 + 30480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F7CC"))) PPC_WEAK_FUNC(sub_83C0F7CC);
PPC_FUNC_IMPL(__imp__sub_83C0F7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F7D0"))) PPC_WEAK_FUNC(sub_83C0F7D0);
PPC_FUNC_IMPL(__imp__sub_83C0F7D0) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,10656
	ctx.r3.s64 = ctx.r11.s64 + 10656;
	// bl 0x83523120
	ctx.lr = 0x83C0F7E8;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,30488
	ctx.r3.s64 = ctx.r10.s64 + 30488;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0F7F4;
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

__attribute__((alias("__imp__sub_83C0F804"))) PPC_WEAK_FUNC(sub_83C0F804);
PPC_FUNC_IMPL(__imp__sub_83C0F804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F808"))) PPC_WEAK_FUNC(sub_83C0F808);
PPC_FUNC_IMPL(__imp__sub_83C0F808) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,10672
	ctx.r7.s64 = ctx.r8.s64 + 10672;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,10672(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10672);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,10672(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10672, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0F830"))) PPC_WEAK_FUNC(sub_83C0F830);
PPC_FUNC_IMPL(__imp__sub_83C0F830) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-15864
	ctx.r6.s64 = ctx.r7.s64 + -15864;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-15936(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -15936);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,10672(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10672);
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
	// std r9,-15864(r7)
	PPC_STORE_U64(ctx.r7.u32 + -15864, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0F878"))) PPC_WEAK_FUNC(sub_83C0F878);
PPC_FUNC_IMPL(__imp__sub_83C0F878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30504
	ctx.r3.s64 = ctx.r11.s64 + 30504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F884"))) PPC_WEAK_FUNC(sub_83C0F884);
PPC_FUNC_IMPL(__imp__sub_83C0F884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F888"))) PPC_WEAK_FUNC(sub_83C0F888);
PPC_FUNC_IMPL(__imp__sub_83C0F888) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,10680
	ctx.r3.s64 = ctx.r11.s64 + 10680;
	// bl 0x8259af80
	ctx.lr = 0x83C0F8A0;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,30520
	ctx.r3.s64 = ctx.r10.s64 + 30520;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0F8AC;
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

__attribute__((alias("__imp__sub_83C0F8BC"))) PPC_WEAK_FUNC(sub_83C0F8BC);
PPC_FUNC_IMPL(__imp__sub_83C0F8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F8C0"))) PPC_WEAK_FUNC(sub_83C0F8C0);
PPC_FUNC_IMPL(__imp__sub_83C0F8C0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,10660
	ctx.r11.s64 = ctx.r8.s64 + 10660;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-15888(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15888);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,30512
	ctx.r3.s64 = ctx.r6.s64 + 30512;
	// stw r10,10660(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10660, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F8F0"))) PPC_WEAK_FUNC(sub_83C0F8F0);
PPC_FUNC_IMPL(__imp__sub_83C0F8F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30528
	ctx.r3.s64 = ctx.r11.s64 + 30528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F8FC"))) PPC_WEAK_FUNC(sub_83C0F8FC);
PPC_FUNC_IMPL(__imp__sub_83C0F8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F900"))) PPC_WEAK_FUNC(sub_83C0F900);
PPC_FUNC_IMPL(__imp__sub_83C0F900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30536
	ctx.r3.s64 = ctx.r11.s64 + 30536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F90C"))) PPC_WEAK_FUNC(sub_83C0F90C);
PPC_FUNC_IMPL(__imp__sub_83C0F90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F910"))) PPC_WEAK_FUNC(sub_83C0F910);
PPC_FUNC_IMPL(__imp__sub_83C0F910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30544
	ctx.r3.s64 = ctx.r11.s64 + 30544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F91C"))) PPC_WEAK_FUNC(sub_83C0F91C);
PPC_FUNC_IMPL(__imp__sub_83C0F91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F920"))) PPC_WEAK_FUNC(sub_83C0F920);
PPC_FUNC_IMPL(__imp__sub_83C0F920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30552
	ctx.r3.s64 = ctx.r11.s64 + 30552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F92C"))) PPC_WEAK_FUNC(sub_83C0F92C);
PPC_FUNC_IMPL(__imp__sub_83C0F92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F930"))) PPC_WEAK_FUNC(sub_83C0F930);
PPC_FUNC_IMPL(__imp__sub_83C0F930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30560
	ctx.r3.s64 = ctx.r11.s64 + 30560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F93C"))) PPC_WEAK_FUNC(sub_83C0F93C);
PPC_FUNC_IMPL(__imp__sub_83C0F93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F940"))) PPC_WEAK_FUNC(sub_83C0F940);
PPC_FUNC_IMPL(__imp__sub_83C0F940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30568
	ctx.r3.s64 = ctx.r11.s64 + 30568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F94C"))) PPC_WEAK_FUNC(sub_83C0F94C);
PPC_FUNC_IMPL(__imp__sub_83C0F94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F950"))) PPC_WEAK_FUNC(sub_83C0F950);
PPC_FUNC_IMPL(__imp__sub_83C0F950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30576
	ctx.r3.s64 = ctx.r11.s64 + 30576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F95C"))) PPC_WEAK_FUNC(sub_83C0F95C);
PPC_FUNC_IMPL(__imp__sub_83C0F95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F960"))) PPC_WEAK_FUNC(sub_83C0F960);
PPC_FUNC_IMPL(__imp__sub_83C0F960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30584
	ctx.r3.s64 = ctx.r11.s64 + 30584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F96C"))) PPC_WEAK_FUNC(sub_83C0F96C);
PPC_FUNC_IMPL(__imp__sub_83C0F96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F970"))) PPC_WEAK_FUNC(sub_83C0F970);
PPC_FUNC_IMPL(__imp__sub_83C0F970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30592
	ctx.r3.s64 = ctx.r11.s64 + 30592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F97C"))) PPC_WEAK_FUNC(sub_83C0F97C);
PPC_FUNC_IMPL(__imp__sub_83C0F97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F980"))) PPC_WEAK_FUNC(sub_83C0F980);
PPC_FUNC_IMPL(__imp__sub_83C0F980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30600
	ctx.r3.s64 = ctx.r11.s64 + 30600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F98C"))) PPC_WEAK_FUNC(sub_83C0F98C);
PPC_FUNC_IMPL(__imp__sub_83C0F98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F990"))) PPC_WEAK_FUNC(sub_83C0F990);
PPC_FUNC_IMPL(__imp__sub_83C0F990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30608
	ctx.r3.s64 = ctx.r11.s64 + 30608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F99C"))) PPC_WEAK_FUNC(sub_83C0F99C);
PPC_FUNC_IMPL(__imp__sub_83C0F99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F9A0"))) PPC_WEAK_FUNC(sub_83C0F9A0);
PPC_FUNC_IMPL(__imp__sub_83C0F9A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30616
	ctx.r3.s64 = ctx.r11.s64 + 30616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0F9AC"))) PPC_WEAK_FUNC(sub_83C0F9AC);
PPC_FUNC_IMPL(__imp__sub_83C0F9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F9B0"))) PPC_WEAK_FUNC(sub_83C0F9B0);
PPC_FUNC_IMPL(__imp__sub_83C0F9B0) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,11024
	ctx.r3.s64 = ctx.r11.s64 + 11024;
	// bl 0x83523120
	ctx.lr = 0x83C0F9C8;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,30624
	ctx.r3.s64 = ctx.r10.s64 + 30624;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0F9D4;
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

__attribute__((alias("__imp__sub_83C0F9E4"))) PPC_WEAK_FUNC(sub_83C0F9E4);
PPC_FUNC_IMPL(__imp__sub_83C0F9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0F9E8"))) PPC_WEAK_FUNC(sub_83C0F9E8);
PPC_FUNC_IMPL(__imp__sub_83C0F9E8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,11040
	ctx.r7.s64 = ctx.r8.s64 + 11040;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,11040(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 11040);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,11040(r8)
	PPC_STORE_U32(ctx.r8.u32 + 11040, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0FA10"))) PPC_WEAK_FUNC(sub_83C0FA10);
PPC_FUNC_IMPL(__imp__sub_83C0FA10) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-15736
	ctx.r6.s64 = ctx.r7.s64 + -15736;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-15808(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -15808);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,11040(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11040);
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
	// std r9,-15736(r7)
	PPC_STORE_U64(ctx.r7.u32 + -15736, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0FA58"))) PPC_WEAK_FUNC(sub_83C0FA58);
PPC_FUNC_IMPL(__imp__sub_83C0FA58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30640
	ctx.r3.s64 = ctx.r11.s64 + 30640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0FA64"))) PPC_WEAK_FUNC(sub_83C0FA64);
PPC_FUNC_IMPL(__imp__sub_83C0FA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0FA68"))) PPC_WEAK_FUNC(sub_83C0FA68);
PPC_FUNC_IMPL(__imp__sub_83C0FA68) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,11048
	ctx.r3.s64 = ctx.r11.s64 + 11048;
	// bl 0x8259af80
	ctx.lr = 0x83C0FA80;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,30656
	ctx.r3.s64 = ctx.r10.s64 + 30656;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0FA8C;
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

__attribute__((alias("__imp__sub_83C0FA9C"))) PPC_WEAK_FUNC(sub_83C0FA9C);
PPC_FUNC_IMPL(__imp__sub_83C0FA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0FAA0"))) PPC_WEAK_FUNC(sub_83C0FAA0);
PPC_FUNC_IMPL(__imp__sub_83C0FAA0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,11028
	ctx.r11.s64 = ctx.r8.s64 + 11028;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-15760(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15760);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,30648
	ctx.r3.s64 = ctx.r6.s64 + 30648;
	// stw r10,11028(r8)
	PPC_STORE_U32(ctx.r8.u32 + 11028, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0FAD0"))) PPC_WEAK_FUNC(sub_83C0FAD0);
PPC_FUNC_IMPL(__imp__sub_83C0FAD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30664
	ctx.r3.s64 = ctx.r11.s64 + 30664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0FADC"))) PPC_WEAK_FUNC(sub_83C0FADC);
PPC_FUNC_IMPL(__imp__sub_83C0FADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0FAE0"))) PPC_WEAK_FUNC(sub_83C0FAE0);
PPC_FUNC_IMPL(__imp__sub_83C0FAE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30672
	ctx.r3.s64 = ctx.r11.s64 + 30672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0FAEC"))) PPC_WEAK_FUNC(sub_83C0FAEC);
PPC_FUNC_IMPL(__imp__sub_83C0FAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0FAF0"))) PPC_WEAK_FUNC(sub_83C0FAF0);
PPC_FUNC_IMPL(__imp__sub_83C0FAF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30680
	ctx.r3.s64 = ctx.r11.s64 + 30680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0FAFC"))) PPC_WEAK_FUNC(sub_83C0FAFC);
PPC_FUNC_IMPL(__imp__sub_83C0FAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0FB00"))) PPC_WEAK_FUNC(sub_83C0FB00);
PPC_FUNC_IMPL(__imp__sub_83C0FB00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30688
	ctx.r3.s64 = ctx.r11.s64 + 30688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0FB0C"))) PPC_WEAK_FUNC(sub_83C0FB0C);
PPC_FUNC_IMPL(__imp__sub_83C0FB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0FB10"))) PPC_WEAK_FUNC(sub_83C0FB10);
PPC_FUNC_IMPL(__imp__sub_83C0FB10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30696
	ctx.r3.s64 = ctx.r11.s64 + 30696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0FB1C"))) PPC_WEAK_FUNC(sub_83C0FB1C);
PPC_FUNC_IMPL(__imp__sub_83C0FB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0FB20"))) PPC_WEAK_FUNC(sub_83C0FB20);
PPC_FUNC_IMPL(__imp__sub_83C0FB20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30704
	ctx.r3.s64 = ctx.r11.s64 + 30704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0FB2C"))) PPC_WEAK_FUNC(sub_83C0FB2C);
PPC_FUNC_IMPL(__imp__sub_83C0FB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0FB30"))) PPC_WEAK_FUNC(sub_83C0FB30);
PPC_FUNC_IMPL(__imp__sub_83C0FB30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30712
	ctx.r3.s64 = ctx.r11.s64 + 30712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0FB3C"))) PPC_WEAK_FUNC(sub_83C0FB3C);
PPC_FUNC_IMPL(__imp__sub_83C0FB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0FB40"))) PPC_WEAK_FUNC(sub_83C0FB40);
PPC_FUNC_IMPL(__imp__sub_83C0FB40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30720
	ctx.r3.s64 = ctx.r11.s64 + 30720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0FB4C"))) PPC_WEAK_FUNC(sub_83C0FB4C);
PPC_FUNC_IMPL(__imp__sub_83C0FB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0FB50"))) PPC_WEAK_FUNC(sub_83C0FB50);
PPC_FUNC_IMPL(__imp__sub_83C0FB50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30728
	ctx.r3.s64 = ctx.r11.s64 + 30728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0FB5C"))) PPC_WEAK_FUNC(sub_83C0FB5C);
PPC_FUNC_IMPL(__imp__sub_83C0FB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0FB60"))) PPC_WEAK_FUNC(sub_83C0FB60);
PPC_FUNC_IMPL(__imp__sub_83C0FB60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30736
	ctx.r3.s64 = ctx.r11.s64 + 30736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0FB6C"))) PPC_WEAK_FUNC(sub_83C0FB6C);
PPC_FUNC_IMPL(__imp__sub_83C0FB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0FB70"))) PPC_WEAK_FUNC(sub_83C0FB70);
PPC_FUNC_IMPL(__imp__sub_83C0FB70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30744
	ctx.r3.s64 = ctx.r11.s64 + 30744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0FB7C"))) PPC_WEAK_FUNC(sub_83C0FB7C);
PPC_FUNC_IMPL(__imp__sub_83C0FB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0FB80"))) PPC_WEAK_FUNC(sub_83C0FB80);
PPC_FUNC_IMPL(__imp__sub_83C0FB80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30752
	ctx.r3.s64 = ctx.r11.s64 + 30752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0FB8C"))) PPC_WEAK_FUNC(sub_83C0FB8C);
PPC_FUNC_IMPL(__imp__sub_83C0FB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0FB90"))) PPC_WEAK_FUNC(sub_83C0FB90);
PPC_FUNC_IMPL(__imp__sub_83C0FB90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30760
	ctx.r3.s64 = ctx.r11.s64 + 30760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0FB9C"))) PPC_WEAK_FUNC(sub_83C0FB9C);
PPC_FUNC_IMPL(__imp__sub_83C0FB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0FBA0"))) PPC_WEAK_FUNC(sub_83C0FBA0);
PPC_FUNC_IMPL(__imp__sub_83C0FBA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30768
	ctx.r3.s64 = ctx.r11.s64 + 30768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0FBAC"))) PPC_WEAK_FUNC(sub_83C0FBAC);
PPC_FUNC_IMPL(__imp__sub_83C0FBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0FBB0"))) PPC_WEAK_FUNC(sub_83C0FBB0);
PPC_FUNC_IMPL(__imp__sub_83C0FBB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30776
	ctx.r3.s64 = ctx.r11.s64 + 30776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0FBBC"))) PPC_WEAK_FUNC(sub_83C0FBBC);
PPC_FUNC_IMPL(__imp__sub_83C0FBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0FBC0"))) PPC_WEAK_FUNC(sub_83C0FBC0);
PPC_FUNC_IMPL(__imp__sub_83C0FBC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30784
	ctx.r3.s64 = ctx.r11.s64 + 30784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0FBCC"))) PPC_WEAK_FUNC(sub_83C0FBCC);
PPC_FUNC_IMPL(__imp__sub_83C0FBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0FBD0"))) PPC_WEAK_FUNC(sub_83C0FBD0);
PPC_FUNC_IMPL(__imp__sub_83C0FBD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30792
	ctx.r3.s64 = ctx.r11.s64 + 30792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0FBDC"))) PPC_WEAK_FUNC(sub_83C0FBDC);
PPC_FUNC_IMPL(__imp__sub_83C0FBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0FBE0"))) PPC_WEAK_FUNC(sub_83C0FBE0);
PPC_FUNC_IMPL(__imp__sub_83C0FBE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30800
	ctx.r3.s64 = ctx.r11.s64 + 30800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0FBEC"))) PPC_WEAK_FUNC(sub_83C0FBEC);
PPC_FUNC_IMPL(__imp__sub_83C0FBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0FBF0"))) PPC_WEAK_FUNC(sub_83C0FBF0);
PPC_FUNC_IMPL(__imp__sub_83C0FBF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30808
	ctx.r3.s64 = ctx.r11.s64 + 30808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0FBFC"))) PPC_WEAK_FUNC(sub_83C0FBFC);
PPC_FUNC_IMPL(__imp__sub_83C0FBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0FC00"))) PPC_WEAK_FUNC(sub_83C0FC00);
PPC_FUNC_IMPL(__imp__sub_83C0FC00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30816
	ctx.r3.s64 = ctx.r11.s64 + 30816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0FC0C"))) PPC_WEAK_FUNC(sub_83C0FC0C);
PPC_FUNC_IMPL(__imp__sub_83C0FC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0FC10"))) PPC_WEAK_FUNC(sub_83C0FC10);
PPC_FUNC_IMPL(__imp__sub_83C0FC10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30824
	ctx.r3.s64 = ctx.r11.s64 + 30824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0FC1C"))) PPC_WEAK_FUNC(sub_83C0FC1C);
PPC_FUNC_IMPL(__imp__sub_83C0FC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0FC20"))) PPC_WEAK_FUNC(sub_83C0FC20);
PPC_FUNC_IMPL(__imp__sub_83C0FC20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30832
	ctx.r3.s64 = ctx.r11.s64 + 30832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0FC2C"))) PPC_WEAK_FUNC(sub_83C0FC2C);
PPC_FUNC_IMPL(__imp__sub_83C0FC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0FC30"))) PPC_WEAK_FUNC(sub_83C0FC30);
PPC_FUNC_IMPL(__imp__sub_83C0FC30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30840
	ctx.r3.s64 = ctx.r11.s64 + 30840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0FC3C"))) PPC_WEAK_FUNC(sub_83C0FC3C);
PPC_FUNC_IMPL(__imp__sub_83C0FC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0FC40"))) PPC_WEAK_FUNC(sub_83C0FC40);
PPC_FUNC_IMPL(__imp__sub_83C0FC40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30848
	ctx.r3.s64 = ctx.r11.s64 + 30848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0FC4C"))) PPC_WEAK_FUNC(sub_83C0FC4C);
PPC_FUNC_IMPL(__imp__sub_83C0FC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0FC50"))) PPC_WEAK_FUNC(sub_83C0FC50);
PPC_FUNC_IMPL(__imp__sub_83C0FC50) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,11408
	ctx.r3.s64 = ctx.r11.s64 + 11408;
	// bl 0x83523120
	ctx.lr = 0x83C0FC68;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,30856
	ctx.r3.s64 = ctx.r10.s64 + 30856;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0FC74;
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

__attribute__((alias("__imp__sub_83C0FC84"))) PPC_WEAK_FUNC(sub_83C0FC84);
PPC_FUNC_IMPL(__imp__sub_83C0FC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0FC88"))) PPC_WEAK_FUNC(sub_83C0FC88);
PPC_FUNC_IMPL(__imp__sub_83C0FC88) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,11424
	ctx.r7.s64 = ctx.r8.s64 + 11424;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,11424(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 11424);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,11424(r8)
	PPC_STORE_U32(ctx.r8.u32 + 11424, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0FCB0"))) PPC_WEAK_FUNC(sub_83C0FCB0);
PPC_FUNC_IMPL(__imp__sub_83C0FCB0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-15504
	ctx.r6.s64 = ctx.r7.s64 + -15504;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-15576(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -15576);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,11424(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11424);
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
	// std r9,-15504(r7)
	PPC_STORE_U64(ctx.r7.u32 + -15504, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0FCF8"))) PPC_WEAK_FUNC(sub_83C0FCF8);
PPC_FUNC_IMPL(__imp__sub_83C0FCF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30872
	ctx.r3.s64 = ctx.r11.s64 + 30872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0FD04"))) PPC_WEAK_FUNC(sub_83C0FD04);
PPC_FUNC_IMPL(__imp__sub_83C0FD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0FD08"))) PPC_WEAK_FUNC(sub_83C0FD08);
PPC_FUNC_IMPL(__imp__sub_83C0FD08) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,11432
	ctx.r3.s64 = ctx.r11.s64 + 11432;
	// bl 0x8259af80
	ctx.lr = 0x83C0FD20;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,30888
	ctx.r3.s64 = ctx.r10.s64 + 30888;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0FD2C;
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

__attribute__((alias("__imp__sub_83C0FD3C"))) PPC_WEAK_FUNC(sub_83C0FD3C);
PPC_FUNC_IMPL(__imp__sub_83C0FD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0FD40"))) PPC_WEAK_FUNC(sub_83C0FD40);
PPC_FUNC_IMPL(__imp__sub_83C0FD40) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,11412
	ctx.r11.s64 = ctx.r8.s64 + 11412;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-15528(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15528);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,30880
	ctx.r3.s64 = ctx.r6.s64 + 30880;
	// stw r10,11412(r8)
	PPC_STORE_U32(ctx.r8.u32 + 11412, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0FD70"))) PPC_WEAK_FUNC(sub_83C0FD70);
PPC_FUNC_IMPL(__imp__sub_83C0FD70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// li r5,12288
	ctx.r5.s64 = 12288;
	// addi r11,r11,11776
	ctx.r11.s64 = ctx.r11.s64 + 11776;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// b 0x831cdcf0
	sub_831CDCF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0FD88"))) PPC_WEAK_FUNC(sub_83C0FD88);
PPC_FUNC_IMPL(__imp__sub_83C0FD88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30896
	ctx.r3.s64 = ctx.r11.s64 + 30896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0FD94"))) PPC_WEAK_FUNC(sub_83C0FD94);
PPC_FUNC_IMPL(__imp__sub_83C0FD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0FD98"))) PPC_WEAK_FUNC(sub_83C0FD98);
PPC_FUNC_IMPL(__imp__sub_83C0FD98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30904
	ctx.r3.s64 = ctx.r11.s64 + 30904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0FDA4"))) PPC_WEAK_FUNC(sub_83C0FDA4);
PPC_FUNC_IMPL(__imp__sub_83C0FDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0FDA8"))) PPC_WEAK_FUNC(sub_83C0FDA8);
PPC_FUNC_IMPL(__imp__sub_83C0FDA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30912
	ctx.r3.s64 = ctx.r11.s64 + 30912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0FDB4"))) PPC_WEAK_FUNC(sub_83C0FDB4);
PPC_FUNC_IMPL(__imp__sub_83C0FDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0FDB8"))) PPC_WEAK_FUNC(sub_83C0FDB8);
PPC_FUNC_IMPL(__imp__sub_83C0FDB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30920
	ctx.r3.s64 = ctx.r11.s64 + 30920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0FDC4"))) PPC_WEAK_FUNC(sub_83C0FDC4);
PPC_FUNC_IMPL(__imp__sub_83C0FDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0FDC8"))) PPC_WEAK_FUNC(sub_83C0FDC8);
PPC_FUNC_IMPL(__imp__sub_83C0FDC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30928
	ctx.r3.s64 = ctx.r11.s64 + 30928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0FDD4"))) PPC_WEAK_FUNC(sub_83C0FDD4);
PPC_FUNC_IMPL(__imp__sub_83C0FDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0FDD8"))) PPC_WEAK_FUNC(sub_83C0FDD8);
PPC_FUNC_IMPL(__imp__sub_83C0FDD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30936
	ctx.r3.s64 = ctx.r11.s64 + 30936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0FDE4"))) PPC_WEAK_FUNC(sub_83C0FDE4);
PPC_FUNC_IMPL(__imp__sub_83C0FDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0FDE8"))) PPC_WEAK_FUNC(sub_83C0FDE8);
PPC_FUNC_IMPL(__imp__sub_83C0FDE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30944
	ctx.r3.s64 = ctx.r11.s64 + 30944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0FDF4"))) PPC_WEAK_FUNC(sub_83C0FDF4);
PPC_FUNC_IMPL(__imp__sub_83C0FDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0FDF8"))) PPC_WEAK_FUNC(sub_83C0FDF8);
PPC_FUNC_IMPL(__imp__sub_83C0FDF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30952
	ctx.r3.s64 = ctx.r11.s64 + 30952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0FE04"))) PPC_WEAK_FUNC(sub_83C0FE04);
PPC_FUNC_IMPL(__imp__sub_83C0FE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0FE08"))) PPC_WEAK_FUNC(sub_83C0FE08);
PPC_FUNC_IMPL(__imp__sub_83C0FE08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30960
	ctx.r3.s64 = ctx.r11.s64 + 30960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0FE14"))) PPC_WEAK_FUNC(sub_83C0FE14);
PPC_FUNC_IMPL(__imp__sub_83C0FE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0FE18"))) PPC_WEAK_FUNC(sub_83C0FE18);
PPC_FUNC_IMPL(__imp__sub_83C0FE18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30968
	ctx.r3.s64 = ctx.r11.s64 + 30968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0FE24"))) PPC_WEAK_FUNC(sub_83C0FE24);
PPC_FUNC_IMPL(__imp__sub_83C0FE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0FE28"))) PPC_WEAK_FUNC(sub_83C0FE28);
PPC_FUNC_IMPL(__imp__sub_83C0FE28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30976
	ctx.r3.s64 = ctx.r11.s64 + 30976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0FE34"))) PPC_WEAK_FUNC(sub_83C0FE34);
PPC_FUNC_IMPL(__imp__sub_83C0FE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0FE38"))) PPC_WEAK_FUNC(sub_83C0FE38);
PPC_FUNC_IMPL(__imp__sub_83C0FE38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,30984
	ctx.r3.s64 = ctx.r11.s64 + 30984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0FE44"))) PPC_WEAK_FUNC(sub_83C0FE44);
PPC_FUNC_IMPL(__imp__sub_83C0FE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0FE48"))) PPC_WEAK_FUNC(sub_83C0FE48);
PPC_FUNC_IMPL(__imp__sub_83C0FE48) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,24084
	ctx.r3.s64 = ctx.r11.s64 + 24084;
	// bl 0x83523120
	ctx.lr = 0x83C0FE60;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,30992
	ctx.r3.s64 = ctx.r10.s64 + 30992;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0FE6C;
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

__attribute__((alias("__imp__sub_83C0FE7C"))) PPC_WEAK_FUNC(sub_83C0FE7C);
PPC_FUNC_IMPL(__imp__sub_83C0FE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0FE80"))) PPC_WEAK_FUNC(sub_83C0FE80);
PPC_FUNC_IMPL(__imp__sub_83C0FE80) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,24100
	ctx.r7.s64 = ctx.r8.s64 + 24100;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,24100(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24100);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,24100(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24100, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0FEA8"))) PPC_WEAK_FUNC(sub_83C0FEA8);
PPC_FUNC_IMPL(__imp__sub_83C0FEA8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-15376
	ctx.r6.s64 = ctx.r7.s64 + -15376;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-15448(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -15448);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,24100(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24100);
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
	// std r9,-15376(r7)
	PPC_STORE_U64(ctx.r7.u32 + -15376, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C0FEF0"))) PPC_WEAK_FUNC(sub_83C0FEF0);
PPC_FUNC_IMPL(__imp__sub_83C0FEF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31008
	ctx.r3.s64 = ctx.r11.s64 + 31008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0FEFC"))) PPC_WEAK_FUNC(sub_83C0FEFC);
PPC_FUNC_IMPL(__imp__sub_83C0FEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0FF00"))) PPC_WEAK_FUNC(sub_83C0FF00);
PPC_FUNC_IMPL(__imp__sub_83C0FF00) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,24112
	ctx.r3.s64 = ctx.r11.s64 + 24112;
	// bl 0x8259af80
	ctx.lr = 0x83C0FF18;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,31024
	ctx.r3.s64 = ctx.r10.s64 + 31024;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0FF24;
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

__attribute__((alias("__imp__sub_83C0FF34"))) PPC_WEAK_FUNC(sub_83C0FF34);
PPC_FUNC_IMPL(__imp__sub_83C0FF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0FF38"))) PPC_WEAK_FUNC(sub_83C0FF38);
PPC_FUNC_IMPL(__imp__sub_83C0FF38) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,24088
	ctx.r11.s64 = ctx.r8.s64 + 24088;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-15400(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15400);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,31016
	ctx.r3.s64 = ctx.r6.s64 + 31016;
	// stw r10,24088(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24088, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0FF68"))) PPC_WEAK_FUNC(sub_83C0FF68);
PPC_FUNC_IMPL(__imp__sub_83C0FF68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31032
	ctx.r3.s64 = ctx.r11.s64 + 31032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0FF74"))) PPC_WEAK_FUNC(sub_83C0FF74);
PPC_FUNC_IMPL(__imp__sub_83C0FF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0FF78"))) PPC_WEAK_FUNC(sub_83C0FF78);
PPC_FUNC_IMPL(__imp__sub_83C0FF78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31040
	ctx.r3.s64 = ctx.r11.s64 + 31040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0FF84"))) PPC_WEAK_FUNC(sub_83C0FF84);
PPC_FUNC_IMPL(__imp__sub_83C0FF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0FF88"))) PPC_WEAK_FUNC(sub_83C0FF88);
PPC_FUNC_IMPL(__imp__sub_83C0FF88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31048
	ctx.r3.s64 = ctx.r11.s64 + 31048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0FF94"))) PPC_WEAK_FUNC(sub_83C0FF94);
PPC_FUNC_IMPL(__imp__sub_83C0FF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0FF98"))) PPC_WEAK_FUNC(sub_83C0FF98);
PPC_FUNC_IMPL(__imp__sub_83C0FF98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31056
	ctx.r3.s64 = ctx.r11.s64 + 31056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0FFA4"))) PPC_WEAK_FUNC(sub_83C0FFA4);
PPC_FUNC_IMPL(__imp__sub_83C0FFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0FFA8"))) PPC_WEAK_FUNC(sub_83C0FFA8);
PPC_FUNC_IMPL(__imp__sub_83C0FFA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31064
	ctx.r3.s64 = ctx.r11.s64 + 31064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0FFB4"))) PPC_WEAK_FUNC(sub_83C0FFB4);
PPC_FUNC_IMPL(__imp__sub_83C0FFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0FFB8"))) PPC_WEAK_FUNC(sub_83C0FFB8);
PPC_FUNC_IMPL(__imp__sub_83C0FFB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31072
	ctx.r3.s64 = ctx.r11.s64 + 31072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0FFC4"))) PPC_WEAK_FUNC(sub_83C0FFC4);
PPC_FUNC_IMPL(__imp__sub_83C0FFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0FFC8"))) PPC_WEAK_FUNC(sub_83C0FFC8);
PPC_FUNC_IMPL(__imp__sub_83C0FFC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31080
	ctx.r3.s64 = ctx.r11.s64 + 31080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0FFD4"))) PPC_WEAK_FUNC(sub_83C0FFD4);
PPC_FUNC_IMPL(__imp__sub_83C0FFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0FFD8"))) PPC_WEAK_FUNC(sub_83C0FFD8);
PPC_FUNC_IMPL(__imp__sub_83C0FFD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31088
	ctx.r3.s64 = ctx.r11.s64 + 31088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0FFE4"))) PPC_WEAK_FUNC(sub_83C0FFE4);
PPC_FUNC_IMPL(__imp__sub_83C0FFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0FFE8"))) PPC_WEAK_FUNC(sub_83C0FFE8);
PPC_FUNC_IMPL(__imp__sub_83C0FFE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31096
	ctx.r3.s64 = ctx.r11.s64 + 31096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0FFF4"))) PPC_WEAK_FUNC(sub_83C0FFF4);
PPC_FUNC_IMPL(__imp__sub_83C0FFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C0FFF8"))) PPC_WEAK_FUNC(sub_83C0FFF8);
PPC_FUNC_IMPL(__imp__sub_83C0FFF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31104
	ctx.r3.s64 = ctx.r11.s64 + 31104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10004"))) PPC_WEAK_FUNC(sub_83C10004);
PPC_FUNC_IMPL(__imp__sub_83C10004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10008"))) PPC_WEAK_FUNC(sub_83C10008);
PPC_FUNC_IMPL(__imp__sub_83C10008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31112
	ctx.r3.s64 = ctx.r11.s64 + 31112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10014"))) PPC_WEAK_FUNC(sub_83C10014);
PPC_FUNC_IMPL(__imp__sub_83C10014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10018"))) PPC_WEAK_FUNC(sub_83C10018);
PPC_FUNC_IMPL(__imp__sub_83C10018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31120
	ctx.r3.s64 = ctx.r11.s64 + 31120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C10024"))) PPC_WEAK_FUNC(sub_83C10024);
PPC_FUNC_IMPL(__imp__sub_83C10024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10028"))) PPC_WEAK_FUNC(sub_83C10028);
PPC_FUNC_IMPL(__imp__sub_83C10028) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,24460
	ctx.r3.s64 = ctx.r11.s64 + 24460;
	// bl 0x83523120
	ctx.lr = 0x83C10040;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,31128
	ctx.r3.s64 = ctx.r10.s64 + 31128;
	// bl 0x831cdcc8
	ctx.lr = 0x83C1004C;
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

__attribute__((alias("__imp__sub_83C1005C"))) PPC_WEAK_FUNC(sub_83C1005C);
PPC_FUNC_IMPL(__imp__sub_83C1005C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C10060"))) PPC_WEAK_FUNC(sub_83C10060);
PPC_FUNC_IMPL(__imp__sub_83C10060) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,24476
	ctx.r7.s64 = ctx.r8.s64 + 24476;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,24476(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24476);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,24476(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24476, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C10088"))) PPC_WEAK_FUNC(sub_83C10088);
PPC_FUNC_IMPL(__imp__sub_83C10088) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-15248
	ctx.r6.s64 = ctx.r7.s64 + -15248;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-15320(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -15320);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,24476(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24476);
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
	// std r9,-15248(r7)
	PPC_STORE_U64(ctx.r7.u32 + -15248, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C100D0"))) PPC_WEAK_FUNC(sub_83C100D0);
PPC_FUNC_IMPL(__imp__sub_83C100D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,31144
	ctx.r3.s64 = ctx.r11.s64 + 31144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

