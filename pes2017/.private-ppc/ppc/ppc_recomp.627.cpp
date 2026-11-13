#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BBD1B8"))) PPC_WEAK_FUNC(sub_83BBD1B8);
PPC_FUNC_IMPL(__imp__sub_83BBD1B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9192
	ctx.r3.s64 = ctx.r11.s64 + -9192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD1C4"))) PPC_WEAK_FUNC(sub_83BBD1C4);
PPC_FUNC_IMPL(__imp__sub_83BBD1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD1C8"))) PPC_WEAK_FUNC(sub_83BBD1C8);
PPC_FUNC_IMPL(__imp__sub_83BBD1C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9184
	ctx.r3.s64 = ctx.r11.s64 + -9184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD1D4"))) PPC_WEAK_FUNC(sub_83BBD1D4);
PPC_FUNC_IMPL(__imp__sub_83BBD1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD1D8"))) PPC_WEAK_FUNC(sub_83BBD1D8);
PPC_FUNC_IMPL(__imp__sub_83BBD1D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9176
	ctx.r3.s64 = ctx.r11.s64 + -9176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD1E4"))) PPC_WEAK_FUNC(sub_83BBD1E4);
PPC_FUNC_IMPL(__imp__sub_83BBD1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD1E8"))) PPC_WEAK_FUNC(sub_83BBD1E8);
PPC_FUNC_IMPL(__imp__sub_83BBD1E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9168
	ctx.r3.s64 = ctx.r11.s64 + -9168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD1F4"))) PPC_WEAK_FUNC(sub_83BBD1F4);
PPC_FUNC_IMPL(__imp__sub_83BBD1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD1F8"))) PPC_WEAK_FUNC(sub_83BBD1F8);
PPC_FUNC_IMPL(__imp__sub_83BBD1F8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,21656
	ctx.r3.s64 = ctx.r11.s64 + 21656;
	// bl 0x83523120
	ctx.lr = 0x83BBD210;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-9160
	ctx.r3.s64 = ctx.r10.s64 + -9160;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBD21C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBD22C"))) PPC_WEAK_FUNC(sub_83BBD22C);
PPC_FUNC_IMPL(__imp__sub_83BBD22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD230"))) PPC_WEAK_FUNC(sub_83BBD230);
PPC_FUNC_IMPL(__imp__sub_83BBD230) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,21672
	ctx.r7.s64 = ctx.r8.s64 + 21672;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,21672(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21672);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,21672(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21672, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBD258"))) PPC_WEAK_FUNC(sub_83BBD258);
PPC_FUNC_IMPL(__imp__sub_83BBD258) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-5692
	ctx.r6.s64 = ctx.r7.s64 + -5692;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-5764(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -5764);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,21672(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21672);
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
	// std r9,-5692(r7)
	PPC_STORE_U64(ctx.r7.u32 + -5692, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBD2A0"))) PPC_WEAK_FUNC(sub_83BBD2A0);
PPC_FUNC_IMPL(__imp__sub_83BBD2A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9144
	ctx.r3.s64 = ctx.r11.s64 + -9144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD2AC"))) PPC_WEAK_FUNC(sub_83BBD2AC);
PPC_FUNC_IMPL(__imp__sub_83BBD2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD2B0"))) PPC_WEAK_FUNC(sub_83BBD2B0);
PPC_FUNC_IMPL(__imp__sub_83BBD2B0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,21680
	ctx.r3.s64 = ctx.r11.s64 + 21680;
	// bl 0x8259af80
	ctx.lr = 0x83BBD2C8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-9128
	ctx.r3.s64 = ctx.r10.s64 + -9128;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBD2D4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBD2E4"))) PPC_WEAK_FUNC(sub_83BBD2E4);
PPC_FUNC_IMPL(__imp__sub_83BBD2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD2E8"))) PPC_WEAK_FUNC(sub_83BBD2E8);
PPC_FUNC_IMPL(__imp__sub_83BBD2E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,21660
	ctx.r11.s64 = ctx.r8.s64 + 21660;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-5716(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5716);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-9136
	ctx.r3.s64 = ctx.r6.s64 + -9136;
	// stw r10,21660(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21660, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD318"))) PPC_WEAK_FUNC(sub_83BBD318);
PPC_FUNC_IMPL(__imp__sub_83BBD318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9120
	ctx.r3.s64 = ctx.r11.s64 + -9120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD324"))) PPC_WEAK_FUNC(sub_83BBD324);
PPC_FUNC_IMPL(__imp__sub_83BBD324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD328"))) PPC_WEAK_FUNC(sub_83BBD328);
PPC_FUNC_IMPL(__imp__sub_83BBD328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9112
	ctx.r3.s64 = ctx.r11.s64 + -9112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD334"))) PPC_WEAK_FUNC(sub_83BBD334);
PPC_FUNC_IMPL(__imp__sub_83BBD334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD338"))) PPC_WEAK_FUNC(sub_83BBD338);
PPC_FUNC_IMPL(__imp__sub_83BBD338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9104
	ctx.r3.s64 = ctx.r11.s64 + -9104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD344"))) PPC_WEAK_FUNC(sub_83BBD344);
PPC_FUNC_IMPL(__imp__sub_83BBD344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD348"))) PPC_WEAK_FUNC(sub_83BBD348);
PPC_FUNC_IMPL(__imp__sub_83BBD348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9096
	ctx.r3.s64 = ctx.r11.s64 + -9096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD354"))) PPC_WEAK_FUNC(sub_83BBD354);
PPC_FUNC_IMPL(__imp__sub_83BBD354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD358"))) PPC_WEAK_FUNC(sub_83BBD358);
PPC_FUNC_IMPL(__imp__sub_83BBD358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9088
	ctx.r3.s64 = ctx.r11.s64 + -9088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD364"))) PPC_WEAK_FUNC(sub_83BBD364);
PPC_FUNC_IMPL(__imp__sub_83BBD364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD368"))) PPC_WEAK_FUNC(sub_83BBD368);
PPC_FUNC_IMPL(__imp__sub_83BBD368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9080
	ctx.r3.s64 = ctx.r11.s64 + -9080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD374"))) PPC_WEAK_FUNC(sub_83BBD374);
PPC_FUNC_IMPL(__imp__sub_83BBD374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD378"))) PPC_WEAK_FUNC(sub_83BBD378);
PPC_FUNC_IMPL(__imp__sub_83BBD378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9072
	ctx.r3.s64 = ctx.r11.s64 + -9072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD384"))) PPC_WEAK_FUNC(sub_83BBD384);
PPC_FUNC_IMPL(__imp__sub_83BBD384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD388"))) PPC_WEAK_FUNC(sub_83BBD388);
PPC_FUNC_IMPL(__imp__sub_83BBD388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9064
	ctx.r3.s64 = ctx.r11.s64 + -9064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD394"))) PPC_WEAK_FUNC(sub_83BBD394);
PPC_FUNC_IMPL(__imp__sub_83BBD394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD398"))) PPC_WEAK_FUNC(sub_83BBD398);
PPC_FUNC_IMPL(__imp__sub_83BBD398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9056
	ctx.r3.s64 = ctx.r11.s64 + -9056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD3A4"))) PPC_WEAK_FUNC(sub_83BBD3A4);
PPC_FUNC_IMPL(__imp__sub_83BBD3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD3A8"))) PPC_WEAK_FUNC(sub_83BBD3A8);
PPC_FUNC_IMPL(__imp__sub_83BBD3A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9048
	ctx.r3.s64 = ctx.r11.s64 + -9048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD3B4"))) PPC_WEAK_FUNC(sub_83BBD3B4);
PPC_FUNC_IMPL(__imp__sub_83BBD3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD3B8"))) PPC_WEAK_FUNC(sub_83BBD3B8);
PPC_FUNC_IMPL(__imp__sub_83BBD3B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9040
	ctx.r3.s64 = ctx.r11.s64 + -9040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD3C4"))) PPC_WEAK_FUNC(sub_83BBD3C4);
PPC_FUNC_IMPL(__imp__sub_83BBD3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD3C8"))) PPC_WEAK_FUNC(sub_83BBD3C8);
PPC_FUNC_IMPL(__imp__sub_83BBD3C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9032
	ctx.r3.s64 = ctx.r11.s64 + -9032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD3D4"))) PPC_WEAK_FUNC(sub_83BBD3D4);
PPC_FUNC_IMPL(__imp__sub_83BBD3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD3D8"))) PPC_WEAK_FUNC(sub_83BBD3D8);
PPC_FUNC_IMPL(__imp__sub_83BBD3D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,22024
	ctx.r3.s64 = ctx.r11.s64 + 22024;
	// bl 0x83523120
	ctx.lr = 0x83BBD3F0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-9024
	ctx.r3.s64 = ctx.r10.s64 + -9024;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBD3FC;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBD40C"))) PPC_WEAK_FUNC(sub_83BBD40C);
PPC_FUNC_IMPL(__imp__sub_83BBD40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD410"))) PPC_WEAK_FUNC(sub_83BBD410);
PPC_FUNC_IMPL(__imp__sub_83BBD410) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,22040
	ctx.r7.s64 = ctx.r8.s64 + 22040;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,22040(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 22040);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,22040(r8)
	PPC_STORE_U32(ctx.r8.u32 + 22040, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBD438"))) PPC_WEAK_FUNC(sub_83BBD438);
PPC_FUNC_IMPL(__imp__sub_83BBD438) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-5528
	ctx.r6.s64 = ctx.r7.s64 + -5528;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-5600(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -5600);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,22040(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22040);
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
	// std r9,-5528(r7)
	PPC_STORE_U64(ctx.r7.u32 + -5528, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBD480"))) PPC_WEAK_FUNC(sub_83BBD480);
PPC_FUNC_IMPL(__imp__sub_83BBD480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-9008
	ctx.r3.s64 = ctx.r11.s64 + -9008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD48C"))) PPC_WEAK_FUNC(sub_83BBD48C);
PPC_FUNC_IMPL(__imp__sub_83BBD48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD490"))) PPC_WEAK_FUNC(sub_83BBD490);
PPC_FUNC_IMPL(__imp__sub_83BBD490) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,22048
	ctx.r3.s64 = ctx.r11.s64 + 22048;
	// bl 0x8259af80
	ctx.lr = 0x83BBD4A8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-8992
	ctx.r3.s64 = ctx.r10.s64 + -8992;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBD4B4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBD4C4"))) PPC_WEAK_FUNC(sub_83BBD4C4);
PPC_FUNC_IMPL(__imp__sub_83BBD4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD4C8"))) PPC_WEAK_FUNC(sub_83BBD4C8);
PPC_FUNC_IMPL(__imp__sub_83BBD4C8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,22028
	ctx.r11.s64 = ctx.r8.s64 + 22028;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-5552(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5552);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-9000
	ctx.r3.s64 = ctx.r6.s64 + -9000;
	// stw r10,22028(r8)
	PPC_STORE_U32(ctx.r8.u32 + 22028, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD4F8"))) PPC_WEAK_FUNC(sub_83BBD4F8);
PPC_FUNC_IMPL(__imp__sub_83BBD4F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8984
	ctx.r3.s64 = ctx.r11.s64 + -8984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD504"))) PPC_WEAK_FUNC(sub_83BBD504);
PPC_FUNC_IMPL(__imp__sub_83BBD504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD508"))) PPC_WEAK_FUNC(sub_83BBD508);
PPC_FUNC_IMPL(__imp__sub_83BBD508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8976
	ctx.r3.s64 = ctx.r11.s64 + -8976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD514"))) PPC_WEAK_FUNC(sub_83BBD514);
PPC_FUNC_IMPL(__imp__sub_83BBD514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD518"))) PPC_WEAK_FUNC(sub_83BBD518);
PPC_FUNC_IMPL(__imp__sub_83BBD518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8968
	ctx.r3.s64 = ctx.r11.s64 + -8968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD524"))) PPC_WEAK_FUNC(sub_83BBD524);
PPC_FUNC_IMPL(__imp__sub_83BBD524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD528"))) PPC_WEAK_FUNC(sub_83BBD528);
PPC_FUNC_IMPL(__imp__sub_83BBD528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8960
	ctx.r3.s64 = ctx.r11.s64 + -8960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD534"))) PPC_WEAK_FUNC(sub_83BBD534);
PPC_FUNC_IMPL(__imp__sub_83BBD534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD538"))) PPC_WEAK_FUNC(sub_83BBD538);
PPC_FUNC_IMPL(__imp__sub_83BBD538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8952
	ctx.r3.s64 = ctx.r11.s64 + -8952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD544"))) PPC_WEAK_FUNC(sub_83BBD544);
PPC_FUNC_IMPL(__imp__sub_83BBD544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD548"))) PPC_WEAK_FUNC(sub_83BBD548);
PPC_FUNC_IMPL(__imp__sub_83BBD548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8944
	ctx.r3.s64 = ctx.r11.s64 + -8944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD554"))) PPC_WEAK_FUNC(sub_83BBD554);
PPC_FUNC_IMPL(__imp__sub_83BBD554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD558"))) PPC_WEAK_FUNC(sub_83BBD558);
PPC_FUNC_IMPL(__imp__sub_83BBD558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8936
	ctx.r3.s64 = ctx.r11.s64 + -8936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD564"))) PPC_WEAK_FUNC(sub_83BBD564);
PPC_FUNC_IMPL(__imp__sub_83BBD564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD568"))) PPC_WEAK_FUNC(sub_83BBD568);
PPC_FUNC_IMPL(__imp__sub_83BBD568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8928
	ctx.r3.s64 = ctx.r11.s64 + -8928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD574"))) PPC_WEAK_FUNC(sub_83BBD574);
PPC_FUNC_IMPL(__imp__sub_83BBD574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD578"))) PPC_WEAK_FUNC(sub_83BBD578);
PPC_FUNC_IMPL(__imp__sub_83BBD578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8920
	ctx.r3.s64 = ctx.r11.s64 + -8920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD584"))) PPC_WEAK_FUNC(sub_83BBD584);
PPC_FUNC_IMPL(__imp__sub_83BBD584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD588"))) PPC_WEAK_FUNC(sub_83BBD588);
PPC_FUNC_IMPL(__imp__sub_83BBD588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8912
	ctx.r3.s64 = ctx.r11.s64 + -8912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD594"))) PPC_WEAK_FUNC(sub_83BBD594);
PPC_FUNC_IMPL(__imp__sub_83BBD594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD598"))) PPC_WEAK_FUNC(sub_83BBD598);
PPC_FUNC_IMPL(__imp__sub_83BBD598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8904
	ctx.r3.s64 = ctx.r11.s64 + -8904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD5A4"))) PPC_WEAK_FUNC(sub_83BBD5A4);
PPC_FUNC_IMPL(__imp__sub_83BBD5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD5A8"))) PPC_WEAK_FUNC(sub_83BBD5A8);
PPC_FUNC_IMPL(__imp__sub_83BBD5A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8896
	ctx.r3.s64 = ctx.r11.s64 + -8896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD5B4"))) PPC_WEAK_FUNC(sub_83BBD5B4);
PPC_FUNC_IMPL(__imp__sub_83BBD5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD5B8"))) PPC_WEAK_FUNC(sub_83BBD5B8);
PPC_FUNC_IMPL(__imp__sub_83BBD5B8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,22392
	ctx.r3.s64 = ctx.r11.s64 + 22392;
	// bl 0x83523120
	ctx.lr = 0x83BBD5D0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-8888
	ctx.r3.s64 = ctx.r10.s64 + -8888;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBD5DC;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBD5EC"))) PPC_WEAK_FUNC(sub_83BBD5EC);
PPC_FUNC_IMPL(__imp__sub_83BBD5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD5F0"))) PPC_WEAK_FUNC(sub_83BBD5F0);
PPC_FUNC_IMPL(__imp__sub_83BBD5F0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,22408
	ctx.r7.s64 = ctx.r8.s64 + 22408;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,22408(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 22408);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,22408(r8)
	PPC_STORE_U32(ctx.r8.u32 + 22408, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBD618"))) PPC_WEAK_FUNC(sub_83BBD618);
PPC_FUNC_IMPL(__imp__sub_83BBD618) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-5388
	ctx.r6.s64 = ctx.r7.s64 + -5388;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-5460(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -5460);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,22408(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22408);
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
	// std r9,-5388(r7)
	PPC_STORE_U64(ctx.r7.u32 + -5388, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBD660"))) PPC_WEAK_FUNC(sub_83BBD660);
PPC_FUNC_IMPL(__imp__sub_83BBD660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8872
	ctx.r3.s64 = ctx.r11.s64 + -8872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD66C"))) PPC_WEAK_FUNC(sub_83BBD66C);
PPC_FUNC_IMPL(__imp__sub_83BBD66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD670"))) PPC_WEAK_FUNC(sub_83BBD670);
PPC_FUNC_IMPL(__imp__sub_83BBD670) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,22416
	ctx.r3.s64 = ctx.r11.s64 + 22416;
	// bl 0x8259af80
	ctx.lr = 0x83BBD688;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-8856
	ctx.r3.s64 = ctx.r10.s64 + -8856;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBD694;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBD6A4"))) PPC_WEAK_FUNC(sub_83BBD6A4);
PPC_FUNC_IMPL(__imp__sub_83BBD6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD6A8"))) PPC_WEAK_FUNC(sub_83BBD6A8);
PPC_FUNC_IMPL(__imp__sub_83BBD6A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,22396
	ctx.r11.s64 = ctx.r8.s64 + 22396;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-5412(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5412);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-8864
	ctx.r3.s64 = ctx.r6.s64 + -8864;
	// stw r10,22396(r8)
	PPC_STORE_U32(ctx.r8.u32 + 22396, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD6D8"))) PPC_WEAK_FUNC(sub_83BBD6D8);
PPC_FUNC_IMPL(__imp__sub_83BBD6D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8848
	ctx.r3.s64 = ctx.r11.s64 + -8848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD6E4"))) PPC_WEAK_FUNC(sub_83BBD6E4);
PPC_FUNC_IMPL(__imp__sub_83BBD6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD6E8"))) PPC_WEAK_FUNC(sub_83BBD6E8);
PPC_FUNC_IMPL(__imp__sub_83BBD6E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8840
	ctx.r3.s64 = ctx.r11.s64 + -8840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD6F4"))) PPC_WEAK_FUNC(sub_83BBD6F4);
PPC_FUNC_IMPL(__imp__sub_83BBD6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD6F8"))) PPC_WEAK_FUNC(sub_83BBD6F8);
PPC_FUNC_IMPL(__imp__sub_83BBD6F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8832
	ctx.r3.s64 = ctx.r11.s64 + -8832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD704"))) PPC_WEAK_FUNC(sub_83BBD704);
PPC_FUNC_IMPL(__imp__sub_83BBD704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD708"))) PPC_WEAK_FUNC(sub_83BBD708);
PPC_FUNC_IMPL(__imp__sub_83BBD708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8824
	ctx.r3.s64 = ctx.r11.s64 + -8824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD714"))) PPC_WEAK_FUNC(sub_83BBD714);
PPC_FUNC_IMPL(__imp__sub_83BBD714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD718"))) PPC_WEAK_FUNC(sub_83BBD718);
PPC_FUNC_IMPL(__imp__sub_83BBD718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8816
	ctx.r3.s64 = ctx.r11.s64 + -8816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD724"))) PPC_WEAK_FUNC(sub_83BBD724);
PPC_FUNC_IMPL(__imp__sub_83BBD724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD728"))) PPC_WEAK_FUNC(sub_83BBD728);
PPC_FUNC_IMPL(__imp__sub_83BBD728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8808
	ctx.r3.s64 = ctx.r11.s64 + -8808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD734"))) PPC_WEAK_FUNC(sub_83BBD734);
PPC_FUNC_IMPL(__imp__sub_83BBD734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD738"))) PPC_WEAK_FUNC(sub_83BBD738);
PPC_FUNC_IMPL(__imp__sub_83BBD738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8800
	ctx.r3.s64 = ctx.r11.s64 + -8800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD744"))) PPC_WEAK_FUNC(sub_83BBD744);
PPC_FUNC_IMPL(__imp__sub_83BBD744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD748"))) PPC_WEAK_FUNC(sub_83BBD748);
PPC_FUNC_IMPL(__imp__sub_83BBD748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8792
	ctx.r3.s64 = ctx.r11.s64 + -8792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD754"))) PPC_WEAK_FUNC(sub_83BBD754);
PPC_FUNC_IMPL(__imp__sub_83BBD754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD758"))) PPC_WEAK_FUNC(sub_83BBD758);
PPC_FUNC_IMPL(__imp__sub_83BBD758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8784
	ctx.r3.s64 = ctx.r11.s64 + -8784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD764"))) PPC_WEAK_FUNC(sub_83BBD764);
PPC_FUNC_IMPL(__imp__sub_83BBD764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD768"))) PPC_WEAK_FUNC(sub_83BBD768);
PPC_FUNC_IMPL(__imp__sub_83BBD768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8776
	ctx.r3.s64 = ctx.r11.s64 + -8776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD774"))) PPC_WEAK_FUNC(sub_83BBD774);
PPC_FUNC_IMPL(__imp__sub_83BBD774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD778"))) PPC_WEAK_FUNC(sub_83BBD778);
PPC_FUNC_IMPL(__imp__sub_83BBD778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8768
	ctx.r3.s64 = ctx.r11.s64 + -8768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD784"))) PPC_WEAK_FUNC(sub_83BBD784);
PPC_FUNC_IMPL(__imp__sub_83BBD784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD788"))) PPC_WEAK_FUNC(sub_83BBD788);
PPC_FUNC_IMPL(__imp__sub_83BBD788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8760
	ctx.r3.s64 = ctx.r11.s64 + -8760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD794"))) PPC_WEAK_FUNC(sub_83BBD794);
PPC_FUNC_IMPL(__imp__sub_83BBD794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD798"))) PPC_WEAK_FUNC(sub_83BBD798);
PPC_FUNC_IMPL(__imp__sub_83BBD798) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,22760
	ctx.r3.s64 = ctx.r11.s64 + 22760;
	// bl 0x83523120
	ctx.lr = 0x83BBD7B0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-8752
	ctx.r3.s64 = ctx.r10.s64 + -8752;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBD7BC;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBD7CC"))) PPC_WEAK_FUNC(sub_83BBD7CC);
PPC_FUNC_IMPL(__imp__sub_83BBD7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD7D0"))) PPC_WEAK_FUNC(sub_83BBD7D0);
PPC_FUNC_IMPL(__imp__sub_83BBD7D0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,22776
	ctx.r7.s64 = ctx.r8.s64 + 22776;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,22776(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 22776);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,22776(r8)
	PPC_STORE_U32(ctx.r8.u32 + 22776, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBD7F8"))) PPC_WEAK_FUNC(sub_83BBD7F8);
PPC_FUNC_IMPL(__imp__sub_83BBD7F8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-5252
	ctx.r6.s64 = ctx.r7.s64 + -5252;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-5324(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -5324);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,22776(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22776);
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
	// std r9,-5252(r7)
	PPC_STORE_U64(ctx.r7.u32 + -5252, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBD840"))) PPC_WEAK_FUNC(sub_83BBD840);
PPC_FUNC_IMPL(__imp__sub_83BBD840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8736
	ctx.r3.s64 = ctx.r11.s64 + -8736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD84C"))) PPC_WEAK_FUNC(sub_83BBD84C);
PPC_FUNC_IMPL(__imp__sub_83BBD84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD850"))) PPC_WEAK_FUNC(sub_83BBD850);
PPC_FUNC_IMPL(__imp__sub_83BBD850) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,22784
	ctx.r3.s64 = ctx.r11.s64 + 22784;
	// bl 0x8259af80
	ctx.lr = 0x83BBD868;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-8720
	ctx.r3.s64 = ctx.r10.s64 + -8720;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBD874;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBD884"))) PPC_WEAK_FUNC(sub_83BBD884);
PPC_FUNC_IMPL(__imp__sub_83BBD884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD888"))) PPC_WEAK_FUNC(sub_83BBD888);
PPC_FUNC_IMPL(__imp__sub_83BBD888) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,22764
	ctx.r11.s64 = ctx.r8.s64 + 22764;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-5276(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5276);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-8728
	ctx.r3.s64 = ctx.r6.s64 + -8728;
	// stw r10,22764(r8)
	PPC_STORE_U32(ctx.r8.u32 + 22764, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD8B8"))) PPC_WEAK_FUNC(sub_83BBD8B8);
PPC_FUNC_IMPL(__imp__sub_83BBD8B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8712
	ctx.r3.s64 = ctx.r11.s64 + -8712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD8C4"))) PPC_WEAK_FUNC(sub_83BBD8C4);
PPC_FUNC_IMPL(__imp__sub_83BBD8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD8C8"))) PPC_WEAK_FUNC(sub_83BBD8C8);
PPC_FUNC_IMPL(__imp__sub_83BBD8C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8704
	ctx.r3.s64 = ctx.r11.s64 + -8704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD8D4"))) PPC_WEAK_FUNC(sub_83BBD8D4);
PPC_FUNC_IMPL(__imp__sub_83BBD8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD8D8"))) PPC_WEAK_FUNC(sub_83BBD8D8);
PPC_FUNC_IMPL(__imp__sub_83BBD8D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8696
	ctx.r3.s64 = ctx.r11.s64 + -8696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD8E4"))) PPC_WEAK_FUNC(sub_83BBD8E4);
PPC_FUNC_IMPL(__imp__sub_83BBD8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD8E8"))) PPC_WEAK_FUNC(sub_83BBD8E8);
PPC_FUNC_IMPL(__imp__sub_83BBD8E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8688
	ctx.r3.s64 = ctx.r11.s64 + -8688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD8F4"))) PPC_WEAK_FUNC(sub_83BBD8F4);
PPC_FUNC_IMPL(__imp__sub_83BBD8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD8F8"))) PPC_WEAK_FUNC(sub_83BBD8F8);
PPC_FUNC_IMPL(__imp__sub_83BBD8F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8680
	ctx.r3.s64 = ctx.r11.s64 + -8680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD904"))) PPC_WEAK_FUNC(sub_83BBD904);
PPC_FUNC_IMPL(__imp__sub_83BBD904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD908"))) PPC_WEAK_FUNC(sub_83BBD908);
PPC_FUNC_IMPL(__imp__sub_83BBD908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8672
	ctx.r3.s64 = ctx.r11.s64 + -8672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD914"))) PPC_WEAK_FUNC(sub_83BBD914);
PPC_FUNC_IMPL(__imp__sub_83BBD914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD918"))) PPC_WEAK_FUNC(sub_83BBD918);
PPC_FUNC_IMPL(__imp__sub_83BBD918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8664
	ctx.r3.s64 = ctx.r11.s64 + -8664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD924"))) PPC_WEAK_FUNC(sub_83BBD924);
PPC_FUNC_IMPL(__imp__sub_83BBD924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD928"))) PPC_WEAK_FUNC(sub_83BBD928);
PPC_FUNC_IMPL(__imp__sub_83BBD928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8656
	ctx.r3.s64 = ctx.r11.s64 + -8656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD934"))) PPC_WEAK_FUNC(sub_83BBD934);
PPC_FUNC_IMPL(__imp__sub_83BBD934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD938"))) PPC_WEAK_FUNC(sub_83BBD938);
PPC_FUNC_IMPL(__imp__sub_83BBD938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8648
	ctx.r3.s64 = ctx.r11.s64 + -8648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD944"))) PPC_WEAK_FUNC(sub_83BBD944);
PPC_FUNC_IMPL(__imp__sub_83BBD944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD948"))) PPC_WEAK_FUNC(sub_83BBD948);
PPC_FUNC_IMPL(__imp__sub_83BBD948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8640
	ctx.r3.s64 = ctx.r11.s64 + -8640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD954"))) PPC_WEAK_FUNC(sub_83BBD954);
PPC_FUNC_IMPL(__imp__sub_83BBD954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD958"))) PPC_WEAK_FUNC(sub_83BBD958);
PPC_FUNC_IMPL(__imp__sub_83BBD958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8632
	ctx.r3.s64 = ctx.r11.s64 + -8632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD964"))) PPC_WEAK_FUNC(sub_83BBD964);
PPC_FUNC_IMPL(__imp__sub_83BBD964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD968"))) PPC_WEAK_FUNC(sub_83BBD968);
PPC_FUNC_IMPL(__imp__sub_83BBD968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8624
	ctx.r3.s64 = ctx.r11.s64 + -8624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBD974"))) PPC_WEAK_FUNC(sub_83BBD974);
PPC_FUNC_IMPL(__imp__sub_83BBD974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD978"))) PPC_WEAK_FUNC(sub_83BBD978);
PPC_FUNC_IMPL(__imp__sub_83BBD978) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,23128
	ctx.r3.s64 = ctx.r11.s64 + 23128;
	// bl 0x83523120
	ctx.lr = 0x83BBD990;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-8616
	ctx.r3.s64 = ctx.r10.s64 + -8616;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBD99C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBD9AC"))) PPC_WEAK_FUNC(sub_83BBD9AC);
PPC_FUNC_IMPL(__imp__sub_83BBD9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBD9B0"))) PPC_WEAK_FUNC(sub_83BBD9B0);
PPC_FUNC_IMPL(__imp__sub_83BBD9B0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,23144
	ctx.r7.s64 = ctx.r8.s64 + 23144;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,23144(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 23144);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,23144(r8)
	PPC_STORE_U32(ctx.r8.u32 + 23144, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBD9D8"))) PPC_WEAK_FUNC(sub_83BBD9D8);
PPC_FUNC_IMPL(__imp__sub_83BBD9D8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-5116
	ctx.r6.s64 = ctx.r7.s64 + -5116;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-5188(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -5188);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,23144(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23144);
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
	// std r9,-5116(r7)
	PPC_STORE_U64(ctx.r7.u32 + -5116, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBDA20"))) PPC_WEAK_FUNC(sub_83BBDA20);
PPC_FUNC_IMPL(__imp__sub_83BBDA20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8600
	ctx.r3.s64 = ctx.r11.s64 + -8600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBDA2C"))) PPC_WEAK_FUNC(sub_83BBDA2C);
PPC_FUNC_IMPL(__imp__sub_83BBDA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBDA30"))) PPC_WEAK_FUNC(sub_83BBDA30);
PPC_FUNC_IMPL(__imp__sub_83BBDA30) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,23152
	ctx.r3.s64 = ctx.r11.s64 + 23152;
	// bl 0x8259af80
	ctx.lr = 0x83BBDA48;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-8584
	ctx.r3.s64 = ctx.r10.s64 + -8584;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBDA54;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBDA64"))) PPC_WEAK_FUNC(sub_83BBDA64);
PPC_FUNC_IMPL(__imp__sub_83BBDA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBDA68"))) PPC_WEAK_FUNC(sub_83BBDA68);
PPC_FUNC_IMPL(__imp__sub_83BBDA68) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,23132
	ctx.r11.s64 = ctx.r8.s64 + 23132;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-5140(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5140);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-8592
	ctx.r3.s64 = ctx.r6.s64 + -8592;
	// stw r10,23132(r8)
	PPC_STORE_U32(ctx.r8.u32 + 23132, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBDA98"))) PPC_WEAK_FUNC(sub_83BBDA98);
PPC_FUNC_IMPL(__imp__sub_83BBDA98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8576
	ctx.r3.s64 = ctx.r11.s64 + -8576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBDAA4"))) PPC_WEAK_FUNC(sub_83BBDAA4);
PPC_FUNC_IMPL(__imp__sub_83BBDAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBDAA8"))) PPC_WEAK_FUNC(sub_83BBDAA8);
PPC_FUNC_IMPL(__imp__sub_83BBDAA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8568
	ctx.r3.s64 = ctx.r11.s64 + -8568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBDAB4"))) PPC_WEAK_FUNC(sub_83BBDAB4);
PPC_FUNC_IMPL(__imp__sub_83BBDAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBDAB8"))) PPC_WEAK_FUNC(sub_83BBDAB8);
PPC_FUNC_IMPL(__imp__sub_83BBDAB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8560
	ctx.r3.s64 = ctx.r11.s64 + -8560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBDAC4"))) PPC_WEAK_FUNC(sub_83BBDAC4);
PPC_FUNC_IMPL(__imp__sub_83BBDAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBDAC8"))) PPC_WEAK_FUNC(sub_83BBDAC8);
PPC_FUNC_IMPL(__imp__sub_83BBDAC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8552
	ctx.r3.s64 = ctx.r11.s64 + -8552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBDAD4"))) PPC_WEAK_FUNC(sub_83BBDAD4);
PPC_FUNC_IMPL(__imp__sub_83BBDAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBDAD8"))) PPC_WEAK_FUNC(sub_83BBDAD8);
PPC_FUNC_IMPL(__imp__sub_83BBDAD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8544
	ctx.r3.s64 = ctx.r11.s64 + -8544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBDAE4"))) PPC_WEAK_FUNC(sub_83BBDAE4);
PPC_FUNC_IMPL(__imp__sub_83BBDAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBDAE8"))) PPC_WEAK_FUNC(sub_83BBDAE8);
PPC_FUNC_IMPL(__imp__sub_83BBDAE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8536
	ctx.r3.s64 = ctx.r11.s64 + -8536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBDAF4"))) PPC_WEAK_FUNC(sub_83BBDAF4);
PPC_FUNC_IMPL(__imp__sub_83BBDAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBDAF8"))) PPC_WEAK_FUNC(sub_83BBDAF8);
PPC_FUNC_IMPL(__imp__sub_83BBDAF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8528
	ctx.r3.s64 = ctx.r11.s64 + -8528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBDB04"))) PPC_WEAK_FUNC(sub_83BBDB04);
PPC_FUNC_IMPL(__imp__sub_83BBDB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBDB08"))) PPC_WEAK_FUNC(sub_83BBDB08);
PPC_FUNC_IMPL(__imp__sub_83BBDB08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8520
	ctx.r3.s64 = ctx.r11.s64 + -8520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBDB14"))) PPC_WEAK_FUNC(sub_83BBDB14);
PPC_FUNC_IMPL(__imp__sub_83BBDB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBDB18"))) PPC_WEAK_FUNC(sub_83BBDB18);
PPC_FUNC_IMPL(__imp__sub_83BBDB18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8512
	ctx.r3.s64 = ctx.r11.s64 + -8512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBDB24"))) PPC_WEAK_FUNC(sub_83BBDB24);
PPC_FUNC_IMPL(__imp__sub_83BBDB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBDB28"))) PPC_WEAK_FUNC(sub_83BBDB28);
PPC_FUNC_IMPL(__imp__sub_83BBDB28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8504
	ctx.r3.s64 = ctx.r11.s64 + -8504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBDB34"))) PPC_WEAK_FUNC(sub_83BBDB34);
PPC_FUNC_IMPL(__imp__sub_83BBDB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBDB38"))) PPC_WEAK_FUNC(sub_83BBDB38);
PPC_FUNC_IMPL(__imp__sub_83BBDB38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8496
	ctx.r3.s64 = ctx.r11.s64 + -8496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBDB44"))) PPC_WEAK_FUNC(sub_83BBDB44);
PPC_FUNC_IMPL(__imp__sub_83BBDB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBDB48"))) PPC_WEAK_FUNC(sub_83BBDB48);
PPC_FUNC_IMPL(__imp__sub_83BBDB48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8488
	ctx.r3.s64 = ctx.r11.s64 + -8488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBDB54"))) PPC_WEAK_FUNC(sub_83BBDB54);
PPC_FUNC_IMPL(__imp__sub_83BBDB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBDB58"))) PPC_WEAK_FUNC(sub_83BBDB58);
PPC_FUNC_IMPL(__imp__sub_83BBDB58) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,23496
	ctx.r3.s64 = ctx.r11.s64 + 23496;
	// bl 0x83523120
	ctx.lr = 0x83BBDB70;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-8480
	ctx.r3.s64 = ctx.r10.s64 + -8480;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBDB7C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBDB8C"))) PPC_WEAK_FUNC(sub_83BBDB8C);
PPC_FUNC_IMPL(__imp__sub_83BBDB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBDB90"))) PPC_WEAK_FUNC(sub_83BBDB90);
PPC_FUNC_IMPL(__imp__sub_83BBDB90) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,23512
	ctx.r7.s64 = ctx.r8.s64 + 23512;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,23512(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 23512);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,23512(r8)
	PPC_STORE_U32(ctx.r8.u32 + 23512, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBDBB8"))) PPC_WEAK_FUNC(sub_83BBDBB8);
PPC_FUNC_IMPL(__imp__sub_83BBDBB8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-4980
	ctx.r6.s64 = ctx.r7.s64 + -4980;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-5052(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -5052);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,23512(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23512);
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
	// std r9,-4980(r7)
	PPC_STORE_U64(ctx.r7.u32 + -4980, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBDC00"))) PPC_WEAK_FUNC(sub_83BBDC00);
PPC_FUNC_IMPL(__imp__sub_83BBDC00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8464
	ctx.r3.s64 = ctx.r11.s64 + -8464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBDC0C"))) PPC_WEAK_FUNC(sub_83BBDC0C);
PPC_FUNC_IMPL(__imp__sub_83BBDC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBDC10"))) PPC_WEAK_FUNC(sub_83BBDC10);
PPC_FUNC_IMPL(__imp__sub_83BBDC10) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,23520
	ctx.r3.s64 = ctx.r11.s64 + 23520;
	// bl 0x8259af80
	ctx.lr = 0x83BBDC28;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-8448
	ctx.r3.s64 = ctx.r10.s64 + -8448;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBDC34;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBDC44"))) PPC_WEAK_FUNC(sub_83BBDC44);
PPC_FUNC_IMPL(__imp__sub_83BBDC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBDC48"))) PPC_WEAK_FUNC(sub_83BBDC48);
PPC_FUNC_IMPL(__imp__sub_83BBDC48) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,23500
	ctx.r11.s64 = ctx.r8.s64 + 23500;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-5004(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5004);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-8456
	ctx.r3.s64 = ctx.r6.s64 + -8456;
	// stw r10,23500(r8)
	PPC_STORE_U32(ctx.r8.u32 + 23500, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBDC78"))) PPC_WEAK_FUNC(sub_83BBDC78);
PPC_FUNC_IMPL(__imp__sub_83BBDC78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8440
	ctx.r3.s64 = ctx.r11.s64 + -8440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBDC84"))) PPC_WEAK_FUNC(sub_83BBDC84);
PPC_FUNC_IMPL(__imp__sub_83BBDC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBDC88"))) PPC_WEAK_FUNC(sub_83BBDC88);
PPC_FUNC_IMPL(__imp__sub_83BBDC88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8432
	ctx.r3.s64 = ctx.r11.s64 + -8432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBDC94"))) PPC_WEAK_FUNC(sub_83BBDC94);
PPC_FUNC_IMPL(__imp__sub_83BBDC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBDC98"))) PPC_WEAK_FUNC(sub_83BBDC98);
PPC_FUNC_IMPL(__imp__sub_83BBDC98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8424
	ctx.r3.s64 = ctx.r11.s64 + -8424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBDCA4"))) PPC_WEAK_FUNC(sub_83BBDCA4);
PPC_FUNC_IMPL(__imp__sub_83BBDCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBDCA8"))) PPC_WEAK_FUNC(sub_83BBDCA8);
PPC_FUNC_IMPL(__imp__sub_83BBDCA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8416
	ctx.r3.s64 = ctx.r11.s64 + -8416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBDCB4"))) PPC_WEAK_FUNC(sub_83BBDCB4);
PPC_FUNC_IMPL(__imp__sub_83BBDCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBDCB8"))) PPC_WEAK_FUNC(sub_83BBDCB8);
PPC_FUNC_IMPL(__imp__sub_83BBDCB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8408
	ctx.r3.s64 = ctx.r11.s64 + -8408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBDCC4"))) PPC_WEAK_FUNC(sub_83BBDCC4);
PPC_FUNC_IMPL(__imp__sub_83BBDCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBDCC8"))) PPC_WEAK_FUNC(sub_83BBDCC8);
PPC_FUNC_IMPL(__imp__sub_83BBDCC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8400
	ctx.r3.s64 = ctx.r11.s64 + -8400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBDCD4"))) PPC_WEAK_FUNC(sub_83BBDCD4);
PPC_FUNC_IMPL(__imp__sub_83BBDCD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBDCD8"))) PPC_WEAK_FUNC(sub_83BBDCD8);
PPC_FUNC_IMPL(__imp__sub_83BBDCD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8392
	ctx.r3.s64 = ctx.r11.s64 + -8392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBDCE4"))) PPC_WEAK_FUNC(sub_83BBDCE4);
PPC_FUNC_IMPL(__imp__sub_83BBDCE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBDCE8"))) PPC_WEAK_FUNC(sub_83BBDCE8);
PPC_FUNC_IMPL(__imp__sub_83BBDCE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8384
	ctx.r3.s64 = ctx.r11.s64 + -8384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBDCF4"))) PPC_WEAK_FUNC(sub_83BBDCF4);
PPC_FUNC_IMPL(__imp__sub_83BBDCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBDCF8"))) PPC_WEAK_FUNC(sub_83BBDCF8);
PPC_FUNC_IMPL(__imp__sub_83BBDCF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8376
	ctx.r3.s64 = ctx.r11.s64 + -8376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBDD04"))) PPC_WEAK_FUNC(sub_83BBDD04);
PPC_FUNC_IMPL(__imp__sub_83BBDD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBDD08"))) PPC_WEAK_FUNC(sub_83BBDD08);
PPC_FUNC_IMPL(__imp__sub_83BBDD08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8368
	ctx.r3.s64 = ctx.r11.s64 + -8368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBDD14"))) PPC_WEAK_FUNC(sub_83BBDD14);
PPC_FUNC_IMPL(__imp__sub_83BBDD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBDD18"))) PPC_WEAK_FUNC(sub_83BBDD18);
PPC_FUNC_IMPL(__imp__sub_83BBDD18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8360
	ctx.r3.s64 = ctx.r11.s64 + -8360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBDD24"))) PPC_WEAK_FUNC(sub_83BBDD24);
PPC_FUNC_IMPL(__imp__sub_83BBDD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBDD28"))) PPC_WEAK_FUNC(sub_83BBDD28);
PPC_FUNC_IMPL(__imp__sub_83BBDD28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8352
	ctx.r3.s64 = ctx.r11.s64 + -8352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBDD34"))) PPC_WEAK_FUNC(sub_83BBDD34);
PPC_FUNC_IMPL(__imp__sub_83BBDD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBDD38"))) PPC_WEAK_FUNC(sub_83BBDD38);
PPC_FUNC_IMPL(__imp__sub_83BBDD38) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,23864
	ctx.r3.s64 = ctx.r11.s64 + 23864;
	// bl 0x83523120
	ctx.lr = 0x83BBDD50;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-8344
	ctx.r3.s64 = ctx.r10.s64 + -8344;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBDD5C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBDD6C"))) PPC_WEAK_FUNC(sub_83BBDD6C);
PPC_FUNC_IMPL(__imp__sub_83BBDD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBDD70"))) PPC_WEAK_FUNC(sub_83BBDD70);
PPC_FUNC_IMPL(__imp__sub_83BBDD70) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,23880
	ctx.r7.s64 = ctx.r8.s64 + 23880;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,23880(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 23880);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,23880(r8)
	PPC_STORE_U32(ctx.r8.u32 + 23880, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBDD98"))) PPC_WEAK_FUNC(sub_83BBDD98);
PPC_FUNC_IMPL(__imp__sub_83BBDD98) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-4840
	ctx.r6.s64 = ctx.r7.s64 + -4840;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-4912(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -4912);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,23880(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23880);
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
	// std r9,-4840(r7)
	PPC_STORE_U64(ctx.r7.u32 + -4840, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBDDE0"))) PPC_WEAK_FUNC(sub_83BBDDE0);
PPC_FUNC_IMPL(__imp__sub_83BBDDE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8328
	ctx.r3.s64 = ctx.r11.s64 + -8328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBDDEC"))) PPC_WEAK_FUNC(sub_83BBDDEC);
PPC_FUNC_IMPL(__imp__sub_83BBDDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBDDF0"))) PPC_WEAK_FUNC(sub_83BBDDF0);
PPC_FUNC_IMPL(__imp__sub_83BBDDF0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,23888
	ctx.r3.s64 = ctx.r11.s64 + 23888;
	// bl 0x8259af80
	ctx.lr = 0x83BBDE08;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-8312
	ctx.r3.s64 = ctx.r10.s64 + -8312;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBDE14;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBDE24"))) PPC_WEAK_FUNC(sub_83BBDE24);
PPC_FUNC_IMPL(__imp__sub_83BBDE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBDE28"))) PPC_WEAK_FUNC(sub_83BBDE28);
PPC_FUNC_IMPL(__imp__sub_83BBDE28) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,23868
	ctx.r11.s64 = ctx.r8.s64 + 23868;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-4864(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4864);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-8320
	ctx.r3.s64 = ctx.r6.s64 + -8320;
	// stw r10,23868(r8)
	PPC_STORE_U32(ctx.r8.u32 + 23868, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBDE58"))) PPC_WEAK_FUNC(sub_83BBDE58);
PPC_FUNC_IMPL(__imp__sub_83BBDE58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8304
	ctx.r3.s64 = ctx.r11.s64 + -8304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBDE64"))) PPC_WEAK_FUNC(sub_83BBDE64);
PPC_FUNC_IMPL(__imp__sub_83BBDE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBDE68"))) PPC_WEAK_FUNC(sub_83BBDE68);
PPC_FUNC_IMPL(__imp__sub_83BBDE68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8296
	ctx.r3.s64 = ctx.r11.s64 + -8296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBDE74"))) PPC_WEAK_FUNC(sub_83BBDE74);
PPC_FUNC_IMPL(__imp__sub_83BBDE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBDE78"))) PPC_WEAK_FUNC(sub_83BBDE78);
PPC_FUNC_IMPL(__imp__sub_83BBDE78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8288
	ctx.r3.s64 = ctx.r11.s64 + -8288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBDE84"))) PPC_WEAK_FUNC(sub_83BBDE84);
PPC_FUNC_IMPL(__imp__sub_83BBDE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBDE88"))) PPC_WEAK_FUNC(sub_83BBDE88);
PPC_FUNC_IMPL(__imp__sub_83BBDE88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8280
	ctx.r3.s64 = ctx.r11.s64 + -8280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBDE94"))) PPC_WEAK_FUNC(sub_83BBDE94);
PPC_FUNC_IMPL(__imp__sub_83BBDE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBDE98"))) PPC_WEAK_FUNC(sub_83BBDE98);
PPC_FUNC_IMPL(__imp__sub_83BBDE98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8272
	ctx.r3.s64 = ctx.r11.s64 + -8272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBDEA4"))) PPC_WEAK_FUNC(sub_83BBDEA4);
PPC_FUNC_IMPL(__imp__sub_83BBDEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBDEA8"))) PPC_WEAK_FUNC(sub_83BBDEA8);
PPC_FUNC_IMPL(__imp__sub_83BBDEA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8264
	ctx.r3.s64 = ctx.r11.s64 + -8264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBDEB4"))) PPC_WEAK_FUNC(sub_83BBDEB4);
PPC_FUNC_IMPL(__imp__sub_83BBDEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBDEB8"))) PPC_WEAK_FUNC(sub_83BBDEB8);
PPC_FUNC_IMPL(__imp__sub_83BBDEB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8256
	ctx.r3.s64 = ctx.r11.s64 + -8256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBDEC4"))) PPC_WEAK_FUNC(sub_83BBDEC4);
PPC_FUNC_IMPL(__imp__sub_83BBDEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBDEC8"))) PPC_WEAK_FUNC(sub_83BBDEC8);
PPC_FUNC_IMPL(__imp__sub_83BBDEC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8248
	ctx.r3.s64 = ctx.r11.s64 + -8248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBDED4"))) PPC_WEAK_FUNC(sub_83BBDED4);
PPC_FUNC_IMPL(__imp__sub_83BBDED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBDED8"))) PPC_WEAK_FUNC(sub_83BBDED8);
PPC_FUNC_IMPL(__imp__sub_83BBDED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8240
	ctx.r3.s64 = ctx.r11.s64 + -8240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBDEE4"))) PPC_WEAK_FUNC(sub_83BBDEE4);
PPC_FUNC_IMPL(__imp__sub_83BBDEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBDEE8"))) PPC_WEAK_FUNC(sub_83BBDEE8);
PPC_FUNC_IMPL(__imp__sub_83BBDEE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8232
	ctx.r3.s64 = ctx.r11.s64 + -8232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBDEF4"))) PPC_WEAK_FUNC(sub_83BBDEF4);
PPC_FUNC_IMPL(__imp__sub_83BBDEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBDEF8"))) PPC_WEAK_FUNC(sub_83BBDEF8);
PPC_FUNC_IMPL(__imp__sub_83BBDEF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8224
	ctx.r3.s64 = ctx.r11.s64 + -8224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBDF04"))) PPC_WEAK_FUNC(sub_83BBDF04);
PPC_FUNC_IMPL(__imp__sub_83BBDF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBDF08"))) PPC_WEAK_FUNC(sub_83BBDF08);
PPC_FUNC_IMPL(__imp__sub_83BBDF08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8216
	ctx.r3.s64 = ctx.r11.s64 + -8216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBDF14"))) PPC_WEAK_FUNC(sub_83BBDF14);
PPC_FUNC_IMPL(__imp__sub_83BBDF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBDF18"))) PPC_WEAK_FUNC(sub_83BBDF18);
PPC_FUNC_IMPL(__imp__sub_83BBDF18) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,24232
	ctx.r3.s64 = ctx.r11.s64 + 24232;
	// bl 0x83523120
	ctx.lr = 0x83BBDF30;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-8208
	ctx.r3.s64 = ctx.r10.s64 + -8208;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBDF3C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBDF4C"))) PPC_WEAK_FUNC(sub_83BBDF4C);
PPC_FUNC_IMPL(__imp__sub_83BBDF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBDF50"))) PPC_WEAK_FUNC(sub_83BBDF50);
PPC_FUNC_IMPL(__imp__sub_83BBDF50) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,24248
	ctx.r7.s64 = ctx.r8.s64 + 24248;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,24248(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24248);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,24248(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24248, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBDF78"))) PPC_WEAK_FUNC(sub_83BBDF78);
PPC_FUNC_IMPL(__imp__sub_83BBDF78) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-4696
	ctx.r6.s64 = ctx.r7.s64 + -4696;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-4768(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -4768);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,24248(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24248);
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
	// std r9,-4696(r7)
	PPC_STORE_U64(ctx.r7.u32 + -4696, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBDFC0"))) PPC_WEAK_FUNC(sub_83BBDFC0);
PPC_FUNC_IMPL(__imp__sub_83BBDFC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8192
	ctx.r3.s64 = ctx.r11.s64 + -8192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBDFCC"))) PPC_WEAK_FUNC(sub_83BBDFCC);
PPC_FUNC_IMPL(__imp__sub_83BBDFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBDFD0"))) PPC_WEAK_FUNC(sub_83BBDFD0);
PPC_FUNC_IMPL(__imp__sub_83BBDFD0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,24256
	ctx.r3.s64 = ctx.r11.s64 + 24256;
	// bl 0x8259af80
	ctx.lr = 0x83BBDFE8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-8176
	ctx.r3.s64 = ctx.r10.s64 + -8176;
	// bl 0x831cdcc8
	ctx.lr = 0x83BBDFF4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BBE004"))) PPC_WEAK_FUNC(sub_83BBE004);
PPC_FUNC_IMPL(__imp__sub_83BBE004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBE008"))) PPC_WEAK_FUNC(sub_83BBE008);
PPC_FUNC_IMPL(__imp__sub_83BBE008) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,24236
	ctx.r11.s64 = ctx.r8.s64 + 24236;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-4720(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4720);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-8184
	ctx.r3.s64 = ctx.r6.s64 + -8184;
	// stw r10,24236(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24236, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBE038"))) PPC_WEAK_FUNC(sub_83BBE038);
PPC_FUNC_IMPL(__imp__sub_83BBE038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8168
	ctx.r3.s64 = ctx.r11.s64 + -8168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBE044"))) PPC_WEAK_FUNC(sub_83BBE044);
PPC_FUNC_IMPL(__imp__sub_83BBE044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBE048"))) PPC_WEAK_FUNC(sub_83BBE048);
PPC_FUNC_IMPL(__imp__sub_83BBE048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8160
	ctx.r3.s64 = ctx.r11.s64 + -8160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBE054"))) PPC_WEAK_FUNC(sub_83BBE054);
PPC_FUNC_IMPL(__imp__sub_83BBE054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBE058"))) PPC_WEAK_FUNC(sub_83BBE058);
PPC_FUNC_IMPL(__imp__sub_83BBE058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8152
	ctx.r3.s64 = ctx.r11.s64 + -8152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBE064"))) PPC_WEAK_FUNC(sub_83BBE064);
PPC_FUNC_IMPL(__imp__sub_83BBE064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BBE068"))) PPC_WEAK_FUNC(sub_83BBE068);
PPC_FUNC_IMPL(__imp__sub_83BBE068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-8144
	ctx.r3.s64 = ctx.r11.s64 + -8144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BBE074"))) PPC_WEAK_FUNC(sub_83BBE074);
PPC_FUNC_IMPL(__imp__sub_83BBE074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

