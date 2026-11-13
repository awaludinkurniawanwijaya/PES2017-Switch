#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BB8D58"))) PPC_WEAK_FUNC(sub_83BB8D58);
PPC_FUNC_IMPL(__imp__sub_83BB8D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13936
	ctx.r3.s64 = ctx.r11.s64 + -13936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8D64"))) PPC_WEAK_FUNC(sub_83BB8D64);
PPC_FUNC_IMPL(__imp__sub_83BB8D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8D68"))) PPC_WEAK_FUNC(sub_83BB8D68);
PPC_FUNC_IMPL(__imp__sub_83BB8D68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13928
	ctx.r3.s64 = ctx.r11.s64 + -13928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8D74"))) PPC_WEAK_FUNC(sub_83BB8D74);
PPC_FUNC_IMPL(__imp__sub_83BB8D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8D78"))) PPC_WEAK_FUNC(sub_83BB8D78);
PPC_FUNC_IMPL(__imp__sub_83BB8D78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13920
	ctx.r3.s64 = ctx.r11.s64 + -13920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8D84"))) PPC_WEAK_FUNC(sub_83BB8D84);
PPC_FUNC_IMPL(__imp__sub_83BB8D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8D88"))) PPC_WEAK_FUNC(sub_83BB8D88);
PPC_FUNC_IMPL(__imp__sub_83BB8D88) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,8984
	ctx.r3.s64 = ctx.r11.s64 + 8984;
	// bl 0x83523120
	ctx.lr = 0x83BB8DA0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-13912
	ctx.r3.s64 = ctx.r10.s64 + -13912;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB8DAC;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB8DBC"))) PPC_WEAK_FUNC(sub_83BB8DBC);
PPC_FUNC_IMPL(__imp__sub_83BB8DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8DC0"))) PPC_WEAK_FUNC(sub_83BB8DC0);
PPC_FUNC_IMPL(__imp__sub_83BB8DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,9000
	ctx.r7.s64 = ctx.r8.s64 + 9000;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,9000(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 9000);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,9000(r8)
	PPC_STORE_U32(ctx.r8.u32 + 9000, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB8DE8"))) PPC_WEAK_FUNC(sub_83BB8DE8);
PPC_FUNC_IMPL(__imp__sub_83BB8DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-13284
	ctx.r6.s64 = ctx.r7.s64 + -13284;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-13356(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -13356);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,9000(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 9000);
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
	// std r9,-13284(r7)
	PPC_STORE_U64(ctx.r7.u32 + -13284, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB8E30"))) PPC_WEAK_FUNC(sub_83BB8E30);
PPC_FUNC_IMPL(__imp__sub_83BB8E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13896
	ctx.r3.s64 = ctx.r11.s64 + -13896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8E3C"))) PPC_WEAK_FUNC(sub_83BB8E3C);
PPC_FUNC_IMPL(__imp__sub_83BB8E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8E40"))) PPC_WEAK_FUNC(sub_83BB8E40);
PPC_FUNC_IMPL(__imp__sub_83BB8E40) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,9008
	ctx.r3.s64 = ctx.r11.s64 + 9008;
	// bl 0x8259af80
	ctx.lr = 0x83BB8E58;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-13880
	ctx.r3.s64 = ctx.r10.s64 + -13880;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB8E64;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB8E74"))) PPC_WEAK_FUNC(sub_83BB8E74);
PPC_FUNC_IMPL(__imp__sub_83BB8E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8E78"))) PPC_WEAK_FUNC(sub_83BB8E78);
PPC_FUNC_IMPL(__imp__sub_83BB8E78) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,8988
	ctx.r11.s64 = ctx.r8.s64 + 8988;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-13308(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13308);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-13888
	ctx.r3.s64 = ctx.r6.s64 + -13888;
	// stw r10,8988(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8988, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8EA8"))) PPC_WEAK_FUNC(sub_83BB8EA8);
PPC_FUNC_IMPL(__imp__sub_83BB8EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13872
	ctx.r3.s64 = ctx.r11.s64 + -13872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8EB4"))) PPC_WEAK_FUNC(sub_83BB8EB4);
PPC_FUNC_IMPL(__imp__sub_83BB8EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8EB8"))) PPC_WEAK_FUNC(sub_83BB8EB8);
PPC_FUNC_IMPL(__imp__sub_83BB8EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13864
	ctx.r3.s64 = ctx.r11.s64 + -13864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8EC4"))) PPC_WEAK_FUNC(sub_83BB8EC4);
PPC_FUNC_IMPL(__imp__sub_83BB8EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8EC8"))) PPC_WEAK_FUNC(sub_83BB8EC8);
PPC_FUNC_IMPL(__imp__sub_83BB8EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13856
	ctx.r3.s64 = ctx.r11.s64 + -13856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8ED4"))) PPC_WEAK_FUNC(sub_83BB8ED4);
PPC_FUNC_IMPL(__imp__sub_83BB8ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8ED8"))) PPC_WEAK_FUNC(sub_83BB8ED8);
PPC_FUNC_IMPL(__imp__sub_83BB8ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13848
	ctx.r3.s64 = ctx.r11.s64 + -13848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8EE4"))) PPC_WEAK_FUNC(sub_83BB8EE4);
PPC_FUNC_IMPL(__imp__sub_83BB8EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8EE8"))) PPC_WEAK_FUNC(sub_83BB8EE8);
PPC_FUNC_IMPL(__imp__sub_83BB8EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13840
	ctx.r3.s64 = ctx.r11.s64 + -13840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8EF4"))) PPC_WEAK_FUNC(sub_83BB8EF4);
PPC_FUNC_IMPL(__imp__sub_83BB8EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8EF8"))) PPC_WEAK_FUNC(sub_83BB8EF8);
PPC_FUNC_IMPL(__imp__sub_83BB8EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13832
	ctx.r3.s64 = ctx.r11.s64 + -13832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8F04"))) PPC_WEAK_FUNC(sub_83BB8F04);
PPC_FUNC_IMPL(__imp__sub_83BB8F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8F08"))) PPC_WEAK_FUNC(sub_83BB8F08);
PPC_FUNC_IMPL(__imp__sub_83BB8F08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13824
	ctx.r3.s64 = ctx.r11.s64 + -13824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8F14"))) PPC_WEAK_FUNC(sub_83BB8F14);
PPC_FUNC_IMPL(__imp__sub_83BB8F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8F18"))) PPC_WEAK_FUNC(sub_83BB8F18);
PPC_FUNC_IMPL(__imp__sub_83BB8F18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13816
	ctx.r3.s64 = ctx.r11.s64 + -13816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8F24"))) PPC_WEAK_FUNC(sub_83BB8F24);
PPC_FUNC_IMPL(__imp__sub_83BB8F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8F28"))) PPC_WEAK_FUNC(sub_83BB8F28);
PPC_FUNC_IMPL(__imp__sub_83BB8F28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13808
	ctx.r3.s64 = ctx.r11.s64 + -13808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8F34"))) PPC_WEAK_FUNC(sub_83BB8F34);
PPC_FUNC_IMPL(__imp__sub_83BB8F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8F38"))) PPC_WEAK_FUNC(sub_83BB8F38);
PPC_FUNC_IMPL(__imp__sub_83BB8F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13800
	ctx.r3.s64 = ctx.r11.s64 + -13800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8F44"))) PPC_WEAK_FUNC(sub_83BB8F44);
PPC_FUNC_IMPL(__imp__sub_83BB8F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8F48"))) PPC_WEAK_FUNC(sub_83BB8F48);
PPC_FUNC_IMPL(__imp__sub_83BB8F48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13792
	ctx.r3.s64 = ctx.r11.s64 + -13792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8F54"))) PPC_WEAK_FUNC(sub_83BB8F54);
PPC_FUNC_IMPL(__imp__sub_83BB8F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8F58"))) PPC_WEAK_FUNC(sub_83BB8F58);
PPC_FUNC_IMPL(__imp__sub_83BB8F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13784
	ctx.r3.s64 = ctx.r11.s64 + -13784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB8F64"))) PPC_WEAK_FUNC(sub_83BB8F64);
PPC_FUNC_IMPL(__imp__sub_83BB8F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8F68"))) PPC_WEAK_FUNC(sub_83BB8F68);
PPC_FUNC_IMPL(__imp__sub_83BB8F68) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,9352
	ctx.r3.s64 = ctx.r11.s64 + 9352;
	// bl 0x83523120
	ctx.lr = 0x83BB8F80;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-13776
	ctx.r3.s64 = ctx.r10.s64 + -13776;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB8F8C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB8F9C"))) PPC_WEAK_FUNC(sub_83BB8F9C);
PPC_FUNC_IMPL(__imp__sub_83BB8F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB8FA0"))) PPC_WEAK_FUNC(sub_83BB8FA0);
PPC_FUNC_IMPL(__imp__sub_83BB8FA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,9368
	ctx.r7.s64 = ctx.r8.s64 + 9368;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,9368(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 9368);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,9368(r8)
	PPC_STORE_U32(ctx.r8.u32 + 9368, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB8FC8"))) PPC_WEAK_FUNC(sub_83BB8FC8);
PPC_FUNC_IMPL(__imp__sub_83BB8FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-13120
	ctx.r6.s64 = ctx.r7.s64 + -13120;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-13192(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -13192);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,9368(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 9368);
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
	// std r9,-13120(r7)
	PPC_STORE_U64(ctx.r7.u32 + -13120, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB9010"))) PPC_WEAK_FUNC(sub_83BB9010);
PPC_FUNC_IMPL(__imp__sub_83BB9010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13760
	ctx.r3.s64 = ctx.r11.s64 + -13760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB901C"))) PPC_WEAK_FUNC(sub_83BB901C);
PPC_FUNC_IMPL(__imp__sub_83BB901C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9020"))) PPC_WEAK_FUNC(sub_83BB9020);
PPC_FUNC_IMPL(__imp__sub_83BB9020) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,9376
	ctx.r3.s64 = ctx.r11.s64 + 9376;
	// bl 0x8259af80
	ctx.lr = 0x83BB9038;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-13744
	ctx.r3.s64 = ctx.r10.s64 + -13744;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB9044;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB9054"))) PPC_WEAK_FUNC(sub_83BB9054);
PPC_FUNC_IMPL(__imp__sub_83BB9054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9058"))) PPC_WEAK_FUNC(sub_83BB9058);
PPC_FUNC_IMPL(__imp__sub_83BB9058) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,9356
	ctx.r11.s64 = ctx.r8.s64 + 9356;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-13144(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13144);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-13752
	ctx.r3.s64 = ctx.r6.s64 + -13752;
	// stw r10,9356(r8)
	PPC_STORE_U32(ctx.r8.u32 + 9356, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9088"))) PPC_WEAK_FUNC(sub_83BB9088);
PPC_FUNC_IMPL(__imp__sub_83BB9088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13736
	ctx.r3.s64 = ctx.r11.s64 + -13736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9094"))) PPC_WEAK_FUNC(sub_83BB9094);
PPC_FUNC_IMPL(__imp__sub_83BB9094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9098"))) PPC_WEAK_FUNC(sub_83BB9098);
PPC_FUNC_IMPL(__imp__sub_83BB9098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13728
	ctx.r3.s64 = ctx.r11.s64 + -13728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB90A4"))) PPC_WEAK_FUNC(sub_83BB90A4);
PPC_FUNC_IMPL(__imp__sub_83BB90A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB90A8"))) PPC_WEAK_FUNC(sub_83BB90A8);
PPC_FUNC_IMPL(__imp__sub_83BB90A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13720
	ctx.r3.s64 = ctx.r11.s64 + -13720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB90B4"))) PPC_WEAK_FUNC(sub_83BB90B4);
PPC_FUNC_IMPL(__imp__sub_83BB90B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB90B8"))) PPC_WEAK_FUNC(sub_83BB90B8);
PPC_FUNC_IMPL(__imp__sub_83BB90B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13712
	ctx.r3.s64 = ctx.r11.s64 + -13712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB90C4"))) PPC_WEAK_FUNC(sub_83BB90C4);
PPC_FUNC_IMPL(__imp__sub_83BB90C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB90C8"))) PPC_WEAK_FUNC(sub_83BB90C8);
PPC_FUNC_IMPL(__imp__sub_83BB90C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13704
	ctx.r3.s64 = ctx.r11.s64 + -13704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB90D4"))) PPC_WEAK_FUNC(sub_83BB90D4);
PPC_FUNC_IMPL(__imp__sub_83BB90D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB90D8"))) PPC_WEAK_FUNC(sub_83BB90D8);
PPC_FUNC_IMPL(__imp__sub_83BB90D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13696
	ctx.r3.s64 = ctx.r11.s64 + -13696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB90E4"))) PPC_WEAK_FUNC(sub_83BB90E4);
PPC_FUNC_IMPL(__imp__sub_83BB90E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB90E8"))) PPC_WEAK_FUNC(sub_83BB90E8);
PPC_FUNC_IMPL(__imp__sub_83BB90E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13688
	ctx.r3.s64 = ctx.r11.s64 + -13688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB90F4"))) PPC_WEAK_FUNC(sub_83BB90F4);
PPC_FUNC_IMPL(__imp__sub_83BB90F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB90F8"))) PPC_WEAK_FUNC(sub_83BB90F8);
PPC_FUNC_IMPL(__imp__sub_83BB90F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13680
	ctx.r3.s64 = ctx.r11.s64 + -13680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9104"))) PPC_WEAK_FUNC(sub_83BB9104);
PPC_FUNC_IMPL(__imp__sub_83BB9104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9108"))) PPC_WEAK_FUNC(sub_83BB9108);
PPC_FUNC_IMPL(__imp__sub_83BB9108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13672
	ctx.r3.s64 = ctx.r11.s64 + -13672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9114"))) PPC_WEAK_FUNC(sub_83BB9114);
PPC_FUNC_IMPL(__imp__sub_83BB9114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9118"))) PPC_WEAK_FUNC(sub_83BB9118);
PPC_FUNC_IMPL(__imp__sub_83BB9118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13664
	ctx.r3.s64 = ctx.r11.s64 + -13664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9124"))) PPC_WEAK_FUNC(sub_83BB9124);
PPC_FUNC_IMPL(__imp__sub_83BB9124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9128"))) PPC_WEAK_FUNC(sub_83BB9128);
PPC_FUNC_IMPL(__imp__sub_83BB9128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13656
	ctx.r3.s64 = ctx.r11.s64 + -13656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9134"))) PPC_WEAK_FUNC(sub_83BB9134);
PPC_FUNC_IMPL(__imp__sub_83BB9134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9138"))) PPC_WEAK_FUNC(sub_83BB9138);
PPC_FUNC_IMPL(__imp__sub_83BB9138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13648
	ctx.r3.s64 = ctx.r11.s64 + -13648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9144"))) PPC_WEAK_FUNC(sub_83BB9144);
PPC_FUNC_IMPL(__imp__sub_83BB9144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9148"))) PPC_WEAK_FUNC(sub_83BB9148);
PPC_FUNC_IMPL(__imp__sub_83BB9148) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,9720
	ctx.r3.s64 = ctx.r11.s64 + 9720;
	// bl 0x83523120
	ctx.lr = 0x83BB9160;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-13640
	ctx.r3.s64 = ctx.r10.s64 + -13640;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB916C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB917C"))) PPC_WEAK_FUNC(sub_83BB917C);
PPC_FUNC_IMPL(__imp__sub_83BB917C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9180"))) PPC_WEAK_FUNC(sub_83BB9180);
PPC_FUNC_IMPL(__imp__sub_83BB9180) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,9736
	ctx.r7.s64 = ctx.r8.s64 + 9736;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,9736(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 9736);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,9736(r8)
	PPC_STORE_U32(ctx.r8.u32 + 9736, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB91A8"))) PPC_WEAK_FUNC(sub_83BB91A8);
PPC_FUNC_IMPL(__imp__sub_83BB91A8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-12972
	ctx.r6.s64 = ctx.r7.s64 + -12972;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-13044(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -13044);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,9736(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 9736);
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
	// std r9,-12972(r7)
	PPC_STORE_U64(ctx.r7.u32 + -12972, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB91F0"))) PPC_WEAK_FUNC(sub_83BB91F0);
PPC_FUNC_IMPL(__imp__sub_83BB91F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13624
	ctx.r3.s64 = ctx.r11.s64 + -13624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB91FC"))) PPC_WEAK_FUNC(sub_83BB91FC);
PPC_FUNC_IMPL(__imp__sub_83BB91FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9200"))) PPC_WEAK_FUNC(sub_83BB9200);
PPC_FUNC_IMPL(__imp__sub_83BB9200) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,9744
	ctx.r3.s64 = ctx.r11.s64 + 9744;
	// bl 0x8259af80
	ctx.lr = 0x83BB9218;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-13608
	ctx.r3.s64 = ctx.r10.s64 + -13608;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB9224;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB9234"))) PPC_WEAK_FUNC(sub_83BB9234);
PPC_FUNC_IMPL(__imp__sub_83BB9234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9238"))) PPC_WEAK_FUNC(sub_83BB9238);
PPC_FUNC_IMPL(__imp__sub_83BB9238) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,9724
	ctx.r11.s64 = ctx.r8.s64 + 9724;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-12996(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12996);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-13616
	ctx.r3.s64 = ctx.r6.s64 + -13616;
	// stw r10,9724(r8)
	PPC_STORE_U32(ctx.r8.u32 + 9724, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9268"))) PPC_WEAK_FUNC(sub_83BB9268);
PPC_FUNC_IMPL(__imp__sub_83BB9268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13600
	ctx.r3.s64 = ctx.r11.s64 + -13600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9274"))) PPC_WEAK_FUNC(sub_83BB9274);
PPC_FUNC_IMPL(__imp__sub_83BB9274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9278"))) PPC_WEAK_FUNC(sub_83BB9278);
PPC_FUNC_IMPL(__imp__sub_83BB9278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13592
	ctx.r3.s64 = ctx.r11.s64 + -13592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9284"))) PPC_WEAK_FUNC(sub_83BB9284);
PPC_FUNC_IMPL(__imp__sub_83BB9284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9288"))) PPC_WEAK_FUNC(sub_83BB9288);
PPC_FUNC_IMPL(__imp__sub_83BB9288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13584
	ctx.r3.s64 = ctx.r11.s64 + -13584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9294"))) PPC_WEAK_FUNC(sub_83BB9294);
PPC_FUNC_IMPL(__imp__sub_83BB9294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9298"))) PPC_WEAK_FUNC(sub_83BB9298);
PPC_FUNC_IMPL(__imp__sub_83BB9298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13576
	ctx.r3.s64 = ctx.r11.s64 + -13576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB92A4"))) PPC_WEAK_FUNC(sub_83BB92A4);
PPC_FUNC_IMPL(__imp__sub_83BB92A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB92A8"))) PPC_WEAK_FUNC(sub_83BB92A8);
PPC_FUNC_IMPL(__imp__sub_83BB92A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13568
	ctx.r3.s64 = ctx.r11.s64 + -13568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB92B4"))) PPC_WEAK_FUNC(sub_83BB92B4);
PPC_FUNC_IMPL(__imp__sub_83BB92B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB92B8"))) PPC_WEAK_FUNC(sub_83BB92B8);
PPC_FUNC_IMPL(__imp__sub_83BB92B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13560
	ctx.r3.s64 = ctx.r11.s64 + -13560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB92C4"))) PPC_WEAK_FUNC(sub_83BB92C4);
PPC_FUNC_IMPL(__imp__sub_83BB92C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB92C8"))) PPC_WEAK_FUNC(sub_83BB92C8);
PPC_FUNC_IMPL(__imp__sub_83BB92C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13552
	ctx.r3.s64 = ctx.r11.s64 + -13552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB92D4"))) PPC_WEAK_FUNC(sub_83BB92D4);
PPC_FUNC_IMPL(__imp__sub_83BB92D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB92D8"))) PPC_WEAK_FUNC(sub_83BB92D8);
PPC_FUNC_IMPL(__imp__sub_83BB92D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13544
	ctx.r3.s64 = ctx.r11.s64 + -13544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB92E4"))) PPC_WEAK_FUNC(sub_83BB92E4);
PPC_FUNC_IMPL(__imp__sub_83BB92E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB92E8"))) PPC_WEAK_FUNC(sub_83BB92E8);
PPC_FUNC_IMPL(__imp__sub_83BB92E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13536
	ctx.r3.s64 = ctx.r11.s64 + -13536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB92F4"))) PPC_WEAK_FUNC(sub_83BB92F4);
PPC_FUNC_IMPL(__imp__sub_83BB92F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB92F8"))) PPC_WEAK_FUNC(sub_83BB92F8);
PPC_FUNC_IMPL(__imp__sub_83BB92F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13528
	ctx.r3.s64 = ctx.r11.s64 + -13528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9304"))) PPC_WEAK_FUNC(sub_83BB9304);
PPC_FUNC_IMPL(__imp__sub_83BB9304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9308"))) PPC_WEAK_FUNC(sub_83BB9308);
PPC_FUNC_IMPL(__imp__sub_83BB9308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13520
	ctx.r3.s64 = ctx.r11.s64 + -13520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9314"))) PPC_WEAK_FUNC(sub_83BB9314);
PPC_FUNC_IMPL(__imp__sub_83BB9314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9318"))) PPC_WEAK_FUNC(sub_83BB9318);
PPC_FUNC_IMPL(__imp__sub_83BB9318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13512
	ctx.r3.s64 = ctx.r11.s64 + -13512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9324"))) PPC_WEAK_FUNC(sub_83BB9324);
PPC_FUNC_IMPL(__imp__sub_83BB9324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9328"))) PPC_WEAK_FUNC(sub_83BB9328);
PPC_FUNC_IMPL(__imp__sub_83BB9328) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10088
	ctx.r3.s64 = ctx.r11.s64 + 10088;
	// bl 0x83523120
	ctx.lr = 0x83BB9340;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-13504
	ctx.r3.s64 = ctx.r10.s64 + -13504;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB934C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB935C"))) PPC_WEAK_FUNC(sub_83BB935C);
PPC_FUNC_IMPL(__imp__sub_83BB935C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9360"))) PPC_WEAK_FUNC(sub_83BB9360);
PPC_FUNC_IMPL(__imp__sub_83BB9360) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,10104
	ctx.r7.s64 = ctx.r8.s64 + 10104;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,10104(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10104);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,10104(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10104, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB9388"))) PPC_WEAK_FUNC(sub_83BB9388);
PPC_FUNC_IMPL(__imp__sub_83BB9388) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-12836
	ctx.r6.s64 = ctx.r7.s64 + -12836;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-12908(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -12908);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,10104(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10104);
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
	// std r9,-12836(r7)
	PPC_STORE_U64(ctx.r7.u32 + -12836, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB93D0"))) PPC_WEAK_FUNC(sub_83BB93D0);
PPC_FUNC_IMPL(__imp__sub_83BB93D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13488
	ctx.r3.s64 = ctx.r11.s64 + -13488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB93DC"))) PPC_WEAK_FUNC(sub_83BB93DC);
PPC_FUNC_IMPL(__imp__sub_83BB93DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB93E0"))) PPC_WEAK_FUNC(sub_83BB93E0);
PPC_FUNC_IMPL(__imp__sub_83BB93E0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10112
	ctx.r3.s64 = ctx.r11.s64 + 10112;
	// bl 0x8259af80
	ctx.lr = 0x83BB93F8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-13472
	ctx.r3.s64 = ctx.r10.s64 + -13472;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB9404;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB9414"))) PPC_WEAK_FUNC(sub_83BB9414);
PPC_FUNC_IMPL(__imp__sub_83BB9414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9418"))) PPC_WEAK_FUNC(sub_83BB9418);
PPC_FUNC_IMPL(__imp__sub_83BB9418) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,10092
	ctx.r11.s64 = ctx.r8.s64 + 10092;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-12860(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12860);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-13480
	ctx.r3.s64 = ctx.r6.s64 + -13480;
	// stw r10,10092(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10092, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9448"))) PPC_WEAK_FUNC(sub_83BB9448);
PPC_FUNC_IMPL(__imp__sub_83BB9448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13464
	ctx.r3.s64 = ctx.r11.s64 + -13464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9454"))) PPC_WEAK_FUNC(sub_83BB9454);
PPC_FUNC_IMPL(__imp__sub_83BB9454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9458"))) PPC_WEAK_FUNC(sub_83BB9458);
PPC_FUNC_IMPL(__imp__sub_83BB9458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13456
	ctx.r3.s64 = ctx.r11.s64 + -13456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9464"))) PPC_WEAK_FUNC(sub_83BB9464);
PPC_FUNC_IMPL(__imp__sub_83BB9464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9468"))) PPC_WEAK_FUNC(sub_83BB9468);
PPC_FUNC_IMPL(__imp__sub_83BB9468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13448
	ctx.r3.s64 = ctx.r11.s64 + -13448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9474"))) PPC_WEAK_FUNC(sub_83BB9474);
PPC_FUNC_IMPL(__imp__sub_83BB9474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9478"))) PPC_WEAK_FUNC(sub_83BB9478);
PPC_FUNC_IMPL(__imp__sub_83BB9478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13440
	ctx.r3.s64 = ctx.r11.s64 + -13440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9484"))) PPC_WEAK_FUNC(sub_83BB9484);
PPC_FUNC_IMPL(__imp__sub_83BB9484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9488"))) PPC_WEAK_FUNC(sub_83BB9488);
PPC_FUNC_IMPL(__imp__sub_83BB9488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13432
	ctx.r3.s64 = ctx.r11.s64 + -13432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9494"))) PPC_WEAK_FUNC(sub_83BB9494);
PPC_FUNC_IMPL(__imp__sub_83BB9494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9498"))) PPC_WEAK_FUNC(sub_83BB9498);
PPC_FUNC_IMPL(__imp__sub_83BB9498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13424
	ctx.r3.s64 = ctx.r11.s64 + -13424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB94A4"))) PPC_WEAK_FUNC(sub_83BB94A4);
PPC_FUNC_IMPL(__imp__sub_83BB94A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB94A8"))) PPC_WEAK_FUNC(sub_83BB94A8);
PPC_FUNC_IMPL(__imp__sub_83BB94A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13416
	ctx.r3.s64 = ctx.r11.s64 + -13416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB94B4"))) PPC_WEAK_FUNC(sub_83BB94B4);
PPC_FUNC_IMPL(__imp__sub_83BB94B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB94B8"))) PPC_WEAK_FUNC(sub_83BB94B8);
PPC_FUNC_IMPL(__imp__sub_83BB94B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13408
	ctx.r3.s64 = ctx.r11.s64 + -13408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB94C4"))) PPC_WEAK_FUNC(sub_83BB94C4);
PPC_FUNC_IMPL(__imp__sub_83BB94C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB94C8"))) PPC_WEAK_FUNC(sub_83BB94C8);
PPC_FUNC_IMPL(__imp__sub_83BB94C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13400
	ctx.r3.s64 = ctx.r11.s64 + -13400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB94D4"))) PPC_WEAK_FUNC(sub_83BB94D4);
PPC_FUNC_IMPL(__imp__sub_83BB94D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB94D8"))) PPC_WEAK_FUNC(sub_83BB94D8);
PPC_FUNC_IMPL(__imp__sub_83BB94D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13392
	ctx.r3.s64 = ctx.r11.s64 + -13392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB94E4"))) PPC_WEAK_FUNC(sub_83BB94E4);
PPC_FUNC_IMPL(__imp__sub_83BB94E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB94E8"))) PPC_WEAK_FUNC(sub_83BB94E8);
PPC_FUNC_IMPL(__imp__sub_83BB94E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13384
	ctx.r3.s64 = ctx.r11.s64 + -13384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB94F4"))) PPC_WEAK_FUNC(sub_83BB94F4);
PPC_FUNC_IMPL(__imp__sub_83BB94F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB94F8"))) PPC_WEAK_FUNC(sub_83BB94F8);
PPC_FUNC_IMPL(__imp__sub_83BB94F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13376
	ctx.r3.s64 = ctx.r11.s64 + -13376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9504"))) PPC_WEAK_FUNC(sub_83BB9504);
PPC_FUNC_IMPL(__imp__sub_83BB9504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9508"))) PPC_WEAK_FUNC(sub_83BB9508);
PPC_FUNC_IMPL(__imp__sub_83BB9508) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10460
	ctx.r3.s64 = ctx.r11.s64 + 10460;
	// bl 0x83523120
	ctx.lr = 0x83BB9520;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-13368
	ctx.r3.s64 = ctx.r10.s64 + -13368;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB952C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB953C"))) PPC_WEAK_FUNC(sub_83BB953C);
PPC_FUNC_IMPL(__imp__sub_83BB953C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9540"))) PPC_WEAK_FUNC(sub_83BB9540);
PPC_FUNC_IMPL(__imp__sub_83BB9540) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,10476
	ctx.r7.s64 = ctx.r8.s64 + 10476;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,10476(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10476);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,10476(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10476, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB9568"))) PPC_WEAK_FUNC(sub_83BB9568);
PPC_FUNC_IMPL(__imp__sub_83BB9568) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-12520
	ctx.r6.s64 = ctx.r7.s64 + -12520;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-12592(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -12592);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,10476(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10476);
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
	// std r9,-12520(r7)
	PPC_STORE_U64(ctx.r7.u32 + -12520, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB95B0"))) PPC_WEAK_FUNC(sub_83BB95B0);
PPC_FUNC_IMPL(__imp__sub_83BB95B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13352
	ctx.r3.s64 = ctx.r11.s64 + -13352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB95BC"))) PPC_WEAK_FUNC(sub_83BB95BC);
PPC_FUNC_IMPL(__imp__sub_83BB95BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB95C0"))) PPC_WEAK_FUNC(sub_83BB95C0);
PPC_FUNC_IMPL(__imp__sub_83BB95C0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10488
	ctx.r3.s64 = ctx.r11.s64 + 10488;
	// bl 0x8259af80
	ctx.lr = 0x83BB95D8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-13336
	ctx.r3.s64 = ctx.r10.s64 + -13336;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB95E4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB95F4"))) PPC_WEAK_FUNC(sub_83BB95F4);
PPC_FUNC_IMPL(__imp__sub_83BB95F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB95F8"))) PPC_WEAK_FUNC(sub_83BB95F8);
PPC_FUNC_IMPL(__imp__sub_83BB95F8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,10464
	ctx.r11.s64 = ctx.r8.s64 + 10464;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-12544(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12544);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-13344
	ctx.r3.s64 = ctx.r6.s64 + -13344;
	// stw r10,10464(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10464, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9628"))) PPC_WEAK_FUNC(sub_83BB9628);
PPC_FUNC_IMPL(__imp__sub_83BB9628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13328
	ctx.r3.s64 = ctx.r11.s64 + -13328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9634"))) PPC_WEAK_FUNC(sub_83BB9634);
PPC_FUNC_IMPL(__imp__sub_83BB9634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9638"))) PPC_WEAK_FUNC(sub_83BB9638);
PPC_FUNC_IMPL(__imp__sub_83BB9638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13320
	ctx.r3.s64 = ctx.r11.s64 + -13320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9644"))) PPC_WEAK_FUNC(sub_83BB9644);
PPC_FUNC_IMPL(__imp__sub_83BB9644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9648"))) PPC_WEAK_FUNC(sub_83BB9648);
PPC_FUNC_IMPL(__imp__sub_83BB9648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13312
	ctx.r3.s64 = ctx.r11.s64 + -13312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9654"))) PPC_WEAK_FUNC(sub_83BB9654);
PPC_FUNC_IMPL(__imp__sub_83BB9654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9658"))) PPC_WEAK_FUNC(sub_83BB9658);
PPC_FUNC_IMPL(__imp__sub_83BB9658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13304
	ctx.r3.s64 = ctx.r11.s64 + -13304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9664"))) PPC_WEAK_FUNC(sub_83BB9664);
PPC_FUNC_IMPL(__imp__sub_83BB9664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9668"))) PPC_WEAK_FUNC(sub_83BB9668);
PPC_FUNC_IMPL(__imp__sub_83BB9668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13296
	ctx.r3.s64 = ctx.r11.s64 + -13296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9674"))) PPC_WEAK_FUNC(sub_83BB9674);
PPC_FUNC_IMPL(__imp__sub_83BB9674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9678"))) PPC_WEAK_FUNC(sub_83BB9678);
PPC_FUNC_IMPL(__imp__sub_83BB9678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13288
	ctx.r3.s64 = ctx.r11.s64 + -13288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9684"))) PPC_WEAK_FUNC(sub_83BB9684);
PPC_FUNC_IMPL(__imp__sub_83BB9684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9688"))) PPC_WEAK_FUNC(sub_83BB9688);
PPC_FUNC_IMPL(__imp__sub_83BB9688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13280
	ctx.r3.s64 = ctx.r11.s64 + -13280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9694"))) PPC_WEAK_FUNC(sub_83BB9694);
PPC_FUNC_IMPL(__imp__sub_83BB9694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9698"))) PPC_WEAK_FUNC(sub_83BB9698);
PPC_FUNC_IMPL(__imp__sub_83BB9698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13272
	ctx.r3.s64 = ctx.r11.s64 + -13272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB96A4"))) PPC_WEAK_FUNC(sub_83BB96A4);
PPC_FUNC_IMPL(__imp__sub_83BB96A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB96A8"))) PPC_WEAK_FUNC(sub_83BB96A8);
PPC_FUNC_IMPL(__imp__sub_83BB96A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13264
	ctx.r3.s64 = ctx.r11.s64 + -13264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB96B4"))) PPC_WEAK_FUNC(sub_83BB96B4);
PPC_FUNC_IMPL(__imp__sub_83BB96B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB96B8"))) PPC_WEAK_FUNC(sub_83BB96B8);
PPC_FUNC_IMPL(__imp__sub_83BB96B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13256
	ctx.r3.s64 = ctx.r11.s64 + -13256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB96C4"))) PPC_WEAK_FUNC(sub_83BB96C4);
PPC_FUNC_IMPL(__imp__sub_83BB96C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB96C8"))) PPC_WEAK_FUNC(sub_83BB96C8);
PPC_FUNC_IMPL(__imp__sub_83BB96C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13248
	ctx.r3.s64 = ctx.r11.s64 + -13248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB96D4"))) PPC_WEAK_FUNC(sub_83BB96D4);
PPC_FUNC_IMPL(__imp__sub_83BB96D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB96D8"))) PPC_WEAK_FUNC(sub_83BB96D8);
PPC_FUNC_IMPL(__imp__sub_83BB96D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13240
	ctx.r3.s64 = ctx.r11.s64 + -13240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB96E4"))) PPC_WEAK_FUNC(sub_83BB96E4);
PPC_FUNC_IMPL(__imp__sub_83BB96E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB96E8"))) PPC_WEAK_FUNC(sub_83BB96E8);
PPC_FUNC_IMPL(__imp__sub_83BB96E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10840
	ctx.r3.s64 = ctx.r11.s64 + 10840;
	// bl 0x83523120
	ctx.lr = 0x83BB9700;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-13232
	ctx.r3.s64 = ctx.r10.s64 + -13232;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB970C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB971C"))) PPC_WEAK_FUNC(sub_83BB971C);
PPC_FUNC_IMPL(__imp__sub_83BB971C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9720"))) PPC_WEAK_FUNC(sub_83BB9720);
PPC_FUNC_IMPL(__imp__sub_83BB9720) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,10856
	ctx.r7.s64 = ctx.r8.s64 + 10856;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,10856(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10856);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,10856(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10856, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB9748"))) PPC_WEAK_FUNC(sub_83BB9748);
PPC_FUNC_IMPL(__imp__sub_83BB9748) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-12384
	ctx.r6.s64 = ctx.r7.s64 + -12384;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-12456(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -12456);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,10856(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10856);
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
	// std r9,-12384(r7)
	PPC_STORE_U64(ctx.r7.u32 + -12384, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB9790"))) PPC_WEAK_FUNC(sub_83BB9790);
PPC_FUNC_IMPL(__imp__sub_83BB9790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13216
	ctx.r3.s64 = ctx.r11.s64 + -13216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB979C"))) PPC_WEAK_FUNC(sub_83BB979C);
PPC_FUNC_IMPL(__imp__sub_83BB979C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB97A0"))) PPC_WEAK_FUNC(sub_83BB97A0);
PPC_FUNC_IMPL(__imp__sub_83BB97A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,10864
	ctx.r3.s64 = ctx.r11.s64 + 10864;
	// bl 0x8259af80
	ctx.lr = 0x83BB97B8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-13184
	ctx.r3.s64 = ctx.r10.s64 + -13184;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB97C4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB97D4"))) PPC_WEAK_FUNC(sub_83BB97D4);
PPC_FUNC_IMPL(__imp__sub_83BB97D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB97D8"))) PPC_WEAK_FUNC(sub_83BB97D8);
PPC_FUNC_IMPL(__imp__sub_83BB97D8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,10844
	ctx.r11.s64 = ctx.r8.s64 + 10844;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-12408(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12408);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-13208
	ctx.r3.s64 = ctx.r6.s64 + -13208;
	// stw r10,10844(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10844, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9808"))) PPC_WEAK_FUNC(sub_83BB9808);
PPC_FUNC_IMPL(__imp__sub_83BB9808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13176
	ctx.r3.s64 = ctx.r11.s64 + -13176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9814"))) PPC_WEAK_FUNC(sub_83BB9814);
PPC_FUNC_IMPL(__imp__sub_83BB9814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9818"))) PPC_WEAK_FUNC(sub_83BB9818);
PPC_FUNC_IMPL(__imp__sub_83BB9818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13168
	ctx.r3.s64 = ctx.r11.s64 + -13168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9824"))) PPC_WEAK_FUNC(sub_83BB9824);
PPC_FUNC_IMPL(__imp__sub_83BB9824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9828"))) PPC_WEAK_FUNC(sub_83BB9828);
PPC_FUNC_IMPL(__imp__sub_83BB9828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13160
	ctx.r3.s64 = ctx.r11.s64 + -13160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9834"))) PPC_WEAK_FUNC(sub_83BB9834);
PPC_FUNC_IMPL(__imp__sub_83BB9834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9838"))) PPC_WEAK_FUNC(sub_83BB9838);
PPC_FUNC_IMPL(__imp__sub_83BB9838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13152
	ctx.r3.s64 = ctx.r11.s64 + -13152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9844"))) PPC_WEAK_FUNC(sub_83BB9844);
PPC_FUNC_IMPL(__imp__sub_83BB9844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9848"))) PPC_WEAK_FUNC(sub_83BB9848);
PPC_FUNC_IMPL(__imp__sub_83BB9848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13144
	ctx.r3.s64 = ctx.r11.s64 + -13144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9854"))) PPC_WEAK_FUNC(sub_83BB9854);
PPC_FUNC_IMPL(__imp__sub_83BB9854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9858"))) PPC_WEAK_FUNC(sub_83BB9858);
PPC_FUNC_IMPL(__imp__sub_83BB9858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13136
	ctx.r3.s64 = ctx.r11.s64 + -13136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9864"))) PPC_WEAK_FUNC(sub_83BB9864);
PPC_FUNC_IMPL(__imp__sub_83BB9864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9868"))) PPC_WEAK_FUNC(sub_83BB9868);
PPC_FUNC_IMPL(__imp__sub_83BB9868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13128
	ctx.r3.s64 = ctx.r11.s64 + -13128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9874"))) PPC_WEAK_FUNC(sub_83BB9874);
PPC_FUNC_IMPL(__imp__sub_83BB9874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9878"))) PPC_WEAK_FUNC(sub_83BB9878);
PPC_FUNC_IMPL(__imp__sub_83BB9878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13120
	ctx.r3.s64 = ctx.r11.s64 + -13120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9884"))) PPC_WEAK_FUNC(sub_83BB9884);
PPC_FUNC_IMPL(__imp__sub_83BB9884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9888"))) PPC_WEAK_FUNC(sub_83BB9888);
PPC_FUNC_IMPL(__imp__sub_83BB9888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13112
	ctx.r3.s64 = ctx.r11.s64 + -13112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9894"))) PPC_WEAK_FUNC(sub_83BB9894);
PPC_FUNC_IMPL(__imp__sub_83BB9894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9898"))) PPC_WEAK_FUNC(sub_83BB9898);
PPC_FUNC_IMPL(__imp__sub_83BB9898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13104
	ctx.r3.s64 = ctx.r11.s64 + -13104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB98A4"))) PPC_WEAK_FUNC(sub_83BB98A4);
PPC_FUNC_IMPL(__imp__sub_83BB98A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB98A8"))) PPC_WEAK_FUNC(sub_83BB98A8);
PPC_FUNC_IMPL(__imp__sub_83BB98A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13096
	ctx.r3.s64 = ctx.r11.s64 + -13096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB98B4"))) PPC_WEAK_FUNC(sub_83BB98B4);
PPC_FUNC_IMPL(__imp__sub_83BB98B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB98B8"))) PPC_WEAK_FUNC(sub_83BB98B8);
PPC_FUNC_IMPL(__imp__sub_83BB98B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13088
	ctx.r3.s64 = ctx.r11.s64 + -13088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB98C4"))) PPC_WEAK_FUNC(sub_83BB98C4);
PPC_FUNC_IMPL(__imp__sub_83BB98C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB98C8"))) PPC_WEAK_FUNC(sub_83BB98C8);
PPC_FUNC_IMPL(__imp__sub_83BB98C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,11208
	ctx.r3.s64 = ctx.r11.s64 + 11208;
	// bl 0x83523120
	ctx.lr = 0x83BB98E0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-13080
	ctx.r3.s64 = ctx.r10.s64 + -13080;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB98EC;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB98FC"))) PPC_WEAK_FUNC(sub_83BB98FC);
PPC_FUNC_IMPL(__imp__sub_83BB98FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9900"))) PPC_WEAK_FUNC(sub_83BB9900);
PPC_FUNC_IMPL(__imp__sub_83BB9900) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,11224
	ctx.r7.s64 = ctx.r8.s64 + 11224;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,11224(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 11224);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,11224(r8)
	PPC_STORE_U32(ctx.r8.u32 + 11224, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB9928"))) PPC_WEAK_FUNC(sub_83BB9928);
PPC_FUNC_IMPL(__imp__sub_83BB9928) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-12248
	ctx.r6.s64 = ctx.r7.s64 + -12248;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-12320(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -12320);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,11224(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11224);
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
	// std r9,-12248(r7)
	PPC_STORE_U64(ctx.r7.u32 + -12248, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB9970"))) PPC_WEAK_FUNC(sub_83BB9970);
PPC_FUNC_IMPL(__imp__sub_83BB9970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13064
	ctx.r3.s64 = ctx.r11.s64 + -13064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB997C"))) PPC_WEAK_FUNC(sub_83BB997C);
PPC_FUNC_IMPL(__imp__sub_83BB997C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9980"))) PPC_WEAK_FUNC(sub_83BB9980);
PPC_FUNC_IMPL(__imp__sub_83BB9980) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,11232
	ctx.r3.s64 = ctx.r11.s64 + 11232;
	// bl 0x8259af80
	ctx.lr = 0x83BB9998;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-13048
	ctx.r3.s64 = ctx.r10.s64 + -13048;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB99A4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB99B4"))) PPC_WEAK_FUNC(sub_83BB99B4);
PPC_FUNC_IMPL(__imp__sub_83BB99B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB99B8"))) PPC_WEAK_FUNC(sub_83BB99B8);
PPC_FUNC_IMPL(__imp__sub_83BB99B8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,11212
	ctx.r11.s64 = ctx.r8.s64 + 11212;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-12272(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12272);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-13056
	ctx.r3.s64 = ctx.r6.s64 + -13056;
	// stw r10,11212(r8)
	PPC_STORE_U32(ctx.r8.u32 + 11212, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB99E8"))) PPC_WEAK_FUNC(sub_83BB99E8);
PPC_FUNC_IMPL(__imp__sub_83BB99E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13040
	ctx.r3.s64 = ctx.r11.s64 + -13040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB99F4"))) PPC_WEAK_FUNC(sub_83BB99F4);
PPC_FUNC_IMPL(__imp__sub_83BB99F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB99F8"))) PPC_WEAK_FUNC(sub_83BB99F8);
PPC_FUNC_IMPL(__imp__sub_83BB99F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13032
	ctx.r3.s64 = ctx.r11.s64 + -13032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9A04"))) PPC_WEAK_FUNC(sub_83BB9A04);
PPC_FUNC_IMPL(__imp__sub_83BB9A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9A08"))) PPC_WEAK_FUNC(sub_83BB9A08);
PPC_FUNC_IMPL(__imp__sub_83BB9A08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13024
	ctx.r3.s64 = ctx.r11.s64 + -13024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9A14"))) PPC_WEAK_FUNC(sub_83BB9A14);
PPC_FUNC_IMPL(__imp__sub_83BB9A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9A18"))) PPC_WEAK_FUNC(sub_83BB9A18);
PPC_FUNC_IMPL(__imp__sub_83BB9A18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13016
	ctx.r3.s64 = ctx.r11.s64 + -13016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9A24"))) PPC_WEAK_FUNC(sub_83BB9A24);
PPC_FUNC_IMPL(__imp__sub_83BB9A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9A28"))) PPC_WEAK_FUNC(sub_83BB9A28);
PPC_FUNC_IMPL(__imp__sub_83BB9A28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13008
	ctx.r3.s64 = ctx.r11.s64 + -13008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9A34"))) PPC_WEAK_FUNC(sub_83BB9A34);
PPC_FUNC_IMPL(__imp__sub_83BB9A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9A38"))) PPC_WEAK_FUNC(sub_83BB9A38);
PPC_FUNC_IMPL(__imp__sub_83BB9A38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-13000
	ctx.r3.s64 = ctx.r11.s64 + -13000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9A44"))) PPC_WEAK_FUNC(sub_83BB9A44);
PPC_FUNC_IMPL(__imp__sub_83BB9A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9A48"))) PPC_WEAK_FUNC(sub_83BB9A48);
PPC_FUNC_IMPL(__imp__sub_83BB9A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12992
	ctx.r3.s64 = ctx.r11.s64 + -12992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9A54"))) PPC_WEAK_FUNC(sub_83BB9A54);
PPC_FUNC_IMPL(__imp__sub_83BB9A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9A58"))) PPC_WEAK_FUNC(sub_83BB9A58);
PPC_FUNC_IMPL(__imp__sub_83BB9A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12984
	ctx.r3.s64 = ctx.r11.s64 + -12984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9A64"))) PPC_WEAK_FUNC(sub_83BB9A64);
PPC_FUNC_IMPL(__imp__sub_83BB9A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9A68"))) PPC_WEAK_FUNC(sub_83BB9A68);
PPC_FUNC_IMPL(__imp__sub_83BB9A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12976
	ctx.r3.s64 = ctx.r11.s64 + -12976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9A74"))) PPC_WEAK_FUNC(sub_83BB9A74);
PPC_FUNC_IMPL(__imp__sub_83BB9A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9A78"))) PPC_WEAK_FUNC(sub_83BB9A78);
PPC_FUNC_IMPL(__imp__sub_83BB9A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12968
	ctx.r3.s64 = ctx.r11.s64 + -12968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9A84"))) PPC_WEAK_FUNC(sub_83BB9A84);
PPC_FUNC_IMPL(__imp__sub_83BB9A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9A88"))) PPC_WEAK_FUNC(sub_83BB9A88);
PPC_FUNC_IMPL(__imp__sub_83BB9A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12960
	ctx.r3.s64 = ctx.r11.s64 + -12960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9A94"))) PPC_WEAK_FUNC(sub_83BB9A94);
PPC_FUNC_IMPL(__imp__sub_83BB9A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9A98"))) PPC_WEAK_FUNC(sub_83BB9A98);
PPC_FUNC_IMPL(__imp__sub_83BB9A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12952
	ctx.r3.s64 = ctx.r11.s64 + -12952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9AA4"))) PPC_WEAK_FUNC(sub_83BB9AA4);
PPC_FUNC_IMPL(__imp__sub_83BB9AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9AA8"))) PPC_WEAK_FUNC(sub_83BB9AA8);
PPC_FUNC_IMPL(__imp__sub_83BB9AA8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,11576
	ctx.r3.s64 = ctx.r11.s64 + 11576;
	// bl 0x83523120
	ctx.lr = 0x83BB9AC0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-12944
	ctx.r3.s64 = ctx.r10.s64 + -12944;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB9ACC;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB9ADC"))) PPC_WEAK_FUNC(sub_83BB9ADC);
PPC_FUNC_IMPL(__imp__sub_83BB9ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9AE0"))) PPC_WEAK_FUNC(sub_83BB9AE0);
PPC_FUNC_IMPL(__imp__sub_83BB9AE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,11592
	ctx.r7.s64 = ctx.r8.s64 + 11592;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,11592(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 11592);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,11592(r8)
	PPC_STORE_U32(ctx.r8.u32 + 11592, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB9B08"))) PPC_WEAK_FUNC(sub_83BB9B08);
PPC_FUNC_IMPL(__imp__sub_83BB9B08) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-12068
	ctx.r6.s64 = ctx.r7.s64 + -12068;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-12140(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -12140);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,11592(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11592);
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
	// std r9,-12068(r7)
	PPC_STORE_U64(ctx.r7.u32 + -12068, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB9B50"))) PPC_WEAK_FUNC(sub_83BB9B50);
PPC_FUNC_IMPL(__imp__sub_83BB9B50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12928
	ctx.r3.s64 = ctx.r11.s64 + -12928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9B5C"))) PPC_WEAK_FUNC(sub_83BB9B5C);
PPC_FUNC_IMPL(__imp__sub_83BB9B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9B60"))) PPC_WEAK_FUNC(sub_83BB9B60);
PPC_FUNC_IMPL(__imp__sub_83BB9B60) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,11600
	ctx.r3.s64 = ctx.r11.s64 + 11600;
	// bl 0x8259af80
	ctx.lr = 0x83BB9B78;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-12912
	ctx.r3.s64 = ctx.r10.s64 + -12912;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB9B84;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB9B94"))) PPC_WEAK_FUNC(sub_83BB9B94);
PPC_FUNC_IMPL(__imp__sub_83BB9B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9B98"))) PPC_WEAK_FUNC(sub_83BB9B98);
PPC_FUNC_IMPL(__imp__sub_83BB9B98) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,11580
	ctx.r11.s64 = ctx.r8.s64 + 11580;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-12092(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12092);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-12920
	ctx.r3.s64 = ctx.r6.s64 + -12920;
	// stw r10,11580(r8)
	PPC_STORE_U32(ctx.r8.u32 + 11580, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9BC8"))) PPC_WEAK_FUNC(sub_83BB9BC8);
PPC_FUNC_IMPL(__imp__sub_83BB9BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12904
	ctx.r3.s64 = ctx.r11.s64 + -12904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9BD4"))) PPC_WEAK_FUNC(sub_83BB9BD4);
PPC_FUNC_IMPL(__imp__sub_83BB9BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9BD8"))) PPC_WEAK_FUNC(sub_83BB9BD8);
PPC_FUNC_IMPL(__imp__sub_83BB9BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12896
	ctx.r3.s64 = ctx.r11.s64 + -12896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9BE4"))) PPC_WEAK_FUNC(sub_83BB9BE4);
PPC_FUNC_IMPL(__imp__sub_83BB9BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9BE8"))) PPC_WEAK_FUNC(sub_83BB9BE8);
PPC_FUNC_IMPL(__imp__sub_83BB9BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12888
	ctx.r3.s64 = ctx.r11.s64 + -12888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9BF4"))) PPC_WEAK_FUNC(sub_83BB9BF4);
PPC_FUNC_IMPL(__imp__sub_83BB9BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9BF8"))) PPC_WEAK_FUNC(sub_83BB9BF8);
PPC_FUNC_IMPL(__imp__sub_83BB9BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12880
	ctx.r3.s64 = ctx.r11.s64 + -12880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9C04"))) PPC_WEAK_FUNC(sub_83BB9C04);
PPC_FUNC_IMPL(__imp__sub_83BB9C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB9C08"))) PPC_WEAK_FUNC(sub_83BB9C08);
PPC_FUNC_IMPL(__imp__sub_83BB9C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-12872
	ctx.r3.s64 = ctx.r11.s64 + -12872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB9C14"))) PPC_WEAK_FUNC(sub_83BB9C14);
PPC_FUNC_IMPL(__imp__sub_83BB9C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

