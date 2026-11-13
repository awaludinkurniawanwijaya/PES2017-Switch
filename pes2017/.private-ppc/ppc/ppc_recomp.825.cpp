#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C6DBAC"))) PPC_WEAK_FUNC(sub_83C6DBAC);
PPC_FUNC_IMPL(__imp__sub_83C6DBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6DBB0"))) PPC_WEAK_FUNC(sub_83C6DBB0);
PPC_FUNC_IMPL(__imp__sub_83C6DBB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27512
	ctx.r3.s64 = ctx.r11.s64 + 27512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6DBBC"))) PPC_WEAK_FUNC(sub_83C6DBBC);
PPC_FUNC_IMPL(__imp__sub_83C6DBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6DBC0"))) PPC_WEAK_FUNC(sub_83C6DBC0);
PPC_FUNC_IMPL(__imp__sub_83C6DBC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27520
	ctx.r3.s64 = ctx.r11.s64 + 27520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6DBCC"))) PPC_WEAK_FUNC(sub_83C6DBCC);
PPC_FUNC_IMPL(__imp__sub_83C6DBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6DBD0"))) PPC_WEAK_FUNC(sub_83C6DBD0);
PPC_FUNC_IMPL(__imp__sub_83C6DBD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,-21744
	ctx.r3.s64 = ctx.r11.s64 + -21744;
	// bl 0x83523120
	ctx.lr = 0x83C6DBE8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,27528
	ctx.r3.s64 = ctx.r10.s64 + 27528;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6DBF4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6DC04"))) PPC_WEAK_FUNC(sub_83C6DC04);
PPC_FUNC_IMPL(__imp__sub_83C6DC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6DC08"))) PPC_WEAK_FUNC(sub_83C6DC08);
PPC_FUNC_IMPL(__imp__sub_83C6DC08) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-21728
	ctx.r7.s64 = ctx.r8.s64 + -21728;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-21728(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21728);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-21728(r8)
	PPC_STORE_U32(ctx.r8.u32 + -21728, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6DC30"))) PPC_WEAK_FUNC(sub_83C6DC30);
PPC_FUNC_IMPL(__imp__sub_83C6DC30) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-22124
	ctx.r6.s64 = ctx.r7.s64 + -22124;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-22196(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -22196);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-21728(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -21728);
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
	// std r9,-22124(r7)
	PPC_STORE_U64(ctx.r7.u32 + -22124, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6DC78"))) PPC_WEAK_FUNC(sub_83C6DC78);
PPC_FUNC_IMPL(__imp__sub_83C6DC78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27544
	ctx.r3.s64 = ctx.r11.s64 + 27544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6DC84"))) PPC_WEAK_FUNC(sub_83C6DC84);
PPC_FUNC_IMPL(__imp__sub_83C6DC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6DC88"))) PPC_WEAK_FUNC(sub_83C6DC88);
PPC_FUNC_IMPL(__imp__sub_83C6DC88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,-21720
	ctx.r3.s64 = ctx.r11.s64 + -21720;
	// bl 0x8259af80
	ctx.lr = 0x83C6DCA0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,27560
	ctx.r3.s64 = ctx.r10.s64 + 27560;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6DCAC;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6DCBC"))) PPC_WEAK_FUNC(sub_83C6DCBC);
PPC_FUNC_IMPL(__imp__sub_83C6DCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6DCC0"))) PPC_WEAK_FUNC(sub_83C6DCC0);
PPC_FUNC_IMPL(__imp__sub_83C6DCC0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-21740
	ctx.r11.s64 = ctx.r8.s64 + -21740;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-22148(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -22148);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,27552
	ctx.r3.s64 = ctx.r6.s64 + 27552;
	// stw r10,-21740(r8)
	PPC_STORE_U32(ctx.r8.u32 + -21740, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6DCF0"))) PPC_WEAK_FUNC(sub_83C6DCF0);
PPC_FUNC_IMPL(__imp__sub_83C6DCF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27568
	ctx.r3.s64 = ctx.r11.s64 + 27568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6DCFC"))) PPC_WEAK_FUNC(sub_83C6DCFC);
PPC_FUNC_IMPL(__imp__sub_83C6DCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6DD00"))) PPC_WEAK_FUNC(sub_83C6DD00);
PPC_FUNC_IMPL(__imp__sub_83C6DD00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27576
	ctx.r3.s64 = ctx.r11.s64 + 27576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6DD0C"))) PPC_WEAK_FUNC(sub_83C6DD0C);
PPC_FUNC_IMPL(__imp__sub_83C6DD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6DD10"))) PPC_WEAK_FUNC(sub_83C6DD10);
PPC_FUNC_IMPL(__imp__sub_83C6DD10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27584
	ctx.r3.s64 = ctx.r11.s64 + 27584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6DD1C"))) PPC_WEAK_FUNC(sub_83C6DD1C);
PPC_FUNC_IMPL(__imp__sub_83C6DD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6DD20"))) PPC_WEAK_FUNC(sub_83C6DD20);
PPC_FUNC_IMPL(__imp__sub_83C6DD20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27592
	ctx.r3.s64 = ctx.r11.s64 + 27592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6DD2C"))) PPC_WEAK_FUNC(sub_83C6DD2C);
PPC_FUNC_IMPL(__imp__sub_83C6DD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6DD30"))) PPC_WEAK_FUNC(sub_83C6DD30);
PPC_FUNC_IMPL(__imp__sub_83C6DD30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27600
	ctx.r3.s64 = ctx.r11.s64 + 27600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6DD3C"))) PPC_WEAK_FUNC(sub_83C6DD3C);
PPC_FUNC_IMPL(__imp__sub_83C6DD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6DD40"))) PPC_WEAK_FUNC(sub_83C6DD40);
PPC_FUNC_IMPL(__imp__sub_83C6DD40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27608
	ctx.r3.s64 = ctx.r11.s64 + 27608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6DD4C"))) PPC_WEAK_FUNC(sub_83C6DD4C);
PPC_FUNC_IMPL(__imp__sub_83C6DD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6DD50"))) PPC_WEAK_FUNC(sub_83C6DD50);
PPC_FUNC_IMPL(__imp__sub_83C6DD50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27616
	ctx.r3.s64 = ctx.r11.s64 + 27616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6DD5C"))) PPC_WEAK_FUNC(sub_83C6DD5C);
PPC_FUNC_IMPL(__imp__sub_83C6DD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6DD60"))) PPC_WEAK_FUNC(sub_83C6DD60);
PPC_FUNC_IMPL(__imp__sub_83C6DD60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27624
	ctx.r3.s64 = ctx.r11.s64 + 27624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6DD6C"))) PPC_WEAK_FUNC(sub_83C6DD6C);
PPC_FUNC_IMPL(__imp__sub_83C6DD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6DD70"))) PPC_WEAK_FUNC(sub_83C6DD70);
PPC_FUNC_IMPL(__imp__sub_83C6DD70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27632
	ctx.r3.s64 = ctx.r11.s64 + 27632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6DD7C"))) PPC_WEAK_FUNC(sub_83C6DD7C);
PPC_FUNC_IMPL(__imp__sub_83C6DD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6DD80"))) PPC_WEAK_FUNC(sub_83C6DD80);
PPC_FUNC_IMPL(__imp__sub_83C6DD80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27640
	ctx.r3.s64 = ctx.r11.s64 + 27640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6DD8C"))) PPC_WEAK_FUNC(sub_83C6DD8C);
PPC_FUNC_IMPL(__imp__sub_83C6DD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6DD90"))) PPC_WEAK_FUNC(sub_83C6DD90);
PPC_FUNC_IMPL(__imp__sub_83C6DD90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27648
	ctx.r3.s64 = ctx.r11.s64 + 27648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6DD9C"))) PPC_WEAK_FUNC(sub_83C6DD9C);
PPC_FUNC_IMPL(__imp__sub_83C6DD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6DDA0"))) PPC_WEAK_FUNC(sub_83C6DDA0);
PPC_FUNC_IMPL(__imp__sub_83C6DDA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27656
	ctx.r3.s64 = ctx.r11.s64 + 27656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6DDAC"))) PPC_WEAK_FUNC(sub_83C6DDAC);
PPC_FUNC_IMPL(__imp__sub_83C6DDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6DDB0"))) PPC_WEAK_FUNC(sub_83C6DDB0);
PPC_FUNC_IMPL(__imp__sub_83C6DDB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,-21376
	ctx.r3.s64 = ctx.r11.s64 + -21376;
	// bl 0x83523120
	ctx.lr = 0x83C6DDC8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,27664
	ctx.r3.s64 = ctx.r10.s64 + 27664;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6DDD4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6DDE4"))) PPC_WEAK_FUNC(sub_83C6DDE4);
PPC_FUNC_IMPL(__imp__sub_83C6DDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6DDE8"))) PPC_WEAK_FUNC(sub_83C6DDE8);
PPC_FUNC_IMPL(__imp__sub_83C6DDE8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-21360
	ctx.r7.s64 = ctx.r8.s64 + -21360;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-21360(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21360);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-21360(r8)
	PPC_STORE_U32(ctx.r8.u32 + -21360, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6DE10"))) PPC_WEAK_FUNC(sub_83C6DE10);
PPC_FUNC_IMPL(__imp__sub_83C6DE10) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-21996
	ctx.r6.s64 = ctx.r7.s64 + -21996;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-22068(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -22068);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-21360(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -21360);
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
	// std r9,-21996(r7)
	PPC_STORE_U64(ctx.r7.u32 + -21996, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6DE58"))) PPC_WEAK_FUNC(sub_83C6DE58);
PPC_FUNC_IMPL(__imp__sub_83C6DE58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27680
	ctx.r3.s64 = ctx.r11.s64 + 27680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6DE64"))) PPC_WEAK_FUNC(sub_83C6DE64);
PPC_FUNC_IMPL(__imp__sub_83C6DE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6DE68"))) PPC_WEAK_FUNC(sub_83C6DE68);
PPC_FUNC_IMPL(__imp__sub_83C6DE68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,-21352
	ctx.r3.s64 = ctx.r11.s64 + -21352;
	// bl 0x8259af80
	ctx.lr = 0x83C6DE80;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,27696
	ctx.r3.s64 = ctx.r10.s64 + 27696;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6DE8C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6DE9C"))) PPC_WEAK_FUNC(sub_83C6DE9C);
PPC_FUNC_IMPL(__imp__sub_83C6DE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6DEA0"))) PPC_WEAK_FUNC(sub_83C6DEA0);
PPC_FUNC_IMPL(__imp__sub_83C6DEA0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-21372
	ctx.r11.s64 = ctx.r8.s64 + -21372;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-22020(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -22020);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,27688
	ctx.r3.s64 = ctx.r6.s64 + 27688;
	// stw r10,-21372(r8)
	PPC_STORE_U32(ctx.r8.u32 + -21372, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6DED0"))) PPC_WEAK_FUNC(sub_83C6DED0);
PPC_FUNC_IMPL(__imp__sub_83C6DED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27704
	ctx.r3.s64 = ctx.r11.s64 + 27704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6DEDC"))) PPC_WEAK_FUNC(sub_83C6DEDC);
PPC_FUNC_IMPL(__imp__sub_83C6DEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6DEE0"))) PPC_WEAK_FUNC(sub_83C6DEE0);
PPC_FUNC_IMPL(__imp__sub_83C6DEE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27712
	ctx.r3.s64 = ctx.r11.s64 + 27712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6DEEC"))) PPC_WEAK_FUNC(sub_83C6DEEC);
PPC_FUNC_IMPL(__imp__sub_83C6DEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6DEF0"))) PPC_WEAK_FUNC(sub_83C6DEF0);
PPC_FUNC_IMPL(__imp__sub_83C6DEF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27720
	ctx.r3.s64 = ctx.r11.s64 + 27720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6DEFC"))) PPC_WEAK_FUNC(sub_83C6DEFC);
PPC_FUNC_IMPL(__imp__sub_83C6DEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6DF00"))) PPC_WEAK_FUNC(sub_83C6DF00);
PPC_FUNC_IMPL(__imp__sub_83C6DF00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27728
	ctx.r3.s64 = ctx.r11.s64 + 27728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6DF0C"))) PPC_WEAK_FUNC(sub_83C6DF0C);
PPC_FUNC_IMPL(__imp__sub_83C6DF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6DF10"))) PPC_WEAK_FUNC(sub_83C6DF10);
PPC_FUNC_IMPL(__imp__sub_83C6DF10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27736
	ctx.r3.s64 = ctx.r11.s64 + 27736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6DF1C"))) PPC_WEAK_FUNC(sub_83C6DF1C);
PPC_FUNC_IMPL(__imp__sub_83C6DF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6DF20"))) PPC_WEAK_FUNC(sub_83C6DF20);
PPC_FUNC_IMPL(__imp__sub_83C6DF20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27744
	ctx.r3.s64 = ctx.r11.s64 + 27744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6DF2C"))) PPC_WEAK_FUNC(sub_83C6DF2C);
PPC_FUNC_IMPL(__imp__sub_83C6DF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6DF30"))) PPC_WEAK_FUNC(sub_83C6DF30);
PPC_FUNC_IMPL(__imp__sub_83C6DF30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27752
	ctx.r3.s64 = ctx.r11.s64 + 27752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6DF3C"))) PPC_WEAK_FUNC(sub_83C6DF3C);
PPC_FUNC_IMPL(__imp__sub_83C6DF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6DF40"))) PPC_WEAK_FUNC(sub_83C6DF40);
PPC_FUNC_IMPL(__imp__sub_83C6DF40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27760
	ctx.r3.s64 = ctx.r11.s64 + 27760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6DF4C"))) PPC_WEAK_FUNC(sub_83C6DF4C);
PPC_FUNC_IMPL(__imp__sub_83C6DF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6DF50"))) PPC_WEAK_FUNC(sub_83C6DF50);
PPC_FUNC_IMPL(__imp__sub_83C6DF50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27768
	ctx.r3.s64 = ctx.r11.s64 + 27768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6DF5C"))) PPC_WEAK_FUNC(sub_83C6DF5C);
PPC_FUNC_IMPL(__imp__sub_83C6DF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6DF60"))) PPC_WEAK_FUNC(sub_83C6DF60);
PPC_FUNC_IMPL(__imp__sub_83C6DF60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27776
	ctx.r3.s64 = ctx.r11.s64 + 27776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6DF6C"))) PPC_WEAK_FUNC(sub_83C6DF6C);
PPC_FUNC_IMPL(__imp__sub_83C6DF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6DF70"))) PPC_WEAK_FUNC(sub_83C6DF70);
PPC_FUNC_IMPL(__imp__sub_83C6DF70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27784
	ctx.r3.s64 = ctx.r11.s64 + 27784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6DF7C"))) PPC_WEAK_FUNC(sub_83C6DF7C);
PPC_FUNC_IMPL(__imp__sub_83C6DF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6DF80"))) PPC_WEAK_FUNC(sub_83C6DF80);
PPC_FUNC_IMPL(__imp__sub_83C6DF80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27792
	ctx.r3.s64 = ctx.r11.s64 + 27792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6DF8C"))) PPC_WEAK_FUNC(sub_83C6DF8C);
PPC_FUNC_IMPL(__imp__sub_83C6DF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6DF90"))) PPC_WEAK_FUNC(sub_83C6DF90);
PPC_FUNC_IMPL(__imp__sub_83C6DF90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,-21008
	ctx.r3.s64 = ctx.r11.s64 + -21008;
	// bl 0x83523120
	ctx.lr = 0x83C6DFA8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,27800
	ctx.r3.s64 = ctx.r10.s64 + 27800;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6DFB4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6DFC4"))) PPC_WEAK_FUNC(sub_83C6DFC4);
PPC_FUNC_IMPL(__imp__sub_83C6DFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6DFC8"))) PPC_WEAK_FUNC(sub_83C6DFC8);
PPC_FUNC_IMPL(__imp__sub_83C6DFC8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-20992
	ctx.r7.s64 = ctx.r8.s64 + -20992;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-20992(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20992);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-20992(r8)
	PPC_STORE_U32(ctx.r8.u32 + -20992, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6DFF0"))) PPC_WEAK_FUNC(sub_83C6DFF0);
PPC_FUNC_IMPL(__imp__sub_83C6DFF0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-21868
	ctx.r6.s64 = ctx.r7.s64 + -21868;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-21940(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -21940);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-20992(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -20992);
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
	// std r9,-21868(r7)
	PPC_STORE_U64(ctx.r7.u32 + -21868, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6E038"))) PPC_WEAK_FUNC(sub_83C6E038);
PPC_FUNC_IMPL(__imp__sub_83C6E038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27816
	ctx.r3.s64 = ctx.r11.s64 + 27816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E044"))) PPC_WEAK_FUNC(sub_83C6E044);
PPC_FUNC_IMPL(__imp__sub_83C6E044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E048"))) PPC_WEAK_FUNC(sub_83C6E048);
PPC_FUNC_IMPL(__imp__sub_83C6E048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,-20984
	ctx.r3.s64 = ctx.r11.s64 + -20984;
	// bl 0x8259af80
	ctx.lr = 0x83C6E060;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,27832
	ctx.r3.s64 = ctx.r10.s64 + 27832;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6E06C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6E07C"))) PPC_WEAK_FUNC(sub_83C6E07C);
PPC_FUNC_IMPL(__imp__sub_83C6E07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E080"))) PPC_WEAK_FUNC(sub_83C6E080);
PPC_FUNC_IMPL(__imp__sub_83C6E080) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-21004
	ctx.r11.s64 = ctx.r8.s64 + -21004;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-21892(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21892);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,27824
	ctx.r3.s64 = ctx.r6.s64 + 27824;
	// stw r10,-21004(r8)
	PPC_STORE_U32(ctx.r8.u32 + -21004, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E0B0"))) PPC_WEAK_FUNC(sub_83C6E0B0);
PPC_FUNC_IMPL(__imp__sub_83C6E0B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27840
	ctx.r3.s64 = ctx.r11.s64 + 27840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E0BC"))) PPC_WEAK_FUNC(sub_83C6E0BC);
PPC_FUNC_IMPL(__imp__sub_83C6E0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E0C0"))) PPC_WEAK_FUNC(sub_83C6E0C0);
PPC_FUNC_IMPL(__imp__sub_83C6E0C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27848
	ctx.r3.s64 = ctx.r11.s64 + 27848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E0CC"))) PPC_WEAK_FUNC(sub_83C6E0CC);
PPC_FUNC_IMPL(__imp__sub_83C6E0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E0D0"))) PPC_WEAK_FUNC(sub_83C6E0D0);
PPC_FUNC_IMPL(__imp__sub_83C6E0D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27856
	ctx.r3.s64 = ctx.r11.s64 + 27856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E0DC"))) PPC_WEAK_FUNC(sub_83C6E0DC);
PPC_FUNC_IMPL(__imp__sub_83C6E0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E0E0"))) PPC_WEAK_FUNC(sub_83C6E0E0);
PPC_FUNC_IMPL(__imp__sub_83C6E0E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27864
	ctx.r3.s64 = ctx.r11.s64 + 27864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E0EC"))) PPC_WEAK_FUNC(sub_83C6E0EC);
PPC_FUNC_IMPL(__imp__sub_83C6E0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E0F0"))) PPC_WEAK_FUNC(sub_83C6E0F0);
PPC_FUNC_IMPL(__imp__sub_83C6E0F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27872
	ctx.r3.s64 = ctx.r11.s64 + 27872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E0FC"))) PPC_WEAK_FUNC(sub_83C6E0FC);
PPC_FUNC_IMPL(__imp__sub_83C6E0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E100"))) PPC_WEAK_FUNC(sub_83C6E100);
PPC_FUNC_IMPL(__imp__sub_83C6E100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27880
	ctx.r3.s64 = ctx.r11.s64 + 27880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E10C"))) PPC_WEAK_FUNC(sub_83C6E10C);
PPC_FUNC_IMPL(__imp__sub_83C6E10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E110"))) PPC_WEAK_FUNC(sub_83C6E110);
PPC_FUNC_IMPL(__imp__sub_83C6E110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27888
	ctx.r3.s64 = ctx.r11.s64 + 27888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E11C"))) PPC_WEAK_FUNC(sub_83C6E11C);
PPC_FUNC_IMPL(__imp__sub_83C6E11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E120"))) PPC_WEAK_FUNC(sub_83C6E120);
PPC_FUNC_IMPL(__imp__sub_83C6E120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27896
	ctx.r3.s64 = ctx.r11.s64 + 27896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E12C"))) PPC_WEAK_FUNC(sub_83C6E12C);
PPC_FUNC_IMPL(__imp__sub_83C6E12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E130"))) PPC_WEAK_FUNC(sub_83C6E130);
PPC_FUNC_IMPL(__imp__sub_83C6E130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27904
	ctx.r3.s64 = ctx.r11.s64 + 27904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E13C"))) PPC_WEAK_FUNC(sub_83C6E13C);
PPC_FUNC_IMPL(__imp__sub_83C6E13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E140"))) PPC_WEAK_FUNC(sub_83C6E140);
PPC_FUNC_IMPL(__imp__sub_83C6E140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27912
	ctx.r3.s64 = ctx.r11.s64 + 27912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E14C"))) PPC_WEAK_FUNC(sub_83C6E14C);
PPC_FUNC_IMPL(__imp__sub_83C6E14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E150"))) PPC_WEAK_FUNC(sub_83C6E150);
PPC_FUNC_IMPL(__imp__sub_83C6E150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27920
	ctx.r3.s64 = ctx.r11.s64 + 27920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E15C"))) PPC_WEAK_FUNC(sub_83C6E15C);
PPC_FUNC_IMPL(__imp__sub_83C6E15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E160"))) PPC_WEAK_FUNC(sub_83C6E160);
PPC_FUNC_IMPL(__imp__sub_83C6E160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27928
	ctx.r3.s64 = ctx.r11.s64 + 27928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E16C"))) PPC_WEAK_FUNC(sub_83C6E16C);
PPC_FUNC_IMPL(__imp__sub_83C6E16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E170"))) PPC_WEAK_FUNC(sub_83C6E170);
PPC_FUNC_IMPL(__imp__sub_83C6E170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,-20640
	ctx.r3.s64 = ctx.r11.s64 + -20640;
	// bl 0x83523120
	ctx.lr = 0x83C6E188;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,27936
	ctx.r3.s64 = ctx.r10.s64 + 27936;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6E194;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6E1A4"))) PPC_WEAK_FUNC(sub_83C6E1A4);
PPC_FUNC_IMPL(__imp__sub_83C6E1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E1A8"))) PPC_WEAK_FUNC(sub_83C6E1A8);
PPC_FUNC_IMPL(__imp__sub_83C6E1A8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-20624
	ctx.r7.s64 = ctx.r8.s64 + -20624;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-20624(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20624);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-20624(r8)
	PPC_STORE_U32(ctx.r8.u32 + -20624, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6E1D0"))) PPC_WEAK_FUNC(sub_83C6E1D0);
PPC_FUNC_IMPL(__imp__sub_83C6E1D0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-21740
	ctx.r6.s64 = ctx.r7.s64 + -21740;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-21812(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -21812);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-20624(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -20624);
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
	// std r9,-21740(r7)
	PPC_STORE_U64(ctx.r7.u32 + -21740, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6E218"))) PPC_WEAK_FUNC(sub_83C6E218);
PPC_FUNC_IMPL(__imp__sub_83C6E218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27952
	ctx.r3.s64 = ctx.r11.s64 + 27952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E224"))) PPC_WEAK_FUNC(sub_83C6E224);
PPC_FUNC_IMPL(__imp__sub_83C6E224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E228"))) PPC_WEAK_FUNC(sub_83C6E228);
PPC_FUNC_IMPL(__imp__sub_83C6E228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,-20616
	ctx.r3.s64 = ctx.r11.s64 + -20616;
	// bl 0x8259af80
	ctx.lr = 0x83C6E240;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,27968
	ctx.r3.s64 = ctx.r10.s64 + 27968;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6E24C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6E25C"))) PPC_WEAK_FUNC(sub_83C6E25C);
PPC_FUNC_IMPL(__imp__sub_83C6E25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E260"))) PPC_WEAK_FUNC(sub_83C6E260);
PPC_FUNC_IMPL(__imp__sub_83C6E260) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-20636
	ctx.r11.s64 = ctx.r8.s64 + -20636;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-21764(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21764);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,27960
	ctx.r3.s64 = ctx.r6.s64 + 27960;
	// stw r10,-20636(r8)
	PPC_STORE_U32(ctx.r8.u32 + -20636, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E290"))) PPC_WEAK_FUNC(sub_83C6E290);
PPC_FUNC_IMPL(__imp__sub_83C6E290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27976
	ctx.r3.s64 = ctx.r11.s64 + 27976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E29C"))) PPC_WEAK_FUNC(sub_83C6E29C);
PPC_FUNC_IMPL(__imp__sub_83C6E29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E2A0"))) PPC_WEAK_FUNC(sub_83C6E2A0);
PPC_FUNC_IMPL(__imp__sub_83C6E2A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27984
	ctx.r3.s64 = ctx.r11.s64 + 27984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E2AC"))) PPC_WEAK_FUNC(sub_83C6E2AC);
PPC_FUNC_IMPL(__imp__sub_83C6E2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E2B0"))) PPC_WEAK_FUNC(sub_83C6E2B0);
PPC_FUNC_IMPL(__imp__sub_83C6E2B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,27992
	ctx.r3.s64 = ctx.r11.s64 + 27992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E2BC"))) PPC_WEAK_FUNC(sub_83C6E2BC);
PPC_FUNC_IMPL(__imp__sub_83C6E2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E2C0"))) PPC_WEAK_FUNC(sub_83C6E2C0);
PPC_FUNC_IMPL(__imp__sub_83C6E2C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28000
	ctx.r3.s64 = ctx.r11.s64 + 28000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E2CC"))) PPC_WEAK_FUNC(sub_83C6E2CC);
PPC_FUNC_IMPL(__imp__sub_83C6E2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E2D0"))) PPC_WEAK_FUNC(sub_83C6E2D0);
PPC_FUNC_IMPL(__imp__sub_83C6E2D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28008
	ctx.r3.s64 = ctx.r11.s64 + 28008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E2DC"))) PPC_WEAK_FUNC(sub_83C6E2DC);
PPC_FUNC_IMPL(__imp__sub_83C6E2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E2E0"))) PPC_WEAK_FUNC(sub_83C6E2E0);
PPC_FUNC_IMPL(__imp__sub_83C6E2E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28016
	ctx.r3.s64 = ctx.r11.s64 + 28016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E2EC"))) PPC_WEAK_FUNC(sub_83C6E2EC);
PPC_FUNC_IMPL(__imp__sub_83C6E2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E2F0"))) PPC_WEAK_FUNC(sub_83C6E2F0);
PPC_FUNC_IMPL(__imp__sub_83C6E2F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28024
	ctx.r3.s64 = ctx.r11.s64 + 28024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E2FC"))) PPC_WEAK_FUNC(sub_83C6E2FC);
PPC_FUNC_IMPL(__imp__sub_83C6E2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E300"))) PPC_WEAK_FUNC(sub_83C6E300);
PPC_FUNC_IMPL(__imp__sub_83C6E300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28032
	ctx.r3.s64 = ctx.r11.s64 + 28032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E30C"))) PPC_WEAK_FUNC(sub_83C6E30C);
PPC_FUNC_IMPL(__imp__sub_83C6E30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E310"))) PPC_WEAK_FUNC(sub_83C6E310);
PPC_FUNC_IMPL(__imp__sub_83C6E310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28040
	ctx.r3.s64 = ctx.r11.s64 + 28040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E31C"))) PPC_WEAK_FUNC(sub_83C6E31C);
PPC_FUNC_IMPL(__imp__sub_83C6E31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E320"))) PPC_WEAK_FUNC(sub_83C6E320);
PPC_FUNC_IMPL(__imp__sub_83C6E320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28048
	ctx.r3.s64 = ctx.r11.s64 + 28048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E32C"))) PPC_WEAK_FUNC(sub_83C6E32C);
PPC_FUNC_IMPL(__imp__sub_83C6E32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E330"))) PPC_WEAK_FUNC(sub_83C6E330);
PPC_FUNC_IMPL(__imp__sub_83C6E330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28056
	ctx.r3.s64 = ctx.r11.s64 + 28056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E33C"))) PPC_WEAK_FUNC(sub_83C6E33C);
PPC_FUNC_IMPL(__imp__sub_83C6E33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E340"))) PPC_WEAK_FUNC(sub_83C6E340);
PPC_FUNC_IMPL(__imp__sub_83C6E340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28064
	ctx.r3.s64 = ctx.r11.s64 + 28064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E34C"))) PPC_WEAK_FUNC(sub_83C6E34C);
PPC_FUNC_IMPL(__imp__sub_83C6E34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E350"))) PPC_WEAK_FUNC(sub_83C6E350);
PPC_FUNC_IMPL(__imp__sub_83C6E350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,-20272
	ctx.r3.s64 = ctx.r11.s64 + -20272;
	// bl 0x83523120
	ctx.lr = 0x83C6E368;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,28072
	ctx.r3.s64 = ctx.r10.s64 + 28072;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6E374;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6E384"))) PPC_WEAK_FUNC(sub_83C6E384);
PPC_FUNC_IMPL(__imp__sub_83C6E384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E388"))) PPC_WEAK_FUNC(sub_83C6E388);
PPC_FUNC_IMPL(__imp__sub_83C6E388) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-20256
	ctx.r7.s64 = ctx.r8.s64 + -20256;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-20256(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20256);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-20256(r8)
	PPC_STORE_U32(ctx.r8.u32 + -20256, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6E3B0"))) PPC_WEAK_FUNC(sub_83C6E3B0);
PPC_FUNC_IMPL(__imp__sub_83C6E3B0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-21612
	ctx.r6.s64 = ctx.r7.s64 + -21612;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-21684(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -21684);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-20256(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -20256);
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
	// std r9,-21612(r7)
	PPC_STORE_U64(ctx.r7.u32 + -21612, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6E3F8"))) PPC_WEAK_FUNC(sub_83C6E3F8);
PPC_FUNC_IMPL(__imp__sub_83C6E3F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28088
	ctx.r3.s64 = ctx.r11.s64 + 28088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E404"))) PPC_WEAK_FUNC(sub_83C6E404);
PPC_FUNC_IMPL(__imp__sub_83C6E404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E408"))) PPC_WEAK_FUNC(sub_83C6E408);
PPC_FUNC_IMPL(__imp__sub_83C6E408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,-20248
	ctx.r3.s64 = ctx.r11.s64 + -20248;
	// bl 0x8259af80
	ctx.lr = 0x83C6E420;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,28104
	ctx.r3.s64 = ctx.r10.s64 + 28104;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6E42C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6E43C"))) PPC_WEAK_FUNC(sub_83C6E43C);
PPC_FUNC_IMPL(__imp__sub_83C6E43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E440"))) PPC_WEAK_FUNC(sub_83C6E440);
PPC_FUNC_IMPL(__imp__sub_83C6E440) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-20268
	ctx.r11.s64 = ctx.r8.s64 + -20268;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-21636(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21636);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,28096
	ctx.r3.s64 = ctx.r6.s64 + 28096;
	// stw r10,-20268(r8)
	PPC_STORE_U32(ctx.r8.u32 + -20268, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E470"))) PPC_WEAK_FUNC(sub_83C6E470);
PPC_FUNC_IMPL(__imp__sub_83C6E470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28112
	ctx.r3.s64 = ctx.r11.s64 + 28112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E47C"))) PPC_WEAK_FUNC(sub_83C6E47C);
PPC_FUNC_IMPL(__imp__sub_83C6E47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E480"))) PPC_WEAK_FUNC(sub_83C6E480);
PPC_FUNC_IMPL(__imp__sub_83C6E480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28120
	ctx.r3.s64 = ctx.r11.s64 + 28120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E48C"))) PPC_WEAK_FUNC(sub_83C6E48C);
PPC_FUNC_IMPL(__imp__sub_83C6E48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E490"))) PPC_WEAK_FUNC(sub_83C6E490);
PPC_FUNC_IMPL(__imp__sub_83C6E490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28128
	ctx.r3.s64 = ctx.r11.s64 + 28128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E49C"))) PPC_WEAK_FUNC(sub_83C6E49C);
PPC_FUNC_IMPL(__imp__sub_83C6E49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E4A0"))) PPC_WEAK_FUNC(sub_83C6E4A0);
PPC_FUNC_IMPL(__imp__sub_83C6E4A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28136
	ctx.r3.s64 = ctx.r11.s64 + 28136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E4AC"))) PPC_WEAK_FUNC(sub_83C6E4AC);
PPC_FUNC_IMPL(__imp__sub_83C6E4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E4B0"))) PPC_WEAK_FUNC(sub_83C6E4B0);
PPC_FUNC_IMPL(__imp__sub_83C6E4B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28144
	ctx.r3.s64 = ctx.r11.s64 + 28144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E4BC"))) PPC_WEAK_FUNC(sub_83C6E4BC);
PPC_FUNC_IMPL(__imp__sub_83C6E4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E4C0"))) PPC_WEAK_FUNC(sub_83C6E4C0);
PPC_FUNC_IMPL(__imp__sub_83C6E4C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28152
	ctx.r3.s64 = ctx.r11.s64 + 28152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E4CC"))) PPC_WEAK_FUNC(sub_83C6E4CC);
PPC_FUNC_IMPL(__imp__sub_83C6E4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E4D0"))) PPC_WEAK_FUNC(sub_83C6E4D0);
PPC_FUNC_IMPL(__imp__sub_83C6E4D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28160
	ctx.r3.s64 = ctx.r11.s64 + 28160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E4DC"))) PPC_WEAK_FUNC(sub_83C6E4DC);
PPC_FUNC_IMPL(__imp__sub_83C6E4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E4E0"))) PPC_WEAK_FUNC(sub_83C6E4E0);
PPC_FUNC_IMPL(__imp__sub_83C6E4E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28168
	ctx.r3.s64 = ctx.r11.s64 + 28168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E4EC"))) PPC_WEAK_FUNC(sub_83C6E4EC);
PPC_FUNC_IMPL(__imp__sub_83C6E4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E4F0"))) PPC_WEAK_FUNC(sub_83C6E4F0);
PPC_FUNC_IMPL(__imp__sub_83C6E4F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28176
	ctx.r3.s64 = ctx.r11.s64 + 28176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E4FC"))) PPC_WEAK_FUNC(sub_83C6E4FC);
PPC_FUNC_IMPL(__imp__sub_83C6E4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E500"))) PPC_WEAK_FUNC(sub_83C6E500);
PPC_FUNC_IMPL(__imp__sub_83C6E500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28184
	ctx.r3.s64 = ctx.r11.s64 + 28184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E50C"))) PPC_WEAK_FUNC(sub_83C6E50C);
PPC_FUNC_IMPL(__imp__sub_83C6E50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E510"))) PPC_WEAK_FUNC(sub_83C6E510);
PPC_FUNC_IMPL(__imp__sub_83C6E510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28192
	ctx.r3.s64 = ctx.r11.s64 + 28192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E51C"))) PPC_WEAK_FUNC(sub_83C6E51C);
PPC_FUNC_IMPL(__imp__sub_83C6E51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E520"))) PPC_WEAK_FUNC(sub_83C6E520);
PPC_FUNC_IMPL(__imp__sub_83C6E520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28200
	ctx.r3.s64 = ctx.r11.s64 + 28200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E52C"))) PPC_WEAK_FUNC(sub_83C6E52C);
PPC_FUNC_IMPL(__imp__sub_83C6E52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E530"))) PPC_WEAK_FUNC(sub_83C6E530);
PPC_FUNC_IMPL(__imp__sub_83C6E530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,-19904
	ctx.r3.s64 = ctx.r11.s64 + -19904;
	// bl 0x83523120
	ctx.lr = 0x83C6E548;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,28208
	ctx.r3.s64 = ctx.r10.s64 + 28208;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6E554;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6E564"))) PPC_WEAK_FUNC(sub_83C6E564);
PPC_FUNC_IMPL(__imp__sub_83C6E564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E568"))) PPC_WEAK_FUNC(sub_83C6E568);
PPC_FUNC_IMPL(__imp__sub_83C6E568) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-19888
	ctx.r7.s64 = ctx.r8.s64 + -19888;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-19888(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19888);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-19888(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19888, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6E590"))) PPC_WEAK_FUNC(sub_83C6E590);
PPC_FUNC_IMPL(__imp__sub_83C6E590) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-21484
	ctx.r6.s64 = ctx.r7.s64 + -21484;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-21556(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -21556);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-19888(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -19888);
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
	// std r9,-21484(r7)
	PPC_STORE_U64(ctx.r7.u32 + -21484, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6E5D8"))) PPC_WEAK_FUNC(sub_83C6E5D8);
PPC_FUNC_IMPL(__imp__sub_83C6E5D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28224
	ctx.r3.s64 = ctx.r11.s64 + 28224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E5E4"))) PPC_WEAK_FUNC(sub_83C6E5E4);
PPC_FUNC_IMPL(__imp__sub_83C6E5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E5E8"))) PPC_WEAK_FUNC(sub_83C6E5E8);
PPC_FUNC_IMPL(__imp__sub_83C6E5E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,-19880
	ctx.r3.s64 = ctx.r11.s64 + -19880;
	// bl 0x8259af80
	ctx.lr = 0x83C6E600;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,28240
	ctx.r3.s64 = ctx.r10.s64 + 28240;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6E60C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6E61C"))) PPC_WEAK_FUNC(sub_83C6E61C);
PPC_FUNC_IMPL(__imp__sub_83C6E61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E620"))) PPC_WEAK_FUNC(sub_83C6E620);
PPC_FUNC_IMPL(__imp__sub_83C6E620) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-19900
	ctx.r11.s64 = ctx.r8.s64 + -19900;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-21508(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21508);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,28232
	ctx.r3.s64 = ctx.r6.s64 + 28232;
	// stw r10,-19900(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19900, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E650"))) PPC_WEAK_FUNC(sub_83C6E650);
PPC_FUNC_IMPL(__imp__sub_83C6E650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28248
	ctx.r3.s64 = ctx.r11.s64 + 28248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E65C"))) PPC_WEAK_FUNC(sub_83C6E65C);
PPC_FUNC_IMPL(__imp__sub_83C6E65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E660"))) PPC_WEAK_FUNC(sub_83C6E660);
PPC_FUNC_IMPL(__imp__sub_83C6E660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28256
	ctx.r3.s64 = ctx.r11.s64 + 28256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E66C"))) PPC_WEAK_FUNC(sub_83C6E66C);
PPC_FUNC_IMPL(__imp__sub_83C6E66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E670"))) PPC_WEAK_FUNC(sub_83C6E670);
PPC_FUNC_IMPL(__imp__sub_83C6E670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28264
	ctx.r3.s64 = ctx.r11.s64 + 28264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E67C"))) PPC_WEAK_FUNC(sub_83C6E67C);
PPC_FUNC_IMPL(__imp__sub_83C6E67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E680"))) PPC_WEAK_FUNC(sub_83C6E680);
PPC_FUNC_IMPL(__imp__sub_83C6E680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28272
	ctx.r3.s64 = ctx.r11.s64 + 28272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E68C"))) PPC_WEAK_FUNC(sub_83C6E68C);
PPC_FUNC_IMPL(__imp__sub_83C6E68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E690"))) PPC_WEAK_FUNC(sub_83C6E690);
PPC_FUNC_IMPL(__imp__sub_83C6E690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28280
	ctx.r3.s64 = ctx.r11.s64 + 28280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E69C"))) PPC_WEAK_FUNC(sub_83C6E69C);
PPC_FUNC_IMPL(__imp__sub_83C6E69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E6A0"))) PPC_WEAK_FUNC(sub_83C6E6A0);
PPC_FUNC_IMPL(__imp__sub_83C6E6A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28288
	ctx.r3.s64 = ctx.r11.s64 + 28288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E6AC"))) PPC_WEAK_FUNC(sub_83C6E6AC);
PPC_FUNC_IMPL(__imp__sub_83C6E6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E6B0"))) PPC_WEAK_FUNC(sub_83C6E6B0);
PPC_FUNC_IMPL(__imp__sub_83C6E6B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28296
	ctx.r3.s64 = ctx.r11.s64 + 28296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E6BC"))) PPC_WEAK_FUNC(sub_83C6E6BC);
PPC_FUNC_IMPL(__imp__sub_83C6E6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E6C0"))) PPC_WEAK_FUNC(sub_83C6E6C0);
PPC_FUNC_IMPL(__imp__sub_83C6E6C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28304
	ctx.r3.s64 = ctx.r11.s64 + 28304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E6CC"))) PPC_WEAK_FUNC(sub_83C6E6CC);
PPC_FUNC_IMPL(__imp__sub_83C6E6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E6D0"))) PPC_WEAK_FUNC(sub_83C6E6D0);
PPC_FUNC_IMPL(__imp__sub_83C6E6D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28312
	ctx.r3.s64 = ctx.r11.s64 + 28312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E6DC"))) PPC_WEAK_FUNC(sub_83C6E6DC);
PPC_FUNC_IMPL(__imp__sub_83C6E6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E6E0"))) PPC_WEAK_FUNC(sub_83C6E6E0);
PPC_FUNC_IMPL(__imp__sub_83C6E6E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28320
	ctx.r3.s64 = ctx.r11.s64 + 28320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E6EC"))) PPC_WEAK_FUNC(sub_83C6E6EC);
PPC_FUNC_IMPL(__imp__sub_83C6E6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E6F0"))) PPC_WEAK_FUNC(sub_83C6E6F0);
PPC_FUNC_IMPL(__imp__sub_83C6E6F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28328
	ctx.r3.s64 = ctx.r11.s64 + 28328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E6FC"))) PPC_WEAK_FUNC(sub_83C6E6FC);
PPC_FUNC_IMPL(__imp__sub_83C6E6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E700"))) PPC_WEAK_FUNC(sub_83C6E700);
PPC_FUNC_IMPL(__imp__sub_83C6E700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28336
	ctx.r3.s64 = ctx.r11.s64 + 28336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E70C"))) PPC_WEAK_FUNC(sub_83C6E70C);
PPC_FUNC_IMPL(__imp__sub_83C6E70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E710"))) PPC_WEAK_FUNC(sub_83C6E710);
PPC_FUNC_IMPL(__imp__sub_83C6E710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,-19536
	ctx.r3.s64 = ctx.r11.s64 + -19536;
	// bl 0x83523120
	ctx.lr = 0x83C6E728;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,28344
	ctx.r3.s64 = ctx.r10.s64 + 28344;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6E734;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6E744"))) PPC_WEAK_FUNC(sub_83C6E744);
PPC_FUNC_IMPL(__imp__sub_83C6E744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E748"))) PPC_WEAK_FUNC(sub_83C6E748);
PPC_FUNC_IMPL(__imp__sub_83C6E748) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-19520
	ctx.r7.s64 = ctx.r8.s64 + -19520;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-19520(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19520);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-19520(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19520, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6E770"))) PPC_WEAK_FUNC(sub_83C6E770);
PPC_FUNC_IMPL(__imp__sub_83C6E770) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-21356
	ctx.r6.s64 = ctx.r7.s64 + -21356;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-21428(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -21428);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-19520(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -19520);
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
	// std r9,-21356(r7)
	PPC_STORE_U64(ctx.r7.u32 + -21356, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6E7B8"))) PPC_WEAK_FUNC(sub_83C6E7B8);
PPC_FUNC_IMPL(__imp__sub_83C6E7B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28360
	ctx.r3.s64 = ctx.r11.s64 + 28360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E7C4"))) PPC_WEAK_FUNC(sub_83C6E7C4);
PPC_FUNC_IMPL(__imp__sub_83C6E7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E7C8"))) PPC_WEAK_FUNC(sub_83C6E7C8);
PPC_FUNC_IMPL(__imp__sub_83C6E7C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,-19512
	ctx.r3.s64 = ctx.r11.s64 + -19512;
	// bl 0x8259af80
	ctx.lr = 0x83C6E7E0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,28376
	ctx.r3.s64 = ctx.r10.s64 + 28376;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6E7EC;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6E7FC"))) PPC_WEAK_FUNC(sub_83C6E7FC);
PPC_FUNC_IMPL(__imp__sub_83C6E7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E800"))) PPC_WEAK_FUNC(sub_83C6E800);
PPC_FUNC_IMPL(__imp__sub_83C6E800) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-19532
	ctx.r11.s64 = ctx.r8.s64 + -19532;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-21380(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21380);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,28368
	ctx.r3.s64 = ctx.r6.s64 + 28368;
	// stw r10,-19532(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19532, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E830"))) PPC_WEAK_FUNC(sub_83C6E830);
PPC_FUNC_IMPL(__imp__sub_83C6E830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28384
	ctx.r3.s64 = ctx.r11.s64 + 28384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E83C"))) PPC_WEAK_FUNC(sub_83C6E83C);
PPC_FUNC_IMPL(__imp__sub_83C6E83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E840"))) PPC_WEAK_FUNC(sub_83C6E840);
PPC_FUNC_IMPL(__imp__sub_83C6E840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28392
	ctx.r3.s64 = ctx.r11.s64 + 28392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E84C"))) PPC_WEAK_FUNC(sub_83C6E84C);
PPC_FUNC_IMPL(__imp__sub_83C6E84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E850"))) PPC_WEAK_FUNC(sub_83C6E850);
PPC_FUNC_IMPL(__imp__sub_83C6E850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28400
	ctx.r3.s64 = ctx.r11.s64 + 28400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E85C"))) PPC_WEAK_FUNC(sub_83C6E85C);
PPC_FUNC_IMPL(__imp__sub_83C6E85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E860"))) PPC_WEAK_FUNC(sub_83C6E860);
PPC_FUNC_IMPL(__imp__sub_83C6E860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28408
	ctx.r3.s64 = ctx.r11.s64 + 28408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E86C"))) PPC_WEAK_FUNC(sub_83C6E86C);
PPC_FUNC_IMPL(__imp__sub_83C6E86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E870"))) PPC_WEAK_FUNC(sub_83C6E870);
PPC_FUNC_IMPL(__imp__sub_83C6E870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28416
	ctx.r3.s64 = ctx.r11.s64 + 28416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E87C"))) PPC_WEAK_FUNC(sub_83C6E87C);
PPC_FUNC_IMPL(__imp__sub_83C6E87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E880"))) PPC_WEAK_FUNC(sub_83C6E880);
PPC_FUNC_IMPL(__imp__sub_83C6E880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28424
	ctx.r3.s64 = ctx.r11.s64 + 28424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E88C"))) PPC_WEAK_FUNC(sub_83C6E88C);
PPC_FUNC_IMPL(__imp__sub_83C6E88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E890"))) PPC_WEAK_FUNC(sub_83C6E890);
PPC_FUNC_IMPL(__imp__sub_83C6E890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28432
	ctx.r3.s64 = ctx.r11.s64 + 28432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E89C"))) PPC_WEAK_FUNC(sub_83C6E89C);
PPC_FUNC_IMPL(__imp__sub_83C6E89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E8A0"))) PPC_WEAK_FUNC(sub_83C6E8A0);
PPC_FUNC_IMPL(__imp__sub_83C6E8A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28440
	ctx.r3.s64 = ctx.r11.s64 + 28440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E8AC"))) PPC_WEAK_FUNC(sub_83C6E8AC);
PPC_FUNC_IMPL(__imp__sub_83C6E8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E8B0"))) PPC_WEAK_FUNC(sub_83C6E8B0);
PPC_FUNC_IMPL(__imp__sub_83C6E8B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28448
	ctx.r3.s64 = ctx.r11.s64 + 28448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E8BC"))) PPC_WEAK_FUNC(sub_83C6E8BC);
PPC_FUNC_IMPL(__imp__sub_83C6E8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E8C0"))) PPC_WEAK_FUNC(sub_83C6E8C0);
PPC_FUNC_IMPL(__imp__sub_83C6E8C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28456
	ctx.r3.s64 = ctx.r11.s64 + 28456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E8CC"))) PPC_WEAK_FUNC(sub_83C6E8CC);
PPC_FUNC_IMPL(__imp__sub_83C6E8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E8D0"))) PPC_WEAK_FUNC(sub_83C6E8D0);
PPC_FUNC_IMPL(__imp__sub_83C6E8D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28464
	ctx.r3.s64 = ctx.r11.s64 + 28464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E8DC"))) PPC_WEAK_FUNC(sub_83C6E8DC);
PPC_FUNC_IMPL(__imp__sub_83C6E8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E8E0"))) PPC_WEAK_FUNC(sub_83C6E8E0);
PPC_FUNC_IMPL(__imp__sub_83C6E8E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28472
	ctx.r3.s64 = ctx.r11.s64 + 28472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E8EC"))) PPC_WEAK_FUNC(sub_83C6E8EC);
PPC_FUNC_IMPL(__imp__sub_83C6E8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E8F0"))) PPC_WEAK_FUNC(sub_83C6E8F0);
PPC_FUNC_IMPL(__imp__sub_83C6E8F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,-19168
	ctx.r3.s64 = ctx.r11.s64 + -19168;
	// bl 0x83523120
	ctx.lr = 0x83C6E908;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,28480
	ctx.r3.s64 = ctx.r10.s64 + 28480;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6E914;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6E924"))) PPC_WEAK_FUNC(sub_83C6E924);
PPC_FUNC_IMPL(__imp__sub_83C6E924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E928"))) PPC_WEAK_FUNC(sub_83C6E928);
PPC_FUNC_IMPL(__imp__sub_83C6E928) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-19152
	ctx.r7.s64 = ctx.r8.s64 + -19152;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-19152(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19152);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-19152(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19152, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6E950"))) PPC_WEAK_FUNC(sub_83C6E950);
PPC_FUNC_IMPL(__imp__sub_83C6E950) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-21228
	ctx.r6.s64 = ctx.r7.s64 + -21228;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-21300(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -21300);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-19152(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -19152);
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
	// std r9,-21228(r7)
	PPC_STORE_U64(ctx.r7.u32 + -21228, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6E998"))) PPC_WEAK_FUNC(sub_83C6E998);
PPC_FUNC_IMPL(__imp__sub_83C6E998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28496
	ctx.r3.s64 = ctx.r11.s64 + 28496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6E9A4"))) PPC_WEAK_FUNC(sub_83C6E9A4);
PPC_FUNC_IMPL(__imp__sub_83C6E9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E9A8"))) PPC_WEAK_FUNC(sub_83C6E9A8);
PPC_FUNC_IMPL(__imp__sub_83C6E9A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,-19144
	ctx.r3.s64 = ctx.r11.s64 + -19144;
	// bl 0x8259af80
	ctx.lr = 0x83C6E9C0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,28512
	ctx.r3.s64 = ctx.r10.s64 + 28512;
	// bl 0x831cdcc8
	ctx.lr = 0x83C6E9CC;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C6E9DC"))) PPC_WEAK_FUNC(sub_83C6E9DC);
PPC_FUNC_IMPL(__imp__sub_83C6E9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6E9E0"))) PPC_WEAK_FUNC(sub_83C6E9E0);
PPC_FUNC_IMPL(__imp__sub_83C6E9E0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-19164
	ctx.r11.s64 = ctx.r8.s64 + -19164;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,-21252(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21252);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,28504
	ctx.r3.s64 = ctx.r6.s64 + 28504;
	// stw r10,-19164(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19164, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6EA10"))) PPC_WEAK_FUNC(sub_83C6EA10);
PPC_FUNC_IMPL(__imp__sub_83C6EA10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28520
	ctx.r3.s64 = ctx.r11.s64 + 28520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6EA1C"))) PPC_WEAK_FUNC(sub_83C6EA1C);
PPC_FUNC_IMPL(__imp__sub_83C6EA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6EA20"))) PPC_WEAK_FUNC(sub_83C6EA20);
PPC_FUNC_IMPL(__imp__sub_83C6EA20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28528
	ctx.r3.s64 = ctx.r11.s64 + 28528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6EA2C"))) PPC_WEAK_FUNC(sub_83C6EA2C);
PPC_FUNC_IMPL(__imp__sub_83C6EA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6EA30"))) PPC_WEAK_FUNC(sub_83C6EA30);
PPC_FUNC_IMPL(__imp__sub_83C6EA30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28536
	ctx.r3.s64 = ctx.r11.s64 + 28536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6EA3C"))) PPC_WEAK_FUNC(sub_83C6EA3C);
PPC_FUNC_IMPL(__imp__sub_83C6EA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6EA40"))) PPC_WEAK_FUNC(sub_83C6EA40);
PPC_FUNC_IMPL(__imp__sub_83C6EA40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28544
	ctx.r3.s64 = ctx.r11.s64 + 28544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6EA4C"))) PPC_WEAK_FUNC(sub_83C6EA4C);
PPC_FUNC_IMPL(__imp__sub_83C6EA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6EA50"))) PPC_WEAK_FUNC(sub_83C6EA50);
PPC_FUNC_IMPL(__imp__sub_83C6EA50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28552
	ctx.r3.s64 = ctx.r11.s64 + 28552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C6EA5C"))) PPC_WEAK_FUNC(sub_83C6EA5C);
PPC_FUNC_IMPL(__imp__sub_83C6EA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C6EA60"))) PPC_WEAK_FUNC(sub_83C6EA60);
PPC_FUNC_IMPL(__imp__sub_83C6EA60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,28560
	ctx.r3.s64 = ctx.r11.s64 + 28560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

