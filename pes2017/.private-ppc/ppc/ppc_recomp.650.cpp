#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BD2EBC"))) PPC_WEAK_FUNC(sub_83BD2EBC);
PPC_FUNC_IMPL(__imp__sub_83BD2EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD2EC0"))) PPC_WEAK_FUNC(sub_83BD2EC0);
PPC_FUNC_IMPL(__imp__sub_83BD2EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,26304
	ctx.r3.s64 = ctx.r11.s64 + 26304;
	// bl 0x8259af80
	ctx.lr = 0x83BD2ED8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,18992
	ctx.r3.s64 = ctx.r10.s64 + 18992;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD2EE4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD2EF4"))) PPC_WEAK_FUNC(sub_83BD2EF4);
PPC_FUNC_IMPL(__imp__sub_83BD2EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD2EF8"))) PPC_WEAK_FUNC(sub_83BD2EF8);
PPC_FUNC_IMPL(__imp__sub_83BD2EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,26284
	ctx.r11.s64 = ctx.r8.s64 + 26284;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,24800(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24800);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,18984
	ctx.r3.s64 = ctx.r6.s64 + 18984;
	// stw r10,26284(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26284, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD2F28"))) PPC_WEAK_FUNC(sub_83BD2F28);
PPC_FUNC_IMPL(__imp__sub_83BD2F28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19000
	ctx.r3.s64 = ctx.r11.s64 + 19000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD2F34"))) PPC_WEAK_FUNC(sub_83BD2F34);
PPC_FUNC_IMPL(__imp__sub_83BD2F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD2F38"))) PPC_WEAK_FUNC(sub_83BD2F38);
PPC_FUNC_IMPL(__imp__sub_83BD2F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19008
	ctx.r3.s64 = ctx.r11.s64 + 19008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD2F44"))) PPC_WEAK_FUNC(sub_83BD2F44);
PPC_FUNC_IMPL(__imp__sub_83BD2F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD2F48"))) PPC_WEAK_FUNC(sub_83BD2F48);
PPC_FUNC_IMPL(__imp__sub_83BD2F48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19016
	ctx.r3.s64 = ctx.r11.s64 + 19016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD2F54"))) PPC_WEAK_FUNC(sub_83BD2F54);
PPC_FUNC_IMPL(__imp__sub_83BD2F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD2F58"))) PPC_WEAK_FUNC(sub_83BD2F58);
PPC_FUNC_IMPL(__imp__sub_83BD2F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19024
	ctx.r3.s64 = ctx.r11.s64 + 19024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD2F64"))) PPC_WEAK_FUNC(sub_83BD2F64);
PPC_FUNC_IMPL(__imp__sub_83BD2F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD2F68"))) PPC_WEAK_FUNC(sub_83BD2F68);
PPC_FUNC_IMPL(__imp__sub_83BD2F68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19032
	ctx.r3.s64 = ctx.r11.s64 + 19032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD2F74"))) PPC_WEAK_FUNC(sub_83BD2F74);
PPC_FUNC_IMPL(__imp__sub_83BD2F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD2F78"))) PPC_WEAK_FUNC(sub_83BD2F78);
PPC_FUNC_IMPL(__imp__sub_83BD2F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19040
	ctx.r3.s64 = ctx.r11.s64 + 19040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD2F84"))) PPC_WEAK_FUNC(sub_83BD2F84);
PPC_FUNC_IMPL(__imp__sub_83BD2F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD2F88"))) PPC_WEAK_FUNC(sub_83BD2F88);
PPC_FUNC_IMPL(__imp__sub_83BD2F88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19048
	ctx.r3.s64 = ctx.r11.s64 + 19048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD2F94"))) PPC_WEAK_FUNC(sub_83BD2F94);
PPC_FUNC_IMPL(__imp__sub_83BD2F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD2F98"))) PPC_WEAK_FUNC(sub_83BD2F98);
PPC_FUNC_IMPL(__imp__sub_83BD2F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19056
	ctx.r3.s64 = ctx.r11.s64 + 19056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD2FA4"))) PPC_WEAK_FUNC(sub_83BD2FA4);
PPC_FUNC_IMPL(__imp__sub_83BD2FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD2FA8"))) PPC_WEAK_FUNC(sub_83BD2FA8);
PPC_FUNC_IMPL(__imp__sub_83BD2FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19064
	ctx.r3.s64 = ctx.r11.s64 + 19064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD2FB4"))) PPC_WEAK_FUNC(sub_83BD2FB4);
PPC_FUNC_IMPL(__imp__sub_83BD2FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD2FB8"))) PPC_WEAK_FUNC(sub_83BD2FB8);
PPC_FUNC_IMPL(__imp__sub_83BD2FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19072
	ctx.r3.s64 = ctx.r11.s64 + 19072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD2FC4"))) PPC_WEAK_FUNC(sub_83BD2FC4);
PPC_FUNC_IMPL(__imp__sub_83BD2FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD2FC8"))) PPC_WEAK_FUNC(sub_83BD2FC8);
PPC_FUNC_IMPL(__imp__sub_83BD2FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19080
	ctx.r3.s64 = ctx.r11.s64 + 19080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD2FD4"))) PPC_WEAK_FUNC(sub_83BD2FD4);
PPC_FUNC_IMPL(__imp__sub_83BD2FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD2FD8"))) PPC_WEAK_FUNC(sub_83BD2FD8);
PPC_FUNC_IMPL(__imp__sub_83BD2FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19088
	ctx.r3.s64 = ctx.r11.s64 + 19088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD2FE4"))) PPC_WEAK_FUNC(sub_83BD2FE4);
PPC_FUNC_IMPL(__imp__sub_83BD2FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD2FE8"))) PPC_WEAK_FUNC(sub_83BD2FE8);
PPC_FUNC_IMPL(__imp__sub_83BD2FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,26656
	ctx.r3.s64 = ctx.r11.s64 + 26656;
	// bl 0x83523120
	ctx.lr = 0x83BD3000;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,19096
	ctx.r3.s64 = ctx.r10.s64 + 19096;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD300C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD301C"))) PPC_WEAK_FUNC(sub_83BD301C);
PPC_FUNC_IMPL(__imp__sub_83BD301C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3020"))) PPC_WEAK_FUNC(sub_83BD3020);
PPC_FUNC_IMPL(__imp__sub_83BD3020) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,26672
	ctx.r7.s64 = ctx.r8.s64 + 26672;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,26672(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26672);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,26672(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26672, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD3048"))) PPC_WEAK_FUNC(sub_83BD3048);
PPC_FUNC_IMPL(__imp__sub_83BD3048) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,25124
	ctx.r6.s64 = ctx.r7.s64 + 25124;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,25052(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 25052);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,26672(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 26672);
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
	// std r9,25124(r7)
	PPC_STORE_U64(ctx.r7.u32 + 25124, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD3090"))) PPC_WEAK_FUNC(sub_83BD3090);
PPC_FUNC_IMPL(__imp__sub_83BD3090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19112
	ctx.r3.s64 = ctx.r11.s64 + 19112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD309C"))) PPC_WEAK_FUNC(sub_83BD309C);
PPC_FUNC_IMPL(__imp__sub_83BD309C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD30A0"))) PPC_WEAK_FUNC(sub_83BD30A0);
PPC_FUNC_IMPL(__imp__sub_83BD30A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,26680
	ctx.r3.s64 = ctx.r11.s64 + 26680;
	// bl 0x8259af80
	ctx.lr = 0x83BD30B8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,19128
	ctx.r3.s64 = ctx.r10.s64 + 19128;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD30C4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD30D4"))) PPC_WEAK_FUNC(sub_83BD30D4);
PPC_FUNC_IMPL(__imp__sub_83BD30D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD30D8"))) PPC_WEAK_FUNC(sub_83BD30D8);
PPC_FUNC_IMPL(__imp__sub_83BD30D8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,26660
	ctx.r11.s64 = ctx.r8.s64 + 26660;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,25100(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25100);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,19120
	ctx.r3.s64 = ctx.r6.s64 + 19120;
	// stw r10,26660(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26660, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3108"))) PPC_WEAK_FUNC(sub_83BD3108);
PPC_FUNC_IMPL(__imp__sub_83BD3108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83BD3110;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31777
	ctx.r29.s64 = -2082537472;
	// addi r28,r29,25004
	ctx.r28.s64 = ctx.r29.s64 + 25004;
	// lwz r3,25004(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25004);
	// bl 0x83131890
	ctx.lr = 0x83BD3124;
	sub_83131890(ctx, base);
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r11,15
	ctx.r11.s64 = 15;
	// addi r31,r8,27024
	ctx.r31.s64 = ctx.r8.s64 + 27024;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r3,27024(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27024, ctx.r3.u32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// li r5,11
	ctx.r5.s64 = 11;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r30,r7,-26685
	ctx.r30.s64 = ctx.r7.s64 + -26685;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stb r9,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r9.u8);
	// addi r4,r30,1637
	ctx.r4.s64 = ctx.r30.s64 + 1637;
	// bl 0x8259cc28
	ctx.lr = 0x83BD3160;
	sub_8259CC28(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r11,25004(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25004);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x83131890
	ctx.lr = 0x83BD3174;
	sub_83131890(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// addi r4,r30,1625
	ctx.r4.s64 = ctx.r30.s64 + 1625;
	// stb r9,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r9.u8);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x8259cc28
	ctx.lr = 0x83BD31A0;
	sub_8259CC28(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// lwz r11,25004(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25004);
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// bl 0x83131890
	ctx.lr = 0x83BD31B4;
	sub_83131890(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// addi r4,r30,1613
	ctx.r4.s64 = ctx.r30.s64 + 1613;
	// stb r9,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r9.u8);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// bl 0x8259cc28
	ctx.lr = 0x83BD31E0;
	sub_8259CC28(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// lwz r11,25004(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25004);
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
	// bl 0x83131890
	ctx.lr = 0x83BD31F4;
	sub_83131890(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// addi r4,r30,1601
	ctx.r4.s64 = ctx.r30.s64 + 1601;
	// stb r9,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r9.u8);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8259cc28
	ctx.lr = 0x83BD3220;
	sub_8259CC28(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// lwz r11,25004(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25004);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x83131890
	ctx.lr = 0x83BD3234;
	sub_83131890(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// stw r10,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r10.u32);
	// addi r4,r30,1589
	ctx.r4.s64 = ctx.r30.s64 + 1589;
	// stb r9,148(r31)
	PPC_STORE_U8(ctx.r31.u32 + 148, ctx.r9.u8);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r31,148
	ctx.r3.s64 = ctx.r31.s64 + 148;
	// bl 0x8259cc28
	ctx.lr = 0x83BD3260;
	sub_8259CC28(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// lwz r11,25004(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25004);
	// addi r3,r11,5
	ctx.r3.s64 = ctx.r11.s64 + 5;
	// bl 0x83131890
	ctx.lr = 0x83BD3274;
	sub_83131890(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// stw r10,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r10.u32);
	// addi r4,r30,1577
	ctx.r4.s64 = ctx.r30.s64 + 1577;
	// stb r9,184(r31)
	PPC_STORE_U8(ctx.r31.u32 + 184, ctx.r9.u8);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x8259cc28
	ctx.lr = 0x83BD32A0;
	sub_8259CC28(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// bl 0x83131890
	ctx.lr = 0x83BD32B0;
	sub_83131890(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// stw r10,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r10.u32);
	// addi r4,r30,1565
	ctx.r4.s64 = ctx.r30.s64 + 1565;
	// stb r9,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r9.u8);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// bl 0x8259cc28
	ctx.lr = 0x83BD32DC;
	sub_8259CC28(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x83131890
	ctx.lr = 0x83BD32F0;
	sub_83131890(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// stw r10,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r10.u32);
	// addi r4,r30,1553
	ctx.r4.s64 = ctx.r30.s64 + 1553;
	// stb r9,256(r31)
	PPC_STORE_U8(ctx.r31.u32 + 256, ctx.r9.u8);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x8259cc28
	ctx.lr = 0x83BD331C;
	sub_8259CC28(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// bl 0x83131890
	ctx.lr = 0x83BD3330;
	sub_83131890(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// stw r10,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r10.u32);
	// addi r4,r30,1541
	ctx.r4.s64 = ctx.r30.s64 + 1541;
	// stb r9,292(r31)
	PPC_STORE_U8(ctx.r31.u32 + 292, ctx.r9.u8);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r31,292
	ctx.r3.s64 = ctx.r31.s64 + 292;
	// bl 0x8259cc28
	ctx.lr = 0x83BD335C;
	sub_8259CC28(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
	// bl 0x83131890
	ctx.lr = 0x83BD3370;
	sub_83131890(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// stw r10,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r10.u32);
	// addi r4,r30,1529
	ctx.r4.s64 = ctx.r30.s64 + 1529;
	// stb r9,328(r31)
	PPC_STORE_U8(ctx.r31.u32 + 328, ctx.r9.u8);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r31,328
	ctx.r3.s64 = ctx.r31.s64 + 328;
	// bl 0x8259cc28
	ctx.lr = 0x83BD339C;
	sub_8259CC28(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x83131890
	ctx.lr = 0x83BD33B0;
	sub_83131890(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
	// stw r10,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r10.u32);
	// addi r4,r30,1517
	ctx.r4.s64 = ctx.r30.s64 + 1517;
	// stb r9,364(r31)
	PPC_STORE_U8(ctx.r31.u32 + 364, ctx.r9.u8);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r31,364
	ctx.r3.s64 = ctx.r31.s64 + 364;
	// bl 0x8259cc28
	ctx.lr = 0x83BD33DC;
	sub_8259CC28(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r11.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r3,r11,5
	ctx.r3.s64 = ctx.r11.s64 + 5;
	// bl 0x83131890
	ctx.lr = 0x83BD33F0;
	sub_83131890(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r11.u32);
	// stw r10,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r10.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// stb r9,400(r31)
	PPC_STORE_U8(ctx.r31.u32 + 400, ctx.r9.u8);
	// addi r4,r30,1505
	ctx.r4.s64 = ctx.r30.s64 + 1505;
	// addi r3,r31,400
	ctx.r3.s64 = ctx.r31.s64 + 400;
	// bl 0x8259cc28
	ctx.lr = 0x83BD341C;
	sub_8259CC28(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r11,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r11.u32);
	// bl 0x83131890
	ctx.lr = 0x83BD342C;
	sub_83131890(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r11.u32);
	// stw r10,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r10.u32);
	// addi r4,r30,1493
	ctx.r4.s64 = ctx.r30.s64 + 1493;
	// stb r9,436(r31)
	PPC_STORE_U8(ctx.r31.u32 + 436, ctx.r9.u8);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r31,436
	ctx.r3.s64 = ctx.r31.s64 + 436;
	// bl 0x8259cc28
	ctx.lr = 0x83BD3458;
	sub_8259CC28(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r11.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x83131890
	ctx.lr = 0x83BD346C;
	sub_83131890(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r11.u32);
	// stw r10,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r10.u32);
	// addi r4,r30,1481
	ctx.r4.s64 = ctx.r30.s64 + 1481;
	// stb r9,472(r31)
	PPC_STORE_U8(ctx.r31.u32 + 472, ctx.r9.u8);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r31,472
	ctx.r3.s64 = ctx.r31.s64 + 472;
	// bl 0x8259cc28
	ctx.lr = 0x83BD3498;
	sub_8259CC28(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r11,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r11.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// bl 0x83131890
	ctx.lr = 0x83BD34AC;
	sub_83131890(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r11.u32);
	// stw r10,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r10.u32);
	// addi r4,r30,1469
	ctx.r4.s64 = ctx.r30.s64 + 1469;
	// stb r9,508(r31)
	PPC_STORE_U8(ctx.r31.u32 + 508, ctx.r9.u8);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r31,508
	ctx.r3.s64 = ctx.r31.s64 + 508;
	// bl 0x8259cc28
	ctx.lr = 0x83BD34D8;
	sub_8259CC28(ctx, base);
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r11,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r11.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
	// bl 0x83131890
	ctx.lr = 0x83BD34EC;
	sub_83131890(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r11.u32);
	// stw r10,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r10.u32);
	// addi r4,r30,1457
	ctx.r4.s64 = ctx.r30.s64 + 1457;
	// stb r9,544(r31)
	PPC_STORE_U8(ctx.r31.u32 + 544, ctx.r9.u8);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r31,544
	ctx.r3.s64 = ctx.r31.s64 + 544;
	// bl 0x8259cc28
	ctx.lr = 0x83BD3518;
	sub_8259CC28(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r11.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x83131890
	ctx.lr = 0x83BD352C;
	sub_83131890(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r11.u32);
	// stw r10,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r10.u32);
	// addi r4,r30,1445
	ctx.r4.s64 = ctx.r30.s64 + 1445;
	// stb r9,580(r31)
	PPC_STORE_U8(ctx.r31.u32 + 580, ctx.r9.u8);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r31,580
	ctx.r3.s64 = ctx.r31.s64 + 580;
	// bl 0x8259cc28
	ctx.lr = 0x83BD3558;
	sub_8259CC28(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r11.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r3,r11,5
	ctx.r3.s64 = ctx.r11.s64 + 5;
	// bl 0x83131890
	ctx.lr = 0x83BD356C;
	sub_83131890(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r11.u32);
	// stw r10,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r10.u32);
	// addi r4,r30,1433
	ctx.r4.s64 = ctx.r30.s64 + 1433;
	// stb r9,616(r31)
	PPC_STORE_U8(ctx.r31.u32 + 616, ctx.r9.u8);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r31,616
	ctx.r3.s64 = ctx.r31.s64 + 616;
	// bl 0x8259cc28
	ctx.lr = 0x83BD3598;
	sub_8259CC28(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// stw r11,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r11.u32);
	// bl 0x83131890
	ctx.lr = 0x83BD35A8;
	sub_83131890(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r3.u32);
	// stw r11,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r10.u32);
	// addi r4,r30,1421
	ctx.r4.s64 = ctx.r30.s64 + 1421;
	// stb r11,652(r31)
	PPC_STORE_U8(ctx.r31.u32 + 652, ctx.r11.u8);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r31,652
	ctx.r3.s64 = ctx.r31.s64 + 652;
	// bl 0x8259cc28
	ctx.lr = 0x83BD35D4;
	sub_8259CC28(ctx, base);
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r11,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r11.u32);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x83131890
	ctx.lr = 0x83BD35E8;
	sub_83131890(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 708, ctx.r11.u32);
	// stw r10,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r10.u32);
	// addi r4,r30,1409
	ctx.r4.s64 = ctx.r30.s64 + 1409;
	// stb r9,688(r31)
	PPC_STORE_U8(ctx.r31.u32 + 688, ctx.r9.u8);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r31,688
	ctx.r3.s64 = ctx.r31.s64 + 688;
	// bl 0x8259cc28
	ctx.lr = 0x83BD3614;
	sub_8259CC28(ctx, base);
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r11,716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 716, ctx.r11.u32);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// bl 0x83131890
	ctx.lr = 0x83BD3628;
	sub_83131890(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 744, ctx.r11.u32);
	// stw r10,740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 740, ctx.r10.u32);
	// addi r4,r30,1397
	ctx.r4.s64 = ctx.r30.s64 + 1397;
	// stb r9,724(r31)
	PPC_STORE_U8(ctx.r31.u32 + 724, ctx.r9.u8);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r31,724
	ctx.r3.s64 = ctx.r31.s64 + 724;
	// bl 0x8259cc28
	ctx.lr = 0x83BD3654;
	sub_8259CC28(ctx, base);
	// li r11,19
	ctx.r11.s64 = 19;
	// stw r11,752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 752, ctx.r11.u32);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
	// bl 0x83131890
	ctx.lr = 0x83BD3668;
	sub_83131890(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 780, ctx.r11.u32);
	// stw r10,776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 776, ctx.r10.u32);
	// addi r4,r30,1385
	ctx.r4.s64 = ctx.r30.s64 + 1385;
	// stb r9,760(r31)
	PPC_STORE_U8(ctx.r31.u32 + 760, ctx.r9.u8);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r31,760
	ctx.r3.s64 = ctx.r31.s64 + 760;
	// bl 0x8259cc28
	ctx.lr = 0x83BD3694;
	sub_8259CC28(ctx, base);
	// li r11,21
	ctx.r11.s64 = 21;
	// stw r11,788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 788, ctx.r11.u32);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x83131890
	ctx.lr = 0x83BD36A8;
	sub_83131890(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r11.u32);
	// stw r10,812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 812, ctx.r10.u32);
	// addi r4,r30,1373
	ctx.r4.s64 = ctx.r30.s64 + 1373;
	// stb r9,796(r31)
	PPC_STORE_U8(ctx.r31.u32 + 796, ctx.r9.u8);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r31,796
	ctx.r3.s64 = ctx.r31.s64 + 796;
	// bl 0x8259cc28
	ctx.lr = 0x83BD36D4;
	sub_8259CC28(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r10.u32);
	// stw r11,848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 848, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 852, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,832(r31)
	PPC_STORE_U8(ctx.r31.u32 + 832, ctx.r11.u8);
	// addi r3,r31,832
	ctx.r3.s64 = ctx.r31.s64 + 832;
	// bl 0x8259cc28
	ctx.lr = 0x83BD3708;
	sub_8259CC28(ctx, base);
	// li r11,23
	ctx.r11.s64 = 23;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// stw r11,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r11.u32);
	// addi r3,r6,19136
	ctx.r3.s64 = ctx.r6.s64 + 19136;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD371C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3724"))) PPC_WEAK_FUNC(sub_83BD3724);
PPC_FUNC_IMPL(__imp__sub_83BD3724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3728"))) PPC_WEAK_FUNC(sub_83BD3728);
PPC_FUNC_IMPL(__imp__sub_83BD3728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19240
	ctx.r3.s64 = ctx.r11.s64 + 19240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3734"))) PPC_WEAK_FUNC(sub_83BD3734);
PPC_FUNC_IMPL(__imp__sub_83BD3734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3738"))) PPC_WEAK_FUNC(sub_83BD3738);
PPC_FUNC_IMPL(__imp__sub_83BD3738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19248
	ctx.r3.s64 = ctx.r11.s64 + 19248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3744"))) PPC_WEAK_FUNC(sub_83BD3744);
PPC_FUNC_IMPL(__imp__sub_83BD3744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3748"))) PPC_WEAK_FUNC(sub_83BD3748);
PPC_FUNC_IMPL(__imp__sub_83BD3748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19256
	ctx.r3.s64 = ctx.r11.s64 + 19256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3754"))) PPC_WEAK_FUNC(sub_83BD3754);
PPC_FUNC_IMPL(__imp__sub_83BD3754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3758"))) PPC_WEAK_FUNC(sub_83BD3758);
PPC_FUNC_IMPL(__imp__sub_83BD3758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19264
	ctx.r3.s64 = ctx.r11.s64 + 19264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3764"))) PPC_WEAK_FUNC(sub_83BD3764);
PPC_FUNC_IMPL(__imp__sub_83BD3764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3768"))) PPC_WEAK_FUNC(sub_83BD3768);
PPC_FUNC_IMPL(__imp__sub_83BD3768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19272
	ctx.r3.s64 = ctx.r11.s64 + 19272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3774"))) PPC_WEAK_FUNC(sub_83BD3774);
PPC_FUNC_IMPL(__imp__sub_83BD3774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3778"))) PPC_WEAK_FUNC(sub_83BD3778);
PPC_FUNC_IMPL(__imp__sub_83BD3778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19280
	ctx.r3.s64 = ctx.r11.s64 + 19280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3784"))) PPC_WEAK_FUNC(sub_83BD3784);
PPC_FUNC_IMPL(__imp__sub_83BD3784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3788"))) PPC_WEAK_FUNC(sub_83BD3788);
PPC_FUNC_IMPL(__imp__sub_83BD3788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19288
	ctx.r3.s64 = ctx.r11.s64 + 19288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3794"))) PPC_WEAK_FUNC(sub_83BD3794);
PPC_FUNC_IMPL(__imp__sub_83BD3794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3798"))) PPC_WEAK_FUNC(sub_83BD3798);
PPC_FUNC_IMPL(__imp__sub_83BD3798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19296
	ctx.r3.s64 = ctx.r11.s64 + 19296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD37A4"))) PPC_WEAK_FUNC(sub_83BD37A4);
PPC_FUNC_IMPL(__imp__sub_83BD37A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD37A8"))) PPC_WEAK_FUNC(sub_83BD37A8);
PPC_FUNC_IMPL(__imp__sub_83BD37A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19304
	ctx.r3.s64 = ctx.r11.s64 + 19304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD37B4"))) PPC_WEAK_FUNC(sub_83BD37B4);
PPC_FUNC_IMPL(__imp__sub_83BD37B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD37B8"))) PPC_WEAK_FUNC(sub_83BD37B8);
PPC_FUNC_IMPL(__imp__sub_83BD37B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19312
	ctx.r3.s64 = ctx.r11.s64 + 19312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD37C4"))) PPC_WEAK_FUNC(sub_83BD37C4);
PPC_FUNC_IMPL(__imp__sub_83BD37C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD37C8"))) PPC_WEAK_FUNC(sub_83BD37C8);
PPC_FUNC_IMPL(__imp__sub_83BD37C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19320
	ctx.r3.s64 = ctx.r11.s64 + 19320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD37D4"))) PPC_WEAK_FUNC(sub_83BD37D4);
PPC_FUNC_IMPL(__imp__sub_83BD37D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD37D8"))) PPC_WEAK_FUNC(sub_83BD37D8);
PPC_FUNC_IMPL(__imp__sub_83BD37D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19328
	ctx.r3.s64 = ctx.r11.s64 + 19328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD37E4"))) PPC_WEAK_FUNC(sub_83BD37E4);
PPC_FUNC_IMPL(__imp__sub_83BD37E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD37E8"))) PPC_WEAK_FUNC(sub_83BD37E8);
PPC_FUNC_IMPL(__imp__sub_83BD37E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,27888
	ctx.r3.s64 = ctx.r11.s64 + 27888;
	// bl 0x83523120
	ctx.lr = 0x83BD3800;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,19336
	ctx.r3.s64 = ctx.r10.s64 + 19336;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD380C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD381C"))) PPC_WEAK_FUNC(sub_83BD381C);
PPC_FUNC_IMPL(__imp__sub_83BD381C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3820"))) PPC_WEAK_FUNC(sub_83BD3820);
PPC_FUNC_IMPL(__imp__sub_83BD3820) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,27904
	ctx.r7.s64 = ctx.r8.s64 + 27904;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,27904(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27904);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,27904(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27904, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD3848"))) PPC_WEAK_FUNC(sub_83BD3848);
PPC_FUNC_IMPL(__imp__sub_83BD3848) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,25276
	ctx.r6.s64 = ctx.r7.s64 + 25276;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,25204(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 25204);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,27904(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 27904);
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
	// std r9,25276(r7)
	PPC_STORE_U64(ctx.r7.u32 + 25276, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD3890"))) PPC_WEAK_FUNC(sub_83BD3890);
PPC_FUNC_IMPL(__imp__sub_83BD3890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19352
	ctx.r3.s64 = ctx.r11.s64 + 19352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD389C"))) PPC_WEAK_FUNC(sub_83BD389C);
PPC_FUNC_IMPL(__imp__sub_83BD389C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD38A0"))) PPC_WEAK_FUNC(sub_83BD38A0);
PPC_FUNC_IMPL(__imp__sub_83BD38A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,27912
	ctx.r3.s64 = ctx.r11.s64 + 27912;
	// bl 0x8259af80
	ctx.lr = 0x83BD38B8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,19368
	ctx.r3.s64 = ctx.r10.s64 + 19368;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD38C4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD38D4"))) PPC_WEAK_FUNC(sub_83BD38D4);
PPC_FUNC_IMPL(__imp__sub_83BD38D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD38D8"))) PPC_WEAK_FUNC(sub_83BD38D8);
PPC_FUNC_IMPL(__imp__sub_83BD38D8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,27892
	ctx.r11.s64 = ctx.r8.s64 + 27892;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,25252(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25252);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,19360
	ctx.r3.s64 = ctx.r6.s64 + 19360;
	// stw r10,27892(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27892, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3908"))) PPC_WEAK_FUNC(sub_83BD3908);
PPC_FUNC_IMPL(__imp__sub_83BD3908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19376
	ctx.r3.s64 = ctx.r11.s64 + 19376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3914"))) PPC_WEAK_FUNC(sub_83BD3914);
PPC_FUNC_IMPL(__imp__sub_83BD3914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3918"))) PPC_WEAK_FUNC(sub_83BD3918);
PPC_FUNC_IMPL(__imp__sub_83BD3918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19384
	ctx.r3.s64 = ctx.r11.s64 + 19384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3924"))) PPC_WEAK_FUNC(sub_83BD3924);
PPC_FUNC_IMPL(__imp__sub_83BD3924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3928"))) PPC_WEAK_FUNC(sub_83BD3928);
PPC_FUNC_IMPL(__imp__sub_83BD3928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19392
	ctx.r3.s64 = ctx.r11.s64 + 19392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3934"))) PPC_WEAK_FUNC(sub_83BD3934);
PPC_FUNC_IMPL(__imp__sub_83BD3934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3938"))) PPC_WEAK_FUNC(sub_83BD3938);
PPC_FUNC_IMPL(__imp__sub_83BD3938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19400
	ctx.r3.s64 = ctx.r11.s64 + 19400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3944"))) PPC_WEAK_FUNC(sub_83BD3944);
PPC_FUNC_IMPL(__imp__sub_83BD3944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3948"))) PPC_WEAK_FUNC(sub_83BD3948);
PPC_FUNC_IMPL(__imp__sub_83BD3948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19408
	ctx.r3.s64 = ctx.r11.s64 + 19408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3954"))) PPC_WEAK_FUNC(sub_83BD3954);
PPC_FUNC_IMPL(__imp__sub_83BD3954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3958"))) PPC_WEAK_FUNC(sub_83BD3958);
PPC_FUNC_IMPL(__imp__sub_83BD3958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19416
	ctx.r3.s64 = ctx.r11.s64 + 19416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3964"))) PPC_WEAK_FUNC(sub_83BD3964);
PPC_FUNC_IMPL(__imp__sub_83BD3964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3968"))) PPC_WEAK_FUNC(sub_83BD3968);
PPC_FUNC_IMPL(__imp__sub_83BD3968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19424
	ctx.r3.s64 = ctx.r11.s64 + 19424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3974"))) PPC_WEAK_FUNC(sub_83BD3974);
PPC_FUNC_IMPL(__imp__sub_83BD3974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3978"))) PPC_WEAK_FUNC(sub_83BD3978);
PPC_FUNC_IMPL(__imp__sub_83BD3978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19432
	ctx.r3.s64 = ctx.r11.s64 + 19432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3984"))) PPC_WEAK_FUNC(sub_83BD3984);
PPC_FUNC_IMPL(__imp__sub_83BD3984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3988"))) PPC_WEAK_FUNC(sub_83BD3988);
PPC_FUNC_IMPL(__imp__sub_83BD3988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19440
	ctx.r3.s64 = ctx.r11.s64 + 19440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3994"))) PPC_WEAK_FUNC(sub_83BD3994);
PPC_FUNC_IMPL(__imp__sub_83BD3994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3998"))) PPC_WEAK_FUNC(sub_83BD3998);
PPC_FUNC_IMPL(__imp__sub_83BD3998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19448
	ctx.r3.s64 = ctx.r11.s64 + 19448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD39A4"))) PPC_WEAK_FUNC(sub_83BD39A4);
PPC_FUNC_IMPL(__imp__sub_83BD39A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD39A8"))) PPC_WEAK_FUNC(sub_83BD39A8);
PPC_FUNC_IMPL(__imp__sub_83BD39A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19456
	ctx.r3.s64 = ctx.r11.s64 + 19456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD39B4"))) PPC_WEAK_FUNC(sub_83BD39B4);
PPC_FUNC_IMPL(__imp__sub_83BD39B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD39B8"))) PPC_WEAK_FUNC(sub_83BD39B8);
PPC_FUNC_IMPL(__imp__sub_83BD39B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19464
	ctx.r3.s64 = ctx.r11.s64 + 19464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD39C4"))) PPC_WEAK_FUNC(sub_83BD39C4);
PPC_FUNC_IMPL(__imp__sub_83BD39C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD39C8"))) PPC_WEAK_FUNC(sub_83BD39C8);
PPC_FUNC_IMPL(__imp__sub_83BD39C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,28256
	ctx.r3.s64 = ctx.r11.s64 + 28256;
	// bl 0x83523120
	ctx.lr = 0x83BD39E0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,19472
	ctx.r3.s64 = ctx.r10.s64 + 19472;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD39EC;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD39FC"))) PPC_WEAK_FUNC(sub_83BD39FC);
PPC_FUNC_IMPL(__imp__sub_83BD39FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3A00"))) PPC_WEAK_FUNC(sub_83BD3A00);
PPC_FUNC_IMPL(__imp__sub_83BD3A00) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,28272
	ctx.r7.s64 = ctx.r8.s64 + 28272;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,28272(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28272);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,28272(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28272, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD3A28"))) PPC_WEAK_FUNC(sub_83BD3A28);
PPC_FUNC_IMPL(__imp__sub_83BD3A28) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,25404
	ctx.r6.s64 = ctx.r7.s64 + 25404;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,25332(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 25332);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,28272(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28272);
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
	// std r9,25404(r7)
	PPC_STORE_U64(ctx.r7.u32 + 25404, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD3A70"))) PPC_WEAK_FUNC(sub_83BD3A70);
PPC_FUNC_IMPL(__imp__sub_83BD3A70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19488
	ctx.r3.s64 = ctx.r11.s64 + 19488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3A7C"))) PPC_WEAK_FUNC(sub_83BD3A7C);
PPC_FUNC_IMPL(__imp__sub_83BD3A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3A80"))) PPC_WEAK_FUNC(sub_83BD3A80);
PPC_FUNC_IMPL(__imp__sub_83BD3A80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,28280
	ctx.r3.s64 = ctx.r11.s64 + 28280;
	// bl 0x8259af80
	ctx.lr = 0x83BD3A98;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,19504
	ctx.r3.s64 = ctx.r10.s64 + 19504;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD3AA4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD3AB4"))) PPC_WEAK_FUNC(sub_83BD3AB4);
PPC_FUNC_IMPL(__imp__sub_83BD3AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3AB8"))) PPC_WEAK_FUNC(sub_83BD3AB8);
PPC_FUNC_IMPL(__imp__sub_83BD3AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,28260
	ctx.r11.s64 = ctx.r8.s64 + 28260;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,25380(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25380);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,19496
	ctx.r3.s64 = ctx.r6.s64 + 19496;
	// stw r10,28260(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28260, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3AE8"))) PPC_WEAK_FUNC(sub_83BD3AE8);
PPC_FUNC_IMPL(__imp__sub_83BD3AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19512
	ctx.r3.s64 = ctx.r11.s64 + 19512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3AF4"))) PPC_WEAK_FUNC(sub_83BD3AF4);
PPC_FUNC_IMPL(__imp__sub_83BD3AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3AF8"))) PPC_WEAK_FUNC(sub_83BD3AF8);
PPC_FUNC_IMPL(__imp__sub_83BD3AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19520
	ctx.r3.s64 = ctx.r11.s64 + 19520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3B04"))) PPC_WEAK_FUNC(sub_83BD3B04);
PPC_FUNC_IMPL(__imp__sub_83BD3B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3B08"))) PPC_WEAK_FUNC(sub_83BD3B08);
PPC_FUNC_IMPL(__imp__sub_83BD3B08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19528
	ctx.r3.s64 = ctx.r11.s64 + 19528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3B14"))) PPC_WEAK_FUNC(sub_83BD3B14);
PPC_FUNC_IMPL(__imp__sub_83BD3B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3B18"))) PPC_WEAK_FUNC(sub_83BD3B18);
PPC_FUNC_IMPL(__imp__sub_83BD3B18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19536
	ctx.r3.s64 = ctx.r11.s64 + 19536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3B24"))) PPC_WEAK_FUNC(sub_83BD3B24);
PPC_FUNC_IMPL(__imp__sub_83BD3B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3B28"))) PPC_WEAK_FUNC(sub_83BD3B28);
PPC_FUNC_IMPL(__imp__sub_83BD3B28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19544
	ctx.r3.s64 = ctx.r11.s64 + 19544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3B34"))) PPC_WEAK_FUNC(sub_83BD3B34);
PPC_FUNC_IMPL(__imp__sub_83BD3B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3B38"))) PPC_WEAK_FUNC(sub_83BD3B38);
PPC_FUNC_IMPL(__imp__sub_83BD3B38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19552
	ctx.r3.s64 = ctx.r11.s64 + 19552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3B44"))) PPC_WEAK_FUNC(sub_83BD3B44);
PPC_FUNC_IMPL(__imp__sub_83BD3B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3B48"))) PPC_WEAK_FUNC(sub_83BD3B48);
PPC_FUNC_IMPL(__imp__sub_83BD3B48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19560
	ctx.r3.s64 = ctx.r11.s64 + 19560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3B54"))) PPC_WEAK_FUNC(sub_83BD3B54);
PPC_FUNC_IMPL(__imp__sub_83BD3B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3B58"))) PPC_WEAK_FUNC(sub_83BD3B58);
PPC_FUNC_IMPL(__imp__sub_83BD3B58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19568
	ctx.r3.s64 = ctx.r11.s64 + 19568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3B64"))) PPC_WEAK_FUNC(sub_83BD3B64);
PPC_FUNC_IMPL(__imp__sub_83BD3B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3B68"))) PPC_WEAK_FUNC(sub_83BD3B68);
PPC_FUNC_IMPL(__imp__sub_83BD3B68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19576
	ctx.r3.s64 = ctx.r11.s64 + 19576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3B74"))) PPC_WEAK_FUNC(sub_83BD3B74);
PPC_FUNC_IMPL(__imp__sub_83BD3B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3B78"))) PPC_WEAK_FUNC(sub_83BD3B78);
PPC_FUNC_IMPL(__imp__sub_83BD3B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19584
	ctx.r3.s64 = ctx.r11.s64 + 19584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3B84"))) PPC_WEAK_FUNC(sub_83BD3B84);
PPC_FUNC_IMPL(__imp__sub_83BD3B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3B88"))) PPC_WEAK_FUNC(sub_83BD3B88);
PPC_FUNC_IMPL(__imp__sub_83BD3B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19592
	ctx.r3.s64 = ctx.r11.s64 + 19592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3B94"))) PPC_WEAK_FUNC(sub_83BD3B94);
PPC_FUNC_IMPL(__imp__sub_83BD3B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3B98"))) PPC_WEAK_FUNC(sub_83BD3B98);
PPC_FUNC_IMPL(__imp__sub_83BD3B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19600
	ctx.r3.s64 = ctx.r11.s64 + 19600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3BA4"))) PPC_WEAK_FUNC(sub_83BD3BA4);
PPC_FUNC_IMPL(__imp__sub_83BD3BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3BA8"))) PPC_WEAK_FUNC(sub_83BD3BA8);
PPC_FUNC_IMPL(__imp__sub_83BD3BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,28624
	ctx.r3.s64 = ctx.r11.s64 + 28624;
	// bl 0x83523120
	ctx.lr = 0x83BD3BC0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,19608
	ctx.r3.s64 = ctx.r10.s64 + 19608;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD3BCC;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD3BDC"))) PPC_WEAK_FUNC(sub_83BD3BDC);
PPC_FUNC_IMPL(__imp__sub_83BD3BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3BE0"))) PPC_WEAK_FUNC(sub_83BD3BE0);
PPC_FUNC_IMPL(__imp__sub_83BD3BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,28640
	ctx.r7.s64 = ctx.r8.s64 + 28640;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,28640(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28640);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,28640(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28640, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD3C08"))) PPC_WEAK_FUNC(sub_83BD3C08);
PPC_FUNC_IMPL(__imp__sub_83BD3C08) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,25532
	ctx.r6.s64 = ctx.r7.s64 + 25532;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,25460(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 25460);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,28640(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28640);
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
	// std r9,25532(r7)
	PPC_STORE_U64(ctx.r7.u32 + 25532, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD3C50"))) PPC_WEAK_FUNC(sub_83BD3C50);
PPC_FUNC_IMPL(__imp__sub_83BD3C50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19624
	ctx.r3.s64 = ctx.r11.s64 + 19624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3C5C"))) PPC_WEAK_FUNC(sub_83BD3C5C);
PPC_FUNC_IMPL(__imp__sub_83BD3C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3C60"))) PPC_WEAK_FUNC(sub_83BD3C60);
PPC_FUNC_IMPL(__imp__sub_83BD3C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,28648
	ctx.r3.s64 = ctx.r11.s64 + 28648;
	// bl 0x8259af80
	ctx.lr = 0x83BD3C78;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,19640
	ctx.r3.s64 = ctx.r10.s64 + 19640;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD3C84;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD3C94"))) PPC_WEAK_FUNC(sub_83BD3C94);
PPC_FUNC_IMPL(__imp__sub_83BD3C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3C98"))) PPC_WEAK_FUNC(sub_83BD3C98);
PPC_FUNC_IMPL(__imp__sub_83BD3C98) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,28628
	ctx.r11.s64 = ctx.r8.s64 + 28628;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,25508(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25508);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,19632
	ctx.r3.s64 = ctx.r6.s64 + 19632;
	// stw r10,28628(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28628, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3CC8"))) PPC_WEAK_FUNC(sub_83BD3CC8);
PPC_FUNC_IMPL(__imp__sub_83BD3CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19648
	ctx.r3.s64 = ctx.r11.s64 + 19648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3CD4"))) PPC_WEAK_FUNC(sub_83BD3CD4);
PPC_FUNC_IMPL(__imp__sub_83BD3CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3CD8"))) PPC_WEAK_FUNC(sub_83BD3CD8);
PPC_FUNC_IMPL(__imp__sub_83BD3CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19656
	ctx.r3.s64 = ctx.r11.s64 + 19656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3CE4"))) PPC_WEAK_FUNC(sub_83BD3CE4);
PPC_FUNC_IMPL(__imp__sub_83BD3CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3CE8"))) PPC_WEAK_FUNC(sub_83BD3CE8);
PPC_FUNC_IMPL(__imp__sub_83BD3CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19664
	ctx.r3.s64 = ctx.r11.s64 + 19664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3CF4"))) PPC_WEAK_FUNC(sub_83BD3CF4);
PPC_FUNC_IMPL(__imp__sub_83BD3CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3CF8"))) PPC_WEAK_FUNC(sub_83BD3CF8);
PPC_FUNC_IMPL(__imp__sub_83BD3CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19672
	ctx.r3.s64 = ctx.r11.s64 + 19672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3D04"))) PPC_WEAK_FUNC(sub_83BD3D04);
PPC_FUNC_IMPL(__imp__sub_83BD3D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3D08"))) PPC_WEAK_FUNC(sub_83BD3D08);
PPC_FUNC_IMPL(__imp__sub_83BD3D08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19680
	ctx.r3.s64 = ctx.r11.s64 + 19680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3D14"))) PPC_WEAK_FUNC(sub_83BD3D14);
PPC_FUNC_IMPL(__imp__sub_83BD3D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3D18"))) PPC_WEAK_FUNC(sub_83BD3D18);
PPC_FUNC_IMPL(__imp__sub_83BD3D18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19688
	ctx.r3.s64 = ctx.r11.s64 + 19688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3D24"))) PPC_WEAK_FUNC(sub_83BD3D24);
PPC_FUNC_IMPL(__imp__sub_83BD3D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3D28"))) PPC_WEAK_FUNC(sub_83BD3D28);
PPC_FUNC_IMPL(__imp__sub_83BD3D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19696
	ctx.r3.s64 = ctx.r11.s64 + 19696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3D34"))) PPC_WEAK_FUNC(sub_83BD3D34);
PPC_FUNC_IMPL(__imp__sub_83BD3D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3D38"))) PPC_WEAK_FUNC(sub_83BD3D38);
PPC_FUNC_IMPL(__imp__sub_83BD3D38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19704
	ctx.r3.s64 = ctx.r11.s64 + 19704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3D44"))) PPC_WEAK_FUNC(sub_83BD3D44);
PPC_FUNC_IMPL(__imp__sub_83BD3D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3D48"))) PPC_WEAK_FUNC(sub_83BD3D48);
PPC_FUNC_IMPL(__imp__sub_83BD3D48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19712
	ctx.r3.s64 = ctx.r11.s64 + 19712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3D54"))) PPC_WEAK_FUNC(sub_83BD3D54);
PPC_FUNC_IMPL(__imp__sub_83BD3D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3D58"))) PPC_WEAK_FUNC(sub_83BD3D58);
PPC_FUNC_IMPL(__imp__sub_83BD3D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19720
	ctx.r3.s64 = ctx.r11.s64 + 19720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3D64"))) PPC_WEAK_FUNC(sub_83BD3D64);
PPC_FUNC_IMPL(__imp__sub_83BD3D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3D68"))) PPC_WEAK_FUNC(sub_83BD3D68);
PPC_FUNC_IMPL(__imp__sub_83BD3D68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19728
	ctx.r3.s64 = ctx.r11.s64 + 19728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3D74"))) PPC_WEAK_FUNC(sub_83BD3D74);
PPC_FUNC_IMPL(__imp__sub_83BD3D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3D78"))) PPC_WEAK_FUNC(sub_83BD3D78);
PPC_FUNC_IMPL(__imp__sub_83BD3D78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19736
	ctx.r3.s64 = ctx.r11.s64 + 19736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3D84"))) PPC_WEAK_FUNC(sub_83BD3D84);
PPC_FUNC_IMPL(__imp__sub_83BD3D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3D88"))) PPC_WEAK_FUNC(sub_83BD3D88);
PPC_FUNC_IMPL(__imp__sub_83BD3D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,28992
	ctx.r3.s64 = ctx.r11.s64 + 28992;
	// bl 0x83523120
	ctx.lr = 0x83BD3DA0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,19744
	ctx.r3.s64 = ctx.r10.s64 + 19744;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD3DAC;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD3DBC"))) PPC_WEAK_FUNC(sub_83BD3DBC);
PPC_FUNC_IMPL(__imp__sub_83BD3DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3DC0"))) PPC_WEAK_FUNC(sub_83BD3DC0);
PPC_FUNC_IMPL(__imp__sub_83BD3DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,29008
	ctx.r7.s64 = ctx.r8.s64 + 29008;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,29008(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 29008);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,29008(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29008, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD3DE8"))) PPC_WEAK_FUNC(sub_83BD3DE8);
PPC_FUNC_IMPL(__imp__sub_83BD3DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,25708
	ctx.r6.s64 = ctx.r7.s64 + 25708;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,25636(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 25636);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,29008(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29008);
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
	// std r9,25708(r7)
	PPC_STORE_U64(ctx.r7.u32 + 25708, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD3E30"))) PPC_WEAK_FUNC(sub_83BD3E30);
PPC_FUNC_IMPL(__imp__sub_83BD3E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19760
	ctx.r3.s64 = ctx.r11.s64 + 19760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3E3C"))) PPC_WEAK_FUNC(sub_83BD3E3C);
PPC_FUNC_IMPL(__imp__sub_83BD3E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3E40"))) PPC_WEAK_FUNC(sub_83BD3E40);
PPC_FUNC_IMPL(__imp__sub_83BD3E40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,29016
	ctx.r3.s64 = ctx.r11.s64 + 29016;
	// bl 0x8259af80
	ctx.lr = 0x83BD3E58;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,19776
	ctx.r3.s64 = ctx.r10.s64 + 19776;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD3E64;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD3E74"))) PPC_WEAK_FUNC(sub_83BD3E74);
PPC_FUNC_IMPL(__imp__sub_83BD3E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3E78"))) PPC_WEAK_FUNC(sub_83BD3E78);
PPC_FUNC_IMPL(__imp__sub_83BD3E78) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,28996
	ctx.r11.s64 = ctx.r8.s64 + 28996;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,25684(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25684);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,19768
	ctx.r3.s64 = ctx.r6.s64 + 19768;
	// stw r10,28996(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28996, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3EA8"))) PPC_WEAK_FUNC(sub_83BD3EA8);
PPC_FUNC_IMPL(__imp__sub_83BD3EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19784
	ctx.r3.s64 = ctx.r11.s64 + 19784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3EB4"))) PPC_WEAK_FUNC(sub_83BD3EB4);
PPC_FUNC_IMPL(__imp__sub_83BD3EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3EB8"))) PPC_WEAK_FUNC(sub_83BD3EB8);
PPC_FUNC_IMPL(__imp__sub_83BD3EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19792
	ctx.r3.s64 = ctx.r11.s64 + 19792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3EC4"))) PPC_WEAK_FUNC(sub_83BD3EC4);
PPC_FUNC_IMPL(__imp__sub_83BD3EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3EC8"))) PPC_WEAK_FUNC(sub_83BD3EC8);
PPC_FUNC_IMPL(__imp__sub_83BD3EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19800
	ctx.r3.s64 = ctx.r11.s64 + 19800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3ED4"))) PPC_WEAK_FUNC(sub_83BD3ED4);
PPC_FUNC_IMPL(__imp__sub_83BD3ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3ED8"))) PPC_WEAK_FUNC(sub_83BD3ED8);
PPC_FUNC_IMPL(__imp__sub_83BD3ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19808
	ctx.r3.s64 = ctx.r11.s64 + 19808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3EE4"))) PPC_WEAK_FUNC(sub_83BD3EE4);
PPC_FUNC_IMPL(__imp__sub_83BD3EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3EE8"))) PPC_WEAK_FUNC(sub_83BD3EE8);
PPC_FUNC_IMPL(__imp__sub_83BD3EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19816
	ctx.r3.s64 = ctx.r11.s64 + 19816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3EF4"))) PPC_WEAK_FUNC(sub_83BD3EF4);
PPC_FUNC_IMPL(__imp__sub_83BD3EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3EF8"))) PPC_WEAK_FUNC(sub_83BD3EF8);
PPC_FUNC_IMPL(__imp__sub_83BD3EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19824
	ctx.r3.s64 = ctx.r11.s64 + 19824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3F04"))) PPC_WEAK_FUNC(sub_83BD3F04);
PPC_FUNC_IMPL(__imp__sub_83BD3F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3F08"))) PPC_WEAK_FUNC(sub_83BD3F08);
PPC_FUNC_IMPL(__imp__sub_83BD3F08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19832
	ctx.r3.s64 = ctx.r11.s64 + 19832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3F14"))) PPC_WEAK_FUNC(sub_83BD3F14);
PPC_FUNC_IMPL(__imp__sub_83BD3F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3F18"))) PPC_WEAK_FUNC(sub_83BD3F18);
PPC_FUNC_IMPL(__imp__sub_83BD3F18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19840
	ctx.r3.s64 = ctx.r11.s64 + 19840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3F24"))) PPC_WEAK_FUNC(sub_83BD3F24);
PPC_FUNC_IMPL(__imp__sub_83BD3F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3F28"))) PPC_WEAK_FUNC(sub_83BD3F28);
PPC_FUNC_IMPL(__imp__sub_83BD3F28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19848
	ctx.r3.s64 = ctx.r11.s64 + 19848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3F34"))) PPC_WEAK_FUNC(sub_83BD3F34);
PPC_FUNC_IMPL(__imp__sub_83BD3F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3F38"))) PPC_WEAK_FUNC(sub_83BD3F38);
PPC_FUNC_IMPL(__imp__sub_83BD3F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19856
	ctx.r3.s64 = ctx.r11.s64 + 19856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3F44"))) PPC_WEAK_FUNC(sub_83BD3F44);
PPC_FUNC_IMPL(__imp__sub_83BD3F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3F48"))) PPC_WEAK_FUNC(sub_83BD3F48);
PPC_FUNC_IMPL(__imp__sub_83BD3F48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19864
	ctx.r3.s64 = ctx.r11.s64 + 19864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3F54"))) PPC_WEAK_FUNC(sub_83BD3F54);
PPC_FUNC_IMPL(__imp__sub_83BD3F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3F58"))) PPC_WEAK_FUNC(sub_83BD3F58);
PPC_FUNC_IMPL(__imp__sub_83BD3F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19872
	ctx.r3.s64 = ctx.r11.s64 + 19872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD3F64"))) PPC_WEAK_FUNC(sub_83BD3F64);
PPC_FUNC_IMPL(__imp__sub_83BD3F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3F68"))) PPC_WEAK_FUNC(sub_83BD3F68);
PPC_FUNC_IMPL(__imp__sub_83BD3F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,29360
	ctx.r3.s64 = ctx.r11.s64 + 29360;
	// bl 0x83523120
	ctx.lr = 0x83BD3F80;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,19880
	ctx.r3.s64 = ctx.r10.s64 + 19880;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD3F8C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD3F9C"))) PPC_WEAK_FUNC(sub_83BD3F9C);
PPC_FUNC_IMPL(__imp__sub_83BD3F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD3FA0"))) PPC_WEAK_FUNC(sub_83BD3FA0);
PPC_FUNC_IMPL(__imp__sub_83BD3FA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,29376
	ctx.r7.s64 = ctx.r8.s64 + 29376;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,29376(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 29376);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,29376(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29376, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD3FC8"))) PPC_WEAK_FUNC(sub_83BD3FC8);
PPC_FUNC_IMPL(__imp__sub_83BD3FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,25848
	ctx.r6.s64 = ctx.r7.s64 + 25848;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,25776(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 25776);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,29376(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29376);
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
	// std r9,25848(r7)
	PPC_STORE_U64(ctx.r7.u32 + 25848, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD4010"))) PPC_WEAK_FUNC(sub_83BD4010);
PPC_FUNC_IMPL(__imp__sub_83BD4010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19896
	ctx.r3.s64 = ctx.r11.s64 + 19896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD401C"))) PPC_WEAK_FUNC(sub_83BD401C);
PPC_FUNC_IMPL(__imp__sub_83BD401C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD4020"))) PPC_WEAK_FUNC(sub_83BD4020);
PPC_FUNC_IMPL(__imp__sub_83BD4020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,29384
	ctx.r3.s64 = ctx.r11.s64 + 29384;
	// bl 0x8259af80
	ctx.lr = 0x83BD4038;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,19912
	ctx.r3.s64 = ctx.r10.s64 + 19912;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD4044;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD4054"))) PPC_WEAK_FUNC(sub_83BD4054);
PPC_FUNC_IMPL(__imp__sub_83BD4054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD4058"))) PPC_WEAK_FUNC(sub_83BD4058);
PPC_FUNC_IMPL(__imp__sub_83BD4058) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,29364
	ctx.r11.s64 = ctx.r8.s64 + 29364;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,25824(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25824);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,19904
	ctx.r3.s64 = ctx.r6.s64 + 19904;
	// stw r10,29364(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29364, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD4088"))) PPC_WEAK_FUNC(sub_83BD4088);
PPC_FUNC_IMPL(__imp__sub_83BD4088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19920
	ctx.r3.s64 = ctx.r11.s64 + 19920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD4094"))) PPC_WEAK_FUNC(sub_83BD4094);
PPC_FUNC_IMPL(__imp__sub_83BD4094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD4098"))) PPC_WEAK_FUNC(sub_83BD4098);
PPC_FUNC_IMPL(__imp__sub_83BD4098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19928
	ctx.r3.s64 = ctx.r11.s64 + 19928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD40A4"))) PPC_WEAK_FUNC(sub_83BD40A4);
PPC_FUNC_IMPL(__imp__sub_83BD40A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD40A8"))) PPC_WEAK_FUNC(sub_83BD40A8);
PPC_FUNC_IMPL(__imp__sub_83BD40A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19936
	ctx.r3.s64 = ctx.r11.s64 + 19936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD40B4"))) PPC_WEAK_FUNC(sub_83BD40B4);
PPC_FUNC_IMPL(__imp__sub_83BD40B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD40B8"))) PPC_WEAK_FUNC(sub_83BD40B8);
PPC_FUNC_IMPL(__imp__sub_83BD40B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19944
	ctx.r3.s64 = ctx.r11.s64 + 19944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD40C4"))) PPC_WEAK_FUNC(sub_83BD40C4);
PPC_FUNC_IMPL(__imp__sub_83BD40C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD40C8"))) PPC_WEAK_FUNC(sub_83BD40C8);
PPC_FUNC_IMPL(__imp__sub_83BD40C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19952
	ctx.r3.s64 = ctx.r11.s64 + 19952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD40D4"))) PPC_WEAK_FUNC(sub_83BD40D4);
PPC_FUNC_IMPL(__imp__sub_83BD40D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD40D8"))) PPC_WEAK_FUNC(sub_83BD40D8);
PPC_FUNC_IMPL(__imp__sub_83BD40D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19960
	ctx.r3.s64 = ctx.r11.s64 + 19960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD40E4"))) PPC_WEAK_FUNC(sub_83BD40E4);
PPC_FUNC_IMPL(__imp__sub_83BD40E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD40E8"))) PPC_WEAK_FUNC(sub_83BD40E8);
PPC_FUNC_IMPL(__imp__sub_83BD40E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19968
	ctx.r3.s64 = ctx.r11.s64 + 19968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD40F4"))) PPC_WEAK_FUNC(sub_83BD40F4);
PPC_FUNC_IMPL(__imp__sub_83BD40F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD40F8"))) PPC_WEAK_FUNC(sub_83BD40F8);
PPC_FUNC_IMPL(__imp__sub_83BD40F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19976
	ctx.r3.s64 = ctx.r11.s64 + 19976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD4104"))) PPC_WEAK_FUNC(sub_83BD4104);
PPC_FUNC_IMPL(__imp__sub_83BD4104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD4108"))) PPC_WEAK_FUNC(sub_83BD4108);
PPC_FUNC_IMPL(__imp__sub_83BD4108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19984
	ctx.r3.s64 = ctx.r11.s64 + 19984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD4114"))) PPC_WEAK_FUNC(sub_83BD4114);
PPC_FUNC_IMPL(__imp__sub_83BD4114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD4118"))) PPC_WEAK_FUNC(sub_83BD4118);
PPC_FUNC_IMPL(__imp__sub_83BD4118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,19992
	ctx.r3.s64 = ctx.r11.s64 + 19992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD4124"))) PPC_WEAK_FUNC(sub_83BD4124);
PPC_FUNC_IMPL(__imp__sub_83BD4124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD4128"))) PPC_WEAK_FUNC(sub_83BD4128);
PPC_FUNC_IMPL(__imp__sub_83BD4128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,20000
	ctx.r3.s64 = ctx.r11.s64 + 20000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD4134"))) PPC_WEAK_FUNC(sub_83BD4134);
PPC_FUNC_IMPL(__imp__sub_83BD4134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD4138"))) PPC_WEAK_FUNC(sub_83BD4138);
PPC_FUNC_IMPL(__imp__sub_83BD4138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,20008
	ctx.r3.s64 = ctx.r11.s64 + 20008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD4144"))) PPC_WEAK_FUNC(sub_83BD4144);
PPC_FUNC_IMPL(__imp__sub_83BD4144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD4148"))) PPC_WEAK_FUNC(sub_83BD4148);
PPC_FUNC_IMPL(__imp__sub_83BD4148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,29728
	ctx.r3.s64 = ctx.r11.s64 + 29728;
	// bl 0x83523120
	ctx.lr = 0x83BD4160;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,20016
	ctx.r3.s64 = ctx.r10.s64 + 20016;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD416C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD417C"))) PPC_WEAK_FUNC(sub_83BD417C);
PPC_FUNC_IMPL(__imp__sub_83BD417C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD4180"))) PPC_WEAK_FUNC(sub_83BD4180);
PPC_FUNC_IMPL(__imp__sub_83BD4180) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,29744
	ctx.r7.s64 = ctx.r8.s64 + 29744;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,29744(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 29744);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,29744(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29744, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD41A8"))) PPC_WEAK_FUNC(sub_83BD41A8);
PPC_FUNC_IMPL(__imp__sub_83BD41A8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,26000
	ctx.r6.s64 = ctx.r7.s64 + 26000;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,25928(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 25928);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,29744(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29744);
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
	// std r9,26000(r7)
	PPC_STORE_U64(ctx.r7.u32 + 26000, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD41F0"))) PPC_WEAK_FUNC(sub_83BD41F0);
PPC_FUNC_IMPL(__imp__sub_83BD41F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,20032
	ctx.r3.s64 = ctx.r11.s64 + 20032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD41FC"))) PPC_WEAK_FUNC(sub_83BD41FC);
PPC_FUNC_IMPL(__imp__sub_83BD41FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD4200"))) PPC_WEAK_FUNC(sub_83BD4200);
PPC_FUNC_IMPL(__imp__sub_83BD4200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,29752
	ctx.r3.s64 = ctx.r11.s64 + 29752;
	// bl 0x8259af80
	ctx.lr = 0x83BD4218;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,20048
	ctx.r3.s64 = ctx.r10.s64 + 20048;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD4224;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD4234"))) PPC_WEAK_FUNC(sub_83BD4234);
PPC_FUNC_IMPL(__imp__sub_83BD4234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD4238"))) PPC_WEAK_FUNC(sub_83BD4238);
PPC_FUNC_IMPL(__imp__sub_83BD4238) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,29732
	ctx.r11.s64 = ctx.r8.s64 + 29732;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,25976(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25976);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,20040
	ctx.r3.s64 = ctx.r6.s64 + 20040;
	// stw r10,29732(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29732, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD4268"))) PPC_WEAK_FUNC(sub_83BD4268);
PPC_FUNC_IMPL(__imp__sub_83BD4268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,20056
	ctx.r3.s64 = ctx.r11.s64 + 20056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD4274"))) PPC_WEAK_FUNC(sub_83BD4274);
PPC_FUNC_IMPL(__imp__sub_83BD4274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD4278"))) PPC_WEAK_FUNC(sub_83BD4278);
PPC_FUNC_IMPL(__imp__sub_83BD4278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,20064
	ctx.r3.s64 = ctx.r11.s64 + 20064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD4284"))) PPC_WEAK_FUNC(sub_83BD4284);
PPC_FUNC_IMPL(__imp__sub_83BD4284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD4288"))) PPC_WEAK_FUNC(sub_83BD4288);
PPC_FUNC_IMPL(__imp__sub_83BD4288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,20072
	ctx.r3.s64 = ctx.r11.s64 + 20072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD4294"))) PPC_WEAK_FUNC(sub_83BD4294);
PPC_FUNC_IMPL(__imp__sub_83BD4294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD4298"))) PPC_WEAK_FUNC(sub_83BD4298);
PPC_FUNC_IMPL(__imp__sub_83BD4298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,20080
	ctx.r3.s64 = ctx.r11.s64 + 20080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD42A4"))) PPC_WEAK_FUNC(sub_83BD42A4);
PPC_FUNC_IMPL(__imp__sub_83BD42A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD42A8"))) PPC_WEAK_FUNC(sub_83BD42A8);
PPC_FUNC_IMPL(__imp__sub_83BD42A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,20088
	ctx.r3.s64 = ctx.r11.s64 + 20088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD42B4"))) PPC_WEAK_FUNC(sub_83BD42B4);
PPC_FUNC_IMPL(__imp__sub_83BD42B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD42B8"))) PPC_WEAK_FUNC(sub_83BD42B8);
PPC_FUNC_IMPL(__imp__sub_83BD42B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,20096
	ctx.r3.s64 = ctx.r11.s64 + 20096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD42C4"))) PPC_WEAK_FUNC(sub_83BD42C4);
PPC_FUNC_IMPL(__imp__sub_83BD42C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD42C8"))) PPC_WEAK_FUNC(sub_83BD42C8);
PPC_FUNC_IMPL(__imp__sub_83BD42C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,20104
	ctx.r3.s64 = ctx.r11.s64 + 20104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD42D4"))) PPC_WEAK_FUNC(sub_83BD42D4);
PPC_FUNC_IMPL(__imp__sub_83BD42D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD42D8"))) PPC_WEAK_FUNC(sub_83BD42D8);
PPC_FUNC_IMPL(__imp__sub_83BD42D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,20112
	ctx.r3.s64 = ctx.r11.s64 + 20112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD42E4"))) PPC_WEAK_FUNC(sub_83BD42E4);
PPC_FUNC_IMPL(__imp__sub_83BD42E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD42E8"))) PPC_WEAK_FUNC(sub_83BD42E8);
PPC_FUNC_IMPL(__imp__sub_83BD42E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,20120
	ctx.r3.s64 = ctx.r11.s64 + 20120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD42F4"))) PPC_WEAK_FUNC(sub_83BD42F4);
PPC_FUNC_IMPL(__imp__sub_83BD42F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD42F8"))) PPC_WEAK_FUNC(sub_83BD42F8);
PPC_FUNC_IMPL(__imp__sub_83BD42F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,20128
	ctx.r3.s64 = ctx.r11.s64 + 20128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

