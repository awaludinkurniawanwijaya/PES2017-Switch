#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83CDD0B4"))) PPC_WEAK_FUNC(sub_83CDD0B4);
PPC_FUNC_IMPL(__imp__sub_83CDD0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD0B8"))) PPC_WEAK_FUNC(sub_83CDD0B8);
PPC_FUNC_IMPL(__imp__sub_83CDD0B8) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,26856
	ctx.r3.s64 = ctx.r11.s64 + 26856;
	// bl 0x8259af80
	ctx.lr = 0x83CDD0D0;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-5008
	ctx.r3.s64 = ctx.r10.s64 + -5008;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDD0DC;
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

__attribute__((alias("__imp__sub_83CDD0EC"))) PPC_WEAK_FUNC(sub_83CDD0EC);
PPC_FUNC_IMPL(__imp__sub_83CDD0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD0F0"))) PPC_WEAK_FUNC(sub_83CDD0F0);
PPC_FUNC_IMPL(__imp__sub_83CDD0F0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,26836
	ctx.r11.s64 = ctx.r8.s64 + 26836;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,12764(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12764);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-5016
	ctx.r3.s64 = ctx.r6.s64 + -5016;
	// stw r10,26836(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26836, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD120"))) PPC_WEAK_FUNC(sub_83CDD120);
PPC_FUNC_IMPL(__imp__sub_83CDD120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-5000
	ctx.r3.s64 = ctx.r11.s64 + -5000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD12C"))) PPC_WEAK_FUNC(sub_83CDD12C);
PPC_FUNC_IMPL(__imp__sub_83CDD12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD130"))) PPC_WEAK_FUNC(sub_83CDD130);
PPC_FUNC_IMPL(__imp__sub_83CDD130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4992
	ctx.r3.s64 = ctx.r11.s64 + -4992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD13C"))) PPC_WEAK_FUNC(sub_83CDD13C);
PPC_FUNC_IMPL(__imp__sub_83CDD13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD140"))) PPC_WEAK_FUNC(sub_83CDD140);
PPC_FUNC_IMPL(__imp__sub_83CDD140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4984
	ctx.r3.s64 = ctx.r11.s64 + -4984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD14C"))) PPC_WEAK_FUNC(sub_83CDD14C);
PPC_FUNC_IMPL(__imp__sub_83CDD14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD150"))) PPC_WEAK_FUNC(sub_83CDD150);
PPC_FUNC_IMPL(__imp__sub_83CDD150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4976
	ctx.r3.s64 = ctx.r11.s64 + -4976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD15C"))) PPC_WEAK_FUNC(sub_83CDD15C);
PPC_FUNC_IMPL(__imp__sub_83CDD15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD160"))) PPC_WEAK_FUNC(sub_83CDD160);
PPC_FUNC_IMPL(__imp__sub_83CDD160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4968
	ctx.r3.s64 = ctx.r11.s64 + -4968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD16C"))) PPC_WEAK_FUNC(sub_83CDD16C);
PPC_FUNC_IMPL(__imp__sub_83CDD16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD170"))) PPC_WEAK_FUNC(sub_83CDD170);
PPC_FUNC_IMPL(__imp__sub_83CDD170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4960
	ctx.r3.s64 = ctx.r11.s64 + -4960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD17C"))) PPC_WEAK_FUNC(sub_83CDD17C);
PPC_FUNC_IMPL(__imp__sub_83CDD17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD180"))) PPC_WEAK_FUNC(sub_83CDD180);
PPC_FUNC_IMPL(__imp__sub_83CDD180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4952
	ctx.r3.s64 = ctx.r11.s64 + -4952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD18C"))) PPC_WEAK_FUNC(sub_83CDD18C);
PPC_FUNC_IMPL(__imp__sub_83CDD18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD190"))) PPC_WEAK_FUNC(sub_83CDD190);
PPC_FUNC_IMPL(__imp__sub_83CDD190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4944
	ctx.r3.s64 = ctx.r11.s64 + -4944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD19C"))) PPC_WEAK_FUNC(sub_83CDD19C);
PPC_FUNC_IMPL(__imp__sub_83CDD19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD1A0"))) PPC_WEAK_FUNC(sub_83CDD1A0);
PPC_FUNC_IMPL(__imp__sub_83CDD1A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4936
	ctx.r3.s64 = ctx.r11.s64 + -4936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD1AC"))) PPC_WEAK_FUNC(sub_83CDD1AC);
PPC_FUNC_IMPL(__imp__sub_83CDD1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD1B0"))) PPC_WEAK_FUNC(sub_83CDD1B0);
PPC_FUNC_IMPL(__imp__sub_83CDD1B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4928
	ctx.r3.s64 = ctx.r11.s64 + -4928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD1BC"))) PPC_WEAK_FUNC(sub_83CDD1BC);
PPC_FUNC_IMPL(__imp__sub_83CDD1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD1C0"))) PPC_WEAK_FUNC(sub_83CDD1C0);
PPC_FUNC_IMPL(__imp__sub_83CDD1C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4920
	ctx.r3.s64 = ctx.r11.s64 + -4920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD1CC"))) PPC_WEAK_FUNC(sub_83CDD1CC);
PPC_FUNC_IMPL(__imp__sub_83CDD1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD1D0"))) PPC_WEAK_FUNC(sub_83CDD1D0);
PPC_FUNC_IMPL(__imp__sub_83CDD1D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4912
	ctx.r3.s64 = ctx.r11.s64 + -4912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD1DC"))) PPC_WEAK_FUNC(sub_83CDD1DC);
PPC_FUNC_IMPL(__imp__sub_83CDD1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD1E0"))) PPC_WEAK_FUNC(sub_83CDD1E0);
PPC_FUNC_IMPL(__imp__sub_83CDD1E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,27216
	ctx.r7.s64 = ctx.r8.s64 + 27216;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,27216(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27216);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,27216(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27216, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDD208"))) PPC_WEAK_FUNC(sub_83CDD208);
PPC_FUNC_IMPL(__imp__sub_83CDD208) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,27200
	ctx.r3.s64 = ctx.r11.s64 + 27200;
	// bl 0x83523120
	ctx.lr = 0x83CDD220;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-4904
	ctx.r3.s64 = ctx.r10.s64 + -4904;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDD22C;
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

__attribute__((alias("__imp__sub_83CDD23C"))) PPC_WEAK_FUNC(sub_83CDD23C);
PPC_FUNC_IMPL(__imp__sub_83CDD23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD240"))) PPC_WEAK_FUNC(sub_83CDD240);
PPC_FUNC_IMPL(__imp__sub_83CDD240) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,12944
	ctx.r6.s64 = ctx.r7.s64 + 12944;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,12860(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 12860);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,27216(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 27216);
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
	// std r9,12944(r7)
	PPC_STORE_U64(ctx.r7.u32 + 12944, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDD288"))) PPC_WEAK_FUNC(sub_83CDD288);
PPC_FUNC_IMPL(__imp__sub_83CDD288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4888
	ctx.r3.s64 = ctx.r11.s64 + -4888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD294"))) PPC_WEAK_FUNC(sub_83CDD294);
PPC_FUNC_IMPL(__imp__sub_83CDD294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD298"))) PPC_WEAK_FUNC(sub_83CDD298);
PPC_FUNC_IMPL(__imp__sub_83CDD298) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,27224
	ctx.r3.s64 = ctx.r11.s64 + 27224;
	// bl 0x8259af80
	ctx.lr = 0x83CDD2B0;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-4872
	ctx.r3.s64 = ctx.r10.s64 + -4872;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDD2BC;
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

__attribute__((alias("__imp__sub_83CDD2CC"))) PPC_WEAK_FUNC(sub_83CDD2CC);
PPC_FUNC_IMPL(__imp__sub_83CDD2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD2D0"))) PPC_WEAK_FUNC(sub_83CDD2D0);
PPC_FUNC_IMPL(__imp__sub_83CDD2D0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,27204
	ctx.r11.s64 = ctx.r8.s64 + 27204;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,12908(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12908);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-4880
	ctx.r3.s64 = ctx.r6.s64 + -4880;
	// stw r10,27204(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27204, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD300"))) PPC_WEAK_FUNC(sub_83CDD300);
PPC_FUNC_IMPL(__imp__sub_83CDD300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4864
	ctx.r3.s64 = ctx.r11.s64 + -4864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD30C"))) PPC_WEAK_FUNC(sub_83CDD30C);
PPC_FUNC_IMPL(__imp__sub_83CDD30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD310"))) PPC_WEAK_FUNC(sub_83CDD310);
PPC_FUNC_IMPL(__imp__sub_83CDD310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4856
	ctx.r3.s64 = ctx.r11.s64 + -4856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD31C"))) PPC_WEAK_FUNC(sub_83CDD31C);
PPC_FUNC_IMPL(__imp__sub_83CDD31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD320"))) PPC_WEAK_FUNC(sub_83CDD320);
PPC_FUNC_IMPL(__imp__sub_83CDD320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4848
	ctx.r3.s64 = ctx.r11.s64 + -4848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD32C"))) PPC_WEAK_FUNC(sub_83CDD32C);
PPC_FUNC_IMPL(__imp__sub_83CDD32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD330"))) PPC_WEAK_FUNC(sub_83CDD330);
PPC_FUNC_IMPL(__imp__sub_83CDD330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4840
	ctx.r3.s64 = ctx.r11.s64 + -4840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD33C"))) PPC_WEAK_FUNC(sub_83CDD33C);
PPC_FUNC_IMPL(__imp__sub_83CDD33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD340"))) PPC_WEAK_FUNC(sub_83CDD340);
PPC_FUNC_IMPL(__imp__sub_83CDD340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4832
	ctx.r3.s64 = ctx.r11.s64 + -4832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD34C"))) PPC_WEAK_FUNC(sub_83CDD34C);
PPC_FUNC_IMPL(__imp__sub_83CDD34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD350"))) PPC_WEAK_FUNC(sub_83CDD350);
PPC_FUNC_IMPL(__imp__sub_83CDD350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4824
	ctx.r3.s64 = ctx.r11.s64 + -4824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD35C"))) PPC_WEAK_FUNC(sub_83CDD35C);
PPC_FUNC_IMPL(__imp__sub_83CDD35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD360"))) PPC_WEAK_FUNC(sub_83CDD360);
PPC_FUNC_IMPL(__imp__sub_83CDD360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4816
	ctx.r3.s64 = ctx.r11.s64 + -4816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD36C"))) PPC_WEAK_FUNC(sub_83CDD36C);
PPC_FUNC_IMPL(__imp__sub_83CDD36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD370"))) PPC_WEAK_FUNC(sub_83CDD370);
PPC_FUNC_IMPL(__imp__sub_83CDD370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4808
	ctx.r3.s64 = ctx.r11.s64 + -4808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD37C"))) PPC_WEAK_FUNC(sub_83CDD37C);
PPC_FUNC_IMPL(__imp__sub_83CDD37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD380"))) PPC_WEAK_FUNC(sub_83CDD380);
PPC_FUNC_IMPL(__imp__sub_83CDD380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4800
	ctx.r3.s64 = ctx.r11.s64 + -4800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD38C"))) PPC_WEAK_FUNC(sub_83CDD38C);
PPC_FUNC_IMPL(__imp__sub_83CDD38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD390"))) PPC_WEAK_FUNC(sub_83CDD390);
PPC_FUNC_IMPL(__imp__sub_83CDD390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4792
	ctx.r3.s64 = ctx.r11.s64 + -4792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD39C"))) PPC_WEAK_FUNC(sub_83CDD39C);
PPC_FUNC_IMPL(__imp__sub_83CDD39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD3A0"))) PPC_WEAK_FUNC(sub_83CDD3A0);
PPC_FUNC_IMPL(__imp__sub_83CDD3A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4784
	ctx.r3.s64 = ctx.r11.s64 + -4784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD3AC"))) PPC_WEAK_FUNC(sub_83CDD3AC);
PPC_FUNC_IMPL(__imp__sub_83CDD3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD3B0"))) PPC_WEAK_FUNC(sub_83CDD3B0);
PPC_FUNC_IMPL(__imp__sub_83CDD3B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4776
	ctx.r3.s64 = ctx.r11.s64 + -4776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD3BC"))) PPC_WEAK_FUNC(sub_83CDD3BC);
PPC_FUNC_IMPL(__imp__sub_83CDD3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD3C0"))) PPC_WEAK_FUNC(sub_83CDD3C0);
PPC_FUNC_IMPL(__imp__sub_83CDD3C0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,27584
	ctx.r7.s64 = ctx.r8.s64 + 27584;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,27584(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27584);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,27584(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27584, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDD3E8"))) PPC_WEAK_FUNC(sub_83CDD3E8);
PPC_FUNC_IMPL(__imp__sub_83CDD3E8) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,27568
	ctx.r3.s64 = ctx.r11.s64 + 27568;
	// bl 0x83523120
	ctx.lr = 0x83CDD400;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-4768
	ctx.r3.s64 = ctx.r10.s64 + -4768;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDD40C;
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

__attribute__((alias("__imp__sub_83CDD41C"))) PPC_WEAK_FUNC(sub_83CDD41C);
PPC_FUNC_IMPL(__imp__sub_83CDD41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD420"))) PPC_WEAK_FUNC(sub_83CDD420);
PPC_FUNC_IMPL(__imp__sub_83CDD420) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,13096
	ctx.r6.s64 = ctx.r7.s64 + 13096;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,13012(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 13012);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,27584(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 27584);
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
	// std r9,13096(r7)
	PPC_STORE_U64(ctx.r7.u32 + 13096, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDD468"))) PPC_WEAK_FUNC(sub_83CDD468);
PPC_FUNC_IMPL(__imp__sub_83CDD468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4752
	ctx.r3.s64 = ctx.r11.s64 + -4752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD474"))) PPC_WEAK_FUNC(sub_83CDD474);
PPC_FUNC_IMPL(__imp__sub_83CDD474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD478"))) PPC_WEAK_FUNC(sub_83CDD478);
PPC_FUNC_IMPL(__imp__sub_83CDD478) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,27592
	ctx.r3.s64 = ctx.r11.s64 + 27592;
	// bl 0x8259af80
	ctx.lr = 0x83CDD490;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-4736
	ctx.r3.s64 = ctx.r10.s64 + -4736;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDD49C;
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

__attribute__((alias("__imp__sub_83CDD4AC"))) PPC_WEAK_FUNC(sub_83CDD4AC);
PPC_FUNC_IMPL(__imp__sub_83CDD4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD4B0"))) PPC_WEAK_FUNC(sub_83CDD4B0);
PPC_FUNC_IMPL(__imp__sub_83CDD4B0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,27572
	ctx.r11.s64 = ctx.r8.s64 + 27572;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,13060(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13060);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-4744
	ctx.r3.s64 = ctx.r6.s64 + -4744;
	// stw r10,27572(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27572, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD4E0"))) PPC_WEAK_FUNC(sub_83CDD4E0);
PPC_FUNC_IMPL(__imp__sub_83CDD4E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4728
	ctx.r3.s64 = ctx.r11.s64 + -4728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD4EC"))) PPC_WEAK_FUNC(sub_83CDD4EC);
PPC_FUNC_IMPL(__imp__sub_83CDD4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD4F0"))) PPC_WEAK_FUNC(sub_83CDD4F0);
PPC_FUNC_IMPL(__imp__sub_83CDD4F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4720
	ctx.r3.s64 = ctx.r11.s64 + -4720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD4FC"))) PPC_WEAK_FUNC(sub_83CDD4FC);
PPC_FUNC_IMPL(__imp__sub_83CDD4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD500"))) PPC_WEAK_FUNC(sub_83CDD500);
PPC_FUNC_IMPL(__imp__sub_83CDD500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4712
	ctx.r3.s64 = ctx.r11.s64 + -4712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD50C"))) PPC_WEAK_FUNC(sub_83CDD50C);
PPC_FUNC_IMPL(__imp__sub_83CDD50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD510"))) PPC_WEAK_FUNC(sub_83CDD510);
PPC_FUNC_IMPL(__imp__sub_83CDD510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4704
	ctx.r3.s64 = ctx.r11.s64 + -4704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD51C"))) PPC_WEAK_FUNC(sub_83CDD51C);
PPC_FUNC_IMPL(__imp__sub_83CDD51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD520"))) PPC_WEAK_FUNC(sub_83CDD520);
PPC_FUNC_IMPL(__imp__sub_83CDD520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4696
	ctx.r3.s64 = ctx.r11.s64 + -4696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD52C"))) PPC_WEAK_FUNC(sub_83CDD52C);
PPC_FUNC_IMPL(__imp__sub_83CDD52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD530"))) PPC_WEAK_FUNC(sub_83CDD530);
PPC_FUNC_IMPL(__imp__sub_83CDD530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4688
	ctx.r3.s64 = ctx.r11.s64 + -4688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD53C"))) PPC_WEAK_FUNC(sub_83CDD53C);
PPC_FUNC_IMPL(__imp__sub_83CDD53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD540"))) PPC_WEAK_FUNC(sub_83CDD540);
PPC_FUNC_IMPL(__imp__sub_83CDD540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4680
	ctx.r3.s64 = ctx.r11.s64 + -4680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD54C"))) PPC_WEAK_FUNC(sub_83CDD54C);
PPC_FUNC_IMPL(__imp__sub_83CDD54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD550"))) PPC_WEAK_FUNC(sub_83CDD550);
PPC_FUNC_IMPL(__imp__sub_83CDD550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4672
	ctx.r3.s64 = ctx.r11.s64 + -4672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD55C"))) PPC_WEAK_FUNC(sub_83CDD55C);
PPC_FUNC_IMPL(__imp__sub_83CDD55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD560"))) PPC_WEAK_FUNC(sub_83CDD560);
PPC_FUNC_IMPL(__imp__sub_83CDD560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4664
	ctx.r3.s64 = ctx.r11.s64 + -4664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD56C"))) PPC_WEAK_FUNC(sub_83CDD56C);
PPC_FUNC_IMPL(__imp__sub_83CDD56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD570"))) PPC_WEAK_FUNC(sub_83CDD570);
PPC_FUNC_IMPL(__imp__sub_83CDD570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4656
	ctx.r3.s64 = ctx.r11.s64 + -4656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD57C"))) PPC_WEAK_FUNC(sub_83CDD57C);
PPC_FUNC_IMPL(__imp__sub_83CDD57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD580"))) PPC_WEAK_FUNC(sub_83CDD580);
PPC_FUNC_IMPL(__imp__sub_83CDD580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4648
	ctx.r3.s64 = ctx.r11.s64 + -4648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD58C"))) PPC_WEAK_FUNC(sub_83CDD58C);
PPC_FUNC_IMPL(__imp__sub_83CDD58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD590"))) PPC_WEAK_FUNC(sub_83CDD590);
PPC_FUNC_IMPL(__imp__sub_83CDD590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4640
	ctx.r3.s64 = ctx.r11.s64 + -4640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD59C"))) PPC_WEAK_FUNC(sub_83CDD59C);
PPC_FUNC_IMPL(__imp__sub_83CDD59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD5A0"))) PPC_WEAK_FUNC(sub_83CDD5A0);
PPC_FUNC_IMPL(__imp__sub_83CDD5A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,27940
	ctx.r7.s64 = ctx.r8.s64 + 27940;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,27940(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27940);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,27940(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27940, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDD5C8"))) PPC_WEAK_FUNC(sub_83CDD5C8);
PPC_FUNC_IMPL(__imp__sub_83CDD5C8) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,27936
	ctx.r3.s64 = ctx.r11.s64 + 27936;
	// bl 0x83523120
	ctx.lr = 0x83CDD5E0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-4632
	ctx.r3.s64 = ctx.r10.s64 + -4632;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDD5EC;
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

__attribute__((alias("__imp__sub_83CDD5FC"))) PPC_WEAK_FUNC(sub_83CDD5FC);
PPC_FUNC_IMPL(__imp__sub_83CDD5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD600"))) PPC_WEAK_FUNC(sub_83CDD600);
PPC_FUNC_IMPL(__imp__sub_83CDD600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4616
	ctx.r3.s64 = ctx.r11.s64 + -4616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD60C"))) PPC_WEAK_FUNC(sub_83CDD60C);
PPC_FUNC_IMPL(__imp__sub_83CDD60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD610"))) PPC_WEAK_FUNC(sub_83CDD610);
PPC_FUNC_IMPL(__imp__sub_83CDD610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4608
	ctx.r3.s64 = ctx.r11.s64 + -4608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD61C"))) PPC_WEAK_FUNC(sub_83CDD61C);
PPC_FUNC_IMPL(__imp__sub_83CDD61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD620"))) PPC_WEAK_FUNC(sub_83CDD620);
PPC_FUNC_IMPL(__imp__sub_83CDD620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4600
	ctx.r3.s64 = ctx.r11.s64 + -4600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD62C"))) PPC_WEAK_FUNC(sub_83CDD62C);
PPC_FUNC_IMPL(__imp__sub_83CDD62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD630"))) PPC_WEAK_FUNC(sub_83CDD630);
PPC_FUNC_IMPL(__imp__sub_83CDD630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4592
	ctx.r3.s64 = ctx.r11.s64 + -4592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD63C"))) PPC_WEAK_FUNC(sub_83CDD63C);
PPC_FUNC_IMPL(__imp__sub_83CDD63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD640"))) PPC_WEAK_FUNC(sub_83CDD640);
PPC_FUNC_IMPL(__imp__sub_83CDD640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4584
	ctx.r3.s64 = ctx.r11.s64 + -4584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD64C"))) PPC_WEAK_FUNC(sub_83CDD64C);
PPC_FUNC_IMPL(__imp__sub_83CDD64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD650"))) PPC_WEAK_FUNC(sub_83CDD650);
PPC_FUNC_IMPL(__imp__sub_83CDD650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4576
	ctx.r3.s64 = ctx.r11.s64 + -4576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD65C"))) PPC_WEAK_FUNC(sub_83CDD65C);
PPC_FUNC_IMPL(__imp__sub_83CDD65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD660"))) PPC_WEAK_FUNC(sub_83CDD660);
PPC_FUNC_IMPL(__imp__sub_83CDD660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4568
	ctx.r3.s64 = ctx.r11.s64 + -4568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD66C"))) PPC_WEAK_FUNC(sub_83CDD66C);
PPC_FUNC_IMPL(__imp__sub_83CDD66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD670"))) PPC_WEAK_FUNC(sub_83CDD670);
PPC_FUNC_IMPL(__imp__sub_83CDD670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4560
	ctx.r3.s64 = ctx.r11.s64 + -4560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD67C"))) PPC_WEAK_FUNC(sub_83CDD67C);
PPC_FUNC_IMPL(__imp__sub_83CDD67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD680"))) PPC_WEAK_FUNC(sub_83CDD680);
PPC_FUNC_IMPL(__imp__sub_83CDD680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4552
	ctx.r3.s64 = ctx.r11.s64 + -4552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD68C"))) PPC_WEAK_FUNC(sub_83CDD68C);
PPC_FUNC_IMPL(__imp__sub_83CDD68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD690"))) PPC_WEAK_FUNC(sub_83CDD690);
PPC_FUNC_IMPL(__imp__sub_83CDD690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4544
	ctx.r3.s64 = ctx.r11.s64 + -4544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD69C"))) PPC_WEAK_FUNC(sub_83CDD69C);
PPC_FUNC_IMPL(__imp__sub_83CDD69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD6A0"))) PPC_WEAK_FUNC(sub_83CDD6A0);
PPC_FUNC_IMPL(__imp__sub_83CDD6A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4536
	ctx.r3.s64 = ctx.r11.s64 + -4536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD6AC"))) PPC_WEAK_FUNC(sub_83CDD6AC);
PPC_FUNC_IMPL(__imp__sub_83CDD6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD6B0"))) PPC_WEAK_FUNC(sub_83CDD6B0);
PPC_FUNC_IMPL(__imp__sub_83CDD6B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4528
	ctx.r3.s64 = ctx.r11.s64 + -4528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD6BC"))) PPC_WEAK_FUNC(sub_83CDD6BC);
PPC_FUNC_IMPL(__imp__sub_83CDD6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD6C0"))) PPC_WEAK_FUNC(sub_83CDD6C0);
PPC_FUNC_IMPL(__imp__sub_83CDD6C0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,27968
	ctx.r7.s64 = ctx.r8.s64 + 27968;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,27968(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27968);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,27968(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27968, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDD6E8"))) PPC_WEAK_FUNC(sub_83CDD6E8);
PPC_FUNC_IMPL(__imp__sub_83CDD6E8) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,27952
	ctx.r3.s64 = ctx.r11.s64 + 27952;
	// bl 0x83523120
	ctx.lr = 0x83CDD700;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-4520
	ctx.r3.s64 = ctx.r10.s64 + -4520;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDD70C;
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

__attribute__((alias("__imp__sub_83CDD71C"))) PPC_WEAK_FUNC(sub_83CDD71C);
PPC_FUNC_IMPL(__imp__sub_83CDD71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD720"))) PPC_WEAK_FUNC(sub_83CDD720);
PPC_FUNC_IMPL(__imp__sub_83CDD720) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,13360
	ctx.r6.s64 = ctx.r7.s64 + 13360;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,13276(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 13276);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,27968(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 27968);
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
	// std r9,13360(r7)
	PPC_STORE_U64(ctx.r7.u32 + 13360, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDD768"))) PPC_WEAK_FUNC(sub_83CDD768);
PPC_FUNC_IMPL(__imp__sub_83CDD768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4504
	ctx.r3.s64 = ctx.r11.s64 + -4504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD774"))) PPC_WEAK_FUNC(sub_83CDD774);
PPC_FUNC_IMPL(__imp__sub_83CDD774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD778"))) PPC_WEAK_FUNC(sub_83CDD778);
PPC_FUNC_IMPL(__imp__sub_83CDD778) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,27976
	ctx.r3.s64 = ctx.r11.s64 + 27976;
	// bl 0x8259af80
	ctx.lr = 0x83CDD790;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-4488
	ctx.r3.s64 = ctx.r10.s64 + -4488;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDD79C;
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

__attribute__((alias("__imp__sub_83CDD7AC"))) PPC_WEAK_FUNC(sub_83CDD7AC);
PPC_FUNC_IMPL(__imp__sub_83CDD7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD7B0"))) PPC_WEAK_FUNC(sub_83CDD7B0);
PPC_FUNC_IMPL(__imp__sub_83CDD7B0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,27956
	ctx.r11.s64 = ctx.r8.s64 + 27956;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,13324(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13324);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-4496
	ctx.r3.s64 = ctx.r6.s64 + -4496;
	// stw r10,27956(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27956, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD7E0"))) PPC_WEAK_FUNC(sub_83CDD7E0);
PPC_FUNC_IMPL(__imp__sub_83CDD7E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4480
	ctx.r3.s64 = ctx.r11.s64 + -4480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD7EC"))) PPC_WEAK_FUNC(sub_83CDD7EC);
PPC_FUNC_IMPL(__imp__sub_83CDD7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD7F0"))) PPC_WEAK_FUNC(sub_83CDD7F0);
PPC_FUNC_IMPL(__imp__sub_83CDD7F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4472
	ctx.r3.s64 = ctx.r11.s64 + -4472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD7FC"))) PPC_WEAK_FUNC(sub_83CDD7FC);
PPC_FUNC_IMPL(__imp__sub_83CDD7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD800"))) PPC_WEAK_FUNC(sub_83CDD800);
PPC_FUNC_IMPL(__imp__sub_83CDD800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4464
	ctx.r3.s64 = ctx.r11.s64 + -4464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD80C"))) PPC_WEAK_FUNC(sub_83CDD80C);
PPC_FUNC_IMPL(__imp__sub_83CDD80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD810"))) PPC_WEAK_FUNC(sub_83CDD810);
PPC_FUNC_IMPL(__imp__sub_83CDD810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4456
	ctx.r3.s64 = ctx.r11.s64 + -4456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD81C"))) PPC_WEAK_FUNC(sub_83CDD81C);
PPC_FUNC_IMPL(__imp__sub_83CDD81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD820"))) PPC_WEAK_FUNC(sub_83CDD820);
PPC_FUNC_IMPL(__imp__sub_83CDD820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4448
	ctx.r3.s64 = ctx.r11.s64 + -4448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD82C"))) PPC_WEAK_FUNC(sub_83CDD82C);
PPC_FUNC_IMPL(__imp__sub_83CDD82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD830"))) PPC_WEAK_FUNC(sub_83CDD830);
PPC_FUNC_IMPL(__imp__sub_83CDD830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4440
	ctx.r3.s64 = ctx.r11.s64 + -4440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD83C"))) PPC_WEAK_FUNC(sub_83CDD83C);
PPC_FUNC_IMPL(__imp__sub_83CDD83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD840"))) PPC_WEAK_FUNC(sub_83CDD840);
PPC_FUNC_IMPL(__imp__sub_83CDD840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4432
	ctx.r3.s64 = ctx.r11.s64 + -4432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD84C"))) PPC_WEAK_FUNC(sub_83CDD84C);
PPC_FUNC_IMPL(__imp__sub_83CDD84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD850"))) PPC_WEAK_FUNC(sub_83CDD850);
PPC_FUNC_IMPL(__imp__sub_83CDD850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4424
	ctx.r3.s64 = ctx.r11.s64 + -4424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD85C"))) PPC_WEAK_FUNC(sub_83CDD85C);
PPC_FUNC_IMPL(__imp__sub_83CDD85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD860"))) PPC_WEAK_FUNC(sub_83CDD860);
PPC_FUNC_IMPL(__imp__sub_83CDD860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4416
	ctx.r3.s64 = ctx.r11.s64 + -4416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD86C"))) PPC_WEAK_FUNC(sub_83CDD86C);
PPC_FUNC_IMPL(__imp__sub_83CDD86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD870"))) PPC_WEAK_FUNC(sub_83CDD870);
PPC_FUNC_IMPL(__imp__sub_83CDD870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4408
	ctx.r3.s64 = ctx.r11.s64 + -4408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD87C"))) PPC_WEAK_FUNC(sub_83CDD87C);
PPC_FUNC_IMPL(__imp__sub_83CDD87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD880"))) PPC_WEAK_FUNC(sub_83CDD880);
PPC_FUNC_IMPL(__imp__sub_83CDD880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4400
	ctx.r3.s64 = ctx.r11.s64 + -4400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD88C"))) PPC_WEAK_FUNC(sub_83CDD88C);
PPC_FUNC_IMPL(__imp__sub_83CDD88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD890"))) PPC_WEAK_FUNC(sub_83CDD890);
PPC_FUNC_IMPL(__imp__sub_83CDD890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4392
	ctx.r3.s64 = ctx.r11.s64 + -4392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD89C"))) PPC_WEAK_FUNC(sub_83CDD89C);
PPC_FUNC_IMPL(__imp__sub_83CDD89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD8A0"))) PPC_WEAK_FUNC(sub_83CDD8A0);
PPC_FUNC_IMPL(__imp__sub_83CDD8A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,28336
	ctx.r7.s64 = ctx.r8.s64 + 28336;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,28336(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28336);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,28336(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28336, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDD8C8"))) PPC_WEAK_FUNC(sub_83CDD8C8);
PPC_FUNC_IMPL(__imp__sub_83CDD8C8) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,28320
	ctx.r3.s64 = ctx.r11.s64 + 28320;
	// bl 0x83523120
	ctx.lr = 0x83CDD8E0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-4384
	ctx.r3.s64 = ctx.r10.s64 + -4384;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDD8EC;
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

__attribute__((alias("__imp__sub_83CDD8FC"))) PPC_WEAK_FUNC(sub_83CDD8FC);
PPC_FUNC_IMPL(__imp__sub_83CDD8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD900"))) PPC_WEAK_FUNC(sub_83CDD900);
PPC_FUNC_IMPL(__imp__sub_83CDD900) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,13504
	ctx.r6.s64 = ctx.r7.s64 + 13504;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,13420(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 13420);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,28336(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28336);
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
	// std r9,13504(r7)
	PPC_STORE_U64(ctx.r7.u32 + 13504, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDD948"))) PPC_WEAK_FUNC(sub_83CDD948);
PPC_FUNC_IMPL(__imp__sub_83CDD948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4368
	ctx.r3.s64 = ctx.r11.s64 + -4368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD954"))) PPC_WEAK_FUNC(sub_83CDD954);
PPC_FUNC_IMPL(__imp__sub_83CDD954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD958"))) PPC_WEAK_FUNC(sub_83CDD958);
PPC_FUNC_IMPL(__imp__sub_83CDD958) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,28344
	ctx.r3.s64 = ctx.r11.s64 + 28344;
	// bl 0x8259af80
	ctx.lr = 0x83CDD970;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-4352
	ctx.r3.s64 = ctx.r10.s64 + -4352;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDD97C;
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

__attribute__((alias("__imp__sub_83CDD98C"))) PPC_WEAK_FUNC(sub_83CDD98C);
PPC_FUNC_IMPL(__imp__sub_83CDD98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD990"))) PPC_WEAK_FUNC(sub_83CDD990);
PPC_FUNC_IMPL(__imp__sub_83CDD990) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,28324
	ctx.r11.s64 = ctx.r8.s64 + 28324;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,13468(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13468);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-4360
	ctx.r3.s64 = ctx.r6.s64 + -4360;
	// stw r10,28324(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28324, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD9C0"))) PPC_WEAK_FUNC(sub_83CDD9C0);
PPC_FUNC_IMPL(__imp__sub_83CDD9C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4344
	ctx.r3.s64 = ctx.r11.s64 + -4344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD9CC"))) PPC_WEAK_FUNC(sub_83CDD9CC);
PPC_FUNC_IMPL(__imp__sub_83CDD9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD9D0"))) PPC_WEAK_FUNC(sub_83CDD9D0);
PPC_FUNC_IMPL(__imp__sub_83CDD9D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4336
	ctx.r3.s64 = ctx.r11.s64 + -4336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD9DC"))) PPC_WEAK_FUNC(sub_83CDD9DC);
PPC_FUNC_IMPL(__imp__sub_83CDD9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD9E0"))) PPC_WEAK_FUNC(sub_83CDD9E0);
PPC_FUNC_IMPL(__imp__sub_83CDD9E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4328
	ctx.r3.s64 = ctx.r11.s64 + -4328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD9EC"))) PPC_WEAK_FUNC(sub_83CDD9EC);
PPC_FUNC_IMPL(__imp__sub_83CDD9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDD9F0"))) PPC_WEAK_FUNC(sub_83CDD9F0);
PPC_FUNC_IMPL(__imp__sub_83CDD9F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4320
	ctx.r3.s64 = ctx.r11.s64 + -4320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDD9FC"))) PPC_WEAK_FUNC(sub_83CDD9FC);
PPC_FUNC_IMPL(__imp__sub_83CDD9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDDA00"))) PPC_WEAK_FUNC(sub_83CDDA00);
PPC_FUNC_IMPL(__imp__sub_83CDDA00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4312
	ctx.r3.s64 = ctx.r11.s64 + -4312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDDA0C"))) PPC_WEAK_FUNC(sub_83CDDA0C);
PPC_FUNC_IMPL(__imp__sub_83CDDA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDDA10"))) PPC_WEAK_FUNC(sub_83CDDA10);
PPC_FUNC_IMPL(__imp__sub_83CDDA10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4304
	ctx.r3.s64 = ctx.r11.s64 + -4304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDDA1C"))) PPC_WEAK_FUNC(sub_83CDDA1C);
PPC_FUNC_IMPL(__imp__sub_83CDDA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDDA20"))) PPC_WEAK_FUNC(sub_83CDDA20);
PPC_FUNC_IMPL(__imp__sub_83CDDA20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4296
	ctx.r3.s64 = ctx.r11.s64 + -4296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDDA2C"))) PPC_WEAK_FUNC(sub_83CDDA2C);
PPC_FUNC_IMPL(__imp__sub_83CDDA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDDA30"))) PPC_WEAK_FUNC(sub_83CDDA30);
PPC_FUNC_IMPL(__imp__sub_83CDDA30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4288
	ctx.r3.s64 = ctx.r11.s64 + -4288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDDA3C"))) PPC_WEAK_FUNC(sub_83CDDA3C);
PPC_FUNC_IMPL(__imp__sub_83CDDA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDDA40"))) PPC_WEAK_FUNC(sub_83CDDA40);
PPC_FUNC_IMPL(__imp__sub_83CDDA40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4280
	ctx.r3.s64 = ctx.r11.s64 + -4280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDDA4C"))) PPC_WEAK_FUNC(sub_83CDDA4C);
PPC_FUNC_IMPL(__imp__sub_83CDDA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDDA50"))) PPC_WEAK_FUNC(sub_83CDDA50);
PPC_FUNC_IMPL(__imp__sub_83CDDA50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4272
	ctx.r3.s64 = ctx.r11.s64 + -4272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDDA5C"))) PPC_WEAK_FUNC(sub_83CDDA5C);
PPC_FUNC_IMPL(__imp__sub_83CDDA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDDA60"))) PPC_WEAK_FUNC(sub_83CDDA60);
PPC_FUNC_IMPL(__imp__sub_83CDDA60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4264
	ctx.r3.s64 = ctx.r11.s64 + -4264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDDA6C"))) PPC_WEAK_FUNC(sub_83CDDA6C);
PPC_FUNC_IMPL(__imp__sub_83CDDA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDDA70"))) PPC_WEAK_FUNC(sub_83CDDA70);
PPC_FUNC_IMPL(__imp__sub_83CDDA70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4256
	ctx.r3.s64 = ctx.r11.s64 + -4256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDDA7C"))) PPC_WEAK_FUNC(sub_83CDDA7C);
PPC_FUNC_IMPL(__imp__sub_83CDDA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDDA80"))) PPC_WEAK_FUNC(sub_83CDDA80);
PPC_FUNC_IMPL(__imp__sub_83CDDA80) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,28704
	ctx.r7.s64 = ctx.r8.s64 + 28704;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,28704(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28704);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,28704(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28704, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDDAA8"))) PPC_WEAK_FUNC(sub_83CDDAA8);
PPC_FUNC_IMPL(__imp__sub_83CDDAA8) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,28688
	ctx.r3.s64 = ctx.r11.s64 + 28688;
	// bl 0x83523120
	ctx.lr = 0x83CDDAC0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-4248
	ctx.r3.s64 = ctx.r10.s64 + -4248;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDDACC;
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

__attribute__((alias("__imp__sub_83CDDADC"))) PPC_WEAK_FUNC(sub_83CDDADC);
PPC_FUNC_IMPL(__imp__sub_83CDDADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDDAE0"))) PPC_WEAK_FUNC(sub_83CDDAE0);
PPC_FUNC_IMPL(__imp__sub_83CDDAE0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,13672
	ctx.r6.s64 = ctx.r7.s64 + 13672;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,13588(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 13588);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,28704(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28704);
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
	// std r9,13672(r7)
	PPC_STORE_U64(ctx.r7.u32 + 13672, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDDB28"))) PPC_WEAK_FUNC(sub_83CDDB28);
PPC_FUNC_IMPL(__imp__sub_83CDDB28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4232
	ctx.r3.s64 = ctx.r11.s64 + -4232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDDB34"))) PPC_WEAK_FUNC(sub_83CDDB34);
PPC_FUNC_IMPL(__imp__sub_83CDDB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDDB38"))) PPC_WEAK_FUNC(sub_83CDDB38);
PPC_FUNC_IMPL(__imp__sub_83CDDB38) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,28712
	ctx.r3.s64 = ctx.r11.s64 + 28712;
	// bl 0x8259af80
	ctx.lr = 0x83CDDB50;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-4216
	ctx.r3.s64 = ctx.r10.s64 + -4216;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDDB5C;
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

__attribute__((alias("__imp__sub_83CDDB6C"))) PPC_WEAK_FUNC(sub_83CDDB6C);
PPC_FUNC_IMPL(__imp__sub_83CDDB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDDB70"))) PPC_WEAK_FUNC(sub_83CDDB70);
PPC_FUNC_IMPL(__imp__sub_83CDDB70) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,28692
	ctx.r11.s64 = ctx.r8.s64 + 28692;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,13636(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13636);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-4224
	ctx.r3.s64 = ctx.r6.s64 + -4224;
	// stw r10,28692(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28692, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDDBA0"))) PPC_WEAK_FUNC(sub_83CDDBA0);
PPC_FUNC_IMPL(__imp__sub_83CDDBA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4208
	ctx.r3.s64 = ctx.r11.s64 + -4208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDDBAC"))) PPC_WEAK_FUNC(sub_83CDDBAC);
PPC_FUNC_IMPL(__imp__sub_83CDDBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDDBB0"))) PPC_WEAK_FUNC(sub_83CDDBB0);
PPC_FUNC_IMPL(__imp__sub_83CDDBB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4200
	ctx.r3.s64 = ctx.r11.s64 + -4200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDDBBC"))) PPC_WEAK_FUNC(sub_83CDDBBC);
PPC_FUNC_IMPL(__imp__sub_83CDDBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDDBC0"))) PPC_WEAK_FUNC(sub_83CDDBC0);
PPC_FUNC_IMPL(__imp__sub_83CDDBC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4192
	ctx.r3.s64 = ctx.r11.s64 + -4192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDDBCC"))) PPC_WEAK_FUNC(sub_83CDDBCC);
PPC_FUNC_IMPL(__imp__sub_83CDDBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDDBD0"))) PPC_WEAK_FUNC(sub_83CDDBD0);
PPC_FUNC_IMPL(__imp__sub_83CDDBD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4184
	ctx.r3.s64 = ctx.r11.s64 + -4184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDDBDC"))) PPC_WEAK_FUNC(sub_83CDDBDC);
PPC_FUNC_IMPL(__imp__sub_83CDDBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDDBE0"))) PPC_WEAK_FUNC(sub_83CDDBE0);
PPC_FUNC_IMPL(__imp__sub_83CDDBE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4176
	ctx.r3.s64 = ctx.r11.s64 + -4176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDDBEC"))) PPC_WEAK_FUNC(sub_83CDDBEC);
PPC_FUNC_IMPL(__imp__sub_83CDDBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDDBF0"))) PPC_WEAK_FUNC(sub_83CDDBF0);
PPC_FUNC_IMPL(__imp__sub_83CDDBF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4168
	ctx.r3.s64 = ctx.r11.s64 + -4168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDDBFC"))) PPC_WEAK_FUNC(sub_83CDDBFC);
PPC_FUNC_IMPL(__imp__sub_83CDDBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDDC00"))) PPC_WEAK_FUNC(sub_83CDDC00);
PPC_FUNC_IMPL(__imp__sub_83CDDC00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4160
	ctx.r3.s64 = ctx.r11.s64 + -4160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDDC0C"))) PPC_WEAK_FUNC(sub_83CDDC0C);
PPC_FUNC_IMPL(__imp__sub_83CDDC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDDC10"))) PPC_WEAK_FUNC(sub_83CDDC10);
PPC_FUNC_IMPL(__imp__sub_83CDDC10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4152
	ctx.r3.s64 = ctx.r11.s64 + -4152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDDC1C"))) PPC_WEAK_FUNC(sub_83CDDC1C);
PPC_FUNC_IMPL(__imp__sub_83CDDC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDDC20"))) PPC_WEAK_FUNC(sub_83CDDC20);
PPC_FUNC_IMPL(__imp__sub_83CDDC20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4144
	ctx.r3.s64 = ctx.r11.s64 + -4144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDDC2C"))) PPC_WEAK_FUNC(sub_83CDDC2C);
PPC_FUNC_IMPL(__imp__sub_83CDDC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDDC30"))) PPC_WEAK_FUNC(sub_83CDDC30);
PPC_FUNC_IMPL(__imp__sub_83CDDC30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4136
	ctx.r3.s64 = ctx.r11.s64 + -4136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDDC3C"))) PPC_WEAK_FUNC(sub_83CDDC3C);
PPC_FUNC_IMPL(__imp__sub_83CDDC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDDC40"))) PPC_WEAK_FUNC(sub_83CDDC40);
PPC_FUNC_IMPL(__imp__sub_83CDDC40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4128
	ctx.r3.s64 = ctx.r11.s64 + -4128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDDC4C"))) PPC_WEAK_FUNC(sub_83CDDC4C);
PPC_FUNC_IMPL(__imp__sub_83CDDC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDDC50"))) PPC_WEAK_FUNC(sub_83CDDC50);
PPC_FUNC_IMPL(__imp__sub_83CDDC50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4120
	ctx.r3.s64 = ctx.r11.s64 + -4120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDDC5C"))) PPC_WEAK_FUNC(sub_83CDDC5C);
PPC_FUNC_IMPL(__imp__sub_83CDDC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDDC60"))) PPC_WEAK_FUNC(sub_83CDDC60);
PPC_FUNC_IMPL(__imp__sub_83CDDC60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,29060
	ctx.r7.s64 = ctx.r8.s64 + 29060;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,29060(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 29060);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,29060(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29060, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDDC88"))) PPC_WEAK_FUNC(sub_83CDDC88);
PPC_FUNC_IMPL(__imp__sub_83CDDC88) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,29056
	ctx.r3.s64 = ctx.r11.s64 + 29056;
	// bl 0x83523120
	ctx.lr = 0x83CDDCA0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-4112
	ctx.r3.s64 = ctx.r10.s64 + -4112;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDDCAC;
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

__attribute__((alias("__imp__sub_83CDDCBC"))) PPC_WEAK_FUNC(sub_83CDDCBC);
PPC_FUNC_IMPL(__imp__sub_83CDDCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDDCC0"))) PPC_WEAK_FUNC(sub_83CDDCC0);
PPC_FUNC_IMPL(__imp__sub_83CDDCC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4096
	ctx.r3.s64 = ctx.r11.s64 + -4096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDDCCC"))) PPC_WEAK_FUNC(sub_83CDDCCC);
PPC_FUNC_IMPL(__imp__sub_83CDDCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDDCD0"))) PPC_WEAK_FUNC(sub_83CDDCD0);
PPC_FUNC_IMPL(__imp__sub_83CDDCD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4088
	ctx.r3.s64 = ctx.r11.s64 + -4088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDDCDC"))) PPC_WEAK_FUNC(sub_83CDDCDC);
PPC_FUNC_IMPL(__imp__sub_83CDDCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDDCE0"))) PPC_WEAK_FUNC(sub_83CDDCE0);
PPC_FUNC_IMPL(__imp__sub_83CDDCE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4080
	ctx.r3.s64 = ctx.r11.s64 + -4080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDDCEC"))) PPC_WEAK_FUNC(sub_83CDDCEC);
PPC_FUNC_IMPL(__imp__sub_83CDDCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDDCF0"))) PPC_WEAK_FUNC(sub_83CDDCF0);
PPC_FUNC_IMPL(__imp__sub_83CDDCF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4072
	ctx.r3.s64 = ctx.r11.s64 + -4072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDDCFC"))) PPC_WEAK_FUNC(sub_83CDDCFC);
PPC_FUNC_IMPL(__imp__sub_83CDDCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDDD00"))) PPC_WEAK_FUNC(sub_83CDDD00);
PPC_FUNC_IMPL(__imp__sub_83CDDD00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4064
	ctx.r3.s64 = ctx.r11.s64 + -4064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDDD0C"))) PPC_WEAK_FUNC(sub_83CDDD0C);
PPC_FUNC_IMPL(__imp__sub_83CDDD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDDD10"))) PPC_WEAK_FUNC(sub_83CDDD10);
PPC_FUNC_IMPL(__imp__sub_83CDDD10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4056
	ctx.r3.s64 = ctx.r11.s64 + -4056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDDD1C"))) PPC_WEAK_FUNC(sub_83CDDD1C);
PPC_FUNC_IMPL(__imp__sub_83CDDD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDDD20"))) PPC_WEAK_FUNC(sub_83CDDD20);
PPC_FUNC_IMPL(__imp__sub_83CDDD20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4048
	ctx.r3.s64 = ctx.r11.s64 + -4048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDDD2C"))) PPC_WEAK_FUNC(sub_83CDDD2C);
PPC_FUNC_IMPL(__imp__sub_83CDDD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDDD30"))) PPC_WEAK_FUNC(sub_83CDDD30);
PPC_FUNC_IMPL(__imp__sub_83CDDD30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4040
	ctx.r3.s64 = ctx.r11.s64 + -4040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDDD3C"))) PPC_WEAK_FUNC(sub_83CDDD3C);
PPC_FUNC_IMPL(__imp__sub_83CDDD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDDD40"))) PPC_WEAK_FUNC(sub_83CDDD40);
PPC_FUNC_IMPL(__imp__sub_83CDDD40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4032
	ctx.r3.s64 = ctx.r11.s64 + -4032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDDD4C"))) PPC_WEAK_FUNC(sub_83CDDD4C);
PPC_FUNC_IMPL(__imp__sub_83CDDD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDDD50"))) PPC_WEAK_FUNC(sub_83CDDD50);
PPC_FUNC_IMPL(__imp__sub_83CDDD50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4024
	ctx.r3.s64 = ctx.r11.s64 + -4024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDDD5C"))) PPC_WEAK_FUNC(sub_83CDDD5C);
PPC_FUNC_IMPL(__imp__sub_83CDDD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDDD60"))) PPC_WEAK_FUNC(sub_83CDDD60);
PPC_FUNC_IMPL(__imp__sub_83CDDD60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4016
	ctx.r3.s64 = ctx.r11.s64 + -4016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDDD6C"))) PPC_WEAK_FUNC(sub_83CDDD6C);
PPC_FUNC_IMPL(__imp__sub_83CDDD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDDD70"))) PPC_WEAK_FUNC(sub_83CDDD70);
PPC_FUNC_IMPL(__imp__sub_83CDDD70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-4008
	ctx.r3.s64 = ctx.r11.s64 + -4008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDDD7C"))) PPC_WEAK_FUNC(sub_83CDDD7C);
PPC_FUNC_IMPL(__imp__sub_83CDDD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDDD80"))) PPC_WEAK_FUNC(sub_83CDDD80);
PPC_FUNC_IMPL(__imp__sub_83CDDD80) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,29088
	ctx.r7.s64 = ctx.r8.s64 + 29088;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,29088(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 29088);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,29088(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29088, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDDDA8"))) PPC_WEAK_FUNC(sub_83CDDDA8);
PPC_FUNC_IMPL(__imp__sub_83CDDDA8) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,29072
	ctx.r3.s64 = ctx.r11.s64 + 29072;
	// bl 0x83523120
	ctx.lr = 0x83CDDDC0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-4000
	ctx.r3.s64 = ctx.r10.s64 + -4000;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDDDCC;
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

__attribute__((alias("__imp__sub_83CDDDDC"))) PPC_WEAK_FUNC(sub_83CDDDDC);
PPC_FUNC_IMPL(__imp__sub_83CDDDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDDDE0"))) PPC_WEAK_FUNC(sub_83CDDDE0);
PPC_FUNC_IMPL(__imp__sub_83CDDDE0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,13936
	ctx.r6.s64 = ctx.r7.s64 + 13936;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,13852(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 13852);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,29088(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29088);
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
	// std r9,13936(r7)
	PPC_STORE_U64(ctx.r7.u32 + 13936, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDDE28"))) PPC_WEAK_FUNC(sub_83CDDE28);
PPC_FUNC_IMPL(__imp__sub_83CDDE28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-3984
	ctx.r3.s64 = ctx.r11.s64 + -3984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDDE34"))) PPC_WEAK_FUNC(sub_83CDDE34);
PPC_FUNC_IMPL(__imp__sub_83CDDE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDDE38"))) PPC_WEAK_FUNC(sub_83CDDE38);
PPC_FUNC_IMPL(__imp__sub_83CDDE38) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,29096
	ctx.r3.s64 = ctx.r11.s64 + 29096;
	// bl 0x8259af80
	ctx.lr = 0x83CDDE50;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-3968
	ctx.r3.s64 = ctx.r10.s64 + -3968;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDDE5C;
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

__attribute__((alias("__imp__sub_83CDDE6C"))) PPC_WEAK_FUNC(sub_83CDDE6C);
PPC_FUNC_IMPL(__imp__sub_83CDDE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDDE70"))) PPC_WEAK_FUNC(sub_83CDDE70);
PPC_FUNC_IMPL(__imp__sub_83CDDE70) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,29076
	ctx.r11.s64 = ctx.r8.s64 + 29076;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,13900(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13900);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-3976
	ctx.r3.s64 = ctx.r6.s64 + -3976;
	// stw r10,29076(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29076, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

