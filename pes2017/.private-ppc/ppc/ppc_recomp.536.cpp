#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83B76D4C"))) PPC_WEAK_FUNC(sub_83B76D4C);
PPC_FUNC_IMPL(__imp__sub_83B76D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B76D50"))) PPC_WEAK_FUNC(sub_83B76D50);
PPC_FUNC_IMPL(__imp__sub_83B76D50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,25672
	ctx.r3.s64 = ctx.r11.s64 + 25672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B76D5C"))) PPC_WEAK_FUNC(sub_83B76D5C);
PPC_FUNC_IMPL(__imp__sub_83B76D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B76D60"))) PPC_WEAK_FUNC(sub_83B76D60);
PPC_FUNC_IMPL(__imp__sub_83B76D60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,25680
	ctx.r3.s64 = ctx.r11.s64 + 25680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B76D6C"))) PPC_WEAK_FUNC(sub_83B76D6C);
PPC_FUNC_IMPL(__imp__sub_83B76D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B76D70"))) PPC_WEAK_FUNC(sub_83B76D70);
PPC_FUNC_IMPL(__imp__sub_83B76D70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,25688
	ctx.r3.s64 = ctx.r11.s64 + 25688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B76D7C"))) PPC_WEAK_FUNC(sub_83B76D7C);
PPC_FUNC_IMPL(__imp__sub_83B76D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B76D80"))) PPC_WEAK_FUNC(sub_83B76D80);
PPC_FUNC_IMPL(__imp__sub_83B76D80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,25696
	ctx.r3.s64 = ctx.r11.s64 + 25696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B76D8C"))) PPC_WEAK_FUNC(sub_83B76D8C);
PPC_FUNC_IMPL(__imp__sub_83B76D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B76D90"))) PPC_WEAK_FUNC(sub_83B76D90);
PPC_FUNC_IMPL(__imp__sub_83B76D90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,25704
	ctx.r3.s64 = ctx.r11.s64 + 25704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B76D9C"))) PPC_WEAK_FUNC(sub_83B76D9C);
PPC_FUNC_IMPL(__imp__sub_83B76D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B76DA0"))) PPC_WEAK_FUNC(sub_83B76DA0);
PPC_FUNC_IMPL(__imp__sub_83B76DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,25712
	ctx.r3.s64 = ctx.r11.s64 + 25712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B76DAC"))) PPC_WEAK_FUNC(sub_83B76DAC);
PPC_FUNC_IMPL(__imp__sub_83B76DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B76DB0"))) PPC_WEAK_FUNC(sub_83B76DB0);
PPC_FUNC_IMPL(__imp__sub_83B76DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,25720
	ctx.r3.s64 = ctx.r11.s64 + 25720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B76DBC"))) PPC_WEAK_FUNC(sub_83B76DBC);
PPC_FUNC_IMPL(__imp__sub_83B76DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B76DC0"))) PPC_WEAK_FUNC(sub_83B76DC0);
PPC_FUNC_IMPL(__imp__sub_83B76DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14892
	ctx.r7.s64 = ctx.r8.s64 + -14892;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14892(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14892);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14892(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14892, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B76DE8"))) PPC_WEAK_FUNC(sub_83B76DE8);
PPC_FUNC_IMPL(__imp__sub_83B76DE8) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-14896
	ctx.r3.s64 = ctx.r11.s64 + -14896;
	// bl 0x83523120
	ctx.lr = 0x83B76E00;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,25728
	ctx.r3.s64 = ctx.r10.s64 + 25728;
	// bl 0x831cdcc8
	ctx.lr = 0x83B76E0C;
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

__attribute__((alias("__imp__sub_83B76E1C"))) PPC_WEAK_FUNC(sub_83B76E1C);
PPC_FUNC_IMPL(__imp__sub_83B76E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B76E20"))) PPC_WEAK_FUNC(sub_83B76E20);
PPC_FUNC_IMPL(__imp__sub_83B76E20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,25744
	ctx.r3.s64 = ctx.r11.s64 + 25744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B76E2C"))) PPC_WEAK_FUNC(sub_83B76E2C);
PPC_FUNC_IMPL(__imp__sub_83B76E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B76E30"))) PPC_WEAK_FUNC(sub_83B76E30);
PPC_FUNC_IMPL(__imp__sub_83B76E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,25752
	ctx.r3.s64 = ctx.r11.s64 + 25752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B76E3C"))) PPC_WEAK_FUNC(sub_83B76E3C);
PPC_FUNC_IMPL(__imp__sub_83B76E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B76E40"))) PPC_WEAK_FUNC(sub_83B76E40);
PPC_FUNC_IMPL(__imp__sub_83B76E40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,25760
	ctx.r3.s64 = ctx.r11.s64 + 25760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B76E4C"))) PPC_WEAK_FUNC(sub_83B76E4C);
PPC_FUNC_IMPL(__imp__sub_83B76E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B76E50"))) PPC_WEAK_FUNC(sub_83B76E50);
PPC_FUNC_IMPL(__imp__sub_83B76E50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,25768
	ctx.r3.s64 = ctx.r11.s64 + 25768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B76E5C"))) PPC_WEAK_FUNC(sub_83B76E5C);
PPC_FUNC_IMPL(__imp__sub_83B76E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B76E60"))) PPC_WEAK_FUNC(sub_83B76E60);
PPC_FUNC_IMPL(__imp__sub_83B76E60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,25776
	ctx.r3.s64 = ctx.r11.s64 + 25776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B76E6C"))) PPC_WEAK_FUNC(sub_83B76E6C);
PPC_FUNC_IMPL(__imp__sub_83B76E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B76E70"))) PPC_WEAK_FUNC(sub_83B76E70);
PPC_FUNC_IMPL(__imp__sub_83B76E70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,25784
	ctx.r3.s64 = ctx.r11.s64 + 25784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B76E7C"))) PPC_WEAK_FUNC(sub_83B76E7C);
PPC_FUNC_IMPL(__imp__sub_83B76E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B76E80"))) PPC_WEAK_FUNC(sub_83B76E80);
PPC_FUNC_IMPL(__imp__sub_83B76E80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,25792
	ctx.r3.s64 = ctx.r11.s64 + 25792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B76E8C"))) PPC_WEAK_FUNC(sub_83B76E8C);
PPC_FUNC_IMPL(__imp__sub_83B76E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B76E90"))) PPC_WEAK_FUNC(sub_83B76E90);
PPC_FUNC_IMPL(__imp__sub_83B76E90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,25800
	ctx.r3.s64 = ctx.r11.s64 + 25800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B76E9C"))) PPC_WEAK_FUNC(sub_83B76E9C);
PPC_FUNC_IMPL(__imp__sub_83B76E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B76EA0"))) PPC_WEAK_FUNC(sub_83B76EA0);
PPC_FUNC_IMPL(__imp__sub_83B76EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,25808
	ctx.r3.s64 = ctx.r11.s64 + 25808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B76EAC"))) PPC_WEAK_FUNC(sub_83B76EAC);
PPC_FUNC_IMPL(__imp__sub_83B76EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B76EB0"))) PPC_WEAK_FUNC(sub_83B76EB0);
PPC_FUNC_IMPL(__imp__sub_83B76EB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,25816
	ctx.r3.s64 = ctx.r11.s64 + 25816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B76EBC"))) PPC_WEAK_FUNC(sub_83B76EBC);
PPC_FUNC_IMPL(__imp__sub_83B76EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B76EC0"))) PPC_WEAK_FUNC(sub_83B76EC0);
PPC_FUNC_IMPL(__imp__sub_83B76EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,25824
	ctx.r3.s64 = ctx.r11.s64 + 25824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B76ECC"))) PPC_WEAK_FUNC(sub_83B76ECC);
PPC_FUNC_IMPL(__imp__sub_83B76ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B76ED0"))) PPC_WEAK_FUNC(sub_83B76ED0);
PPC_FUNC_IMPL(__imp__sub_83B76ED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,25832
	ctx.r3.s64 = ctx.r11.s64 + 25832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B76EDC"))) PPC_WEAK_FUNC(sub_83B76EDC);
PPC_FUNC_IMPL(__imp__sub_83B76EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B76EE0"))) PPC_WEAK_FUNC(sub_83B76EE0);
PPC_FUNC_IMPL(__imp__sub_83B76EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14860
	ctx.r7.s64 = ctx.r8.s64 + -14860;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14860(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14860);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14860(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14860, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B76F08"))) PPC_WEAK_FUNC(sub_83B76F08);
PPC_FUNC_IMPL(__imp__sub_83B76F08) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-14864
	ctx.r3.s64 = ctx.r11.s64 + -14864;
	// bl 0x83523120
	ctx.lr = 0x83B76F20;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,25840
	ctx.r3.s64 = ctx.r10.s64 + 25840;
	// bl 0x831cdcc8
	ctx.lr = 0x83B76F2C;
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

__attribute__((alias("__imp__sub_83B76F3C"))) PPC_WEAK_FUNC(sub_83B76F3C);
PPC_FUNC_IMPL(__imp__sub_83B76F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B76F40"))) PPC_WEAK_FUNC(sub_83B76F40);
PPC_FUNC_IMPL(__imp__sub_83B76F40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,25856
	ctx.r3.s64 = ctx.r11.s64 + 25856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B76F4C"))) PPC_WEAK_FUNC(sub_83B76F4C);
PPC_FUNC_IMPL(__imp__sub_83B76F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B76F50"))) PPC_WEAK_FUNC(sub_83B76F50);
PPC_FUNC_IMPL(__imp__sub_83B76F50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,25864
	ctx.r3.s64 = ctx.r11.s64 + 25864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B76F5C"))) PPC_WEAK_FUNC(sub_83B76F5C);
PPC_FUNC_IMPL(__imp__sub_83B76F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B76F60"))) PPC_WEAK_FUNC(sub_83B76F60);
PPC_FUNC_IMPL(__imp__sub_83B76F60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,25872
	ctx.r3.s64 = ctx.r11.s64 + 25872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B76F6C"))) PPC_WEAK_FUNC(sub_83B76F6C);
PPC_FUNC_IMPL(__imp__sub_83B76F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B76F70"))) PPC_WEAK_FUNC(sub_83B76F70);
PPC_FUNC_IMPL(__imp__sub_83B76F70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,25880
	ctx.r3.s64 = ctx.r11.s64 + 25880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B76F7C"))) PPC_WEAK_FUNC(sub_83B76F7C);
PPC_FUNC_IMPL(__imp__sub_83B76F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B76F80"))) PPC_WEAK_FUNC(sub_83B76F80);
PPC_FUNC_IMPL(__imp__sub_83B76F80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,25888
	ctx.r3.s64 = ctx.r11.s64 + 25888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B76F8C"))) PPC_WEAK_FUNC(sub_83B76F8C);
PPC_FUNC_IMPL(__imp__sub_83B76F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B76F90"))) PPC_WEAK_FUNC(sub_83B76F90);
PPC_FUNC_IMPL(__imp__sub_83B76F90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,25896
	ctx.r3.s64 = ctx.r11.s64 + 25896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B76F9C"))) PPC_WEAK_FUNC(sub_83B76F9C);
PPC_FUNC_IMPL(__imp__sub_83B76F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B76FA0"))) PPC_WEAK_FUNC(sub_83B76FA0);
PPC_FUNC_IMPL(__imp__sub_83B76FA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,25904
	ctx.r3.s64 = ctx.r11.s64 + 25904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B76FAC"))) PPC_WEAK_FUNC(sub_83B76FAC);
PPC_FUNC_IMPL(__imp__sub_83B76FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B76FB0"))) PPC_WEAK_FUNC(sub_83B76FB0);
PPC_FUNC_IMPL(__imp__sub_83B76FB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,25912
	ctx.r3.s64 = ctx.r11.s64 + 25912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B76FBC"))) PPC_WEAK_FUNC(sub_83B76FBC);
PPC_FUNC_IMPL(__imp__sub_83B76FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B76FC0"))) PPC_WEAK_FUNC(sub_83B76FC0);
PPC_FUNC_IMPL(__imp__sub_83B76FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,25920
	ctx.r3.s64 = ctx.r11.s64 + 25920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B76FCC"))) PPC_WEAK_FUNC(sub_83B76FCC);
PPC_FUNC_IMPL(__imp__sub_83B76FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B76FD0"))) PPC_WEAK_FUNC(sub_83B76FD0);
PPC_FUNC_IMPL(__imp__sub_83B76FD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,25928
	ctx.r3.s64 = ctx.r11.s64 + 25928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B76FDC"))) PPC_WEAK_FUNC(sub_83B76FDC);
PPC_FUNC_IMPL(__imp__sub_83B76FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B76FE0"))) PPC_WEAK_FUNC(sub_83B76FE0);
PPC_FUNC_IMPL(__imp__sub_83B76FE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,25936
	ctx.r3.s64 = ctx.r11.s64 + 25936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B76FEC"))) PPC_WEAK_FUNC(sub_83B76FEC);
PPC_FUNC_IMPL(__imp__sub_83B76FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B76FF0"))) PPC_WEAK_FUNC(sub_83B76FF0);
PPC_FUNC_IMPL(__imp__sub_83B76FF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,25944
	ctx.r3.s64 = ctx.r11.s64 + 25944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B76FFC"))) PPC_WEAK_FUNC(sub_83B76FFC);
PPC_FUNC_IMPL(__imp__sub_83B76FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77000"))) PPC_WEAK_FUNC(sub_83B77000);
PPC_FUNC_IMPL(__imp__sub_83B77000) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14832
	ctx.r7.s64 = ctx.r8.s64 + -14832;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14832(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14832);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14832(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14832, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B77028"))) PPC_WEAK_FUNC(sub_83B77028);
PPC_FUNC_IMPL(__imp__sub_83B77028) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-14836
	ctx.r3.s64 = ctx.r11.s64 + -14836;
	// bl 0x83523120
	ctx.lr = 0x83B77040;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,25952
	ctx.r3.s64 = ctx.r10.s64 + 25952;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7704C;
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

__attribute__((alias("__imp__sub_83B7705C"))) PPC_WEAK_FUNC(sub_83B7705C);
PPC_FUNC_IMPL(__imp__sub_83B7705C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77060"))) PPC_WEAK_FUNC(sub_83B77060);
PPC_FUNC_IMPL(__imp__sub_83B77060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,25968
	ctx.r3.s64 = ctx.r11.s64 + 25968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7706C"))) PPC_WEAK_FUNC(sub_83B7706C);
PPC_FUNC_IMPL(__imp__sub_83B7706C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77070"))) PPC_WEAK_FUNC(sub_83B77070);
PPC_FUNC_IMPL(__imp__sub_83B77070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,25976
	ctx.r3.s64 = ctx.r11.s64 + 25976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7707C"))) PPC_WEAK_FUNC(sub_83B7707C);
PPC_FUNC_IMPL(__imp__sub_83B7707C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77080"))) PPC_WEAK_FUNC(sub_83B77080);
PPC_FUNC_IMPL(__imp__sub_83B77080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,25984
	ctx.r3.s64 = ctx.r11.s64 + 25984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7708C"))) PPC_WEAK_FUNC(sub_83B7708C);
PPC_FUNC_IMPL(__imp__sub_83B7708C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77090"))) PPC_WEAK_FUNC(sub_83B77090);
PPC_FUNC_IMPL(__imp__sub_83B77090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,25992
	ctx.r3.s64 = ctx.r11.s64 + 25992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7709C"))) PPC_WEAK_FUNC(sub_83B7709C);
PPC_FUNC_IMPL(__imp__sub_83B7709C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B770A0"))) PPC_WEAK_FUNC(sub_83B770A0);
PPC_FUNC_IMPL(__imp__sub_83B770A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26000
	ctx.r3.s64 = ctx.r11.s64 + 26000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B770AC"))) PPC_WEAK_FUNC(sub_83B770AC);
PPC_FUNC_IMPL(__imp__sub_83B770AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B770B0"))) PPC_WEAK_FUNC(sub_83B770B0);
PPC_FUNC_IMPL(__imp__sub_83B770B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26008
	ctx.r3.s64 = ctx.r11.s64 + 26008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B770BC"))) PPC_WEAK_FUNC(sub_83B770BC);
PPC_FUNC_IMPL(__imp__sub_83B770BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B770C0"))) PPC_WEAK_FUNC(sub_83B770C0);
PPC_FUNC_IMPL(__imp__sub_83B770C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26016
	ctx.r3.s64 = ctx.r11.s64 + 26016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B770CC"))) PPC_WEAK_FUNC(sub_83B770CC);
PPC_FUNC_IMPL(__imp__sub_83B770CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B770D0"))) PPC_WEAK_FUNC(sub_83B770D0);
PPC_FUNC_IMPL(__imp__sub_83B770D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26024
	ctx.r3.s64 = ctx.r11.s64 + 26024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B770DC"))) PPC_WEAK_FUNC(sub_83B770DC);
PPC_FUNC_IMPL(__imp__sub_83B770DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B770E0"))) PPC_WEAK_FUNC(sub_83B770E0);
PPC_FUNC_IMPL(__imp__sub_83B770E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26032
	ctx.r3.s64 = ctx.r11.s64 + 26032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B770EC"))) PPC_WEAK_FUNC(sub_83B770EC);
PPC_FUNC_IMPL(__imp__sub_83B770EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B770F0"))) PPC_WEAK_FUNC(sub_83B770F0);
PPC_FUNC_IMPL(__imp__sub_83B770F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26040
	ctx.r3.s64 = ctx.r11.s64 + 26040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B770FC"))) PPC_WEAK_FUNC(sub_83B770FC);
PPC_FUNC_IMPL(__imp__sub_83B770FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77100"))) PPC_WEAK_FUNC(sub_83B77100);
PPC_FUNC_IMPL(__imp__sub_83B77100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26048
	ctx.r3.s64 = ctx.r11.s64 + 26048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7710C"))) PPC_WEAK_FUNC(sub_83B7710C);
PPC_FUNC_IMPL(__imp__sub_83B7710C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77110"))) PPC_WEAK_FUNC(sub_83B77110);
PPC_FUNC_IMPL(__imp__sub_83B77110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26056
	ctx.r3.s64 = ctx.r11.s64 + 26056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7711C"))) PPC_WEAK_FUNC(sub_83B7711C);
PPC_FUNC_IMPL(__imp__sub_83B7711C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77120"))) PPC_WEAK_FUNC(sub_83B77120);
PPC_FUNC_IMPL(__imp__sub_83B77120) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-14824
	ctx.r3.s64 = ctx.r11.s64 + -14824;
	// bl 0x83523120
	ctx.lr = 0x83B77138;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,26064
	ctx.r3.s64 = ctx.r10.s64 + 26064;
	// bl 0x831cdcc8
	ctx.lr = 0x83B77144;
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

__attribute__((alias("__imp__sub_83B77154"))) PPC_WEAK_FUNC(sub_83B77154);
PPC_FUNC_IMPL(__imp__sub_83B77154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77158"))) PPC_WEAK_FUNC(sub_83B77158);
PPC_FUNC_IMPL(__imp__sub_83B77158) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14820
	ctx.r7.s64 = ctx.r8.s64 + -14820;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14820(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14820);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14820(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14820, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B77180"))) PPC_WEAK_FUNC(sub_83B77180);
PPC_FUNC_IMPL(__imp__sub_83B77180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26080
	ctx.r3.s64 = ctx.r11.s64 + 26080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7718C"))) PPC_WEAK_FUNC(sub_83B7718C);
PPC_FUNC_IMPL(__imp__sub_83B7718C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77190"))) PPC_WEAK_FUNC(sub_83B77190);
PPC_FUNC_IMPL(__imp__sub_83B77190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26088
	ctx.r3.s64 = ctx.r11.s64 + 26088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7719C"))) PPC_WEAK_FUNC(sub_83B7719C);
PPC_FUNC_IMPL(__imp__sub_83B7719C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B771A0"))) PPC_WEAK_FUNC(sub_83B771A0);
PPC_FUNC_IMPL(__imp__sub_83B771A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26096
	ctx.r3.s64 = ctx.r11.s64 + 26096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B771AC"))) PPC_WEAK_FUNC(sub_83B771AC);
PPC_FUNC_IMPL(__imp__sub_83B771AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B771B0"))) PPC_WEAK_FUNC(sub_83B771B0);
PPC_FUNC_IMPL(__imp__sub_83B771B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26104
	ctx.r3.s64 = ctx.r11.s64 + 26104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B771BC"))) PPC_WEAK_FUNC(sub_83B771BC);
PPC_FUNC_IMPL(__imp__sub_83B771BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B771C0"))) PPC_WEAK_FUNC(sub_83B771C0);
PPC_FUNC_IMPL(__imp__sub_83B771C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26112
	ctx.r3.s64 = ctx.r11.s64 + 26112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B771CC"))) PPC_WEAK_FUNC(sub_83B771CC);
PPC_FUNC_IMPL(__imp__sub_83B771CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B771D0"))) PPC_WEAK_FUNC(sub_83B771D0);
PPC_FUNC_IMPL(__imp__sub_83B771D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26120
	ctx.r3.s64 = ctx.r11.s64 + 26120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B771DC"))) PPC_WEAK_FUNC(sub_83B771DC);
PPC_FUNC_IMPL(__imp__sub_83B771DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B771E0"))) PPC_WEAK_FUNC(sub_83B771E0);
PPC_FUNC_IMPL(__imp__sub_83B771E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26128
	ctx.r3.s64 = ctx.r11.s64 + 26128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B771EC"))) PPC_WEAK_FUNC(sub_83B771EC);
PPC_FUNC_IMPL(__imp__sub_83B771EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B771F0"))) PPC_WEAK_FUNC(sub_83B771F0);
PPC_FUNC_IMPL(__imp__sub_83B771F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26136
	ctx.r3.s64 = ctx.r11.s64 + 26136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B771FC"))) PPC_WEAK_FUNC(sub_83B771FC);
PPC_FUNC_IMPL(__imp__sub_83B771FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77200"))) PPC_WEAK_FUNC(sub_83B77200);
PPC_FUNC_IMPL(__imp__sub_83B77200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26144
	ctx.r3.s64 = ctx.r11.s64 + 26144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7720C"))) PPC_WEAK_FUNC(sub_83B7720C);
PPC_FUNC_IMPL(__imp__sub_83B7720C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77210"))) PPC_WEAK_FUNC(sub_83B77210);
PPC_FUNC_IMPL(__imp__sub_83B77210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26152
	ctx.r3.s64 = ctx.r11.s64 + 26152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7721C"))) PPC_WEAK_FUNC(sub_83B7721C);
PPC_FUNC_IMPL(__imp__sub_83B7721C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77220"))) PPC_WEAK_FUNC(sub_83B77220);
PPC_FUNC_IMPL(__imp__sub_83B77220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26160
	ctx.r3.s64 = ctx.r11.s64 + 26160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7722C"))) PPC_WEAK_FUNC(sub_83B7722C);
PPC_FUNC_IMPL(__imp__sub_83B7722C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77230"))) PPC_WEAK_FUNC(sub_83B77230);
PPC_FUNC_IMPL(__imp__sub_83B77230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26168
	ctx.r3.s64 = ctx.r11.s64 + 26168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7723C"))) PPC_WEAK_FUNC(sub_83B7723C);
PPC_FUNC_IMPL(__imp__sub_83B7723C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77240"))) PPC_WEAK_FUNC(sub_83B77240);
PPC_FUNC_IMPL(__imp__sub_83B77240) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14808
	ctx.r7.s64 = ctx.r8.s64 + -14808;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14808(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14808);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14808(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14808, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B77268"))) PPC_WEAK_FUNC(sub_83B77268);
PPC_FUNC_IMPL(__imp__sub_83B77268) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-14812
	ctx.r3.s64 = ctx.r11.s64 + -14812;
	// bl 0x83523120
	ctx.lr = 0x83B77280;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,26176
	ctx.r3.s64 = ctx.r10.s64 + 26176;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7728C;
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

__attribute__((alias("__imp__sub_83B7729C"))) PPC_WEAK_FUNC(sub_83B7729C);
PPC_FUNC_IMPL(__imp__sub_83B7729C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B772A0"))) PPC_WEAK_FUNC(sub_83B772A0);
PPC_FUNC_IMPL(__imp__sub_83B772A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,4980
	ctx.r4.s64 = ctx.r11.s64 + 4980;
	// lis r7,-31763
	ctx.r7.s64 = -2081619968;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,-14800
	ctx.r3.s64 = ctx.r7.s64 + -14800;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B772D0"))) PPC_WEAK_FUNC(sub_83B772D0);
PPC_FUNC_IMPL(__imp__sub_83B772D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26192
	ctx.r3.s64 = ctx.r11.s64 + 26192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B772DC"))) PPC_WEAK_FUNC(sub_83B772DC);
PPC_FUNC_IMPL(__imp__sub_83B772DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B772E0"))) PPC_WEAK_FUNC(sub_83B772E0);
PPC_FUNC_IMPL(__imp__sub_83B772E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26200
	ctx.r3.s64 = ctx.r11.s64 + 26200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B772EC"))) PPC_WEAK_FUNC(sub_83B772EC);
PPC_FUNC_IMPL(__imp__sub_83B772EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B772F0"))) PPC_WEAK_FUNC(sub_83B772F0);
PPC_FUNC_IMPL(__imp__sub_83B772F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26208
	ctx.r3.s64 = ctx.r11.s64 + 26208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B772FC"))) PPC_WEAK_FUNC(sub_83B772FC);
PPC_FUNC_IMPL(__imp__sub_83B772FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77300"))) PPC_WEAK_FUNC(sub_83B77300);
PPC_FUNC_IMPL(__imp__sub_83B77300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26216
	ctx.r3.s64 = ctx.r11.s64 + 26216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7730C"))) PPC_WEAK_FUNC(sub_83B7730C);
PPC_FUNC_IMPL(__imp__sub_83B7730C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77310"))) PPC_WEAK_FUNC(sub_83B77310);
PPC_FUNC_IMPL(__imp__sub_83B77310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26224
	ctx.r3.s64 = ctx.r11.s64 + 26224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7731C"))) PPC_WEAK_FUNC(sub_83B7731C);
PPC_FUNC_IMPL(__imp__sub_83B7731C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77320"))) PPC_WEAK_FUNC(sub_83B77320);
PPC_FUNC_IMPL(__imp__sub_83B77320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26232
	ctx.r3.s64 = ctx.r11.s64 + 26232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7732C"))) PPC_WEAK_FUNC(sub_83B7732C);
PPC_FUNC_IMPL(__imp__sub_83B7732C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77330"))) PPC_WEAK_FUNC(sub_83B77330);
PPC_FUNC_IMPL(__imp__sub_83B77330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26240
	ctx.r3.s64 = ctx.r11.s64 + 26240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7733C"))) PPC_WEAK_FUNC(sub_83B7733C);
PPC_FUNC_IMPL(__imp__sub_83B7733C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77340"))) PPC_WEAK_FUNC(sub_83B77340);
PPC_FUNC_IMPL(__imp__sub_83B77340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26248
	ctx.r3.s64 = ctx.r11.s64 + 26248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7734C"))) PPC_WEAK_FUNC(sub_83B7734C);
PPC_FUNC_IMPL(__imp__sub_83B7734C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77350"))) PPC_WEAK_FUNC(sub_83B77350);
PPC_FUNC_IMPL(__imp__sub_83B77350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26256
	ctx.r3.s64 = ctx.r11.s64 + 26256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7735C"))) PPC_WEAK_FUNC(sub_83B7735C);
PPC_FUNC_IMPL(__imp__sub_83B7735C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77360"))) PPC_WEAK_FUNC(sub_83B77360);
PPC_FUNC_IMPL(__imp__sub_83B77360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26264
	ctx.r3.s64 = ctx.r11.s64 + 26264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7736C"))) PPC_WEAK_FUNC(sub_83B7736C);
PPC_FUNC_IMPL(__imp__sub_83B7736C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77370"))) PPC_WEAK_FUNC(sub_83B77370);
PPC_FUNC_IMPL(__imp__sub_83B77370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26272
	ctx.r3.s64 = ctx.r11.s64 + 26272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7737C"))) PPC_WEAK_FUNC(sub_83B7737C);
PPC_FUNC_IMPL(__imp__sub_83B7737C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77380"))) PPC_WEAK_FUNC(sub_83B77380);
PPC_FUNC_IMPL(__imp__sub_83B77380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26280
	ctx.r3.s64 = ctx.r11.s64 + 26280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7738C"))) PPC_WEAK_FUNC(sub_83B7738C);
PPC_FUNC_IMPL(__imp__sub_83B7738C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77390"))) PPC_WEAK_FUNC(sub_83B77390);
PPC_FUNC_IMPL(__imp__sub_83B77390) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14784
	ctx.r7.s64 = ctx.r8.s64 + -14784;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14784(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14784);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14784(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14784, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B773B8"))) PPC_WEAK_FUNC(sub_83B773B8);
PPC_FUNC_IMPL(__imp__sub_83B773B8) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-14788
	ctx.r3.s64 = ctx.r11.s64 + -14788;
	// bl 0x83523120
	ctx.lr = 0x83B773D0;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,26288
	ctx.r3.s64 = ctx.r10.s64 + 26288;
	// bl 0x831cdcc8
	ctx.lr = 0x83B773DC;
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

__attribute__((alias("__imp__sub_83B773EC"))) PPC_WEAK_FUNC(sub_83B773EC);
PPC_FUNC_IMPL(__imp__sub_83B773EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B773F0"))) PPC_WEAK_FUNC(sub_83B773F0);
PPC_FUNC_IMPL(__imp__sub_83B773F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26304
	ctx.r3.s64 = ctx.r11.s64 + 26304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B773FC"))) PPC_WEAK_FUNC(sub_83B773FC);
PPC_FUNC_IMPL(__imp__sub_83B773FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77400"))) PPC_WEAK_FUNC(sub_83B77400);
PPC_FUNC_IMPL(__imp__sub_83B77400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26312
	ctx.r3.s64 = ctx.r11.s64 + 26312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7740C"))) PPC_WEAK_FUNC(sub_83B7740C);
PPC_FUNC_IMPL(__imp__sub_83B7740C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77410"))) PPC_WEAK_FUNC(sub_83B77410);
PPC_FUNC_IMPL(__imp__sub_83B77410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26320
	ctx.r3.s64 = ctx.r11.s64 + 26320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7741C"))) PPC_WEAK_FUNC(sub_83B7741C);
PPC_FUNC_IMPL(__imp__sub_83B7741C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77420"))) PPC_WEAK_FUNC(sub_83B77420);
PPC_FUNC_IMPL(__imp__sub_83B77420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26328
	ctx.r3.s64 = ctx.r11.s64 + 26328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7742C"))) PPC_WEAK_FUNC(sub_83B7742C);
PPC_FUNC_IMPL(__imp__sub_83B7742C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77430"))) PPC_WEAK_FUNC(sub_83B77430);
PPC_FUNC_IMPL(__imp__sub_83B77430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26336
	ctx.r3.s64 = ctx.r11.s64 + 26336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7743C"))) PPC_WEAK_FUNC(sub_83B7743C);
PPC_FUNC_IMPL(__imp__sub_83B7743C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77440"))) PPC_WEAK_FUNC(sub_83B77440);
PPC_FUNC_IMPL(__imp__sub_83B77440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26344
	ctx.r3.s64 = ctx.r11.s64 + 26344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7744C"))) PPC_WEAK_FUNC(sub_83B7744C);
PPC_FUNC_IMPL(__imp__sub_83B7744C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77450"))) PPC_WEAK_FUNC(sub_83B77450);
PPC_FUNC_IMPL(__imp__sub_83B77450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26352
	ctx.r3.s64 = ctx.r11.s64 + 26352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7745C"))) PPC_WEAK_FUNC(sub_83B7745C);
PPC_FUNC_IMPL(__imp__sub_83B7745C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77460"))) PPC_WEAK_FUNC(sub_83B77460);
PPC_FUNC_IMPL(__imp__sub_83B77460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26360
	ctx.r3.s64 = ctx.r11.s64 + 26360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7746C"))) PPC_WEAK_FUNC(sub_83B7746C);
PPC_FUNC_IMPL(__imp__sub_83B7746C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77470"))) PPC_WEAK_FUNC(sub_83B77470);
PPC_FUNC_IMPL(__imp__sub_83B77470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26368
	ctx.r3.s64 = ctx.r11.s64 + 26368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7747C"))) PPC_WEAK_FUNC(sub_83B7747C);
PPC_FUNC_IMPL(__imp__sub_83B7747C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77480"))) PPC_WEAK_FUNC(sub_83B77480);
PPC_FUNC_IMPL(__imp__sub_83B77480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26376
	ctx.r3.s64 = ctx.r11.s64 + 26376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7748C"))) PPC_WEAK_FUNC(sub_83B7748C);
PPC_FUNC_IMPL(__imp__sub_83B7748C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77490"))) PPC_WEAK_FUNC(sub_83B77490);
PPC_FUNC_IMPL(__imp__sub_83B77490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26384
	ctx.r3.s64 = ctx.r11.s64 + 26384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7749C"))) PPC_WEAK_FUNC(sub_83B7749C);
PPC_FUNC_IMPL(__imp__sub_83B7749C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B774A0"))) PPC_WEAK_FUNC(sub_83B774A0);
PPC_FUNC_IMPL(__imp__sub_83B774A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26392
	ctx.r3.s64 = ctx.r11.s64 + 26392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B774AC"))) PPC_WEAK_FUNC(sub_83B774AC);
PPC_FUNC_IMPL(__imp__sub_83B774AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B774B0"))) PPC_WEAK_FUNC(sub_83B774B0);
PPC_FUNC_IMPL(__imp__sub_83B774B0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14772
	ctx.r7.s64 = ctx.r8.s64 + -14772;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14772(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14772);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14772(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14772, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B774D8"))) PPC_WEAK_FUNC(sub_83B774D8);
PPC_FUNC_IMPL(__imp__sub_83B774D8) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-14776
	ctx.r3.s64 = ctx.r11.s64 + -14776;
	// bl 0x83523120
	ctx.lr = 0x83B774F0;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,26400
	ctx.r3.s64 = ctx.r10.s64 + 26400;
	// bl 0x831cdcc8
	ctx.lr = 0x83B774FC;
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

__attribute__((alias("__imp__sub_83B7750C"))) PPC_WEAK_FUNC(sub_83B7750C);
PPC_FUNC_IMPL(__imp__sub_83B7750C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77510"))) PPC_WEAK_FUNC(sub_83B77510);
PPC_FUNC_IMPL(__imp__sub_83B77510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26416
	ctx.r3.s64 = ctx.r11.s64 + 26416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7751C"))) PPC_WEAK_FUNC(sub_83B7751C);
PPC_FUNC_IMPL(__imp__sub_83B7751C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77520"))) PPC_WEAK_FUNC(sub_83B77520);
PPC_FUNC_IMPL(__imp__sub_83B77520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26424
	ctx.r3.s64 = ctx.r11.s64 + 26424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7752C"))) PPC_WEAK_FUNC(sub_83B7752C);
PPC_FUNC_IMPL(__imp__sub_83B7752C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77530"))) PPC_WEAK_FUNC(sub_83B77530);
PPC_FUNC_IMPL(__imp__sub_83B77530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26432
	ctx.r3.s64 = ctx.r11.s64 + 26432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7753C"))) PPC_WEAK_FUNC(sub_83B7753C);
PPC_FUNC_IMPL(__imp__sub_83B7753C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77540"))) PPC_WEAK_FUNC(sub_83B77540);
PPC_FUNC_IMPL(__imp__sub_83B77540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26440
	ctx.r3.s64 = ctx.r11.s64 + 26440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7754C"))) PPC_WEAK_FUNC(sub_83B7754C);
PPC_FUNC_IMPL(__imp__sub_83B7754C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77550"))) PPC_WEAK_FUNC(sub_83B77550);
PPC_FUNC_IMPL(__imp__sub_83B77550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26448
	ctx.r3.s64 = ctx.r11.s64 + 26448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7755C"))) PPC_WEAK_FUNC(sub_83B7755C);
PPC_FUNC_IMPL(__imp__sub_83B7755C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77560"))) PPC_WEAK_FUNC(sub_83B77560);
PPC_FUNC_IMPL(__imp__sub_83B77560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26456
	ctx.r3.s64 = ctx.r11.s64 + 26456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7756C"))) PPC_WEAK_FUNC(sub_83B7756C);
PPC_FUNC_IMPL(__imp__sub_83B7756C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77570"))) PPC_WEAK_FUNC(sub_83B77570);
PPC_FUNC_IMPL(__imp__sub_83B77570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26464
	ctx.r3.s64 = ctx.r11.s64 + 26464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7757C"))) PPC_WEAK_FUNC(sub_83B7757C);
PPC_FUNC_IMPL(__imp__sub_83B7757C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77580"))) PPC_WEAK_FUNC(sub_83B77580);
PPC_FUNC_IMPL(__imp__sub_83B77580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26472
	ctx.r3.s64 = ctx.r11.s64 + 26472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7758C"))) PPC_WEAK_FUNC(sub_83B7758C);
PPC_FUNC_IMPL(__imp__sub_83B7758C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77590"))) PPC_WEAK_FUNC(sub_83B77590);
PPC_FUNC_IMPL(__imp__sub_83B77590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26480
	ctx.r3.s64 = ctx.r11.s64 + 26480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7759C"))) PPC_WEAK_FUNC(sub_83B7759C);
PPC_FUNC_IMPL(__imp__sub_83B7759C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B775A0"))) PPC_WEAK_FUNC(sub_83B775A0);
PPC_FUNC_IMPL(__imp__sub_83B775A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26488
	ctx.r3.s64 = ctx.r11.s64 + 26488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B775AC"))) PPC_WEAK_FUNC(sub_83B775AC);
PPC_FUNC_IMPL(__imp__sub_83B775AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B775B0"))) PPC_WEAK_FUNC(sub_83B775B0);
PPC_FUNC_IMPL(__imp__sub_83B775B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26496
	ctx.r3.s64 = ctx.r11.s64 + 26496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B775BC"))) PPC_WEAK_FUNC(sub_83B775BC);
PPC_FUNC_IMPL(__imp__sub_83B775BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B775C0"))) PPC_WEAK_FUNC(sub_83B775C0);
PPC_FUNC_IMPL(__imp__sub_83B775C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26504
	ctx.r3.s64 = ctx.r11.s64 + 26504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B775CC"))) PPC_WEAK_FUNC(sub_83B775CC);
PPC_FUNC_IMPL(__imp__sub_83B775CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B775D0"))) PPC_WEAK_FUNC(sub_83B775D0);
PPC_FUNC_IMPL(__imp__sub_83B775D0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14760
	ctx.r7.s64 = ctx.r8.s64 + -14760;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14760(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14760);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14760(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14760, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B775F8"))) PPC_WEAK_FUNC(sub_83B775F8);
PPC_FUNC_IMPL(__imp__sub_83B775F8) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-14764
	ctx.r3.s64 = ctx.r11.s64 + -14764;
	// bl 0x83523120
	ctx.lr = 0x83B77610;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,26512
	ctx.r3.s64 = ctx.r10.s64 + 26512;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7761C;
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

__attribute__((alias("__imp__sub_83B7762C"))) PPC_WEAK_FUNC(sub_83B7762C);
PPC_FUNC_IMPL(__imp__sub_83B7762C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77630"))) PPC_WEAK_FUNC(sub_83B77630);
PPC_FUNC_IMPL(__imp__sub_83B77630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26528
	ctx.r3.s64 = ctx.r11.s64 + 26528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7763C"))) PPC_WEAK_FUNC(sub_83B7763C);
PPC_FUNC_IMPL(__imp__sub_83B7763C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77640"))) PPC_WEAK_FUNC(sub_83B77640);
PPC_FUNC_IMPL(__imp__sub_83B77640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26536
	ctx.r3.s64 = ctx.r11.s64 + 26536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7764C"))) PPC_WEAK_FUNC(sub_83B7764C);
PPC_FUNC_IMPL(__imp__sub_83B7764C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77650"))) PPC_WEAK_FUNC(sub_83B77650);
PPC_FUNC_IMPL(__imp__sub_83B77650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26544
	ctx.r3.s64 = ctx.r11.s64 + 26544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7765C"))) PPC_WEAK_FUNC(sub_83B7765C);
PPC_FUNC_IMPL(__imp__sub_83B7765C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77660"))) PPC_WEAK_FUNC(sub_83B77660);
PPC_FUNC_IMPL(__imp__sub_83B77660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26552
	ctx.r3.s64 = ctx.r11.s64 + 26552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7766C"))) PPC_WEAK_FUNC(sub_83B7766C);
PPC_FUNC_IMPL(__imp__sub_83B7766C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77670"))) PPC_WEAK_FUNC(sub_83B77670);
PPC_FUNC_IMPL(__imp__sub_83B77670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26560
	ctx.r3.s64 = ctx.r11.s64 + 26560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7767C"))) PPC_WEAK_FUNC(sub_83B7767C);
PPC_FUNC_IMPL(__imp__sub_83B7767C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77680"))) PPC_WEAK_FUNC(sub_83B77680);
PPC_FUNC_IMPL(__imp__sub_83B77680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26568
	ctx.r3.s64 = ctx.r11.s64 + 26568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7768C"))) PPC_WEAK_FUNC(sub_83B7768C);
PPC_FUNC_IMPL(__imp__sub_83B7768C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77690"))) PPC_WEAK_FUNC(sub_83B77690);
PPC_FUNC_IMPL(__imp__sub_83B77690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26576
	ctx.r3.s64 = ctx.r11.s64 + 26576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7769C"))) PPC_WEAK_FUNC(sub_83B7769C);
PPC_FUNC_IMPL(__imp__sub_83B7769C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B776A0"))) PPC_WEAK_FUNC(sub_83B776A0);
PPC_FUNC_IMPL(__imp__sub_83B776A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26584
	ctx.r3.s64 = ctx.r11.s64 + 26584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B776AC"))) PPC_WEAK_FUNC(sub_83B776AC);
PPC_FUNC_IMPL(__imp__sub_83B776AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B776B0"))) PPC_WEAK_FUNC(sub_83B776B0);
PPC_FUNC_IMPL(__imp__sub_83B776B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26592
	ctx.r3.s64 = ctx.r11.s64 + 26592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B776BC"))) PPC_WEAK_FUNC(sub_83B776BC);
PPC_FUNC_IMPL(__imp__sub_83B776BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B776C0"))) PPC_WEAK_FUNC(sub_83B776C0);
PPC_FUNC_IMPL(__imp__sub_83B776C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26600
	ctx.r3.s64 = ctx.r11.s64 + 26600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B776CC"))) PPC_WEAK_FUNC(sub_83B776CC);
PPC_FUNC_IMPL(__imp__sub_83B776CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B776D0"))) PPC_WEAK_FUNC(sub_83B776D0);
PPC_FUNC_IMPL(__imp__sub_83B776D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26608
	ctx.r3.s64 = ctx.r11.s64 + 26608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B776DC"))) PPC_WEAK_FUNC(sub_83B776DC);
PPC_FUNC_IMPL(__imp__sub_83B776DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B776E0"))) PPC_WEAK_FUNC(sub_83B776E0);
PPC_FUNC_IMPL(__imp__sub_83B776E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26616
	ctx.r3.s64 = ctx.r11.s64 + 26616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B776EC"))) PPC_WEAK_FUNC(sub_83B776EC);
PPC_FUNC_IMPL(__imp__sub_83B776EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B776F0"))) PPC_WEAK_FUNC(sub_83B776F0);
PPC_FUNC_IMPL(__imp__sub_83B776F0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14748
	ctx.r7.s64 = ctx.r8.s64 + -14748;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14748(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14748);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14748(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14748, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B77718"))) PPC_WEAK_FUNC(sub_83B77718);
PPC_FUNC_IMPL(__imp__sub_83B77718) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-14752
	ctx.r3.s64 = ctx.r11.s64 + -14752;
	// bl 0x83523120
	ctx.lr = 0x83B77730;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,26624
	ctx.r3.s64 = ctx.r10.s64 + 26624;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7773C;
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

__attribute__((alias("__imp__sub_83B7774C"))) PPC_WEAK_FUNC(sub_83B7774C);
PPC_FUNC_IMPL(__imp__sub_83B7774C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77750"))) PPC_WEAK_FUNC(sub_83B77750);
PPC_FUNC_IMPL(__imp__sub_83B77750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26640
	ctx.r3.s64 = ctx.r11.s64 + 26640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7775C"))) PPC_WEAK_FUNC(sub_83B7775C);
PPC_FUNC_IMPL(__imp__sub_83B7775C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77760"))) PPC_WEAK_FUNC(sub_83B77760);
PPC_FUNC_IMPL(__imp__sub_83B77760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26648
	ctx.r3.s64 = ctx.r11.s64 + 26648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7776C"))) PPC_WEAK_FUNC(sub_83B7776C);
PPC_FUNC_IMPL(__imp__sub_83B7776C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77770"))) PPC_WEAK_FUNC(sub_83B77770);
PPC_FUNC_IMPL(__imp__sub_83B77770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26656
	ctx.r3.s64 = ctx.r11.s64 + 26656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7777C"))) PPC_WEAK_FUNC(sub_83B7777C);
PPC_FUNC_IMPL(__imp__sub_83B7777C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77780"))) PPC_WEAK_FUNC(sub_83B77780);
PPC_FUNC_IMPL(__imp__sub_83B77780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26664
	ctx.r3.s64 = ctx.r11.s64 + 26664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7778C"))) PPC_WEAK_FUNC(sub_83B7778C);
PPC_FUNC_IMPL(__imp__sub_83B7778C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B77790"))) PPC_WEAK_FUNC(sub_83B77790);
PPC_FUNC_IMPL(__imp__sub_83B77790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26672
	ctx.r3.s64 = ctx.r11.s64 + 26672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7779C"))) PPC_WEAK_FUNC(sub_83B7779C);
PPC_FUNC_IMPL(__imp__sub_83B7779C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B777A0"))) PPC_WEAK_FUNC(sub_83B777A0);
PPC_FUNC_IMPL(__imp__sub_83B777A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26680
	ctx.r3.s64 = ctx.r11.s64 + 26680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B777AC"))) PPC_WEAK_FUNC(sub_83B777AC);
PPC_FUNC_IMPL(__imp__sub_83B777AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B777B0"))) PPC_WEAK_FUNC(sub_83B777B0);
PPC_FUNC_IMPL(__imp__sub_83B777B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26688
	ctx.r3.s64 = ctx.r11.s64 + 26688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B777BC"))) PPC_WEAK_FUNC(sub_83B777BC);
PPC_FUNC_IMPL(__imp__sub_83B777BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B777C0"))) PPC_WEAK_FUNC(sub_83B777C0);
PPC_FUNC_IMPL(__imp__sub_83B777C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26696
	ctx.r3.s64 = ctx.r11.s64 + 26696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B777CC"))) PPC_WEAK_FUNC(sub_83B777CC);
PPC_FUNC_IMPL(__imp__sub_83B777CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B777D0"))) PPC_WEAK_FUNC(sub_83B777D0);
PPC_FUNC_IMPL(__imp__sub_83B777D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26704
	ctx.r3.s64 = ctx.r11.s64 + 26704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B777DC"))) PPC_WEAK_FUNC(sub_83B777DC);
PPC_FUNC_IMPL(__imp__sub_83B777DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B777E0"))) PPC_WEAK_FUNC(sub_83B777E0);
PPC_FUNC_IMPL(__imp__sub_83B777E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26712
	ctx.r3.s64 = ctx.r11.s64 + 26712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B777EC"))) PPC_WEAK_FUNC(sub_83B777EC);
PPC_FUNC_IMPL(__imp__sub_83B777EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B777F0"))) PPC_WEAK_FUNC(sub_83B777F0);
PPC_FUNC_IMPL(__imp__sub_83B777F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,26720
	ctx.r3.s64 = ctx.r11.s64 + 26720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

