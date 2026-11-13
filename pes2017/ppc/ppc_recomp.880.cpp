#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C9CF40"))) PPC_WEAK_FUNC(sub_83C9CF40);
PPC_FUNC_IMPL(__imp__sub_83C9CF40) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-11620
	ctx.r3.s64 = ctx.r11.s64 + -11620;
	// bl 0x83523120
	ctx.lr = 0x83C9CF58;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-30096
	ctx.r3.s64 = ctx.r10.s64 + -30096;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9CF64;
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

__attribute__((alias("__imp__sub_83C9CF74"))) PPC_WEAK_FUNC(sub_83C9CF74);
PPC_FUNC_IMPL(__imp__sub_83C9CF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9CF78"))) PPC_WEAK_FUNC(sub_83C9CF78);
PPC_FUNC_IMPL(__imp__sub_83C9CF78) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-11619
	ctx.r3.s64 = ctx.r11.s64 + -11619;
	// bl 0x83523120
	ctx.lr = 0x83C9CF90;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-30080
	ctx.r3.s64 = ctx.r10.s64 + -30080;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9CF9C;
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

__attribute__((alias("__imp__sub_83C9CFAC"))) PPC_WEAK_FUNC(sub_83C9CFAC);
PPC_FUNC_IMPL(__imp__sub_83C9CFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9CFB0"))) PPC_WEAK_FUNC(sub_83C9CFB0);
PPC_FUNC_IMPL(__imp__sub_83C9CFB0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-11618
	ctx.r3.s64 = ctx.r11.s64 + -11618;
	// bl 0x83523120
	ctx.lr = 0x83C9CFC8;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-30064
	ctx.r3.s64 = ctx.r10.s64 + -30064;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9CFD4;
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

__attribute__((alias("__imp__sub_83C9CFE4"))) PPC_WEAK_FUNC(sub_83C9CFE4);
PPC_FUNC_IMPL(__imp__sub_83C9CFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9CFE8"))) PPC_WEAK_FUNC(sub_83C9CFE8);
PPC_FUNC_IMPL(__imp__sub_83C9CFE8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-11617
	ctx.r3.s64 = ctx.r11.s64 + -11617;
	// bl 0x83523120
	ctx.lr = 0x83C9D000;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-30048
	ctx.r3.s64 = ctx.r10.s64 + -30048;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9D00C;
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

__attribute__((alias("__imp__sub_83C9D01C"))) PPC_WEAK_FUNC(sub_83C9D01C);
PPC_FUNC_IMPL(__imp__sub_83C9D01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9D020"))) PPC_WEAK_FUNC(sub_83C9D020);
PPC_FUNC_IMPL(__imp__sub_83C9D020) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-11616
	ctx.r3.s64 = ctx.r11.s64 + -11616;
	// bl 0x83523120
	ctx.lr = 0x83C9D038;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-30032
	ctx.r3.s64 = ctx.r10.s64 + -30032;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9D044;
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

__attribute__((alias("__imp__sub_83C9D054"))) PPC_WEAK_FUNC(sub_83C9D054);
PPC_FUNC_IMPL(__imp__sub_83C9D054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9D058"))) PPC_WEAK_FUNC(sub_83C9D058);
PPC_FUNC_IMPL(__imp__sub_83C9D058) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-11615
	ctx.r3.s64 = ctx.r11.s64 + -11615;
	// bl 0x83523120
	ctx.lr = 0x83C9D070;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-30016
	ctx.r3.s64 = ctx.r10.s64 + -30016;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9D07C;
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

__attribute__((alias("__imp__sub_83C9D08C"))) PPC_WEAK_FUNC(sub_83C9D08C);
PPC_FUNC_IMPL(__imp__sub_83C9D08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9D090"))) PPC_WEAK_FUNC(sub_83C9D090);
PPC_FUNC_IMPL(__imp__sub_83C9D090) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-11614
	ctx.r3.s64 = ctx.r11.s64 + -11614;
	// bl 0x83523120
	ctx.lr = 0x83C9D0A8;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-30000
	ctx.r3.s64 = ctx.r10.s64 + -30000;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9D0B4;
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

__attribute__((alias("__imp__sub_83C9D0C4"))) PPC_WEAK_FUNC(sub_83C9D0C4);
PPC_FUNC_IMPL(__imp__sub_83C9D0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9D0C8"))) PPC_WEAK_FUNC(sub_83C9D0C8);
PPC_FUNC_IMPL(__imp__sub_83C9D0C8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-11432
	ctx.r3.s64 = ctx.r11.s64 + -11432;
	// bl 0x83523120
	ctx.lr = 0x83C9D0E0;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-29984
	ctx.r3.s64 = ctx.r10.s64 + -29984;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9D0EC;
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

__attribute__((alias("__imp__sub_83C9D0FC"))) PPC_WEAK_FUNC(sub_83C9D0FC);
PPC_FUNC_IMPL(__imp__sub_83C9D0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9D100"))) PPC_WEAK_FUNC(sub_83C9D100);
PPC_FUNC_IMPL(__imp__sub_83C9D100) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-10888
	ctx.r3.s64 = ctx.r11.s64 + -10888;
	// addi r4,r10,2152
	ctx.r4.s64 = ctx.r10.s64 + 2152;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,10
	ctx.r5.s64 = 10;
	// bl 0x83523160
	ctx.lr = 0x83C9D12C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-29968
	ctx.r3.s64 = ctx.r9.s64 + -29968;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9D138;
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

__attribute__((alias("__imp__sub_83C9D148"))) PPC_WEAK_FUNC(sub_83C9D148);
PPC_FUNC_IMPL(__imp__sub_83C9D148) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-10468
	ctx.r3.s64 = ctx.r11.s64 + -10468;
	// addi r4,r10,2164
	ctx.r4.s64 = ctx.r10.s64 + 2164;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x83523160
	ctx.lr = 0x83C9D174;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-29952
	ctx.r3.s64 = ctx.r9.s64 + -29952;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9D180;
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

__attribute__((alias("__imp__sub_83C9D190"))) PPC_WEAK_FUNC(sub_83C9D190);
PPC_FUNC_IMPL(__imp__sub_83C9D190) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-11552
	ctx.r3.s64 = ctx.r11.s64 + -11552;
	// addi r4,r10,2176
	ctx.r4.s64 = ctx.r10.s64 + 2176;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,14
	ctx.r5.s64 = 14;
	// bl 0x83523160
	ctx.lr = 0x83C9D1BC;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-29936
	ctx.r3.s64 = ctx.r9.s64 + -29936;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9D1C8;
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

__attribute__((alias("__imp__sub_83C9D1D8"))) PPC_WEAK_FUNC(sub_83C9D1D8);
PPC_FUNC_IMPL(__imp__sub_83C9D1D8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-10288
	ctx.r3.s64 = ctx.r11.s64 + -10288;
	// addi r4,r10,2192
	ctx.r4.s64 = ctx.r10.s64 + 2192;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,9
	ctx.r5.s64 = 9;
	// bl 0x83523160
	ctx.lr = 0x83C9D204;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-29920
	ctx.r3.s64 = ctx.r9.s64 + -29920;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9D210;
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

__attribute__((alias("__imp__sub_83C9D220"))) PPC_WEAK_FUNC(sub_83C9D220);
PPC_FUNC_IMPL(__imp__sub_83C9D220) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-11492
	ctx.r3.s64 = ctx.r11.s64 + -11492;
	// addi r4,r10,2204
	ctx.r4.s64 = ctx.r10.s64 + 2204;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,10
	ctx.r5.s64 = 10;
	// bl 0x83523160
	ctx.lr = 0x83C9D24C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-29904
	ctx.r3.s64 = ctx.r9.s64 + -29904;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9D258;
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

__attribute__((alias("__imp__sub_83C9D268"))) PPC_WEAK_FUNC(sub_83C9D268);
PPC_FUNC_IMPL(__imp__sub_83C9D268) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-11612
	ctx.r3.s64 = ctx.r11.s64 + -11612;
	// addi r4,r10,2216
	ctx.r4.s64 = ctx.r10.s64 + 2216;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,9
	ctx.r5.s64 = 9;
	// bl 0x83523160
	ctx.lr = 0x83C9D294;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-29888
	ctx.r3.s64 = ctx.r9.s64 + -29888;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9D2A0;
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

__attribute__((alias("__imp__sub_83C9D2B0"))) PPC_WEAK_FUNC(sub_83C9D2B0);
PPC_FUNC_IMPL(__imp__sub_83C9D2B0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-11368
	ctx.r3.s64 = ctx.r11.s64 + -11368;
	// addi r4,r10,2228
	ctx.r4.s64 = ctx.r10.s64 + 2228;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x83523160
	ctx.lr = 0x83C9D2DC;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-29872
	ctx.r3.s64 = ctx.r9.s64 + -29872;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9D2E8;
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

__attribute__((alias("__imp__sub_83C9D2F8"))) PPC_WEAK_FUNC(sub_83C9D2F8);
PPC_FUNC_IMPL(__imp__sub_83C9D2F8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-11068
	ctx.r3.s64 = ctx.r11.s64 + -11068;
	// addi r4,r10,2240
	ctx.r4.s64 = ctx.r10.s64 + 2240;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x83523160
	ctx.lr = 0x83C9D324;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-29856
	ctx.r3.s64 = ctx.r9.s64 + -29856;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9D330;
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

__attribute__((alias("__imp__sub_83C9D340"))) PPC_WEAK_FUNC(sub_83C9D340);
PPC_FUNC_IMPL(__imp__sub_83C9D340) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-10768
	ctx.r3.s64 = ctx.r11.s64 + -10768;
	// addi r4,r10,2252
	ctx.r4.s64 = ctx.r10.s64 + 2252;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,14
	ctx.r5.s64 = 14;
	// bl 0x83523160
	ctx.lr = 0x83C9D36C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-29840
	ctx.r3.s64 = ctx.r9.s64 + -29840;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9D378;
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

__attribute__((alias("__imp__sub_83C9D388"))) PPC_WEAK_FUNC(sub_83C9D388);
PPC_FUNC_IMPL(__imp__sub_83C9D388) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-10648
	ctx.r3.s64 = ctx.r11.s64 + -10648;
	// addi r4,r10,2268
	ctx.r4.s64 = ctx.r10.s64 + 2268;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x83523160
	ctx.lr = 0x83C9D3B4;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-29824
	ctx.r3.s64 = ctx.r9.s64 + -29824;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9D3C0;
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

__attribute__((alias("__imp__sub_83C9D3D0"))) PPC_WEAK_FUNC(sub_83C9D3D0);
PPC_FUNC_IMPL(__imp__sub_83C9D3D0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-10828
	ctx.r3.s64 = ctx.r11.s64 + -10828;
	// addi r4,r10,2280
	ctx.r4.s64 = ctx.r10.s64 + 2280;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x83523160
	ctx.lr = 0x83C9D3FC;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-29808
	ctx.r3.s64 = ctx.r9.s64 + -29808;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9D408;
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

__attribute__((alias("__imp__sub_83C9D418"))) PPC_WEAK_FUNC(sub_83C9D418);
PPC_FUNC_IMPL(__imp__sub_83C9D418) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-9988
	ctx.r3.s64 = ctx.r11.s64 + -9988;
	// addi r4,r10,2288
	ctx.r4.s64 = ctx.r10.s64 + 2288;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,10
	ctx.r5.s64 = 10;
	// bl 0x83523160
	ctx.lr = 0x83C9D444;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-29792
	ctx.r3.s64 = ctx.r9.s64 + -29792;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9D450;
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

__attribute__((alias("__imp__sub_83C9D460"))) PPC_WEAK_FUNC(sub_83C9D460);
PPC_FUNC_IMPL(__imp__sub_83C9D460) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-10588
	ctx.r3.s64 = ctx.r11.s64 + -10588;
	// addi r4,r10,2300
	ctx.r4.s64 = ctx.r10.s64 + 2300;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,11
	ctx.r5.s64 = 11;
	// bl 0x83523160
	ctx.lr = 0x83C9D48C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-29776
	ctx.r3.s64 = ctx.r9.s64 + -29776;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9D498;
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

__attribute__((alias("__imp__sub_83C9D4A8"))) PPC_WEAK_FUNC(sub_83C9D4A8);
PPC_FUNC_IMPL(__imp__sub_83C9D4A8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-9928
	ctx.r3.s64 = ctx.r11.s64 + -9928;
	// addi r4,r10,2312
	ctx.r4.s64 = ctx.r10.s64 + 2312;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x83523160
	ctx.lr = 0x83C9D4D4;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-29760
	ctx.r3.s64 = ctx.r9.s64 + -29760;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9D4E0;
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

__attribute__((alias("__imp__sub_83C9D4F0"))) PPC_WEAK_FUNC(sub_83C9D4F0);
PPC_FUNC_IMPL(__imp__sub_83C9D4F0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-10348
	ctx.r3.s64 = ctx.r11.s64 + -10348;
	// addi r4,r10,2324
	ctx.r4.s64 = ctx.r10.s64 + 2324;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,19
	ctx.r5.s64 = 19;
	// bl 0x83523160
	ctx.lr = 0x83C9D51C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-29744
	ctx.r3.s64 = ctx.r9.s64 + -29744;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9D528;
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

__attribute__((alias("__imp__sub_83C9D538"))) PPC_WEAK_FUNC(sub_83C9D538);
PPC_FUNC_IMPL(__imp__sub_83C9D538) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-11128
	ctx.r3.s64 = ctx.r11.s64 + -11128;
	// addi r4,r10,2344
	ctx.r4.s64 = ctx.r10.s64 + 2344;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,22
	ctx.r5.s64 = 22;
	// bl 0x83523160
	ctx.lr = 0x83C9D564;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-29728
	ctx.r3.s64 = ctx.r9.s64 + -29728;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9D570;
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

__attribute__((alias("__imp__sub_83C9D580"))) PPC_WEAK_FUNC(sub_83C9D580);
PPC_FUNC_IMPL(__imp__sub_83C9D580) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-10108
	ctx.r3.s64 = ctx.r11.s64 + -10108;
	// addi r4,r10,2368
	ctx.r4.s64 = ctx.r10.s64 + 2368;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,20
	ctx.r5.s64 = 20;
	// bl 0x83523160
	ctx.lr = 0x83C9D5AC;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-29712
	ctx.r3.s64 = ctx.r9.s64 + -29712;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9D5B8;
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

__attribute__((alias("__imp__sub_83C9D5C8"))) PPC_WEAK_FUNC(sub_83C9D5C8);
PPC_FUNC_IMPL(__imp__sub_83C9D5C8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-11308
	ctx.r3.s64 = ctx.r11.s64 + -11308;
	// addi r4,r10,2392
	ctx.r4.s64 = ctx.r10.s64 + 2392;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,7
	ctx.r5.s64 = 7;
	// bl 0x83523160
	ctx.lr = 0x83C9D5F4;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-29696
	ctx.r3.s64 = ctx.r9.s64 + -29696;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9D600;
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

__attribute__((alias("__imp__sub_83C9D610"))) PPC_WEAK_FUNC(sub_83C9D610);
PPC_FUNC_IMPL(__imp__sub_83C9D610) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-11428
	ctx.r3.s64 = ctx.r11.s64 + -11428;
	// addi r4,r10,2400
	ctx.r4.s64 = ctx.r10.s64 + 2400;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,11
	ctx.r5.s64 = 11;
	// bl 0x83523160
	ctx.lr = 0x83C9D63C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-29680
	ctx.r3.s64 = ctx.r9.s64 + -29680;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9D648;
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

__attribute__((alias("__imp__sub_83C9D658"))) PPC_WEAK_FUNC(sub_83C9D658);
PPC_FUNC_IMPL(__imp__sub_83C9D658) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-10168
	ctx.r3.s64 = ctx.r11.s64 + -10168;
	// addi r4,r10,2412
	ctx.r4.s64 = ctx.r10.s64 + 2412;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,11
	ctx.r5.s64 = 11;
	// bl 0x83523160
	ctx.lr = 0x83C9D684;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-29664
	ctx.r3.s64 = ctx.r9.s64 + -29664;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9D690;
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

__attribute__((alias("__imp__sub_83C9D6A0"))) PPC_WEAK_FUNC(sub_83C9D6A0);
PPC_FUNC_IMPL(__imp__sub_83C9D6A0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-10228
	ctx.r3.s64 = ctx.r11.s64 + -10228;
	// addi r4,r10,2424
	ctx.r4.s64 = ctx.r10.s64 + 2424;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x83523160
	ctx.lr = 0x83C9D6CC;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-29648
	ctx.r3.s64 = ctx.r9.s64 + -29648;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9D6D8;
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

__attribute__((alias("__imp__sub_83C9D6E8"))) PPC_WEAK_FUNC(sub_83C9D6E8);
PPC_FUNC_IMPL(__imp__sub_83C9D6E8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-11188
	ctx.r3.s64 = ctx.r11.s64 + -11188;
	// addi r4,r10,2432
	ctx.r4.s64 = ctx.r10.s64 + 2432;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x83523160
	ctx.lr = 0x83C9D714;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-29632
	ctx.r3.s64 = ctx.r9.s64 + -29632;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9D720;
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

__attribute__((alias("__imp__sub_83C9D730"))) PPC_WEAK_FUNC(sub_83C9D730);
PPC_FUNC_IMPL(__imp__sub_83C9D730) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-10948
	ctx.r3.s64 = ctx.r11.s64 + -10948;
	// addi r4,r10,2440
	ctx.r4.s64 = ctx.r10.s64 + 2440;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x83523160
	ctx.lr = 0x83C9D75C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-29616
	ctx.r3.s64 = ctx.r9.s64 + -29616;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9D768;
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

__attribute__((alias("__imp__sub_83C9D778"))) PPC_WEAK_FUNC(sub_83C9D778);
PPC_FUNC_IMPL(__imp__sub_83C9D778) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-10048
	ctx.r3.s64 = ctx.r11.s64 + -10048;
	// addi r4,r10,2448
	ctx.r4.s64 = ctx.r10.s64 + 2448;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x83523160
	ctx.lr = 0x83C9D7A4;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-29600
	ctx.r3.s64 = ctx.r9.s64 + -29600;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9D7B0;
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

__attribute__((alias("__imp__sub_83C9D7C0"))) PPC_WEAK_FUNC(sub_83C9D7C0);
PPC_FUNC_IMPL(__imp__sub_83C9D7C0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-10708
	ctx.r3.s64 = ctx.r11.s64 + -10708;
	// addi r4,r10,2456
	ctx.r4.s64 = ctx.r10.s64 + 2456;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x83523160
	ctx.lr = 0x83C9D7EC;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-29584
	ctx.r3.s64 = ctx.r9.s64 + -29584;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9D7F8;
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

__attribute__((alias("__imp__sub_83C9D808"))) PPC_WEAK_FUNC(sub_83C9D808);
PPC_FUNC_IMPL(__imp__sub_83C9D808) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-9868
	ctx.r3.s64 = ctx.r11.s64 + -9868;
	// addi r4,r10,2464
	ctx.r4.s64 = ctx.r10.s64 + 2464;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x83523160
	ctx.lr = 0x83C9D834;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-29568
	ctx.r3.s64 = ctx.r9.s64 + -29568;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9D840;
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

__attribute__((alias("__imp__sub_83C9D850"))) PPC_WEAK_FUNC(sub_83C9D850);
PPC_FUNC_IMPL(__imp__sub_83C9D850) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-11248
	ctx.r3.s64 = ctx.r11.s64 + -11248;
	// addi r4,r10,2472
	ctx.r4.s64 = ctx.r10.s64 + 2472;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x83523160
	ctx.lr = 0x83C9D87C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-29552
	ctx.r3.s64 = ctx.r9.s64 + -29552;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9D888;
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

__attribute__((alias("__imp__sub_83C9D898"))) PPC_WEAK_FUNC(sub_83C9D898);
PPC_FUNC_IMPL(__imp__sub_83C9D898) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-11008
	ctx.r3.s64 = ctx.r11.s64 + -11008;
	// addi r4,r10,2480
	ctx.r4.s64 = ctx.r10.s64 + 2480;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x83523160
	ctx.lr = 0x83C9D8C4;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-29536
	ctx.r3.s64 = ctx.r9.s64 + -29536;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9D8D0;
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

__attribute__((alias("__imp__sub_83C9D8E0"))) PPC_WEAK_FUNC(sub_83C9D8E0);
PPC_FUNC_IMPL(__imp__sub_83C9D8E0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-10408
	ctx.r3.s64 = ctx.r11.s64 + -10408;
	// addi r4,r10,2488
	ctx.r4.s64 = ctx.r10.s64 + 2488;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x83523160
	ctx.lr = 0x83C9D90C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-29520
	ctx.r3.s64 = ctx.r9.s64 + -29520;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9D918;
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

__attribute__((alias("__imp__sub_83C9D928"))) PPC_WEAK_FUNC(sub_83C9D928);
PPC_FUNC_IMPL(__imp__sub_83C9D928) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-10528
	ctx.r3.s64 = ctx.r11.s64 + -10528;
	// addi r4,r10,2496
	ctx.r4.s64 = ctx.r10.s64 + 2496;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x83523160
	ctx.lr = 0x83C9D954;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-29504
	ctx.r3.s64 = ctx.r9.s64 + -29504;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9D960;
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

__attribute__((alias("__imp__sub_83C9D970"))) PPC_WEAK_FUNC(sub_83C9D970);
PPC_FUNC_IMPL(__imp__sub_83C9D970) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-9808
	ctx.r3.s64 = ctx.r11.s64 + -9808;
	// bl 0x83523120
	ctx.lr = 0x83C9D988;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-29488
	ctx.r3.s64 = ctx.r10.s64 + -29488;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9D994;
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

__attribute__((alias("__imp__sub_83C9D9A4"))) PPC_WEAK_FUNC(sub_83C9D9A4);
PPC_FUNC_IMPL(__imp__sub_83C9D9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9D9A8"))) PPC_WEAK_FUNC(sub_83C9D9A8);
PPC_FUNC_IMPL(__imp__sub_83C9D9A8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-9800
	ctx.r3.s64 = ctx.r11.s64 + -9800;
	// bl 0x83523120
	ctx.lr = 0x83C9D9C0;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-29472
	ctx.r3.s64 = ctx.r10.s64 + -29472;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9D9CC;
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

__attribute__((alias("__imp__sub_83C9D9DC"))) PPC_WEAK_FUNC(sub_83C9D9DC);
PPC_FUNC_IMPL(__imp__sub_83C9D9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9D9E0"))) PPC_WEAK_FUNC(sub_83C9D9E0);
PPC_FUNC_IMPL(__imp__sub_83C9D9E0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-9792
	ctx.r3.s64 = ctx.r11.s64 + -9792;
	// bl 0x83523120
	ctx.lr = 0x83C9D9F8;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-29456
	ctx.r3.s64 = ctx.r10.s64 + -29456;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9DA04;
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

__attribute__((alias("__imp__sub_83C9DA14"))) PPC_WEAK_FUNC(sub_83C9DA14);
PPC_FUNC_IMPL(__imp__sub_83C9DA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9DA18"))) PPC_WEAK_FUNC(sub_83C9DA18);
PPC_FUNC_IMPL(__imp__sub_83C9DA18) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,26
	ctx.r4.s64 = 26;
	// addi r3,r11,5136
	ctx.r3.s64 = ctx.r11.s64 + 5136;
	// bl 0x83522540
	ctx.lr = 0x83C9DA34;
	sub_83522540(ctx, base);
	// lis r10,-31746
	ctx.r10.s64 = -2080505856;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-29440
	ctx.r3.s64 = ctx.r9.s64 + -29440;
	// stw r11,-9796(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9796, ctx.r11.u32);
	// bl 0x831cdcc8
	ctx.lr = 0x83C9DA4C;
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

__attribute__((alias("__imp__sub_83C9DA5C"))) PPC_WEAK_FUNC(sub_83C9DA5C);
PPC_FUNC_IMPL(__imp__sub_83C9DA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9DA60"))) PPC_WEAK_FUNC(sub_83C9DA60);
PPC_FUNC_IMPL(__imp__sub_83C9DA60) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,30
	ctx.r4.s64 = 30;
	// addi r3,r11,5164
	ctx.r3.s64 = ctx.r11.s64 + 5164;
	// bl 0x83522540
	ctx.lr = 0x83C9DA7C;
	sub_83522540(ctx, base);
	// lis r10,-31746
	ctx.r10.s64 = -2080505856;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-29424
	ctx.r3.s64 = ctx.r9.s64 + -29424;
	// stw r11,-9784(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9784, ctx.r11.u32);
	// bl 0x831cdcc8
	ctx.lr = 0x83C9DA94;
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

__attribute__((alias("__imp__sub_83C9DAA4"))) PPC_WEAK_FUNC(sub_83C9DAA4);
PPC_FUNC_IMPL(__imp__sub_83C9DAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9DAA8"))) PPC_WEAK_FUNC(sub_83C9DAA8);
PPC_FUNC_IMPL(__imp__sub_83C9DAA8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,22
	ctx.r4.s64 = 22;
	// addi r3,r11,5196
	ctx.r3.s64 = ctx.r11.s64 + 5196;
	// bl 0x83522540
	ctx.lr = 0x83C9DAC4;
	sub_83522540(ctx, base);
	// lis r10,-31746
	ctx.r10.s64 = -2080505856;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-29408
	ctx.r3.s64 = ctx.r9.s64 + -29408;
	// stw r11,-9788(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9788, ctx.r11.u32);
	// bl 0x831cdcc8
	ctx.lr = 0x83C9DADC;
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

__attribute__((alias("__imp__sub_83C9DAEC"))) PPC_WEAK_FUNC(sub_83C9DAEC);
PPC_FUNC_IMPL(__imp__sub_83C9DAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9DAF0"))) PPC_WEAK_FUNC(sub_83C9DAF0);
PPC_FUNC_IMPL(__imp__sub_83C9DAF0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,22
	ctx.r4.s64 = 22;
	// addi r3,r11,5220
	ctx.r3.s64 = ctx.r11.s64 + 5220;
	// bl 0x83522540
	ctx.lr = 0x83C9DB0C;
	sub_83522540(ctx, base);
	// lis r10,-31746
	ctx.r10.s64 = -2080505856;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-29392
	ctx.r3.s64 = ctx.r9.s64 + -29392;
	// stw r11,-9780(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9780, ctx.r11.u32);
	// bl 0x831cdcc8
	ctx.lr = 0x83C9DB24;
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

__attribute__((alias("__imp__sub_83C9DB34"))) PPC_WEAK_FUNC(sub_83C9DB34);
PPC_FUNC_IMPL(__imp__sub_83C9DB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9DB38"))) PPC_WEAK_FUNC(sub_83C9DB38);
PPC_FUNC_IMPL(__imp__sub_83C9DB38) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x83522850
	ctx.lr = 0x83C9DB48;
	sub_83522850(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31746
	ctx.r10.s64 = -2080505856;
	// stw r11,-9776(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9776, ctx.r11.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83c9db88
	if (!cr6.eq) goto loc_83C9DB88;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
loc_83C9DB6C:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwcx. r8,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83c9db6c
	if (!cr0.eq) goto loc_83C9DB6C;
loc_83C9DB88:
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-29376
	ctx.r3.s64 = ctx.r11.s64 + -29376;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9DB94;
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

__attribute__((alias("__imp__sub_83C9DBA4"))) PPC_WEAK_FUNC(sub_83C9DBA4);
PPC_FUNC_IMPL(__imp__sub_83C9DBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9DBA8"))) PPC_WEAK_FUNC(sub_83C9DBA8);
PPC_FUNC_IMPL(__imp__sub_83C9DBA8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-9772
	ctx.r3.s64 = ctx.r11.s64 + -9772;
	// bl 0x83523120
	ctx.lr = 0x83C9DBC0;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-29360
	ctx.r3.s64 = ctx.r10.s64 + -29360;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9DBCC;
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

__attribute__((alias("__imp__sub_83C9DBDC"))) PPC_WEAK_FUNC(sub_83C9DBDC);
PPC_FUNC_IMPL(__imp__sub_83C9DBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9DBE0"))) PPC_WEAK_FUNC(sub_83C9DBE0);
PPC_FUNC_IMPL(__imp__sub_83C9DBE0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-9768
	ctx.r3.s64 = ctx.r11.s64 + -9768;
	// bl 0x83523120
	ctx.lr = 0x83C9DBF8;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-29344
	ctx.r3.s64 = ctx.r10.s64 + -29344;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9DC04;
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

__attribute__((alias("__imp__sub_83C9DC14"))) PPC_WEAK_FUNC(sub_83C9DC14);
PPC_FUNC_IMPL(__imp__sub_83C9DC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9DC18"))) PPC_WEAK_FUNC(sub_83C9DC18);
PPC_FUNC_IMPL(__imp__sub_83C9DC18) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r31,r11,-9764
	ctx.r31.s64 = ctx.r11.s64 + -9764;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82bee188
	ctx.lr = 0x83C9DC48;
	sub_82BEE188(ctx, base);
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82bee188
	ctx.lr = 0x83C9DC60;
	sub_82BEE188(ctx, base);
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82bee188
	ctx.lr = 0x83C9DC78;
	sub_82BEE188(ctx, base);
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,44
	ctx.r4.s64 = 44;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82bee188
	ctx.lr = 0x83C9DC90;
	sub_82BEE188(ctx, base);
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,60
	ctx.r4.s64 = 60;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82bee188
	ctx.lr = 0x83C9DCA8;
	sub_82BEE188(ctx, base);
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,28
	ctx.r6.s64 = 28;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,56
	ctx.r4.s64 = 56;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x82bee188
	ctx.lr = 0x83C9DCC0;
	sub_82BEE188(ctx, base);
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,72
	ctx.r4.s64 = 72;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82bee188
	ctx.lr = 0x83C9DCD8;
	sub_82BEE188(ctx, base);
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,84
	ctx.r6.s64 = 84;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,132
	ctx.r4.s64 = 132;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x82bee188
	ctx.lr = 0x83C9DCF0;
	sub_82BEE188(ctx, base);
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,84
	ctx.r6.s64 = 84;
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,120
	ctx.r4.s64 = 120;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82bee188
	ctx.lr = 0x83C9DD08;
	sub_82BEE188(ctx, base);
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

__attribute__((alias("__imp__sub_83C9DD1C"))) PPC_WEAK_FUNC(sub_83C9DD1C);
PPC_FUNC_IMPL(__imp__sub_83C9DD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9DD20"))) PPC_WEAK_FUNC(sub_83C9DD20);
PPC_FUNC_IMPL(__imp__sub_83C9DD20) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-9720
	ctx.r3.s64 = ctx.r11.s64 + -9720;
	// bl 0x83523120
	ctx.lr = 0x83C9DD38;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-29328
	ctx.r3.s64 = ctx.r10.s64 + -29328;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9DD44;
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

__attribute__((alias("__imp__sub_83C9DD54"))) PPC_WEAK_FUNC(sub_83C9DD54);
PPC_FUNC_IMPL(__imp__sub_83C9DD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9DD58"))) PPC_WEAK_FUNC(sub_83C9DD58);
PPC_FUNC_IMPL(__imp__sub_83C9DD58) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-9592
	ctx.r3.s64 = ctx.r11.s64 + -9592;
	// bl 0x83523120
	ctx.lr = 0x83C9DD70;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-29312
	ctx.r3.s64 = ctx.r10.s64 + -29312;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9DD7C;
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

__attribute__((alias("__imp__sub_83C9DD8C"))) PPC_WEAK_FUNC(sub_83C9DD8C);
PPC_FUNC_IMPL(__imp__sub_83C9DD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9DD90"))) PPC_WEAK_FUNC(sub_83C9DD90);
PPC_FUNC_IMPL(__imp__sub_83C9DD90) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-9591
	ctx.r3.s64 = ctx.r11.s64 + -9591;
	// bl 0x83523120
	ctx.lr = 0x83C9DDA8;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-29296
	ctx.r3.s64 = ctx.r10.s64 + -29296;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9DDB4;
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

__attribute__((alias("__imp__sub_83C9DDC4"))) PPC_WEAK_FUNC(sub_83C9DDC4);
PPC_FUNC_IMPL(__imp__sub_83C9DDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9DDC8"))) PPC_WEAK_FUNC(sub_83C9DDC8);
PPC_FUNC_IMPL(__imp__sub_83C9DDC8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-9590
	ctx.r3.s64 = ctx.r11.s64 + -9590;
	// bl 0x83523120
	ctx.lr = 0x83C9DDE0;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-29280
	ctx.r3.s64 = ctx.r10.s64 + -29280;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9DDEC;
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

__attribute__((alias("__imp__sub_83C9DDFC"))) PPC_WEAK_FUNC(sub_83C9DDFC);
PPC_FUNC_IMPL(__imp__sub_83C9DDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9DE00"))) PPC_WEAK_FUNC(sub_83C9DE00);
PPC_FUNC_IMPL(__imp__sub_83C9DE00) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-9589
	ctx.r3.s64 = ctx.r11.s64 + -9589;
	// bl 0x83523120
	ctx.lr = 0x83C9DE18;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-29264
	ctx.r3.s64 = ctx.r10.s64 + -29264;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9DE24;
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

__attribute__((alias("__imp__sub_83C9DE34"))) PPC_WEAK_FUNC(sub_83C9DE34);
PPC_FUNC_IMPL(__imp__sub_83C9DE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9DE38"))) PPC_WEAK_FUNC(sub_83C9DE38);
PPC_FUNC_IMPL(__imp__sub_83C9DE38) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-9588
	ctx.r3.s64 = ctx.r11.s64 + -9588;
	// bl 0x83523120
	ctx.lr = 0x83C9DE50;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-29248
	ctx.r3.s64 = ctx.r10.s64 + -29248;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9DE5C;
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

__attribute__((alias("__imp__sub_83C9DE6C"))) PPC_WEAK_FUNC(sub_83C9DE6C);
PPC_FUNC_IMPL(__imp__sub_83C9DE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9DE70"))) PPC_WEAK_FUNC(sub_83C9DE70);
PPC_FUNC_IMPL(__imp__sub_83C9DE70) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-9587
	ctx.r3.s64 = ctx.r11.s64 + -9587;
	// bl 0x83523120
	ctx.lr = 0x83C9DE88;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-29232
	ctx.r3.s64 = ctx.r10.s64 + -29232;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9DE94;
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

__attribute__((alias("__imp__sub_83C9DEA4"))) PPC_WEAK_FUNC(sub_83C9DEA4);
PPC_FUNC_IMPL(__imp__sub_83C9DEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9DEA8"))) PPC_WEAK_FUNC(sub_83C9DEA8);
PPC_FUNC_IMPL(__imp__sub_83C9DEA8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-9586
	ctx.r3.s64 = ctx.r11.s64 + -9586;
	// bl 0x83523120
	ctx.lr = 0x83C9DEC0;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-29216
	ctx.r3.s64 = ctx.r10.s64 + -29216;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9DECC;
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

__attribute__((alias("__imp__sub_83C9DEDC"))) PPC_WEAK_FUNC(sub_83C9DEDC);
PPC_FUNC_IMPL(__imp__sub_83C9DEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9DEE0"))) PPC_WEAK_FUNC(sub_83C9DEE0);
PPC_FUNC_IMPL(__imp__sub_83C9DEE0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-9585
	ctx.r3.s64 = ctx.r11.s64 + -9585;
	// bl 0x83523120
	ctx.lr = 0x83C9DEF8;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-29200
	ctx.r3.s64 = ctx.r10.s64 + -29200;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9DF04;
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

__attribute__((alias("__imp__sub_83C9DF14"))) PPC_WEAK_FUNC(sub_83C9DF14);
PPC_FUNC_IMPL(__imp__sub_83C9DF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9DF18"))) PPC_WEAK_FUNC(sub_83C9DF18);
PPC_FUNC_IMPL(__imp__sub_83C9DF18) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-9576
	ctx.r3.s64 = ctx.r11.s64 + -9576;
	// bl 0x83523120
	ctx.lr = 0x83C9DF30;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-29184
	ctx.r3.s64 = ctx.r10.s64 + -29184;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9DF3C;
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

__attribute__((alias("__imp__sub_83C9DF4C"))) PPC_WEAK_FUNC(sub_83C9DF4C);
PPC_FUNC_IMPL(__imp__sub_83C9DF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9DF50"))) PPC_WEAK_FUNC(sub_83C9DF50);
PPC_FUNC_IMPL(__imp__sub_83C9DF50) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-9572
	ctx.r3.s64 = ctx.r11.s64 + -9572;
	// bl 0x83523120
	ctx.lr = 0x83C9DF68;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-29168
	ctx.r3.s64 = ctx.r10.s64 + -29168;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9DF74;
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

__attribute__((alias("__imp__sub_83C9DF84"))) PPC_WEAK_FUNC(sub_83C9DF84);
PPC_FUNC_IMPL(__imp__sub_83C9DF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9DF88"))) PPC_WEAK_FUNC(sub_83C9DF88);
PPC_FUNC_IMPL(__imp__sub_83C9DF88) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-9508
	ctx.r3.s64 = ctx.r11.s64 + -9508;
	// addi r4,r10,7096
	ctx.r4.s64 = ctx.r10.s64 + 7096;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x83523160
	ctx.lr = 0x83C9DFB4;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-29152
	ctx.r3.s64 = ctx.r9.s64 + -29152;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9DFC0;
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

__attribute__((alias("__imp__sub_83C9DFD0"))) PPC_WEAK_FUNC(sub_83C9DFD0);
PPC_FUNC_IMPL(__imp__sub_83C9DFD0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-9568
	ctx.r3.s64 = ctx.r11.s64 + -9568;
	// addi r4,r10,7108
	ctx.r4.s64 = ctx.r10.s64 + 7108;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x83523160
	ctx.lr = 0x83C9DFFC;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-29136
	ctx.r3.s64 = ctx.r9.s64 + -29136;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9E008;
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

__attribute__((alias("__imp__sub_83C9E018"))) PPC_WEAK_FUNC(sub_83C9E018);
PPC_FUNC_IMPL(__imp__sub_83C9E018) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-9388
	ctx.r3.s64 = ctx.r11.s64 + -9388;
	// bl 0x83523120
	ctx.lr = 0x83C9E030;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-29120
	ctx.r3.s64 = ctx.r10.s64 + -29120;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9E03C;
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

__attribute__((alias("__imp__sub_83C9E04C"))) PPC_WEAK_FUNC(sub_83C9E04C);
PPC_FUNC_IMPL(__imp__sub_83C9E04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9E050"))) PPC_WEAK_FUNC(sub_83C9E050);
PPC_FUNC_IMPL(__imp__sub_83C9E050) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-9384
	ctx.r3.s64 = ctx.r11.s64 + -9384;
	// addi r4,r10,7144
	ctx.r4.s64 = ctx.r10.s64 + 7144;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,14
	ctx.r5.s64 = 14;
	// bl 0x83523160
	ctx.lr = 0x83C9E07C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-29104
	ctx.r3.s64 = ctx.r9.s64 + -29104;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9E088;
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

__attribute__((alias("__imp__sub_83C9E098"))) PPC_WEAK_FUNC(sub_83C9E098);
PPC_FUNC_IMPL(__imp__sub_83C9E098) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-9448
	ctx.r3.s64 = ctx.r11.s64 + -9448;
	// addi r4,r10,7160
	ctx.r4.s64 = ctx.r10.s64 + 7160;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,14
	ctx.r5.s64 = 14;
	// bl 0x83523160
	ctx.lr = 0x83C9E0C4;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-29088
	ctx.r3.s64 = ctx.r9.s64 + -29088;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9E0D0;
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

__attribute__((alias("__imp__sub_83C9E0E0"))) PPC_WEAK_FUNC(sub_83C9E0E0);
PPC_FUNC_IMPL(__imp__sub_83C9E0E0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-9264
	ctx.r3.s64 = ctx.r11.s64 + -9264;
	// addi r4,r10,7176
	ctx.r4.s64 = ctx.r10.s64 + 7176;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,9
	ctx.r5.s64 = 9;
	// bl 0x83523160
	ctx.lr = 0x83C9E10C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-29072
	ctx.r3.s64 = ctx.r9.s64 + -29072;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9E118;
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

__attribute__((alias("__imp__sub_83C9E128"))) PPC_WEAK_FUNC(sub_83C9E128);
PPC_FUNC_IMPL(__imp__sub_83C9E128) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-9324
	ctx.r3.s64 = ctx.r11.s64 + -9324;
	// addi r4,r10,7188
	ctx.r4.s64 = ctx.r10.s64 + 7188;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x83523160
	ctx.lr = 0x83C9E154;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-29056
	ctx.r3.s64 = ctx.r9.s64 + -29056;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9E160;
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

__attribute__((alias("__imp__sub_83C9E170"))) PPC_WEAK_FUNC(sub_83C9E170);
PPC_FUNC_IMPL(__imp__sub_83C9E170) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-9204
	ctx.r3.s64 = ctx.r11.s64 + -9204;
	// bl 0x83523120
	ctx.lr = 0x83C9E188;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-29040
	ctx.r3.s64 = ctx.r10.s64 + -29040;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9E194;
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

__attribute__((alias("__imp__sub_83C9E1A4"))) PPC_WEAK_FUNC(sub_83C9E1A4);
PPC_FUNC_IMPL(__imp__sub_83C9E1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9E1A8"))) PPC_WEAK_FUNC(sub_83C9E1A8);
PPC_FUNC_IMPL(__imp__sub_83C9E1A8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-9203
	ctx.r3.s64 = ctx.r11.s64 + -9203;
	// bl 0x83523120
	ctx.lr = 0x83C9E1C0;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-29024
	ctx.r3.s64 = ctx.r10.s64 + -29024;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9E1CC;
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

__attribute__((alias("__imp__sub_83C9E1DC"))) PPC_WEAK_FUNC(sub_83C9E1DC);
PPC_FUNC_IMPL(__imp__sub_83C9E1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9E1E0"))) PPC_WEAK_FUNC(sub_83C9E1E0);
PPC_FUNC_IMPL(__imp__sub_83C9E1E0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-9202
	ctx.r3.s64 = ctx.r11.s64 + -9202;
	// bl 0x83523120
	ctx.lr = 0x83C9E1F8;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-29008
	ctx.r3.s64 = ctx.r10.s64 + -29008;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9E204;
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

__attribute__((alias("__imp__sub_83C9E214"))) PPC_WEAK_FUNC(sub_83C9E214);
PPC_FUNC_IMPL(__imp__sub_83C9E214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9E218"))) PPC_WEAK_FUNC(sub_83C9E218);
PPC_FUNC_IMPL(__imp__sub_83C9E218) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-9201
	ctx.r3.s64 = ctx.r11.s64 + -9201;
	// bl 0x83523120
	ctx.lr = 0x83C9E230;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-28992
	ctx.r3.s64 = ctx.r10.s64 + -28992;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9E23C;
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

__attribute__((alias("__imp__sub_83C9E24C"))) PPC_WEAK_FUNC(sub_83C9E24C);
PPC_FUNC_IMPL(__imp__sub_83C9E24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9E250"))) PPC_WEAK_FUNC(sub_83C9E250);
PPC_FUNC_IMPL(__imp__sub_83C9E250) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-9200
	ctx.r3.s64 = ctx.r11.s64 + -9200;
	// bl 0x83523120
	ctx.lr = 0x83C9E268;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-28976
	ctx.r3.s64 = ctx.r10.s64 + -28976;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9E274;
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

__attribute__((alias("__imp__sub_83C9E284"))) PPC_WEAK_FUNC(sub_83C9E284);
PPC_FUNC_IMPL(__imp__sub_83C9E284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9E288"))) PPC_WEAK_FUNC(sub_83C9E288);
PPC_FUNC_IMPL(__imp__sub_83C9E288) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-9199
	ctx.r3.s64 = ctx.r11.s64 + -9199;
	// bl 0x83523120
	ctx.lr = 0x83C9E2A0;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-28960
	ctx.r3.s64 = ctx.r10.s64 + -28960;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9E2AC;
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

__attribute__((alias("__imp__sub_83C9E2BC"))) PPC_WEAK_FUNC(sub_83C9E2BC);
PPC_FUNC_IMPL(__imp__sub_83C9E2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9E2C0"))) PPC_WEAK_FUNC(sub_83C9E2C0);
PPC_FUNC_IMPL(__imp__sub_83C9E2C0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-9198
	ctx.r3.s64 = ctx.r11.s64 + -9198;
	// bl 0x83523120
	ctx.lr = 0x83C9E2D8;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-28944
	ctx.r3.s64 = ctx.r10.s64 + -28944;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9E2E4;
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

__attribute__((alias("__imp__sub_83C9E2F4"))) PPC_WEAK_FUNC(sub_83C9E2F4);
PPC_FUNC_IMPL(__imp__sub_83C9E2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9E2F8"))) PPC_WEAK_FUNC(sub_83C9E2F8);
PPC_FUNC_IMPL(__imp__sub_83C9E2F8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-9020
	ctx.r3.s64 = ctx.r11.s64 + -9020;
	// bl 0x83523120
	ctx.lr = 0x83C9E310;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-28928
	ctx.r3.s64 = ctx.r10.s64 + -28928;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9E31C;
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

__attribute__((alias("__imp__sub_83C9E32C"))) PPC_WEAK_FUNC(sub_83C9E32C);
PPC_FUNC_IMPL(__imp__sub_83C9E32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9E330"))) PPC_WEAK_FUNC(sub_83C9E330);
PPC_FUNC_IMPL(__imp__sub_83C9E330) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-9012
	ctx.r3.s64 = ctx.r11.s64 + -9012;
	// bl 0x83523120
	ctx.lr = 0x83C9E348;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-28912
	ctx.r3.s64 = ctx.r10.s64 + -28912;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9E354;
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

__attribute__((alias("__imp__sub_83C9E364"))) PPC_WEAK_FUNC(sub_83C9E364);
PPC_FUNC_IMPL(__imp__sub_83C9E364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9E368"))) PPC_WEAK_FUNC(sub_83C9E368);
PPC_FUNC_IMPL(__imp__sub_83C9E368) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,42
	ctx.r4.s64 = 42;
	// addi r3,r11,9896
	ctx.r3.s64 = ctx.r11.s64 + 9896;
	// bl 0x83522540
	ctx.lr = 0x83C9E384;
	sub_83522540(ctx, base);
	// lis r10,-31746
	ctx.r10.s64 = -2080505856;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-28896
	ctx.r3.s64 = ctx.r9.s64 + -28896;
	// stw r11,-9016(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9016, ctx.r11.u32);
	// bl 0x831cdcc8
	ctx.lr = 0x83C9E39C;
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

__attribute__((alias("__imp__sub_83C9E3AC"))) PPC_WEAK_FUNC(sub_83C9E3AC);
PPC_FUNC_IMPL(__imp__sub_83C9E3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9E3B0"))) PPC_WEAK_FUNC(sub_83C9E3B0);
PPC_FUNC_IMPL(__imp__sub_83C9E3B0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-9011
	ctx.r3.s64 = ctx.r11.s64 + -9011;
	// bl 0x83523120
	ctx.lr = 0x83C9E3C8;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-28880
	ctx.r3.s64 = ctx.r10.s64 + -28880;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9E3D4;
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

__attribute__((alias("__imp__sub_83C9E3E4"))) PPC_WEAK_FUNC(sub_83C9E3E4);
PPC_FUNC_IMPL(__imp__sub_83C9E3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9E3E8"))) PPC_WEAK_FUNC(sub_83C9E3E8);
PPC_FUNC_IMPL(__imp__sub_83C9E3E8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-9010
	ctx.r3.s64 = ctx.r11.s64 + -9010;
	// bl 0x83523120
	ctx.lr = 0x83C9E400;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-28864
	ctx.r3.s64 = ctx.r10.s64 + -28864;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9E40C;
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

__attribute__((alias("__imp__sub_83C9E41C"))) PPC_WEAK_FUNC(sub_83C9E41C);
PPC_FUNC_IMPL(__imp__sub_83C9E41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9E420"))) PPC_WEAK_FUNC(sub_83C9E420);
PPC_FUNC_IMPL(__imp__sub_83C9E420) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-8972
	ctx.r3.s64 = ctx.r11.s64 + -8972;
	// bl 0x83523120
	ctx.lr = 0x83C9E438;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-28848
	ctx.r3.s64 = ctx.r10.s64 + -28848;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9E444;
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

__attribute__((alias("__imp__sub_83C9E454"))) PPC_WEAK_FUNC(sub_83C9E454);
PPC_FUNC_IMPL(__imp__sub_83C9E454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9E458"))) PPC_WEAK_FUNC(sub_83C9E458);
PPC_FUNC_IMPL(__imp__sub_83C9E458) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-8971
	ctx.r3.s64 = ctx.r11.s64 + -8971;
	// bl 0x83523120
	ctx.lr = 0x83C9E470;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-28832
	ctx.r3.s64 = ctx.r10.s64 + -28832;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9E47C;
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

__attribute__((alias("__imp__sub_83C9E48C"))) PPC_WEAK_FUNC(sub_83C9E48C);
PPC_FUNC_IMPL(__imp__sub_83C9E48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9E490"))) PPC_WEAK_FUNC(sub_83C9E490);
PPC_FUNC_IMPL(__imp__sub_83C9E490) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-8970
	ctx.r3.s64 = ctx.r11.s64 + -8970;
	// bl 0x83523120
	ctx.lr = 0x83C9E4A8;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-28816
	ctx.r3.s64 = ctx.r10.s64 + -28816;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9E4B4;
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

__attribute__((alias("__imp__sub_83C9E4C4"))) PPC_WEAK_FUNC(sub_83C9E4C4);
PPC_FUNC_IMPL(__imp__sub_83C9E4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9E4C8"))) PPC_WEAK_FUNC(sub_83C9E4C8);
PPC_FUNC_IMPL(__imp__sub_83C9E4C8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-8969
	ctx.r3.s64 = ctx.r11.s64 + -8969;
	// bl 0x83523120
	ctx.lr = 0x83C9E4E0;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-28800
	ctx.r3.s64 = ctx.r10.s64 + -28800;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9E4EC;
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

__attribute__((alias("__imp__sub_83C9E4FC"))) PPC_WEAK_FUNC(sub_83C9E4FC);
PPC_FUNC_IMPL(__imp__sub_83C9E4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9E500"))) PPC_WEAK_FUNC(sub_83C9E500);
PPC_FUNC_IMPL(__imp__sub_83C9E500) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-8968
	ctx.r3.s64 = ctx.r11.s64 + -8968;
	// bl 0x83523120
	ctx.lr = 0x83C9E518;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-28784
	ctx.r3.s64 = ctx.r10.s64 + -28784;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9E524;
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

__attribute__((alias("__imp__sub_83C9E534"))) PPC_WEAK_FUNC(sub_83C9E534);
PPC_FUNC_IMPL(__imp__sub_83C9E534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9E538"))) PPC_WEAK_FUNC(sub_83C9E538);
PPC_FUNC_IMPL(__imp__sub_83C9E538) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-8964
	ctx.r3.s64 = ctx.r11.s64 + -8964;
	// bl 0x83523120
	ctx.lr = 0x83C9E550;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-28768
	ctx.r3.s64 = ctx.r10.s64 + -28768;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9E55C;
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

__attribute__((alias("__imp__sub_83C9E56C"))) PPC_WEAK_FUNC(sub_83C9E56C);
PPC_FUNC_IMPL(__imp__sub_83C9E56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9E570"))) PPC_WEAK_FUNC(sub_83C9E570);
PPC_FUNC_IMPL(__imp__sub_83C9E570) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-8960
	ctx.r3.s64 = ctx.r11.s64 + -8960;
	// addi r4,r10,13024
	ctx.r4.s64 = ctx.r10.s64 + 13024;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,10
	ctx.r5.s64 = 10;
	// bl 0x83523160
	ctx.lr = 0x83C9E59C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-28752
	ctx.r3.s64 = ctx.r9.s64 + -28752;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9E5A8;
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

__attribute__((alias("__imp__sub_83C9E5B8"))) PPC_WEAK_FUNC(sub_83C9E5B8);
PPC_FUNC_IMPL(__imp__sub_83C9E5B8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-8900
	ctx.r3.s64 = ctx.r11.s64 + -8900;
	// bl 0x83523120
	ctx.lr = 0x83C9E5D0;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-28736
	ctx.r3.s64 = ctx.r10.s64 + -28736;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9E5DC;
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

__attribute__((alias("__imp__sub_83C9E5EC"))) PPC_WEAK_FUNC(sub_83C9E5EC);
PPC_FUNC_IMPL(__imp__sub_83C9E5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9E5F0"))) PPC_WEAK_FUNC(sub_83C9E5F0);
PPC_FUNC_IMPL(__imp__sub_83C9E5F0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-8899
	ctx.r3.s64 = ctx.r11.s64 + -8899;
	// bl 0x83523120
	ctx.lr = 0x83C9E608;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-28720
	ctx.r3.s64 = ctx.r10.s64 + -28720;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9E614;
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

__attribute__((alias("__imp__sub_83C9E624"))) PPC_WEAK_FUNC(sub_83C9E624);
PPC_FUNC_IMPL(__imp__sub_83C9E624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9E628"))) PPC_WEAK_FUNC(sub_83C9E628);
PPC_FUNC_IMPL(__imp__sub_83C9E628) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-8898
	ctx.r3.s64 = ctx.r11.s64 + -8898;
	// bl 0x83523120
	ctx.lr = 0x83C9E640;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-28704
	ctx.r3.s64 = ctx.r10.s64 + -28704;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9E64C;
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

__attribute__((alias("__imp__sub_83C9E65C"))) PPC_WEAK_FUNC(sub_83C9E65C);
PPC_FUNC_IMPL(__imp__sub_83C9E65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9E660"))) PPC_WEAK_FUNC(sub_83C9E660);
PPC_FUNC_IMPL(__imp__sub_83C9E660) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-8897
	ctx.r3.s64 = ctx.r11.s64 + -8897;
	// bl 0x83523120
	ctx.lr = 0x83C9E678;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-28688
	ctx.r3.s64 = ctx.r10.s64 + -28688;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9E684;
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

__attribute__((alias("__imp__sub_83C9E694"))) PPC_WEAK_FUNC(sub_83C9E694);
PPC_FUNC_IMPL(__imp__sub_83C9E694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9E698"))) PPC_WEAK_FUNC(sub_83C9E698);
PPC_FUNC_IMPL(__imp__sub_83C9E698) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-8896
	ctx.r3.s64 = ctx.r11.s64 + -8896;
	// bl 0x83523120
	ctx.lr = 0x83C9E6B0;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-28672
	ctx.r3.s64 = ctx.r10.s64 + -28672;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9E6BC;
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

__attribute__((alias("__imp__sub_83C9E6CC"))) PPC_WEAK_FUNC(sub_83C9E6CC);
PPC_FUNC_IMPL(__imp__sub_83C9E6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9E6D0"))) PPC_WEAK_FUNC(sub_83C9E6D0);
PPC_FUNC_IMPL(__imp__sub_83C9E6D0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-8894
	ctx.r3.s64 = ctx.r11.s64 + -8894;
	// bl 0x83523120
	ctx.lr = 0x83C9E6E8;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-28656
	ctx.r3.s64 = ctx.r10.s64 + -28656;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9E6F4;
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

__attribute__((alias("__imp__sub_83C9E704"))) PPC_WEAK_FUNC(sub_83C9E704);
PPC_FUNC_IMPL(__imp__sub_83C9E704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9E708"))) PPC_WEAK_FUNC(sub_83C9E708);
PPC_FUNC_IMPL(__imp__sub_83C9E708) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-8893
	ctx.r3.s64 = ctx.r11.s64 + -8893;
	// bl 0x83523120
	ctx.lr = 0x83C9E720;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-28640
	ctx.r3.s64 = ctx.r10.s64 + -28640;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9E72C;
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

__attribute__((alias("__imp__sub_83C9E73C"))) PPC_WEAK_FUNC(sub_83C9E73C);
PPC_FUNC_IMPL(__imp__sub_83C9E73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9E740"))) PPC_WEAK_FUNC(sub_83C9E740);
PPC_FUNC_IMPL(__imp__sub_83C9E740) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-8892
	ctx.r3.s64 = ctx.r11.s64 + -8892;
	// bl 0x83523120
	ctx.lr = 0x83C9E758;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-28624
	ctx.r3.s64 = ctx.r10.s64 + -28624;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9E764;
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

__attribute__((alias("__imp__sub_83C9E774"))) PPC_WEAK_FUNC(sub_83C9E774);
PPC_FUNC_IMPL(__imp__sub_83C9E774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9E778"))) PPC_WEAK_FUNC(sub_83C9E778);
PPC_FUNC_IMPL(__imp__sub_83C9E778) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-8891
	ctx.r3.s64 = ctx.r11.s64 + -8891;
	// bl 0x83523120
	ctx.lr = 0x83C9E790;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-28608
	ctx.r3.s64 = ctx.r10.s64 + -28608;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9E79C;
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

__attribute__((alias("__imp__sub_83C9E7AC"))) PPC_WEAK_FUNC(sub_83C9E7AC);
PPC_FUNC_IMPL(__imp__sub_83C9E7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9E7B0"))) PPC_WEAK_FUNC(sub_83C9E7B0);
PPC_FUNC_IMPL(__imp__sub_83C9E7B0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-8708
	ctx.r3.s64 = ctx.r11.s64 + -8708;
	// bl 0x83523120
	ctx.lr = 0x83C9E7C8;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-28592
	ctx.r3.s64 = ctx.r10.s64 + -28592;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9E7D4;
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

__attribute__((alias("__imp__sub_83C9E7E4"))) PPC_WEAK_FUNC(sub_83C9E7E4);
PPC_FUNC_IMPL(__imp__sub_83C9E7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9E7E8"))) PPC_WEAK_FUNC(sub_83C9E7E8);
PPC_FUNC_IMPL(__imp__sub_83C9E7E8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-8828
	ctx.r3.s64 = ctx.r11.s64 + -8828;
	// addi r4,r10,14828
	ctx.r4.s64 = ctx.r10.s64 + 14828;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x83523160
	ctx.lr = 0x83C9E814;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-28576
	ctx.r3.s64 = ctx.r9.s64 + -28576;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9E820;
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

__attribute__((alias("__imp__sub_83C9E830"))) PPC_WEAK_FUNC(sub_83C9E830);
PPC_FUNC_IMPL(__imp__sub_83C9E830) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-7864
	ctx.r3.s64 = ctx.r11.s64 + -7864;
	// addi r4,r10,14844
	ctx.r4.s64 = ctx.r10.s64 + 14844;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x83523160
	ctx.lr = 0x83C9E85C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-28560
	ctx.r3.s64 = ctx.r9.s64 + -28560;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9E868;
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

__attribute__((alias("__imp__sub_83C9E878"))) PPC_WEAK_FUNC(sub_83C9E878);
PPC_FUNC_IMPL(__imp__sub_83C9E878) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-7444
	ctx.r3.s64 = ctx.r11.s64 + -7444;
	// addi r4,r10,14856
	ctx.r4.s64 = ctx.r10.s64 + 14856;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,20
	ctx.r5.s64 = 20;
	// bl 0x83523160
	ctx.lr = 0x83C9E8A4;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-28544
	ctx.r3.s64 = ctx.r9.s64 + -28544;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9E8B0;
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

__attribute__((alias("__imp__sub_83C9E8C0"))) PPC_WEAK_FUNC(sub_83C9E8C0);
PPC_FUNC_IMPL(__imp__sub_83C9E8C0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-7924
	ctx.r3.s64 = ctx.r11.s64 + -7924;
	// addi r4,r10,14880
	ctx.r4.s64 = ctx.r10.s64 + 14880;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,11
	ctx.r5.s64 = 11;
	// bl 0x83523160
	ctx.lr = 0x83C9E8EC;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-28528
	ctx.r3.s64 = ctx.r9.s64 + -28528;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9E8F8;
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

__attribute__((alias("__imp__sub_83C9E908"))) PPC_WEAK_FUNC(sub_83C9E908);
PPC_FUNC_IMPL(__imp__sub_83C9E908) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-7384
	ctx.r3.s64 = ctx.r11.s64 + -7384;
	// addi r4,r10,14892
	ctx.r4.s64 = ctx.r10.s64 + 14892;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,10
	ctx.r5.s64 = 10;
	// bl 0x83523160
	ctx.lr = 0x83C9E934;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-28512
	ctx.r3.s64 = ctx.r9.s64 + -28512;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9E940;
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

__attribute__((alias("__imp__sub_83C9E950"))) PPC_WEAK_FUNC(sub_83C9E950);
PPC_FUNC_IMPL(__imp__sub_83C9E950) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-7504
	ctx.r3.s64 = ctx.r11.s64 + -7504;
	// addi r4,r10,14904
	ctx.r4.s64 = ctx.r10.s64 + 14904;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,21
	ctx.r5.s64 = 21;
	// bl 0x83523160
	ctx.lr = 0x83C9E97C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-28496
	ctx.r3.s64 = ctx.r9.s64 + -28496;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9E988;
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

__attribute__((alias("__imp__sub_83C9E998"))) PPC_WEAK_FUNC(sub_83C9E998);
PPC_FUNC_IMPL(__imp__sub_83C9E998) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-8644
	ctx.r3.s64 = ctx.r11.s64 + -8644;
	// addi r4,r10,14928
	ctx.r4.s64 = ctx.r10.s64 + 14928;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x83523160
	ctx.lr = 0x83C9E9C4;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-28480
	ctx.r3.s64 = ctx.r9.s64 + -28480;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9E9D0;
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

__attribute__((alias("__imp__sub_83C9E9E0"))) PPC_WEAK_FUNC(sub_83C9E9E0);
PPC_FUNC_IMPL(__imp__sub_83C9E9E0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-7324
	ctx.r3.s64 = ctx.r11.s64 + -7324;
	// addi r4,r10,14944
	ctx.r4.s64 = ctx.r10.s64 + 14944;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,10
	ctx.r5.s64 = 10;
	// bl 0x83523160
	ctx.lr = 0x83C9EA0C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-28464
	ctx.r3.s64 = ctx.r9.s64 + -28464;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9EA18;
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

__attribute__((alias("__imp__sub_83C9EA28"))) PPC_WEAK_FUNC(sub_83C9EA28);
PPC_FUNC_IMPL(__imp__sub_83C9EA28) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-8584
	ctx.r3.s64 = ctx.r11.s64 + -8584;
	// addi r4,r10,14956
	ctx.r4.s64 = ctx.r10.s64 + 14956;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,14
	ctx.r5.s64 = 14;
	// bl 0x83523160
	ctx.lr = 0x83C9EA54;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-28448
	ctx.r3.s64 = ctx.r9.s64 + -28448;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9EA60;
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

__attribute__((alias("__imp__sub_83C9EA70"))) PPC_WEAK_FUNC(sub_83C9EA70);
PPC_FUNC_IMPL(__imp__sub_83C9EA70) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-8768
	ctx.r3.s64 = ctx.r11.s64 + -8768;
	// addi r4,r10,14972
	ctx.r4.s64 = ctx.r10.s64 + 14972;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,10
	ctx.r5.s64 = 10;
	// bl 0x83523160
	ctx.lr = 0x83C9EA9C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-28432
	ctx.r3.s64 = ctx.r9.s64 + -28432;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9EAA8;
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

__attribute__((alias("__imp__sub_83C9EAB8"))) PPC_WEAK_FUNC(sub_83C9EAB8);
PPC_FUNC_IMPL(__imp__sub_83C9EAB8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-7684
	ctx.r3.s64 = ctx.r11.s64 + -7684;
	// addi r4,r10,14984
	ctx.r4.s64 = ctx.r10.s64 + 14984;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,25
	ctx.r5.s64 = 25;
	// bl 0x83523160
	ctx.lr = 0x83C9EAE4;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-28416
	ctx.r3.s64 = ctx.r9.s64 + -28416;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9EAF0;
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

__attribute__((alias("__imp__sub_83C9EB00"))) PPC_WEAK_FUNC(sub_83C9EB00);
PPC_FUNC_IMPL(__imp__sub_83C9EB00) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-8164
	ctx.r3.s64 = ctx.r11.s64 + -8164;
	// addi r4,r10,15012
	ctx.r4.s64 = ctx.r10.s64 + 15012;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,19
	ctx.r5.s64 = 19;
	// bl 0x83523160
	ctx.lr = 0x83C9EB2C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-28400
	ctx.r3.s64 = ctx.r9.s64 + -28400;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9EB38;
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

__attribute__((alias("__imp__sub_83C9EB48"))) PPC_WEAK_FUNC(sub_83C9EB48);
PPC_FUNC_IMPL(__imp__sub_83C9EB48) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-8344
	ctx.r3.s64 = ctx.r11.s64 + -8344;
	// addi r4,r10,15032
	ctx.r4.s64 = ctx.r10.s64 + 15032;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,18
	ctx.r5.s64 = 18;
	// bl 0x83523160
	ctx.lr = 0x83C9EB74;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-28384
	ctx.r3.s64 = ctx.r9.s64 + -28384;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9EB80;
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

__attribute__((alias("__imp__sub_83C9EB90"))) PPC_WEAK_FUNC(sub_83C9EB90);
PPC_FUNC_IMPL(__imp__sub_83C9EB90) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-7624
	ctx.r3.s64 = ctx.r11.s64 + -7624;
	// addi r4,r10,15052
	ctx.r4.s64 = ctx.r10.s64 + 15052;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,22
	ctx.r5.s64 = 22;
	// bl 0x83523160
	ctx.lr = 0x83C9EBBC;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-28368
	ctx.r3.s64 = ctx.r9.s64 + -28368;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9EBC8;
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

__attribute__((alias("__imp__sub_83C9EBD8"))) PPC_WEAK_FUNC(sub_83C9EBD8);
PPC_FUNC_IMPL(__imp__sub_83C9EBD8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-8524
	ctx.r3.s64 = ctx.r11.s64 + -8524;
	// addi r4,r10,15076
	ctx.r4.s64 = ctx.r10.s64 + 15076;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,18
	ctx.r5.s64 = 18;
	// bl 0x83523160
	ctx.lr = 0x83C9EC04;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-28352
	ctx.r3.s64 = ctx.r9.s64 + -28352;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9EC10;
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

__attribute__((alias("__imp__sub_83C9EC20"))) PPC_WEAK_FUNC(sub_83C9EC20);
PPC_FUNC_IMPL(__imp__sub_83C9EC20) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-7744
	ctx.r3.s64 = ctx.r11.s64 + -7744;
	// addi r4,r10,15096
	ctx.r4.s64 = ctx.r10.s64 + 15096;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x83523160
	ctx.lr = 0x83C9EC4C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-28336
	ctx.r3.s64 = ctx.r9.s64 + -28336;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9EC58;
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

__attribute__((alias("__imp__sub_83C9EC68"))) PPC_WEAK_FUNC(sub_83C9EC68);
PPC_FUNC_IMPL(__imp__sub_83C9EC68) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-8224
	ctx.r3.s64 = ctx.r11.s64 + -8224;
	// addi r4,r10,15116
	ctx.r4.s64 = ctx.r10.s64 + 15116;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x83523160
	ctx.lr = 0x83C9EC94;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-28320
	ctx.r3.s64 = ctx.r9.s64 + -28320;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9ECA0;
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

__attribute__((alias("__imp__sub_83C9ECB0"))) PPC_WEAK_FUNC(sub_83C9ECB0);
PPC_FUNC_IMPL(__imp__sub_83C9ECB0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-8104
	ctx.r3.s64 = ctx.r11.s64 + -8104;
	// addi r4,r10,15136
	ctx.r4.s64 = ctx.r10.s64 + 15136;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x83523160
	ctx.lr = 0x83C9ECDC;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-28304
	ctx.r3.s64 = ctx.r9.s64 + -28304;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9ECE8;
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

__attribute__((alias("__imp__sub_83C9ECF8"))) PPC_WEAK_FUNC(sub_83C9ECF8);
PPC_FUNC_IMPL(__imp__sub_83C9ECF8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-8044
	ctx.r3.s64 = ctx.r11.s64 + -8044;
	// addi r4,r10,15156
	ctx.r4.s64 = ctx.r10.s64 + 15156;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x83523160
	ctx.lr = 0x83C9ED24;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-28288
	ctx.r3.s64 = ctx.r9.s64 + -28288;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9ED30;
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

__attribute__((alias("__imp__sub_83C9ED40"))) PPC_WEAK_FUNC(sub_83C9ED40);
PPC_FUNC_IMPL(__imp__sub_83C9ED40) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-8284
	ctx.r3.s64 = ctx.r11.s64 + -8284;
	// addi r4,r10,15176
	ctx.r4.s64 = ctx.r10.s64 + 15176;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,19
	ctx.r5.s64 = 19;
	// bl 0x83523160
	ctx.lr = 0x83C9ED6C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-28272
	ctx.r3.s64 = ctx.r9.s64 + -28272;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9ED78;
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

__attribute__((alias("__imp__sub_83C9ED88"))) PPC_WEAK_FUNC(sub_83C9ED88);
PPC_FUNC_IMPL(__imp__sub_83C9ED88) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-7144
	ctx.r3.s64 = ctx.r11.s64 + -7144;
	// addi r4,r10,15196
	ctx.r4.s64 = ctx.r10.s64 + 15196;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,19
	ctx.r5.s64 = 19;
	// bl 0x83523160
	ctx.lr = 0x83C9EDB4;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-28256
	ctx.r3.s64 = ctx.r9.s64 + -28256;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9EDC0;
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

__attribute__((alias("__imp__sub_83C9EDD0"))) PPC_WEAK_FUNC(sub_83C9EDD0);
PPC_FUNC_IMPL(__imp__sub_83C9EDD0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-7084
	ctx.r3.s64 = ctx.r11.s64 + -7084;
	// addi r4,r10,15216
	ctx.r4.s64 = ctx.r10.s64 + 15216;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,19
	ctx.r5.s64 = 19;
	// bl 0x83523160
	ctx.lr = 0x83C9EDFC;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-28240
	ctx.r3.s64 = ctx.r9.s64 + -28240;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9EE08;
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

__attribute__((alias("__imp__sub_83C9EE18"))) PPC_WEAK_FUNC(sub_83C9EE18);
PPC_FUNC_IMPL(__imp__sub_83C9EE18) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-7264
	ctx.r3.s64 = ctx.r11.s64 + -7264;
	// addi r4,r10,15236
	ctx.r4.s64 = ctx.r10.s64 + 15236;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,19
	ctx.r5.s64 = 19;
	// bl 0x83523160
	ctx.lr = 0x83C9EE44;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-28224
	ctx.r3.s64 = ctx.r9.s64 + -28224;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9EE50;
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

__attribute__((alias("__imp__sub_83C9EE60"))) PPC_WEAK_FUNC(sub_83C9EE60);
PPC_FUNC_IMPL(__imp__sub_83C9EE60) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-7804
	ctx.r3.s64 = ctx.r11.s64 + -7804;
	// addi r4,r10,15256
	ctx.r4.s64 = ctx.r10.s64 + 15256;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,23
	ctx.r5.s64 = 23;
	// bl 0x83523160
	ctx.lr = 0x83C9EE8C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-28208
	ctx.r3.s64 = ctx.r9.s64 + -28208;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9EE98;
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

__attribute__((alias("__imp__sub_83C9EEA8"))) PPC_WEAK_FUNC(sub_83C9EEA8);
PPC_FUNC_IMPL(__imp__sub_83C9EEA8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-8704
	ctx.r3.s64 = ctx.r11.s64 + -8704;
	// addi r4,r10,15280
	ctx.r4.s64 = ctx.r10.s64 + 15280;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,23
	ctx.r5.s64 = 23;
	// bl 0x83523160
	ctx.lr = 0x83C9EED4;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-28192
	ctx.r3.s64 = ctx.r9.s64 + -28192;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9EEE0;
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

__attribute__((alias("__imp__sub_83C9EEF0"))) PPC_WEAK_FUNC(sub_83C9EEF0);
PPC_FUNC_IMPL(__imp__sub_83C9EEF0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-8464
	ctx.r3.s64 = ctx.r11.s64 + -8464;
	// addi r4,r10,15304
	ctx.r4.s64 = ctx.r10.s64 + 15304;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,23
	ctx.r5.s64 = 23;
	// bl 0x83523160
	ctx.lr = 0x83C9EF1C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-28176
	ctx.r3.s64 = ctx.r9.s64 + -28176;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9EF28;
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

__attribute__((alias("__imp__sub_83C9EF38"))) PPC_WEAK_FUNC(sub_83C9EF38);
PPC_FUNC_IMPL(__imp__sub_83C9EF38) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-8888
	ctx.r3.s64 = ctx.r11.s64 + -8888;
	// addi r4,r10,15328
	ctx.r4.s64 = ctx.r10.s64 + 15328;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,23
	ctx.r5.s64 = 23;
	// bl 0x83523160
	ctx.lr = 0x83C9EF64;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-28160
	ctx.r3.s64 = ctx.r9.s64 + -28160;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9EF70;
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

__attribute__((alias("__imp__sub_83C9EF80"))) PPC_WEAK_FUNC(sub_83C9EF80);
PPC_FUNC_IMPL(__imp__sub_83C9EF80) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-7984
	ctx.r3.s64 = ctx.r11.s64 + -7984;
	// addi r4,r10,15352
	ctx.r4.s64 = ctx.r10.s64 + 15352;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,11
	ctx.r5.s64 = 11;
	// bl 0x83523160
	ctx.lr = 0x83C9EFAC;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-28144
	ctx.r3.s64 = ctx.r9.s64 + -28144;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9EFB8;
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

__attribute__((alias("__imp__sub_83C9EFC8"))) PPC_WEAK_FUNC(sub_83C9EFC8);
PPC_FUNC_IMPL(__imp__sub_83C9EFC8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-7204
	ctx.r3.s64 = ctx.r11.s64 + -7204;
	// addi r4,r10,15364
	ctx.r4.s64 = ctx.r10.s64 + 15364;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,10
	ctx.r5.s64 = 10;
	// bl 0x83523160
	ctx.lr = 0x83C9EFF4;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-28128
	ctx.r3.s64 = ctx.r9.s64 + -28128;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9F000;
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

__attribute__((alias("__imp__sub_83C9F010"))) PPC_WEAK_FUNC(sub_83C9F010);
PPC_FUNC_IMPL(__imp__sub_83C9F010) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-7564
	ctx.r3.s64 = ctx.r11.s64 + -7564;
	// addi r4,r10,15376
	ctx.r4.s64 = ctx.r10.s64 + 15376;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,14
	ctx.r5.s64 = 14;
	// bl 0x83523160
	ctx.lr = 0x83C9F03C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-28112
	ctx.r3.s64 = ctx.r9.s64 + -28112;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9F048;
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

__attribute__((alias("__imp__sub_83C9F058"))) PPC_WEAK_FUNC(sub_83C9F058);
PPC_FUNC_IMPL(__imp__sub_83C9F058) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-7024
	ctx.r3.s64 = ctx.r11.s64 + -7024;
	// addi r4,r10,15392
	ctx.r4.s64 = ctx.r10.s64 + 15392;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,18
	ctx.r5.s64 = 18;
	// bl 0x83523160
	ctx.lr = 0x83C9F084;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-28096
	ctx.r3.s64 = ctx.r9.s64 + -28096;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9F090;
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

__attribute__((alias("__imp__sub_83C9F0A0"))) PPC_WEAK_FUNC(sub_83C9F0A0);
PPC_FUNC_IMPL(__imp__sub_83C9F0A0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-8404
	ctx.r3.s64 = ctx.r11.s64 + -8404;
	// addi r4,r10,15412
	ctx.r4.s64 = ctx.r10.s64 + 15412;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,21
	ctx.r5.s64 = 21;
	// bl 0x83523160
	ctx.lr = 0x83C9F0CC;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-28080
	ctx.r3.s64 = ctx.r9.s64 + -28080;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9F0D8;
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

__attribute__((alias("__imp__sub_83C9F0E8"))) PPC_WEAK_FUNC(sub_83C9F0E8);
PPC_FUNC_IMPL(__imp__sub_83C9F0E8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-6844
	ctx.r3.s64 = ctx.r11.s64 + -6844;
	// bl 0x83523120
	ctx.lr = 0x83C9F100;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-28064
	ctx.r3.s64 = ctx.r10.s64 + -28064;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9F10C;
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

__attribute__((alias("__imp__sub_83C9F11C"))) PPC_WEAK_FUNC(sub_83C9F11C);
PPC_FUNC_IMPL(__imp__sub_83C9F11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9F120"))) PPC_WEAK_FUNC(sub_83C9F120);
PPC_FUNC_IMPL(__imp__sub_83C9F120) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-6720
	ctx.r3.s64 = ctx.r11.s64 + -6720;
	// addi r4,r10,15656
	ctx.r4.s64 = ctx.r10.s64 + 15656;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x83523160
	ctx.lr = 0x83C9F14C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-28048
	ctx.r3.s64 = ctx.r9.s64 + -28048;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9F158;
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

__attribute__((alias("__imp__sub_83C9F168"))) PPC_WEAK_FUNC(sub_83C9F168);
PPC_FUNC_IMPL(__imp__sub_83C9F168) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-6600
	ctx.r3.s64 = ctx.r11.s64 + -6600;
	// addi r4,r10,15660
	ctx.r4.s64 = ctx.r10.s64 + 15660;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x83523160
	ctx.lr = 0x83C9F194;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-28032
	ctx.r3.s64 = ctx.r9.s64 + -28032;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9F1A0;
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

__attribute__((alias("__imp__sub_83C9F1B0"))) PPC_WEAK_FUNC(sub_83C9F1B0);
PPC_FUNC_IMPL(__imp__sub_83C9F1B0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-6480
	ctx.r3.s64 = ctx.r11.s64 + -6480;
	// addi r4,r10,15664
	ctx.r4.s64 = ctx.r10.s64 + 15664;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x83523160
	ctx.lr = 0x83C9F1DC;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-28016
	ctx.r3.s64 = ctx.r9.s64 + -28016;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9F1E8;
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

__attribute__((alias("__imp__sub_83C9F1F8"))) PPC_WEAK_FUNC(sub_83C9F1F8);
PPC_FUNC_IMPL(__imp__sub_83C9F1F8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-6420
	ctx.r3.s64 = ctx.r11.s64 + -6420;
	// addi r4,r10,15672
	ctx.r4.s64 = ctx.r10.s64 + 15672;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x83523160
	ctx.lr = 0x83C9F224;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-28000
	ctx.r3.s64 = ctx.r9.s64 + -28000;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9F230;
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

__attribute__((alias("__imp__sub_83C9F240"))) PPC_WEAK_FUNC(sub_83C9F240);
PPC_FUNC_IMPL(__imp__sub_83C9F240) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-6964
	ctx.r3.s64 = ctx.r11.s64 + -6964;
	// addi r4,r10,15680
	ctx.r4.s64 = ctx.r10.s64 + 15680;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x83523160
	ctx.lr = 0x83C9F26C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-27984
	ctx.r3.s64 = ctx.r9.s64 + -27984;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9F278;
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

__attribute__((alias("__imp__sub_83C9F288"))) PPC_WEAK_FUNC(sub_83C9F288);
PPC_FUNC_IMPL(__imp__sub_83C9F288) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-6660
	ctx.r3.s64 = ctx.r11.s64 + -6660;
	// addi r4,r10,15688
	ctx.r4.s64 = ctx.r10.s64 + 15688;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,11
	ctx.r5.s64 = 11;
	// bl 0x83523160
	ctx.lr = 0x83C9F2B4;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-27968
	ctx.r3.s64 = ctx.r9.s64 + -27968;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9F2C0;
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

__attribute__((alias("__imp__sub_83C9F2D0"))) PPC_WEAK_FUNC(sub_83C9F2D0);
PPC_FUNC_IMPL(__imp__sub_83C9F2D0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-6540
	ctx.r3.s64 = ctx.r11.s64 + -6540;
	// addi r4,r10,15700
	ctx.r4.s64 = ctx.r10.s64 + 15700;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x83523160
	ctx.lr = 0x83C9F2FC;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-27952
	ctx.r3.s64 = ctx.r9.s64 + -27952;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9F308;
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

__attribute__((alias("__imp__sub_83C9F318"))) PPC_WEAK_FUNC(sub_83C9F318);
PPC_FUNC_IMPL(__imp__sub_83C9F318) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-6780
	ctx.r3.s64 = ctx.r11.s64 + -6780;
	// addi r4,r10,15716
	ctx.r4.s64 = ctx.r10.s64 + 15716;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,13
	ctx.r5.s64 = 13;
	// bl 0x83523160
	ctx.lr = 0x83C9F344;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-27936
	ctx.r3.s64 = ctx.r9.s64 + -27936;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9F350;
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

__attribute__((alias("__imp__sub_83C9F360"))) PPC_WEAK_FUNC(sub_83C9F360);
PPC_FUNC_IMPL(__imp__sub_83C9F360) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-6904
	ctx.r3.s64 = ctx.r11.s64 + -6904;
	// addi r4,r10,15732
	ctx.r4.s64 = ctx.r10.s64 + 15732;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,14
	ctx.r5.s64 = 14;
	// bl 0x83523160
	ctx.lr = 0x83C9F38C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-27920
	ctx.r3.s64 = ctx.r9.s64 + -27920;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9F398;
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

__attribute__((alias("__imp__sub_83C9F3A8"))) PPC_WEAK_FUNC(sub_83C9F3A8);
PPC_FUNC_IMPL(__imp__sub_83C9F3A8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-6840
	ctx.r3.s64 = ctx.r11.s64 + -6840;
	// addi r4,r10,15748
	ctx.r4.s64 = ctx.r10.s64 + 15748;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x83523160
	ctx.lr = 0x83C9F3D4;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-27904
	ctx.r3.s64 = ctx.r9.s64 + -27904;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9F3E0;
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

__attribute__((alias("__imp__sub_83C9F3F0"))) PPC_WEAK_FUNC(sub_83C9F3F0);
PPC_FUNC_IMPL(__imp__sub_83C9F3F0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-6300
	ctx.r3.s64 = ctx.r11.s64 + -6300;
	// bl 0x83523120
	ctx.lr = 0x83C9F408;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-27888
	ctx.r3.s64 = ctx.r10.s64 + -27888;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9F414;
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

__attribute__((alias("__imp__sub_83C9F424"))) PPC_WEAK_FUNC(sub_83C9F424);
PPC_FUNC_IMPL(__imp__sub_83C9F424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9F428"))) PPC_WEAK_FUNC(sub_83C9F428);
PPC_FUNC_IMPL(__imp__sub_83C9F428) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-6360
	ctx.r3.s64 = ctx.r11.s64 + -6360;
	// addi r4,r10,15856
	ctx.r4.s64 = ctx.r10.s64 + 15856;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x83523160
	ctx.lr = 0x83C9F454;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-27872
	ctx.r3.s64 = ctx.r9.s64 + -27872;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9F460;
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

__attribute__((alias("__imp__sub_83C9F470"))) PPC_WEAK_FUNC(sub_83C9F470);
PPC_FUNC_IMPL(__imp__sub_83C9F470) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-6236
	ctx.r3.s64 = ctx.r11.s64 + -6236;
	// addi r4,r10,15864
	ctx.r4.s64 = ctx.r10.s64 + 15864;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x83523160
	ctx.lr = 0x83C9F49C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-27856
	ctx.r3.s64 = ctx.r9.s64 + -27856;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9F4A8;
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

__attribute__((alias("__imp__sub_83C9F4B8"))) PPC_WEAK_FUNC(sub_83C9F4B8);
PPC_FUNC_IMPL(__imp__sub_83C9F4B8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-6296
	ctx.r3.s64 = ctx.r11.s64 + -6296;
	// addi r4,r10,15872
	ctx.r4.s64 = ctx.r10.s64 + 15872;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x83523160
	ctx.lr = 0x83C9F4E4;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-27840
	ctx.r3.s64 = ctx.r9.s64 + -27840;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9F4F0;
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

__attribute__((alias("__imp__sub_83C9F500"))) PPC_WEAK_FUNC(sub_83C9F500);
PPC_FUNC_IMPL(__imp__sub_83C9F500) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-5996
	ctx.r3.s64 = ctx.r11.s64 + -5996;
	// bl 0x83523120
	ctx.lr = 0x83C9F518;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-27824
	ctx.r3.s64 = ctx.r10.s64 + -27824;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9F524;
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

__attribute__((alias("__imp__sub_83C9F534"))) PPC_WEAK_FUNC(sub_83C9F534);
PPC_FUNC_IMPL(__imp__sub_83C9F534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9F538"))) PPC_WEAK_FUNC(sub_83C9F538);
PPC_FUNC_IMPL(__imp__sub_83C9F538) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-5932
	ctx.r3.s64 = ctx.r11.s64 + -5932;
	// addi r4,r10,16072
	ctx.r4.s64 = ctx.r10.s64 + 16072;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x83523160
	ctx.lr = 0x83C9F564;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-27808
	ctx.r3.s64 = ctx.r9.s64 + -27808;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9F570;
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

__attribute__((alias("__imp__sub_83C9F580"))) PPC_WEAK_FUNC(sub_83C9F580);
PPC_FUNC_IMPL(__imp__sub_83C9F580) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-5812
	ctx.r3.s64 = ctx.r11.s64 + -5812;
	// addi r4,r10,16076
	ctx.r4.s64 = ctx.r10.s64 + 16076;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x83523160
	ctx.lr = 0x83C9F5AC;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-27792
	ctx.r3.s64 = ctx.r9.s64 + -27792;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9F5B8;
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

__attribute__((alias("__imp__sub_83C9F5C8"))) PPC_WEAK_FUNC(sub_83C9F5C8);
PPC_FUNC_IMPL(__imp__sub_83C9F5C8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-5692
	ctx.r3.s64 = ctx.r11.s64 + -5692;
	// addi r4,r10,16080
	ctx.r4.s64 = ctx.r10.s64 + 16080;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x83523160
	ctx.lr = 0x83C9F5F4;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-27776
	ctx.r3.s64 = ctx.r9.s64 + -27776;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9F600;
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

__attribute__((alias("__imp__sub_83C9F610"))) PPC_WEAK_FUNC(sub_83C9F610);
PPC_FUNC_IMPL(__imp__sub_83C9F610) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-5632
	ctx.r3.s64 = ctx.r11.s64 + -5632;
	// addi r4,r10,16088
	ctx.r4.s64 = ctx.r10.s64 + 16088;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x83523160
	ctx.lr = 0x83C9F63C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-27760
	ctx.r3.s64 = ctx.r9.s64 + -27760;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9F648;
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

__attribute__((alias("__imp__sub_83C9F658"))) PPC_WEAK_FUNC(sub_83C9F658);
PPC_FUNC_IMPL(__imp__sub_83C9F658) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-6116
	ctx.r3.s64 = ctx.r11.s64 + -6116;
	// addi r4,r10,16096
	ctx.r4.s64 = ctx.r10.s64 + 16096;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x83523160
	ctx.lr = 0x83C9F684;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-27744
	ctx.r3.s64 = ctx.r9.s64 + -27744;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9F690;
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

__attribute__((alias("__imp__sub_83C9F6A0"))) PPC_WEAK_FUNC(sub_83C9F6A0);
PPC_FUNC_IMPL(__imp__sub_83C9F6A0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-6176
	ctx.r3.s64 = ctx.r11.s64 + -6176;
	// addi r4,r10,16104
	ctx.r4.s64 = ctx.r10.s64 + 16104;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x83523160
	ctx.lr = 0x83C9F6CC;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-27728
	ctx.r3.s64 = ctx.r9.s64 + -27728;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9F6D8;
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

__attribute__((alias("__imp__sub_83C9F6E8"))) PPC_WEAK_FUNC(sub_83C9F6E8);
PPC_FUNC_IMPL(__imp__sub_83C9F6E8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-5872
	ctx.r3.s64 = ctx.r11.s64 + -5872;
	// addi r4,r10,16112
	ctx.r4.s64 = ctx.r10.s64 + 16112;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,11
	ctx.r5.s64 = 11;
	// bl 0x83523160
	ctx.lr = 0x83C9F714;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-27712
	ctx.r3.s64 = ctx.r9.s64 + -27712;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9F720;
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

__attribute__((alias("__imp__sub_83C9F730"))) PPC_WEAK_FUNC(sub_83C9F730);
PPC_FUNC_IMPL(__imp__sub_83C9F730) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-5752
	ctx.r3.s64 = ctx.r11.s64 + -5752;
	// addi r4,r10,16124
	ctx.r4.s64 = ctx.r10.s64 + 16124;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x83523160
	ctx.lr = 0x83C9F75C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-27696
	ctx.r3.s64 = ctx.r9.s64 + -27696;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9F768;
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

__attribute__((alias("__imp__sub_83C9F778"))) PPC_WEAK_FUNC(sub_83C9F778);
PPC_FUNC_IMPL(__imp__sub_83C9F778) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-5992
	ctx.r3.s64 = ctx.r11.s64 + -5992;
	// addi r4,r10,16140
	ctx.r4.s64 = ctx.r10.s64 + 16140;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,13
	ctx.r5.s64 = 13;
	// bl 0x83523160
	ctx.lr = 0x83C9F7A4;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-27680
	ctx.r3.s64 = ctx.r9.s64 + -27680;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9F7B0;
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

__attribute__((alias("__imp__sub_83C9F7C0"))) PPC_WEAK_FUNC(sub_83C9F7C0);
PPC_FUNC_IMPL(__imp__sub_83C9F7C0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-6056
	ctx.r3.s64 = ctx.r11.s64 + -6056;
	// addi r4,r10,16156
	ctx.r4.s64 = ctx.r10.s64 + 16156;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,14
	ctx.r5.s64 = 14;
	// bl 0x83523160
	ctx.lr = 0x83C9F7EC;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-27664
	ctx.r3.s64 = ctx.r9.s64 + -27664;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9F7F8;
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

__attribute__((alias("__imp__sub_83C9F808"))) PPC_WEAK_FUNC(sub_83C9F808);
PPC_FUNC_IMPL(__imp__sub_83C9F808) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-5572
	ctx.r3.s64 = ctx.r11.s64 + -5572;
	// bl 0x83523120
	ctx.lr = 0x83C9F820;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-27648
	ctx.r3.s64 = ctx.r10.s64 + -27648;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9F82C;
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

__attribute__((alias("__imp__sub_83C9F83C"))) PPC_WEAK_FUNC(sub_83C9F83C);
PPC_FUNC_IMPL(__imp__sub_83C9F83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9F840"))) PPC_WEAK_FUNC(sub_83C9F840);
PPC_FUNC_IMPL(__imp__sub_83C9F840) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-5568
	ctx.r3.s64 = ctx.r11.s64 + -5568;
	// addi r4,r10,16376
	ctx.r4.s64 = ctx.r10.s64 + 16376;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x83523160
	ctx.lr = 0x83C9F86C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-27632
	ctx.r3.s64 = ctx.r9.s64 + -27632;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9F878;
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

__attribute__((alias("__imp__sub_83C9F888"))) PPC_WEAK_FUNC(sub_83C9F888);
PPC_FUNC_IMPL(__imp__sub_83C9F888) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-5508
	ctx.r3.s64 = ctx.r11.s64 + -5508;
	// bl 0x83523120
	ctx.lr = 0x83C9F8A0;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-27616
	ctx.r3.s64 = ctx.r10.s64 + -27616;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9F8AC;
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

__attribute__((alias("__imp__sub_83C9F8BC"))) PPC_WEAK_FUNC(sub_83C9F8BC);
PPC_FUNC_IMPL(__imp__sub_83C9F8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9F8C0"))) PPC_WEAK_FUNC(sub_83C9F8C0);
PPC_FUNC_IMPL(__imp__sub_83C9F8C0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// li r7,255
	ctx.r7.s64 = 255;
	// addi r31,r11,-5504
	ctx.r31.s64 = ctx.r11.s64 + -5504;
	// li r6,255
	ctx.r6.s64 = 255;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,255
	ctx.r4.s64 = 255;
	// bl 0x82bee188
	ctx.lr = 0x83C9F8F0;
	sub_82BEE188(ctx, base);
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,208
	ctx.r6.s64 = 208;
	// li r5,208
	ctx.r5.s64 = 208;
	// li r4,208
	ctx.r4.s64 = 208;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82bee188
	ctx.lr = 0x83C9F908;
	sub_82BEE188(ctx, base);
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,160
	ctx.r6.s64 = 160;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82bee188
	ctx.lr = 0x83C9F920;
	sub_82BEE188(ctx, base);
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,192
	ctx.r6.s64 = 192;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,192
	ctx.r4.s64 = 192;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82bee188
	ctx.lr = 0x83C9F938;
	sub_82BEE188(ctx, base);
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,208
	ctx.r6.s64 = 208;
	// li r5,208
	ctx.r5.s64 = 208;
	// li r4,208
	ctx.r4.s64 = 208;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82bee188
	ctx.lr = 0x83C9F950;
	sub_82BEE188(ctx, base);
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,160
	ctx.r6.s64 = 160;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x82bee188
	ctx.lr = 0x83C9F968;
	sub_82BEE188(ctx, base);
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,192
	ctx.r6.s64 = 192;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,192
	ctx.r4.s64 = 192;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82bee188
	ctx.lr = 0x83C9F980;
	sub_82BEE188(ctx, base);
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,208
	ctx.r6.s64 = 208;
	// li r5,208
	ctx.r5.s64 = 208;
	// li r4,208
	ctx.r4.s64 = 208;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x82bee188
	ctx.lr = 0x83C9F998;
	sub_82BEE188(ctx, base);
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,160
	ctx.r6.s64 = 160;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82bee188
	ctx.lr = 0x83C9F9B0;
	sub_82BEE188(ctx, base);
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,192
	ctx.r6.s64 = 192;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,192
	ctx.r4.s64 = 192;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x82bee188
	ctx.lr = 0x83C9F9C8;
	sub_82BEE188(ctx, base);
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,208
	ctx.r6.s64 = 208;
	// li r5,208
	ctx.r5.s64 = 208;
	// li r4,208
	ctx.r4.s64 = 208;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82bee188
	ctx.lr = 0x83C9F9E0;
	sub_82BEE188(ctx, base);
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,160
	ctx.r6.s64 = 160;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x82bee188
	ctx.lr = 0x83C9F9F8;
	sub_82BEE188(ctx, base);
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,192
	ctx.r6.s64 = 192;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,192
	ctx.r4.s64 = 192;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x82bee188
	ctx.lr = 0x83C9FA10;
	sub_82BEE188(ctx, base);
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

__attribute__((alias("__imp__sub_83C9FA24"))) PPC_WEAK_FUNC(sub_83C9FA24);
PPC_FUNC_IMPL(__imp__sub_83C9FA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9FA28"))) PPC_WEAK_FUNC(sub_83C9FA28);
PPC_FUNC_IMPL(__imp__sub_83C9FA28) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-5452
	ctx.r3.s64 = ctx.r11.s64 + -5452;
	// bl 0x83523120
	ctx.lr = 0x83C9FA40;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-27600
	ctx.r3.s64 = ctx.r10.s64 + -27600;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9FA4C;
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

__attribute__((alias("__imp__sub_83C9FA5C"))) PPC_WEAK_FUNC(sub_83C9FA5C);
PPC_FUNC_IMPL(__imp__sub_83C9FA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9FA60"))) PPC_WEAK_FUNC(sub_83C9FA60);
PPC_FUNC_IMPL(__imp__sub_83C9FA60) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-5440
	ctx.r3.s64 = ctx.r11.s64 + -5440;
	// bl 0x83523120
	ctx.lr = 0x83C9FA78;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-27584
	ctx.r3.s64 = ctx.r10.s64 + -27584;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9FA84;
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

__attribute__((alias("__imp__sub_83C9FA94"))) PPC_WEAK_FUNC(sub_83C9FA94);
PPC_FUNC_IMPL(__imp__sub_83C9FA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9FA98"))) PPC_WEAK_FUNC(sub_83C9FA98);
PPC_FUNC_IMPL(__imp__sub_83C9FA98) {
	PPC_FUNC_PROLOGUE();
	PPCVRegister vTemp{};
	// vspltisw128 v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_set1_epi32(int(0x0)));
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// vspltisw128 v61,-1
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// li r10,48
	ctx.r10.s64 = 48;
	// addi r9,r11,-5424
	ctx.r9.s64 = ctx.r11.s64 + -5424;
	// li r8,16
	ctx.r8.s64 = 16;
	// vupkd3d128 v60,v62,0
	vTemp.u32[0] = ctx.v62.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v62.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v62.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v62.u8[2] | 0x3F800000;
	ctx.v60 = vTemp;
	// vor128 v12,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vsldoi128 v59,v62,v61,12
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 4));
	// vor128 v13,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vsldoi128 v58,v61,v62,8
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 8));
	// li r7,32
	ctx.r7.s64 = 32;
	// vsldoi128 v57,v62,v61,8
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 8));
	// vsldoi128 v56,v61,v62,4
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 12));
	// vor128 v11,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v60.u8));
	// vor128 v0,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v60.u8));
	// vsldoi128 v63,v60,v62,12
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 4));
	// vand128 v9,v58,v59
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// vsldoi128 v62,v62,v60,4
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), 12));
	// vand128 v10,v56,v57
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// vsel v9,v12,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8))));
	// vsel v12,v13,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r9,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v9,r9,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r9,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C9FB04"))) PPC_WEAK_FUNC(sub_83C9FB04);
PPC_FUNC_IMPL(__imp__sub_83C9FB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9FB08"))) PPC_WEAK_FUNC(sub_83C9FB08);
PPC_FUNC_IMPL(__imp__sub_83C9FB08) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-5360
	ctx.r3.s64 = ctx.r11.s64 + -5360;
	// bl 0x83523120
	ctx.lr = 0x83C9FB20;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-27568
	ctx.r3.s64 = ctx.r10.s64 + -27568;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9FB2C;
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

__attribute__((alias("__imp__sub_83C9FB3C"))) PPC_WEAK_FUNC(sub_83C9FB3C);
PPC_FUNC_IMPL(__imp__sub_83C9FB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9FB40"))) PPC_WEAK_FUNC(sub_83C9FB40);
PPC_FUNC_IMPL(__imp__sub_83C9FB40) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-5359
	ctx.r3.s64 = ctx.r11.s64 + -5359;
	// bl 0x83523120
	ctx.lr = 0x83C9FB58;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-27552
	ctx.r3.s64 = ctx.r10.s64 + -27552;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9FB64;
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

__attribute__((alias("__imp__sub_83C9FB74"))) PPC_WEAK_FUNC(sub_83C9FB74);
PPC_FUNC_IMPL(__imp__sub_83C9FB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9FB78"))) PPC_WEAK_FUNC(sub_83C9FB78);
PPC_FUNC_IMPL(__imp__sub_83C9FB78) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-5356
	ctx.r3.s64 = ctx.r11.s64 + -5356;
	// bl 0x83523120
	ctx.lr = 0x83C9FB90;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-27536
	ctx.r3.s64 = ctx.r10.s64 + -27536;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9FB9C;
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

__attribute__((alias("__imp__sub_83C9FBAC"))) PPC_WEAK_FUNC(sub_83C9FBAC);
PPC_FUNC_IMPL(__imp__sub_83C9FBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9FBB0"))) PPC_WEAK_FUNC(sub_83C9FBB0);
PPC_FUNC_IMPL(__imp__sub_83C9FBB0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-5352
	ctx.r3.s64 = ctx.r11.s64 + -5352;
	// addi r4,r10,17872
	ctx.r4.s64 = ctx.r10.s64 + 17872;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x83523160
	ctx.lr = 0x83C9FBDC;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-27520
	ctx.r3.s64 = ctx.r9.s64 + -27520;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9FBE8;
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

__attribute__((alias("__imp__sub_83C9FBF8"))) PPC_WEAK_FUNC(sub_83C9FBF8);
PPC_FUNC_IMPL(__imp__sub_83C9FBF8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-5292
	ctx.r3.s64 = ctx.r11.s64 + -5292;
	// bl 0x83523120
	ctx.lr = 0x83C9FC10;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-27504
	ctx.r3.s64 = ctx.r10.s64 + -27504;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9FC1C;
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

__attribute__((alias("__imp__sub_83C9FC2C"))) PPC_WEAK_FUNC(sub_83C9FC2C);
PPC_FUNC_IMPL(__imp__sub_83C9FC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9FC30"))) PPC_WEAK_FUNC(sub_83C9FC30);
PPC_FUNC_IMPL(__imp__sub_83C9FC30) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-5288
	ctx.r3.s64 = ctx.r11.s64 + -5288;
	// addi r4,r10,17996
	ctx.r4.s64 = ctx.r10.s64 + 17996;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x83523160
	ctx.lr = 0x83C9FC5C;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-27488
	ctx.r3.s64 = ctx.r9.s64 + -27488;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9FC68;
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

__attribute__((alias("__imp__sub_83C9FC78"))) PPC_WEAK_FUNC(sub_83C9FC78);
PPC_FUNC_IMPL(__imp__sub_83C9FC78) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-5228
	ctx.r3.s64 = ctx.r11.s64 + -5228;
	// bl 0x83523120
	ctx.lr = 0x83C9FC90;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-27472
	ctx.r3.s64 = ctx.r10.s64 + -27472;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9FC9C;
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

__attribute__((alias("__imp__sub_83C9FCAC"))) PPC_WEAK_FUNC(sub_83C9FCAC);
PPC_FUNC_IMPL(__imp__sub_83C9FCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9FCB0"))) PPC_WEAK_FUNC(sub_83C9FCB0);
PPC_FUNC_IMPL(__imp__sub_83C9FCB0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-5164
	ctx.r3.s64 = ctx.r11.s64 + -5164;
	// addi r4,r10,18120
	ctx.r4.s64 = ctx.r10.s64 + 18120;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x83523160
	ctx.lr = 0x83C9FCDC;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-27456
	ctx.r3.s64 = ctx.r9.s64 + -27456;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9FCE8;
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

__attribute__((alias("__imp__sub_83C9FCF8"))) PPC_WEAK_FUNC(sub_83C9FCF8);
PPC_FUNC_IMPL(__imp__sub_83C9FCF8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-5224
	ctx.r3.s64 = ctx.r11.s64 + -5224;
	// addi r4,r10,18128
	ctx.r4.s64 = ctx.r10.s64 + 18128;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x83523160
	ctx.lr = 0x83C9FD24;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-27440
	ctx.r3.s64 = ctx.r9.s64 + -27440;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9FD30;
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

__attribute__((alias("__imp__sub_83C9FD40"))) PPC_WEAK_FUNC(sub_83C9FD40);
PPC_FUNC_IMPL(__imp__sub_83C9FD40) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-5104
	ctx.r3.s64 = ctx.r11.s64 + -5104;
	// bl 0x83523120
	ctx.lr = 0x83C9FD58;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-27424
	ctx.r3.s64 = ctx.r10.s64 + -27424;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9FD64;
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

__attribute__((alias("__imp__sub_83C9FD74"))) PPC_WEAK_FUNC(sub_83C9FD74);
PPC_FUNC_IMPL(__imp__sub_83C9FD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9FD78"))) PPC_WEAK_FUNC(sub_83C9FD78);
PPC_FUNC_IMPL(__imp__sub_83C9FD78) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-5100
	ctx.r3.s64 = ctx.r11.s64 + -5100;
	// bl 0x83523120
	ctx.lr = 0x83C9FD90;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-27408
	ctx.r3.s64 = ctx.r10.s64 + -27408;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9FD9C;
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

__attribute__((alias("__imp__sub_83C9FDAC"))) PPC_WEAK_FUNC(sub_83C9FDAC);
PPC_FUNC_IMPL(__imp__sub_83C9FDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9FDB0"))) PPC_WEAK_FUNC(sub_83C9FDB0);
PPC_FUNC_IMPL(__imp__sub_83C9FDB0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r11,-5096
	ctx.r3.s64 = ctx.r11.s64 + -5096;
	// addi r4,r10,18424
	ctx.r4.s64 = ctx.r10.s64 + 18424;
	// li r7,56
	ctx.r7.s64 = 56;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// li r5,11
	ctx.r5.s64 = 11;
	// bl 0x83523160
	ctx.lr = 0x83C9FDDC;
	sub_83523160(ctx, base);
	// lis r9,-31786
	ctx.r9.s64 = -2083127296;
	// addi r3,r9,-27392
	ctx.r3.s64 = ctx.r9.s64 + -27392;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9FDE8;
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

__attribute__((alias("__imp__sub_83C9FDF8"))) PPC_WEAK_FUNC(sub_83C9FDF8);
PPC_FUNC_IMPL(__imp__sub_83C9FDF8) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-5036
	ctx.r3.s64 = ctx.r11.s64 + -5036;
	// bl 0x83523120
	ctx.lr = 0x83C9FE10;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-27376
	ctx.r3.s64 = ctx.r10.s64 + -27376;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9FE1C;
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

__attribute__((alias("__imp__sub_83C9FE2C"))) PPC_WEAK_FUNC(sub_83C9FE2C);
PPC_FUNC_IMPL(__imp__sub_83C9FE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9FE30"))) PPC_WEAK_FUNC(sub_83C9FE30);
PPC_FUNC_IMPL(__imp__sub_83C9FE30) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-5035
	ctx.r3.s64 = ctx.r11.s64 + -5035;
	// bl 0x83523120
	ctx.lr = 0x83C9FE48;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-27360
	ctx.r3.s64 = ctx.r10.s64 + -27360;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9FE54;
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

__attribute__((alias("__imp__sub_83C9FE64"))) PPC_WEAK_FUNC(sub_83C9FE64);
PPC_FUNC_IMPL(__imp__sub_83C9FE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9FE68"))) PPC_WEAK_FUNC(sub_83C9FE68);
PPC_FUNC_IMPL(__imp__sub_83C9FE68) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-5034
	ctx.r3.s64 = ctx.r11.s64 + -5034;
	// bl 0x83523120
	ctx.lr = 0x83C9FE80;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-27344
	ctx.r3.s64 = ctx.r10.s64 + -27344;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9FE8C;
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

__attribute__((alias("__imp__sub_83C9FE9C"))) PPC_WEAK_FUNC(sub_83C9FE9C);
PPC_FUNC_IMPL(__imp__sub_83C9FE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C9FEA0"))) PPC_WEAK_FUNC(sub_83C9FEA0);
PPC_FUNC_IMPL(__imp__sub_83C9FEA0) {
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
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r3,r11,-5033
	ctx.r3.s64 = ctx.r11.s64 + -5033;
	// bl 0x83523120
	ctx.lr = 0x83C9FEB8;
	sub_83523120(ctx, base);
	// lis r10,-31786
	ctx.r10.s64 = -2083127296;
	// addi r3,r10,-27328
	ctx.r3.s64 = ctx.r10.s64 + -27328;
	// bl 0x831cdcc8
	ctx.lr = 0x83C9FEC4;
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

__attribute__((alias("__imp__sub_83C9FED4"))) PPC_WEAK_FUNC(sub_83C9FED4);
PPC_FUNC_IMPL(__imp__sub_83C9FED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

