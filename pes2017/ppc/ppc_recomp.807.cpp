#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C5DA98"))) PPC_WEAK_FUNC(sub_83C5DA98);
PPC_FUNC_IMPL(__imp__sub_83C5DA98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-5544
	ctx.r3.s64 = ctx.r11.s64 + -5544;
	// bl 0x8259af80
	ctx.lr = 0x83C5DAB0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,8432
	ctx.r3.s64 = ctx.r10.s64 + 8432;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5DABC;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5DACC"))) PPC_WEAK_FUNC(sub_83C5DACC);
PPC_FUNC_IMPL(__imp__sub_83C5DACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5DAD0"))) PPC_WEAK_FUNC(sub_83C5DAD0);
PPC_FUNC_IMPL(__imp__sub_83C5DAD0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-5564
	ctx.r11.s64 = ctx.r8.s64 + -5564;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,24936(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24936);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,8424
	ctx.r3.s64 = ctx.r6.s64 + 8424;
	// stw r10,-5564(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5564, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5DB00"))) PPC_WEAK_FUNC(sub_83C5DB00);
PPC_FUNC_IMPL(__imp__sub_83C5DB00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8440
	ctx.r3.s64 = ctx.r11.s64 + 8440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5DB0C"))) PPC_WEAK_FUNC(sub_83C5DB0C);
PPC_FUNC_IMPL(__imp__sub_83C5DB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5DB10"))) PPC_WEAK_FUNC(sub_83C5DB10);
PPC_FUNC_IMPL(__imp__sub_83C5DB10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8448
	ctx.r3.s64 = ctx.r11.s64 + 8448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5DB1C"))) PPC_WEAK_FUNC(sub_83C5DB1C);
PPC_FUNC_IMPL(__imp__sub_83C5DB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5DB20"))) PPC_WEAK_FUNC(sub_83C5DB20);
PPC_FUNC_IMPL(__imp__sub_83C5DB20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8456
	ctx.r3.s64 = ctx.r11.s64 + 8456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5DB2C"))) PPC_WEAK_FUNC(sub_83C5DB2C);
PPC_FUNC_IMPL(__imp__sub_83C5DB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5DB30"))) PPC_WEAK_FUNC(sub_83C5DB30);
PPC_FUNC_IMPL(__imp__sub_83C5DB30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8464
	ctx.r3.s64 = ctx.r11.s64 + 8464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5DB3C"))) PPC_WEAK_FUNC(sub_83C5DB3C);
PPC_FUNC_IMPL(__imp__sub_83C5DB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5DB40"))) PPC_WEAK_FUNC(sub_83C5DB40);
PPC_FUNC_IMPL(__imp__sub_83C5DB40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8472
	ctx.r3.s64 = ctx.r11.s64 + 8472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5DB4C"))) PPC_WEAK_FUNC(sub_83C5DB4C);
PPC_FUNC_IMPL(__imp__sub_83C5DB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5DB50"))) PPC_WEAK_FUNC(sub_83C5DB50);
PPC_FUNC_IMPL(__imp__sub_83C5DB50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8480
	ctx.r3.s64 = ctx.r11.s64 + 8480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5DB5C"))) PPC_WEAK_FUNC(sub_83C5DB5C);
PPC_FUNC_IMPL(__imp__sub_83C5DB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5DB60"))) PPC_WEAK_FUNC(sub_83C5DB60);
PPC_FUNC_IMPL(__imp__sub_83C5DB60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8488
	ctx.r3.s64 = ctx.r11.s64 + 8488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5DB6C"))) PPC_WEAK_FUNC(sub_83C5DB6C);
PPC_FUNC_IMPL(__imp__sub_83C5DB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5DB70"))) PPC_WEAK_FUNC(sub_83C5DB70);
PPC_FUNC_IMPL(__imp__sub_83C5DB70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8496
	ctx.r3.s64 = ctx.r11.s64 + 8496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5DB7C"))) PPC_WEAK_FUNC(sub_83C5DB7C);
PPC_FUNC_IMPL(__imp__sub_83C5DB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5DB80"))) PPC_WEAK_FUNC(sub_83C5DB80);
PPC_FUNC_IMPL(__imp__sub_83C5DB80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8504
	ctx.r3.s64 = ctx.r11.s64 + 8504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5DB8C"))) PPC_WEAK_FUNC(sub_83C5DB8C);
PPC_FUNC_IMPL(__imp__sub_83C5DB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5DB90"))) PPC_WEAK_FUNC(sub_83C5DB90);
PPC_FUNC_IMPL(__imp__sub_83C5DB90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8512
	ctx.r3.s64 = ctx.r11.s64 + 8512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5DB9C"))) PPC_WEAK_FUNC(sub_83C5DB9C);
PPC_FUNC_IMPL(__imp__sub_83C5DB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5DBA0"))) PPC_WEAK_FUNC(sub_83C5DBA0);
PPC_FUNC_IMPL(__imp__sub_83C5DBA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8520
	ctx.r3.s64 = ctx.r11.s64 + 8520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5DBAC"))) PPC_WEAK_FUNC(sub_83C5DBAC);
PPC_FUNC_IMPL(__imp__sub_83C5DBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5DBB0"))) PPC_WEAK_FUNC(sub_83C5DBB0);
PPC_FUNC_IMPL(__imp__sub_83C5DBB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8528
	ctx.r3.s64 = ctx.r11.s64 + 8528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5DBBC"))) PPC_WEAK_FUNC(sub_83C5DBBC);
PPC_FUNC_IMPL(__imp__sub_83C5DBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5DBC0"))) PPC_WEAK_FUNC(sub_83C5DBC0);
PPC_FUNC_IMPL(__imp__sub_83C5DBC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-5200
	ctx.r3.s64 = ctx.r11.s64 + -5200;
	// bl 0x83523120
	ctx.lr = 0x83C5DBD8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,8536
	ctx.r3.s64 = ctx.r10.s64 + 8536;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5DBE4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5DBF4"))) PPC_WEAK_FUNC(sub_83C5DBF4);
PPC_FUNC_IMPL(__imp__sub_83C5DBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5DBF8"))) PPC_WEAK_FUNC(sub_83C5DBF8);
PPC_FUNC_IMPL(__imp__sub_83C5DBF8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5184
	ctx.r7.s64 = ctx.r8.s64 + -5184;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5184(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5184);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5184(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5184, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5DC20"))) PPC_WEAK_FUNC(sub_83C5DC20);
PPC_FUNC_IMPL(__imp__sub_83C5DC20) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,25104
	ctx.r6.s64 = ctx.r7.s64 + 25104;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,25024(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 25024);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-5184(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -5184);
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
	// std r9,25104(r7)
	PPC_STORE_U64(ctx.r7.u32 + 25104, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5DC68"))) PPC_WEAK_FUNC(sub_83C5DC68);
PPC_FUNC_IMPL(__imp__sub_83C5DC68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8552
	ctx.r3.s64 = ctx.r11.s64 + 8552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5DC74"))) PPC_WEAK_FUNC(sub_83C5DC74);
PPC_FUNC_IMPL(__imp__sub_83C5DC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5DC78"))) PPC_WEAK_FUNC(sub_83C5DC78);
PPC_FUNC_IMPL(__imp__sub_83C5DC78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-5176
	ctx.r3.s64 = ctx.r11.s64 + -5176;
	// bl 0x8259af80
	ctx.lr = 0x83C5DC90;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,8568
	ctx.r3.s64 = ctx.r10.s64 + 8568;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5DC9C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5DCAC"))) PPC_WEAK_FUNC(sub_83C5DCAC);
PPC_FUNC_IMPL(__imp__sub_83C5DCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5DCB0"))) PPC_WEAK_FUNC(sub_83C5DCB0);
PPC_FUNC_IMPL(__imp__sub_83C5DCB0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-5196
	ctx.r11.s64 = ctx.r8.s64 + -5196;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,25072(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25072);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,8560
	ctx.r3.s64 = ctx.r6.s64 + 8560;
	// stw r10,-5196(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5196, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5DCE0"))) PPC_WEAK_FUNC(sub_83C5DCE0);
PPC_FUNC_IMPL(__imp__sub_83C5DCE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8576
	ctx.r3.s64 = ctx.r11.s64 + 8576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5DCEC"))) PPC_WEAK_FUNC(sub_83C5DCEC);
PPC_FUNC_IMPL(__imp__sub_83C5DCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5DCF0"))) PPC_WEAK_FUNC(sub_83C5DCF0);
PPC_FUNC_IMPL(__imp__sub_83C5DCF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8584
	ctx.r3.s64 = ctx.r11.s64 + 8584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5DCFC"))) PPC_WEAK_FUNC(sub_83C5DCFC);
PPC_FUNC_IMPL(__imp__sub_83C5DCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5DD00"))) PPC_WEAK_FUNC(sub_83C5DD00);
PPC_FUNC_IMPL(__imp__sub_83C5DD00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8592
	ctx.r3.s64 = ctx.r11.s64 + 8592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5DD0C"))) PPC_WEAK_FUNC(sub_83C5DD0C);
PPC_FUNC_IMPL(__imp__sub_83C5DD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5DD10"))) PPC_WEAK_FUNC(sub_83C5DD10);
PPC_FUNC_IMPL(__imp__sub_83C5DD10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8600
	ctx.r3.s64 = ctx.r11.s64 + 8600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5DD1C"))) PPC_WEAK_FUNC(sub_83C5DD1C);
PPC_FUNC_IMPL(__imp__sub_83C5DD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5DD20"))) PPC_WEAK_FUNC(sub_83C5DD20);
PPC_FUNC_IMPL(__imp__sub_83C5DD20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8608
	ctx.r3.s64 = ctx.r11.s64 + 8608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5DD2C"))) PPC_WEAK_FUNC(sub_83C5DD2C);
PPC_FUNC_IMPL(__imp__sub_83C5DD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5DD30"))) PPC_WEAK_FUNC(sub_83C5DD30);
PPC_FUNC_IMPL(__imp__sub_83C5DD30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8616
	ctx.r3.s64 = ctx.r11.s64 + 8616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5DD3C"))) PPC_WEAK_FUNC(sub_83C5DD3C);
PPC_FUNC_IMPL(__imp__sub_83C5DD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5DD40"))) PPC_WEAK_FUNC(sub_83C5DD40);
PPC_FUNC_IMPL(__imp__sub_83C5DD40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8624
	ctx.r3.s64 = ctx.r11.s64 + 8624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5DD4C"))) PPC_WEAK_FUNC(sub_83C5DD4C);
PPC_FUNC_IMPL(__imp__sub_83C5DD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5DD50"))) PPC_WEAK_FUNC(sub_83C5DD50);
PPC_FUNC_IMPL(__imp__sub_83C5DD50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8632
	ctx.r3.s64 = ctx.r11.s64 + 8632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5DD5C"))) PPC_WEAK_FUNC(sub_83C5DD5C);
PPC_FUNC_IMPL(__imp__sub_83C5DD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5DD60"))) PPC_WEAK_FUNC(sub_83C5DD60);
PPC_FUNC_IMPL(__imp__sub_83C5DD60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8640
	ctx.r3.s64 = ctx.r11.s64 + 8640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5DD6C"))) PPC_WEAK_FUNC(sub_83C5DD6C);
PPC_FUNC_IMPL(__imp__sub_83C5DD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5DD70"))) PPC_WEAK_FUNC(sub_83C5DD70);
PPC_FUNC_IMPL(__imp__sub_83C5DD70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8648
	ctx.r3.s64 = ctx.r11.s64 + 8648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5DD7C"))) PPC_WEAK_FUNC(sub_83C5DD7C);
PPC_FUNC_IMPL(__imp__sub_83C5DD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5DD80"))) PPC_WEAK_FUNC(sub_83C5DD80);
PPC_FUNC_IMPL(__imp__sub_83C5DD80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8656
	ctx.r3.s64 = ctx.r11.s64 + 8656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5DD8C"))) PPC_WEAK_FUNC(sub_83C5DD8C);
PPC_FUNC_IMPL(__imp__sub_83C5DD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5DD90"))) PPC_WEAK_FUNC(sub_83C5DD90);
PPC_FUNC_IMPL(__imp__sub_83C5DD90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8664
	ctx.r3.s64 = ctx.r11.s64 + 8664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5DD9C"))) PPC_WEAK_FUNC(sub_83C5DD9C);
PPC_FUNC_IMPL(__imp__sub_83C5DD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5DDA0"))) PPC_WEAK_FUNC(sub_83C5DDA0);
PPC_FUNC_IMPL(__imp__sub_83C5DDA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-4832
	ctx.r3.s64 = ctx.r11.s64 + -4832;
	// bl 0x83523120
	ctx.lr = 0x83C5DDB8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,8672
	ctx.r3.s64 = ctx.r10.s64 + 8672;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5DDC4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5DDD4"))) PPC_WEAK_FUNC(sub_83C5DDD4);
PPC_FUNC_IMPL(__imp__sub_83C5DDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5DDD8"))) PPC_WEAK_FUNC(sub_83C5DDD8);
PPC_FUNC_IMPL(__imp__sub_83C5DDD8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-4816
	ctx.r7.s64 = ctx.r8.s64 + -4816;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-4816(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4816);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-4816(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4816, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5DE00"))) PPC_WEAK_FUNC(sub_83C5DE00);
PPC_FUNC_IMPL(__imp__sub_83C5DE00) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,25240
	ctx.r6.s64 = ctx.r7.s64 + 25240;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,25160(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 25160);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-4816(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4816);
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
	// std r9,25240(r7)
	PPC_STORE_U64(ctx.r7.u32 + 25240, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5DE48"))) PPC_WEAK_FUNC(sub_83C5DE48);
PPC_FUNC_IMPL(__imp__sub_83C5DE48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8688
	ctx.r3.s64 = ctx.r11.s64 + 8688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5DE54"))) PPC_WEAK_FUNC(sub_83C5DE54);
PPC_FUNC_IMPL(__imp__sub_83C5DE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5DE58"))) PPC_WEAK_FUNC(sub_83C5DE58);
PPC_FUNC_IMPL(__imp__sub_83C5DE58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-4808
	ctx.r3.s64 = ctx.r11.s64 + -4808;
	// bl 0x8259af80
	ctx.lr = 0x83C5DE70;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,8704
	ctx.r3.s64 = ctx.r10.s64 + 8704;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5DE7C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5DE8C"))) PPC_WEAK_FUNC(sub_83C5DE8C);
PPC_FUNC_IMPL(__imp__sub_83C5DE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5DE90"))) PPC_WEAK_FUNC(sub_83C5DE90);
PPC_FUNC_IMPL(__imp__sub_83C5DE90) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-4828
	ctx.r11.s64 = ctx.r8.s64 + -4828;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,25208(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25208);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,8696
	ctx.r3.s64 = ctx.r6.s64 + 8696;
	// stw r10,-4828(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4828, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5DEC0"))) PPC_WEAK_FUNC(sub_83C5DEC0);
PPC_FUNC_IMPL(__imp__sub_83C5DEC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8712
	ctx.r3.s64 = ctx.r11.s64 + 8712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5DECC"))) PPC_WEAK_FUNC(sub_83C5DECC);
PPC_FUNC_IMPL(__imp__sub_83C5DECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5DED0"))) PPC_WEAK_FUNC(sub_83C5DED0);
PPC_FUNC_IMPL(__imp__sub_83C5DED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8720
	ctx.r3.s64 = ctx.r11.s64 + 8720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5DEDC"))) PPC_WEAK_FUNC(sub_83C5DEDC);
PPC_FUNC_IMPL(__imp__sub_83C5DEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5DEE0"))) PPC_WEAK_FUNC(sub_83C5DEE0);
PPC_FUNC_IMPL(__imp__sub_83C5DEE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8728
	ctx.r3.s64 = ctx.r11.s64 + 8728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5DEEC"))) PPC_WEAK_FUNC(sub_83C5DEEC);
PPC_FUNC_IMPL(__imp__sub_83C5DEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5DEF0"))) PPC_WEAK_FUNC(sub_83C5DEF0);
PPC_FUNC_IMPL(__imp__sub_83C5DEF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8736
	ctx.r3.s64 = ctx.r11.s64 + 8736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5DEFC"))) PPC_WEAK_FUNC(sub_83C5DEFC);
PPC_FUNC_IMPL(__imp__sub_83C5DEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5DF00"))) PPC_WEAK_FUNC(sub_83C5DF00);
PPC_FUNC_IMPL(__imp__sub_83C5DF00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8744
	ctx.r3.s64 = ctx.r11.s64 + 8744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5DF0C"))) PPC_WEAK_FUNC(sub_83C5DF0C);
PPC_FUNC_IMPL(__imp__sub_83C5DF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5DF10"))) PPC_WEAK_FUNC(sub_83C5DF10);
PPC_FUNC_IMPL(__imp__sub_83C5DF10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8752
	ctx.r3.s64 = ctx.r11.s64 + 8752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5DF1C"))) PPC_WEAK_FUNC(sub_83C5DF1C);
PPC_FUNC_IMPL(__imp__sub_83C5DF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5DF20"))) PPC_WEAK_FUNC(sub_83C5DF20);
PPC_FUNC_IMPL(__imp__sub_83C5DF20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8760
	ctx.r3.s64 = ctx.r11.s64 + 8760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5DF2C"))) PPC_WEAK_FUNC(sub_83C5DF2C);
PPC_FUNC_IMPL(__imp__sub_83C5DF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5DF30"))) PPC_WEAK_FUNC(sub_83C5DF30);
PPC_FUNC_IMPL(__imp__sub_83C5DF30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8768
	ctx.r3.s64 = ctx.r11.s64 + 8768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5DF3C"))) PPC_WEAK_FUNC(sub_83C5DF3C);
PPC_FUNC_IMPL(__imp__sub_83C5DF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5DF40"))) PPC_WEAK_FUNC(sub_83C5DF40);
PPC_FUNC_IMPL(__imp__sub_83C5DF40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8776
	ctx.r3.s64 = ctx.r11.s64 + 8776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5DF4C"))) PPC_WEAK_FUNC(sub_83C5DF4C);
PPC_FUNC_IMPL(__imp__sub_83C5DF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5DF50"))) PPC_WEAK_FUNC(sub_83C5DF50);
PPC_FUNC_IMPL(__imp__sub_83C5DF50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8784
	ctx.r3.s64 = ctx.r11.s64 + 8784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5DF5C"))) PPC_WEAK_FUNC(sub_83C5DF5C);
PPC_FUNC_IMPL(__imp__sub_83C5DF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5DF60"))) PPC_WEAK_FUNC(sub_83C5DF60);
PPC_FUNC_IMPL(__imp__sub_83C5DF60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8792
	ctx.r3.s64 = ctx.r11.s64 + 8792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5DF6C"))) PPC_WEAK_FUNC(sub_83C5DF6C);
PPC_FUNC_IMPL(__imp__sub_83C5DF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5DF70"))) PPC_WEAK_FUNC(sub_83C5DF70);
PPC_FUNC_IMPL(__imp__sub_83C5DF70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8800
	ctx.r3.s64 = ctx.r11.s64 + 8800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5DF7C"))) PPC_WEAK_FUNC(sub_83C5DF7C);
PPC_FUNC_IMPL(__imp__sub_83C5DF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5DF80"))) PPC_WEAK_FUNC(sub_83C5DF80);
PPC_FUNC_IMPL(__imp__sub_83C5DF80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-4464
	ctx.r3.s64 = ctx.r11.s64 + -4464;
	// bl 0x83523120
	ctx.lr = 0x83C5DF98;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,8808
	ctx.r3.s64 = ctx.r10.s64 + 8808;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5DFA4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5DFB4"))) PPC_WEAK_FUNC(sub_83C5DFB4);
PPC_FUNC_IMPL(__imp__sub_83C5DFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5DFB8"))) PPC_WEAK_FUNC(sub_83C5DFB8);
PPC_FUNC_IMPL(__imp__sub_83C5DFB8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-4448
	ctx.r7.s64 = ctx.r8.s64 + -4448;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-4448(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4448);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-4448(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4448, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5DFE0"))) PPC_WEAK_FUNC(sub_83C5DFE0);
PPC_FUNC_IMPL(__imp__sub_83C5DFE0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,25376
	ctx.r6.s64 = ctx.r7.s64 + 25376;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,25296(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 25296);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-4448(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4448);
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
	// std r9,25376(r7)
	PPC_STORE_U64(ctx.r7.u32 + 25376, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5E028"))) PPC_WEAK_FUNC(sub_83C5E028);
PPC_FUNC_IMPL(__imp__sub_83C5E028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8824
	ctx.r3.s64 = ctx.r11.s64 + 8824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E034"))) PPC_WEAK_FUNC(sub_83C5E034);
PPC_FUNC_IMPL(__imp__sub_83C5E034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E038"))) PPC_WEAK_FUNC(sub_83C5E038);
PPC_FUNC_IMPL(__imp__sub_83C5E038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-4440
	ctx.r3.s64 = ctx.r11.s64 + -4440;
	// bl 0x8259af80
	ctx.lr = 0x83C5E050;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,8840
	ctx.r3.s64 = ctx.r10.s64 + 8840;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5E05C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5E06C"))) PPC_WEAK_FUNC(sub_83C5E06C);
PPC_FUNC_IMPL(__imp__sub_83C5E06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E070"))) PPC_WEAK_FUNC(sub_83C5E070);
PPC_FUNC_IMPL(__imp__sub_83C5E070) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-4460
	ctx.r11.s64 = ctx.r8.s64 + -4460;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,25344(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25344);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,8832
	ctx.r3.s64 = ctx.r6.s64 + 8832;
	// stw r10,-4460(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4460, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E0A0"))) PPC_WEAK_FUNC(sub_83C5E0A0);
PPC_FUNC_IMPL(__imp__sub_83C5E0A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8848
	ctx.r3.s64 = ctx.r11.s64 + 8848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E0AC"))) PPC_WEAK_FUNC(sub_83C5E0AC);
PPC_FUNC_IMPL(__imp__sub_83C5E0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E0B0"))) PPC_WEAK_FUNC(sub_83C5E0B0);
PPC_FUNC_IMPL(__imp__sub_83C5E0B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8856
	ctx.r3.s64 = ctx.r11.s64 + 8856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E0BC"))) PPC_WEAK_FUNC(sub_83C5E0BC);
PPC_FUNC_IMPL(__imp__sub_83C5E0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E0C0"))) PPC_WEAK_FUNC(sub_83C5E0C0);
PPC_FUNC_IMPL(__imp__sub_83C5E0C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8864
	ctx.r3.s64 = ctx.r11.s64 + 8864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E0CC"))) PPC_WEAK_FUNC(sub_83C5E0CC);
PPC_FUNC_IMPL(__imp__sub_83C5E0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E0D0"))) PPC_WEAK_FUNC(sub_83C5E0D0);
PPC_FUNC_IMPL(__imp__sub_83C5E0D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8872
	ctx.r3.s64 = ctx.r11.s64 + 8872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E0DC"))) PPC_WEAK_FUNC(sub_83C5E0DC);
PPC_FUNC_IMPL(__imp__sub_83C5E0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E0E0"))) PPC_WEAK_FUNC(sub_83C5E0E0);
PPC_FUNC_IMPL(__imp__sub_83C5E0E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8880
	ctx.r3.s64 = ctx.r11.s64 + 8880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E0EC"))) PPC_WEAK_FUNC(sub_83C5E0EC);
PPC_FUNC_IMPL(__imp__sub_83C5E0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E0F0"))) PPC_WEAK_FUNC(sub_83C5E0F0);
PPC_FUNC_IMPL(__imp__sub_83C5E0F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8888
	ctx.r3.s64 = ctx.r11.s64 + 8888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E0FC"))) PPC_WEAK_FUNC(sub_83C5E0FC);
PPC_FUNC_IMPL(__imp__sub_83C5E0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E100"))) PPC_WEAK_FUNC(sub_83C5E100);
PPC_FUNC_IMPL(__imp__sub_83C5E100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8896
	ctx.r3.s64 = ctx.r11.s64 + 8896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E10C"))) PPC_WEAK_FUNC(sub_83C5E10C);
PPC_FUNC_IMPL(__imp__sub_83C5E10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E110"))) PPC_WEAK_FUNC(sub_83C5E110);
PPC_FUNC_IMPL(__imp__sub_83C5E110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8904
	ctx.r3.s64 = ctx.r11.s64 + 8904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E11C"))) PPC_WEAK_FUNC(sub_83C5E11C);
PPC_FUNC_IMPL(__imp__sub_83C5E11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E120"))) PPC_WEAK_FUNC(sub_83C5E120);
PPC_FUNC_IMPL(__imp__sub_83C5E120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8912
	ctx.r3.s64 = ctx.r11.s64 + 8912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E12C"))) PPC_WEAK_FUNC(sub_83C5E12C);
PPC_FUNC_IMPL(__imp__sub_83C5E12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E130"))) PPC_WEAK_FUNC(sub_83C5E130);
PPC_FUNC_IMPL(__imp__sub_83C5E130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8920
	ctx.r3.s64 = ctx.r11.s64 + 8920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E13C"))) PPC_WEAK_FUNC(sub_83C5E13C);
PPC_FUNC_IMPL(__imp__sub_83C5E13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E140"))) PPC_WEAK_FUNC(sub_83C5E140);
PPC_FUNC_IMPL(__imp__sub_83C5E140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8928
	ctx.r3.s64 = ctx.r11.s64 + 8928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E14C"))) PPC_WEAK_FUNC(sub_83C5E14C);
PPC_FUNC_IMPL(__imp__sub_83C5E14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E150"))) PPC_WEAK_FUNC(sub_83C5E150);
PPC_FUNC_IMPL(__imp__sub_83C5E150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8936
	ctx.r3.s64 = ctx.r11.s64 + 8936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E15C"))) PPC_WEAK_FUNC(sub_83C5E15C);
PPC_FUNC_IMPL(__imp__sub_83C5E15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E160"))) PPC_WEAK_FUNC(sub_83C5E160);
PPC_FUNC_IMPL(__imp__sub_83C5E160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-4096
	ctx.r3.s64 = ctx.r11.s64 + -4096;
	// bl 0x83523120
	ctx.lr = 0x83C5E178;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,8944
	ctx.r3.s64 = ctx.r10.s64 + 8944;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5E184;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5E194"))) PPC_WEAK_FUNC(sub_83C5E194);
PPC_FUNC_IMPL(__imp__sub_83C5E194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E198"))) PPC_WEAK_FUNC(sub_83C5E198);
PPC_FUNC_IMPL(__imp__sub_83C5E198) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-4080
	ctx.r7.s64 = ctx.r8.s64 + -4080;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-4080(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4080);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-4080(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4080, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5E1C0"))) PPC_WEAK_FUNC(sub_83C5E1C0);
PPC_FUNC_IMPL(__imp__sub_83C5E1C0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,25512
	ctx.r6.s64 = ctx.r7.s64 + 25512;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,25432(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 25432);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-4080(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4080);
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
	// std r9,25512(r7)
	PPC_STORE_U64(ctx.r7.u32 + 25512, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5E208"))) PPC_WEAK_FUNC(sub_83C5E208);
PPC_FUNC_IMPL(__imp__sub_83C5E208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8960
	ctx.r3.s64 = ctx.r11.s64 + 8960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E214"))) PPC_WEAK_FUNC(sub_83C5E214);
PPC_FUNC_IMPL(__imp__sub_83C5E214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E218"))) PPC_WEAK_FUNC(sub_83C5E218);
PPC_FUNC_IMPL(__imp__sub_83C5E218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-4072
	ctx.r3.s64 = ctx.r11.s64 + -4072;
	// bl 0x8259af80
	ctx.lr = 0x83C5E230;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,8976
	ctx.r3.s64 = ctx.r10.s64 + 8976;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5E23C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5E24C"))) PPC_WEAK_FUNC(sub_83C5E24C);
PPC_FUNC_IMPL(__imp__sub_83C5E24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E250"))) PPC_WEAK_FUNC(sub_83C5E250);
PPC_FUNC_IMPL(__imp__sub_83C5E250) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-4092
	ctx.r11.s64 = ctx.r8.s64 + -4092;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,25480(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25480);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,8968
	ctx.r3.s64 = ctx.r6.s64 + 8968;
	// stw r10,-4092(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4092, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E280"))) PPC_WEAK_FUNC(sub_83C5E280);
PPC_FUNC_IMPL(__imp__sub_83C5E280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8984
	ctx.r3.s64 = ctx.r11.s64 + 8984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E28C"))) PPC_WEAK_FUNC(sub_83C5E28C);
PPC_FUNC_IMPL(__imp__sub_83C5E28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E290"))) PPC_WEAK_FUNC(sub_83C5E290);
PPC_FUNC_IMPL(__imp__sub_83C5E290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,8992
	ctx.r3.s64 = ctx.r11.s64 + 8992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E29C"))) PPC_WEAK_FUNC(sub_83C5E29C);
PPC_FUNC_IMPL(__imp__sub_83C5E29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E2A0"))) PPC_WEAK_FUNC(sub_83C5E2A0);
PPC_FUNC_IMPL(__imp__sub_83C5E2A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,9000
	ctx.r3.s64 = ctx.r11.s64 + 9000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E2AC"))) PPC_WEAK_FUNC(sub_83C5E2AC);
PPC_FUNC_IMPL(__imp__sub_83C5E2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E2B0"))) PPC_WEAK_FUNC(sub_83C5E2B0);
PPC_FUNC_IMPL(__imp__sub_83C5E2B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,9008
	ctx.r3.s64 = ctx.r11.s64 + 9008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E2BC"))) PPC_WEAK_FUNC(sub_83C5E2BC);
PPC_FUNC_IMPL(__imp__sub_83C5E2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E2C0"))) PPC_WEAK_FUNC(sub_83C5E2C0);
PPC_FUNC_IMPL(__imp__sub_83C5E2C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,9016
	ctx.r3.s64 = ctx.r11.s64 + 9016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E2CC"))) PPC_WEAK_FUNC(sub_83C5E2CC);
PPC_FUNC_IMPL(__imp__sub_83C5E2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E2D0"))) PPC_WEAK_FUNC(sub_83C5E2D0);
PPC_FUNC_IMPL(__imp__sub_83C5E2D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,9024
	ctx.r3.s64 = ctx.r11.s64 + 9024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E2DC"))) PPC_WEAK_FUNC(sub_83C5E2DC);
PPC_FUNC_IMPL(__imp__sub_83C5E2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E2E0"))) PPC_WEAK_FUNC(sub_83C5E2E0);
PPC_FUNC_IMPL(__imp__sub_83C5E2E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,9032
	ctx.r3.s64 = ctx.r11.s64 + 9032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E2EC"))) PPC_WEAK_FUNC(sub_83C5E2EC);
PPC_FUNC_IMPL(__imp__sub_83C5E2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E2F0"))) PPC_WEAK_FUNC(sub_83C5E2F0);
PPC_FUNC_IMPL(__imp__sub_83C5E2F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,9040
	ctx.r3.s64 = ctx.r11.s64 + 9040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E2FC"))) PPC_WEAK_FUNC(sub_83C5E2FC);
PPC_FUNC_IMPL(__imp__sub_83C5E2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E300"))) PPC_WEAK_FUNC(sub_83C5E300);
PPC_FUNC_IMPL(__imp__sub_83C5E300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,9048
	ctx.r3.s64 = ctx.r11.s64 + 9048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E30C"))) PPC_WEAK_FUNC(sub_83C5E30C);
PPC_FUNC_IMPL(__imp__sub_83C5E30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E310"))) PPC_WEAK_FUNC(sub_83C5E310);
PPC_FUNC_IMPL(__imp__sub_83C5E310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,9056
	ctx.r3.s64 = ctx.r11.s64 + 9056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E31C"))) PPC_WEAK_FUNC(sub_83C5E31C);
PPC_FUNC_IMPL(__imp__sub_83C5E31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E320"))) PPC_WEAK_FUNC(sub_83C5E320);
PPC_FUNC_IMPL(__imp__sub_83C5E320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,9064
	ctx.r3.s64 = ctx.r11.s64 + 9064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E32C"))) PPC_WEAK_FUNC(sub_83C5E32C);
PPC_FUNC_IMPL(__imp__sub_83C5E32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E330"))) PPC_WEAK_FUNC(sub_83C5E330);
PPC_FUNC_IMPL(__imp__sub_83C5E330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,9072
	ctx.r3.s64 = ctx.r11.s64 + 9072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E33C"))) PPC_WEAK_FUNC(sub_83C5E33C);
PPC_FUNC_IMPL(__imp__sub_83C5E33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E340"))) PPC_WEAK_FUNC(sub_83C5E340);
PPC_FUNC_IMPL(__imp__sub_83C5E340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-3728
	ctx.r3.s64 = ctx.r11.s64 + -3728;
	// bl 0x83523120
	ctx.lr = 0x83C5E358;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,9080
	ctx.r3.s64 = ctx.r10.s64 + 9080;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5E364;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5E374"))) PPC_WEAK_FUNC(sub_83C5E374);
PPC_FUNC_IMPL(__imp__sub_83C5E374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E378"))) PPC_WEAK_FUNC(sub_83C5E378);
PPC_FUNC_IMPL(__imp__sub_83C5E378) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-3712
	ctx.r7.s64 = ctx.r8.s64 + -3712;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-3712(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -3712);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-3712(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3712, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5E3A0"))) PPC_WEAK_FUNC(sub_83C5E3A0);
PPC_FUNC_IMPL(__imp__sub_83C5E3A0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,25712
	ctx.r6.s64 = ctx.r7.s64 + 25712;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,25640(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 25640);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-3712(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -3712);
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
	// std r9,25712(r7)
	PPC_STORE_U64(ctx.r7.u32 + 25712, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5E3E8"))) PPC_WEAK_FUNC(sub_83C5E3E8);
PPC_FUNC_IMPL(__imp__sub_83C5E3E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,9096
	ctx.r3.s64 = ctx.r11.s64 + 9096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E3F4"))) PPC_WEAK_FUNC(sub_83C5E3F4);
PPC_FUNC_IMPL(__imp__sub_83C5E3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E3F8"))) PPC_WEAK_FUNC(sub_83C5E3F8);
PPC_FUNC_IMPL(__imp__sub_83C5E3F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-3704
	ctx.r3.s64 = ctx.r11.s64 + -3704;
	// bl 0x8259af80
	ctx.lr = 0x83C5E410;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,9112
	ctx.r3.s64 = ctx.r10.s64 + 9112;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5E41C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5E42C"))) PPC_WEAK_FUNC(sub_83C5E42C);
PPC_FUNC_IMPL(__imp__sub_83C5E42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E430"))) PPC_WEAK_FUNC(sub_83C5E430);
PPC_FUNC_IMPL(__imp__sub_83C5E430) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-3724
	ctx.r11.s64 = ctx.r8.s64 + -3724;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,25688(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25688);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,9104
	ctx.r3.s64 = ctx.r6.s64 + 9104;
	// stw r10,-3724(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3724, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E460"))) PPC_WEAK_FUNC(sub_83C5E460);
PPC_FUNC_IMPL(__imp__sub_83C5E460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,9120
	ctx.r3.s64 = ctx.r11.s64 + 9120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E46C"))) PPC_WEAK_FUNC(sub_83C5E46C);
PPC_FUNC_IMPL(__imp__sub_83C5E46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E470"))) PPC_WEAK_FUNC(sub_83C5E470);
PPC_FUNC_IMPL(__imp__sub_83C5E470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,9128
	ctx.r3.s64 = ctx.r11.s64 + 9128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E47C"))) PPC_WEAK_FUNC(sub_83C5E47C);
PPC_FUNC_IMPL(__imp__sub_83C5E47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E480"))) PPC_WEAK_FUNC(sub_83C5E480);
PPC_FUNC_IMPL(__imp__sub_83C5E480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,9136
	ctx.r3.s64 = ctx.r11.s64 + 9136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E48C"))) PPC_WEAK_FUNC(sub_83C5E48C);
PPC_FUNC_IMPL(__imp__sub_83C5E48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E490"))) PPC_WEAK_FUNC(sub_83C5E490);
PPC_FUNC_IMPL(__imp__sub_83C5E490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,9144
	ctx.r3.s64 = ctx.r11.s64 + 9144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E49C"))) PPC_WEAK_FUNC(sub_83C5E49C);
PPC_FUNC_IMPL(__imp__sub_83C5E49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E4A0"))) PPC_WEAK_FUNC(sub_83C5E4A0);
PPC_FUNC_IMPL(__imp__sub_83C5E4A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,9152
	ctx.r3.s64 = ctx.r11.s64 + 9152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E4AC"))) PPC_WEAK_FUNC(sub_83C5E4AC);
PPC_FUNC_IMPL(__imp__sub_83C5E4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E4B0"))) PPC_WEAK_FUNC(sub_83C5E4B0);
PPC_FUNC_IMPL(__imp__sub_83C5E4B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,9160
	ctx.r3.s64 = ctx.r11.s64 + 9160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E4BC"))) PPC_WEAK_FUNC(sub_83C5E4BC);
PPC_FUNC_IMPL(__imp__sub_83C5E4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E4C0"))) PPC_WEAK_FUNC(sub_83C5E4C0);
PPC_FUNC_IMPL(__imp__sub_83C5E4C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,9168
	ctx.r3.s64 = ctx.r11.s64 + 9168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E4CC"))) PPC_WEAK_FUNC(sub_83C5E4CC);
PPC_FUNC_IMPL(__imp__sub_83C5E4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E4D0"))) PPC_WEAK_FUNC(sub_83C5E4D0);
PPC_FUNC_IMPL(__imp__sub_83C5E4D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,9176
	ctx.r3.s64 = ctx.r11.s64 + 9176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E4DC"))) PPC_WEAK_FUNC(sub_83C5E4DC);
PPC_FUNC_IMPL(__imp__sub_83C5E4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E4E0"))) PPC_WEAK_FUNC(sub_83C5E4E0);
PPC_FUNC_IMPL(__imp__sub_83C5E4E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,9184
	ctx.r3.s64 = ctx.r11.s64 + 9184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E4EC"))) PPC_WEAK_FUNC(sub_83C5E4EC);
PPC_FUNC_IMPL(__imp__sub_83C5E4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E4F0"))) PPC_WEAK_FUNC(sub_83C5E4F0);
PPC_FUNC_IMPL(__imp__sub_83C5E4F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,9192
	ctx.r3.s64 = ctx.r11.s64 + 9192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E4FC"))) PPC_WEAK_FUNC(sub_83C5E4FC);
PPC_FUNC_IMPL(__imp__sub_83C5E4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E500"))) PPC_WEAK_FUNC(sub_83C5E500);
PPC_FUNC_IMPL(__imp__sub_83C5E500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,9200
	ctx.r3.s64 = ctx.r11.s64 + 9200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E50C"))) PPC_WEAK_FUNC(sub_83C5E50C);
PPC_FUNC_IMPL(__imp__sub_83C5E50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E510"))) PPC_WEAK_FUNC(sub_83C5E510);
PPC_FUNC_IMPL(__imp__sub_83C5E510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,9208
	ctx.r3.s64 = ctx.r11.s64 + 9208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E51C"))) PPC_WEAK_FUNC(sub_83C5E51C);
PPC_FUNC_IMPL(__imp__sub_83C5E51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E520"))) PPC_WEAK_FUNC(sub_83C5E520);
PPC_FUNC_IMPL(__imp__sub_83C5E520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-3360
	ctx.r3.s64 = ctx.r11.s64 + -3360;
	// bl 0x83523120
	ctx.lr = 0x83C5E538;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,9216
	ctx.r3.s64 = ctx.r10.s64 + 9216;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5E544;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5E554"))) PPC_WEAK_FUNC(sub_83C5E554);
PPC_FUNC_IMPL(__imp__sub_83C5E554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E558"))) PPC_WEAK_FUNC(sub_83C5E558);
PPC_FUNC_IMPL(__imp__sub_83C5E558) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-3344
	ctx.r7.s64 = ctx.r8.s64 + -3344;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-3344(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -3344);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-3344(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3344, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5E580"))) PPC_WEAK_FUNC(sub_83C5E580);
PPC_FUNC_IMPL(__imp__sub_83C5E580) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,25860
	ctx.r6.s64 = ctx.r7.s64 + 25860;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,25780(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 25780);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-3344(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -3344);
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
	// std r9,25860(r7)
	PPC_STORE_U64(ctx.r7.u32 + 25860, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5E5C8"))) PPC_WEAK_FUNC(sub_83C5E5C8);
PPC_FUNC_IMPL(__imp__sub_83C5E5C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,9232
	ctx.r3.s64 = ctx.r11.s64 + 9232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E5D4"))) PPC_WEAK_FUNC(sub_83C5E5D4);
PPC_FUNC_IMPL(__imp__sub_83C5E5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E5D8"))) PPC_WEAK_FUNC(sub_83C5E5D8);
PPC_FUNC_IMPL(__imp__sub_83C5E5D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-3336
	ctx.r3.s64 = ctx.r11.s64 + -3336;
	// bl 0x8259af80
	ctx.lr = 0x83C5E5F0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,9248
	ctx.r3.s64 = ctx.r10.s64 + 9248;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5E5FC;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C5E60C"))) PPC_WEAK_FUNC(sub_83C5E60C);
PPC_FUNC_IMPL(__imp__sub_83C5E60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E610"))) PPC_WEAK_FUNC(sub_83C5E610);
PPC_FUNC_IMPL(__imp__sub_83C5E610) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-3356
	ctx.r11.s64 = ctx.r8.s64 + -3356;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,25828(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25828);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,9240
	ctx.r3.s64 = ctx.r6.s64 + 9240;
	// stw r10,-3356(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3356, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E640"))) PPC_WEAK_FUNC(sub_83C5E640);
PPC_FUNC_IMPL(__imp__sub_83C5E640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,9256
	ctx.r3.s64 = ctx.r11.s64 + 9256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E64C"))) PPC_WEAK_FUNC(sub_83C5E64C);
PPC_FUNC_IMPL(__imp__sub_83C5E64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E650"))) PPC_WEAK_FUNC(sub_83C5E650);
PPC_FUNC_IMPL(__imp__sub_83C5E650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,9264
	ctx.r3.s64 = ctx.r11.s64 + 9264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E65C"))) PPC_WEAK_FUNC(sub_83C5E65C);
PPC_FUNC_IMPL(__imp__sub_83C5E65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E660"))) PPC_WEAK_FUNC(sub_83C5E660);
PPC_FUNC_IMPL(__imp__sub_83C5E660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,9272
	ctx.r3.s64 = ctx.r11.s64 + 9272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E66C"))) PPC_WEAK_FUNC(sub_83C5E66C);
PPC_FUNC_IMPL(__imp__sub_83C5E66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E670"))) PPC_WEAK_FUNC(sub_83C5E670);
PPC_FUNC_IMPL(__imp__sub_83C5E670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,9280
	ctx.r3.s64 = ctx.r11.s64 + 9280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E67C"))) PPC_WEAK_FUNC(sub_83C5E67C);
PPC_FUNC_IMPL(__imp__sub_83C5E67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E680"))) PPC_WEAK_FUNC(sub_83C5E680);
PPC_FUNC_IMPL(__imp__sub_83C5E680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,9288
	ctx.r3.s64 = ctx.r11.s64 + 9288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E68C"))) PPC_WEAK_FUNC(sub_83C5E68C);
PPC_FUNC_IMPL(__imp__sub_83C5E68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E690"))) PPC_WEAK_FUNC(sub_83C5E690);
PPC_FUNC_IMPL(__imp__sub_83C5E690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,9296
	ctx.r3.s64 = ctx.r11.s64 + 9296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E69C"))) PPC_WEAK_FUNC(sub_83C5E69C);
PPC_FUNC_IMPL(__imp__sub_83C5E69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E6A0"))) PPC_WEAK_FUNC(sub_83C5E6A0);
PPC_FUNC_IMPL(__imp__sub_83C5E6A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,9304
	ctx.r3.s64 = ctx.r11.s64 + 9304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E6AC"))) PPC_WEAK_FUNC(sub_83C5E6AC);
PPC_FUNC_IMPL(__imp__sub_83C5E6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E6B0"))) PPC_WEAK_FUNC(sub_83C5E6B0);
PPC_FUNC_IMPL(__imp__sub_83C5E6B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,9312
	ctx.r3.s64 = ctx.r11.s64 + 9312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E6BC"))) PPC_WEAK_FUNC(sub_83C5E6BC);
PPC_FUNC_IMPL(__imp__sub_83C5E6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E6C0"))) PPC_WEAK_FUNC(sub_83C5E6C0);
PPC_FUNC_IMPL(__imp__sub_83C5E6C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,9320
	ctx.r3.s64 = ctx.r11.s64 + 9320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E6CC"))) PPC_WEAK_FUNC(sub_83C5E6CC);
PPC_FUNC_IMPL(__imp__sub_83C5E6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E6D0"))) PPC_WEAK_FUNC(sub_83C5E6D0);
PPC_FUNC_IMPL(__imp__sub_83C5E6D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,9328
	ctx.r3.s64 = ctx.r11.s64 + 9328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E6DC"))) PPC_WEAK_FUNC(sub_83C5E6DC);
PPC_FUNC_IMPL(__imp__sub_83C5E6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E6E0"))) PPC_WEAK_FUNC(sub_83C5E6E0);
PPC_FUNC_IMPL(__imp__sub_83C5E6E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,9336
	ctx.r3.s64 = ctx.r11.s64 + 9336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E6EC"))) PPC_WEAK_FUNC(sub_83C5E6EC);
PPC_FUNC_IMPL(__imp__sub_83C5E6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E6F0"))) PPC_WEAK_FUNC(sub_83C5E6F0);
PPC_FUNC_IMPL(__imp__sub_83C5E6F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,9344
	ctx.r3.s64 = ctx.r11.s64 + 9344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E6FC"))) PPC_WEAK_FUNC(sub_83C5E6FC);
PPC_FUNC_IMPL(__imp__sub_83C5E6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E700"))) PPC_WEAK_FUNC(sub_83C5E700);
PPC_FUNC_IMPL(__imp__sub_83C5E700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,9352
	ctx.r3.s64 = ctx.r11.s64 + 9352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E70C"))) PPC_WEAK_FUNC(sub_83C5E70C);
PPC_FUNC_IMPL(__imp__sub_83C5E70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E710"))) PPC_WEAK_FUNC(sub_83C5E710);
PPC_FUNC_IMPL(__imp__sub_83C5E710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,9360
	ctx.r3.s64 = ctx.r11.s64 + 9360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E71C"))) PPC_WEAK_FUNC(sub_83C5E71C);
PPC_FUNC_IMPL(__imp__sub_83C5E71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E720"))) PPC_WEAK_FUNC(sub_83C5E720);
PPC_FUNC_IMPL(__imp__sub_83C5E720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,9368
	ctx.r3.s64 = ctx.r11.s64 + 9368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E72C"))) PPC_WEAK_FUNC(sub_83C5E72C);
PPC_FUNC_IMPL(__imp__sub_83C5E72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E730"))) PPC_WEAK_FUNC(sub_83C5E730);
PPC_FUNC_IMPL(__imp__sub_83C5E730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,9376
	ctx.r3.s64 = ctx.r11.s64 + 9376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E73C"))) PPC_WEAK_FUNC(sub_83C5E73C);
PPC_FUNC_IMPL(__imp__sub_83C5E73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E740"))) PPC_WEAK_FUNC(sub_83C5E740);
PPC_FUNC_IMPL(__imp__sub_83C5E740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,9384
	ctx.r3.s64 = ctx.r11.s64 + 9384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E74C"))) PPC_WEAK_FUNC(sub_83C5E74C);
PPC_FUNC_IMPL(__imp__sub_83C5E74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E750"))) PPC_WEAK_FUNC(sub_83C5E750);
PPC_FUNC_IMPL(__imp__sub_83C5E750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,9392
	ctx.r3.s64 = ctx.r11.s64 + 9392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E75C"))) PPC_WEAK_FUNC(sub_83C5E75C);
PPC_FUNC_IMPL(__imp__sub_83C5E75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E760"))) PPC_WEAK_FUNC(sub_83C5E760);
PPC_FUNC_IMPL(__imp__sub_83C5E760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,9400
	ctx.r3.s64 = ctx.r11.s64 + 9400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E76C"))) PPC_WEAK_FUNC(sub_83C5E76C);
PPC_FUNC_IMPL(__imp__sub_83C5E76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E770"))) PPC_WEAK_FUNC(sub_83C5E770);
PPC_FUNC_IMPL(__imp__sub_83C5E770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,9408
	ctx.r3.s64 = ctx.r11.s64 + 9408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E77C"))) PPC_WEAK_FUNC(sub_83C5E77C);
PPC_FUNC_IMPL(__imp__sub_83C5E77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E780"))) PPC_WEAK_FUNC(sub_83C5E780);
PPC_FUNC_IMPL(__imp__sub_83C5E780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,9416
	ctx.r3.s64 = ctx.r11.s64 + 9416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E78C"))) PPC_WEAK_FUNC(sub_83C5E78C);
PPC_FUNC_IMPL(__imp__sub_83C5E78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E790"))) PPC_WEAK_FUNC(sub_83C5E790);
PPC_FUNC_IMPL(__imp__sub_83C5E790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,9424
	ctx.r3.s64 = ctx.r11.s64 + 9424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E79C"))) PPC_WEAK_FUNC(sub_83C5E79C);
PPC_FUNC_IMPL(__imp__sub_83C5E79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E7A0"))) PPC_WEAK_FUNC(sub_83C5E7A0);
PPC_FUNC_IMPL(__imp__sub_83C5E7A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,9432
	ctx.r3.s64 = ctx.r11.s64 + 9432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E7AC"))) PPC_WEAK_FUNC(sub_83C5E7AC);
PPC_FUNC_IMPL(__imp__sub_83C5E7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E7B0"))) PPC_WEAK_FUNC(sub_83C5E7B0);
PPC_FUNC_IMPL(__imp__sub_83C5E7B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,9440
	ctx.r3.s64 = ctx.r11.s64 + 9440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E7BC"))) PPC_WEAK_FUNC(sub_83C5E7BC);
PPC_FUNC_IMPL(__imp__sub_83C5E7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E7C0"))) PPC_WEAK_FUNC(sub_83C5E7C0);
PPC_FUNC_IMPL(__imp__sub_83C5E7C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,9448
	ctx.r3.s64 = ctx.r11.s64 + 9448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E7CC"))) PPC_WEAK_FUNC(sub_83C5E7CC);
PPC_FUNC_IMPL(__imp__sub_83C5E7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E7D0"))) PPC_WEAK_FUNC(sub_83C5E7D0);
PPC_FUNC_IMPL(__imp__sub_83C5E7D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,9456
	ctx.r3.s64 = ctx.r11.s64 + 9456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E7DC"))) PPC_WEAK_FUNC(sub_83C5E7DC);
PPC_FUNC_IMPL(__imp__sub_83C5E7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E7E0"))) PPC_WEAK_FUNC(sub_83C5E7E0);
PPC_FUNC_IMPL(__imp__sub_83C5E7E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,9464
	ctx.r3.s64 = ctx.r11.s64 + 9464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5E7EC"))) PPC_WEAK_FUNC(sub_83C5E7EC);
PPC_FUNC_IMPL(__imp__sub_83C5E7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C5E7F0"))) PPC_WEAK_FUNC(sub_83C5E7F0);
PPC_FUNC_IMPL(__imp__sub_83C5E7F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,9472
	ctx.r3.s64 = ctx.r11.s64 + 9472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

