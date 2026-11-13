#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BC2CD0"))) PPC_WEAK_FUNC(sub_83BC2CD0);
PPC_FUNC_IMPL(__imp__sub_83BC2CD0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-26232
	ctx.r3.s64 = ctx.r11.s64 + -26232;
	// bl 0x8259af80
	ctx.lr = 0x83BC2CE8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-2184
	ctx.r3.s64 = ctx.r10.s64 + -2184;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC2CF4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC2D04"))) PPC_WEAK_FUNC(sub_83BC2D04);
PPC_FUNC_IMPL(__imp__sub_83BC2D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC2D08"))) PPC_WEAK_FUNC(sub_83BC2D08);
PPC_FUNC_IMPL(__imp__sub_83BC2D08) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-26252
	ctx.r11.s64 = ctx.r8.s64 + -26252;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,2212(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2212);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-2192
	ctx.r3.s64 = ctx.r6.s64 + -2192;
	// stw r10,-26252(r8)
	PPC_STORE_U32(ctx.r8.u32 + -26252, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC2D38"))) PPC_WEAK_FUNC(sub_83BC2D38);
PPC_FUNC_IMPL(__imp__sub_83BC2D38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-2176
	ctx.r3.s64 = ctx.r11.s64 + -2176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC2D44"))) PPC_WEAK_FUNC(sub_83BC2D44);
PPC_FUNC_IMPL(__imp__sub_83BC2D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC2D48"))) PPC_WEAK_FUNC(sub_83BC2D48);
PPC_FUNC_IMPL(__imp__sub_83BC2D48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-2168
	ctx.r3.s64 = ctx.r11.s64 + -2168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC2D54"))) PPC_WEAK_FUNC(sub_83BC2D54);
PPC_FUNC_IMPL(__imp__sub_83BC2D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC2D58"))) PPC_WEAK_FUNC(sub_83BC2D58);
PPC_FUNC_IMPL(__imp__sub_83BC2D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-2160
	ctx.r3.s64 = ctx.r11.s64 + -2160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC2D64"))) PPC_WEAK_FUNC(sub_83BC2D64);
PPC_FUNC_IMPL(__imp__sub_83BC2D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC2D68"))) PPC_WEAK_FUNC(sub_83BC2D68);
PPC_FUNC_IMPL(__imp__sub_83BC2D68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-2152
	ctx.r3.s64 = ctx.r11.s64 + -2152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC2D74"))) PPC_WEAK_FUNC(sub_83BC2D74);
PPC_FUNC_IMPL(__imp__sub_83BC2D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC2D78"))) PPC_WEAK_FUNC(sub_83BC2D78);
PPC_FUNC_IMPL(__imp__sub_83BC2D78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-2144
	ctx.r3.s64 = ctx.r11.s64 + -2144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC2D84"))) PPC_WEAK_FUNC(sub_83BC2D84);
PPC_FUNC_IMPL(__imp__sub_83BC2D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC2D88"))) PPC_WEAK_FUNC(sub_83BC2D88);
PPC_FUNC_IMPL(__imp__sub_83BC2D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-2136
	ctx.r3.s64 = ctx.r11.s64 + -2136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC2D94"))) PPC_WEAK_FUNC(sub_83BC2D94);
PPC_FUNC_IMPL(__imp__sub_83BC2D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC2D98"))) PPC_WEAK_FUNC(sub_83BC2D98);
PPC_FUNC_IMPL(__imp__sub_83BC2D98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-2128
	ctx.r3.s64 = ctx.r11.s64 + -2128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC2DA4"))) PPC_WEAK_FUNC(sub_83BC2DA4);
PPC_FUNC_IMPL(__imp__sub_83BC2DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC2DA8"))) PPC_WEAK_FUNC(sub_83BC2DA8);
PPC_FUNC_IMPL(__imp__sub_83BC2DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-2120
	ctx.r3.s64 = ctx.r11.s64 + -2120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC2DB4"))) PPC_WEAK_FUNC(sub_83BC2DB4);
PPC_FUNC_IMPL(__imp__sub_83BC2DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC2DB8"))) PPC_WEAK_FUNC(sub_83BC2DB8);
PPC_FUNC_IMPL(__imp__sub_83BC2DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-2112
	ctx.r3.s64 = ctx.r11.s64 + -2112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC2DC4"))) PPC_WEAK_FUNC(sub_83BC2DC4);
PPC_FUNC_IMPL(__imp__sub_83BC2DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC2DC8"))) PPC_WEAK_FUNC(sub_83BC2DC8);
PPC_FUNC_IMPL(__imp__sub_83BC2DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-2104
	ctx.r3.s64 = ctx.r11.s64 + -2104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC2DD4"))) PPC_WEAK_FUNC(sub_83BC2DD4);
PPC_FUNC_IMPL(__imp__sub_83BC2DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC2DD8"))) PPC_WEAK_FUNC(sub_83BC2DD8);
PPC_FUNC_IMPL(__imp__sub_83BC2DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-2096
	ctx.r3.s64 = ctx.r11.s64 + -2096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC2DE4"))) PPC_WEAK_FUNC(sub_83BC2DE4);
PPC_FUNC_IMPL(__imp__sub_83BC2DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC2DE8"))) PPC_WEAK_FUNC(sub_83BC2DE8);
PPC_FUNC_IMPL(__imp__sub_83BC2DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-2088
	ctx.r3.s64 = ctx.r11.s64 + -2088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC2DF4"))) PPC_WEAK_FUNC(sub_83BC2DF4);
PPC_FUNC_IMPL(__imp__sub_83BC2DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC2DF8"))) PPC_WEAK_FUNC(sub_83BC2DF8);
PPC_FUNC_IMPL(__imp__sub_83BC2DF8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-25888
	ctx.r3.s64 = ctx.r11.s64 + -25888;
	// bl 0x83523120
	ctx.lr = 0x83BC2E10;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-2080
	ctx.r3.s64 = ctx.r10.s64 + -2080;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC2E1C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC2E2C"))) PPC_WEAK_FUNC(sub_83BC2E2C);
PPC_FUNC_IMPL(__imp__sub_83BC2E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC2E30"))) PPC_WEAK_FUNC(sub_83BC2E30);
PPC_FUNC_IMPL(__imp__sub_83BC2E30) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-25872
	ctx.r7.s64 = ctx.r8.s64 + -25872;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-25872(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25872);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-25872(r8)
	PPC_STORE_U32(ctx.r8.u32 + -25872, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC2E58"))) PPC_WEAK_FUNC(sub_83BC2E58);
PPC_FUNC_IMPL(__imp__sub_83BC2E58) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,2392
	ctx.r6.s64 = ctx.r7.s64 + 2392;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,2320(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 2320);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-25872(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -25872);
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
	// std r9,2392(r7)
	PPC_STORE_U64(ctx.r7.u32 + 2392, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC2EA0"))) PPC_WEAK_FUNC(sub_83BC2EA0);
PPC_FUNC_IMPL(__imp__sub_83BC2EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-2064
	ctx.r3.s64 = ctx.r11.s64 + -2064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC2EAC"))) PPC_WEAK_FUNC(sub_83BC2EAC);
PPC_FUNC_IMPL(__imp__sub_83BC2EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC2EB0"))) PPC_WEAK_FUNC(sub_83BC2EB0);
PPC_FUNC_IMPL(__imp__sub_83BC2EB0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-25864
	ctx.r3.s64 = ctx.r11.s64 + -25864;
	// bl 0x8259af80
	ctx.lr = 0x83BC2EC8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-2048
	ctx.r3.s64 = ctx.r10.s64 + -2048;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC2ED4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC2EE4"))) PPC_WEAK_FUNC(sub_83BC2EE4);
PPC_FUNC_IMPL(__imp__sub_83BC2EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC2EE8"))) PPC_WEAK_FUNC(sub_83BC2EE8);
PPC_FUNC_IMPL(__imp__sub_83BC2EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-25884
	ctx.r11.s64 = ctx.r8.s64 + -25884;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,2368(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2368);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-2056
	ctx.r3.s64 = ctx.r6.s64 + -2056;
	// stw r10,-25884(r8)
	PPC_STORE_U32(ctx.r8.u32 + -25884, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC2F18"))) PPC_WEAK_FUNC(sub_83BC2F18);
PPC_FUNC_IMPL(__imp__sub_83BC2F18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-2040
	ctx.r3.s64 = ctx.r11.s64 + -2040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC2F24"))) PPC_WEAK_FUNC(sub_83BC2F24);
PPC_FUNC_IMPL(__imp__sub_83BC2F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC2F28"))) PPC_WEAK_FUNC(sub_83BC2F28);
PPC_FUNC_IMPL(__imp__sub_83BC2F28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-2032
	ctx.r3.s64 = ctx.r11.s64 + -2032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC2F34"))) PPC_WEAK_FUNC(sub_83BC2F34);
PPC_FUNC_IMPL(__imp__sub_83BC2F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC2F38"))) PPC_WEAK_FUNC(sub_83BC2F38);
PPC_FUNC_IMPL(__imp__sub_83BC2F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-2024
	ctx.r3.s64 = ctx.r11.s64 + -2024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC2F44"))) PPC_WEAK_FUNC(sub_83BC2F44);
PPC_FUNC_IMPL(__imp__sub_83BC2F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC2F48"))) PPC_WEAK_FUNC(sub_83BC2F48);
PPC_FUNC_IMPL(__imp__sub_83BC2F48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-2016
	ctx.r3.s64 = ctx.r11.s64 + -2016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC2F54"))) PPC_WEAK_FUNC(sub_83BC2F54);
PPC_FUNC_IMPL(__imp__sub_83BC2F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC2F58"))) PPC_WEAK_FUNC(sub_83BC2F58);
PPC_FUNC_IMPL(__imp__sub_83BC2F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-2008
	ctx.r3.s64 = ctx.r11.s64 + -2008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC2F64"))) PPC_WEAK_FUNC(sub_83BC2F64);
PPC_FUNC_IMPL(__imp__sub_83BC2F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC2F68"))) PPC_WEAK_FUNC(sub_83BC2F68);
PPC_FUNC_IMPL(__imp__sub_83BC2F68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-2000
	ctx.r3.s64 = ctx.r11.s64 + -2000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC2F74"))) PPC_WEAK_FUNC(sub_83BC2F74);
PPC_FUNC_IMPL(__imp__sub_83BC2F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC2F78"))) PPC_WEAK_FUNC(sub_83BC2F78);
PPC_FUNC_IMPL(__imp__sub_83BC2F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1992
	ctx.r3.s64 = ctx.r11.s64 + -1992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC2F84"))) PPC_WEAK_FUNC(sub_83BC2F84);
PPC_FUNC_IMPL(__imp__sub_83BC2F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC2F88"))) PPC_WEAK_FUNC(sub_83BC2F88);
PPC_FUNC_IMPL(__imp__sub_83BC2F88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1984
	ctx.r3.s64 = ctx.r11.s64 + -1984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC2F94"))) PPC_WEAK_FUNC(sub_83BC2F94);
PPC_FUNC_IMPL(__imp__sub_83BC2F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC2F98"))) PPC_WEAK_FUNC(sub_83BC2F98);
PPC_FUNC_IMPL(__imp__sub_83BC2F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1976
	ctx.r3.s64 = ctx.r11.s64 + -1976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC2FA4"))) PPC_WEAK_FUNC(sub_83BC2FA4);
PPC_FUNC_IMPL(__imp__sub_83BC2FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC2FA8"))) PPC_WEAK_FUNC(sub_83BC2FA8);
PPC_FUNC_IMPL(__imp__sub_83BC2FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1968
	ctx.r3.s64 = ctx.r11.s64 + -1968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC2FB4"))) PPC_WEAK_FUNC(sub_83BC2FB4);
PPC_FUNC_IMPL(__imp__sub_83BC2FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC2FB8"))) PPC_WEAK_FUNC(sub_83BC2FB8);
PPC_FUNC_IMPL(__imp__sub_83BC2FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1960
	ctx.r3.s64 = ctx.r11.s64 + -1960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC2FC4"))) PPC_WEAK_FUNC(sub_83BC2FC4);
PPC_FUNC_IMPL(__imp__sub_83BC2FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC2FC8"))) PPC_WEAK_FUNC(sub_83BC2FC8);
PPC_FUNC_IMPL(__imp__sub_83BC2FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1952
	ctx.r3.s64 = ctx.r11.s64 + -1952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC2FD4"))) PPC_WEAK_FUNC(sub_83BC2FD4);
PPC_FUNC_IMPL(__imp__sub_83BC2FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC2FD8"))) PPC_WEAK_FUNC(sub_83BC2FD8);
PPC_FUNC_IMPL(__imp__sub_83BC2FD8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-25520
	ctx.r3.s64 = ctx.r11.s64 + -25520;
	// bl 0x83523120
	ctx.lr = 0x83BC2FF0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-1944
	ctx.r3.s64 = ctx.r10.s64 + -1944;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC2FFC;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC300C"))) PPC_WEAK_FUNC(sub_83BC300C);
PPC_FUNC_IMPL(__imp__sub_83BC300C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3010"))) PPC_WEAK_FUNC(sub_83BC3010);
PPC_FUNC_IMPL(__imp__sub_83BC3010) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-25504
	ctx.r7.s64 = ctx.r8.s64 + -25504;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-25504(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25504);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-25504(r8)
	PPC_STORE_U32(ctx.r8.u32 + -25504, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC3038"))) PPC_WEAK_FUNC(sub_83BC3038);
PPC_FUNC_IMPL(__imp__sub_83BC3038) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,2624
	ctx.r6.s64 = ctx.r7.s64 + 2624;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,2552(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 2552);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-25504(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -25504);
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
	// std r9,2624(r7)
	PPC_STORE_U64(ctx.r7.u32 + 2624, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC3080"))) PPC_WEAK_FUNC(sub_83BC3080);
PPC_FUNC_IMPL(__imp__sub_83BC3080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1928
	ctx.r3.s64 = ctx.r11.s64 + -1928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC308C"))) PPC_WEAK_FUNC(sub_83BC308C);
PPC_FUNC_IMPL(__imp__sub_83BC308C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3090"))) PPC_WEAK_FUNC(sub_83BC3090);
PPC_FUNC_IMPL(__imp__sub_83BC3090) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-25496
	ctx.r3.s64 = ctx.r11.s64 + -25496;
	// bl 0x8259af80
	ctx.lr = 0x83BC30A8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-1912
	ctx.r3.s64 = ctx.r10.s64 + -1912;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC30B4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC30C4"))) PPC_WEAK_FUNC(sub_83BC30C4);
PPC_FUNC_IMPL(__imp__sub_83BC30C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC30C8"))) PPC_WEAK_FUNC(sub_83BC30C8);
PPC_FUNC_IMPL(__imp__sub_83BC30C8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-25516
	ctx.r11.s64 = ctx.r8.s64 + -25516;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,2600(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2600);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-1920
	ctx.r3.s64 = ctx.r6.s64 + -1920;
	// stw r10,-25516(r8)
	PPC_STORE_U32(ctx.r8.u32 + -25516, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC30F8"))) PPC_WEAK_FUNC(sub_83BC30F8);
PPC_FUNC_IMPL(__imp__sub_83BC30F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1904
	ctx.r3.s64 = ctx.r11.s64 + -1904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3104"))) PPC_WEAK_FUNC(sub_83BC3104);
PPC_FUNC_IMPL(__imp__sub_83BC3104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3108"))) PPC_WEAK_FUNC(sub_83BC3108);
PPC_FUNC_IMPL(__imp__sub_83BC3108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1896
	ctx.r3.s64 = ctx.r11.s64 + -1896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3114"))) PPC_WEAK_FUNC(sub_83BC3114);
PPC_FUNC_IMPL(__imp__sub_83BC3114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3118"))) PPC_WEAK_FUNC(sub_83BC3118);
PPC_FUNC_IMPL(__imp__sub_83BC3118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1888
	ctx.r3.s64 = ctx.r11.s64 + -1888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3124"))) PPC_WEAK_FUNC(sub_83BC3124);
PPC_FUNC_IMPL(__imp__sub_83BC3124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3128"))) PPC_WEAK_FUNC(sub_83BC3128);
PPC_FUNC_IMPL(__imp__sub_83BC3128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1880
	ctx.r3.s64 = ctx.r11.s64 + -1880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3134"))) PPC_WEAK_FUNC(sub_83BC3134);
PPC_FUNC_IMPL(__imp__sub_83BC3134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3138"))) PPC_WEAK_FUNC(sub_83BC3138);
PPC_FUNC_IMPL(__imp__sub_83BC3138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1872
	ctx.r3.s64 = ctx.r11.s64 + -1872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3144"))) PPC_WEAK_FUNC(sub_83BC3144);
PPC_FUNC_IMPL(__imp__sub_83BC3144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3148"))) PPC_WEAK_FUNC(sub_83BC3148);
PPC_FUNC_IMPL(__imp__sub_83BC3148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1864
	ctx.r3.s64 = ctx.r11.s64 + -1864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3154"))) PPC_WEAK_FUNC(sub_83BC3154);
PPC_FUNC_IMPL(__imp__sub_83BC3154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3158"))) PPC_WEAK_FUNC(sub_83BC3158);
PPC_FUNC_IMPL(__imp__sub_83BC3158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1856
	ctx.r3.s64 = ctx.r11.s64 + -1856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3164"))) PPC_WEAK_FUNC(sub_83BC3164);
PPC_FUNC_IMPL(__imp__sub_83BC3164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3168"))) PPC_WEAK_FUNC(sub_83BC3168);
PPC_FUNC_IMPL(__imp__sub_83BC3168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1848
	ctx.r3.s64 = ctx.r11.s64 + -1848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3174"))) PPC_WEAK_FUNC(sub_83BC3174);
PPC_FUNC_IMPL(__imp__sub_83BC3174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3178"))) PPC_WEAK_FUNC(sub_83BC3178);
PPC_FUNC_IMPL(__imp__sub_83BC3178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1840
	ctx.r3.s64 = ctx.r11.s64 + -1840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3184"))) PPC_WEAK_FUNC(sub_83BC3184);
PPC_FUNC_IMPL(__imp__sub_83BC3184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3188"))) PPC_WEAK_FUNC(sub_83BC3188);
PPC_FUNC_IMPL(__imp__sub_83BC3188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1832
	ctx.r3.s64 = ctx.r11.s64 + -1832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3194"))) PPC_WEAK_FUNC(sub_83BC3194);
PPC_FUNC_IMPL(__imp__sub_83BC3194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3198"))) PPC_WEAK_FUNC(sub_83BC3198);
PPC_FUNC_IMPL(__imp__sub_83BC3198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1824
	ctx.r3.s64 = ctx.r11.s64 + -1824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC31A4"))) PPC_WEAK_FUNC(sub_83BC31A4);
PPC_FUNC_IMPL(__imp__sub_83BC31A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC31A8"))) PPC_WEAK_FUNC(sub_83BC31A8);
PPC_FUNC_IMPL(__imp__sub_83BC31A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1816
	ctx.r3.s64 = ctx.r11.s64 + -1816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC31B4"))) PPC_WEAK_FUNC(sub_83BC31B4);
PPC_FUNC_IMPL(__imp__sub_83BC31B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC31B8"))) PPC_WEAK_FUNC(sub_83BC31B8);
PPC_FUNC_IMPL(__imp__sub_83BC31B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-25152
	ctx.r3.s64 = ctx.r11.s64 + -25152;
	// bl 0x83523120
	ctx.lr = 0x83BC31D0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-1808
	ctx.r3.s64 = ctx.r10.s64 + -1808;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC31DC;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC31EC"))) PPC_WEAK_FUNC(sub_83BC31EC);
PPC_FUNC_IMPL(__imp__sub_83BC31EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC31F0"))) PPC_WEAK_FUNC(sub_83BC31F0);
PPC_FUNC_IMPL(__imp__sub_83BC31F0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-25136
	ctx.r7.s64 = ctx.r8.s64 + -25136;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-25136(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -25136);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-25136(r8)
	PPC_STORE_U32(ctx.r8.u32 + -25136, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC3218"))) PPC_WEAK_FUNC(sub_83BC3218);
PPC_FUNC_IMPL(__imp__sub_83BC3218) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,2780
	ctx.r6.s64 = ctx.r7.s64 + 2780;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,2708(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 2708);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-25136(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -25136);
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
	// std r9,2780(r7)
	PPC_STORE_U64(ctx.r7.u32 + 2780, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC3260"))) PPC_WEAK_FUNC(sub_83BC3260);
PPC_FUNC_IMPL(__imp__sub_83BC3260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1792
	ctx.r3.s64 = ctx.r11.s64 + -1792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC326C"))) PPC_WEAK_FUNC(sub_83BC326C);
PPC_FUNC_IMPL(__imp__sub_83BC326C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3270"))) PPC_WEAK_FUNC(sub_83BC3270);
PPC_FUNC_IMPL(__imp__sub_83BC3270) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-25128
	ctx.r3.s64 = ctx.r11.s64 + -25128;
	// bl 0x8259af80
	ctx.lr = 0x83BC3288;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-1776
	ctx.r3.s64 = ctx.r10.s64 + -1776;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC3294;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC32A4"))) PPC_WEAK_FUNC(sub_83BC32A4);
PPC_FUNC_IMPL(__imp__sub_83BC32A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC32A8"))) PPC_WEAK_FUNC(sub_83BC32A8);
PPC_FUNC_IMPL(__imp__sub_83BC32A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-25148
	ctx.r11.s64 = ctx.r8.s64 + -25148;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,2756(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2756);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-1784
	ctx.r3.s64 = ctx.r6.s64 + -1784;
	// stw r10,-25148(r8)
	PPC_STORE_U32(ctx.r8.u32 + -25148, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC32D8"))) PPC_WEAK_FUNC(sub_83BC32D8);
PPC_FUNC_IMPL(__imp__sub_83BC32D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// addi r4,r11,-8860
	ctx.r4.s64 = ctx.r11.s64 + -8860;
	// addi r3,r10,2804
	ctx.r3.s64 = ctx.r10.s64 + 2804;
	// li r5,11
	ctx.r5.s64 = 11;
	// bl 0x8259cc28
	ctx.lr = 0x83BC32FC;
	sub_8259CC28(ctx, base);
	// lis r9,-31791
	ctx.r9.s64 = -2083454976;
	// addi r3,r9,-1768
	ctx.r3.s64 = ctx.r9.s64 + -1768;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC3308;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC3318"))) PPC_WEAK_FUNC(sub_83BC3318);
PPC_FUNC_IMPL(__imp__sub_83BC3318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1664
	ctx.r3.s64 = ctx.r11.s64 + -1664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3324"))) PPC_WEAK_FUNC(sub_83BC3324);
PPC_FUNC_IMPL(__imp__sub_83BC3324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3328"))) PPC_WEAK_FUNC(sub_83BC3328);
PPC_FUNC_IMPL(__imp__sub_83BC3328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1656
	ctx.r3.s64 = ctx.r11.s64 + -1656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3334"))) PPC_WEAK_FUNC(sub_83BC3334);
PPC_FUNC_IMPL(__imp__sub_83BC3334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3338"))) PPC_WEAK_FUNC(sub_83BC3338);
PPC_FUNC_IMPL(__imp__sub_83BC3338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1648
	ctx.r3.s64 = ctx.r11.s64 + -1648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3344"))) PPC_WEAK_FUNC(sub_83BC3344);
PPC_FUNC_IMPL(__imp__sub_83BC3344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3348"))) PPC_WEAK_FUNC(sub_83BC3348);
PPC_FUNC_IMPL(__imp__sub_83BC3348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1640
	ctx.r3.s64 = ctx.r11.s64 + -1640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3354"))) PPC_WEAK_FUNC(sub_83BC3354);
PPC_FUNC_IMPL(__imp__sub_83BC3354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3358"))) PPC_WEAK_FUNC(sub_83BC3358);
PPC_FUNC_IMPL(__imp__sub_83BC3358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1632
	ctx.r3.s64 = ctx.r11.s64 + -1632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3364"))) PPC_WEAK_FUNC(sub_83BC3364);
PPC_FUNC_IMPL(__imp__sub_83BC3364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3368"))) PPC_WEAK_FUNC(sub_83BC3368);
PPC_FUNC_IMPL(__imp__sub_83BC3368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1624
	ctx.r3.s64 = ctx.r11.s64 + -1624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3374"))) PPC_WEAK_FUNC(sub_83BC3374);
PPC_FUNC_IMPL(__imp__sub_83BC3374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3378"))) PPC_WEAK_FUNC(sub_83BC3378);
PPC_FUNC_IMPL(__imp__sub_83BC3378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1616
	ctx.r3.s64 = ctx.r11.s64 + -1616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3384"))) PPC_WEAK_FUNC(sub_83BC3384);
PPC_FUNC_IMPL(__imp__sub_83BC3384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3388"))) PPC_WEAK_FUNC(sub_83BC3388);
PPC_FUNC_IMPL(__imp__sub_83BC3388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1608
	ctx.r3.s64 = ctx.r11.s64 + -1608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3394"))) PPC_WEAK_FUNC(sub_83BC3394);
PPC_FUNC_IMPL(__imp__sub_83BC3394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3398"))) PPC_WEAK_FUNC(sub_83BC3398);
PPC_FUNC_IMPL(__imp__sub_83BC3398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1600
	ctx.r3.s64 = ctx.r11.s64 + -1600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC33A4"))) PPC_WEAK_FUNC(sub_83BC33A4);
PPC_FUNC_IMPL(__imp__sub_83BC33A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC33A8"))) PPC_WEAK_FUNC(sub_83BC33A8);
PPC_FUNC_IMPL(__imp__sub_83BC33A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1592
	ctx.r3.s64 = ctx.r11.s64 + -1592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC33B4"))) PPC_WEAK_FUNC(sub_83BC33B4);
PPC_FUNC_IMPL(__imp__sub_83BC33B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC33B8"))) PPC_WEAK_FUNC(sub_83BC33B8);
PPC_FUNC_IMPL(__imp__sub_83BC33B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1584
	ctx.r3.s64 = ctx.r11.s64 + -1584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC33C4"))) PPC_WEAK_FUNC(sub_83BC33C4);
PPC_FUNC_IMPL(__imp__sub_83BC33C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC33C8"))) PPC_WEAK_FUNC(sub_83BC33C8);
PPC_FUNC_IMPL(__imp__sub_83BC33C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1576
	ctx.r3.s64 = ctx.r11.s64 + -1576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC33D4"))) PPC_WEAK_FUNC(sub_83BC33D4);
PPC_FUNC_IMPL(__imp__sub_83BC33D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC33D8"))) PPC_WEAK_FUNC(sub_83BC33D8);
PPC_FUNC_IMPL(__imp__sub_83BC33D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-24784
	ctx.r3.s64 = ctx.r11.s64 + -24784;
	// bl 0x83523120
	ctx.lr = 0x83BC33F0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-1568
	ctx.r3.s64 = ctx.r10.s64 + -1568;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC33FC;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC340C"))) PPC_WEAK_FUNC(sub_83BC340C);
PPC_FUNC_IMPL(__imp__sub_83BC340C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3410"))) PPC_WEAK_FUNC(sub_83BC3410);
PPC_FUNC_IMPL(__imp__sub_83BC3410) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-24768
	ctx.r7.s64 = ctx.r8.s64 + -24768;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-24768(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24768);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-24768(r8)
	PPC_STORE_U32(ctx.r8.u32 + -24768, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC3438"))) PPC_WEAK_FUNC(sub_83BC3438);
PPC_FUNC_IMPL(__imp__sub_83BC3438) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,3048
	ctx.r6.s64 = ctx.r7.s64 + 3048;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,2976(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 2976);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-24768(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -24768);
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
	// std r9,3048(r7)
	PPC_STORE_U64(ctx.r7.u32 + 3048, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC3480"))) PPC_WEAK_FUNC(sub_83BC3480);
PPC_FUNC_IMPL(__imp__sub_83BC3480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1552
	ctx.r3.s64 = ctx.r11.s64 + -1552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC348C"))) PPC_WEAK_FUNC(sub_83BC348C);
PPC_FUNC_IMPL(__imp__sub_83BC348C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3490"))) PPC_WEAK_FUNC(sub_83BC3490);
PPC_FUNC_IMPL(__imp__sub_83BC3490) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-24760
	ctx.r3.s64 = ctx.r11.s64 + -24760;
	// bl 0x8259af80
	ctx.lr = 0x83BC34A8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-1536
	ctx.r3.s64 = ctx.r10.s64 + -1536;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC34B4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC34C4"))) PPC_WEAK_FUNC(sub_83BC34C4);
PPC_FUNC_IMPL(__imp__sub_83BC34C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC34C8"))) PPC_WEAK_FUNC(sub_83BC34C8);
PPC_FUNC_IMPL(__imp__sub_83BC34C8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-24780
	ctx.r11.s64 = ctx.r8.s64 + -24780;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,3024(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3024);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-1544
	ctx.r3.s64 = ctx.r6.s64 + -1544;
	// stw r10,-24780(r8)
	PPC_STORE_U32(ctx.r8.u32 + -24780, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC34F8"))) PPC_WEAK_FUNC(sub_83BC34F8);
PPC_FUNC_IMPL(__imp__sub_83BC34F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1528
	ctx.r3.s64 = ctx.r11.s64 + -1528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3504"))) PPC_WEAK_FUNC(sub_83BC3504);
PPC_FUNC_IMPL(__imp__sub_83BC3504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3508"))) PPC_WEAK_FUNC(sub_83BC3508);
PPC_FUNC_IMPL(__imp__sub_83BC3508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1520
	ctx.r3.s64 = ctx.r11.s64 + -1520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3514"))) PPC_WEAK_FUNC(sub_83BC3514);
PPC_FUNC_IMPL(__imp__sub_83BC3514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3518"))) PPC_WEAK_FUNC(sub_83BC3518);
PPC_FUNC_IMPL(__imp__sub_83BC3518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1512
	ctx.r3.s64 = ctx.r11.s64 + -1512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3524"))) PPC_WEAK_FUNC(sub_83BC3524);
PPC_FUNC_IMPL(__imp__sub_83BC3524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3528"))) PPC_WEAK_FUNC(sub_83BC3528);
PPC_FUNC_IMPL(__imp__sub_83BC3528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1504
	ctx.r3.s64 = ctx.r11.s64 + -1504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3534"))) PPC_WEAK_FUNC(sub_83BC3534);
PPC_FUNC_IMPL(__imp__sub_83BC3534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3538"))) PPC_WEAK_FUNC(sub_83BC3538);
PPC_FUNC_IMPL(__imp__sub_83BC3538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1496
	ctx.r3.s64 = ctx.r11.s64 + -1496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3544"))) PPC_WEAK_FUNC(sub_83BC3544);
PPC_FUNC_IMPL(__imp__sub_83BC3544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3548"))) PPC_WEAK_FUNC(sub_83BC3548);
PPC_FUNC_IMPL(__imp__sub_83BC3548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1488
	ctx.r3.s64 = ctx.r11.s64 + -1488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3554"))) PPC_WEAK_FUNC(sub_83BC3554);
PPC_FUNC_IMPL(__imp__sub_83BC3554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3558"))) PPC_WEAK_FUNC(sub_83BC3558);
PPC_FUNC_IMPL(__imp__sub_83BC3558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1480
	ctx.r3.s64 = ctx.r11.s64 + -1480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3564"))) PPC_WEAK_FUNC(sub_83BC3564);
PPC_FUNC_IMPL(__imp__sub_83BC3564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3568"))) PPC_WEAK_FUNC(sub_83BC3568);
PPC_FUNC_IMPL(__imp__sub_83BC3568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1472
	ctx.r3.s64 = ctx.r11.s64 + -1472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3574"))) PPC_WEAK_FUNC(sub_83BC3574);
PPC_FUNC_IMPL(__imp__sub_83BC3574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3578"))) PPC_WEAK_FUNC(sub_83BC3578);
PPC_FUNC_IMPL(__imp__sub_83BC3578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1464
	ctx.r3.s64 = ctx.r11.s64 + -1464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3584"))) PPC_WEAK_FUNC(sub_83BC3584);
PPC_FUNC_IMPL(__imp__sub_83BC3584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3588"))) PPC_WEAK_FUNC(sub_83BC3588);
PPC_FUNC_IMPL(__imp__sub_83BC3588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1456
	ctx.r3.s64 = ctx.r11.s64 + -1456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3594"))) PPC_WEAK_FUNC(sub_83BC3594);
PPC_FUNC_IMPL(__imp__sub_83BC3594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3598"))) PPC_WEAK_FUNC(sub_83BC3598);
PPC_FUNC_IMPL(__imp__sub_83BC3598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1448
	ctx.r3.s64 = ctx.r11.s64 + -1448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC35A4"))) PPC_WEAK_FUNC(sub_83BC35A4);
PPC_FUNC_IMPL(__imp__sub_83BC35A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC35A8"))) PPC_WEAK_FUNC(sub_83BC35A8);
PPC_FUNC_IMPL(__imp__sub_83BC35A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1440
	ctx.r3.s64 = ctx.r11.s64 + -1440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC35B4"))) PPC_WEAK_FUNC(sub_83BC35B4);
PPC_FUNC_IMPL(__imp__sub_83BC35B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC35B8"))) PPC_WEAK_FUNC(sub_83BC35B8);
PPC_FUNC_IMPL(__imp__sub_83BC35B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-24416
	ctx.r3.s64 = ctx.r11.s64 + -24416;
	// bl 0x83523120
	ctx.lr = 0x83BC35D0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-1432
	ctx.r3.s64 = ctx.r10.s64 + -1432;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC35DC;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC35EC"))) PPC_WEAK_FUNC(sub_83BC35EC);
PPC_FUNC_IMPL(__imp__sub_83BC35EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC35F0"))) PPC_WEAK_FUNC(sub_83BC35F0);
PPC_FUNC_IMPL(__imp__sub_83BC35F0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-24400
	ctx.r7.s64 = ctx.r8.s64 + -24400;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-24400(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24400);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-24400(r8)
	PPC_STORE_U32(ctx.r8.u32 + -24400, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC3618"))) PPC_WEAK_FUNC(sub_83BC3618);
PPC_FUNC_IMPL(__imp__sub_83BC3618) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,3184
	ctx.r6.s64 = ctx.r7.s64 + 3184;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,3112(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3112);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-24400(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -24400);
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
	// std r9,3184(r7)
	PPC_STORE_U64(ctx.r7.u32 + 3184, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC3660"))) PPC_WEAK_FUNC(sub_83BC3660);
PPC_FUNC_IMPL(__imp__sub_83BC3660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1416
	ctx.r3.s64 = ctx.r11.s64 + -1416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC366C"))) PPC_WEAK_FUNC(sub_83BC366C);
PPC_FUNC_IMPL(__imp__sub_83BC366C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3670"))) PPC_WEAK_FUNC(sub_83BC3670);
PPC_FUNC_IMPL(__imp__sub_83BC3670) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-24392
	ctx.r3.s64 = ctx.r11.s64 + -24392;
	// bl 0x8259af80
	ctx.lr = 0x83BC3688;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-1400
	ctx.r3.s64 = ctx.r10.s64 + -1400;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC3694;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC36A4"))) PPC_WEAK_FUNC(sub_83BC36A4);
PPC_FUNC_IMPL(__imp__sub_83BC36A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC36A8"))) PPC_WEAK_FUNC(sub_83BC36A8);
PPC_FUNC_IMPL(__imp__sub_83BC36A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-24412
	ctx.r11.s64 = ctx.r8.s64 + -24412;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,3160(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3160);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-1408
	ctx.r3.s64 = ctx.r6.s64 + -1408;
	// stw r10,-24412(r8)
	PPC_STORE_U32(ctx.r8.u32 + -24412, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC36D8"))) PPC_WEAK_FUNC(sub_83BC36D8);
PPC_FUNC_IMPL(__imp__sub_83BC36D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1392
	ctx.r3.s64 = ctx.r11.s64 + -1392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC36E4"))) PPC_WEAK_FUNC(sub_83BC36E4);
PPC_FUNC_IMPL(__imp__sub_83BC36E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC36E8"))) PPC_WEAK_FUNC(sub_83BC36E8);
PPC_FUNC_IMPL(__imp__sub_83BC36E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1384
	ctx.r3.s64 = ctx.r11.s64 + -1384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC36F4"))) PPC_WEAK_FUNC(sub_83BC36F4);
PPC_FUNC_IMPL(__imp__sub_83BC36F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC36F8"))) PPC_WEAK_FUNC(sub_83BC36F8);
PPC_FUNC_IMPL(__imp__sub_83BC36F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1376
	ctx.r3.s64 = ctx.r11.s64 + -1376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3704"))) PPC_WEAK_FUNC(sub_83BC3704);
PPC_FUNC_IMPL(__imp__sub_83BC3704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3708"))) PPC_WEAK_FUNC(sub_83BC3708);
PPC_FUNC_IMPL(__imp__sub_83BC3708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1368
	ctx.r3.s64 = ctx.r11.s64 + -1368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3714"))) PPC_WEAK_FUNC(sub_83BC3714);
PPC_FUNC_IMPL(__imp__sub_83BC3714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3718"))) PPC_WEAK_FUNC(sub_83BC3718);
PPC_FUNC_IMPL(__imp__sub_83BC3718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1360
	ctx.r3.s64 = ctx.r11.s64 + -1360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3724"))) PPC_WEAK_FUNC(sub_83BC3724);
PPC_FUNC_IMPL(__imp__sub_83BC3724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3728"))) PPC_WEAK_FUNC(sub_83BC3728);
PPC_FUNC_IMPL(__imp__sub_83BC3728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1352
	ctx.r3.s64 = ctx.r11.s64 + -1352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3734"))) PPC_WEAK_FUNC(sub_83BC3734);
PPC_FUNC_IMPL(__imp__sub_83BC3734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3738"))) PPC_WEAK_FUNC(sub_83BC3738);
PPC_FUNC_IMPL(__imp__sub_83BC3738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1344
	ctx.r3.s64 = ctx.r11.s64 + -1344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3744"))) PPC_WEAK_FUNC(sub_83BC3744);
PPC_FUNC_IMPL(__imp__sub_83BC3744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3748"))) PPC_WEAK_FUNC(sub_83BC3748);
PPC_FUNC_IMPL(__imp__sub_83BC3748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1336
	ctx.r3.s64 = ctx.r11.s64 + -1336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3754"))) PPC_WEAK_FUNC(sub_83BC3754);
PPC_FUNC_IMPL(__imp__sub_83BC3754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3758"))) PPC_WEAK_FUNC(sub_83BC3758);
PPC_FUNC_IMPL(__imp__sub_83BC3758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1328
	ctx.r3.s64 = ctx.r11.s64 + -1328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3764"))) PPC_WEAK_FUNC(sub_83BC3764);
PPC_FUNC_IMPL(__imp__sub_83BC3764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3768"))) PPC_WEAK_FUNC(sub_83BC3768);
PPC_FUNC_IMPL(__imp__sub_83BC3768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1320
	ctx.r3.s64 = ctx.r11.s64 + -1320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3774"))) PPC_WEAK_FUNC(sub_83BC3774);
PPC_FUNC_IMPL(__imp__sub_83BC3774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3778"))) PPC_WEAK_FUNC(sub_83BC3778);
PPC_FUNC_IMPL(__imp__sub_83BC3778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1312
	ctx.r3.s64 = ctx.r11.s64 + -1312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3784"))) PPC_WEAK_FUNC(sub_83BC3784);
PPC_FUNC_IMPL(__imp__sub_83BC3784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3788"))) PPC_WEAK_FUNC(sub_83BC3788);
PPC_FUNC_IMPL(__imp__sub_83BC3788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1304
	ctx.r3.s64 = ctx.r11.s64 + -1304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3794"))) PPC_WEAK_FUNC(sub_83BC3794);
PPC_FUNC_IMPL(__imp__sub_83BC3794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3798"))) PPC_WEAK_FUNC(sub_83BC3798);
PPC_FUNC_IMPL(__imp__sub_83BC3798) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-24032
	ctx.r7.s64 = ctx.r8.s64 + -24032;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-24032(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24032);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-24032(r8)
	PPC_STORE_U32(ctx.r8.u32 + -24032, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC37C0"))) PPC_WEAK_FUNC(sub_83BC37C0);
PPC_FUNC_IMPL(__imp__sub_83BC37C0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-24048
	ctx.r3.s64 = ctx.r11.s64 + -24048;
	// bl 0x83523120
	ctx.lr = 0x83BC37D8;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-1296
	ctx.r3.s64 = ctx.r10.s64 + -1296;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC37E4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC37F4"))) PPC_WEAK_FUNC(sub_83BC37F4);
PPC_FUNC_IMPL(__imp__sub_83BC37F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC37F8"))) PPC_WEAK_FUNC(sub_83BC37F8);
PPC_FUNC_IMPL(__imp__sub_83BC37F8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,3316
	ctx.r6.s64 = ctx.r7.s64 + 3316;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,3244(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3244);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-24032(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -24032);
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
	// std r9,3316(r7)
	PPC_STORE_U64(ctx.r7.u32 + 3316, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC3840"))) PPC_WEAK_FUNC(sub_83BC3840);
PPC_FUNC_IMPL(__imp__sub_83BC3840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1280
	ctx.r3.s64 = ctx.r11.s64 + -1280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC384C"))) PPC_WEAK_FUNC(sub_83BC384C);
PPC_FUNC_IMPL(__imp__sub_83BC384C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3850"))) PPC_WEAK_FUNC(sub_83BC3850);
PPC_FUNC_IMPL(__imp__sub_83BC3850) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-24024
	ctx.r3.s64 = ctx.r11.s64 + -24024;
	// bl 0x8259af80
	ctx.lr = 0x83BC3868;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-1264
	ctx.r3.s64 = ctx.r10.s64 + -1264;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC3874;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC3884"))) PPC_WEAK_FUNC(sub_83BC3884);
PPC_FUNC_IMPL(__imp__sub_83BC3884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3888"))) PPC_WEAK_FUNC(sub_83BC3888);
PPC_FUNC_IMPL(__imp__sub_83BC3888) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-24044
	ctx.r11.s64 = ctx.r8.s64 + -24044;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,3292(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3292);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-1272
	ctx.r3.s64 = ctx.r6.s64 + -1272;
	// stw r10,-24044(r8)
	PPC_STORE_U32(ctx.r8.u32 + -24044, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC38B8"))) PPC_WEAK_FUNC(sub_83BC38B8);
PPC_FUNC_IMPL(__imp__sub_83BC38B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1256
	ctx.r3.s64 = ctx.r11.s64 + -1256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC38C4"))) PPC_WEAK_FUNC(sub_83BC38C4);
PPC_FUNC_IMPL(__imp__sub_83BC38C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC38C8"))) PPC_WEAK_FUNC(sub_83BC38C8);
PPC_FUNC_IMPL(__imp__sub_83BC38C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1248
	ctx.r3.s64 = ctx.r11.s64 + -1248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC38D4"))) PPC_WEAK_FUNC(sub_83BC38D4);
PPC_FUNC_IMPL(__imp__sub_83BC38D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC38D8"))) PPC_WEAK_FUNC(sub_83BC38D8);
PPC_FUNC_IMPL(__imp__sub_83BC38D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1240
	ctx.r3.s64 = ctx.r11.s64 + -1240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC38E4"))) PPC_WEAK_FUNC(sub_83BC38E4);
PPC_FUNC_IMPL(__imp__sub_83BC38E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC38E8"))) PPC_WEAK_FUNC(sub_83BC38E8);
PPC_FUNC_IMPL(__imp__sub_83BC38E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1232
	ctx.r3.s64 = ctx.r11.s64 + -1232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC38F4"))) PPC_WEAK_FUNC(sub_83BC38F4);
PPC_FUNC_IMPL(__imp__sub_83BC38F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC38F8"))) PPC_WEAK_FUNC(sub_83BC38F8);
PPC_FUNC_IMPL(__imp__sub_83BC38F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1224
	ctx.r3.s64 = ctx.r11.s64 + -1224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3904"))) PPC_WEAK_FUNC(sub_83BC3904);
PPC_FUNC_IMPL(__imp__sub_83BC3904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3908"))) PPC_WEAK_FUNC(sub_83BC3908);
PPC_FUNC_IMPL(__imp__sub_83BC3908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1216
	ctx.r3.s64 = ctx.r11.s64 + -1216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3914"))) PPC_WEAK_FUNC(sub_83BC3914);
PPC_FUNC_IMPL(__imp__sub_83BC3914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3918"))) PPC_WEAK_FUNC(sub_83BC3918);
PPC_FUNC_IMPL(__imp__sub_83BC3918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1208
	ctx.r3.s64 = ctx.r11.s64 + -1208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3924"))) PPC_WEAK_FUNC(sub_83BC3924);
PPC_FUNC_IMPL(__imp__sub_83BC3924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3928"))) PPC_WEAK_FUNC(sub_83BC3928);
PPC_FUNC_IMPL(__imp__sub_83BC3928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1200
	ctx.r3.s64 = ctx.r11.s64 + -1200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3934"))) PPC_WEAK_FUNC(sub_83BC3934);
PPC_FUNC_IMPL(__imp__sub_83BC3934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3938"))) PPC_WEAK_FUNC(sub_83BC3938);
PPC_FUNC_IMPL(__imp__sub_83BC3938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1192
	ctx.r3.s64 = ctx.r11.s64 + -1192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3944"))) PPC_WEAK_FUNC(sub_83BC3944);
PPC_FUNC_IMPL(__imp__sub_83BC3944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3948"))) PPC_WEAK_FUNC(sub_83BC3948);
PPC_FUNC_IMPL(__imp__sub_83BC3948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1184
	ctx.r3.s64 = ctx.r11.s64 + -1184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3954"))) PPC_WEAK_FUNC(sub_83BC3954);
PPC_FUNC_IMPL(__imp__sub_83BC3954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3958"))) PPC_WEAK_FUNC(sub_83BC3958);
PPC_FUNC_IMPL(__imp__sub_83BC3958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1176
	ctx.r3.s64 = ctx.r11.s64 + -1176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3964"))) PPC_WEAK_FUNC(sub_83BC3964);
PPC_FUNC_IMPL(__imp__sub_83BC3964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3968"))) PPC_WEAK_FUNC(sub_83BC3968);
PPC_FUNC_IMPL(__imp__sub_83BC3968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1168
	ctx.r3.s64 = ctx.r11.s64 + -1168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3974"))) PPC_WEAK_FUNC(sub_83BC3974);
PPC_FUNC_IMPL(__imp__sub_83BC3974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3978"))) PPC_WEAK_FUNC(sub_83BC3978);
PPC_FUNC_IMPL(__imp__sub_83BC3978) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-23616
	ctx.r3.s64 = ctx.r11.s64 + -23616;
	// bl 0x83523120
	ctx.lr = 0x83BC3990;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-1160
	ctx.r3.s64 = ctx.r10.s64 + -1160;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC399C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC39AC"))) PPC_WEAK_FUNC(sub_83BC39AC);
PPC_FUNC_IMPL(__imp__sub_83BC39AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC39B0"))) PPC_WEAK_FUNC(sub_83BC39B0);
PPC_FUNC_IMPL(__imp__sub_83BC39B0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-23600
	ctx.r7.s64 = ctx.r8.s64 + -23600;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-23600(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23600);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-23600(r8)
	PPC_STORE_U32(ctx.r8.u32 + -23600, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC39D8"))) PPC_WEAK_FUNC(sub_83BC39D8);
PPC_FUNC_IMPL(__imp__sub_83BC39D8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,3516
	ctx.r6.s64 = ctx.r7.s64 + 3516;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,3444(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 3444);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-23600(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -23600);
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
	// std r9,3516(r7)
	PPC_STORE_U64(ctx.r7.u32 + 3516, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC3A20"))) PPC_WEAK_FUNC(sub_83BC3A20);
PPC_FUNC_IMPL(__imp__sub_83BC3A20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1144
	ctx.r3.s64 = ctx.r11.s64 + -1144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3A2C"))) PPC_WEAK_FUNC(sub_83BC3A2C);
PPC_FUNC_IMPL(__imp__sub_83BC3A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3A30"))) PPC_WEAK_FUNC(sub_83BC3A30);
PPC_FUNC_IMPL(__imp__sub_83BC3A30) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-23592
	ctx.r3.s64 = ctx.r11.s64 + -23592;
	// bl 0x8259af80
	ctx.lr = 0x83BC3A48;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-1128
	ctx.r3.s64 = ctx.r10.s64 + -1128;
	// bl 0x831cdcc8
	ctx.lr = 0x83BC3A54;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BC3A64"))) PPC_WEAK_FUNC(sub_83BC3A64);
PPC_FUNC_IMPL(__imp__sub_83BC3A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3A68"))) PPC_WEAK_FUNC(sub_83BC3A68);
PPC_FUNC_IMPL(__imp__sub_83BC3A68) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-23612
	ctx.r11.s64 = ctx.r8.s64 + -23612;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,3492(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3492);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-1136
	ctx.r3.s64 = ctx.r6.s64 + -1136;
	// stw r10,-23612(r8)
	PPC_STORE_U32(ctx.r8.u32 + -23612, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3A98"))) PPC_WEAK_FUNC(sub_83BC3A98);
PPC_FUNC_IMPL(__imp__sub_83BC3A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1032
	ctx.r3.s64 = ctx.r11.s64 + -1032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3AA4"))) PPC_WEAK_FUNC(sub_83BC3AA4);
PPC_FUNC_IMPL(__imp__sub_83BC3AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3AA8"))) PPC_WEAK_FUNC(sub_83BC3AA8);
PPC_FUNC_IMPL(__imp__sub_83BC3AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1024
	ctx.r3.s64 = ctx.r11.s64 + -1024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3AB4"))) PPC_WEAK_FUNC(sub_83BC3AB4);
PPC_FUNC_IMPL(__imp__sub_83BC3AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3AB8"))) PPC_WEAK_FUNC(sub_83BC3AB8);
PPC_FUNC_IMPL(__imp__sub_83BC3AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1016
	ctx.r3.s64 = ctx.r11.s64 + -1016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3AC4"))) PPC_WEAK_FUNC(sub_83BC3AC4);
PPC_FUNC_IMPL(__imp__sub_83BC3AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3AC8"))) PPC_WEAK_FUNC(sub_83BC3AC8);
PPC_FUNC_IMPL(__imp__sub_83BC3AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1008
	ctx.r3.s64 = ctx.r11.s64 + -1008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3AD4"))) PPC_WEAK_FUNC(sub_83BC3AD4);
PPC_FUNC_IMPL(__imp__sub_83BC3AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3AD8"))) PPC_WEAK_FUNC(sub_83BC3AD8);
PPC_FUNC_IMPL(__imp__sub_83BC3AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-1000
	ctx.r3.s64 = ctx.r11.s64 + -1000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3AE4"))) PPC_WEAK_FUNC(sub_83BC3AE4);
PPC_FUNC_IMPL(__imp__sub_83BC3AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3AE8"))) PPC_WEAK_FUNC(sub_83BC3AE8);
PPC_FUNC_IMPL(__imp__sub_83BC3AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-992
	ctx.r3.s64 = ctx.r11.s64 + -992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3AF4"))) PPC_WEAK_FUNC(sub_83BC3AF4);
PPC_FUNC_IMPL(__imp__sub_83BC3AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3AF8"))) PPC_WEAK_FUNC(sub_83BC3AF8);
PPC_FUNC_IMPL(__imp__sub_83BC3AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-984
	ctx.r3.s64 = ctx.r11.s64 + -984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3B04"))) PPC_WEAK_FUNC(sub_83BC3B04);
PPC_FUNC_IMPL(__imp__sub_83BC3B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3B08"))) PPC_WEAK_FUNC(sub_83BC3B08);
PPC_FUNC_IMPL(__imp__sub_83BC3B08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-976
	ctx.r3.s64 = ctx.r11.s64 + -976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3B14"))) PPC_WEAK_FUNC(sub_83BC3B14);
PPC_FUNC_IMPL(__imp__sub_83BC3B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3B18"))) PPC_WEAK_FUNC(sub_83BC3B18);
PPC_FUNC_IMPL(__imp__sub_83BC3B18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-968
	ctx.r3.s64 = ctx.r11.s64 + -968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3B24"))) PPC_WEAK_FUNC(sub_83BC3B24);
PPC_FUNC_IMPL(__imp__sub_83BC3B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3B28"))) PPC_WEAK_FUNC(sub_83BC3B28);
PPC_FUNC_IMPL(__imp__sub_83BC3B28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-960
	ctx.r3.s64 = ctx.r11.s64 + -960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BC3B34"))) PPC_WEAK_FUNC(sub_83BC3B34);
PPC_FUNC_IMPL(__imp__sub_83BC3B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BC3B38"))) PPC_WEAK_FUNC(sub_83BC3B38);
PPC_FUNC_IMPL(__imp__sub_83BC3B38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-952
	ctx.r3.s64 = ctx.r11.s64 + -952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

