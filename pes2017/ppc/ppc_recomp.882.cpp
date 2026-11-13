#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83CA1D60"))) PPC_WEAK_FUNC(sub_83CA1D60);
PPC_FUNC_IMPL(__imp__sub_83CA1D60) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,10484
	ctx.r3.s64 = ctx.r11.s64 + 10484;
	// bl 0x83523120
	ctx.lr = 0x83CA1D78;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-22520
	ctx.r3.s64 = ctx.r10.s64 + -22520;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA1D84;
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

__attribute__((alias("__imp__sub_83CA1D94"))) PPC_WEAK_FUNC(sub_83CA1D94);
PPC_FUNC_IMPL(__imp__sub_83CA1D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1D98"))) PPC_WEAK_FUNC(sub_83CA1D98);
PPC_FUNC_IMPL(__imp__sub_83CA1D98) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,10516
	ctx.r3.s64 = ctx.r11.s64 + 10516;
	// bl 0x83523120
	ctx.lr = 0x83CA1DB0;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-22488
	ctx.r3.s64 = ctx.r10.s64 + -22488;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA1DBC;
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

__attribute__((alias("__imp__sub_83CA1DCC"))) PPC_WEAK_FUNC(sub_83CA1DCC);
PPC_FUNC_IMPL(__imp__sub_83CA1DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1DD0"))) PPC_WEAK_FUNC(sub_83CA1DD0);
PPC_FUNC_IMPL(__imp__sub_83CA1DD0) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,10524
	ctx.r3.s64 = ctx.r11.s64 + 10524;
	// bl 0x83523120
	ctx.lr = 0x83CA1DE8;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-22472
	ctx.r3.s64 = ctx.r10.s64 + -22472;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA1DF4;
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

__attribute__((alias("__imp__sub_83CA1E04"))) PPC_WEAK_FUNC(sub_83CA1E04);
PPC_FUNC_IMPL(__imp__sub_83CA1E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1E08"))) PPC_WEAK_FUNC(sub_83CA1E08);
PPC_FUNC_IMPL(__imp__sub_83CA1E08) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,10532
	ctx.r3.s64 = ctx.r11.s64 + 10532;
	// bl 0x83523120
	ctx.lr = 0x83CA1E20;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-22456
	ctx.r3.s64 = ctx.r10.s64 + -22456;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA1E2C;
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

__attribute__((alias("__imp__sub_83CA1E3C"))) PPC_WEAK_FUNC(sub_83CA1E3C);
PPC_FUNC_IMPL(__imp__sub_83CA1E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1E40"))) PPC_WEAK_FUNC(sub_83CA1E40);
PPC_FUNC_IMPL(__imp__sub_83CA1E40) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,10544
	ctx.r3.s64 = ctx.r11.s64 + 10544;
	// bl 0x83523120
	ctx.lr = 0x83CA1E58;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-22440
	ctx.r3.s64 = ctx.r10.s64 + -22440;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA1E64;
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

__attribute__((alias("__imp__sub_83CA1E74"))) PPC_WEAK_FUNC(sub_83CA1E74);
PPC_FUNC_IMPL(__imp__sub_83CA1E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1E78"))) PPC_WEAK_FUNC(sub_83CA1E78);
PPC_FUNC_IMPL(__imp__sub_83CA1E78) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,10552
	ctx.r3.s64 = ctx.r11.s64 + 10552;
	// bl 0x83523120
	ctx.lr = 0x83CA1E90;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-22424
	ctx.r3.s64 = ctx.r10.s64 + -22424;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA1E9C;
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

__attribute__((alias("__imp__sub_83CA1EAC"))) PPC_WEAK_FUNC(sub_83CA1EAC);
PPC_FUNC_IMPL(__imp__sub_83CA1EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1EB0"))) PPC_WEAK_FUNC(sub_83CA1EB0);
PPC_FUNC_IMPL(__imp__sub_83CA1EB0) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,10584
	ctx.r3.s64 = ctx.r11.s64 + 10584;
	// bl 0x83523120
	ctx.lr = 0x83CA1EC8;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-22392
	ctx.r3.s64 = ctx.r10.s64 + -22392;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA1ED4;
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

__attribute__((alias("__imp__sub_83CA1EE4"))) PPC_WEAK_FUNC(sub_83CA1EE4);
PPC_FUNC_IMPL(__imp__sub_83CA1EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1EE8"))) PPC_WEAK_FUNC(sub_83CA1EE8);
PPC_FUNC_IMPL(__imp__sub_83CA1EE8) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,10616
	ctx.r3.s64 = ctx.r11.s64 + 10616;
	// bl 0x83523120
	ctx.lr = 0x83CA1F00;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-22360
	ctx.r3.s64 = ctx.r10.s64 + -22360;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA1F0C;
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

__attribute__((alias("__imp__sub_83CA1F1C"))) PPC_WEAK_FUNC(sub_83CA1F1C);
PPC_FUNC_IMPL(__imp__sub_83CA1F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1F20"))) PPC_WEAK_FUNC(sub_83CA1F20);
PPC_FUNC_IMPL(__imp__sub_83CA1F20) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,10644
	ctx.r3.s64 = ctx.r11.s64 + 10644;
	// bl 0x83523120
	ctx.lr = 0x83CA1F38;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-22328
	ctx.r3.s64 = ctx.r10.s64 + -22328;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA1F44;
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

__attribute__((alias("__imp__sub_83CA1F54"))) PPC_WEAK_FUNC(sub_83CA1F54);
PPC_FUNC_IMPL(__imp__sub_83CA1F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1F58"))) PPC_WEAK_FUNC(sub_83CA1F58);
PPC_FUNC_IMPL(__imp__sub_83CA1F58) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,10645
	ctx.r3.s64 = ctx.r11.s64 + 10645;
	// bl 0x83523120
	ctx.lr = 0x83CA1F70;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-22312
	ctx.r3.s64 = ctx.r10.s64 + -22312;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA1F7C;
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

__attribute__((alias("__imp__sub_83CA1F8C"))) PPC_WEAK_FUNC(sub_83CA1F8C);
PPC_FUNC_IMPL(__imp__sub_83CA1F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1F90"))) PPC_WEAK_FUNC(sub_83CA1F90);
PPC_FUNC_IMPL(__imp__sub_83CA1F90) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,10660
	ctx.r3.s64 = ctx.r11.s64 + 10660;
	// bl 0x83523120
	ctx.lr = 0x83CA1FA8;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-22296
	ctx.r3.s64 = ctx.r10.s64 + -22296;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA1FB4;
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

__attribute__((alias("__imp__sub_83CA1FC4"))) PPC_WEAK_FUNC(sub_83CA1FC4);
PPC_FUNC_IMPL(__imp__sub_83CA1FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA1FC8"))) PPC_WEAK_FUNC(sub_83CA1FC8);
PPC_FUNC_IMPL(__imp__sub_83CA1FC8) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,10661
	ctx.r3.s64 = ctx.r11.s64 + 10661;
	// bl 0x83523120
	ctx.lr = 0x83CA1FE0;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-22160
	ctx.r3.s64 = ctx.r10.s64 + -22160;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA1FEC;
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

__attribute__((alias("__imp__sub_83CA1FFC"))) PPC_WEAK_FUNC(sub_83CA1FFC);
PPC_FUNC_IMPL(__imp__sub_83CA1FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA2000"))) PPC_WEAK_FUNC(sub_83CA2000);
PPC_FUNC_IMPL(__imp__sub_83CA2000) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,10662
	ctx.r3.s64 = ctx.r11.s64 + 10662;
	// bl 0x83523120
	ctx.lr = 0x83CA2018;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-22144
	ctx.r3.s64 = ctx.r10.s64 + -22144;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA2024;
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

__attribute__((alias("__imp__sub_83CA2034"))) PPC_WEAK_FUNC(sub_83CA2034);
PPC_FUNC_IMPL(__imp__sub_83CA2034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA2038"))) PPC_WEAK_FUNC(sub_83CA2038);
PPC_FUNC_IMPL(__imp__sub_83CA2038) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,10668
	ctx.r3.s64 = ctx.r11.s64 + 10668;
	// bl 0x83523120
	ctx.lr = 0x83CA2050;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-22128
	ctx.r3.s64 = ctx.r10.s64 + -22128;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA205C;
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

__attribute__((alias("__imp__sub_83CA206C"))) PPC_WEAK_FUNC(sub_83CA206C);
PPC_FUNC_IMPL(__imp__sub_83CA206C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA2070"))) PPC_WEAK_FUNC(sub_83CA2070);
PPC_FUNC_IMPL(__imp__sub_83CA2070) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,10676
	ctx.r3.s64 = ctx.r11.s64 + 10676;
	// bl 0x83523120
	ctx.lr = 0x83CA2088;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-22112
	ctx.r3.s64 = ctx.r10.s64 + -22112;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA2094;
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

__attribute__((alias("__imp__sub_83CA20A4"))) PPC_WEAK_FUNC(sub_83CA20A4);
PPC_FUNC_IMPL(__imp__sub_83CA20A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA20A8"))) PPC_WEAK_FUNC(sub_83CA20A8);
PPC_FUNC_IMPL(__imp__sub_83CA20A8) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,10688
	ctx.r3.s64 = ctx.r11.s64 + 10688;
	// bl 0x83523120
	ctx.lr = 0x83CA20C0;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-22096
	ctx.r3.s64 = ctx.r10.s64 + -22096;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA20CC;
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

__attribute__((alias("__imp__sub_83CA20DC"))) PPC_WEAK_FUNC(sub_83CA20DC);
PPC_FUNC_IMPL(__imp__sub_83CA20DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA20E0"))) PPC_WEAK_FUNC(sub_83CA20E0);
PPC_FUNC_IMPL(__imp__sub_83CA20E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,10696
	ctx.r3.s64 = ctx.r11.s64 + 10696;
	// bl 0x82574ba8
	ctx.lr = 0x83CA20FC;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ca2144
	if (cr6.eq) goto loc_83CA2144;
	// li r11,-2
	ctx.r11.s64 = -2;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_83CA210C:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83ca210c
	if (!cr0.eq) goto loc_83CA210C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bgt cr6,0x83ca2144
	if (cr6.gt) goto loc_83CA2144;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83CA2144;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83CA2144:
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-22080
	ctx.r3.s64 = ctx.r11.s64 + -22080;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA2150;
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

__attribute__((alias("__imp__sub_83CA2160"))) PPC_WEAK_FUNC(sub_83CA2160);
PPC_FUNC_IMPL(__imp__sub_83CA2160) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,10712
	ctx.r3.s64 = ctx.r11.s64 + 10712;
	// bl 0x83523120
	ctx.lr = 0x83CA2178;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-21960
	ctx.r3.s64 = ctx.r10.s64 + -21960;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA2184;
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

__attribute__((alias("__imp__sub_83CA2194"))) PPC_WEAK_FUNC(sub_83CA2194);
PPC_FUNC_IMPL(__imp__sub_83CA2194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA2198"))) PPC_WEAK_FUNC(sub_83CA2198);
PPC_FUNC_IMPL(__imp__sub_83CA2198) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,10828
	ctx.r3.s64 = ctx.r11.s64 + 10828;
	// bl 0x83523120
	ctx.lr = 0x83CA21B0;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-21864
	ctx.r3.s64 = ctx.r10.s64 + -21864;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA21BC;
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

__attribute__((alias("__imp__sub_83CA21CC"))) PPC_WEAK_FUNC(sub_83CA21CC);
PPC_FUNC_IMPL(__imp__sub_83CA21CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA21D0"))) PPC_WEAK_FUNC(sub_83CA21D0);
PPC_FUNC_IMPL(__imp__sub_83CA21D0) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r3,r11,10832
	ctx.r3.s64 = ctx.r11.s64 + 10832;
	// addi r4,r10,-12584
	ctx.r4.s64 = ctx.r10.s64 + -12584;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,18
	ctx.r5.s64 = 18;
	// bl 0x83523160
	ctx.lr = 0x83CA21FC;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-21848
	ctx.r3.s64 = ctx.r9.s64 + -21848;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA2208;
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

__attribute__((alias("__imp__sub_83CA2218"))) PPC_WEAK_FUNC(sub_83CA2218);
PPC_FUNC_IMPL(__imp__sub_83CA2218) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83CA2220;
	__savegprlr_27(ctx, base);
	// lis r28,-31744
	ctx.r28.s64 = -2080374784;
	// li r31,3
	ctx.r31.s64 = 3;
	// addi r27,r28,11064
	ctx.r27.s64 = ctx.r28.s64 + 11064;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r6,67
	ctx.r6.s64 = 67;
	// lwz r10,11064(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 11064);
	// li r3,9
	ctx.r3.s64 = 9;
	// li r30,97
	ctx.r30.s64 = 97;
	// rlwimi r10,r31,1,24,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r31.u32, 1) & 0xFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF00);
	// lwz r8,8(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r7,12(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// li r29,65
	ctx.r29.s64 = 65;
	// stw r10,11064(r28)
	PPC_STORE_U32(ctx.r28.u32 + 11064, ctx.r10.u32);
	// rlwimi r8,r6,1,24,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r6.u32, 1) & 0xFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFF00);
	// lwz r10,28(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// rlwimi r7,r11,3,24,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 3) & 0xFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFF00);
	// lwz r6,16(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// rlwimi r10,r11,0,24,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF00);
	// stw r10,28(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28, ctx.r10.u32);
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// rlwimi r6,r3,0,24,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFF00);
	// lwz r4,24(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// li r3,7
	ctx.r3.s64 = 7;
	// lwz r5,20(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// rlwimi r9,r31,1,24,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r31.u32, 1) & 0xFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF00);
	// stw r7,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r7.u32);
	// li r7,7
	ctx.r7.s64 = 7;
	// stw r8,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r8.u32);
	// rlwimi r4,r30,0,24,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r30.u32, 0) & 0xFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFF00);
	// rlwimi r5,r29,0,24,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r29.u32, 0) & 0xFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFF00);
	// stw r9,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r9.u32);
	// stb r7,30(r27)
	PPC_STORE_U8(ctx.r27.u32 + 30, ctx.r7.u8);
	// li r10,7
	ctx.r10.s64 = 7;
	// stb r7,14(r27)
	PPC_STORE_U8(ctx.r27.u32 + 14, ctx.r7.u8);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stb r3,2(r27)
	PPC_STORE_U8(ctx.r27.u32 + 2, ctx.r3.u8);
	// li r31,0
	ctx.r31.s64 = 0;
	// stb r11,10(r27)
	PPC_STORE_U8(ctx.r27.u32 + 10, ctx.r11.u8);
	// lwz r8,8(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r7,12(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// stw r6,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r6.u32);
	// stw r4,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r4.u32);
	// stw r5,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r5.u32);
	// stb r10,18(r27)
	PPC_STORE_U8(ctx.r27.u32 + 18, ctx.r10.u8);
	// lwz r9,11064(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 11064);
	// stb r11,26(r27)
	PPC_STORE_U8(ctx.r27.u32 + 26, ctx.r11.u8);
	// stb r11,22(r27)
	PPC_STORE_U8(ctx.r27.u32 + 22, ctx.r11.u8);
	// lwz r6,16(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r5,20(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// lwz r4,24(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// lwz r3,28(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// stb r11,6(r27)
	PPC_STORE_U8(ctx.r27.u32 + 6, ctx.r11.u8);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// rlwimi r10,r11,16,8,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r9,r11,16,8,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
	// rlwimi r8,r11,16,8,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFF0000) | (ctx.r8.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r7,r11,16,8,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r9,11064(r28)
	PPC_STORE_U32(ctx.r28.u32 + 11064, ctx.r9.u32);
	// stw r8,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r7,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r7.u32);
	// rlwimi r6,r11,16,8,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFF0000) | (ctx.r6.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r5,r29,16,8,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r29.u32, 16) & 0xFF0000) | (ctx.r5.u64 & 0xFFFFFFFFFF00FFFF);
	// stb r10,4(r27)
	PPC_STORE_U8(ctx.r27.u32 + 4, ctx.r10.u8);
	// rlwimi r4,r30,16,8,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r30.u32, 16) & 0xFF0000) | (ctx.r4.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r6,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r6.u32);
	// rlwimi r3,r11,16,8,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFF0000) | (ctx.r3.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r5,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r5.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r4,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r4.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r31,11064(r28)
	PPC_STORE_U8(ctx.r28.u32 + 11064, ctx.r31.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r9,8(r27)
	PPC_STORE_U8(ctx.r27.u32 + 8, ctx.r9.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r3,28(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28, ctx.r3.u32);
	// stb r8,12(r27)
	PPC_STORE_U8(ctx.r27.u32 + 12, ctx.r8.u8);
	// stb r7,16(r27)
	PPC_STORE_U8(ctx.r27.u32 + 16, ctx.r7.u8);
	// stb r11,20(r27)
	PPC_STORE_U8(ctx.r27.u32 + 20, ctx.r11.u8);
	// stb r11,24(r27)
	PPC_STORE_U8(ctx.r27.u32 + 24, ctx.r11.u8);
	// stb r9,28(r27)
	PPC_STORE_U8(ctx.r27.u32 + 28, ctx.r9.u8);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA236C"))) PPC_WEAK_FUNC(sub_83CA236C);
PPC_FUNC_IMPL(__imp__sub_83CA236C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA2370"))) PPC_WEAK_FUNC(sub_83CA2370);
PPC_FUNC_IMPL(__imp__sub_83CA2370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,10896
	ctx.r31.s64 = ctx.r11.s64 + 10896;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82574ba8
	ctx.lr = 0x83CA2394;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83ca23dc
	if (cr6.eq) goto loc_83CA23DC;
	// li r11,-2
	ctx.r11.s64 = -2;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_83CA23A4:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83ca23a4
	if (!cr0.eq) goto loc_83CA23A4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bgt cr6,0x83ca23dc
	if (cr6.gt) goto loc_83CA23DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83CA23DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83CA23DC:
	// li r10,20
	ctx.r10.s64 = 20;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83CA23EC:
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// stwu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83ca23ec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83CA23EC;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-21832
	ctx.r3.s64 = ctx.r11.s64 + -21832;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA2404;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA2418"))) PPC_WEAK_FUNC(sub_83CA2418);
PPC_FUNC_IMPL(__imp__sub_83CA2418) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,11100
	ctx.r3.s64 = ctx.r11.s64 + 11100;
	// bl 0x83523120
	ctx.lr = 0x83CA2430;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-21696
	ctx.r3.s64 = ctx.r10.s64 + -21696;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA243C;
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

__attribute__((alias("__imp__sub_83CA244C"))) PPC_WEAK_FUNC(sub_83CA244C);
PPC_FUNC_IMPL(__imp__sub_83CA244C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA2450"))) PPC_WEAK_FUNC(sub_83CA2450);
PPC_FUNC_IMPL(__imp__sub_83CA2450) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r3,r11,11464
	ctx.r3.s64 = ctx.r11.s64 + 11464;
	// addi r4,r10,-1440
	ctx.r4.s64 = ctx.r10.s64 + -1440;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x83523160
	ctx.lr = 0x83CA247C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-21680
	ctx.r3.s64 = ctx.r9.s64 + -21680;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA2488;
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

__attribute__((alias("__imp__sub_83CA2498"))) PPC_WEAK_FUNC(sub_83CA2498);
PPC_FUNC_IMPL(__imp__sub_83CA2498) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r3,r11,11284
	ctx.r3.s64 = ctx.r11.s64 + 11284;
	// addi r4,r10,-1432
	ctx.r4.s64 = ctx.r10.s64 + -1432;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x83523160
	ctx.lr = 0x83CA24C4;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-21664
	ctx.r3.s64 = ctx.r9.s64 + -21664;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA24D0;
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

__attribute__((alias("__imp__sub_83CA24E0"))) PPC_WEAK_FUNC(sub_83CA24E0);
PPC_FUNC_IMPL(__imp__sub_83CA24E0) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r3,r11,11584
	ctx.r3.s64 = ctx.r11.s64 + 11584;
	// addi r4,r10,-1420
	ctx.r4.s64 = ctx.r10.s64 + -1420;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,10
	ctx.r5.s64 = 10;
	// bl 0x83523160
	ctx.lr = 0x83CA250C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-21648
	ctx.r3.s64 = ctx.r9.s64 + -21648;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA2518;
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

__attribute__((alias("__imp__sub_83CA2528"))) PPC_WEAK_FUNC(sub_83CA2528);
PPC_FUNC_IMPL(__imp__sub_83CA2528) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r3,r11,11524
	ctx.r3.s64 = ctx.r11.s64 + 11524;
	// addi r4,r10,-1408
	ctx.r4.s64 = ctx.r10.s64 + -1408;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,11
	ctx.r5.s64 = 11;
	// bl 0x83523160
	ctx.lr = 0x83CA2554;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-21632
	ctx.r3.s64 = ctx.r9.s64 + -21632;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA2560;
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

__attribute__((alias("__imp__sub_83CA2570"))) PPC_WEAK_FUNC(sub_83CA2570);
PPC_FUNC_IMPL(__imp__sub_83CA2570) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r3,r11,11224
	ctx.r3.s64 = ctx.r11.s64 + 11224;
	// addi r4,r10,-1396
	ctx.r4.s64 = ctx.r10.s64 + -1396;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,13
	ctx.r5.s64 = 13;
	// bl 0x83523160
	ctx.lr = 0x83CA259C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-21616
	ctx.r3.s64 = ctx.r9.s64 + -21616;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA25A8;
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

__attribute__((alias("__imp__sub_83CA25B8"))) PPC_WEAK_FUNC(sub_83CA25B8);
PPC_FUNC_IMPL(__imp__sub_83CA25B8) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r3,r11,11404
	ctx.r3.s64 = ctx.r11.s64 + 11404;
	// addi r4,r10,-1380
	ctx.r4.s64 = ctx.r10.s64 + -1380;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x83523160
	ctx.lr = 0x83CA25E4;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-21600
	ctx.r3.s64 = ctx.r9.s64 + -21600;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA25F0;
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

__attribute__((alias("__imp__sub_83CA2600"))) PPC_WEAK_FUNC(sub_83CA2600);
PPC_FUNC_IMPL(__imp__sub_83CA2600) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r3,r11,11344
	ctx.r3.s64 = ctx.r11.s64 + 11344;
	// addi r4,r10,-1372
	ctx.r4.s64 = ctx.r10.s64 + -1372;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x83523160
	ctx.lr = 0x83CA262C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-21584
	ctx.r3.s64 = ctx.r9.s64 + -21584;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA2638;
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

__attribute__((alias("__imp__sub_83CA2648"))) PPC_WEAK_FUNC(sub_83CA2648);
PPC_FUNC_IMPL(__imp__sub_83CA2648) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r3,r11,11164
	ctx.r3.s64 = ctx.r11.s64 + 11164;
	// addi r4,r10,-1356
	ctx.r4.s64 = ctx.r10.s64 + -1356;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,14
	ctx.r5.s64 = 14;
	// bl 0x83523160
	ctx.lr = 0x83CA2674;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-21568
	ctx.r3.s64 = ctx.r9.s64 + -21568;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA2680;
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

__attribute__((alias("__imp__sub_83CA2690"))) PPC_WEAK_FUNC(sub_83CA2690);
PPC_FUNC_IMPL(__imp__sub_83CA2690) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r3,r11,11104
	ctx.r3.s64 = ctx.r11.s64 + 11104;
	// addi r4,r10,-1340
	ctx.r4.s64 = ctx.r10.s64 + -1340;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,10
	ctx.r5.s64 = 10;
	// bl 0x83523160
	ctx.lr = 0x83CA26BC;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-21552
	ctx.r3.s64 = ctx.r9.s64 + -21552;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA26C8;
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

__attribute__((alias("__imp__sub_83CA26D8"))) PPC_WEAK_FUNC(sub_83CA26D8);
PPC_FUNC_IMPL(__imp__sub_83CA26D8) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r3,r11,11644
	ctx.r3.s64 = ctx.r11.s64 + 11644;
	// addi r4,r10,-1328
	ctx.r4.s64 = ctx.r10.s64 + -1328;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,7
	ctx.r5.s64 = 7;
	// bl 0x83523160
	ctx.lr = 0x83CA2704;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-21536
	ctx.r3.s64 = ctx.r9.s64 + -21536;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA2710;
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

__attribute__((alias("__imp__sub_83CA2720"))) PPC_WEAK_FUNC(sub_83CA2720);
PPC_FUNC_IMPL(__imp__sub_83CA2720) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,11708
	ctx.r3.s64 = ctx.r11.s64 + 11708;
	// bl 0x83523120
	ctx.lr = 0x83CA2738;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-21520
	ctx.r3.s64 = ctx.r10.s64 + -21520;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA2744;
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

__attribute__((alias("__imp__sub_83CA2754"))) PPC_WEAK_FUNC(sub_83CA2754);
PPC_FUNC_IMPL(__imp__sub_83CA2754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA2758"))) PPC_WEAK_FUNC(sub_83CA2758);
PPC_FUNC_IMPL(__imp__sub_83CA2758) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,11716
	ctx.r3.s64 = ctx.r11.s64 + 11716;
	// bl 0x83523120
	ctx.lr = 0x83CA2770;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-21504
	ctx.r3.s64 = ctx.r10.s64 + -21504;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA277C;
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

__attribute__((alias("__imp__sub_83CA278C"))) PPC_WEAK_FUNC(sub_83CA278C);
PPC_FUNC_IMPL(__imp__sub_83CA278C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA2790"))) PPC_WEAK_FUNC(sub_83CA2790);
PPC_FUNC_IMPL(__imp__sub_83CA2790) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,11724
	ctx.r3.s64 = ctx.r11.s64 + 11724;
	// bl 0x83523120
	ctx.lr = 0x83CA27A8;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-21488
	ctx.r3.s64 = ctx.r10.s64 + -21488;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA27B4;
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

__attribute__((alias("__imp__sub_83CA27C4"))) PPC_WEAK_FUNC(sub_83CA27C4);
PPC_FUNC_IMPL(__imp__sub_83CA27C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA27C8"))) PPC_WEAK_FUNC(sub_83CA27C8);
PPC_FUNC_IMPL(__imp__sub_83CA27C8) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,11732
	ctx.r3.s64 = ctx.r11.s64 + 11732;
	// bl 0x83523120
	ctx.lr = 0x83CA27E0;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-21472
	ctx.r3.s64 = ctx.r10.s64 + -21472;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA27EC;
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

__attribute__((alias("__imp__sub_83CA27FC"))) PPC_WEAK_FUNC(sub_83CA27FC);
PPC_FUNC_IMPL(__imp__sub_83CA27FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA2800"))) PPC_WEAK_FUNC(sub_83CA2800);
PPC_FUNC_IMPL(__imp__sub_83CA2800) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,11744
	ctx.r3.s64 = ctx.r11.s64 + 11744;
	// bl 0x83523120
	ctx.lr = 0x83CA2818;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-21456
	ctx.r3.s64 = ctx.r10.s64 + -21456;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA2824;
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

__attribute__((alias("__imp__sub_83CA2834"))) PPC_WEAK_FUNC(sub_83CA2834);
PPC_FUNC_IMPL(__imp__sub_83CA2834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA2838"))) PPC_WEAK_FUNC(sub_83CA2838);
PPC_FUNC_IMPL(__imp__sub_83CA2838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r31,r11,2176
	ctx.r31.s64 = ctx.r11.s64 + 2176;
	// addi r3,r31,568
	ctx.r3.s64 = ctx.r31.s64 + 568;
	// bl 0x83522540
	ctx.lr = 0x83CA2860;
	sub_83522540(ctx, base);
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,540
	ctx.r3.s64 = ctx.r31.s64 + 540;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r30,r10,11752
	ctx.r30.s64 = ctx.r10.s64 + 11752;
	// stw r11,11752(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11752, ctx.r11.u32);
	// bl 0x83522540
	ctx.lr = 0x83CA287C;
	sub_83522540(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,508
	ctx.r3.s64 = ctx.r31.s64 + 508;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x83522540
	ctx.lr = 0x83CA2890;
	sub_83522540(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,476
	ctx.r3.s64 = ctx.r31.s64 + 476;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x83522540
	ctx.lr = 0x83CA28A4;
	sub_83522540(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,440
	ctx.r3.s64 = ctx.r31.s64 + 440;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// li r4,33
	ctx.r4.s64 = 33;
	// bl 0x83522540
	ctx.lr = 0x83CA28B8;
	sub_83522540(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,404
	ctx.r3.s64 = ctx.r31.s64 + 404;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// li r4,33
	ctx.r4.s64 = 33;
	// bl 0x83522540
	ctx.lr = 0x83CA28CC;
	sub_83522540(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,372
	ctx.r3.s64 = ctx.r31.s64 + 372;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// li r4,30
	ctx.r4.s64 = 30;
	// bl 0x83522540
	ctx.lr = 0x83CA28E0;
	sub_83522540(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,340
	ctx.r3.s64 = ctx.r31.s64 + 340;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// li r4,30
	ctx.r4.s64 = 30;
	// bl 0x83522540
	ctx.lr = 0x83CA28F4;
	sub_83522540(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,308
	ctx.r3.s64 = ctx.r31.s64 + 308;
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x83522540
	ctx.lr = 0x83CA2908;
	sub_83522540(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,276
	ctx.r3.s64 = ctx.r31.s64 + 276;
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x83522540
	ctx.lr = 0x83CA291C;
	sub_83522540(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x83522540
	ctx.lr = 0x83CA2930;
	sub_83522540(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,212
	ctx.r3.s64 = ctx.r31.s64 + 212;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x83522540
	ctx.lr = 0x83CA2944;
	sub_83522540(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
	// li r4,33
	ctx.r4.s64 = 33;
	// bl 0x83522540
	ctx.lr = 0x83CA2958;
	sub_83522540(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// li r4,33
	ctx.r4.s64 = 33;
	// bl 0x83522540
	ctx.lr = 0x83CA296C;
	sub_83522540(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// stw r11,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r11.u32);
	// li r4,35
	ctx.r4.s64 = 35;
	// bl 0x83522540
	ctx.lr = 0x83CA2980;
	sub_83522540(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
	// li r4,35
	ctx.r4.s64 = 35;
	// bl 0x83522540
	ctx.lr = 0x83CA2994;
	sub_83522540(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r11,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r11.u32);
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x83522540
	ctx.lr = 0x83CA29A8;
	sub_83522540(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r11.u32);
	// li r4,37
	ctx.r4.s64 = 37;
	// bl 0x83522540
	ctx.lr = 0x83CA29BC;
	sub_83522540(ctx, base);
	// stw r3,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r3.u32);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-21440
	ctx.r3.s64 = ctx.r9.s64 + -21440;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA29CC;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA29E4"))) PPC_WEAK_FUNC(sub_83CA29E4);
PPC_FUNC_IMPL(__imp__sub_83CA29E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA29E8"))) PPC_WEAK_FUNC(sub_83CA29E8);
PPC_FUNC_IMPL(__imp__sub_83CA29E8) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,11828
	ctx.r3.s64 = ctx.r11.s64 + 11828;
	// bl 0x83523120
	ctx.lr = 0x83CA2A00;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-21352
	ctx.r3.s64 = ctx.r10.s64 + -21352;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA2A0C;
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

__attribute__((alias("__imp__sub_83CA2A1C"))) PPC_WEAK_FUNC(sub_83CA2A1C);
PPC_FUNC_IMPL(__imp__sub_83CA2A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA2A20"))) PPC_WEAK_FUNC(sub_83CA2A20);
PPC_FUNC_IMPL(__imp__sub_83CA2A20) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,11836
	ctx.r3.s64 = ctx.r11.s64 + 11836;
	// bl 0x83523120
	ctx.lr = 0x83CA2A38;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-21336
	ctx.r3.s64 = ctx.r10.s64 + -21336;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA2A44;
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

__attribute__((alias("__imp__sub_83CA2A54"))) PPC_WEAK_FUNC(sub_83CA2A54);
PPC_FUNC_IMPL(__imp__sub_83CA2A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA2A58"))) PPC_WEAK_FUNC(sub_83CA2A58);
PPC_FUNC_IMPL(__imp__sub_83CA2A58) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r3,r11,11840
	ctx.r3.s64 = ctx.r11.s64 + 11840;
	// addi r4,r10,3208
	ctx.r4.s64 = ctx.r10.s64 + 3208;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x83523160
	ctx.lr = 0x83CA2A84;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-21320
	ctx.r3.s64 = ctx.r9.s64 + -21320;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA2A90;
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

__attribute__((alias("__imp__sub_83CA2AA0"))) PPC_WEAK_FUNC(sub_83CA2AA0);
PPC_FUNC_IMPL(__imp__sub_83CA2AA0) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,11904
	ctx.r3.s64 = ctx.r11.s64 + 11904;
	// bl 0x83523120
	ctx.lr = 0x83CA2AB8;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-21304
	ctx.r3.s64 = ctx.r10.s64 + -21304;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA2AC4;
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

__attribute__((alias("__imp__sub_83CA2AD4"))) PPC_WEAK_FUNC(sub_83CA2AD4);
PPC_FUNC_IMPL(__imp__sub_83CA2AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA2AD8"))) PPC_WEAK_FUNC(sub_83CA2AD8);
PPC_FUNC_IMPL(__imp__sub_83CA2AD8) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r3,r11,12148
	ctx.r3.s64 = ctx.r11.s64 + 12148;
	// addi r4,r10,3432
	ctx.r4.s64 = ctx.r10.s64 + 3432;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x83523160
	ctx.lr = 0x83CA2B04;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-21288
	ctx.r3.s64 = ctx.r9.s64 + -21288;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA2B10;
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

__attribute__((alias("__imp__sub_83CA2B20"))) PPC_WEAK_FUNC(sub_83CA2B20);
PPC_FUNC_IMPL(__imp__sub_83CA2B20) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r3,r11,12088
	ctx.r3.s64 = ctx.r11.s64 + 12088;
	// addi r4,r10,3440
	ctx.r4.s64 = ctx.r10.s64 + 3440;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x83523160
	ctx.lr = 0x83CA2B4C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-21272
	ctx.r3.s64 = ctx.r9.s64 + -21272;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA2B58;
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

__attribute__((alias("__imp__sub_83CA2B68"))) PPC_WEAK_FUNC(sub_83CA2B68);
PPC_FUNC_IMPL(__imp__sub_83CA2B68) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r3,r11,11968
	ctx.r3.s64 = ctx.r11.s64 + 11968;
	// addi r4,r10,3448
	ctx.r4.s64 = ctx.r10.s64 + 3448;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x83523160
	ctx.lr = 0x83CA2B94;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-21256
	ctx.r3.s64 = ctx.r9.s64 + -21256;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA2BA0;
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

__attribute__((alias("__imp__sub_83CA2BB0"))) PPC_WEAK_FUNC(sub_83CA2BB0);
PPC_FUNC_IMPL(__imp__sub_83CA2BB0) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r3,r11,12028
	ctx.r3.s64 = ctx.r11.s64 + 12028;
	// addi r4,r10,3452
	ctx.r4.s64 = ctx.r10.s64 + 3452;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x83523160
	ctx.lr = 0x83CA2BDC;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-21240
	ctx.r3.s64 = ctx.r9.s64 + -21240;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA2BE8;
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

__attribute__((alias("__imp__sub_83CA2BF8"))) PPC_WEAK_FUNC(sub_83CA2BF8);
PPC_FUNC_IMPL(__imp__sub_83CA2BF8) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r3,r11,11908
	ctx.r3.s64 = ctx.r11.s64 + 11908;
	// addi r4,r10,3460
	ctx.r4.s64 = ctx.r10.s64 + 3460;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,9
	ctx.r5.s64 = 9;
	// bl 0x83523160
	ctx.lr = 0x83CA2C24;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-21224
	ctx.r3.s64 = ctx.r9.s64 + -21224;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA2C30;
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

__attribute__((alias("__imp__sub_83CA2C40"))) PPC_WEAK_FUNC(sub_83CA2C40);
PPC_FUNC_IMPL(__imp__sub_83CA2C40) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12212
	ctx.r3.s64 = ctx.r11.s64 + 12212;
	// bl 0x83523120
	ctx.lr = 0x83CA2C58;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-21208
	ctx.r3.s64 = ctx.r10.s64 + -21208;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA2C64;
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

__attribute__((alias("__imp__sub_83CA2C74"))) PPC_WEAK_FUNC(sub_83CA2C74);
PPC_FUNC_IMPL(__imp__sub_83CA2C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA2C78"))) PPC_WEAK_FUNC(sub_83CA2C78);
PPC_FUNC_IMPL(__imp__sub_83CA2C78) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12220
	ctx.r3.s64 = ctx.r11.s64 + 12220;
	// bl 0x83523120
	ctx.lr = 0x83CA2C90;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-21192
	ctx.r3.s64 = ctx.r10.s64 + -21192;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA2C9C;
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

__attribute__((alias("__imp__sub_83CA2CAC"))) PPC_WEAK_FUNC(sub_83CA2CAC);
PPC_FUNC_IMPL(__imp__sub_83CA2CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA2CB0"))) PPC_WEAK_FUNC(sub_83CA2CB0);
PPC_FUNC_IMPL(__imp__sub_83CA2CB0) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12284
	ctx.r3.s64 = ctx.r11.s64 + 12284;
	// bl 0x83523120
	ctx.lr = 0x83CA2CC8;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-21096
	ctx.r3.s64 = ctx.r10.s64 + -21096;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA2CD4;
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

__attribute__((alias("__imp__sub_83CA2CE4"))) PPC_WEAK_FUNC(sub_83CA2CE4);
PPC_FUNC_IMPL(__imp__sub_83CA2CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA2CE8"))) PPC_WEAK_FUNC(sub_83CA2CE8);
PPC_FUNC_IMPL(__imp__sub_83CA2CE8) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12285
	ctx.r3.s64 = ctx.r11.s64 + 12285;
	// bl 0x83523120
	ctx.lr = 0x83CA2D00;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-21080
	ctx.r3.s64 = ctx.r10.s64 + -21080;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA2D0C;
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

__attribute__((alias("__imp__sub_83CA2D1C"))) PPC_WEAK_FUNC(sub_83CA2D1C);
PPC_FUNC_IMPL(__imp__sub_83CA2D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA2D20"))) PPC_WEAK_FUNC(sub_83CA2D20);
PPC_FUNC_IMPL(__imp__sub_83CA2D20) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12292
	ctx.r3.s64 = ctx.r11.s64 + 12292;
	// bl 0x83523120
	ctx.lr = 0x83CA2D38;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-21064
	ctx.r3.s64 = ctx.r10.s64 + -21064;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA2D44;
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

__attribute__((alias("__imp__sub_83CA2D54"))) PPC_WEAK_FUNC(sub_83CA2D54);
PPC_FUNC_IMPL(__imp__sub_83CA2D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA2D58"))) PPC_WEAK_FUNC(sub_83CA2D58);
PPC_FUNC_IMPL(__imp__sub_83CA2D58) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12324
	ctx.r3.s64 = ctx.r11.s64 + 12324;
	// bl 0x83523120
	ctx.lr = 0x83CA2D70;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-21032
	ctx.r3.s64 = ctx.r10.s64 + -21032;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA2D7C;
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

__attribute__((alias("__imp__sub_83CA2D8C"))) PPC_WEAK_FUNC(sub_83CA2D8C);
PPC_FUNC_IMPL(__imp__sub_83CA2D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA2D90"))) PPC_WEAK_FUNC(sub_83CA2D90);
PPC_FUNC_IMPL(__imp__sub_83CA2D90) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12356
	ctx.r3.s64 = ctx.r11.s64 + 12356;
	// bl 0x83523120
	ctx.lr = 0x83CA2DA8;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-21000
	ctx.r3.s64 = ctx.r10.s64 + -21000;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA2DB4;
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

__attribute__((alias("__imp__sub_83CA2DC4"))) PPC_WEAK_FUNC(sub_83CA2DC4);
PPC_FUNC_IMPL(__imp__sub_83CA2DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA2DC8"))) PPC_WEAK_FUNC(sub_83CA2DC8);
PPC_FUNC_IMPL(__imp__sub_83CA2DC8) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12404
	ctx.r3.s64 = ctx.r11.s64 + 12404;
	// bl 0x83523120
	ctx.lr = 0x83CA2DE0;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-20968
	ctx.r3.s64 = ctx.r10.s64 + -20968;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA2DEC;
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

__attribute__((alias("__imp__sub_83CA2DFC"))) PPC_WEAK_FUNC(sub_83CA2DFC);
PPC_FUNC_IMPL(__imp__sub_83CA2DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA2E00"))) PPC_WEAK_FUNC(sub_83CA2E00);
PPC_FUNC_IMPL(__imp__sub_83CA2E00) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12440
	ctx.r3.s64 = ctx.r11.s64 + 12440;
	// bl 0x83523120
	ctx.lr = 0x83CA2E18;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-20936
	ctx.r3.s64 = ctx.r10.s64 + -20936;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA2E24;
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

__attribute__((alias("__imp__sub_83CA2E34"))) PPC_WEAK_FUNC(sub_83CA2E34);
PPC_FUNC_IMPL(__imp__sub_83CA2E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA2E38"))) PPC_WEAK_FUNC(sub_83CA2E38);
PPC_FUNC_IMPL(__imp__sub_83CA2E38) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12496
	ctx.r3.s64 = ctx.r11.s64 + 12496;
	// bl 0x83523120
	ctx.lr = 0x83CA2E50;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-20888
	ctx.r3.s64 = ctx.r10.s64 + -20888;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA2E5C;
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

__attribute__((alias("__imp__sub_83CA2E6C"))) PPC_WEAK_FUNC(sub_83CA2E6C);
PPC_FUNC_IMPL(__imp__sub_83CA2E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA2E70"))) PPC_WEAK_FUNC(sub_83CA2E70);
PPC_FUNC_IMPL(__imp__sub_83CA2E70) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12560
	ctx.r3.s64 = ctx.r11.s64 + 12560;
	// bl 0x83523120
	ctx.lr = 0x83CA2E88;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-20856
	ctx.r3.s64 = ctx.r10.s64 + -20856;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA2E94;
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

__attribute__((alias("__imp__sub_83CA2EA4"))) PPC_WEAK_FUNC(sub_83CA2EA4);
PPC_FUNC_IMPL(__imp__sub_83CA2EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA2EA8"))) PPC_WEAK_FUNC(sub_83CA2EA8);
PPC_FUNC_IMPL(__imp__sub_83CA2EA8) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12592
	ctx.r3.s64 = ctx.r11.s64 + 12592;
	// bl 0x83523120
	ctx.lr = 0x83CA2EC0;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-20824
	ctx.r3.s64 = ctx.r10.s64 + -20824;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA2ECC;
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

__attribute__((alias("__imp__sub_83CA2EDC"))) PPC_WEAK_FUNC(sub_83CA2EDC);
PPC_FUNC_IMPL(__imp__sub_83CA2EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA2EE0"))) PPC_WEAK_FUNC(sub_83CA2EE0);
PPC_FUNC_IMPL(__imp__sub_83CA2EE0) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12784
	ctx.r3.s64 = ctx.r11.s64 + 12784;
	// bl 0x83523120
	ctx.lr = 0x83CA2EF8;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-20792
	ctx.r3.s64 = ctx.r10.s64 + -20792;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA2F04;
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

__attribute__((alias("__imp__sub_83CA2F14"))) PPC_WEAK_FUNC(sub_83CA2F14);
PPC_FUNC_IMPL(__imp__sub_83CA2F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA2F18"))) PPC_WEAK_FUNC(sub_83CA2F18);
PPC_FUNC_IMPL(__imp__sub_83CA2F18) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12816
	ctx.r3.s64 = ctx.r11.s64 + 12816;
	// bl 0x83523120
	ctx.lr = 0x83CA2F30;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-20760
	ctx.r3.s64 = ctx.r10.s64 + -20760;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA2F3C;
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

__attribute__((alias("__imp__sub_83CA2F4C"))) PPC_WEAK_FUNC(sub_83CA2F4C);
PPC_FUNC_IMPL(__imp__sub_83CA2F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA2F50"))) PPC_WEAK_FUNC(sub_83CA2F50);
PPC_FUNC_IMPL(__imp__sub_83CA2F50) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12852
	ctx.r3.s64 = ctx.r11.s64 + 12852;
	// bl 0x83523120
	ctx.lr = 0x83CA2F68;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-20728
	ctx.r3.s64 = ctx.r10.s64 + -20728;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA2F74;
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

__attribute__((alias("__imp__sub_83CA2F84"))) PPC_WEAK_FUNC(sub_83CA2F84);
PPC_FUNC_IMPL(__imp__sub_83CA2F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA2F88"))) PPC_WEAK_FUNC(sub_83CA2F88);
PPC_FUNC_IMPL(__imp__sub_83CA2F88) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12860
	ctx.r3.s64 = ctx.r11.s64 + 12860;
	// bl 0x83523120
	ctx.lr = 0x83CA2FA0;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-20712
	ctx.r3.s64 = ctx.r10.s64 + -20712;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA2FAC;
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

__attribute__((alias("__imp__sub_83CA2FBC"))) PPC_WEAK_FUNC(sub_83CA2FBC);
PPC_FUNC_IMPL(__imp__sub_83CA2FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA2FC0"))) PPC_WEAK_FUNC(sub_83CA2FC0);
PPC_FUNC_IMPL(__imp__sub_83CA2FC0) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12868
	ctx.r3.s64 = ctx.r11.s64 + 12868;
	// bl 0x83523120
	ctx.lr = 0x83CA2FD8;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-20696
	ctx.r3.s64 = ctx.r10.s64 + -20696;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA2FE4;
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

__attribute__((alias("__imp__sub_83CA2FF4"))) PPC_WEAK_FUNC(sub_83CA2FF4);
PPC_FUNC_IMPL(__imp__sub_83CA2FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA2FF8"))) PPC_WEAK_FUNC(sub_83CA2FF8);
PPC_FUNC_IMPL(__imp__sub_83CA2FF8) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12876
	ctx.r3.s64 = ctx.r11.s64 + 12876;
	// bl 0x83523120
	ctx.lr = 0x83CA3010;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-20680
	ctx.r3.s64 = ctx.r10.s64 + -20680;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA301C;
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

__attribute__((alias("__imp__sub_83CA302C"))) PPC_WEAK_FUNC(sub_83CA302C);
PPC_FUNC_IMPL(__imp__sub_83CA302C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA3030"))) PPC_WEAK_FUNC(sub_83CA3030);
PPC_FUNC_IMPL(__imp__sub_83CA3030) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12884
	ctx.r3.s64 = ctx.r11.s64 + 12884;
	// bl 0x83523120
	ctx.lr = 0x83CA3048;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-20664
	ctx.r3.s64 = ctx.r10.s64 + -20664;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA3054;
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

__attribute__((alias("__imp__sub_83CA3064"))) PPC_WEAK_FUNC(sub_83CA3064);
PPC_FUNC_IMPL(__imp__sub_83CA3064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA3068"))) PPC_WEAK_FUNC(sub_83CA3068);
PPC_FUNC_IMPL(__imp__sub_83CA3068) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12916
	ctx.r3.s64 = ctx.r11.s64 + 12916;
	// bl 0x83523120
	ctx.lr = 0x83CA3080;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-20632
	ctx.r3.s64 = ctx.r10.s64 + -20632;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA308C;
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

__attribute__((alias("__imp__sub_83CA309C"))) PPC_WEAK_FUNC(sub_83CA309C);
PPC_FUNC_IMPL(__imp__sub_83CA309C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA30A0"))) PPC_WEAK_FUNC(sub_83CA30A0);
PPC_FUNC_IMPL(__imp__sub_83CA30A0) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,12948
	ctx.r3.s64 = ctx.r11.s64 + 12948;
	// bl 0x83523120
	ctx.lr = 0x83CA30B8;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-20600
	ctx.r3.s64 = ctx.r10.s64 + -20600;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA30C4;
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

__attribute__((alias("__imp__sub_83CA30D4"))) PPC_WEAK_FUNC(sub_83CA30D4);
PPC_FUNC_IMPL(__imp__sub_83CA30D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA30D8"))) PPC_WEAK_FUNC(sub_83CA30D8);
PPC_FUNC_IMPL(__imp__sub_83CA30D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// addi r9,r11,-26260
	ctx.r9.s64 = ctx.r11.s64 + -26260;
	// addi r8,r10,12960
	ctx.r8.s64 = ctx.r10.s64 + 12960;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,48
	ctx.r5.s64 = 48;
	// lvlx128 v63,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r8,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r8,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r8,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA3110"))) PPC_WEAK_FUNC(sub_83CA3110);
PPC_FUNC_IMPL(__imp__sub_83CA3110) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,13036
	ctx.r3.s64 = ctx.r11.s64 + 13036;
	// bl 0x83523120
	ctx.lr = 0x83CA3128;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-20584
	ctx.r3.s64 = ctx.r10.s64 + -20584;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA3134;
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

__attribute__((alias("__imp__sub_83CA3144"))) PPC_WEAK_FUNC(sub_83CA3144);
PPC_FUNC_IMPL(__imp__sub_83CA3144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA3148"))) PPC_WEAK_FUNC(sub_83CA3148);
PPC_FUNC_IMPL(__imp__sub_83CA3148) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,13044
	ctx.r3.s64 = ctx.r11.s64 + 13044;
	// bl 0x83523120
	ctx.lr = 0x83CA3160;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-20568
	ctx.r3.s64 = ctx.r10.s64 + -20568;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA316C;
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

__attribute__((alias("__imp__sub_83CA317C"))) PPC_WEAK_FUNC(sub_83CA317C);
PPC_FUNC_IMPL(__imp__sub_83CA317C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA3180"))) PPC_WEAK_FUNC(sub_83CA3180);
PPC_FUNC_IMPL(__imp__sub_83CA3180) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,13076
	ctx.r3.s64 = ctx.r11.s64 + 13076;
	// bl 0x83523120
	ctx.lr = 0x83CA3198;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-20536
	ctx.r3.s64 = ctx.r10.s64 + -20536;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA31A4;
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

__attribute__((alias("__imp__sub_83CA31B4"))) PPC_WEAK_FUNC(sub_83CA31B4);
PPC_FUNC_IMPL(__imp__sub_83CA31B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA31B8"))) PPC_WEAK_FUNC(sub_83CA31B8);
PPC_FUNC_IMPL(__imp__sub_83CA31B8) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,13088
	ctx.r3.s64 = ctx.r11.s64 + 13088;
	// bl 0x83523120
	ctx.lr = 0x83CA31D0;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-20520
	ctx.r3.s64 = ctx.r10.s64 + -20520;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA31DC;
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

__attribute__((alias("__imp__sub_83CA31EC"))) PPC_WEAK_FUNC(sub_83CA31EC);
PPC_FUNC_IMPL(__imp__sub_83CA31EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA31F0"))) PPC_WEAK_FUNC(sub_83CA31F0);
PPC_FUNC_IMPL(__imp__sub_83CA31F0) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,13096
	ctx.r3.s64 = ctx.r11.s64 + 13096;
	// bl 0x83523120
	ctx.lr = 0x83CA3208;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-20504
	ctx.r3.s64 = ctx.r10.s64 + -20504;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA3214;
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

__attribute__((alias("__imp__sub_83CA3224"))) PPC_WEAK_FUNC(sub_83CA3224);
PPC_FUNC_IMPL(__imp__sub_83CA3224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA3228"))) PPC_WEAK_FUNC(sub_83CA3228);
PPC_FUNC_IMPL(__imp__sub_83CA3228) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,16260
	ctx.r3.s64 = ctx.r11.s64 + 16260;
	// bl 0x83523120
	ctx.lr = 0x83CA3240;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-20488
	ctx.r3.s64 = ctx.r10.s64 + -20488;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA324C;
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

__attribute__((alias("__imp__sub_83CA325C"))) PPC_WEAK_FUNC(sub_83CA325C);
PPC_FUNC_IMPL(__imp__sub_83CA325C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA3260"))) PPC_WEAK_FUNC(sub_83CA3260);
PPC_FUNC_IMPL(__imp__sub_83CA3260) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,16288
	ctx.r3.s64 = ctx.r11.s64 + 16288;
	// bl 0x83523120
	ctx.lr = 0x83CA3278;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-20472
	ctx.r3.s64 = ctx.r10.s64 + -20472;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA3284;
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

__attribute__((alias("__imp__sub_83CA3294"))) PPC_WEAK_FUNC(sub_83CA3294);
PPC_FUNC_IMPL(__imp__sub_83CA3294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA3298"))) PPC_WEAK_FUNC(sub_83CA3298);
PPC_FUNC_IMPL(__imp__sub_83CA3298) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,16272
	ctx.r3.s64 = ctx.r11.s64 + 16272;
	// bl 0x83565aa0
	ctx.lr = 0x83CA32B0;
	sub_83565AA0(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-20456
	ctx.r3.s64 = ctx.r10.s64 + -20456;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA32BC;
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

__attribute__((alias("__imp__sub_83CA32CC"))) PPC_WEAK_FUNC(sub_83CA32CC);
PPC_FUNC_IMPL(__imp__sub_83CA32CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA32D0"))) PPC_WEAK_FUNC(sub_83CA32D0);
PPC_FUNC_IMPL(__imp__sub_83CA32D0) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,16408
	ctx.r3.s64 = ctx.r11.s64 + 16408;
	// bl 0x83523120
	ctx.lr = 0x83CA32E8;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-20440
	ctx.r3.s64 = ctx.r10.s64 + -20440;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA32F4;
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

__attribute__((alias("__imp__sub_83CA3304"))) PPC_WEAK_FUNC(sub_83CA3304);
PPC_FUNC_IMPL(__imp__sub_83CA3304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA3308"))) PPC_WEAK_FUNC(sub_83CA3308);
PPC_FUNC_IMPL(__imp__sub_83CA3308) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,16409
	ctx.r3.s64 = ctx.r11.s64 + 16409;
	// bl 0x83523120
	ctx.lr = 0x83CA3320;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-20416
	ctx.r3.s64 = ctx.r10.s64 + -20416;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA332C;
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

__attribute__((alias("__imp__sub_83CA333C"))) PPC_WEAK_FUNC(sub_83CA333C);
PPC_FUNC_IMPL(__imp__sub_83CA333C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA3340"))) PPC_WEAK_FUNC(sub_83CA3340);
PPC_FUNC_IMPL(__imp__sub_83CA3340) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,16410
	ctx.r3.s64 = ctx.r11.s64 + 16410;
	// bl 0x83523120
	ctx.lr = 0x83CA3358;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-20400
	ctx.r3.s64 = ctx.r10.s64 + -20400;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA3364;
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

__attribute__((alias("__imp__sub_83CA3374"))) PPC_WEAK_FUNC(sub_83CA3374);
PPC_FUNC_IMPL(__imp__sub_83CA3374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA3378"))) PPC_WEAK_FUNC(sub_83CA3378);
PPC_FUNC_IMPL(__imp__sub_83CA3378) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,16411
	ctx.r3.s64 = ctx.r11.s64 + 16411;
	// bl 0x83523120
	ctx.lr = 0x83CA3390;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-20384
	ctx.r3.s64 = ctx.r10.s64 + -20384;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA339C;
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

__attribute__((alias("__imp__sub_83CA33AC"))) PPC_WEAK_FUNC(sub_83CA33AC);
PPC_FUNC_IMPL(__imp__sub_83CA33AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA33B0"))) PPC_WEAK_FUNC(sub_83CA33B0);
PPC_FUNC_IMPL(__imp__sub_83CA33B0) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,16412
	ctx.r3.s64 = ctx.r11.s64 + 16412;
	// bl 0x83523120
	ctx.lr = 0x83CA33C8;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-20368
	ctx.r3.s64 = ctx.r10.s64 + -20368;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA33D4;
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

__attribute__((alias("__imp__sub_83CA33E4"))) PPC_WEAK_FUNC(sub_83CA33E4);
PPC_FUNC_IMPL(__imp__sub_83CA33E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA33E8"))) PPC_WEAK_FUNC(sub_83CA33E8);
PPC_FUNC_IMPL(__imp__sub_83CA33E8) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,16413
	ctx.r3.s64 = ctx.r11.s64 + 16413;
	// bl 0x83523120
	ctx.lr = 0x83CA3400;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-20352
	ctx.r3.s64 = ctx.r10.s64 + -20352;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA340C;
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

__attribute__((alias("__imp__sub_83CA341C"))) PPC_WEAK_FUNC(sub_83CA341C);
PPC_FUNC_IMPL(__imp__sub_83CA341C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA3420"))) PPC_WEAK_FUNC(sub_83CA3420);
PPC_FUNC_IMPL(__imp__sub_83CA3420) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,16414
	ctx.r3.s64 = ctx.r11.s64 + 16414;
	// bl 0x83523120
	ctx.lr = 0x83CA3438;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-20336
	ctx.r3.s64 = ctx.r10.s64 + -20336;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA3444;
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

__attribute__((alias("__imp__sub_83CA3454"))) PPC_WEAK_FUNC(sub_83CA3454);
PPC_FUNC_IMPL(__imp__sub_83CA3454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA3458"))) PPC_WEAK_FUNC(sub_83CA3458);
PPC_FUNC_IMPL(__imp__sub_83CA3458) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,16415
	ctx.r3.s64 = ctx.r11.s64 + 16415;
	// bl 0x83523120
	ctx.lr = 0x83CA3470;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-20320
	ctx.r3.s64 = ctx.r10.s64 + -20320;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA347C;
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

__attribute__((alias("__imp__sub_83CA348C"))) PPC_WEAK_FUNC(sub_83CA348C);
PPC_FUNC_IMPL(__imp__sub_83CA348C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA3490"))) PPC_WEAK_FUNC(sub_83CA3490);
PPC_FUNC_IMPL(__imp__sub_83CA3490) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,16416
	ctx.r3.s64 = ctx.r11.s64 + 16416;
	// bl 0x83523120
	ctx.lr = 0x83CA34A8;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-20304
	ctx.r3.s64 = ctx.r10.s64 + -20304;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA34B4;
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

__attribute__((alias("__imp__sub_83CA34C4"))) PPC_WEAK_FUNC(sub_83CA34C4);
PPC_FUNC_IMPL(__imp__sub_83CA34C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA34C8"))) PPC_WEAK_FUNC(sub_83CA34C8);
PPC_FUNC_IMPL(__imp__sub_83CA34C8) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,16417
	ctx.r3.s64 = ctx.r11.s64 + 16417;
	// bl 0x83523120
	ctx.lr = 0x83CA34E0;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-20288
	ctx.r3.s64 = ctx.r10.s64 + -20288;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA34EC;
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

__attribute__((alias("__imp__sub_83CA34FC"))) PPC_WEAK_FUNC(sub_83CA34FC);
PPC_FUNC_IMPL(__imp__sub_83CA34FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA3500"))) PPC_WEAK_FUNC(sub_83CA3500);
PPC_FUNC_IMPL(__imp__sub_83CA3500) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,16418
	ctx.r3.s64 = ctx.r11.s64 + 16418;
	// bl 0x83523120
	ctx.lr = 0x83CA3518;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-20272
	ctx.r3.s64 = ctx.r10.s64 + -20272;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA3524;
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

__attribute__((alias("__imp__sub_83CA3534"))) PPC_WEAK_FUNC(sub_83CA3534);
PPC_FUNC_IMPL(__imp__sub_83CA3534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA3538"))) PPC_WEAK_FUNC(sub_83CA3538);
PPC_FUNC_IMPL(__imp__sub_83CA3538) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,16419
	ctx.r3.s64 = ctx.r11.s64 + 16419;
	// bl 0x83523120
	ctx.lr = 0x83CA3550;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-20256
	ctx.r3.s64 = ctx.r10.s64 + -20256;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA355C;
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

__attribute__((alias("__imp__sub_83CA356C"))) PPC_WEAK_FUNC(sub_83CA356C);
PPC_FUNC_IMPL(__imp__sub_83CA356C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA3570"))) PPC_WEAK_FUNC(sub_83CA3570);
PPC_FUNC_IMPL(__imp__sub_83CA3570) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,16421
	ctx.r3.s64 = ctx.r11.s64 + 16421;
	// bl 0x83523120
	ctx.lr = 0x83CA3588;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-20240
	ctx.r3.s64 = ctx.r10.s64 + -20240;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA3594;
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

__attribute__((alias("__imp__sub_83CA35A4"))) PPC_WEAK_FUNC(sub_83CA35A4);
PPC_FUNC_IMPL(__imp__sub_83CA35A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA35A8"))) PPC_WEAK_FUNC(sub_83CA35A8);
PPC_FUNC_IMPL(__imp__sub_83CA35A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-20080
	ctx.r3.s64 = ctx.r11.s64 + -20080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA35B4"))) PPC_WEAK_FUNC(sub_83CA35B4);
PPC_FUNC_IMPL(__imp__sub_83CA35B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA35B8"))) PPC_WEAK_FUNC(sub_83CA35B8);
PPC_FUNC_IMPL(__imp__sub_83CA35B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-20224
	ctx.r3.s64 = ctx.r11.s64 + -20224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA35C4"))) PPC_WEAK_FUNC(sub_83CA35C4);
PPC_FUNC_IMPL(__imp__sub_83CA35C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA35C8"))) PPC_WEAK_FUNC(sub_83CA35C8);
PPC_FUNC_IMPL(__imp__sub_83CA35C8) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832d21f0
	ctx.lr = 0x83CA35DC;
	sub_832D21F0(ctx, base);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31770
	ctx.r10.s64 = -2082078720;
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r8,r10,-20600
	ctx.r8.s64 = ctx.r10.s64 + -20600;
	// addi r3,r9,-20200
	ctx.r3.s64 = ctx.r9.s64 + -20200;
	// lfd f0,-29672(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -29672);
	// fmul f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 * ctx.f0.f64;
	// stfd f0,16(r8)
	PPC_STORE_U64(ctx.r8.u32 + 16, ctx.f0.u64);
	// bl 0x831cdcc8
	ctx.lr = 0x83CA3608;
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

__attribute__((alias("__imp__sub_83CA3618"))) PPC_WEAK_FUNC(sub_83CA3618);
PPC_FUNC_IMPL(__imp__sub_83CA3618) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832d21f0
	ctx.lr = 0x83CA362C;
	sub_832D21F0(ctx, base);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31770
	ctx.r10.s64 = -2082078720;
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r8,r10,-20560
	ctx.r8.s64 = ctx.r10.s64 + -20560;
	// addi r3,r9,-20176
	ctx.r3.s64 = ctx.r9.s64 + -20176;
	// lfd f0,-29672(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -29672);
	// fmul f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 * ctx.f0.f64;
	// stfd f0,16(r8)
	PPC_STORE_U64(ctx.r8.u32 + 16, ctx.f0.u64);
	// bl 0x831cdcc8
	ctx.lr = 0x83CA3658;
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

__attribute__((alias("__imp__sub_83CA3668"))) PPC_WEAK_FUNC(sub_83CA3668);
PPC_FUNC_IMPL(__imp__sub_83CA3668) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832d21f0
	ctx.lr = 0x83CA367C;
	sub_832D21F0(ctx, base);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31770
	ctx.r10.s64 = -2082078720;
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r8,r10,-20520
	ctx.r8.s64 = ctx.r10.s64 + -20520;
	// addi r3,r9,-20152
	ctx.r3.s64 = ctx.r9.s64 + -20152;
	// lfd f0,-29672(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -29672);
	// fmul f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 * ctx.f0.f64;
	// stfd f0,16(r8)
	PPC_STORE_U64(ctx.r8.u32 + 16, ctx.f0.u64);
	// bl 0x831cdcc8
	ctx.lr = 0x83CA36A8;
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

__attribute__((alias("__imp__sub_83CA36B8"))) PPC_WEAK_FUNC(sub_83CA36B8);
PPC_FUNC_IMPL(__imp__sub_83CA36B8) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832d21f0
	ctx.lr = 0x83CA36CC;
	sub_832D21F0(ctx, base);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31770
	ctx.r10.s64 = -2082078720;
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r8,r10,-20480
	ctx.r8.s64 = ctx.r10.s64 + -20480;
	// addi r3,r9,-20128
	ctx.r3.s64 = ctx.r9.s64 + -20128;
	// lfd f0,-29672(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -29672);
	// fmul f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 * ctx.f0.f64;
	// stfd f0,16(r8)
	PPC_STORE_U64(ctx.r8.u32 + 16, ctx.f0.u64);
	// bl 0x831cdcc8
	ctx.lr = 0x83CA36F8;
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

__attribute__((alias("__imp__sub_83CA3708"))) PPC_WEAK_FUNC(sub_83CA3708);
PPC_FUNC_IMPL(__imp__sub_83CA3708) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832d21f0
	ctx.lr = 0x83CA371C;
	sub_832D21F0(ctx, base);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-31770
	ctx.r10.s64 = -2082078720;
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r8,r10,-20440
	ctx.r8.s64 = ctx.r10.s64 + -20440;
	// addi r3,r9,-20104
	ctx.r3.s64 = ctx.r9.s64 + -20104;
	// lfd f0,-29672(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -29672);
	// fmul f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 * ctx.f0.f64;
	// stfd f0,16(r8)
	PPC_STORE_U64(ctx.r8.u32 + 16, ctx.f0.u64);
	// bl 0x831cdcc8
	ctx.lr = 0x83CA3748;
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

__attribute__((alias("__imp__sub_83CA3758"))) PPC_WEAK_FUNC(sub_83CA3758);
PPC_FUNC_IMPL(__imp__sub_83CA3758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r11,r11,16968
	ctx.r11.s64 = ctx.r11.s64 + 16968;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r11,5
	ctx.r10.s64 = ctx.r11.s64 + 5;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83CA3770:
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x83ca3770
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83CA3770;
	// lis r8,-32224
	ctx.r8.s64 = -2111832064;
	// li r9,7
	ctx.r9.s64 = 7;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r8,r8,30844
	ctx.r8.s64 = ctx.r8.s64 + 30844;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83CA379C:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83ca379c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83CA379C;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-20016
	ctx.r3.s64 = ctx.r11.s64 + -20016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA37B0"))) PPC_WEAK_FUNC(sub_83CA37B0);
PPC_FUNC_IMPL(__imp__sub_83CA37B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-19992
	ctx.r3.s64 = ctx.r11.s64 + -19992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA37BC"))) PPC_WEAK_FUNC(sub_83CA37BC);
PPC_FUNC_IMPL(__imp__sub_83CA37BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA37C0"))) PPC_WEAK_FUNC(sub_83CA37C0);
PPC_FUNC_IMPL(__imp__sub_83CA37C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83CA37C8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,16568
	ctx.r11.s64 = ctx.r11.s64 + 16568;
	// li r30,9
	ctx.r30.s64 = 9;
	// addi r31,r11,-24
	ctx.r31.s64 = ctx.r11.s64 + -24;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lfd f31,-29672(r10)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r10.u32 + -29672);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r11,16716
	ctx.r28.s64 = ctx.r11.s64 + 16716;
loc_83CA37F4:
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// bl 0x832d21f0
	ctx.lr = 0x83CA3808;
	sub_832D21F0(ctx, base);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// fmul f12,f13,f31
	ctx.f12.f64 = ctx.f13.f64 * ctx.f31.f64;
	// stfdu f12,40(r31)
	ea = 40 + ctx.r31.u32;
	PPC_STORE_U64(ea, ctx.f12.u64);
	ctx.r31.u32 = ea;
	// bge 0x83ca37f4
	if (!cr0.lt) goto loc_83CA37F4;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-20056
	ctx.r3.s64 = ctx.r11.s64 + -20056;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA382C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA3838"))) PPC_WEAK_FUNC(sub_83CA3838);
PPC_FUNC_IMPL(__imp__sub_83CA3838) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83CA3840;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,17712
	ctx.r11.s64 = ctx.r11.s64 + 17712;
	// li r30,10
	ctx.r30.s64 = 10;
	// addi r31,r11,-24
	ctx.r31.s64 = ctx.r11.s64 + -24;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lfd f31,-29672(r10)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r10.u32 + -29672);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r11,16716
	ctx.r28.s64 = ctx.r11.s64 + 16716;
loc_83CA386C:
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// bl 0x832d21f0
	ctx.lr = 0x83CA3880;
	sub_832D21F0(ctx, base);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// fmul f12,f13,f31
	ctx.f12.f64 = ctx.f13.f64 * ctx.f31.f64;
	// stfdu f12,40(r31)
	ea = 40 + ctx.r31.u32;
	PPC_STORE_U64(ea, ctx.f12.u64);
	ctx.r31.u32 = ea;
	// bge 0x83ca386c
	if (!cr0.lt) goto loc_83CA386C;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-19856
	ctx.r3.s64 = ctx.r11.s64 + -19856;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA38A4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA38B0"))) PPC_WEAK_FUNC(sub_83CA38B0);
PPC_FUNC_IMPL(__imp__sub_83CA38B0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31744
	ctx.r8.s64 = -2080374784;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r8,17684
	ctx.r6.s64 = ctx.r8.s64 + 17684;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,17684(r8)
	PPC_STORE_U32(ctx.r8.u32 + 17684, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// stw r9,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// stw r7,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA38E8"))) PPC_WEAK_FUNC(sub_83CA38E8);
PPC_FUNC_IMPL(__imp__sub_83CA38E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r11,r11,17628
	ctx.r11.s64 = ctx.r11.s64 + 17628;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r11,5
	ctx.r10.s64 = ctx.r11.s64 + 5;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83CA3900:
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x83ca3900
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83CA3900;
	// lis r8,-32224
	ctx.r8.s64 = -2111832064;
	// li r9,7
	ctx.r9.s64 = 7;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r8,r8,30844
	ctx.r8.s64 = ctx.r8.s64 + 30844;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83CA392C:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83ca392c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83CA392C;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-19816
	ctx.r3.s64 = ctx.r11.s64 + -19816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA3940"))) PPC_WEAK_FUNC(sub_83CA3940);
PPC_FUNC_IMPL(__imp__sub_83CA3940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-19880
	ctx.r3.s64 = ctx.r11.s64 + -19880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA394C"))) PPC_WEAK_FUNC(sub_83CA394C);
PPC_FUNC_IMPL(__imp__sub_83CA394C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA3950"))) PPC_WEAK_FUNC(sub_83CA3950);
PPC_FUNC_IMPL(__imp__sub_83CA3950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-19792
	ctx.r3.s64 = ctx.r11.s64 + -19792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA395C"))) PPC_WEAK_FUNC(sub_83CA395C);
PPC_FUNC_IMPL(__imp__sub_83CA395C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA3960"))) PPC_WEAK_FUNC(sub_83CA3960);
PPC_FUNC_IMPL(__imp__sub_83CA3960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r11,r11,18156
	ctx.r11.s64 = ctx.r11.s64 + 18156;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r11,5
	ctx.r10.s64 = ctx.r11.s64 + 5;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83CA3978:
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x83ca3978
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83CA3978;
	// lis r8,-32224
	ctx.r8.s64 = -2111832064;
	// li r9,7
	ctx.r9.s64 = 7;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r8,r8,30844
	ctx.r8.s64 = ctx.r8.s64 + 30844;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83CA39A4:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83ca39a4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83CA39A4;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-19768
	ctx.r3.s64 = ctx.r11.s64 + -19768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA39B8"))) PPC_WEAK_FUNC(sub_83CA39B8);
PPC_FUNC_IMPL(__imp__sub_83CA39B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-19744
	ctx.r3.s64 = ctx.r11.s64 + -19744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA39C4"))) PPC_WEAK_FUNC(sub_83CA39C4);
PPC_FUNC_IMPL(__imp__sub_83CA39C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA39C8"))) PPC_WEAK_FUNC(sub_83CA39C8);
PPC_FUNC_IMPL(__imp__sub_83CA39C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-19648
	ctx.r3.s64 = ctx.r11.s64 + -19648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA39D4"))) PPC_WEAK_FUNC(sub_83CA39D4);
PPC_FUNC_IMPL(__imp__sub_83CA39D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA39D8"))) PPC_WEAK_FUNC(sub_83CA39D8);
PPC_FUNC_IMPL(__imp__sub_83CA39D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83CA39E0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,18424
	ctx.r11.s64 = ctx.r11.s64 + 18424;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r31,r11,-24
	ctx.r31.s64 = ctx.r11.s64 + -24;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lfd f31,-29672(r10)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r10.u32 + -29672);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r11,16716
	ctx.r28.s64 = ctx.r11.s64 + 16716;
loc_83CA3A0C:
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// bl 0x832d21f0
	ctx.lr = 0x83CA3A20;
	sub_832D21F0(ctx, base);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// fmul f12,f13,f31
	ctx.f12.f64 = ctx.f13.f64 * ctx.f31.f64;
	// stfdu f12,40(r31)
	ea = 40 + ctx.r31.u32;
	PPC_STORE_U64(ea, ctx.f12.u64);
	ctx.r31.u32 = ea;
	// bge 0x83ca3a0c
	if (!cr0.lt) goto loc_83CA3A0C;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-19624
	ctx.r3.s64 = ctx.r11.s64 + -19624;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA3A44;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA3A50"))) PPC_WEAK_FUNC(sub_83CA3A50);
PPC_FUNC_IMPL(__imp__sub_83CA3A50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-19584
	ctx.r3.s64 = ctx.r11.s64 + -19584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA3A5C"))) PPC_WEAK_FUNC(sub_83CA3A5C);
PPC_FUNC_IMPL(__imp__sub_83CA3A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA3A60"))) PPC_WEAK_FUNC(sub_83CA3A60);
PPC_FUNC_IMPL(__imp__sub_83CA3A60) {
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
	// li r11,2
	ctx.r11.s64 = 2;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,28
	ctx.r4.s64 = 28;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83CA3A84;
	sub_82595718(ctx, base);
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-19464
	ctx.r3.s64 = ctx.r9.s64 + -19464;
	// stw r11,18660(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18660, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,18660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18660);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// bl 0x831cdcc8
	ctx.lr = 0x83CA3AA8;
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

__attribute__((alias("__imp__sub_83CA3AB8"))) PPC_WEAK_FUNC(sub_83CA3AB8);
PPC_FUNC_IMPL(__imp__sub_83CA3AB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r11,r11,18608
	ctx.r11.s64 = ctx.r11.s64 + 18608;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r11,5
	ctx.r10.s64 = ctx.r11.s64 + 5;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83CA3AD0:
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x83ca3ad0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83CA3AD0;
	// li r9,7
	ctx.r9.s64 = 7;
	// lis r8,-32218
	ctx.r8.s64 = -2111438848;
	// addi r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 + 20;
	// addi r8,r8,17448
	ctx.r8.s64 = ctx.r8.s64 + 17448;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83CA3AF4:
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83ca3af4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83CA3AF4;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-19488
	ctx.r3.s64 = ctx.r11.s64 + -19488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA3B08"))) PPC_WEAK_FUNC(sub_83CA3B08);
PPC_FUNC_IMPL(__imp__sub_83CA3B08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-19296
	ctx.r3.s64 = ctx.r11.s64 + -19296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA3B14"))) PPC_WEAK_FUNC(sub_83CA3B14);
PPC_FUNC_IMPL(__imp__sub_83CA3B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA3B18"))) PPC_WEAK_FUNC(sub_83CA3B18);
PPC_FUNC_IMPL(__imp__sub_83CA3B18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-19176
	ctx.r3.s64 = ctx.r11.s64 + -19176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA3B24"))) PPC_WEAK_FUNC(sub_83CA3B24);
PPC_FUNC_IMPL(__imp__sub_83CA3B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA3B28"))) PPC_WEAK_FUNC(sub_83CA3B28);
PPC_FUNC_IMPL(__imp__sub_83CA3B28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-19392
	ctx.r3.s64 = ctx.r11.s64 + -19392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA3B34"))) PPC_WEAK_FUNC(sub_83CA3B34);
PPC_FUNC_IMPL(__imp__sub_83CA3B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA3B38"))) PPC_WEAK_FUNC(sub_83CA3B38);
PPC_FUNC_IMPL(__imp__sub_83CA3B38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r11,r11,18728
	ctx.r11.s64 = ctx.r11.s64 + 18728;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,-26260(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// li r7,-1
	ctx.r7.s64 = -1;
loc_83CA3B58:
	// li r8,16
	ctx.r8.s64 = 16;
	// stfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stw r10,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r10.u32);
	// stw r10,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
loc_83CA3B88:
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x83ca3b88
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83CA3B88;
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// bge 0x83ca3b58
	if (!cr0.lt) goto loc_83CA3B58;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CA3BA0"))) PPC_WEAK_FUNC(sub_83CA3BA0);
PPC_FUNC_IMPL(__imp__sub_83CA3BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-19080
	ctx.r3.s64 = ctx.r11.s64 + -19080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA3BAC"))) PPC_WEAK_FUNC(sub_83CA3BAC);
PPC_FUNC_IMPL(__imp__sub_83CA3BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA3BB0"))) PPC_WEAK_FUNC(sub_83CA3BB0);
PPC_FUNC_IMPL(__imp__sub_83CA3BB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r11,r11,18972
	ctx.r11.s64 = ctx.r11.s64 + 18972;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r11,5
	ctx.r10.s64 = ctx.r11.s64 + 5;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83CA3BC8:
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x83ca3bc8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83CA3BC8;
	// lis r8,-32224
	ctx.r8.s64 = -2111832064;
	// li r9,7
	ctx.r9.s64 = 7;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r8,r8,30844
	ctx.r8.s64 = ctx.r8.s64 + 30844;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83CA3BF4:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83ca3bf4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83CA3BF4;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-19040
	ctx.r3.s64 = ctx.r11.s64 + -19040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA3C08"))) PPC_WEAK_FUNC(sub_83CA3C08);
PPC_FUNC_IMPL(__imp__sub_83CA3C08) {
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
	// li r11,2
	ctx.r11.s64 = 2;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83CA3C2C;
	sub_82595718(ctx, base);
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,18940
	ctx.r9.s64 = ctx.r10.s64 + 18940;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r8,-31786
	ctx.r8.s64 = -2083127296;
	// addi r3,r8,-18928
	ctx.r3.s64 = ctx.r8.s64 + -18928;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r10,28(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28, ctx.r10.u8);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r10,29(r11)
	PPC_STORE_U8(ctx.r11.u32 + 29, ctx.r10.u8);
	// bl 0x831cdcc8
	ctx.lr = 0x83CA3C70;
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

__attribute__((alias("__imp__sub_83CA3C80"))) PPC_WEAK_FUNC(sub_83CA3C80);
PPC_FUNC_IMPL(__imp__sub_83CA3C80) {
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
	// li r11,2
	ctx.r11.s64 = 2;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83CA3CA4;
	sub_82595718(ctx, base);
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,18956
	ctx.r9.s64 = ctx.r10.s64 + 18956;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r8,-31786
	ctx.r8.s64 = -2083127296;
	// addi r3,r8,-19016
	ctx.r3.s64 = ctx.r8.s64 + -19016;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r10,28(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28, ctx.r10.u8);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r10,29(r11)
	PPC_STORE_U8(ctx.r11.u32 + 29, ctx.r10.u8);
	// bl 0x831cdcc8
	ctx.lr = 0x83CA3CE8;
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

__attribute__((alias("__imp__sub_83CA3CF8"))) PPC_WEAK_FUNC(sub_83CA3CF8);
PPC_FUNC_IMPL(__imp__sub_83CA3CF8) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,19033
	ctx.r3.s64 = ctx.r11.s64 + 19033;
	// bl 0x83523120
	ctx.lr = 0x83CA3D10;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-18840
	ctx.r3.s64 = ctx.r10.s64 + -18840;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA3D1C;
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

__attribute__((alias("__imp__sub_83CA3D2C"))) PPC_WEAK_FUNC(sub_83CA3D2C);
PPC_FUNC_IMPL(__imp__sub_83CA3D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA3D30"))) PPC_WEAK_FUNC(sub_83CA3D30);
PPC_FUNC_IMPL(__imp__sub_83CA3D30) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,19034
	ctx.r3.s64 = ctx.r11.s64 + 19034;
	// bl 0x83523120
	ctx.lr = 0x83CA3D48;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-18824
	ctx.r3.s64 = ctx.r10.s64 + -18824;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA3D54;
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

__attribute__((alias("__imp__sub_83CA3D64"))) PPC_WEAK_FUNC(sub_83CA3D64);
PPC_FUNC_IMPL(__imp__sub_83CA3D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA3D68"))) PPC_WEAK_FUNC(sub_83CA3D68);
PPC_FUNC_IMPL(__imp__sub_83CA3D68) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,19035
	ctx.r3.s64 = ctx.r11.s64 + 19035;
	// bl 0x83523120
	ctx.lr = 0x83CA3D80;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-18808
	ctx.r3.s64 = ctx.r10.s64 + -18808;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA3D8C;
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

__attribute__((alias("__imp__sub_83CA3D9C"))) PPC_WEAK_FUNC(sub_83CA3D9C);
PPC_FUNC_IMPL(__imp__sub_83CA3D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA3DA0"))) PPC_WEAK_FUNC(sub_83CA3DA0);
PPC_FUNC_IMPL(__imp__sub_83CA3DA0) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,19036
	ctx.r3.s64 = ctx.r11.s64 + 19036;
	// bl 0x83523120
	ctx.lr = 0x83CA3DB8;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-18792
	ctx.r3.s64 = ctx.r10.s64 + -18792;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA3DC4;
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

__attribute__((alias("__imp__sub_83CA3DD4"))) PPC_WEAK_FUNC(sub_83CA3DD4);
PPC_FUNC_IMPL(__imp__sub_83CA3DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA3DD8"))) PPC_WEAK_FUNC(sub_83CA3DD8);
PPC_FUNC_IMPL(__imp__sub_83CA3DD8) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,19037
	ctx.r3.s64 = ctx.r11.s64 + 19037;
	// bl 0x83523120
	ctx.lr = 0x83CA3DF0;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-18776
	ctx.r3.s64 = ctx.r10.s64 + -18776;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA3DFC;
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

__attribute__((alias("__imp__sub_83CA3E0C"))) PPC_WEAK_FUNC(sub_83CA3E0C);
PPC_FUNC_IMPL(__imp__sub_83CA3E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA3E10"))) PPC_WEAK_FUNC(sub_83CA3E10);
PPC_FUNC_IMPL(__imp__sub_83CA3E10) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,19038
	ctx.r3.s64 = ctx.r11.s64 + 19038;
	// bl 0x83523120
	ctx.lr = 0x83CA3E28;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-18760
	ctx.r3.s64 = ctx.r10.s64 + -18760;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA3E34;
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

__attribute__((alias("__imp__sub_83CA3E44"))) PPC_WEAK_FUNC(sub_83CA3E44);
PPC_FUNC_IMPL(__imp__sub_83CA3E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA3E48"))) PPC_WEAK_FUNC(sub_83CA3E48);
PPC_FUNC_IMPL(__imp__sub_83CA3E48) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,19039
	ctx.r3.s64 = ctx.r11.s64 + 19039;
	// bl 0x83523120
	ctx.lr = 0x83CA3E60;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-18744
	ctx.r3.s64 = ctx.r10.s64 + -18744;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA3E6C;
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

__attribute__((alias("__imp__sub_83CA3E7C"))) PPC_WEAK_FUNC(sub_83CA3E7C);
PPC_FUNC_IMPL(__imp__sub_83CA3E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA3E80"))) PPC_WEAK_FUNC(sub_83CA3E80);
PPC_FUNC_IMPL(__imp__sub_83CA3E80) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,19040
	ctx.r3.s64 = ctx.r11.s64 + 19040;
	// bl 0x83523120
	ctx.lr = 0x83CA3E98;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-18728
	ctx.r3.s64 = ctx.r10.s64 + -18728;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA3EA4;
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

__attribute__((alias("__imp__sub_83CA3EB4"))) PPC_WEAK_FUNC(sub_83CA3EB4);
PPC_FUNC_IMPL(__imp__sub_83CA3EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA3EB8"))) PPC_WEAK_FUNC(sub_83CA3EB8);
PPC_FUNC_IMPL(__imp__sub_83CA3EB8) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,19041
	ctx.r3.s64 = ctx.r11.s64 + 19041;
	// bl 0x83523120
	ctx.lr = 0x83CA3ED0;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-18712
	ctx.r3.s64 = ctx.r10.s64 + -18712;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA3EDC;
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

__attribute__((alias("__imp__sub_83CA3EEC"))) PPC_WEAK_FUNC(sub_83CA3EEC);
PPC_FUNC_IMPL(__imp__sub_83CA3EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA3EF0"))) PPC_WEAK_FUNC(sub_83CA3EF0);
PPC_FUNC_IMPL(__imp__sub_83CA3EF0) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,19042
	ctx.r3.s64 = ctx.r11.s64 + 19042;
	// bl 0x83523120
	ctx.lr = 0x83CA3F08;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-18696
	ctx.r3.s64 = ctx.r10.s64 + -18696;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA3F14;
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

__attribute__((alias("__imp__sub_83CA3F24"))) PPC_WEAK_FUNC(sub_83CA3F24);
PPC_FUNC_IMPL(__imp__sub_83CA3F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA3F28"))) PPC_WEAK_FUNC(sub_83CA3F28);
PPC_FUNC_IMPL(__imp__sub_83CA3F28) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,19043
	ctx.r3.s64 = ctx.r11.s64 + 19043;
	// bl 0x83523120
	ctx.lr = 0x83CA3F40;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-18680
	ctx.r3.s64 = ctx.r10.s64 + -18680;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA3F4C;
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

__attribute__((alias("__imp__sub_83CA3F5C"))) PPC_WEAK_FUNC(sub_83CA3F5C);
PPC_FUNC_IMPL(__imp__sub_83CA3F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA3F60"))) PPC_WEAK_FUNC(sub_83CA3F60);
PPC_FUNC_IMPL(__imp__sub_83CA3F60) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,19044
	ctx.r3.s64 = ctx.r11.s64 + 19044;
	// bl 0x83523120
	ctx.lr = 0x83CA3F78;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-18664
	ctx.r3.s64 = ctx.r10.s64 + -18664;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA3F84;
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

__attribute__((alias("__imp__sub_83CA3F94"))) PPC_WEAK_FUNC(sub_83CA3F94);
PPC_FUNC_IMPL(__imp__sub_83CA3F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA3F98"))) PPC_WEAK_FUNC(sub_83CA3F98);
PPC_FUNC_IMPL(__imp__sub_83CA3F98) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,19045
	ctx.r3.s64 = ctx.r11.s64 + 19045;
	// bl 0x83523120
	ctx.lr = 0x83CA3FB0;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-18648
	ctx.r3.s64 = ctx.r10.s64 + -18648;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA3FBC;
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

__attribute__((alias("__imp__sub_83CA3FCC"))) PPC_WEAK_FUNC(sub_83CA3FCC);
PPC_FUNC_IMPL(__imp__sub_83CA3FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA3FD0"))) PPC_WEAK_FUNC(sub_83CA3FD0);
PPC_FUNC_IMPL(__imp__sub_83CA3FD0) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,19046
	ctx.r3.s64 = ctx.r11.s64 + 19046;
	// bl 0x83523120
	ctx.lr = 0x83CA3FE8;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-18632
	ctx.r3.s64 = ctx.r10.s64 + -18632;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA3FF4;
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

__attribute__((alias("__imp__sub_83CA4004"))) PPC_WEAK_FUNC(sub_83CA4004);
PPC_FUNC_IMPL(__imp__sub_83CA4004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA4008"))) PPC_WEAK_FUNC(sub_83CA4008);
PPC_FUNC_IMPL(__imp__sub_83CA4008) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,19047
	ctx.r3.s64 = ctx.r11.s64 + 19047;
	// bl 0x83523120
	ctx.lr = 0x83CA4020;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-18616
	ctx.r3.s64 = ctx.r10.s64 + -18616;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA402C;
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

__attribute__((alias("__imp__sub_83CA403C"))) PPC_WEAK_FUNC(sub_83CA403C);
PPC_FUNC_IMPL(__imp__sub_83CA403C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA4040"))) PPC_WEAK_FUNC(sub_83CA4040);
PPC_FUNC_IMPL(__imp__sub_83CA4040) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,19048
	ctx.r3.s64 = ctx.r11.s64 + 19048;
	// bl 0x83523120
	ctx.lr = 0x83CA4058;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-18600
	ctx.r3.s64 = ctx.r10.s64 + -18600;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA4064;
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

__attribute__((alias("__imp__sub_83CA4074"))) PPC_WEAK_FUNC(sub_83CA4074);
PPC_FUNC_IMPL(__imp__sub_83CA4074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA4078"))) PPC_WEAK_FUNC(sub_83CA4078);
PPC_FUNC_IMPL(__imp__sub_83CA4078) {
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
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,19049
	ctx.r3.s64 = ctx.r11.s64 + 19049;
	// bl 0x83523120
	ctx.lr = 0x83CA4090;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-18584
	ctx.r3.s64 = ctx.r10.s64 + -18584;
	// bl 0x831cdcc8
	ctx.lr = 0x83CA409C;
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

__attribute__((alias("__imp__sub_83CA40AC"))) PPC_WEAK_FUNC(sub_83CA40AC);
PPC_FUNC_IMPL(__imp__sub_83CA40AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA40B0"))) PPC_WEAK_FUNC(sub_83CA40B0);
PPC_FUNC_IMPL(__imp__sub_83CA40B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18568
	ctx.r3.s64 = ctx.r11.s64 + -18568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA40BC"))) PPC_WEAK_FUNC(sub_83CA40BC);
PPC_FUNC_IMPL(__imp__sub_83CA40BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA40C0"))) PPC_WEAK_FUNC(sub_83CA40C0);
PPC_FUNC_IMPL(__imp__sub_83CA40C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18560
	ctx.r3.s64 = ctx.r11.s64 + -18560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA40CC"))) PPC_WEAK_FUNC(sub_83CA40CC);
PPC_FUNC_IMPL(__imp__sub_83CA40CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA40D0"))) PPC_WEAK_FUNC(sub_83CA40D0);
PPC_FUNC_IMPL(__imp__sub_83CA40D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18552
	ctx.r3.s64 = ctx.r11.s64 + -18552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA40DC"))) PPC_WEAK_FUNC(sub_83CA40DC);
PPC_FUNC_IMPL(__imp__sub_83CA40DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA40E0"))) PPC_WEAK_FUNC(sub_83CA40E0);
PPC_FUNC_IMPL(__imp__sub_83CA40E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18544
	ctx.r3.s64 = ctx.r11.s64 + -18544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA40EC"))) PPC_WEAK_FUNC(sub_83CA40EC);
PPC_FUNC_IMPL(__imp__sub_83CA40EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA40F0"))) PPC_WEAK_FUNC(sub_83CA40F0);
PPC_FUNC_IMPL(__imp__sub_83CA40F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18536
	ctx.r3.s64 = ctx.r11.s64 + -18536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA40FC"))) PPC_WEAK_FUNC(sub_83CA40FC);
PPC_FUNC_IMPL(__imp__sub_83CA40FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA4100"))) PPC_WEAK_FUNC(sub_83CA4100);
PPC_FUNC_IMPL(__imp__sub_83CA4100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18528
	ctx.r3.s64 = ctx.r11.s64 + -18528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA410C"))) PPC_WEAK_FUNC(sub_83CA410C);
PPC_FUNC_IMPL(__imp__sub_83CA410C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA4110"))) PPC_WEAK_FUNC(sub_83CA4110);
PPC_FUNC_IMPL(__imp__sub_83CA4110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18520
	ctx.r3.s64 = ctx.r11.s64 + -18520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA411C"))) PPC_WEAK_FUNC(sub_83CA411C);
PPC_FUNC_IMPL(__imp__sub_83CA411C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA4120"))) PPC_WEAK_FUNC(sub_83CA4120);
PPC_FUNC_IMPL(__imp__sub_83CA4120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18512
	ctx.r3.s64 = ctx.r11.s64 + -18512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA412C"))) PPC_WEAK_FUNC(sub_83CA412C);
PPC_FUNC_IMPL(__imp__sub_83CA412C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CA4130"))) PPC_WEAK_FUNC(sub_83CA4130);
PPC_FUNC_IMPL(__imp__sub_83CA4130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-18504
	ctx.r3.s64 = ctx.r11.s64 + -18504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CA413C"))) PPC_WEAK_FUNC(sub_83CA413C);
PPC_FUNC_IMPL(__imp__sub_83CA413C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

