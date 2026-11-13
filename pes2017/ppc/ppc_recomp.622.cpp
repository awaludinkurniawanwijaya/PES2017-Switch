#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BB7EC0"))) PPC_WEAK_FUNC(sub_83BB7EC0);
PPC_FUNC_IMPL(__imp__sub_83BB7EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,6056
	ctx.r7.s64 = ctx.r8.s64 + 6056;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,6056(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6056);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,6056(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6056, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB7EE8"))) PPC_WEAK_FUNC(sub_83BB7EE8);
PPC_FUNC_IMPL(__imp__sub_83BB7EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-14416
	ctx.r6.s64 = ctx.r7.s64 + -14416;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-14488(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -14488);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,6056(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6056);
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
	// std r9,-14416(r7)
	PPC_STORE_U64(ctx.r7.u32 + -14416, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB7F30"))) PPC_WEAK_FUNC(sub_83BB7F30);
PPC_FUNC_IMPL(__imp__sub_83BB7F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14984
	ctx.r3.s64 = ctx.r11.s64 + -14984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB7F3C"))) PPC_WEAK_FUNC(sub_83BB7F3C);
PPC_FUNC_IMPL(__imp__sub_83BB7F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB7F40"))) PPC_WEAK_FUNC(sub_83BB7F40);
PPC_FUNC_IMPL(__imp__sub_83BB7F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,6064
	ctx.r3.s64 = ctx.r11.s64 + 6064;
	// bl 0x8259af80
	ctx.lr = 0x83BB7F58;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-14968
	ctx.r3.s64 = ctx.r10.s64 + -14968;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB7F64;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB7F74"))) PPC_WEAK_FUNC(sub_83BB7F74);
PPC_FUNC_IMPL(__imp__sub_83BB7F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB7F78"))) PPC_WEAK_FUNC(sub_83BB7F78);
PPC_FUNC_IMPL(__imp__sub_83BB7F78) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,6044
	ctx.r11.s64 = ctx.r8.s64 + 6044;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-14440(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14440);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-14976
	ctx.r3.s64 = ctx.r6.s64 + -14976;
	// stw r10,6044(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6044, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB7FA8"))) PPC_WEAK_FUNC(sub_83BB7FA8);
PPC_FUNC_IMPL(__imp__sub_83BB7FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14960
	ctx.r3.s64 = ctx.r11.s64 + -14960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB7FB4"))) PPC_WEAK_FUNC(sub_83BB7FB4);
PPC_FUNC_IMPL(__imp__sub_83BB7FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB7FB8"))) PPC_WEAK_FUNC(sub_83BB7FB8);
PPC_FUNC_IMPL(__imp__sub_83BB7FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14952
	ctx.r3.s64 = ctx.r11.s64 + -14952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB7FC4"))) PPC_WEAK_FUNC(sub_83BB7FC4);
PPC_FUNC_IMPL(__imp__sub_83BB7FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB7FC8"))) PPC_WEAK_FUNC(sub_83BB7FC8);
PPC_FUNC_IMPL(__imp__sub_83BB7FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14944
	ctx.r3.s64 = ctx.r11.s64 + -14944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB7FD4"))) PPC_WEAK_FUNC(sub_83BB7FD4);
PPC_FUNC_IMPL(__imp__sub_83BB7FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB7FD8"))) PPC_WEAK_FUNC(sub_83BB7FD8);
PPC_FUNC_IMPL(__imp__sub_83BB7FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14936
	ctx.r3.s64 = ctx.r11.s64 + -14936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB7FE4"))) PPC_WEAK_FUNC(sub_83BB7FE4);
PPC_FUNC_IMPL(__imp__sub_83BB7FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB7FE8"))) PPC_WEAK_FUNC(sub_83BB7FE8);
PPC_FUNC_IMPL(__imp__sub_83BB7FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14928
	ctx.r3.s64 = ctx.r11.s64 + -14928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB7FF4"))) PPC_WEAK_FUNC(sub_83BB7FF4);
PPC_FUNC_IMPL(__imp__sub_83BB7FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB7FF8"))) PPC_WEAK_FUNC(sub_83BB7FF8);
PPC_FUNC_IMPL(__imp__sub_83BB7FF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14920
	ctx.r3.s64 = ctx.r11.s64 + -14920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8004"))) PPC_WEAK_FUNC(sub_83BB8004);
PPC_FUNC_IMPL(__imp__sub_83BB8004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8008"))) PPC_WEAK_FUNC(sub_83BB8008);
PPC_FUNC_IMPL(__imp__sub_83BB8008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14912
	ctx.r3.s64 = ctx.r11.s64 + -14912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8014"))) PPC_WEAK_FUNC(sub_83BB8014);
PPC_FUNC_IMPL(__imp__sub_83BB8014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8018"))) PPC_WEAK_FUNC(sub_83BB8018);
PPC_FUNC_IMPL(__imp__sub_83BB8018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14904
	ctx.r3.s64 = ctx.r11.s64 + -14904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8024"))) PPC_WEAK_FUNC(sub_83BB8024);
PPC_FUNC_IMPL(__imp__sub_83BB8024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8028"))) PPC_WEAK_FUNC(sub_83BB8028);
PPC_FUNC_IMPL(__imp__sub_83BB8028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14896
	ctx.r3.s64 = ctx.r11.s64 + -14896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8034"))) PPC_WEAK_FUNC(sub_83BB8034);
PPC_FUNC_IMPL(__imp__sub_83BB8034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8038"))) PPC_WEAK_FUNC(sub_83BB8038);
PPC_FUNC_IMPL(__imp__sub_83BB8038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14888
	ctx.r3.s64 = ctx.r11.s64 + -14888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8044"))) PPC_WEAK_FUNC(sub_83BB8044);
PPC_FUNC_IMPL(__imp__sub_83BB8044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8048"))) PPC_WEAK_FUNC(sub_83BB8048);
PPC_FUNC_IMPL(__imp__sub_83BB8048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14880
	ctx.r3.s64 = ctx.r11.s64 + -14880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8054"))) PPC_WEAK_FUNC(sub_83BB8054);
PPC_FUNC_IMPL(__imp__sub_83BB8054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8058"))) PPC_WEAK_FUNC(sub_83BB8058);
PPC_FUNC_IMPL(__imp__sub_83BB8058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14872
	ctx.r3.s64 = ctx.r11.s64 + -14872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8064"))) PPC_WEAK_FUNC(sub_83BB8064);
PPC_FUNC_IMPL(__imp__sub_83BB8064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8068"))) PPC_WEAK_FUNC(sub_83BB8068);
PPC_FUNC_IMPL(__imp__sub_83BB8068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,6408
	ctx.r3.s64 = ctx.r11.s64 + 6408;
	// bl 0x83523120
	ctx.lr = 0x83BB8080;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-14864
	ctx.r3.s64 = ctx.r10.s64 + -14864;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB808C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB809C"))) PPC_WEAK_FUNC(sub_83BB809C);
PPC_FUNC_IMPL(__imp__sub_83BB809C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB80A0"))) PPC_WEAK_FUNC(sub_83BB80A0);
PPC_FUNC_IMPL(__imp__sub_83BB80A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,6424
	ctx.r7.s64 = ctx.r8.s64 + 6424;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,6424(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6424);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,6424(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6424, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB80C8"))) PPC_WEAK_FUNC(sub_83BB80C8);
PPC_FUNC_IMPL(__imp__sub_83BB80C8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-14276
	ctx.r6.s64 = ctx.r7.s64 + -14276;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-14348(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -14348);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,6424(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6424);
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
	// std r9,-14276(r7)
	PPC_STORE_U64(ctx.r7.u32 + -14276, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB8110"))) PPC_WEAK_FUNC(sub_83BB8110);
PPC_FUNC_IMPL(__imp__sub_83BB8110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14848
	ctx.r3.s64 = ctx.r11.s64 + -14848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB811C"))) PPC_WEAK_FUNC(sub_83BB811C);
PPC_FUNC_IMPL(__imp__sub_83BB811C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8120"))) PPC_WEAK_FUNC(sub_83BB8120);
PPC_FUNC_IMPL(__imp__sub_83BB8120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,6432
	ctx.r3.s64 = ctx.r11.s64 + 6432;
	// bl 0x8259af80
	ctx.lr = 0x83BB8138;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-14832
	ctx.r3.s64 = ctx.r10.s64 + -14832;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB8144;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB8154"))) PPC_WEAK_FUNC(sub_83BB8154);
PPC_FUNC_IMPL(__imp__sub_83BB8154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8158"))) PPC_WEAK_FUNC(sub_83BB8158);
PPC_FUNC_IMPL(__imp__sub_83BB8158) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,6412
	ctx.r11.s64 = ctx.r8.s64 + 6412;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-14300(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14300);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-14840
	ctx.r3.s64 = ctx.r6.s64 + -14840;
	// stw r10,6412(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6412, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8188"))) PPC_WEAK_FUNC(sub_83BB8188);
PPC_FUNC_IMPL(__imp__sub_83BB8188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14824
	ctx.r3.s64 = ctx.r11.s64 + -14824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8194"))) PPC_WEAK_FUNC(sub_83BB8194);
PPC_FUNC_IMPL(__imp__sub_83BB8194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8198"))) PPC_WEAK_FUNC(sub_83BB8198);
PPC_FUNC_IMPL(__imp__sub_83BB8198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14816
	ctx.r3.s64 = ctx.r11.s64 + -14816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB81A4"))) PPC_WEAK_FUNC(sub_83BB81A4);
PPC_FUNC_IMPL(__imp__sub_83BB81A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB81A8"))) PPC_WEAK_FUNC(sub_83BB81A8);
PPC_FUNC_IMPL(__imp__sub_83BB81A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14808
	ctx.r3.s64 = ctx.r11.s64 + -14808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB81B4"))) PPC_WEAK_FUNC(sub_83BB81B4);
PPC_FUNC_IMPL(__imp__sub_83BB81B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB81B8"))) PPC_WEAK_FUNC(sub_83BB81B8);
PPC_FUNC_IMPL(__imp__sub_83BB81B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14800
	ctx.r3.s64 = ctx.r11.s64 + -14800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB81C4"))) PPC_WEAK_FUNC(sub_83BB81C4);
PPC_FUNC_IMPL(__imp__sub_83BB81C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB81C8"))) PPC_WEAK_FUNC(sub_83BB81C8);
PPC_FUNC_IMPL(__imp__sub_83BB81C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14792
	ctx.r3.s64 = ctx.r11.s64 + -14792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB81D4"))) PPC_WEAK_FUNC(sub_83BB81D4);
PPC_FUNC_IMPL(__imp__sub_83BB81D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB81D8"))) PPC_WEAK_FUNC(sub_83BB81D8);
PPC_FUNC_IMPL(__imp__sub_83BB81D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14784
	ctx.r3.s64 = ctx.r11.s64 + -14784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB81E4"))) PPC_WEAK_FUNC(sub_83BB81E4);
PPC_FUNC_IMPL(__imp__sub_83BB81E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB81E8"))) PPC_WEAK_FUNC(sub_83BB81E8);
PPC_FUNC_IMPL(__imp__sub_83BB81E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14776
	ctx.r3.s64 = ctx.r11.s64 + -14776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB81F4"))) PPC_WEAK_FUNC(sub_83BB81F4);
PPC_FUNC_IMPL(__imp__sub_83BB81F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB81F8"))) PPC_WEAK_FUNC(sub_83BB81F8);
PPC_FUNC_IMPL(__imp__sub_83BB81F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14768
	ctx.r3.s64 = ctx.r11.s64 + -14768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8204"))) PPC_WEAK_FUNC(sub_83BB8204);
PPC_FUNC_IMPL(__imp__sub_83BB8204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8208"))) PPC_WEAK_FUNC(sub_83BB8208);
PPC_FUNC_IMPL(__imp__sub_83BB8208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14760
	ctx.r3.s64 = ctx.r11.s64 + -14760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8214"))) PPC_WEAK_FUNC(sub_83BB8214);
PPC_FUNC_IMPL(__imp__sub_83BB8214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8218"))) PPC_WEAK_FUNC(sub_83BB8218);
PPC_FUNC_IMPL(__imp__sub_83BB8218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14752
	ctx.r3.s64 = ctx.r11.s64 + -14752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8224"))) PPC_WEAK_FUNC(sub_83BB8224);
PPC_FUNC_IMPL(__imp__sub_83BB8224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8228"))) PPC_WEAK_FUNC(sub_83BB8228);
PPC_FUNC_IMPL(__imp__sub_83BB8228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14744
	ctx.r3.s64 = ctx.r11.s64 + -14744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8234"))) PPC_WEAK_FUNC(sub_83BB8234);
PPC_FUNC_IMPL(__imp__sub_83BB8234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8238"))) PPC_WEAK_FUNC(sub_83BB8238);
PPC_FUNC_IMPL(__imp__sub_83BB8238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14736
	ctx.r3.s64 = ctx.r11.s64 + -14736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8244"))) PPC_WEAK_FUNC(sub_83BB8244);
PPC_FUNC_IMPL(__imp__sub_83BB8244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8248"))) PPC_WEAK_FUNC(sub_83BB8248);
PPC_FUNC_IMPL(__imp__sub_83BB8248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,6776
	ctx.r3.s64 = ctx.r11.s64 + 6776;
	// bl 0x83523120
	ctx.lr = 0x83BB8260;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-14728
	ctx.r3.s64 = ctx.r10.s64 + -14728;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB826C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB827C"))) PPC_WEAK_FUNC(sub_83BB827C);
PPC_FUNC_IMPL(__imp__sub_83BB827C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8280"))) PPC_WEAK_FUNC(sub_83BB8280);
PPC_FUNC_IMPL(__imp__sub_83BB8280) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,6792
	ctx.r7.s64 = ctx.r8.s64 + 6792;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,6792(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6792);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,6792(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6792, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB82A8"))) PPC_WEAK_FUNC(sub_83BB82A8);
PPC_FUNC_IMPL(__imp__sub_83BB82A8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-14140
	ctx.r6.s64 = ctx.r7.s64 + -14140;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-14212(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -14212);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,6792(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6792);
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
	// std r9,-14140(r7)
	PPC_STORE_U64(ctx.r7.u32 + -14140, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB82F0"))) PPC_WEAK_FUNC(sub_83BB82F0);
PPC_FUNC_IMPL(__imp__sub_83BB82F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14712
	ctx.r3.s64 = ctx.r11.s64 + -14712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB82FC"))) PPC_WEAK_FUNC(sub_83BB82FC);
PPC_FUNC_IMPL(__imp__sub_83BB82FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8300"))) PPC_WEAK_FUNC(sub_83BB8300);
PPC_FUNC_IMPL(__imp__sub_83BB8300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,6800
	ctx.r3.s64 = ctx.r11.s64 + 6800;
	// bl 0x8259af80
	ctx.lr = 0x83BB8318;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-14696
	ctx.r3.s64 = ctx.r10.s64 + -14696;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB8324;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB8334"))) PPC_WEAK_FUNC(sub_83BB8334);
PPC_FUNC_IMPL(__imp__sub_83BB8334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8338"))) PPC_WEAK_FUNC(sub_83BB8338);
PPC_FUNC_IMPL(__imp__sub_83BB8338) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,6780
	ctx.r11.s64 = ctx.r8.s64 + 6780;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-14164(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14164);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-14704
	ctx.r3.s64 = ctx.r6.s64 + -14704;
	// stw r10,6780(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6780, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8368"))) PPC_WEAK_FUNC(sub_83BB8368);
PPC_FUNC_IMPL(__imp__sub_83BB8368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14688
	ctx.r3.s64 = ctx.r11.s64 + -14688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8374"))) PPC_WEAK_FUNC(sub_83BB8374);
PPC_FUNC_IMPL(__imp__sub_83BB8374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8378"))) PPC_WEAK_FUNC(sub_83BB8378);
PPC_FUNC_IMPL(__imp__sub_83BB8378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14680
	ctx.r3.s64 = ctx.r11.s64 + -14680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8384"))) PPC_WEAK_FUNC(sub_83BB8384);
PPC_FUNC_IMPL(__imp__sub_83BB8384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8388"))) PPC_WEAK_FUNC(sub_83BB8388);
PPC_FUNC_IMPL(__imp__sub_83BB8388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14672
	ctx.r3.s64 = ctx.r11.s64 + -14672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8394"))) PPC_WEAK_FUNC(sub_83BB8394);
PPC_FUNC_IMPL(__imp__sub_83BB8394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8398"))) PPC_WEAK_FUNC(sub_83BB8398);
PPC_FUNC_IMPL(__imp__sub_83BB8398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14664
	ctx.r3.s64 = ctx.r11.s64 + -14664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB83A4"))) PPC_WEAK_FUNC(sub_83BB83A4);
PPC_FUNC_IMPL(__imp__sub_83BB83A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB83A8"))) PPC_WEAK_FUNC(sub_83BB83A8);
PPC_FUNC_IMPL(__imp__sub_83BB83A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14656
	ctx.r3.s64 = ctx.r11.s64 + -14656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB83B4"))) PPC_WEAK_FUNC(sub_83BB83B4);
PPC_FUNC_IMPL(__imp__sub_83BB83B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB83B8"))) PPC_WEAK_FUNC(sub_83BB83B8);
PPC_FUNC_IMPL(__imp__sub_83BB83B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14648
	ctx.r3.s64 = ctx.r11.s64 + -14648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB83C4"))) PPC_WEAK_FUNC(sub_83BB83C4);
PPC_FUNC_IMPL(__imp__sub_83BB83C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB83C8"))) PPC_WEAK_FUNC(sub_83BB83C8);
PPC_FUNC_IMPL(__imp__sub_83BB83C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14640
	ctx.r3.s64 = ctx.r11.s64 + -14640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB83D4"))) PPC_WEAK_FUNC(sub_83BB83D4);
PPC_FUNC_IMPL(__imp__sub_83BB83D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB83D8"))) PPC_WEAK_FUNC(sub_83BB83D8);
PPC_FUNC_IMPL(__imp__sub_83BB83D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14632
	ctx.r3.s64 = ctx.r11.s64 + -14632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB83E4"))) PPC_WEAK_FUNC(sub_83BB83E4);
PPC_FUNC_IMPL(__imp__sub_83BB83E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB83E8"))) PPC_WEAK_FUNC(sub_83BB83E8);
PPC_FUNC_IMPL(__imp__sub_83BB83E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14624
	ctx.r3.s64 = ctx.r11.s64 + -14624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB83F4"))) PPC_WEAK_FUNC(sub_83BB83F4);
PPC_FUNC_IMPL(__imp__sub_83BB83F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB83F8"))) PPC_WEAK_FUNC(sub_83BB83F8);
PPC_FUNC_IMPL(__imp__sub_83BB83F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14616
	ctx.r3.s64 = ctx.r11.s64 + -14616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8404"))) PPC_WEAK_FUNC(sub_83BB8404);
PPC_FUNC_IMPL(__imp__sub_83BB8404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8408"))) PPC_WEAK_FUNC(sub_83BB8408);
PPC_FUNC_IMPL(__imp__sub_83BB8408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14608
	ctx.r3.s64 = ctx.r11.s64 + -14608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8414"))) PPC_WEAK_FUNC(sub_83BB8414);
PPC_FUNC_IMPL(__imp__sub_83BB8414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8418"))) PPC_WEAK_FUNC(sub_83BB8418);
PPC_FUNC_IMPL(__imp__sub_83BB8418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14600
	ctx.r3.s64 = ctx.r11.s64 + -14600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8424"))) PPC_WEAK_FUNC(sub_83BB8424);
PPC_FUNC_IMPL(__imp__sub_83BB8424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8428"))) PPC_WEAK_FUNC(sub_83BB8428);
PPC_FUNC_IMPL(__imp__sub_83BB8428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,7144
	ctx.r3.s64 = ctx.r11.s64 + 7144;
	// bl 0x83523120
	ctx.lr = 0x83BB8440;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-14592
	ctx.r3.s64 = ctx.r10.s64 + -14592;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB844C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB845C"))) PPC_WEAK_FUNC(sub_83BB845C);
PPC_FUNC_IMPL(__imp__sub_83BB845C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8460"))) PPC_WEAK_FUNC(sub_83BB8460);
PPC_FUNC_IMPL(__imp__sub_83BB8460) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,7160
	ctx.r7.s64 = ctx.r8.s64 + 7160;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,7160(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 7160);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,7160(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7160, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB8488"))) PPC_WEAK_FUNC(sub_83BB8488);
PPC_FUNC_IMPL(__imp__sub_83BB8488) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-13996
	ctx.r6.s64 = ctx.r7.s64 + -13996;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-14068(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -14068);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,7160(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7160);
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
	// std r9,-13996(r7)
	PPC_STORE_U64(ctx.r7.u32 + -13996, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB84D0"))) PPC_WEAK_FUNC(sub_83BB84D0);
PPC_FUNC_IMPL(__imp__sub_83BB84D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14576
	ctx.r3.s64 = ctx.r11.s64 + -14576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB84DC"))) PPC_WEAK_FUNC(sub_83BB84DC);
PPC_FUNC_IMPL(__imp__sub_83BB84DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB84E0"))) PPC_WEAK_FUNC(sub_83BB84E0);
PPC_FUNC_IMPL(__imp__sub_83BB84E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,7168
	ctx.r3.s64 = ctx.r11.s64 + 7168;
	// bl 0x8259af80
	ctx.lr = 0x83BB84F8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-14560
	ctx.r3.s64 = ctx.r10.s64 + -14560;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB8504;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB8514"))) PPC_WEAK_FUNC(sub_83BB8514);
PPC_FUNC_IMPL(__imp__sub_83BB8514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8518"))) PPC_WEAK_FUNC(sub_83BB8518);
PPC_FUNC_IMPL(__imp__sub_83BB8518) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,7148
	ctx.r11.s64 = ctx.r8.s64 + 7148;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-14020(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14020);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-14568
	ctx.r3.s64 = ctx.r6.s64 + -14568;
	// stw r10,7148(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7148, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8548"))) PPC_WEAK_FUNC(sub_83BB8548);
PPC_FUNC_IMPL(__imp__sub_83BB8548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14552
	ctx.r3.s64 = ctx.r11.s64 + -14552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8554"))) PPC_WEAK_FUNC(sub_83BB8554);
PPC_FUNC_IMPL(__imp__sub_83BB8554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8558"))) PPC_WEAK_FUNC(sub_83BB8558);
PPC_FUNC_IMPL(__imp__sub_83BB8558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14544
	ctx.r3.s64 = ctx.r11.s64 + -14544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8564"))) PPC_WEAK_FUNC(sub_83BB8564);
PPC_FUNC_IMPL(__imp__sub_83BB8564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8568"))) PPC_WEAK_FUNC(sub_83BB8568);
PPC_FUNC_IMPL(__imp__sub_83BB8568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14536
	ctx.r3.s64 = ctx.r11.s64 + -14536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8574"))) PPC_WEAK_FUNC(sub_83BB8574);
PPC_FUNC_IMPL(__imp__sub_83BB8574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8578"))) PPC_WEAK_FUNC(sub_83BB8578);
PPC_FUNC_IMPL(__imp__sub_83BB8578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14528
	ctx.r3.s64 = ctx.r11.s64 + -14528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8584"))) PPC_WEAK_FUNC(sub_83BB8584);
PPC_FUNC_IMPL(__imp__sub_83BB8584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8588"))) PPC_WEAK_FUNC(sub_83BB8588);
PPC_FUNC_IMPL(__imp__sub_83BB8588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14520
	ctx.r3.s64 = ctx.r11.s64 + -14520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8594"))) PPC_WEAK_FUNC(sub_83BB8594);
PPC_FUNC_IMPL(__imp__sub_83BB8594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8598"))) PPC_WEAK_FUNC(sub_83BB8598);
PPC_FUNC_IMPL(__imp__sub_83BB8598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14512
	ctx.r3.s64 = ctx.r11.s64 + -14512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB85A4"))) PPC_WEAK_FUNC(sub_83BB85A4);
PPC_FUNC_IMPL(__imp__sub_83BB85A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB85A8"))) PPC_WEAK_FUNC(sub_83BB85A8);
PPC_FUNC_IMPL(__imp__sub_83BB85A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14504
	ctx.r3.s64 = ctx.r11.s64 + -14504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB85B4"))) PPC_WEAK_FUNC(sub_83BB85B4);
PPC_FUNC_IMPL(__imp__sub_83BB85B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB85B8"))) PPC_WEAK_FUNC(sub_83BB85B8);
PPC_FUNC_IMPL(__imp__sub_83BB85B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14496
	ctx.r3.s64 = ctx.r11.s64 + -14496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB85C4"))) PPC_WEAK_FUNC(sub_83BB85C4);
PPC_FUNC_IMPL(__imp__sub_83BB85C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB85C8"))) PPC_WEAK_FUNC(sub_83BB85C8);
PPC_FUNC_IMPL(__imp__sub_83BB85C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14488
	ctx.r3.s64 = ctx.r11.s64 + -14488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB85D4"))) PPC_WEAK_FUNC(sub_83BB85D4);
PPC_FUNC_IMPL(__imp__sub_83BB85D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB85D8"))) PPC_WEAK_FUNC(sub_83BB85D8);
PPC_FUNC_IMPL(__imp__sub_83BB85D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14480
	ctx.r3.s64 = ctx.r11.s64 + -14480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB85E4"))) PPC_WEAK_FUNC(sub_83BB85E4);
PPC_FUNC_IMPL(__imp__sub_83BB85E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB85E8"))) PPC_WEAK_FUNC(sub_83BB85E8);
PPC_FUNC_IMPL(__imp__sub_83BB85E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14472
	ctx.r3.s64 = ctx.r11.s64 + -14472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB85F4"))) PPC_WEAK_FUNC(sub_83BB85F4);
PPC_FUNC_IMPL(__imp__sub_83BB85F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB85F8"))) PPC_WEAK_FUNC(sub_83BB85F8);
PPC_FUNC_IMPL(__imp__sub_83BB85F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14464
	ctx.r3.s64 = ctx.r11.s64 + -14464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8604"))) PPC_WEAK_FUNC(sub_83BB8604);
PPC_FUNC_IMPL(__imp__sub_83BB8604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8608"))) PPC_WEAK_FUNC(sub_83BB8608);
PPC_FUNC_IMPL(__imp__sub_83BB8608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,7512
	ctx.r3.s64 = ctx.r11.s64 + 7512;
	// bl 0x83523120
	ctx.lr = 0x83BB8620;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-14456
	ctx.r3.s64 = ctx.r10.s64 + -14456;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB862C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB863C"))) PPC_WEAK_FUNC(sub_83BB863C);
PPC_FUNC_IMPL(__imp__sub_83BB863C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8640"))) PPC_WEAK_FUNC(sub_83BB8640);
PPC_FUNC_IMPL(__imp__sub_83BB8640) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,7528
	ctx.r7.s64 = ctx.r8.s64 + 7528;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,7528(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 7528);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,7528(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7528, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB8668"))) PPC_WEAK_FUNC(sub_83BB8668);
PPC_FUNC_IMPL(__imp__sub_83BB8668) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-13860
	ctx.r6.s64 = ctx.r7.s64 + -13860;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-13932(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -13932);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,7528(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7528);
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
	// std r9,-13860(r7)
	PPC_STORE_U64(ctx.r7.u32 + -13860, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB86B0"))) PPC_WEAK_FUNC(sub_83BB86B0);
PPC_FUNC_IMPL(__imp__sub_83BB86B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14440
	ctx.r3.s64 = ctx.r11.s64 + -14440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB86BC"))) PPC_WEAK_FUNC(sub_83BB86BC);
PPC_FUNC_IMPL(__imp__sub_83BB86BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB86C0"))) PPC_WEAK_FUNC(sub_83BB86C0);
PPC_FUNC_IMPL(__imp__sub_83BB86C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,7536
	ctx.r3.s64 = ctx.r11.s64 + 7536;
	// bl 0x8259af80
	ctx.lr = 0x83BB86D8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-14424
	ctx.r3.s64 = ctx.r10.s64 + -14424;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB86E4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB86F4"))) PPC_WEAK_FUNC(sub_83BB86F4);
PPC_FUNC_IMPL(__imp__sub_83BB86F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB86F8"))) PPC_WEAK_FUNC(sub_83BB86F8);
PPC_FUNC_IMPL(__imp__sub_83BB86F8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,7516
	ctx.r11.s64 = ctx.r8.s64 + 7516;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-13884(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13884);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-14432
	ctx.r3.s64 = ctx.r6.s64 + -14432;
	// stw r10,7516(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7516, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8728"))) PPC_WEAK_FUNC(sub_83BB8728);
PPC_FUNC_IMPL(__imp__sub_83BB8728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14416
	ctx.r3.s64 = ctx.r11.s64 + -14416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8734"))) PPC_WEAK_FUNC(sub_83BB8734);
PPC_FUNC_IMPL(__imp__sub_83BB8734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8738"))) PPC_WEAK_FUNC(sub_83BB8738);
PPC_FUNC_IMPL(__imp__sub_83BB8738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14408
	ctx.r3.s64 = ctx.r11.s64 + -14408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8744"))) PPC_WEAK_FUNC(sub_83BB8744);
PPC_FUNC_IMPL(__imp__sub_83BB8744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8748"))) PPC_WEAK_FUNC(sub_83BB8748);
PPC_FUNC_IMPL(__imp__sub_83BB8748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14400
	ctx.r3.s64 = ctx.r11.s64 + -14400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8754"))) PPC_WEAK_FUNC(sub_83BB8754);
PPC_FUNC_IMPL(__imp__sub_83BB8754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8758"))) PPC_WEAK_FUNC(sub_83BB8758);
PPC_FUNC_IMPL(__imp__sub_83BB8758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14392
	ctx.r3.s64 = ctx.r11.s64 + -14392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8764"))) PPC_WEAK_FUNC(sub_83BB8764);
PPC_FUNC_IMPL(__imp__sub_83BB8764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8768"))) PPC_WEAK_FUNC(sub_83BB8768);
PPC_FUNC_IMPL(__imp__sub_83BB8768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14384
	ctx.r3.s64 = ctx.r11.s64 + -14384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8774"))) PPC_WEAK_FUNC(sub_83BB8774);
PPC_FUNC_IMPL(__imp__sub_83BB8774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8778"))) PPC_WEAK_FUNC(sub_83BB8778);
PPC_FUNC_IMPL(__imp__sub_83BB8778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14376
	ctx.r3.s64 = ctx.r11.s64 + -14376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8784"))) PPC_WEAK_FUNC(sub_83BB8784);
PPC_FUNC_IMPL(__imp__sub_83BB8784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8788"))) PPC_WEAK_FUNC(sub_83BB8788);
PPC_FUNC_IMPL(__imp__sub_83BB8788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14368
	ctx.r3.s64 = ctx.r11.s64 + -14368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8794"))) PPC_WEAK_FUNC(sub_83BB8794);
PPC_FUNC_IMPL(__imp__sub_83BB8794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8798"))) PPC_WEAK_FUNC(sub_83BB8798);
PPC_FUNC_IMPL(__imp__sub_83BB8798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14360
	ctx.r3.s64 = ctx.r11.s64 + -14360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB87A4"))) PPC_WEAK_FUNC(sub_83BB87A4);
PPC_FUNC_IMPL(__imp__sub_83BB87A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB87A8"))) PPC_WEAK_FUNC(sub_83BB87A8);
PPC_FUNC_IMPL(__imp__sub_83BB87A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14352
	ctx.r3.s64 = ctx.r11.s64 + -14352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB87B4"))) PPC_WEAK_FUNC(sub_83BB87B4);
PPC_FUNC_IMPL(__imp__sub_83BB87B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB87B8"))) PPC_WEAK_FUNC(sub_83BB87B8);
PPC_FUNC_IMPL(__imp__sub_83BB87B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14344
	ctx.r3.s64 = ctx.r11.s64 + -14344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB87C4"))) PPC_WEAK_FUNC(sub_83BB87C4);
PPC_FUNC_IMPL(__imp__sub_83BB87C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB87C8"))) PPC_WEAK_FUNC(sub_83BB87C8);
PPC_FUNC_IMPL(__imp__sub_83BB87C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14336
	ctx.r3.s64 = ctx.r11.s64 + -14336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB87D4"))) PPC_WEAK_FUNC(sub_83BB87D4);
PPC_FUNC_IMPL(__imp__sub_83BB87D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB87D8"))) PPC_WEAK_FUNC(sub_83BB87D8);
PPC_FUNC_IMPL(__imp__sub_83BB87D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14328
	ctx.r3.s64 = ctx.r11.s64 + -14328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB87E4"))) PPC_WEAK_FUNC(sub_83BB87E4);
PPC_FUNC_IMPL(__imp__sub_83BB87E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB87E8"))) PPC_WEAK_FUNC(sub_83BB87E8);
PPC_FUNC_IMPL(__imp__sub_83BB87E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,7880
	ctx.r3.s64 = ctx.r11.s64 + 7880;
	// bl 0x83523120
	ctx.lr = 0x83BB8800;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-14320
	ctx.r3.s64 = ctx.r10.s64 + -14320;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB880C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB881C"))) PPC_WEAK_FUNC(sub_83BB881C);
PPC_FUNC_IMPL(__imp__sub_83BB881C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8820"))) PPC_WEAK_FUNC(sub_83BB8820);
PPC_FUNC_IMPL(__imp__sub_83BB8820) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,7896
	ctx.r7.s64 = ctx.r8.s64 + 7896;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,7896(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 7896);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,7896(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7896, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB8848"))) PPC_WEAK_FUNC(sub_83BB8848);
PPC_FUNC_IMPL(__imp__sub_83BB8848) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-13708
	ctx.r6.s64 = ctx.r7.s64 + -13708;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-13780(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -13780);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,7896(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7896);
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
	// std r9,-13708(r7)
	PPC_STORE_U64(ctx.r7.u32 + -13708, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB8890"))) PPC_WEAK_FUNC(sub_83BB8890);
PPC_FUNC_IMPL(__imp__sub_83BB8890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14304
	ctx.r3.s64 = ctx.r11.s64 + -14304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB889C"))) PPC_WEAK_FUNC(sub_83BB889C);
PPC_FUNC_IMPL(__imp__sub_83BB889C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB88A0"))) PPC_WEAK_FUNC(sub_83BB88A0);
PPC_FUNC_IMPL(__imp__sub_83BB88A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,7904
	ctx.r3.s64 = ctx.r11.s64 + 7904;
	// bl 0x8259af80
	ctx.lr = 0x83BB88B8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-14288
	ctx.r3.s64 = ctx.r10.s64 + -14288;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB88C4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB88D4"))) PPC_WEAK_FUNC(sub_83BB88D4);
PPC_FUNC_IMPL(__imp__sub_83BB88D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB88D8"))) PPC_WEAK_FUNC(sub_83BB88D8);
PPC_FUNC_IMPL(__imp__sub_83BB88D8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,7884
	ctx.r11.s64 = ctx.r8.s64 + 7884;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-13732(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13732);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-14296
	ctx.r3.s64 = ctx.r6.s64 + -14296;
	// stw r10,7884(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7884, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8908"))) PPC_WEAK_FUNC(sub_83BB8908);
PPC_FUNC_IMPL(__imp__sub_83BB8908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14280
	ctx.r3.s64 = ctx.r11.s64 + -14280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8914"))) PPC_WEAK_FUNC(sub_83BB8914);
PPC_FUNC_IMPL(__imp__sub_83BB8914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8918"))) PPC_WEAK_FUNC(sub_83BB8918);
PPC_FUNC_IMPL(__imp__sub_83BB8918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14272
	ctx.r3.s64 = ctx.r11.s64 + -14272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8924"))) PPC_WEAK_FUNC(sub_83BB8924);
PPC_FUNC_IMPL(__imp__sub_83BB8924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8928"))) PPC_WEAK_FUNC(sub_83BB8928);
PPC_FUNC_IMPL(__imp__sub_83BB8928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14264
	ctx.r3.s64 = ctx.r11.s64 + -14264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8934"))) PPC_WEAK_FUNC(sub_83BB8934);
PPC_FUNC_IMPL(__imp__sub_83BB8934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8938"))) PPC_WEAK_FUNC(sub_83BB8938);
PPC_FUNC_IMPL(__imp__sub_83BB8938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14256
	ctx.r3.s64 = ctx.r11.s64 + -14256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8944"))) PPC_WEAK_FUNC(sub_83BB8944);
PPC_FUNC_IMPL(__imp__sub_83BB8944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8948"))) PPC_WEAK_FUNC(sub_83BB8948);
PPC_FUNC_IMPL(__imp__sub_83BB8948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14248
	ctx.r3.s64 = ctx.r11.s64 + -14248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8954"))) PPC_WEAK_FUNC(sub_83BB8954);
PPC_FUNC_IMPL(__imp__sub_83BB8954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8958"))) PPC_WEAK_FUNC(sub_83BB8958);
PPC_FUNC_IMPL(__imp__sub_83BB8958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14240
	ctx.r3.s64 = ctx.r11.s64 + -14240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8964"))) PPC_WEAK_FUNC(sub_83BB8964);
PPC_FUNC_IMPL(__imp__sub_83BB8964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8968"))) PPC_WEAK_FUNC(sub_83BB8968);
PPC_FUNC_IMPL(__imp__sub_83BB8968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14232
	ctx.r3.s64 = ctx.r11.s64 + -14232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8974"))) PPC_WEAK_FUNC(sub_83BB8974);
PPC_FUNC_IMPL(__imp__sub_83BB8974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8978"))) PPC_WEAK_FUNC(sub_83BB8978);
PPC_FUNC_IMPL(__imp__sub_83BB8978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14224
	ctx.r3.s64 = ctx.r11.s64 + -14224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8984"))) PPC_WEAK_FUNC(sub_83BB8984);
PPC_FUNC_IMPL(__imp__sub_83BB8984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8988"))) PPC_WEAK_FUNC(sub_83BB8988);
PPC_FUNC_IMPL(__imp__sub_83BB8988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14216
	ctx.r3.s64 = ctx.r11.s64 + -14216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8994"))) PPC_WEAK_FUNC(sub_83BB8994);
PPC_FUNC_IMPL(__imp__sub_83BB8994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8998"))) PPC_WEAK_FUNC(sub_83BB8998);
PPC_FUNC_IMPL(__imp__sub_83BB8998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14208
	ctx.r3.s64 = ctx.r11.s64 + -14208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB89A4"))) PPC_WEAK_FUNC(sub_83BB89A4);
PPC_FUNC_IMPL(__imp__sub_83BB89A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB89A8"))) PPC_WEAK_FUNC(sub_83BB89A8);
PPC_FUNC_IMPL(__imp__sub_83BB89A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14200
	ctx.r3.s64 = ctx.r11.s64 + -14200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB89B4"))) PPC_WEAK_FUNC(sub_83BB89B4);
PPC_FUNC_IMPL(__imp__sub_83BB89B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB89B8"))) PPC_WEAK_FUNC(sub_83BB89B8);
PPC_FUNC_IMPL(__imp__sub_83BB89B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14192
	ctx.r3.s64 = ctx.r11.s64 + -14192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB89C4"))) PPC_WEAK_FUNC(sub_83BB89C4);
PPC_FUNC_IMPL(__imp__sub_83BB89C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB89C8"))) PPC_WEAK_FUNC(sub_83BB89C8);
PPC_FUNC_IMPL(__imp__sub_83BB89C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,8248
	ctx.r3.s64 = ctx.r11.s64 + 8248;
	// bl 0x83523120
	ctx.lr = 0x83BB89E0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-14184
	ctx.r3.s64 = ctx.r10.s64 + -14184;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB89EC;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB89FC"))) PPC_WEAK_FUNC(sub_83BB89FC);
PPC_FUNC_IMPL(__imp__sub_83BB89FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8A00"))) PPC_WEAK_FUNC(sub_83BB8A00);
PPC_FUNC_IMPL(__imp__sub_83BB8A00) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,8264
	ctx.r7.s64 = ctx.r8.s64 + 8264;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,8264(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8264);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,8264(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8264, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB8A28"))) PPC_WEAK_FUNC(sub_83BB8A28);
PPC_FUNC_IMPL(__imp__sub_83BB8A28) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-13556
	ctx.r6.s64 = ctx.r7.s64 + -13556;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-13628(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -13628);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,8264(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8264);
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
	// std r9,-13556(r7)
	PPC_STORE_U64(ctx.r7.u32 + -13556, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB8A70"))) PPC_WEAK_FUNC(sub_83BB8A70);
PPC_FUNC_IMPL(__imp__sub_83BB8A70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14168
	ctx.r3.s64 = ctx.r11.s64 + -14168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8A7C"))) PPC_WEAK_FUNC(sub_83BB8A7C);
PPC_FUNC_IMPL(__imp__sub_83BB8A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8A80"))) PPC_WEAK_FUNC(sub_83BB8A80);
PPC_FUNC_IMPL(__imp__sub_83BB8A80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,8272
	ctx.r3.s64 = ctx.r11.s64 + 8272;
	// bl 0x8259af80
	ctx.lr = 0x83BB8A98;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-14152
	ctx.r3.s64 = ctx.r10.s64 + -14152;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB8AA4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB8AB4"))) PPC_WEAK_FUNC(sub_83BB8AB4);
PPC_FUNC_IMPL(__imp__sub_83BB8AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8AB8"))) PPC_WEAK_FUNC(sub_83BB8AB8);
PPC_FUNC_IMPL(__imp__sub_83BB8AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,8252
	ctx.r11.s64 = ctx.r8.s64 + 8252;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-13580(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13580);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-14160
	ctx.r3.s64 = ctx.r6.s64 + -14160;
	// stw r10,8252(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8252, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8AE8"))) PPC_WEAK_FUNC(sub_83BB8AE8);
PPC_FUNC_IMPL(__imp__sub_83BB8AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14144
	ctx.r3.s64 = ctx.r11.s64 + -14144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8AF4"))) PPC_WEAK_FUNC(sub_83BB8AF4);
PPC_FUNC_IMPL(__imp__sub_83BB8AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8AF8"))) PPC_WEAK_FUNC(sub_83BB8AF8);
PPC_FUNC_IMPL(__imp__sub_83BB8AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14136
	ctx.r3.s64 = ctx.r11.s64 + -14136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8B04"))) PPC_WEAK_FUNC(sub_83BB8B04);
PPC_FUNC_IMPL(__imp__sub_83BB8B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8B08"))) PPC_WEAK_FUNC(sub_83BB8B08);
PPC_FUNC_IMPL(__imp__sub_83BB8B08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14128
	ctx.r3.s64 = ctx.r11.s64 + -14128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8B14"))) PPC_WEAK_FUNC(sub_83BB8B14);
PPC_FUNC_IMPL(__imp__sub_83BB8B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8B18"))) PPC_WEAK_FUNC(sub_83BB8B18);
PPC_FUNC_IMPL(__imp__sub_83BB8B18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14120
	ctx.r3.s64 = ctx.r11.s64 + -14120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8B24"))) PPC_WEAK_FUNC(sub_83BB8B24);
PPC_FUNC_IMPL(__imp__sub_83BB8B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8B28"))) PPC_WEAK_FUNC(sub_83BB8B28);
PPC_FUNC_IMPL(__imp__sub_83BB8B28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14112
	ctx.r3.s64 = ctx.r11.s64 + -14112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8B34"))) PPC_WEAK_FUNC(sub_83BB8B34);
PPC_FUNC_IMPL(__imp__sub_83BB8B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8B38"))) PPC_WEAK_FUNC(sub_83BB8B38);
PPC_FUNC_IMPL(__imp__sub_83BB8B38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14104
	ctx.r3.s64 = ctx.r11.s64 + -14104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8B44"))) PPC_WEAK_FUNC(sub_83BB8B44);
PPC_FUNC_IMPL(__imp__sub_83BB8B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8B48"))) PPC_WEAK_FUNC(sub_83BB8B48);
PPC_FUNC_IMPL(__imp__sub_83BB8B48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14096
	ctx.r3.s64 = ctx.r11.s64 + -14096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8B54"))) PPC_WEAK_FUNC(sub_83BB8B54);
PPC_FUNC_IMPL(__imp__sub_83BB8B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8B58"))) PPC_WEAK_FUNC(sub_83BB8B58);
PPC_FUNC_IMPL(__imp__sub_83BB8B58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14088
	ctx.r3.s64 = ctx.r11.s64 + -14088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8B64"))) PPC_WEAK_FUNC(sub_83BB8B64);
PPC_FUNC_IMPL(__imp__sub_83BB8B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8B68"))) PPC_WEAK_FUNC(sub_83BB8B68);
PPC_FUNC_IMPL(__imp__sub_83BB8B68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14080
	ctx.r3.s64 = ctx.r11.s64 + -14080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8B74"))) PPC_WEAK_FUNC(sub_83BB8B74);
PPC_FUNC_IMPL(__imp__sub_83BB8B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8B78"))) PPC_WEAK_FUNC(sub_83BB8B78);
PPC_FUNC_IMPL(__imp__sub_83BB8B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14072
	ctx.r3.s64 = ctx.r11.s64 + -14072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8B84"))) PPC_WEAK_FUNC(sub_83BB8B84);
PPC_FUNC_IMPL(__imp__sub_83BB8B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8B88"))) PPC_WEAK_FUNC(sub_83BB8B88);
PPC_FUNC_IMPL(__imp__sub_83BB8B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14064
	ctx.r3.s64 = ctx.r11.s64 + -14064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8B94"))) PPC_WEAK_FUNC(sub_83BB8B94);
PPC_FUNC_IMPL(__imp__sub_83BB8B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8B98"))) PPC_WEAK_FUNC(sub_83BB8B98);
PPC_FUNC_IMPL(__imp__sub_83BB8B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14056
	ctx.r3.s64 = ctx.r11.s64 + -14056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8BA4"))) PPC_WEAK_FUNC(sub_83BB8BA4);
PPC_FUNC_IMPL(__imp__sub_83BB8BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8BA8"))) PPC_WEAK_FUNC(sub_83BB8BA8);
PPC_FUNC_IMPL(__imp__sub_83BB8BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,8616
	ctx.r3.s64 = ctx.r11.s64 + 8616;
	// bl 0x83523120
	ctx.lr = 0x83BB8BC0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-14048
	ctx.r3.s64 = ctx.r10.s64 + -14048;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB8BCC;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB8BDC"))) PPC_WEAK_FUNC(sub_83BB8BDC);
PPC_FUNC_IMPL(__imp__sub_83BB8BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8BE0"))) PPC_WEAK_FUNC(sub_83BB8BE0);
PPC_FUNC_IMPL(__imp__sub_83BB8BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,8632
	ctx.r7.s64 = ctx.r8.s64 + 8632;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,8632(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8632);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,8632(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8632, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB8C08"))) PPC_WEAK_FUNC(sub_83BB8C08);
PPC_FUNC_IMPL(__imp__sub_83BB8C08) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-13420
	ctx.r6.s64 = ctx.r7.s64 + -13420;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-13492(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -13492);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,8632(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8632);
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
	// std r9,-13420(r7)
	PPC_STORE_U64(ctx.r7.u32 + -13420, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB8C50"))) PPC_WEAK_FUNC(sub_83BB8C50);
PPC_FUNC_IMPL(__imp__sub_83BB8C50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14032
	ctx.r3.s64 = ctx.r11.s64 + -14032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8C5C"))) PPC_WEAK_FUNC(sub_83BB8C5C);
PPC_FUNC_IMPL(__imp__sub_83BB8C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8C60"))) PPC_WEAK_FUNC(sub_83BB8C60);
PPC_FUNC_IMPL(__imp__sub_83BB8C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r3,r11,8640
	ctx.r3.s64 = ctx.r11.s64 + 8640;
	// bl 0x8259af80
	ctx.lr = 0x83BB8C78;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-14016
	ctx.r3.s64 = ctx.r10.s64 + -14016;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB8C84;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB8C94"))) PPC_WEAK_FUNC(sub_83BB8C94);
PPC_FUNC_IMPL(__imp__sub_83BB8C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8C98"))) PPC_WEAK_FUNC(sub_83BB8C98);
PPC_FUNC_IMPL(__imp__sub_83BB8C98) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,8620
	ctx.r11.s64 = ctx.r8.s64 + 8620;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-13444(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13444);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-14024
	ctx.r3.s64 = ctx.r6.s64 + -14024;
	// stw r10,8620(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8620, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8CC8"))) PPC_WEAK_FUNC(sub_83BB8CC8);
PPC_FUNC_IMPL(__imp__sub_83BB8CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14008
	ctx.r3.s64 = ctx.r11.s64 + -14008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8CD4"))) PPC_WEAK_FUNC(sub_83BB8CD4);
PPC_FUNC_IMPL(__imp__sub_83BB8CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8CD8"))) PPC_WEAK_FUNC(sub_83BB8CD8);
PPC_FUNC_IMPL(__imp__sub_83BB8CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-14000
	ctx.r3.s64 = ctx.r11.s64 + -14000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8CE4"))) PPC_WEAK_FUNC(sub_83BB8CE4);
PPC_FUNC_IMPL(__imp__sub_83BB8CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8CE8"))) PPC_WEAK_FUNC(sub_83BB8CE8);
PPC_FUNC_IMPL(__imp__sub_83BB8CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13992
	ctx.r3.s64 = ctx.r11.s64 + -13992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8CF4"))) PPC_WEAK_FUNC(sub_83BB8CF4);
PPC_FUNC_IMPL(__imp__sub_83BB8CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8CF8"))) PPC_WEAK_FUNC(sub_83BB8CF8);
PPC_FUNC_IMPL(__imp__sub_83BB8CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13984
	ctx.r3.s64 = ctx.r11.s64 + -13984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8D04"))) PPC_WEAK_FUNC(sub_83BB8D04);
PPC_FUNC_IMPL(__imp__sub_83BB8D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8D08"))) PPC_WEAK_FUNC(sub_83BB8D08);
PPC_FUNC_IMPL(__imp__sub_83BB8D08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13976
	ctx.r3.s64 = ctx.r11.s64 + -13976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8D14"))) PPC_WEAK_FUNC(sub_83BB8D14);
PPC_FUNC_IMPL(__imp__sub_83BB8D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8D18"))) PPC_WEAK_FUNC(sub_83BB8D18);
PPC_FUNC_IMPL(__imp__sub_83BB8D18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13968
	ctx.r3.s64 = ctx.r11.s64 + -13968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8D24"))) PPC_WEAK_FUNC(sub_83BB8D24);
PPC_FUNC_IMPL(__imp__sub_83BB8D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8D28"))) PPC_WEAK_FUNC(sub_83BB8D28);
PPC_FUNC_IMPL(__imp__sub_83BB8D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13960
	ctx.r3.s64 = ctx.r11.s64 + -13960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8D34"))) PPC_WEAK_FUNC(sub_83BB8D34);
PPC_FUNC_IMPL(__imp__sub_83BB8D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8D38"))) PPC_WEAK_FUNC(sub_83BB8D38);
PPC_FUNC_IMPL(__imp__sub_83BB8D38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13952
	ctx.r3.s64 = ctx.r11.s64 + -13952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8D44"))) PPC_WEAK_FUNC(sub_83BB8D44);
PPC_FUNC_IMPL(__imp__sub_83BB8D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8D48"))) PPC_WEAK_FUNC(sub_83BB8D48);
PPC_FUNC_IMPL(__imp__sub_83BB8D48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13944
	ctx.r3.s64 = ctx.r11.s64 + -13944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8D54"))) PPC_WEAK_FUNC(sub_83BB8D54);
PPC_FUNC_IMPL(__imp__sub_83BB8D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

