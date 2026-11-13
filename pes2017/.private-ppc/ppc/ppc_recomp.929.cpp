#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83CCF434"))) PPC_WEAK_FUNC(sub_83CCF434);
PPC_FUNC_IMPL(__imp__sub_83CCF434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF438"))) PPC_WEAK_FUNC(sub_83CCF438);
PPC_FUNC_IMPL(__imp__sub_83CCF438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25144
	ctx.r3.s64 = ctx.r11.s64 + -25144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF444"))) PPC_WEAK_FUNC(sub_83CCF444);
PPC_FUNC_IMPL(__imp__sub_83CCF444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF448"))) PPC_WEAK_FUNC(sub_83CCF448);
PPC_FUNC_IMPL(__imp__sub_83CCF448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25136
	ctx.r3.s64 = ctx.r11.s64 + -25136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF454"))) PPC_WEAK_FUNC(sub_83CCF454);
PPC_FUNC_IMPL(__imp__sub_83CCF454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF458"))) PPC_WEAK_FUNC(sub_83CCF458);
PPC_FUNC_IMPL(__imp__sub_83CCF458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25128
	ctx.r3.s64 = ctx.r11.s64 + -25128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF464"))) PPC_WEAK_FUNC(sub_83CCF464);
PPC_FUNC_IMPL(__imp__sub_83CCF464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF468"))) PPC_WEAK_FUNC(sub_83CCF468);
PPC_FUNC_IMPL(__imp__sub_83CCF468) {
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
	// addi r3,r11,-11780
	ctx.r3.s64 = ctx.r11.s64 + -11780;
	// bl 0x83523120
	ctx.lr = 0x83CCF480;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-25120
	ctx.r3.s64 = ctx.r10.s64 + -25120;
	// bl 0x831cdcc8
	ctx.lr = 0x83CCF48C;
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

__attribute__((alias("__imp__sub_83CCF49C"))) PPC_WEAK_FUNC(sub_83CCF49C);
PPC_FUNC_IMPL(__imp__sub_83CCF49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF4A0"))) PPC_WEAK_FUNC(sub_83CCF4A0);
PPC_FUNC_IMPL(__imp__sub_83CCF4A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25104
	ctx.r3.s64 = ctx.r11.s64 + -25104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF4AC"))) PPC_WEAK_FUNC(sub_83CCF4AC);
PPC_FUNC_IMPL(__imp__sub_83CCF4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF4B0"))) PPC_WEAK_FUNC(sub_83CCF4B0);
PPC_FUNC_IMPL(__imp__sub_83CCF4B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25096
	ctx.r3.s64 = ctx.r11.s64 + -25096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF4BC"))) PPC_WEAK_FUNC(sub_83CCF4BC);
PPC_FUNC_IMPL(__imp__sub_83CCF4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF4C0"))) PPC_WEAK_FUNC(sub_83CCF4C0);
PPC_FUNC_IMPL(__imp__sub_83CCF4C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25088
	ctx.r3.s64 = ctx.r11.s64 + -25088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF4CC"))) PPC_WEAK_FUNC(sub_83CCF4CC);
PPC_FUNC_IMPL(__imp__sub_83CCF4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF4D0"))) PPC_WEAK_FUNC(sub_83CCF4D0);
PPC_FUNC_IMPL(__imp__sub_83CCF4D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25080
	ctx.r3.s64 = ctx.r11.s64 + -25080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF4DC"))) PPC_WEAK_FUNC(sub_83CCF4DC);
PPC_FUNC_IMPL(__imp__sub_83CCF4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF4E0"))) PPC_WEAK_FUNC(sub_83CCF4E0);
PPC_FUNC_IMPL(__imp__sub_83CCF4E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25072
	ctx.r3.s64 = ctx.r11.s64 + -25072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF4EC"))) PPC_WEAK_FUNC(sub_83CCF4EC);
PPC_FUNC_IMPL(__imp__sub_83CCF4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF4F0"))) PPC_WEAK_FUNC(sub_83CCF4F0);
PPC_FUNC_IMPL(__imp__sub_83CCF4F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25064
	ctx.r3.s64 = ctx.r11.s64 + -25064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF4FC"))) PPC_WEAK_FUNC(sub_83CCF4FC);
PPC_FUNC_IMPL(__imp__sub_83CCF4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF500"))) PPC_WEAK_FUNC(sub_83CCF500);
PPC_FUNC_IMPL(__imp__sub_83CCF500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25056
	ctx.r3.s64 = ctx.r11.s64 + -25056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF50C"))) PPC_WEAK_FUNC(sub_83CCF50C);
PPC_FUNC_IMPL(__imp__sub_83CCF50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF510"))) PPC_WEAK_FUNC(sub_83CCF510);
PPC_FUNC_IMPL(__imp__sub_83CCF510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25048
	ctx.r3.s64 = ctx.r11.s64 + -25048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF51C"))) PPC_WEAK_FUNC(sub_83CCF51C);
PPC_FUNC_IMPL(__imp__sub_83CCF51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF520"))) PPC_WEAK_FUNC(sub_83CCF520);
PPC_FUNC_IMPL(__imp__sub_83CCF520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25040
	ctx.r3.s64 = ctx.r11.s64 + -25040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF52C"))) PPC_WEAK_FUNC(sub_83CCF52C);
PPC_FUNC_IMPL(__imp__sub_83CCF52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF530"))) PPC_WEAK_FUNC(sub_83CCF530);
PPC_FUNC_IMPL(__imp__sub_83CCF530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25032
	ctx.r3.s64 = ctx.r11.s64 + -25032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF53C"))) PPC_WEAK_FUNC(sub_83CCF53C);
PPC_FUNC_IMPL(__imp__sub_83CCF53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF540"))) PPC_WEAK_FUNC(sub_83CCF540);
PPC_FUNC_IMPL(__imp__sub_83CCF540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25024
	ctx.r3.s64 = ctx.r11.s64 + -25024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF54C"))) PPC_WEAK_FUNC(sub_83CCF54C);
PPC_FUNC_IMPL(__imp__sub_83CCF54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF550"))) PPC_WEAK_FUNC(sub_83CCF550);
PPC_FUNC_IMPL(__imp__sub_83CCF550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-25016
	ctx.r3.s64 = ctx.r11.s64 + -25016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF55C"))) PPC_WEAK_FUNC(sub_83CCF55C);
PPC_FUNC_IMPL(__imp__sub_83CCF55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF560"))) PPC_WEAK_FUNC(sub_83CCF560);
PPC_FUNC_IMPL(__imp__sub_83CCF560) {
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
	// addi r3,r11,-11772
	ctx.r3.s64 = ctx.r11.s64 + -11772;
	// bl 0x83523120
	ctx.lr = 0x83CCF578;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-25008
	ctx.r3.s64 = ctx.r10.s64 + -25008;
	// bl 0x831cdcc8
	ctx.lr = 0x83CCF584;
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

__attribute__((alias("__imp__sub_83CCF594"))) PPC_WEAK_FUNC(sub_83CCF594);
PPC_FUNC_IMPL(__imp__sub_83CCF594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF598"))) PPC_WEAK_FUNC(sub_83CCF598);
PPC_FUNC_IMPL(__imp__sub_83CCF598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24992
	ctx.r3.s64 = ctx.r11.s64 + -24992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF5A4"))) PPC_WEAK_FUNC(sub_83CCF5A4);
PPC_FUNC_IMPL(__imp__sub_83CCF5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF5A8"))) PPC_WEAK_FUNC(sub_83CCF5A8);
PPC_FUNC_IMPL(__imp__sub_83CCF5A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24984
	ctx.r3.s64 = ctx.r11.s64 + -24984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF5B4"))) PPC_WEAK_FUNC(sub_83CCF5B4);
PPC_FUNC_IMPL(__imp__sub_83CCF5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF5B8"))) PPC_WEAK_FUNC(sub_83CCF5B8);
PPC_FUNC_IMPL(__imp__sub_83CCF5B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24976
	ctx.r3.s64 = ctx.r11.s64 + -24976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF5C4"))) PPC_WEAK_FUNC(sub_83CCF5C4);
PPC_FUNC_IMPL(__imp__sub_83CCF5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF5C8"))) PPC_WEAK_FUNC(sub_83CCF5C8);
PPC_FUNC_IMPL(__imp__sub_83CCF5C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24968
	ctx.r3.s64 = ctx.r11.s64 + -24968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF5D4"))) PPC_WEAK_FUNC(sub_83CCF5D4);
PPC_FUNC_IMPL(__imp__sub_83CCF5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF5D8"))) PPC_WEAK_FUNC(sub_83CCF5D8);
PPC_FUNC_IMPL(__imp__sub_83CCF5D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24960
	ctx.r3.s64 = ctx.r11.s64 + -24960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF5E4"))) PPC_WEAK_FUNC(sub_83CCF5E4);
PPC_FUNC_IMPL(__imp__sub_83CCF5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF5E8"))) PPC_WEAK_FUNC(sub_83CCF5E8);
PPC_FUNC_IMPL(__imp__sub_83CCF5E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24952
	ctx.r3.s64 = ctx.r11.s64 + -24952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF5F4"))) PPC_WEAK_FUNC(sub_83CCF5F4);
PPC_FUNC_IMPL(__imp__sub_83CCF5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF5F8"))) PPC_WEAK_FUNC(sub_83CCF5F8);
PPC_FUNC_IMPL(__imp__sub_83CCF5F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24944
	ctx.r3.s64 = ctx.r11.s64 + -24944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF604"))) PPC_WEAK_FUNC(sub_83CCF604);
PPC_FUNC_IMPL(__imp__sub_83CCF604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF608"))) PPC_WEAK_FUNC(sub_83CCF608);
PPC_FUNC_IMPL(__imp__sub_83CCF608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF614"))) PPC_WEAK_FUNC(sub_83CCF614);
PPC_FUNC_IMPL(__imp__sub_83CCF614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF618"))) PPC_WEAK_FUNC(sub_83CCF618);
PPC_FUNC_IMPL(__imp__sub_83CCF618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24928
	ctx.r3.s64 = ctx.r11.s64 + -24928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF624"))) PPC_WEAK_FUNC(sub_83CCF624);
PPC_FUNC_IMPL(__imp__sub_83CCF624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF628"))) PPC_WEAK_FUNC(sub_83CCF628);
PPC_FUNC_IMPL(__imp__sub_83CCF628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24920
	ctx.r3.s64 = ctx.r11.s64 + -24920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF634"))) PPC_WEAK_FUNC(sub_83CCF634);
PPC_FUNC_IMPL(__imp__sub_83CCF634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF638"))) PPC_WEAK_FUNC(sub_83CCF638);
PPC_FUNC_IMPL(__imp__sub_83CCF638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24912
	ctx.r3.s64 = ctx.r11.s64 + -24912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF644"))) PPC_WEAK_FUNC(sub_83CCF644);
PPC_FUNC_IMPL(__imp__sub_83CCF644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF648"))) PPC_WEAK_FUNC(sub_83CCF648);
PPC_FUNC_IMPL(__imp__sub_83CCF648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24904
	ctx.r3.s64 = ctx.r11.s64 + -24904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF654"))) PPC_WEAK_FUNC(sub_83CCF654);
PPC_FUNC_IMPL(__imp__sub_83CCF654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF658"))) PPC_WEAK_FUNC(sub_83CCF658);
PPC_FUNC_IMPL(__imp__sub_83CCF658) {
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
	// addi r3,r11,-11764
	ctx.r3.s64 = ctx.r11.s64 + -11764;
	// bl 0x83523120
	ctx.lr = 0x83CCF670;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-24896
	ctx.r3.s64 = ctx.r10.s64 + -24896;
	// bl 0x831cdcc8
	ctx.lr = 0x83CCF67C;
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

__attribute__((alias("__imp__sub_83CCF68C"))) PPC_WEAK_FUNC(sub_83CCF68C);
PPC_FUNC_IMPL(__imp__sub_83CCF68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF690"))) PPC_WEAK_FUNC(sub_83CCF690);
PPC_FUNC_IMPL(__imp__sub_83CCF690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24880
	ctx.r3.s64 = ctx.r11.s64 + -24880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF69C"))) PPC_WEAK_FUNC(sub_83CCF69C);
PPC_FUNC_IMPL(__imp__sub_83CCF69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF6A0"))) PPC_WEAK_FUNC(sub_83CCF6A0);
PPC_FUNC_IMPL(__imp__sub_83CCF6A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24872
	ctx.r3.s64 = ctx.r11.s64 + -24872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF6AC"))) PPC_WEAK_FUNC(sub_83CCF6AC);
PPC_FUNC_IMPL(__imp__sub_83CCF6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF6B0"))) PPC_WEAK_FUNC(sub_83CCF6B0);
PPC_FUNC_IMPL(__imp__sub_83CCF6B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24864
	ctx.r3.s64 = ctx.r11.s64 + -24864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF6BC"))) PPC_WEAK_FUNC(sub_83CCF6BC);
PPC_FUNC_IMPL(__imp__sub_83CCF6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF6C0"))) PPC_WEAK_FUNC(sub_83CCF6C0);
PPC_FUNC_IMPL(__imp__sub_83CCF6C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24856
	ctx.r3.s64 = ctx.r11.s64 + -24856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF6CC"))) PPC_WEAK_FUNC(sub_83CCF6CC);
PPC_FUNC_IMPL(__imp__sub_83CCF6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF6D0"))) PPC_WEAK_FUNC(sub_83CCF6D0);
PPC_FUNC_IMPL(__imp__sub_83CCF6D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24848
	ctx.r3.s64 = ctx.r11.s64 + -24848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF6DC"))) PPC_WEAK_FUNC(sub_83CCF6DC);
PPC_FUNC_IMPL(__imp__sub_83CCF6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF6E0"))) PPC_WEAK_FUNC(sub_83CCF6E0);
PPC_FUNC_IMPL(__imp__sub_83CCF6E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24840
	ctx.r3.s64 = ctx.r11.s64 + -24840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF6EC"))) PPC_WEAK_FUNC(sub_83CCF6EC);
PPC_FUNC_IMPL(__imp__sub_83CCF6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF6F0"))) PPC_WEAK_FUNC(sub_83CCF6F0);
PPC_FUNC_IMPL(__imp__sub_83CCF6F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24832
	ctx.r3.s64 = ctx.r11.s64 + -24832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF6FC"))) PPC_WEAK_FUNC(sub_83CCF6FC);
PPC_FUNC_IMPL(__imp__sub_83CCF6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF700"))) PPC_WEAK_FUNC(sub_83CCF700);
PPC_FUNC_IMPL(__imp__sub_83CCF700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24824
	ctx.r3.s64 = ctx.r11.s64 + -24824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF70C"))) PPC_WEAK_FUNC(sub_83CCF70C);
PPC_FUNC_IMPL(__imp__sub_83CCF70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF710"))) PPC_WEAK_FUNC(sub_83CCF710);
PPC_FUNC_IMPL(__imp__sub_83CCF710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24816
	ctx.r3.s64 = ctx.r11.s64 + -24816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF71C"))) PPC_WEAK_FUNC(sub_83CCF71C);
PPC_FUNC_IMPL(__imp__sub_83CCF71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF720"))) PPC_WEAK_FUNC(sub_83CCF720);
PPC_FUNC_IMPL(__imp__sub_83CCF720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24808
	ctx.r3.s64 = ctx.r11.s64 + -24808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF72C"))) PPC_WEAK_FUNC(sub_83CCF72C);
PPC_FUNC_IMPL(__imp__sub_83CCF72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF730"))) PPC_WEAK_FUNC(sub_83CCF730);
PPC_FUNC_IMPL(__imp__sub_83CCF730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24800
	ctx.r3.s64 = ctx.r11.s64 + -24800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF73C"))) PPC_WEAK_FUNC(sub_83CCF73C);
PPC_FUNC_IMPL(__imp__sub_83CCF73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF740"))) PPC_WEAK_FUNC(sub_83CCF740);
PPC_FUNC_IMPL(__imp__sub_83CCF740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24792
	ctx.r3.s64 = ctx.r11.s64 + -24792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF74C"))) PPC_WEAK_FUNC(sub_83CCF74C);
PPC_FUNC_IMPL(__imp__sub_83CCF74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF750"))) PPC_WEAK_FUNC(sub_83CCF750);
PPC_FUNC_IMPL(__imp__sub_83CCF750) {
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
	// addi r3,r11,-11756
	ctx.r3.s64 = ctx.r11.s64 + -11756;
	// bl 0x83523120
	ctx.lr = 0x83CCF768;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-24784
	ctx.r3.s64 = ctx.r10.s64 + -24784;
	// bl 0x831cdcc8
	ctx.lr = 0x83CCF774;
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

__attribute__((alias("__imp__sub_83CCF784"))) PPC_WEAK_FUNC(sub_83CCF784);
PPC_FUNC_IMPL(__imp__sub_83CCF784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF788"))) PPC_WEAK_FUNC(sub_83CCF788);
PPC_FUNC_IMPL(__imp__sub_83CCF788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24768
	ctx.r3.s64 = ctx.r11.s64 + -24768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF794"))) PPC_WEAK_FUNC(sub_83CCF794);
PPC_FUNC_IMPL(__imp__sub_83CCF794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF798"))) PPC_WEAK_FUNC(sub_83CCF798);
PPC_FUNC_IMPL(__imp__sub_83CCF798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24760
	ctx.r3.s64 = ctx.r11.s64 + -24760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF7A4"))) PPC_WEAK_FUNC(sub_83CCF7A4);
PPC_FUNC_IMPL(__imp__sub_83CCF7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF7A8"))) PPC_WEAK_FUNC(sub_83CCF7A8);
PPC_FUNC_IMPL(__imp__sub_83CCF7A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24752
	ctx.r3.s64 = ctx.r11.s64 + -24752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF7B4"))) PPC_WEAK_FUNC(sub_83CCF7B4);
PPC_FUNC_IMPL(__imp__sub_83CCF7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF7B8"))) PPC_WEAK_FUNC(sub_83CCF7B8);
PPC_FUNC_IMPL(__imp__sub_83CCF7B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24744
	ctx.r3.s64 = ctx.r11.s64 + -24744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF7C4"))) PPC_WEAK_FUNC(sub_83CCF7C4);
PPC_FUNC_IMPL(__imp__sub_83CCF7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF7C8"))) PPC_WEAK_FUNC(sub_83CCF7C8);
PPC_FUNC_IMPL(__imp__sub_83CCF7C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24736
	ctx.r3.s64 = ctx.r11.s64 + -24736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF7D4"))) PPC_WEAK_FUNC(sub_83CCF7D4);
PPC_FUNC_IMPL(__imp__sub_83CCF7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF7D8"))) PPC_WEAK_FUNC(sub_83CCF7D8);
PPC_FUNC_IMPL(__imp__sub_83CCF7D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24728
	ctx.r3.s64 = ctx.r11.s64 + -24728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF7E4"))) PPC_WEAK_FUNC(sub_83CCF7E4);
PPC_FUNC_IMPL(__imp__sub_83CCF7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF7E8"))) PPC_WEAK_FUNC(sub_83CCF7E8);
PPC_FUNC_IMPL(__imp__sub_83CCF7E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24720
	ctx.r3.s64 = ctx.r11.s64 + -24720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF7F4"))) PPC_WEAK_FUNC(sub_83CCF7F4);
PPC_FUNC_IMPL(__imp__sub_83CCF7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF7F8"))) PPC_WEAK_FUNC(sub_83CCF7F8);
PPC_FUNC_IMPL(__imp__sub_83CCF7F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24712
	ctx.r3.s64 = ctx.r11.s64 + -24712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF804"))) PPC_WEAK_FUNC(sub_83CCF804);
PPC_FUNC_IMPL(__imp__sub_83CCF804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF808"))) PPC_WEAK_FUNC(sub_83CCF808);
PPC_FUNC_IMPL(__imp__sub_83CCF808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24704
	ctx.r3.s64 = ctx.r11.s64 + -24704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF814"))) PPC_WEAK_FUNC(sub_83CCF814);
PPC_FUNC_IMPL(__imp__sub_83CCF814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF818"))) PPC_WEAK_FUNC(sub_83CCF818);
PPC_FUNC_IMPL(__imp__sub_83CCF818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24696
	ctx.r3.s64 = ctx.r11.s64 + -24696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF824"))) PPC_WEAK_FUNC(sub_83CCF824);
PPC_FUNC_IMPL(__imp__sub_83CCF824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF828"))) PPC_WEAK_FUNC(sub_83CCF828);
PPC_FUNC_IMPL(__imp__sub_83CCF828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24688
	ctx.r3.s64 = ctx.r11.s64 + -24688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF834"))) PPC_WEAK_FUNC(sub_83CCF834);
PPC_FUNC_IMPL(__imp__sub_83CCF834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF838"))) PPC_WEAK_FUNC(sub_83CCF838);
PPC_FUNC_IMPL(__imp__sub_83CCF838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24680
	ctx.r3.s64 = ctx.r11.s64 + -24680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF844"))) PPC_WEAK_FUNC(sub_83CCF844);
PPC_FUNC_IMPL(__imp__sub_83CCF844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF848"))) PPC_WEAK_FUNC(sub_83CCF848);
PPC_FUNC_IMPL(__imp__sub_83CCF848) {
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
	// addi r3,r11,-11748
	ctx.r3.s64 = ctx.r11.s64 + -11748;
	// bl 0x83523120
	ctx.lr = 0x83CCF860;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-24672
	ctx.r3.s64 = ctx.r10.s64 + -24672;
	// bl 0x831cdcc8
	ctx.lr = 0x83CCF86C;
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

__attribute__((alias("__imp__sub_83CCF87C"))) PPC_WEAK_FUNC(sub_83CCF87C);
PPC_FUNC_IMPL(__imp__sub_83CCF87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF880"))) PPC_WEAK_FUNC(sub_83CCF880);
PPC_FUNC_IMPL(__imp__sub_83CCF880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24656
	ctx.r3.s64 = ctx.r11.s64 + -24656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF88C"))) PPC_WEAK_FUNC(sub_83CCF88C);
PPC_FUNC_IMPL(__imp__sub_83CCF88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF890"))) PPC_WEAK_FUNC(sub_83CCF890);
PPC_FUNC_IMPL(__imp__sub_83CCF890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24648
	ctx.r3.s64 = ctx.r11.s64 + -24648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF89C"))) PPC_WEAK_FUNC(sub_83CCF89C);
PPC_FUNC_IMPL(__imp__sub_83CCF89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF8A0"))) PPC_WEAK_FUNC(sub_83CCF8A0);
PPC_FUNC_IMPL(__imp__sub_83CCF8A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24640
	ctx.r3.s64 = ctx.r11.s64 + -24640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF8AC"))) PPC_WEAK_FUNC(sub_83CCF8AC);
PPC_FUNC_IMPL(__imp__sub_83CCF8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF8B0"))) PPC_WEAK_FUNC(sub_83CCF8B0);
PPC_FUNC_IMPL(__imp__sub_83CCF8B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24632
	ctx.r3.s64 = ctx.r11.s64 + -24632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF8BC"))) PPC_WEAK_FUNC(sub_83CCF8BC);
PPC_FUNC_IMPL(__imp__sub_83CCF8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF8C0"))) PPC_WEAK_FUNC(sub_83CCF8C0);
PPC_FUNC_IMPL(__imp__sub_83CCF8C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24624
	ctx.r3.s64 = ctx.r11.s64 + -24624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF8CC"))) PPC_WEAK_FUNC(sub_83CCF8CC);
PPC_FUNC_IMPL(__imp__sub_83CCF8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF8D0"))) PPC_WEAK_FUNC(sub_83CCF8D0);
PPC_FUNC_IMPL(__imp__sub_83CCF8D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24616
	ctx.r3.s64 = ctx.r11.s64 + -24616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF8DC"))) PPC_WEAK_FUNC(sub_83CCF8DC);
PPC_FUNC_IMPL(__imp__sub_83CCF8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF8E0"))) PPC_WEAK_FUNC(sub_83CCF8E0);
PPC_FUNC_IMPL(__imp__sub_83CCF8E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24608
	ctx.r3.s64 = ctx.r11.s64 + -24608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF8EC"))) PPC_WEAK_FUNC(sub_83CCF8EC);
PPC_FUNC_IMPL(__imp__sub_83CCF8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF8F0"))) PPC_WEAK_FUNC(sub_83CCF8F0);
PPC_FUNC_IMPL(__imp__sub_83CCF8F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24600
	ctx.r3.s64 = ctx.r11.s64 + -24600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF8FC"))) PPC_WEAK_FUNC(sub_83CCF8FC);
PPC_FUNC_IMPL(__imp__sub_83CCF8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF900"))) PPC_WEAK_FUNC(sub_83CCF900);
PPC_FUNC_IMPL(__imp__sub_83CCF900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24592
	ctx.r3.s64 = ctx.r11.s64 + -24592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF90C"))) PPC_WEAK_FUNC(sub_83CCF90C);
PPC_FUNC_IMPL(__imp__sub_83CCF90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF910"))) PPC_WEAK_FUNC(sub_83CCF910);
PPC_FUNC_IMPL(__imp__sub_83CCF910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24584
	ctx.r3.s64 = ctx.r11.s64 + -24584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF91C"))) PPC_WEAK_FUNC(sub_83CCF91C);
PPC_FUNC_IMPL(__imp__sub_83CCF91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF920"))) PPC_WEAK_FUNC(sub_83CCF920);
PPC_FUNC_IMPL(__imp__sub_83CCF920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24576
	ctx.r3.s64 = ctx.r11.s64 + -24576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF92C"))) PPC_WEAK_FUNC(sub_83CCF92C);
PPC_FUNC_IMPL(__imp__sub_83CCF92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF930"))) PPC_WEAK_FUNC(sub_83CCF930);
PPC_FUNC_IMPL(__imp__sub_83CCF930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24568
	ctx.r3.s64 = ctx.r11.s64 + -24568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF93C"))) PPC_WEAK_FUNC(sub_83CCF93C);
PPC_FUNC_IMPL(__imp__sub_83CCF93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF940"))) PPC_WEAK_FUNC(sub_83CCF940);
PPC_FUNC_IMPL(__imp__sub_83CCF940) {
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
	// addi r3,r11,-11740
	ctx.r3.s64 = ctx.r11.s64 + -11740;
	// bl 0x83523120
	ctx.lr = 0x83CCF958;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-24560
	ctx.r3.s64 = ctx.r10.s64 + -24560;
	// bl 0x831cdcc8
	ctx.lr = 0x83CCF964;
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

__attribute__((alias("__imp__sub_83CCF974"))) PPC_WEAK_FUNC(sub_83CCF974);
PPC_FUNC_IMPL(__imp__sub_83CCF974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF978"))) PPC_WEAK_FUNC(sub_83CCF978);
PPC_FUNC_IMPL(__imp__sub_83CCF978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24544
	ctx.r3.s64 = ctx.r11.s64 + -24544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF984"))) PPC_WEAK_FUNC(sub_83CCF984);
PPC_FUNC_IMPL(__imp__sub_83CCF984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF988"))) PPC_WEAK_FUNC(sub_83CCF988);
PPC_FUNC_IMPL(__imp__sub_83CCF988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24536
	ctx.r3.s64 = ctx.r11.s64 + -24536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF994"))) PPC_WEAK_FUNC(sub_83CCF994);
PPC_FUNC_IMPL(__imp__sub_83CCF994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF998"))) PPC_WEAK_FUNC(sub_83CCF998);
PPC_FUNC_IMPL(__imp__sub_83CCF998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24528
	ctx.r3.s64 = ctx.r11.s64 + -24528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF9A4"))) PPC_WEAK_FUNC(sub_83CCF9A4);
PPC_FUNC_IMPL(__imp__sub_83CCF9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF9A8"))) PPC_WEAK_FUNC(sub_83CCF9A8);
PPC_FUNC_IMPL(__imp__sub_83CCF9A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24520
	ctx.r3.s64 = ctx.r11.s64 + -24520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF9B4"))) PPC_WEAK_FUNC(sub_83CCF9B4);
PPC_FUNC_IMPL(__imp__sub_83CCF9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF9B8"))) PPC_WEAK_FUNC(sub_83CCF9B8);
PPC_FUNC_IMPL(__imp__sub_83CCF9B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24512
	ctx.r3.s64 = ctx.r11.s64 + -24512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF9C4"))) PPC_WEAK_FUNC(sub_83CCF9C4);
PPC_FUNC_IMPL(__imp__sub_83CCF9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF9C8"))) PPC_WEAK_FUNC(sub_83CCF9C8);
PPC_FUNC_IMPL(__imp__sub_83CCF9C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24504
	ctx.r3.s64 = ctx.r11.s64 + -24504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF9D4"))) PPC_WEAK_FUNC(sub_83CCF9D4);
PPC_FUNC_IMPL(__imp__sub_83CCF9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF9D8"))) PPC_WEAK_FUNC(sub_83CCF9D8);
PPC_FUNC_IMPL(__imp__sub_83CCF9D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24496
	ctx.r3.s64 = ctx.r11.s64 + -24496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF9E4"))) PPC_WEAK_FUNC(sub_83CCF9E4);
PPC_FUNC_IMPL(__imp__sub_83CCF9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF9E8"))) PPC_WEAK_FUNC(sub_83CCF9E8);
PPC_FUNC_IMPL(__imp__sub_83CCF9E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24488
	ctx.r3.s64 = ctx.r11.s64 + -24488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCF9F4"))) PPC_WEAK_FUNC(sub_83CCF9F4);
PPC_FUNC_IMPL(__imp__sub_83CCF9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCF9F8"))) PPC_WEAK_FUNC(sub_83CCF9F8);
PPC_FUNC_IMPL(__imp__sub_83CCF9F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24480
	ctx.r3.s64 = ctx.r11.s64 + -24480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCFA04"))) PPC_WEAK_FUNC(sub_83CCFA04);
PPC_FUNC_IMPL(__imp__sub_83CCFA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCFA08"))) PPC_WEAK_FUNC(sub_83CCFA08);
PPC_FUNC_IMPL(__imp__sub_83CCFA08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24472
	ctx.r3.s64 = ctx.r11.s64 + -24472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCFA14"))) PPC_WEAK_FUNC(sub_83CCFA14);
PPC_FUNC_IMPL(__imp__sub_83CCFA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCFA18"))) PPC_WEAK_FUNC(sub_83CCFA18);
PPC_FUNC_IMPL(__imp__sub_83CCFA18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24464
	ctx.r3.s64 = ctx.r11.s64 + -24464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCFA24"))) PPC_WEAK_FUNC(sub_83CCFA24);
PPC_FUNC_IMPL(__imp__sub_83CCFA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCFA28"))) PPC_WEAK_FUNC(sub_83CCFA28);
PPC_FUNC_IMPL(__imp__sub_83CCFA28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24456
	ctx.r3.s64 = ctx.r11.s64 + -24456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCFA34"))) PPC_WEAK_FUNC(sub_83CCFA34);
PPC_FUNC_IMPL(__imp__sub_83CCFA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCFA38"))) PPC_WEAK_FUNC(sub_83CCFA38);
PPC_FUNC_IMPL(__imp__sub_83CCFA38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,-20516
	ctx.r4.s64 = ctx.r11.s64 + -20516;
	// lis r7,-31743
	ctx.r7.s64 = -2080309248;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,-11720
	ctx.r3.s64 = ctx.r7.s64 + -11720;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCFA68"))) PPC_WEAK_FUNC(sub_83CCFA68);
PPC_FUNC_IMPL(__imp__sub_83CCFA68) {
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
	// addi r3,r11,-11728
	ctx.r3.s64 = ctx.r11.s64 + -11728;
	// bl 0x83523120
	ctx.lr = 0x83CCFA80;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-24448
	ctx.r3.s64 = ctx.r10.s64 + -24448;
	// bl 0x831cdcc8
	ctx.lr = 0x83CCFA8C;
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

__attribute__((alias("__imp__sub_83CCFA9C"))) PPC_WEAK_FUNC(sub_83CCFA9C);
PPC_FUNC_IMPL(__imp__sub_83CCFA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCFAA0"))) PPC_WEAK_FUNC(sub_83CCFAA0);
PPC_FUNC_IMPL(__imp__sub_83CCFAA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r3,r11,-11704
	ctx.r3.s64 = ctx.r11.s64 + -11704;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x831cdcf0
	sub_831CDCF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCFAB4"))) PPC_WEAK_FUNC(sub_83CCFAB4);
PPC_FUNC_IMPL(__imp__sub_83CCFAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCFAB8"))) PPC_WEAK_FUNC(sub_83CCFAB8);
PPC_FUNC_IMPL(__imp__sub_83CCFAB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// li r9,20
	ctx.r9.s64 = 20;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r10,r11,-11616
	ctx.r10.s64 = ctx.r11.s64 + -11616;
	// addi r11,r10,72
	ctx.r11.s64 = ctx.r10.s64 + 72;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// lfs f0,9008(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// li r9,-1
	ctx.r9.s64 = -1;
loc_83CCFADC:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// stfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfsu f0,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83ccfadc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83CCFADC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CCFAF4"))) PPC_WEAK_FUNC(sub_83CCFAF4);
PPC_FUNC_IMPL(__imp__sub_83CCFAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCFAF8"))) PPC_WEAK_FUNC(sub_83CCFAF8);
PPC_FUNC_IMPL(__imp__sub_83CCFAF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24432
	ctx.r3.s64 = ctx.r11.s64 + -24432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCFB04"))) PPC_WEAK_FUNC(sub_83CCFB04);
PPC_FUNC_IMPL(__imp__sub_83CCFB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCFB08"))) PPC_WEAK_FUNC(sub_83CCFB08);
PPC_FUNC_IMPL(__imp__sub_83CCFB08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24424
	ctx.r3.s64 = ctx.r11.s64 + -24424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCFB14"))) PPC_WEAK_FUNC(sub_83CCFB14);
PPC_FUNC_IMPL(__imp__sub_83CCFB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCFB18"))) PPC_WEAK_FUNC(sub_83CCFB18);
PPC_FUNC_IMPL(__imp__sub_83CCFB18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24416
	ctx.r3.s64 = ctx.r11.s64 + -24416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCFB24"))) PPC_WEAK_FUNC(sub_83CCFB24);
PPC_FUNC_IMPL(__imp__sub_83CCFB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCFB28"))) PPC_WEAK_FUNC(sub_83CCFB28);
PPC_FUNC_IMPL(__imp__sub_83CCFB28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24408
	ctx.r3.s64 = ctx.r11.s64 + -24408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCFB34"))) PPC_WEAK_FUNC(sub_83CCFB34);
PPC_FUNC_IMPL(__imp__sub_83CCFB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCFB38"))) PPC_WEAK_FUNC(sub_83CCFB38);
PPC_FUNC_IMPL(__imp__sub_83CCFB38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24400
	ctx.r3.s64 = ctx.r11.s64 + -24400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCFB44"))) PPC_WEAK_FUNC(sub_83CCFB44);
PPC_FUNC_IMPL(__imp__sub_83CCFB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCFB48"))) PPC_WEAK_FUNC(sub_83CCFB48);
PPC_FUNC_IMPL(__imp__sub_83CCFB48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24392
	ctx.r3.s64 = ctx.r11.s64 + -24392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCFB54"))) PPC_WEAK_FUNC(sub_83CCFB54);
PPC_FUNC_IMPL(__imp__sub_83CCFB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCFB58"))) PPC_WEAK_FUNC(sub_83CCFB58);
PPC_FUNC_IMPL(__imp__sub_83CCFB58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24384
	ctx.r3.s64 = ctx.r11.s64 + -24384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCFB64"))) PPC_WEAK_FUNC(sub_83CCFB64);
PPC_FUNC_IMPL(__imp__sub_83CCFB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCFB68"))) PPC_WEAK_FUNC(sub_83CCFB68);
PPC_FUNC_IMPL(__imp__sub_83CCFB68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24376
	ctx.r3.s64 = ctx.r11.s64 + -24376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCFB74"))) PPC_WEAK_FUNC(sub_83CCFB74);
PPC_FUNC_IMPL(__imp__sub_83CCFB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCFB78"))) PPC_WEAK_FUNC(sub_83CCFB78);
PPC_FUNC_IMPL(__imp__sub_83CCFB78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24368
	ctx.r3.s64 = ctx.r11.s64 + -24368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCFB84"))) PPC_WEAK_FUNC(sub_83CCFB84);
PPC_FUNC_IMPL(__imp__sub_83CCFB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCFB88"))) PPC_WEAK_FUNC(sub_83CCFB88);
PPC_FUNC_IMPL(__imp__sub_83CCFB88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24360
	ctx.r3.s64 = ctx.r11.s64 + -24360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCFB94"))) PPC_WEAK_FUNC(sub_83CCFB94);
PPC_FUNC_IMPL(__imp__sub_83CCFB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCFB98"))) PPC_WEAK_FUNC(sub_83CCFB98);
PPC_FUNC_IMPL(__imp__sub_83CCFB98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24352
	ctx.r3.s64 = ctx.r11.s64 + -24352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCFBA4"))) PPC_WEAK_FUNC(sub_83CCFBA4);
PPC_FUNC_IMPL(__imp__sub_83CCFBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCFBA8"))) PPC_WEAK_FUNC(sub_83CCFBA8);
PPC_FUNC_IMPL(__imp__sub_83CCFBA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24344
	ctx.r3.s64 = ctx.r11.s64 + -24344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCFBB4"))) PPC_WEAK_FUNC(sub_83CCFBB4);
PPC_FUNC_IMPL(__imp__sub_83CCFBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCFBB8"))) PPC_WEAK_FUNC(sub_83CCFBB8);
PPC_FUNC_IMPL(__imp__sub_83CCFBB8) {
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
	// addi r3,r11,-9764
	ctx.r3.s64 = ctx.r11.s64 + -9764;
	// bl 0x82596fa8
	ctx.lr = 0x83CCFBD0;
	sub_82596FA8(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-24336
	ctx.r3.s64 = ctx.r10.s64 + -24336;
	// bl 0x831cdcc8
	ctx.lr = 0x83CCFBDC;
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

__attribute__((alias("__imp__sub_83CCFBEC"))) PPC_WEAK_FUNC(sub_83CCFBEC);
PPC_FUNC_IMPL(__imp__sub_83CCFBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCFBF0"))) PPC_WEAK_FUNC(sub_83CCFBF0);
PPC_FUNC_IMPL(__imp__sub_83CCFBF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24320
	ctx.r3.s64 = ctx.r11.s64 + -24320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCFBFC"))) PPC_WEAK_FUNC(sub_83CCFBFC);
PPC_FUNC_IMPL(__imp__sub_83CCFBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCFC00"))) PPC_WEAK_FUNC(sub_83CCFC00);
PPC_FUNC_IMPL(__imp__sub_83CCFC00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24312
	ctx.r3.s64 = ctx.r11.s64 + -24312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCFC0C"))) PPC_WEAK_FUNC(sub_83CCFC0C);
PPC_FUNC_IMPL(__imp__sub_83CCFC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCFC10"))) PPC_WEAK_FUNC(sub_83CCFC10);
PPC_FUNC_IMPL(__imp__sub_83CCFC10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24304
	ctx.r3.s64 = ctx.r11.s64 + -24304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCFC1C"))) PPC_WEAK_FUNC(sub_83CCFC1C);
PPC_FUNC_IMPL(__imp__sub_83CCFC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCFC20"))) PPC_WEAK_FUNC(sub_83CCFC20);
PPC_FUNC_IMPL(__imp__sub_83CCFC20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24296
	ctx.r3.s64 = ctx.r11.s64 + -24296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCFC2C"))) PPC_WEAK_FUNC(sub_83CCFC2C);
PPC_FUNC_IMPL(__imp__sub_83CCFC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCFC30"))) PPC_WEAK_FUNC(sub_83CCFC30);
PPC_FUNC_IMPL(__imp__sub_83CCFC30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24288
	ctx.r3.s64 = ctx.r11.s64 + -24288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCFC3C"))) PPC_WEAK_FUNC(sub_83CCFC3C);
PPC_FUNC_IMPL(__imp__sub_83CCFC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCFC40"))) PPC_WEAK_FUNC(sub_83CCFC40);
PPC_FUNC_IMPL(__imp__sub_83CCFC40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24280
	ctx.r3.s64 = ctx.r11.s64 + -24280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCFC4C"))) PPC_WEAK_FUNC(sub_83CCFC4C);
PPC_FUNC_IMPL(__imp__sub_83CCFC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCFC50"))) PPC_WEAK_FUNC(sub_83CCFC50);
PPC_FUNC_IMPL(__imp__sub_83CCFC50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24272
	ctx.r3.s64 = ctx.r11.s64 + -24272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCFC5C"))) PPC_WEAK_FUNC(sub_83CCFC5C);
PPC_FUNC_IMPL(__imp__sub_83CCFC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCFC60"))) PPC_WEAK_FUNC(sub_83CCFC60);
PPC_FUNC_IMPL(__imp__sub_83CCFC60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24264
	ctx.r3.s64 = ctx.r11.s64 + -24264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCFC6C"))) PPC_WEAK_FUNC(sub_83CCFC6C);
PPC_FUNC_IMPL(__imp__sub_83CCFC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCFC70"))) PPC_WEAK_FUNC(sub_83CCFC70);
PPC_FUNC_IMPL(__imp__sub_83CCFC70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24256
	ctx.r3.s64 = ctx.r11.s64 + -24256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCFC7C"))) PPC_WEAK_FUNC(sub_83CCFC7C);
PPC_FUNC_IMPL(__imp__sub_83CCFC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCFC80"))) PPC_WEAK_FUNC(sub_83CCFC80);
PPC_FUNC_IMPL(__imp__sub_83CCFC80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24248
	ctx.r3.s64 = ctx.r11.s64 + -24248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCFC8C"))) PPC_WEAK_FUNC(sub_83CCFC8C);
PPC_FUNC_IMPL(__imp__sub_83CCFC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCFC90"))) PPC_WEAK_FUNC(sub_83CCFC90);
PPC_FUNC_IMPL(__imp__sub_83CCFC90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24240
	ctx.r3.s64 = ctx.r11.s64 + -24240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCFC9C"))) PPC_WEAK_FUNC(sub_83CCFC9C);
PPC_FUNC_IMPL(__imp__sub_83CCFC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCFCA0"))) PPC_WEAK_FUNC(sub_83CCFCA0);
PPC_FUNC_IMPL(__imp__sub_83CCFCA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24232
	ctx.r3.s64 = ctx.r11.s64 + -24232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCFCAC"))) PPC_WEAK_FUNC(sub_83CCFCAC);
PPC_FUNC_IMPL(__imp__sub_83CCFCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCFCB0"))) PPC_WEAK_FUNC(sub_83CCFCB0);
PPC_FUNC_IMPL(__imp__sub_83CCFCB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24224
	ctx.r3.s64 = ctx.r11.s64 + -24224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCFCBC"))) PPC_WEAK_FUNC(sub_83CCFCBC);
PPC_FUNC_IMPL(__imp__sub_83CCFCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCFCC0"))) PPC_WEAK_FUNC(sub_83CCFCC0);
PPC_FUNC_IMPL(__imp__sub_83CCFCC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24216
	ctx.r3.s64 = ctx.r11.s64 + -24216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCFCCC"))) PPC_WEAK_FUNC(sub_83CCFCCC);
PPC_FUNC_IMPL(__imp__sub_83CCFCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCFCD0"))) PPC_WEAK_FUNC(sub_83CCFCD0);
PPC_FUNC_IMPL(__imp__sub_83CCFCD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24208
	ctx.r3.s64 = ctx.r11.s64 + -24208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCFCDC"))) PPC_WEAK_FUNC(sub_83CCFCDC);
PPC_FUNC_IMPL(__imp__sub_83CCFCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCFCE0"))) PPC_WEAK_FUNC(sub_83CCFCE0);
PPC_FUNC_IMPL(__imp__sub_83CCFCE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24200
	ctx.r3.s64 = ctx.r11.s64 + -24200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCFCEC"))) PPC_WEAK_FUNC(sub_83CCFCEC);
PPC_FUNC_IMPL(__imp__sub_83CCFCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCFCF0"))) PPC_WEAK_FUNC(sub_83CCFCF0);
PPC_FUNC_IMPL(__imp__sub_83CCFCF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24192
	ctx.r3.s64 = ctx.r11.s64 + -24192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCFCFC"))) PPC_WEAK_FUNC(sub_83CCFCFC);
PPC_FUNC_IMPL(__imp__sub_83CCFCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCFD00"))) PPC_WEAK_FUNC(sub_83CCFD00);
PPC_FUNC_IMPL(__imp__sub_83CCFD00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24184
	ctx.r3.s64 = ctx.r11.s64 + -24184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCFD0C"))) PPC_WEAK_FUNC(sub_83CCFD0C);
PPC_FUNC_IMPL(__imp__sub_83CCFD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCFD10"))) PPC_WEAK_FUNC(sub_83CCFD10);
PPC_FUNC_IMPL(__imp__sub_83CCFD10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24176
	ctx.r3.s64 = ctx.r11.s64 + -24176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCFD1C"))) PPC_WEAK_FUNC(sub_83CCFD1C);
PPC_FUNC_IMPL(__imp__sub_83CCFD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCFD20"))) PPC_WEAK_FUNC(sub_83CCFD20);
PPC_FUNC_IMPL(__imp__sub_83CCFD20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24168
	ctx.r3.s64 = ctx.r11.s64 + -24168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCFD2C"))) PPC_WEAK_FUNC(sub_83CCFD2C);
PPC_FUNC_IMPL(__imp__sub_83CCFD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCFD30"))) PPC_WEAK_FUNC(sub_83CCFD30);
PPC_FUNC_IMPL(__imp__sub_83CCFD30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24160
	ctx.r3.s64 = ctx.r11.s64 + -24160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCFD3C"))) PPC_WEAK_FUNC(sub_83CCFD3C);
PPC_FUNC_IMPL(__imp__sub_83CCFD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCFD40"))) PPC_WEAK_FUNC(sub_83CCFD40);
PPC_FUNC_IMPL(__imp__sub_83CCFD40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24152
	ctx.r3.s64 = ctx.r11.s64 + -24152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCFD4C"))) PPC_WEAK_FUNC(sub_83CCFD4C);
PPC_FUNC_IMPL(__imp__sub_83CCFD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCFD50"))) PPC_WEAK_FUNC(sub_83CCFD50);
PPC_FUNC_IMPL(__imp__sub_83CCFD50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24144
	ctx.r3.s64 = ctx.r11.s64 + -24144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCFD5C"))) PPC_WEAK_FUNC(sub_83CCFD5C);
PPC_FUNC_IMPL(__imp__sub_83CCFD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCFD60"))) PPC_WEAK_FUNC(sub_83CCFD60);
PPC_FUNC_IMPL(__imp__sub_83CCFD60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24136
	ctx.r3.s64 = ctx.r11.s64 + -24136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCFD6C"))) PPC_WEAK_FUNC(sub_83CCFD6C);
PPC_FUNC_IMPL(__imp__sub_83CCFD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCFD70"))) PPC_WEAK_FUNC(sub_83CCFD70);
PPC_FUNC_IMPL(__imp__sub_83CCFD70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24128
	ctx.r3.s64 = ctx.r11.s64 + -24128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCFD7C"))) PPC_WEAK_FUNC(sub_83CCFD7C);
PPC_FUNC_IMPL(__imp__sub_83CCFD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCFD80"))) PPC_WEAK_FUNC(sub_83CCFD80);
PPC_FUNC_IMPL(__imp__sub_83CCFD80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24120
	ctx.r3.s64 = ctx.r11.s64 + -24120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCFD8C"))) PPC_WEAK_FUNC(sub_83CCFD8C);
PPC_FUNC_IMPL(__imp__sub_83CCFD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCFD90"))) PPC_WEAK_FUNC(sub_83CCFD90);
PPC_FUNC_IMPL(__imp__sub_83CCFD90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24112
	ctx.r3.s64 = ctx.r11.s64 + -24112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCFD9C"))) PPC_WEAK_FUNC(sub_83CCFD9C);
PPC_FUNC_IMPL(__imp__sub_83CCFD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCFDA0"))) PPC_WEAK_FUNC(sub_83CCFDA0);
PPC_FUNC_IMPL(__imp__sub_83CCFDA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24104
	ctx.r3.s64 = ctx.r11.s64 + -24104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCFDAC"))) PPC_WEAK_FUNC(sub_83CCFDAC);
PPC_FUNC_IMPL(__imp__sub_83CCFDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCFDB0"))) PPC_WEAK_FUNC(sub_83CCFDB0);
PPC_FUNC_IMPL(__imp__sub_83CCFDB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24096
	ctx.r3.s64 = ctx.r11.s64 + -24096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCFDBC"))) PPC_WEAK_FUNC(sub_83CCFDBC);
PPC_FUNC_IMPL(__imp__sub_83CCFDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CCFDC0"))) PPC_WEAK_FUNC(sub_83CCFDC0);
PPC_FUNC_IMPL(__imp__sub_83CCFDC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-24088
	ctx.r3.s64 = ctx.r11.s64 + -24088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CCFDCC"))) PPC_WEAK_FUNC(sub_83CCFDCC);
PPC_FUNC_IMPL(__imp__sub_83CCFDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

