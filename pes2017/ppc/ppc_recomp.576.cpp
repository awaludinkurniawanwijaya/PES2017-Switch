#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83B93E84"))) PPC_WEAK_FUNC(sub_83B93E84);
PPC_FUNC_IMPL(__imp__sub_83B93E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B93E88"))) PPC_WEAK_FUNC(sub_83B93E88);
PPC_FUNC_IMPL(__imp__sub_83B93E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,1992
	ctx.r3.s64 = ctx.r11.s64 + 1992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B93E94"))) PPC_WEAK_FUNC(sub_83B93E94);
PPC_FUNC_IMPL(__imp__sub_83B93E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B93E98"))) PPC_WEAK_FUNC(sub_83B93E98);
PPC_FUNC_IMPL(__imp__sub_83B93E98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2000
	ctx.r3.s64 = ctx.r11.s64 + 2000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B93EA4"))) PPC_WEAK_FUNC(sub_83B93EA4);
PPC_FUNC_IMPL(__imp__sub_83B93EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B93EA8"))) PPC_WEAK_FUNC(sub_83B93EA8);
PPC_FUNC_IMPL(__imp__sub_83B93EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2008
	ctx.r3.s64 = ctx.r11.s64 + 2008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B93EB4"))) PPC_WEAK_FUNC(sub_83B93EB4);
PPC_FUNC_IMPL(__imp__sub_83B93EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B93EB8"))) PPC_WEAK_FUNC(sub_83B93EB8);
PPC_FUNC_IMPL(__imp__sub_83B93EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2016
	ctx.r3.s64 = ctx.r11.s64 + 2016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B93EC4"))) PPC_WEAK_FUNC(sub_83B93EC4);
PPC_FUNC_IMPL(__imp__sub_83B93EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B93EC8"))) PPC_WEAK_FUNC(sub_83B93EC8);
PPC_FUNC_IMPL(__imp__sub_83B93EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2024
	ctx.r3.s64 = ctx.r11.s64 + 2024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B93ED4"))) PPC_WEAK_FUNC(sub_83B93ED4);
PPC_FUNC_IMPL(__imp__sub_83B93ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B93ED8"))) PPC_WEAK_FUNC(sub_83B93ED8);
PPC_FUNC_IMPL(__imp__sub_83B93ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5744
	ctx.r7.s64 = ctx.r8.s64 + -5744;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5744(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5744);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5744(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5744, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B93F00"))) PPC_WEAK_FUNC(sub_83B93F00);
PPC_FUNC_IMPL(__imp__sub_83B93F00) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-5748
	ctx.r3.s64 = ctx.r11.s64 + -5748;
	// bl 0x83523120
	ctx.lr = 0x83B93F18;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,2032
	ctx.r3.s64 = ctx.r10.s64 + 2032;
	// bl 0x831cdcc8
	ctx.lr = 0x83B93F24;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B93F34"))) PPC_WEAK_FUNC(sub_83B93F34);
PPC_FUNC_IMPL(__imp__sub_83B93F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B93F38"))) PPC_WEAK_FUNC(sub_83B93F38);
PPC_FUNC_IMPL(__imp__sub_83B93F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2048
	ctx.r3.s64 = ctx.r11.s64 + 2048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B93F44"))) PPC_WEAK_FUNC(sub_83B93F44);
PPC_FUNC_IMPL(__imp__sub_83B93F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B93F48"))) PPC_WEAK_FUNC(sub_83B93F48);
PPC_FUNC_IMPL(__imp__sub_83B93F48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2056
	ctx.r3.s64 = ctx.r11.s64 + 2056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B93F54"))) PPC_WEAK_FUNC(sub_83B93F54);
PPC_FUNC_IMPL(__imp__sub_83B93F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B93F58"))) PPC_WEAK_FUNC(sub_83B93F58);
PPC_FUNC_IMPL(__imp__sub_83B93F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2064
	ctx.r3.s64 = ctx.r11.s64 + 2064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B93F64"))) PPC_WEAK_FUNC(sub_83B93F64);
PPC_FUNC_IMPL(__imp__sub_83B93F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B93F68"))) PPC_WEAK_FUNC(sub_83B93F68);
PPC_FUNC_IMPL(__imp__sub_83B93F68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2072
	ctx.r3.s64 = ctx.r11.s64 + 2072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B93F74"))) PPC_WEAK_FUNC(sub_83B93F74);
PPC_FUNC_IMPL(__imp__sub_83B93F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B93F78"))) PPC_WEAK_FUNC(sub_83B93F78);
PPC_FUNC_IMPL(__imp__sub_83B93F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2080
	ctx.r3.s64 = ctx.r11.s64 + 2080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B93F84"))) PPC_WEAK_FUNC(sub_83B93F84);
PPC_FUNC_IMPL(__imp__sub_83B93F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B93F88"))) PPC_WEAK_FUNC(sub_83B93F88);
PPC_FUNC_IMPL(__imp__sub_83B93F88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2088
	ctx.r3.s64 = ctx.r11.s64 + 2088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B93F94"))) PPC_WEAK_FUNC(sub_83B93F94);
PPC_FUNC_IMPL(__imp__sub_83B93F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B93F98"))) PPC_WEAK_FUNC(sub_83B93F98);
PPC_FUNC_IMPL(__imp__sub_83B93F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2096
	ctx.r3.s64 = ctx.r11.s64 + 2096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B93FA4"))) PPC_WEAK_FUNC(sub_83B93FA4);
PPC_FUNC_IMPL(__imp__sub_83B93FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B93FA8"))) PPC_WEAK_FUNC(sub_83B93FA8);
PPC_FUNC_IMPL(__imp__sub_83B93FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2104
	ctx.r3.s64 = ctx.r11.s64 + 2104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B93FB4"))) PPC_WEAK_FUNC(sub_83B93FB4);
PPC_FUNC_IMPL(__imp__sub_83B93FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B93FB8"))) PPC_WEAK_FUNC(sub_83B93FB8);
PPC_FUNC_IMPL(__imp__sub_83B93FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2112
	ctx.r3.s64 = ctx.r11.s64 + 2112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B93FC4"))) PPC_WEAK_FUNC(sub_83B93FC4);
PPC_FUNC_IMPL(__imp__sub_83B93FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B93FC8"))) PPC_WEAK_FUNC(sub_83B93FC8);
PPC_FUNC_IMPL(__imp__sub_83B93FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2120
	ctx.r3.s64 = ctx.r11.s64 + 2120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B93FD4"))) PPC_WEAK_FUNC(sub_83B93FD4);
PPC_FUNC_IMPL(__imp__sub_83B93FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B93FD8"))) PPC_WEAK_FUNC(sub_83B93FD8);
PPC_FUNC_IMPL(__imp__sub_83B93FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2128
	ctx.r3.s64 = ctx.r11.s64 + 2128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B93FE4"))) PPC_WEAK_FUNC(sub_83B93FE4);
PPC_FUNC_IMPL(__imp__sub_83B93FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B93FE8"))) PPC_WEAK_FUNC(sub_83B93FE8);
PPC_FUNC_IMPL(__imp__sub_83B93FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2136
	ctx.r3.s64 = ctx.r11.s64 + 2136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B93FF4"))) PPC_WEAK_FUNC(sub_83B93FF4);
PPC_FUNC_IMPL(__imp__sub_83B93FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B93FF8"))) PPC_WEAK_FUNC(sub_83B93FF8);
PPC_FUNC_IMPL(__imp__sub_83B93FF8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5732
	ctx.r7.s64 = ctx.r8.s64 + -5732;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5732(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5732);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5732(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5732, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B94020"))) PPC_WEAK_FUNC(sub_83B94020);
PPC_FUNC_IMPL(__imp__sub_83B94020) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-5736
	ctx.r3.s64 = ctx.r11.s64 + -5736;
	// bl 0x83523120
	ctx.lr = 0x83B94038;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,2144
	ctx.r3.s64 = ctx.r10.s64 + 2144;
	// bl 0x831cdcc8
	ctx.lr = 0x83B94044;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B94054"))) PPC_WEAK_FUNC(sub_83B94054);
PPC_FUNC_IMPL(__imp__sub_83B94054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94058"))) PPC_WEAK_FUNC(sub_83B94058);
PPC_FUNC_IMPL(__imp__sub_83B94058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2160
	ctx.r3.s64 = ctx.r11.s64 + 2160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94064"))) PPC_WEAK_FUNC(sub_83B94064);
PPC_FUNC_IMPL(__imp__sub_83B94064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94068"))) PPC_WEAK_FUNC(sub_83B94068);
PPC_FUNC_IMPL(__imp__sub_83B94068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2168
	ctx.r3.s64 = ctx.r11.s64 + 2168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94074"))) PPC_WEAK_FUNC(sub_83B94074);
PPC_FUNC_IMPL(__imp__sub_83B94074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94078"))) PPC_WEAK_FUNC(sub_83B94078);
PPC_FUNC_IMPL(__imp__sub_83B94078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2176
	ctx.r3.s64 = ctx.r11.s64 + 2176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94084"))) PPC_WEAK_FUNC(sub_83B94084);
PPC_FUNC_IMPL(__imp__sub_83B94084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94088"))) PPC_WEAK_FUNC(sub_83B94088);
PPC_FUNC_IMPL(__imp__sub_83B94088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2184
	ctx.r3.s64 = ctx.r11.s64 + 2184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94094"))) PPC_WEAK_FUNC(sub_83B94094);
PPC_FUNC_IMPL(__imp__sub_83B94094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94098"))) PPC_WEAK_FUNC(sub_83B94098);
PPC_FUNC_IMPL(__imp__sub_83B94098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2192
	ctx.r3.s64 = ctx.r11.s64 + 2192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B940A4"))) PPC_WEAK_FUNC(sub_83B940A4);
PPC_FUNC_IMPL(__imp__sub_83B940A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B940A8"))) PPC_WEAK_FUNC(sub_83B940A8);
PPC_FUNC_IMPL(__imp__sub_83B940A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2200
	ctx.r3.s64 = ctx.r11.s64 + 2200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B940B4"))) PPC_WEAK_FUNC(sub_83B940B4);
PPC_FUNC_IMPL(__imp__sub_83B940B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B940B8"))) PPC_WEAK_FUNC(sub_83B940B8);
PPC_FUNC_IMPL(__imp__sub_83B940B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2208
	ctx.r3.s64 = ctx.r11.s64 + 2208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B940C4"))) PPC_WEAK_FUNC(sub_83B940C4);
PPC_FUNC_IMPL(__imp__sub_83B940C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B940C8"))) PPC_WEAK_FUNC(sub_83B940C8);
PPC_FUNC_IMPL(__imp__sub_83B940C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2216
	ctx.r3.s64 = ctx.r11.s64 + 2216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B940D4"))) PPC_WEAK_FUNC(sub_83B940D4);
PPC_FUNC_IMPL(__imp__sub_83B940D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B940D8"))) PPC_WEAK_FUNC(sub_83B940D8);
PPC_FUNC_IMPL(__imp__sub_83B940D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2224
	ctx.r3.s64 = ctx.r11.s64 + 2224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B940E4"))) PPC_WEAK_FUNC(sub_83B940E4);
PPC_FUNC_IMPL(__imp__sub_83B940E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B940E8"))) PPC_WEAK_FUNC(sub_83B940E8);
PPC_FUNC_IMPL(__imp__sub_83B940E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2232
	ctx.r3.s64 = ctx.r11.s64 + 2232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B940F4"))) PPC_WEAK_FUNC(sub_83B940F4);
PPC_FUNC_IMPL(__imp__sub_83B940F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B940F8"))) PPC_WEAK_FUNC(sub_83B940F8);
PPC_FUNC_IMPL(__imp__sub_83B940F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2240
	ctx.r3.s64 = ctx.r11.s64 + 2240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94104"))) PPC_WEAK_FUNC(sub_83B94104);
PPC_FUNC_IMPL(__imp__sub_83B94104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94108"))) PPC_WEAK_FUNC(sub_83B94108);
PPC_FUNC_IMPL(__imp__sub_83B94108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2248
	ctx.r3.s64 = ctx.r11.s64 + 2248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94114"))) PPC_WEAK_FUNC(sub_83B94114);
PPC_FUNC_IMPL(__imp__sub_83B94114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94118"))) PPC_WEAK_FUNC(sub_83B94118);
PPC_FUNC_IMPL(__imp__sub_83B94118) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5720
	ctx.r7.s64 = ctx.r8.s64 + -5720;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5720(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5720);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5720(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5720, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B94140"))) PPC_WEAK_FUNC(sub_83B94140);
PPC_FUNC_IMPL(__imp__sub_83B94140) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-5724
	ctx.r3.s64 = ctx.r11.s64 + -5724;
	// bl 0x83523120
	ctx.lr = 0x83B94158;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,2256
	ctx.r3.s64 = ctx.r10.s64 + 2256;
	// bl 0x831cdcc8
	ctx.lr = 0x83B94164;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B94174"))) PPC_WEAK_FUNC(sub_83B94174);
PPC_FUNC_IMPL(__imp__sub_83B94174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94178"))) PPC_WEAK_FUNC(sub_83B94178);
PPC_FUNC_IMPL(__imp__sub_83B94178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2272
	ctx.r3.s64 = ctx.r11.s64 + 2272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94184"))) PPC_WEAK_FUNC(sub_83B94184);
PPC_FUNC_IMPL(__imp__sub_83B94184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94188"))) PPC_WEAK_FUNC(sub_83B94188);
PPC_FUNC_IMPL(__imp__sub_83B94188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2280
	ctx.r3.s64 = ctx.r11.s64 + 2280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94194"))) PPC_WEAK_FUNC(sub_83B94194);
PPC_FUNC_IMPL(__imp__sub_83B94194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94198"))) PPC_WEAK_FUNC(sub_83B94198);
PPC_FUNC_IMPL(__imp__sub_83B94198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2288
	ctx.r3.s64 = ctx.r11.s64 + 2288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B941A4"))) PPC_WEAK_FUNC(sub_83B941A4);
PPC_FUNC_IMPL(__imp__sub_83B941A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B941A8"))) PPC_WEAK_FUNC(sub_83B941A8);
PPC_FUNC_IMPL(__imp__sub_83B941A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2296
	ctx.r3.s64 = ctx.r11.s64 + 2296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B941B4"))) PPC_WEAK_FUNC(sub_83B941B4);
PPC_FUNC_IMPL(__imp__sub_83B941B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B941B8"))) PPC_WEAK_FUNC(sub_83B941B8);
PPC_FUNC_IMPL(__imp__sub_83B941B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2304
	ctx.r3.s64 = ctx.r11.s64 + 2304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B941C4"))) PPC_WEAK_FUNC(sub_83B941C4);
PPC_FUNC_IMPL(__imp__sub_83B941C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B941C8"))) PPC_WEAK_FUNC(sub_83B941C8);
PPC_FUNC_IMPL(__imp__sub_83B941C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2312
	ctx.r3.s64 = ctx.r11.s64 + 2312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B941D4"))) PPC_WEAK_FUNC(sub_83B941D4);
PPC_FUNC_IMPL(__imp__sub_83B941D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B941D8"))) PPC_WEAK_FUNC(sub_83B941D8);
PPC_FUNC_IMPL(__imp__sub_83B941D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2320
	ctx.r3.s64 = ctx.r11.s64 + 2320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B941E4"))) PPC_WEAK_FUNC(sub_83B941E4);
PPC_FUNC_IMPL(__imp__sub_83B941E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B941E8"))) PPC_WEAK_FUNC(sub_83B941E8);
PPC_FUNC_IMPL(__imp__sub_83B941E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2328
	ctx.r3.s64 = ctx.r11.s64 + 2328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B941F4"))) PPC_WEAK_FUNC(sub_83B941F4);
PPC_FUNC_IMPL(__imp__sub_83B941F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B941F8"))) PPC_WEAK_FUNC(sub_83B941F8);
PPC_FUNC_IMPL(__imp__sub_83B941F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2336
	ctx.r3.s64 = ctx.r11.s64 + 2336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94204"))) PPC_WEAK_FUNC(sub_83B94204);
PPC_FUNC_IMPL(__imp__sub_83B94204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94208"))) PPC_WEAK_FUNC(sub_83B94208);
PPC_FUNC_IMPL(__imp__sub_83B94208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2344
	ctx.r3.s64 = ctx.r11.s64 + 2344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94214"))) PPC_WEAK_FUNC(sub_83B94214);
PPC_FUNC_IMPL(__imp__sub_83B94214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94218"))) PPC_WEAK_FUNC(sub_83B94218);
PPC_FUNC_IMPL(__imp__sub_83B94218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2352
	ctx.r3.s64 = ctx.r11.s64 + 2352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94224"))) PPC_WEAK_FUNC(sub_83B94224);
PPC_FUNC_IMPL(__imp__sub_83B94224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94228"))) PPC_WEAK_FUNC(sub_83B94228);
PPC_FUNC_IMPL(__imp__sub_83B94228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2360
	ctx.r3.s64 = ctx.r11.s64 + 2360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94234"))) PPC_WEAK_FUNC(sub_83B94234);
PPC_FUNC_IMPL(__imp__sub_83B94234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94238"))) PPC_WEAK_FUNC(sub_83B94238);
PPC_FUNC_IMPL(__imp__sub_83B94238) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5708
	ctx.r7.s64 = ctx.r8.s64 + -5708;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5708(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5708);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5708(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5708, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B94260"))) PPC_WEAK_FUNC(sub_83B94260);
PPC_FUNC_IMPL(__imp__sub_83B94260) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-5712
	ctx.r3.s64 = ctx.r11.s64 + -5712;
	// bl 0x83523120
	ctx.lr = 0x83B94278;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,2368
	ctx.r3.s64 = ctx.r10.s64 + 2368;
	// bl 0x831cdcc8
	ctx.lr = 0x83B94284;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B94294"))) PPC_WEAK_FUNC(sub_83B94294);
PPC_FUNC_IMPL(__imp__sub_83B94294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94298"))) PPC_WEAK_FUNC(sub_83B94298);
PPC_FUNC_IMPL(__imp__sub_83B94298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2384
	ctx.r3.s64 = ctx.r11.s64 + 2384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B942A4"))) PPC_WEAK_FUNC(sub_83B942A4);
PPC_FUNC_IMPL(__imp__sub_83B942A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B942A8"))) PPC_WEAK_FUNC(sub_83B942A8);
PPC_FUNC_IMPL(__imp__sub_83B942A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2392
	ctx.r3.s64 = ctx.r11.s64 + 2392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B942B4"))) PPC_WEAK_FUNC(sub_83B942B4);
PPC_FUNC_IMPL(__imp__sub_83B942B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B942B8"))) PPC_WEAK_FUNC(sub_83B942B8);
PPC_FUNC_IMPL(__imp__sub_83B942B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2400
	ctx.r3.s64 = ctx.r11.s64 + 2400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B942C4"))) PPC_WEAK_FUNC(sub_83B942C4);
PPC_FUNC_IMPL(__imp__sub_83B942C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B942C8"))) PPC_WEAK_FUNC(sub_83B942C8);
PPC_FUNC_IMPL(__imp__sub_83B942C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2408
	ctx.r3.s64 = ctx.r11.s64 + 2408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B942D4"))) PPC_WEAK_FUNC(sub_83B942D4);
PPC_FUNC_IMPL(__imp__sub_83B942D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B942D8"))) PPC_WEAK_FUNC(sub_83B942D8);
PPC_FUNC_IMPL(__imp__sub_83B942D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2416
	ctx.r3.s64 = ctx.r11.s64 + 2416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B942E4"))) PPC_WEAK_FUNC(sub_83B942E4);
PPC_FUNC_IMPL(__imp__sub_83B942E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B942E8"))) PPC_WEAK_FUNC(sub_83B942E8);
PPC_FUNC_IMPL(__imp__sub_83B942E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2424
	ctx.r3.s64 = ctx.r11.s64 + 2424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B942F4"))) PPC_WEAK_FUNC(sub_83B942F4);
PPC_FUNC_IMPL(__imp__sub_83B942F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B942F8"))) PPC_WEAK_FUNC(sub_83B942F8);
PPC_FUNC_IMPL(__imp__sub_83B942F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2432
	ctx.r3.s64 = ctx.r11.s64 + 2432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94304"))) PPC_WEAK_FUNC(sub_83B94304);
PPC_FUNC_IMPL(__imp__sub_83B94304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94308"))) PPC_WEAK_FUNC(sub_83B94308);
PPC_FUNC_IMPL(__imp__sub_83B94308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2440
	ctx.r3.s64 = ctx.r11.s64 + 2440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94314"))) PPC_WEAK_FUNC(sub_83B94314);
PPC_FUNC_IMPL(__imp__sub_83B94314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94318"))) PPC_WEAK_FUNC(sub_83B94318);
PPC_FUNC_IMPL(__imp__sub_83B94318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2448
	ctx.r3.s64 = ctx.r11.s64 + 2448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94324"))) PPC_WEAK_FUNC(sub_83B94324);
PPC_FUNC_IMPL(__imp__sub_83B94324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94328"))) PPC_WEAK_FUNC(sub_83B94328);
PPC_FUNC_IMPL(__imp__sub_83B94328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2456
	ctx.r3.s64 = ctx.r11.s64 + 2456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94334"))) PPC_WEAK_FUNC(sub_83B94334);
PPC_FUNC_IMPL(__imp__sub_83B94334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94338"))) PPC_WEAK_FUNC(sub_83B94338);
PPC_FUNC_IMPL(__imp__sub_83B94338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2464
	ctx.r3.s64 = ctx.r11.s64 + 2464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94344"))) PPC_WEAK_FUNC(sub_83B94344);
PPC_FUNC_IMPL(__imp__sub_83B94344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94348"))) PPC_WEAK_FUNC(sub_83B94348);
PPC_FUNC_IMPL(__imp__sub_83B94348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2472
	ctx.r3.s64 = ctx.r11.s64 + 2472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94354"))) PPC_WEAK_FUNC(sub_83B94354);
PPC_FUNC_IMPL(__imp__sub_83B94354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94358"))) PPC_WEAK_FUNC(sub_83B94358);
PPC_FUNC_IMPL(__imp__sub_83B94358) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5696
	ctx.r7.s64 = ctx.r8.s64 + -5696;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5696(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5696);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5696(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5696, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B94380"))) PPC_WEAK_FUNC(sub_83B94380);
PPC_FUNC_IMPL(__imp__sub_83B94380) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-5700
	ctx.r3.s64 = ctx.r11.s64 + -5700;
	// bl 0x83523120
	ctx.lr = 0x83B94398;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,2480
	ctx.r3.s64 = ctx.r10.s64 + 2480;
	// bl 0x831cdcc8
	ctx.lr = 0x83B943A4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B943B4"))) PPC_WEAK_FUNC(sub_83B943B4);
PPC_FUNC_IMPL(__imp__sub_83B943B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B943B8"))) PPC_WEAK_FUNC(sub_83B943B8);
PPC_FUNC_IMPL(__imp__sub_83B943B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2496
	ctx.r3.s64 = ctx.r11.s64 + 2496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B943C4"))) PPC_WEAK_FUNC(sub_83B943C4);
PPC_FUNC_IMPL(__imp__sub_83B943C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B943C8"))) PPC_WEAK_FUNC(sub_83B943C8);
PPC_FUNC_IMPL(__imp__sub_83B943C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2504
	ctx.r3.s64 = ctx.r11.s64 + 2504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B943D4"))) PPC_WEAK_FUNC(sub_83B943D4);
PPC_FUNC_IMPL(__imp__sub_83B943D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B943D8"))) PPC_WEAK_FUNC(sub_83B943D8);
PPC_FUNC_IMPL(__imp__sub_83B943D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2512
	ctx.r3.s64 = ctx.r11.s64 + 2512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B943E4"))) PPC_WEAK_FUNC(sub_83B943E4);
PPC_FUNC_IMPL(__imp__sub_83B943E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B943E8"))) PPC_WEAK_FUNC(sub_83B943E8);
PPC_FUNC_IMPL(__imp__sub_83B943E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2520
	ctx.r3.s64 = ctx.r11.s64 + 2520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B943F4"))) PPC_WEAK_FUNC(sub_83B943F4);
PPC_FUNC_IMPL(__imp__sub_83B943F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B943F8"))) PPC_WEAK_FUNC(sub_83B943F8);
PPC_FUNC_IMPL(__imp__sub_83B943F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2528
	ctx.r3.s64 = ctx.r11.s64 + 2528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94404"))) PPC_WEAK_FUNC(sub_83B94404);
PPC_FUNC_IMPL(__imp__sub_83B94404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94408"))) PPC_WEAK_FUNC(sub_83B94408);
PPC_FUNC_IMPL(__imp__sub_83B94408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2536
	ctx.r3.s64 = ctx.r11.s64 + 2536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94414"))) PPC_WEAK_FUNC(sub_83B94414);
PPC_FUNC_IMPL(__imp__sub_83B94414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94418"))) PPC_WEAK_FUNC(sub_83B94418);
PPC_FUNC_IMPL(__imp__sub_83B94418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2544
	ctx.r3.s64 = ctx.r11.s64 + 2544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94424"))) PPC_WEAK_FUNC(sub_83B94424);
PPC_FUNC_IMPL(__imp__sub_83B94424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94428"))) PPC_WEAK_FUNC(sub_83B94428);
PPC_FUNC_IMPL(__imp__sub_83B94428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2552
	ctx.r3.s64 = ctx.r11.s64 + 2552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94434"))) PPC_WEAK_FUNC(sub_83B94434);
PPC_FUNC_IMPL(__imp__sub_83B94434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94438"))) PPC_WEAK_FUNC(sub_83B94438);
PPC_FUNC_IMPL(__imp__sub_83B94438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2560
	ctx.r3.s64 = ctx.r11.s64 + 2560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94444"))) PPC_WEAK_FUNC(sub_83B94444);
PPC_FUNC_IMPL(__imp__sub_83B94444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94448"))) PPC_WEAK_FUNC(sub_83B94448);
PPC_FUNC_IMPL(__imp__sub_83B94448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2568
	ctx.r3.s64 = ctx.r11.s64 + 2568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94454"))) PPC_WEAK_FUNC(sub_83B94454);
PPC_FUNC_IMPL(__imp__sub_83B94454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94458"))) PPC_WEAK_FUNC(sub_83B94458);
PPC_FUNC_IMPL(__imp__sub_83B94458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2576
	ctx.r3.s64 = ctx.r11.s64 + 2576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94464"))) PPC_WEAK_FUNC(sub_83B94464);
PPC_FUNC_IMPL(__imp__sub_83B94464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94468"))) PPC_WEAK_FUNC(sub_83B94468);
PPC_FUNC_IMPL(__imp__sub_83B94468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2584
	ctx.r3.s64 = ctx.r11.s64 + 2584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94474"))) PPC_WEAK_FUNC(sub_83B94474);
PPC_FUNC_IMPL(__imp__sub_83B94474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94478"))) PPC_WEAK_FUNC(sub_83B94478);
PPC_FUNC_IMPL(__imp__sub_83B94478) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5684
	ctx.r7.s64 = ctx.r8.s64 + -5684;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5684(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5684);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5684(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5684, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B944A0"))) PPC_WEAK_FUNC(sub_83B944A0);
PPC_FUNC_IMPL(__imp__sub_83B944A0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-5688
	ctx.r3.s64 = ctx.r11.s64 + -5688;
	// bl 0x83523120
	ctx.lr = 0x83B944B8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,2592
	ctx.r3.s64 = ctx.r10.s64 + 2592;
	// bl 0x831cdcc8
	ctx.lr = 0x83B944C4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B944D4"))) PPC_WEAK_FUNC(sub_83B944D4);
PPC_FUNC_IMPL(__imp__sub_83B944D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B944D8"))) PPC_WEAK_FUNC(sub_83B944D8);
PPC_FUNC_IMPL(__imp__sub_83B944D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2608
	ctx.r3.s64 = ctx.r11.s64 + 2608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B944E4"))) PPC_WEAK_FUNC(sub_83B944E4);
PPC_FUNC_IMPL(__imp__sub_83B944E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B944E8"))) PPC_WEAK_FUNC(sub_83B944E8);
PPC_FUNC_IMPL(__imp__sub_83B944E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2616
	ctx.r3.s64 = ctx.r11.s64 + 2616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B944F4"))) PPC_WEAK_FUNC(sub_83B944F4);
PPC_FUNC_IMPL(__imp__sub_83B944F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B944F8"))) PPC_WEAK_FUNC(sub_83B944F8);
PPC_FUNC_IMPL(__imp__sub_83B944F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2624
	ctx.r3.s64 = ctx.r11.s64 + 2624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94504"))) PPC_WEAK_FUNC(sub_83B94504);
PPC_FUNC_IMPL(__imp__sub_83B94504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94508"))) PPC_WEAK_FUNC(sub_83B94508);
PPC_FUNC_IMPL(__imp__sub_83B94508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2632
	ctx.r3.s64 = ctx.r11.s64 + 2632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94514"))) PPC_WEAK_FUNC(sub_83B94514);
PPC_FUNC_IMPL(__imp__sub_83B94514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94518"))) PPC_WEAK_FUNC(sub_83B94518);
PPC_FUNC_IMPL(__imp__sub_83B94518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2640
	ctx.r3.s64 = ctx.r11.s64 + 2640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94524"))) PPC_WEAK_FUNC(sub_83B94524);
PPC_FUNC_IMPL(__imp__sub_83B94524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94528"))) PPC_WEAK_FUNC(sub_83B94528);
PPC_FUNC_IMPL(__imp__sub_83B94528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2648
	ctx.r3.s64 = ctx.r11.s64 + 2648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94534"))) PPC_WEAK_FUNC(sub_83B94534);
PPC_FUNC_IMPL(__imp__sub_83B94534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94538"))) PPC_WEAK_FUNC(sub_83B94538);
PPC_FUNC_IMPL(__imp__sub_83B94538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2656
	ctx.r3.s64 = ctx.r11.s64 + 2656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94544"))) PPC_WEAK_FUNC(sub_83B94544);
PPC_FUNC_IMPL(__imp__sub_83B94544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94548"))) PPC_WEAK_FUNC(sub_83B94548);
PPC_FUNC_IMPL(__imp__sub_83B94548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2664
	ctx.r3.s64 = ctx.r11.s64 + 2664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94554"))) PPC_WEAK_FUNC(sub_83B94554);
PPC_FUNC_IMPL(__imp__sub_83B94554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94558"))) PPC_WEAK_FUNC(sub_83B94558);
PPC_FUNC_IMPL(__imp__sub_83B94558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2672
	ctx.r3.s64 = ctx.r11.s64 + 2672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94564"))) PPC_WEAK_FUNC(sub_83B94564);
PPC_FUNC_IMPL(__imp__sub_83B94564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94568"))) PPC_WEAK_FUNC(sub_83B94568);
PPC_FUNC_IMPL(__imp__sub_83B94568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2680
	ctx.r3.s64 = ctx.r11.s64 + 2680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94574"))) PPC_WEAK_FUNC(sub_83B94574);
PPC_FUNC_IMPL(__imp__sub_83B94574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94578"))) PPC_WEAK_FUNC(sub_83B94578);
PPC_FUNC_IMPL(__imp__sub_83B94578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2688
	ctx.r3.s64 = ctx.r11.s64 + 2688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94584"))) PPC_WEAK_FUNC(sub_83B94584);
PPC_FUNC_IMPL(__imp__sub_83B94584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94588"))) PPC_WEAK_FUNC(sub_83B94588);
PPC_FUNC_IMPL(__imp__sub_83B94588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2696
	ctx.r3.s64 = ctx.r11.s64 + 2696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94594"))) PPC_WEAK_FUNC(sub_83B94594);
PPC_FUNC_IMPL(__imp__sub_83B94594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94598"))) PPC_WEAK_FUNC(sub_83B94598);
PPC_FUNC_IMPL(__imp__sub_83B94598) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5672
	ctx.r7.s64 = ctx.r8.s64 + -5672;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5672(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5672);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5672(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5672, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B945C0"))) PPC_WEAK_FUNC(sub_83B945C0);
PPC_FUNC_IMPL(__imp__sub_83B945C0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-5676
	ctx.r3.s64 = ctx.r11.s64 + -5676;
	// bl 0x83523120
	ctx.lr = 0x83B945D8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,2704
	ctx.r3.s64 = ctx.r10.s64 + 2704;
	// bl 0x831cdcc8
	ctx.lr = 0x83B945E4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B945F4"))) PPC_WEAK_FUNC(sub_83B945F4);
PPC_FUNC_IMPL(__imp__sub_83B945F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B945F8"))) PPC_WEAK_FUNC(sub_83B945F8);
PPC_FUNC_IMPL(__imp__sub_83B945F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2720
	ctx.r3.s64 = ctx.r11.s64 + 2720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94604"))) PPC_WEAK_FUNC(sub_83B94604);
PPC_FUNC_IMPL(__imp__sub_83B94604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94608"))) PPC_WEAK_FUNC(sub_83B94608);
PPC_FUNC_IMPL(__imp__sub_83B94608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2728
	ctx.r3.s64 = ctx.r11.s64 + 2728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94614"))) PPC_WEAK_FUNC(sub_83B94614);
PPC_FUNC_IMPL(__imp__sub_83B94614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94618"))) PPC_WEAK_FUNC(sub_83B94618);
PPC_FUNC_IMPL(__imp__sub_83B94618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2736
	ctx.r3.s64 = ctx.r11.s64 + 2736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94624"))) PPC_WEAK_FUNC(sub_83B94624);
PPC_FUNC_IMPL(__imp__sub_83B94624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94628"))) PPC_WEAK_FUNC(sub_83B94628);
PPC_FUNC_IMPL(__imp__sub_83B94628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2744
	ctx.r3.s64 = ctx.r11.s64 + 2744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94634"))) PPC_WEAK_FUNC(sub_83B94634);
PPC_FUNC_IMPL(__imp__sub_83B94634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94638"))) PPC_WEAK_FUNC(sub_83B94638);
PPC_FUNC_IMPL(__imp__sub_83B94638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2752
	ctx.r3.s64 = ctx.r11.s64 + 2752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94644"))) PPC_WEAK_FUNC(sub_83B94644);
PPC_FUNC_IMPL(__imp__sub_83B94644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94648"))) PPC_WEAK_FUNC(sub_83B94648);
PPC_FUNC_IMPL(__imp__sub_83B94648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2760
	ctx.r3.s64 = ctx.r11.s64 + 2760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94654"))) PPC_WEAK_FUNC(sub_83B94654);
PPC_FUNC_IMPL(__imp__sub_83B94654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94658"))) PPC_WEAK_FUNC(sub_83B94658);
PPC_FUNC_IMPL(__imp__sub_83B94658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2768
	ctx.r3.s64 = ctx.r11.s64 + 2768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94664"))) PPC_WEAK_FUNC(sub_83B94664);
PPC_FUNC_IMPL(__imp__sub_83B94664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94668"))) PPC_WEAK_FUNC(sub_83B94668);
PPC_FUNC_IMPL(__imp__sub_83B94668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2776
	ctx.r3.s64 = ctx.r11.s64 + 2776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94674"))) PPC_WEAK_FUNC(sub_83B94674);
PPC_FUNC_IMPL(__imp__sub_83B94674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94678"))) PPC_WEAK_FUNC(sub_83B94678);
PPC_FUNC_IMPL(__imp__sub_83B94678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2784
	ctx.r3.s64 = ctx.r11.s64 + 2784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94684"))) PPC_WEAK_FUNC(sub_83B94684);
PPC_FUNC_IMPL(__imp__sub_83B94684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94688"))) PPC_WEAK_FUNC(sub_83B94688);
PPC_FUNC_IMPL(__imp__sub_83B94688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2792
	ctx.r3.s64 = ctx.r11.s64 + 2792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94694"))) PPC_WEAK_FUNC(sub_83B94694);
PPC_FUNC_IMPL(__imp__sub_83B94694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94698"))) PPC_WEAK_FUNC(sub_83B94698);
PPC_FUNC_IMPL(__imp__sub_83B94698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2800
	ctx.r3.s64 = ctx.r11.s64 + 2800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B946A4"))) PPC_WEAK_FUNC(sub_83B946A4);
PPC_FUNC_IMPL(__imp__sub_83B946A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B946A8"))) PPC_WEAK_FUNC(sub_83B946A8);
PPC_FUNC_IMPL(__imp__sub_83B946A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2808
	ctx.r3.s64 = ctx.r11.s64 + 2808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B946B4"))) PPC_WEAK_FUNC(sub_83B946B4);
PPC_FUNC_IMPL(__imp__sub_83B946B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B946B8"))) PPC_WEAK_FUNC(sub_83B946B8);
PPC_FUNC_IMPL(__imp__sub_83B946B8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5660
	ctx.r7.s64 = ctx.r8.s64 + -5660;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5660(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5660);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5660(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5660, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B946E0"))) PPC_WEAK_FUNC(sub_83B946E0);
PPC_FUNC_IMPL(__imp__sub_83B946E0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-5664
	ctx.r3.s64 = ctx.r11.s64 + -5664;
	// bl 0x83523120
	ctx.lr = 0x83B946F8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,2816
	ctx.r3.s64 = ctx.r10.s64 + 2816;
	// bl 0x831cdcc8
	ctx.lr = 0x83B94704;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B94714"))) PPC_WEAK_FUNC(sub_83B94714);
PPC_FUNC_IMPL(__imp__sub_83B94714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94718"))) PPC_WEAK_FUNC(sub_83B94718);
PPC_FUNC_IMPL(__imp__sub_83B94718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94724"))) PPC_WEAK_FUNC(sub_83B94724);
PPC_FUNC_IMPL(__imp__sub_83B94724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94728"))) PPC_WEAK_FUNC(sub_83B94728);
PPC_FUNC_IMPL(__imp__sub_83B94728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2840
	ctx.r3.s64 = ctx.r11.s64 + 2840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94734"))) PPC_WEAK_FUNC(sub_83B94734);
PPC_FUNC_IMPL(__imp__sub_83B94734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94738"))) PPC_WEAK_FUNC(sub_83B94738);
PPC_FUNC_IMPL(__imp__sub_83B94738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2848
	ctx.r3.s64 = ctx.r11.s64 + 2848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94744"))) PPC_WEAK_FUNC(sub_83B94744);
PPC_FUNC_IMPL(__imp__sub_83B94744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94748"))) PPC_WEAK_FUNC(sub_83B94748);
PPC_FUNC_IMPL(__imp__sub_83B94748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2856
	ctx.r3.s64 = ctx.r11.s64 + 2856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94754"))) PPC_WEAK_FUNC(sub_83B94754);
PPC_FUNC_IMPL(__imp__sub_83B94754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94758"))) PPC_WEAK_FUNC(sub_83B94758);
PPC_FUNC_IMPL(__imp__sub_83B94758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2864
	ctx.r3.s64 = ctx.r11.s64 + 2864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94764"))) PPC_WEAK_FUNC(sub_83B94764);
PPC_FUNC_IMPL(__imp__sub_83B94764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94768"))) PPC_WEAK_FUNC(sub_83B94768);
PPC_FUNC_IMPL(__imp__sub_83B94768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2872
	ctx.r3.s64 = ctx.r11.s64 + 2872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94774"))) PPC_WEAK_FUNC(sub_83B94774);
PPC_FUNC_IMPL(__imp__sub_83B94774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94778"))) PPC_WEAK_FUNC(sub_83B94778);
PPC_FUNC_IMPL(__imp__sub_83B94778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2880
	ctx.r3.s64 = ctx.r11.s64 + 2880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94784"))) PPC_WEAK_FUNC(sub_83B94784);
PPC_FUNC_IMPL(__imp__sub_83B94784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94788"))) PPC_WEAK_FUNC(sub_83B94788);
PPC_FUNC_IMPL(__imp__sub_83B94788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2888
	ctx.r3.s64 = ctx.r11.s64 + 2888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94794"))) PPC_WEAK_FUNC(sub_83B94794);
PPC_FUNC_IMPL(__imp__sub_83B94794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94798"))) PPC_WEAK_FUNC(sub_83B94798);
PPC_FUNC_IMPL(__imp__sub_83B94798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2896
	ctx.r3.s64 = ctx.r11.s64 + 2896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B947A4"))) PPC_WEAK_FUNC(sub_83B947A4);
PPC_FUNC_IMPL(__imp__sub_83B947A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B947A8"))) PPC_WEAK_FUNC(sub_83B947A8);
PPC_FUNC_IMPL(__imp__sub_83B947A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2904
	ctx.r3.s64 = ctx.r11.s64 + 2904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B947B4"))) PPC_WEAK_FUNC(sub_83B947B4);
PPC_FUNC_IMPL(__imp__sub_83B947B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B947B8"))) PPC_WEAK_FUNC(sub_83B947B8);
PPC_FUNC_IMPL(__imp__sub_83B947B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2912
	ctx.r3.s64 = ctx.r11.s64 + 2912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B947C4"))) PPC_WEAK_FUNC(sub_83B947C4);
PPC_FUNC_IMPL(__imp__sub_83B947C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B947C8"))) PPC_WEAK_FUNC(sub_83B947C8);
PPC_FUNC_IMPL(__imp__sub_83B947C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2920
	ctx.r3.s64 = ctx.r11.s64 + 2920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B947D4"))) PPC_WEAK_FUNC(sub_83B947D4);
PPC_FUNC_IMPL(__imp__sub_83B947D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B947D8"))) PPC_WEAK_FUNC(sub_83B947D8);
PPC_FUNC_IMPL(__imp__sub_83B947D8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5648
	ctx.r7.s64 = ctx.r8.s64 + -5648;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5648(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5648);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5648(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5648, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B94800"))) PPC_WEAK_FUNC(sub_83B94800);
PPC_FUNC_IMPL(__imp__sub_83B94800) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-5652
	ctx.r3.s64 = ctx.r11.s64 + -5652;
	// bl 0x83523120
	ctx.lr = 0x83B94818;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,2928
	ctx.r3.s64 = ctx.r10.s64 + 2928;
	// bl 0x831cdcc8
	ctx.lr = 0x83B94824;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B94834"))) PPC_WEAK_FUNC(sub_83B94834);
PPC_FUNC_IMPL(__imp__sub_83B94834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94838"))) PPC_WEAK_FUNC(sub_83B94838);
PPC_FUNC_IMPL(__imp__sub_83B94838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2944
	ctx.r3.s64 = ctx.r11.s64 + 2944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94844"))) PPC_WEAK_FUNC(sub_83B94844);
PPC_FUNC_IMPL(__imp__sub_83B94844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94848"))) PPC_WEAK_FUNC(sub_83B94848);
PPC_FUNC_IMPL(__imp__sub_83B94848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2952
	ctx.r3.s64 = ctx.r11.s64 + 2952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94854"))) PPC_WEAK_FUNC(sub_83B94854);
PPC_FUNC_IMPL(__imp__sub_83B94854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94858"))) PPC_WEAK_FUNC(sub_83B94858);
PPC_FUNC_IMPL(__imp__sub_83B94858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2960
	ctx.r3.s64 = ctx.r11.s64 + 2960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94864"))) PPC_WEAK_FUNC(sub_83B94864);
PPC_FUNC_IMPL(__imp__sub_83B94864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94868"))) PPC_WEAK_FUNC(sub_83B94868);
PPC_FUNC_IMPL(__imp__sub_83B94868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2968
	ctx.r3.s64 = ctx.r11.s64 + 2968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94874"))) PPC_WEAK_FUNC(sub_83B94874);
PPC_FUNC_IMPL(__imp__sub_83B94874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94878"))) PPC_WEAK_FUNC(sub_83B94878);
PPC_FUNC_IMPL(__imp__sub_83B94878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2976
	ctx.r3.s64 = ctx.r11.s64 + 2976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94884"))) PPC_WEAK_FUNC(sub_83B94884);
PPC_FUNC_IMPL(__imp__sub_83B94884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94888"))) PPC_WEAK_FUNC(sub_83B94888);
PPC_FUNC_IMPL(__imp__sub_83B94888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2984
	ctx.r3.s64 = ctx.r11.s64 + 2984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B94894"))) PPC_WEAK_FUNC(sub_83B94894);
PPC_FUNC_IMPL(__imp__sub_83B94894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B94898"))) PPC_WEAK_FUNC(sub_83B94898);
PPC_FUNC_IMPL(__imp__sub_83B94898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,2992
	ctx.r3.s64 = ctx.r11.s64 + 2992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B948A4"))) PPC_WEAK_FUNC(sub_83B948A4);
PPC_FUNC_IMPL(__imp__sub_83B948A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B948A8"))) PPC_WEAK_FUNC(sub_83B948A8);
PPC_FUNC_IMPL(__imp__sub_83B948A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,3000
	ctx.r3.s64 = ctx.r11.s64 + 3000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B948B4"))) PPC_WEAK_FUNC(sub_83B948B4);
PPC_FUNC_IMPL(__imp__sub_83B948B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B948B8"))) PPC_WEAK_FUNC(sub_83B948B8);
PPC_FUNC_IMPL(__imp__sub_83B948B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,3008
	ctx.r3.s64 = ctx.r11.s64 + 3008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B948C4"))) PPC_WEAK_FUNC(sub_83B948C4);
PPC_FUNC_IMPL(__imp__sub_83B948C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B948C8"))) PPC_WEAK_FUNC(sub_83B948C8);
PPC_FUNC_IMPL(__imp__sub_83B948C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,3016
	ctx.r3.s64 = ctx.r11.s64 + 3016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B948D4"))) PPC_WEAK_FUNC(sub_83B948D4);
PPC_FUNC_IMPL(__imp__sub_83B948D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B948D8"))) PPC_WEAK_FUNC(sub_83B948D8);
PPC_FUNC_IMPL(__imp__sub_83B948D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,3024
	ctx.r3.s64 = ctx.r11.s64 + 3024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B948E4"))) PPC_WEAK_FUNC(sub_83B948E4);
PPC_FUNC_IMPL(__imp__sub_83B948E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B948E8"))) PPC_WEAK_FUNC(sub_83B948E8);
PPC_FUNC_IMPL(__imp__sub_83B948E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,3032
	ctx.r3.s64 = ctx.r11.s64 + 3032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B948F4"))) PPC_WEAK_FUNC(sub_83B948F4);
PPC_FUNC_IMPL(__imp__sub_83B948F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B948F8"))) PPC_WEAK_FUNC(sub_83B948F8);
PPC_FUNC_IMPL(__imp__sub_83B948F8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5636
	ctx.r7.s64 = ctx.r8.s64 + -5636;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5636(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5636);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5636(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5636, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B94920"))) PPC_WEAK_FUNC(sub_83B94920);
PPC_FUNC_IMPL(__imp__sub_83B94920) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,-5640
	ctx.r3.s64 = ctx.r11.s64 + -5640;
	// bl 0x83523120
	ctx.lr = 0x83B94938;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,3040
	ctx.r3.s64 = ctx.r10.s64 + 3040;
	// bl 0x831cdcc8
	ctx.lr = 0x83B94944;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

