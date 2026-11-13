#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BEC974"))) PPC_WEAK_FUNC(sub_83BEC974);
PPC_FUNC_IMPL(__imp__sub_83BEC974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC978"))) PPC_WEAK_FUNC(sub_83BEC978);
PPC_FUNC_IMPL(__imp__sub_83BEC978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16128
	ctx.r3.s64 = ctx.r11.s64 + -16128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC984"))) PPC_WEAK_FUNC(sub_83BEC984);
PPC_FUNC_IMPL(__imp__sub_83BEC984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC988"))) PPC_WEAK_FUNC(sub_83BEC988);
PPC_FUNC_IMPL(__imp__sub_83BEC988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16120
	ctx.r3.s64 = ctx.r11.s64 + -16120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC994"))) PPC_WEAK_FUNC(sub_83BEC994);
PPC_FUNC_IMPL(__imp__sub_83BEC994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC998"))) PPC_WEAK_FUNC(sub_83BEC998);
PPC_FUNC_IMPL(__imp__sub_83BEC998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16112
	ctx.r3.s64 = ctx.r11.s64 + -16112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC9A4"))) PPC_WEAK_FUNC(sub_83BEC9A4);
PPC_FUNC_IMPL(__imp__sub_83BEC9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC9A8"))) PPC_WEAK_FUNC(sub_83BEC9A8);
PPC_FUNC_IMPL(__imp__sub_83BEC9A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16104
	ctx.r3.s64 = ctx.r11.s64 + -16104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC9B4"))) PPC_WEAK_FUNC(sub_83BEC9B4);
PPC_FUNC_IMPL(__imp__sub_83BEC9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC9B8"))) PPC_WEAK_FUNC(sub_83BEC9B8);
PPC_FUNC_IMPL(__imp__sub_83BEC9B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-30504
	ctx.r3.s64 = ctx.r11.s64 + -30504;
	// bl 0x83523120
	ctx.lr = 0x83BEC9D0;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-16096
	ctx.r3.s64 = ctx.r10.s64 + -16096;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEC9DC;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEC9EC"))) PPC_WEAK_FUNC(sub_83BEC9EC);
PPC_FUNC_IMPL(__imp__sub_83BEC9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC9F0"))) PPC_WEAK_FUNC(sub_83BEC9F0);
PPC_FUNC_IMPL(__imp__sub_83BEC9F0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-30488
	ctx.r7.s64 = ctx.r8.s64 + -30488;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-30488(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30488);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-30488(r8)
	PPC_STORE_U32(ctx.r8.u32 + -30488, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BECA18"))) PPC_WEAK_FUNC(sub_83BECA18);
PPC_FUNC_IMPL(__imp__sub_83BECA18) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-8324
	ctx.r6.s64 = ctx.r7.s64 + -8324;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-8396(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -8396);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-30488(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -30488);
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
	// std r9,-8324(r7)
	PPC_STORE_U64(ctx.r7.u32 + -8324, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BECA60"))) PPC_WEAK_FUNC(sub_83BECA60);
PPC_FUNC_IMPL(__imp__sub_83BECA60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16080
	ctx.r3.s64 = ctx.r11.s64 + -16080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BECA6C"))) PPC_WEAK_FUNC(sub_83BECA6C);
PPC_FUNC_IMPL(__imp__sub_83BECA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BECA70"))) PPC_WEAK_FUNC(sub_83BECA70);
PPC_FUNC_IMPL(__imp__sub_83BECA70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-30480
	ctx.r3.s64 = ctx.r11.s64 + -30480;
	// bl 0x8259af80
	ctx.lr = 0x83BECA88;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-16064
	ctx.r3.s64 = ctx.r10.s64 + -16064;
	// bl 0x831cdcc8
	ctx.lr = 0x83BECA94;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BECAA4"))) PPC_WEAK_FUNC(sub_83BECAA4);
PPC_FUNC_IMPL(__imp__sub_83BECAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BECAA8"))) PPC_WEAK_FUNC(sub_83BECAA8);
PPC_FUNC_IMPL(__imp__sub_83BECAA8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-30500
	ctx.r11.s64 = ctx.r8.s64 + -30500;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-8348(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8348);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-16072
	ctx.r3.s64 = ctx.r6.s64 + -16072;
	// stw r10,-30500(r8)
	PPC_STORE_U32(ctx.r8.u32 + -30500, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BECAD8"))) PPC_WEAK_FUNC(sub_83BECAD8);
PPC_FUNC_IMPL(__imp__sub_83BECAD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16056
	ctx.r3.s64 = ctx.r11.s64 + -16056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BECAE4"))) PPC_WEAK_FUNC(sub_83BECAE4);
PPC_FUNC_IMPL(__imp__sub_83BECAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BECAE8"))) PPC_WEAK_FUNC(sub_83BECAE8);
PPC_FUNC_IMPL(__imp__sub_83BECAE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16048
	ctx.r3.s64 = ctx.r11.s64 + -16048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BECAF4"))) PPC_WEAK_FUNC(sub_83BECAF4);
PPC_FUNC_IMPL(__imp__sub_83BECAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BECAF8"))) PPC_WEAK_FUNC(sub_83BECAF8);
PPC_FUNC_IMPL(__imp__sub_83BECAF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16040
	ctx.r3.s64 = ctx.r11.s64 + -16040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BECB04"))) PPC_WEAK_FUNC(sub_83BECB04);
PPC_FUNC_IMPL(__imp__sub_83BECB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BECB08"))) PPC_WEAK_FUNC(sub_83BECB08);
PPC_FUNC_IMPL(__imp__sub_83BECB08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16032
	ctx.r3.s64 = ctx.r11.s64 + -16032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BECB14"))) PPC_WEAK_FUNC(sub_83BECB14);
PPC_FUNC_IMPL(__imp__sub_83BECB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BECB18"))) PPC_WEAK_FUNC(sub_83BECB18);
PPC_FUNC_IMPL(__imp__sub_83BECB18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16024
	ctx.r3.s64 = ctx.r11.s64 + -16024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BECB24"))) PPC_WEAK_FUNC(sub_83BECB24);
PPC_FUNC_IMPL(__imp__sub_83BECB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BECB28"))) PPC_WEAK_FUNC(sub_83BECB28);
PPC_FUNC_IMPL(__imp__sub_83BECB28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16016
	ctx.r3.s64 = ctx.r11.s64 + -16016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BECB34"))) PPC_WEAK_FUNC(sub_83BECB34);
PPC_FUNC_IMPL(__imp__sub_83BECB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BECB38"))) PPC_WEAK_FUNC(sub_83BECB38);
PPC_FUNC_IMPL(__imp__sub_83BECB38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16008
	ctx.r3.s64 = ctx.r11.s64 + -16008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BECB44"))) PPC_WEAK_FUNC(sub_83BECB44);
PPC_FUNC_IMPL(__imp__sub_83BECB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BECB48"))) PPC_WEAK_FUNC(sub_83BECB48);
PPC_FUNC_IMPL(__imp__sub_83BECB48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16000
	ctx.r3.s64 = ctx.r11.s64 + -16000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BECB54"))) PPC_WEAK_FUNC(sub_83BECB54);
PPC_FUNC_IMPL(__imp__sub_83BECB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BECB58"))) PPC_WEAK_FUNC(sub_83BECB58);
PPC_FUNC_IMPL(__imp__sub_83BECB58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15992
	ctx.r3.s64 = ctx.r11.s64 + -15992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BECB64"))) PPC_WEAK_FUNC(sub_83BECB64);
PPC_FUNC_IMPL(__imp__sub_83BECB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BECB68"))) PPC_WEAK_FUNC(sub_83BECB68);
PPC_FUNC_IMPL(__imp__sub_83BECB68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15984
	ctx.r3.s64 = ctx.r11.s64 + -15984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BECB74"))) PPC_WEAK_FUNC(sub_83BECB74);
PPC_FUNC_IMPL(__imp__sub_83BECB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BECB78"))) PPC_WEAK_FUNC(sub_83BECB78);
PPC_FUNC_IMPL(__imp__sub_83BECB78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15976
	ctx.r3.s64 = ctx.r11.s64 + -15976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BECB84"))) PPC_WEAK_FUNC(sub_83BECB84);
PPC_FUNC_IMPL(__imp__sub_83BECB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BECB88"))) PPC_WEAK_FUNC(sub_83BECB88);
PPC_FUNC_IMPL(__imp__sub_83BECB88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15968
	ctx.r3.s64 = ctx.r11.s64 + -15968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BECB94"))) PPC_WEAK_FUNC(sub_83BECB94);
PPC_FUNC_IMPL(__imp__sub_83BECB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BECB98"))) PPC_WEAK_FUNC(sub_83BECB98);
PPC_FUNC_IMPL(__imp__sub_83BECB98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-30136
	ctx.r3.s64 = ctx.r11.s64 + -30136;
	// bl 0x83523120
	ctx.lr = 0x83BECBB0;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-15960
	ctx.r3.s64 = ctx.r10.s64 + -15960;
	// bl 0x831cdcc8
	ctx.lr = 0x83BECBBC;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BECBCC"))) PPC_WEAK_FUNC(sub_83BECBCC);
PPC_FUNC_IMPL(__imp__sub_83BECBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BECBD0"))) PPC_WEAK_FUNC(sub_83BECBD0);
PPC_FUNC_IMPL(__imp__sub_83BECBD0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-30120
	ctx.r7.s64 = ctx.r8.s64 + -30120;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-30120(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30120);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-30120(r8)
	PPC_STORE_U32(ctx.r8.u32 + -30120, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BECBF8"))) PPC_WEAK_FUNC(sub_83BECBF8);
PPC_FUNC_IMPL(__imp__sub_83BECBF8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-8108
	ctx.r6.s64 = ctx.r7.s64 + -8108;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-8180(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -8180);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-30120(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -30120);
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
	// std r9,-8108(r7)
	PPC_STORE_U64(ctx.r7.u32 + -8108, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BECC40"))) PPC_WEAK_FUNC(sub_83BECC40);
PPC_FUNC_IMPL(__imp__sub_83BECC40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15944
	ctx.r3.s64 = ctx.r11.s64 + -15944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BECC4C"))) PPC_WEAK_FUNC(sub_83BECC4C);
PPC_FUNC_IMPL(__imp__sub_83BECC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BECC50"))) PPC_WEAK_FUNC(sub_83BECC50);
PPC_FUNC_IMPL(__imp__sub_83BECC50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-30112
	ctx.r3.s64 = ctx.r11.s64 + -30112;
	// bl 0x8259af80
	ctx.lr = 0x83BECC68;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-15928
	ctx.r3.s64 = ctx.r10.s64 + -15928;
	// bl 0x831cdcc8
	ctx.lr = 0x83BECC74;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BECC84"))) PPC_WEAK_FUNC(sub_83BECC84);
PPC_FUNC_IMPL(__imp__sub_83BECC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BECC88"))) PPC_WEAK_FUNC(sub_83BECC88);
PPC_FUNC_IMPL(__imp__sub_83BECC88) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-30132
	ctx.r11.s64 = ctx.r8.s64 + -30132;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-8132(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8132);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-15936
	ctx.r3.s64 = ctx.r6.s64 + -15936;
	// stw r10,-30132(r8)
	PPC_STORE_U32(ctx.r8.u32 + -30132, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BECCB8"))) PPC_WEAK_FUNC(sub_83BECCB8);
PPC_FUNC_IMPL(__imp__sub_83BECCB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15920
	ctx.r3.s64 = ctx.r11.s64 + -15920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BECCC4"))) PPC_WEAK_FUNC(sub_83BECCC4);
PPC_FUNC_IMPL(__imp__sub_83BECCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BECCC8"))) PPC_WEAK_FUNC(sub_83BECCC8);
PPC_FUNC_IMPL(__imp__sub_83BECCC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15912
	ctx.r3.s64 = ctx.r11.s64 + -15912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BECCD4"))) PPC_WEAK_FUNC(sub_83BECCD4);
PPC_FUNC_IMPL(__imp__sub_83BECCD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BECCD8"))) PPC_WEAK_FUNC(sub_83BECCD8);
PPC_FUNC_IMPL(__imp__sub_83BECCD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15904
	ctx.r3.s64 = ctx.r11.s64 + -15904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BECCE4"))) PPC_WEAK_FUNC(sub_83BECCE4);
PPC_FUNC_IMPL(__imp__sub_83BECCE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BECCE8"))) PPC_WEAK_FUNC(sub_83BECCE8);
PPC_FUNC_IMPL(__imp__sub_83BECCE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15896
	ctx.r3.s64 = ctx.r11.s64 + -15896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BECCF4"))) PPC_WEAK_FUNC(sub_83BECCF4);
PPC_FUNC_IMPL(__imp__sub_83BECCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BECCF8"))) PPC_WEAK_FUNC(sub_83BECCF8);
PPC_FUNC_IMPL(__imp__sub_83BECCF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15888
	ctx.r3.s64 = ctx.r11.s64 + -15888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BECD04"))) PPC_WEAK_FUNC(sub_83BECD04);
PPC_FUNC_IMPL(__imp__sub_83BECD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BECD08"))) PPC_WEAK_FUNC(sub_83BECD08);
PPC_FUNC_IMPL(__imp__sub_83BECD08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15880
	ctx.r3.s64 = ctx.r11.s64 + -15880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BECD14"))) PPC_WEAK_FUNC(sub_83BECD14);
PPC_FUNC_IMPL(__imp__sub_83BECD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BECD18"))) PPC_WEAK_FUNC(sub_83BECD18);
PPC_FUNC_IMPL(__imp__sub_83BECD18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15872
	ctx.r3.s64 = ctx.r11.s64 + -15872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BECD24"))) PPC_WEAK_FUNC(sub_83BECD24);
PPC_FUNC_IMPL(__imp__sub_83BECD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BECD28"))) PPC_WEAK_FUNC(sub_83BECD28);
PPC_FUNC_IMPL(__imp__sub_83BECD28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15864
	ctx.r3.s64 = ctx.r11.s64 + -15864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BECD34"))) PPC_WEAK_FUNC(sub_83BECD34);
PPC_FUNC_IMPL(__imp__sub_83BECD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BECD38"))) PPC_WEAK_FUNC(sub_83BECD38);
PPC_FUNC_IMPL(__imp__sub_83BECD38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15856
	ctx.r3.s64 = ctx.r11.s64 + -15856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BECD44"))) PPC_WEAK_FUNC(sub_83BECD44);
PPC_FUNC_IMPL(__imp__sub_83BECD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BECD48"))) PPC_WEAK_FUNC(sub_83BECD48);
PPC_FUNC_IMPL(__imp__sub_83BECD48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15848
	ctx.r3.s64 = ctx.r11.s64 + -15848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BECD54"))) PPC_WEAK_FUNC(sub_83BECD54);
PPC_FUNC_IMPL(__imp__sub_83BECD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BECD58"))) PPC_WEAK_FUNC(sub_83BECD58);
PPC_FUNC_IMPL(__imp__sub_83BECD58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15840
	ctx.r3.s64 = ctx.r11.s64 + -15840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BECD64"))) PPC_WEAK_FUNC(sub_83BECD64);
PPC_FUNC_IMPL(__imp__sub_83BECD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BECD68"))) PPC_WEAK_FUNC(sub_83BECD68);
PPC_FUNC_IMPL(__imp__sub_83BECD68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15832
	ctx.r3.s64 = ctx.r11.s64 + -15832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BECD74"))) PPC_WEAK_FUNC(sub_83BECD74);
PPC_FUNC_IMPL(__imp__sub_83BECD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BECD78"))) PPC_WEAK_FUNC(sub_83BECD78);
PPC_FUNC_IMPL(__imp__sub_83BECD78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-29768
	ctx.r3.s64 = ctx.r11.s64 + -29768;
	// bl 0x83523120
	ctx.lr = 0x83BECD90;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-15824
	ctx.r3.s64 = ctx.r10.s64 + -15824;
	// bl 0x831cdcc8
	ctx.lr = 0x83BECD9C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BECDAC"))) PPC_WEAK_FUNC(sub_83BECDAC);
PPC_FUNC_IMPL(__imp__sub_83BECDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BECDB0"))) PPC_WEAK_FUNC(sub_83BECDB0);
PPC_FUNC_IMPL(__imp__sub_83BECDB0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-29752
	ctx.r7.s64 = ctx.r8.s64 + -29752;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-29752(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -29752);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-29752(r8)
	PPC_STORE_U32(ctx.r8.u32 + -29752, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BECDD8"))) PPC_WEAK_FUNC(sub_83BECDD8);
PPC_FUNC_IMPL(__imp__sub_83BECDD8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-7980
	ctx.r6.s64 = ctx.r7.s64 + -7980;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-8052(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -8052);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-29752(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -29752);
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
	// std r9,-7980(r7)
	PPC_STORE_U64(ctx.r7.u32 + -7980, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BECE20"))) PPC_WEAK_FUNC(sub_83BECE20);
PPC_FUNC_IMPL(__imp__sub_83BECE20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15808
	ctx.r3.s64 = ctx.r11.s64 + -15808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BECE2C"))) PPC_WEAK_FUNC(sub_83BECE2C);
PPC_FUNC_IMPL(__imp__sub_83BECE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BECE30"))) PPC_WEAK_FUNC(sub_83BECE30);
PPC_FUNC_IMPL(__imp__sub_83BECE30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-29744
	ctx.r3.s64 = ctx.r11.s64 + -29744;
	// bl 0x8259af80
	ctx.lr = 0x83BECE48;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-15792
	ctx.r3.s64 = ctx.r10.s64 + -15792;
	// bl 0x831cdcc8
	ctx.lr = 0x83BECE54;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BECE64"))) PPC_WEAK_FUNC(sub_83BECE64);
PPC_FUNC_IMPL(__imp__sub_83BECE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BECE68"))) PPC_WEAK_FUNC(sub_83BECE68);
PPC_FUNC_IMPL(__imp__sub_83BECE68) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-29764
	ctx.r11.s64 = ctx.r8.s64 + -29764;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-8004(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8004);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-15800
	ctx.r3.s64 = ctx.r6.s64 + -15800;
	// stw r10,-29764(r8)
	PPC_STORE_U32(ctx.r8.u32 + -29764, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BECE98"))) PPC_WEAK_FUNC(sub_83BECE98);
PPC_FUNC_IMPL(__imp__sub_83BECE98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15784
	ctx.r3.s64 = ctx.r11.s64 + -15784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BECEA4"))) PPC_WEAK_FUNC(sub_83BECEA4);
PPC_FUNC_IMPL(__imp__sub_83BECEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BECEA8"))) PPC_WEAK_FUNC(sub_83BECEA8);
PPC_FUNC_IMPL(__imp__sub_83BECEA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15776
	ctx.r3.s64 = ctx.r11.s64 + -15776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BECEB4"))) PPC_WEAK_FUNC(sub_83BECEB4);
PPC_FUNC_IMPL(__imp__sub_83BECEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BECEB8"))) PPC_WEAK_FUNC(sub_83BECEB8);
PPC_FUNC_IMPL(__imp__sub_83BECEB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15768
	ctx.r3.s64 = ctx.r11.s64 + -15768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BECEC4"))) PPC_WEAK_FUNC(sub_83BECEC4);
PPC_FUNC_IMPL(__imp__sub_83BECEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BECEC8"))) PPC_WEAK_FUNC(sub_83BECEC8);
PPC_FUNC_IMPL(__imp__sub_83BECEC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15760
	ctx.r3.s64 = ctx.r11.s64 + -15760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BECED4"))) PPC_WEAK_FUNC(sub_83BECED4);
PPC_FUNC_IMPL(__imp__sub_83BECED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BECED8"))) PPC_WEAK_FUNC(sub_83BECED8);
PPC_FUNC_IMPL(__imp__sub_83BECED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15752
	ctx.r3.s64 = ctx.r11.s64 + -15752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BECEE4"))) PPC_WEAK_FUNC(sub_83BECEE4);
PPC_FUNC_IMPL(__imp__sub_83BECEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BECEE8"))) PPC_WEAK_FUNC(sub_83BECEE8);
PPC_FUNC_IMPL(__imp__sub_83BECEE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15744
	ctx.r3.s64 = ctx.r11.s64 + -15744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BECEF4"))) PPC_WEAK_FUNC(sub_83BECEF4);
PPC_FUNC_IMPL(__imp__sub_83BECEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BECEF8"))) PPC_WEAK_FUNC(sub_83BECEF8);
PPC_FUNC_IMPL(__imp__sub_83BECEF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15736
	ctx.r3.s64 = ctx.r11.s64 + -15736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BECF04"))) PPC_WEAK_FUNC(sub_83BECF04);
PPC_FUNC_IMPL(__imp__sub_83BECF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BECF08"))) PPC_WEAK_FUNC(sub_83BECF08);
PPC_FUNC_IMPL(__imp__sub_83BECF08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15728
	ctx.r3.s64 = ctx.r11.s64 + -15728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BECF14"))) PPC_WEAK_FUNC(sub_83BECF14);
PPC_FUNC_IMPL(__imp__sub_83BECF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BECF18"))) PPC_WEAK_FUNC(sub_83BECF18);
PPC_FUNC_IMPL(__imp__sub_83BECF18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15720
	ctx.r3.s64 = ctx.r11.s64 + -15720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BECF24"))) PPC_WEAK_FUNC(sub_83BECF24);
PPC_FUNC_IMPL(__imp__sub_83BECF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BECF28"))) PPC_WEAK_FUNC(sub_83BECF28);
PPC_FUNC_IMPL(__imp__sub_83BECF28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15712
	ctx.r3.s64 = ctx.r11.s64 + -15712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BECF34"))) PPC_WEAK_FUNC(sub_83BECF34);
PPC_FUNC_IMPL(__imp__sub_83BECF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BECF38"))) PPC_WEAK_FUNC(sub_83BECF38);
PPC_FUNC_IMPL(__imp__sub_83BECF38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15704
	ctx.r3.s64 = ctx.r11.s64 + -15704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BECF44"))) PPC_WEAK_FUNC(sub_83BECF44);
PPC_FUNC_IMPL(__imp__sub_83BECF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BECF48"))) PPC_WEAK_FUNC(sub_83BECF48);
PPC_FUNC_IMPL(__imp__sub_83BECF48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15696
	ctx.r3.s64 = ctx.r11.s64 + -15696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BECF54"))) PPC_WEAK_FUNC(sub_83BECF54);
PPC_FUNC_IMPL(__imp__sub_83BECF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BECF58"))) PPC_WEAK_FUNC(sub_83BECF58);
PPC_FUNC_IMPL(__imp__sub_83BECF58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-29400
	ctx.r3.s64 = ctx.r11.s64 + -29400;
	// bl 0x83523120
	ctx.lr = 0x83BECF70;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-15688
	ctx.r3.s64 = ctx.r10.s64 + -15688;
	// bl 0x831cdcc8
	ctx.lr = 0x83BECF7C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BECF8C"))) PPC_WEAK_FUNC(sub_83BECF8C);
PPC_FUNC_IMPL(__imp__sub_83BECF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BECF90"))) PPC_WEAK_FUNC(sub_83BECF90);
PPC_FUNC_IMPL(__imp__sub_83BECF90) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-29384
	ctx.r7.s64 = ctx.r8.s64 + -29384;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-29384(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -29384);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-29384(r8)
	PPC_STORE_U32(ctx.r8.u32 + -29384, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BECFB8"))) PPC_WEAK_FUNC(sub_83BECFB8);
PPC_FUNC_IMPL(__imp__sub_83BECFB8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-7852
	ctx.r6.s64 = ctx.r7.s64 + -7852;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-7924(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -7924);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-29384(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -29384);
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
	// std r9,-7852(r7)
	PPC_STORE_U64(ctx.r7.u32 + -7852, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BED000"))) PPC_WEAK_FUNC(sub_83BED000);
PPC_FUNC_IMPL(__imp__sub_83BED000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15672
	ctx.r3.s64 = ctx.r11.s64 + -15672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED00C"))) PPC_WEAK_FUNC(sub_83BED00C);
PPC_FUNC_IMPL(__imp__sub_83BED00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED010"))) PPC_WEAK_FUNC(sub_83BED010);
PPC_FUNC_IMPL(__imp__sub_83BED010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-29376
	ctx.r3.s64 = ctx.r11.s64 + -29376;
	// bl 0x8259af80
	ctx.lr = 0x83BED028;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-15656
	ctx.r3.s64 = ctx.r10.s64 + -15656;
	// bl 0x831cdcc8
	ctx.lr = 0x83BED034;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BED044"))) PPC_WEAK_FUNC(sub_83BED044);
PPC_FUNC_IMPL(__imp__sub_83BED044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED048"))) PPC_WEAK_FUNC(sub_83BED048);
PPC_FUNC_IMPL(__imp__sub_83BED048) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-29396
	ctx.r11.s64 = ctx.r8.s64 + -29396;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-7876(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7876);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-15664
	ctx.r3.s64 = ctx.r6.s64 + -15664;
	// stw r10,-29396(r8)
	PPC_STORE_U32(ctx.r8.u32 + -29396, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED078"))) PPC_WEAK_FUNC(sub_83BED078);
PPC_FUNC_IMPL(__imp__sub_83BED078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15648
	ctx.r3.s64 = ctx.r11.s64 + -15648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED084"))) PPC_WEAK_FUNC(sub_83BED084);
PPC_FUNC_IMPL(__imp__sub_83BED084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED088"))) PPC_WEAK_FUNC(sub_83BED088);
PPC_FUNC_IMPL(__imp__sub_83BED088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15640
	ctx.r3.s64 = ctx.r11.s64 + -15640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED094"))) PPC_WEAK_FUNC(sub_83BED094);
PPC_FUNC_IMPL(__imp__sub_83BED094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED098"))) PPC_WEAK_FUNC(sub_83BED098);
PPC_FUNC_IMPL(__imp__sub_83BED098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15632
	ctx.r3.s64 = ctx.r11.s64 + -15632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED0A4"))) PPC_WEAK_FUNC(sub_83BED0A4);
PPC_FUNC_IMPL(__imp__sub_83BED0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED0A8"))) PPC_WEAK_FUNC(sub_83BED0A8);
PPC_FUNC_IMPL(__imp__sub_83BED0A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15624
	ctx.r3.s64 = ctx.r11.s64 + -15624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED0B4"))) PPC_WEAK_FUNC(sub_83BED0B4);
PPC_FUNC_IMPL(__imp__sub_83BED0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED0B8"))) PPC_WEAK_FUNC(sub_83BED0B8);
PPC_FUNC_IMPL(__imp__sub_83BED0B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15616
	ctx.r3.s64 = ctx.r11.s64 + -15616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED0C4"))) PPC_WEAK_FUNC(sub_83BED0C4);
PPC_FUNC_IMPL(__imp__sub_83BED0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED0C8"))) PPC_WEAK_FUNC(sub_83BED0C8);
PPC_FUNC_IMPL(__imp__sub_83BED0C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15608
	ctx.r3.s64 = ctx.r11.s64 + -15608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED0D4"))) PPC_WEAK_FUNC(sub_83BED0D4);
PPC_FUNC_IMPL(__imp__sub_83BED0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED0D8"))) PPC_WEAK_FUNC(sub_83BED0D8);
PPC_FUNC_IMPL(__imp__sub_83BED0D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15600
	ctx.r3.s64 = ctx.r11.s64 + -15600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED0E4"))) PPC_WEAK_FUNC(sub_83BED0E4);
PPC_FUNC_IMPL(__imp__sub_83BED0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED0E8"))) PPC_WEAK_FUNC(sub_83BED0E8);
PPC_FUNC_IMPL(__imp__sub_83BED0E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15592
	ctx.r3.s64 = ctx.r11.s64 + -15592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED0F4"))) PPC_WEAK_FUNC(sub_83BED0F4);
PPC_FUNC_IMPL(__imp__sub_83BED0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED0F8"))) PPC_WEAK_FUNC(sub_83BED0F8);
PPC_FUNC_IMPL(__imp__sub_83BED0F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15584
	ctx.r3.s64 = ctx.r11.s64 + -15584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED104"))) PPC_WEAK_FUNC(sub_83BED104);
PPC_FUNC_IMPL(__imp__sub_83BED104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED108"))) PPC_WEAK_FUNC(sub_83BED108);
PPC_FUNC_IMPL(__imp__sub_83BED108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15576
	ctx.r3.s64 = ctx.r11.s64 + -15576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED114"))) PPC_WEAK_FUNC(sub_83BED114);
PPC_FUNC_IMPL(__imp__sub_83BED114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED118"))) PPC_WEAK_FUNC(sub_83BED118);
PPC_FUNC_IMPL(__imp__sub_83BED118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15568
	ctx.r3.s64 = ctx.r11.s64 + -15568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED124"))) PPC_WEAK_FUNC(sub_83BED124);
PPC_FUNC_IMPL(__imp__sub_83BED124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED128"))) PPC_WEAK_FUNC(sub_83BED128);
PPC_FUNC_IMPL(__imp__sub_83BED128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15560
	ctx.r3.s64 = ctx.r11.s64 + -15560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED134"))) PPC_WEAK_FUNC(sub_83BED134);
PPC_FUNC_IMPL(__imp__sub_83BED134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED138"))) PPC_WEAK_FUNC(sub_83BED138);
PPC_FUNC_IMPL(__imp__sub_83BED138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-29032
	ctx.r3.s64 = ctx.r11.s64 + -29032;
	// bl 0x83523120
	ctx.lr = 0x83BED150;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-15552
	ctx.r3.s64 = ctx.r10.s64 + -15552;
	// bl 0x831cdcc8
	ctx.lr = 0x83BED15C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BED16C"))) PPC_WEAK_FUNC(sub_83BED16C);
PPC_FUNC_IMPL(__imp__sub_83BED16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED170"))) PPC_WEAK_FUNC(sub_83BED170);
PPC_FUNC_IMPL(__imp__sub_83BED170) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-29016
	ctx.r7.s64 = ctx.r8.s64 + -29016;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-29016(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -29016);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-29016(r8)
	PPC_STORE_U32(ctx.r8.u32 + -29016, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BED198"))) PPC_WEAK_FUNC(sub_83BED198);
PPC_FUNC_IMPL(__imp__sub_83BED198) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-7708
	ctx.r6.s64 = ctx.r7.s64 + -7708;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-7780(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -7780);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-29016(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -29016);
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
	// std r9,-7708(r7)
	PPC_STORE_U64(ctx.r7.u32 + -7708, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BED1E0"))) PPC_WEAK_FUNC(sub_83BED1E0);
PPC_FUNC_IMPL(__imp__sub_83BED1E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15536
	ctx.r3.s64 = ctx.r11.s64 + -15536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED1EC"))) PPC_WEAK_FUNC(sub_83BED1EC);
PPC_FUNC_IMPL(__imp__sub_83BED1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED1F0"))) PPC_WEAK_FUNC(sub_83BED1F0);
PPC_FUNC_IMPL(__imp__sub_83BED1F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-29008
	ctx.r3.s64 = ctx.r11.s64 + -29008;
	// bl 0x8259af80
	ctx.lr = 0x83BED208;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-15520
	ctx.r3.s64 = ctx.r10.s64 + -15520;
	// bl 0x831cdcc8
	ctx.lr = 0x83BED214;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BED224"))) PPC_WEAK_FUNC(sub_83BED224);
PPC_FUNC_IMPL(__imp__sub_83BED224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED228"))) PPC_WEAK_FUNC(sub_83BED228);
PPC_FUNC_IMPL(__imp__sub_83BED228) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-29028
	ctx.r11.s64 = ctx.r8.s64 + -29028;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-7732(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7732);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-15528
	ctx.r3.s64 = ctx.r6.s64 + -15528;
	// stw r10,-29028(r8)
	PPC_STORE_U32(ctx.r8.u32 + -29028, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED258"))) PPC_WEAK_FUNC(sub_83BED258);
PPC_FUNC_IMPL(__imp__sub_83BED258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15512
	ctx.r3.s64 = ctx.r11.s64 + -15512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED264"))) PPC_WEAK_FUNC(sub_83BED264);
PPC_FUNC_IMPL(__imp__sub_83BED264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED268"))) PPC_WEAK_FUNC(sub_83BED268);
PPC_FUNC_IMPL(__imp__sub_83BED268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15504
	ctx.r3.s64 = ctx.r11.s64 + -15504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED274"))) PPC_WEAK_FUNC(sub_83BED274);
PPC_FUNC_IMPL(__imp__sub_83BED274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED278"))) PPC_WEAK_FUNC(sub_83BED278);
PPC_FUNC_IMPL(__imp__sub_83BED278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15496
	ctx.r3.s64 = ctx.r11.s64 + -15496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED284"))) PPC_WEAK_FUNC(sub_83BED284);
PPC_FUNC_IMPL(__imp__sub_83BED284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED288"))) PPC_WEAK_FUNC(sub_83BED288);
PPC_FUNC_IMPL(__imp__sub_83BED288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15488
	ctx.r3.s64 = ctx.r11.s64 + -15488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED294"))) PPC_WEAK_FUNC(sub_83BED294);
PPC_FUNC_IMPL(__imp__sub_83BED294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED298"))) PPC_WEAK_FUNC(sub_83BED298);
PPC_FUNC_IMPL(__imp__sub_83BED298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15480
	ctx.r3.s64 = ctx.r11.s64 + -15480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED2A4"))) PPC_WEAK_FUNC(sub_83BED2A4);
PPC_FUNC_IMPL(__imp__sub_83BED2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED2A8"))) PPC_WEAK_FUNC(sub_83BED2A8);
PPC_FUNC_IMPL(__imp__sub_83BED2A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15472
	ctx.r3.s64 = ctx.r11.s64 + -15472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED2B4"))) PPC_WEAK_FUNC(sub_83BED2B4);
PPC_FUNC_IMPL(__imp__sub_83BED2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED2B8"))) PPC_WEAK_FUNC(sub_83BED2B8);
PPC_FUNC_IMPL(__imp__sub_83BED2B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15464
	ctx.r3.s64 = ctx.r11.s64 + -15464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED2C4"))) PPC_WEAK_FUNC(sub_83BED2C4);
PPC_FUNC_IMPL(__imp__sub_83BED2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED2C8"))) PPC_WEAK_FUNC(sub_83BED2C8);
PPC_FUNC_IMPL(__imp__sub_83BED2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15456
	ctx.r3.s64 = ctx.r11.s64 + -15456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED2D4"))) PPC_WEAK_FUNC(sub_83BED2D4);
PPC_FUNC_IMPL(__imp__sub_83BED2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED2D8"))) PPC_WEAK_FUNC(sub_83BED2D8);
PPC_FUNC_IMPL(__imp__sub_83BED2D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15448
	ctx.r3.s64 = ctx.r11.s64 + -15448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED2E4"))) PPC_WEAK_FUNC(sub_83BED2E4);
PPC_FUNC_IMPL(__imp__sub_83BED2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED2E8"))) PPC_WEAK_FUNC(sub_83BED2E8);
PPC_FUNC_IMPL(__imp__sub_83BED2E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15440
	ctx.r3.s64 = ctx.r11.s64 + -15440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED2F4"))) PPC_WEAK_FUNC(sub_83BED2F4);
PPC_FUNC_IMPL(__imp__sub_83BED2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED2F8"))) PPC_WEAK_FUNC(sub_83BED2F8);
PPC_FUNC_IMPL(__imp__sub_83BED2F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15432
	ctx.r3.s64 = ctx.r11.s64 + -15432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED304"))) PPC_WEAK_FUNC(sub_83BED304);
PPC_FUNC_IMPL(__imp__sub_83BED304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED308"))) PPC_WEAK_FUNC(sub_83BED308);
PPC_FUNC_IMPL(__imp__sub_83BED308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15424
	ctx.r3.s64 = ctx.r11.s64 + -15424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED314"))) PPC_WEAK_FUNC(sub_83BED314);
PPC_FUNC_IMPL(__imp__sub_83BED314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED318"))) PPC_WEAK_FUNC(sub_83BED318);
PPC_FUNC_IMPL(__imp__sub_83BED318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-28664
	ctx.r3.s64 = ctx.r11.s64 + -28664;
	// bl 0x83523120
	ctx.lr = 0x83BED330;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-15416
	ctx.r3.s64 = ctx.r10.s64 + -15416;
	// bl 0x831cdcc8
	ctx.lr = 0x83BED33C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BED34C"))) PPC_WEAK_FUNC(sub_83BED34C);
PPC_FUNC_IMPL(__imp__sub_83BED34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED350"))) PPC_WEAK_FUNC(sub_83BED350);
PPC_FUNC_IMPL(__imp__sub_83BED350) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-28648
	ctx.r7.s64 = ctx.r8.s64 + -28648;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-28648(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -28648);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-28648(r8)
	PPC_STORE_U32(ctx.r8.u32 + -28648, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BED378"))) PPC_WEAK_FUNC(sub_83BED378);
PPC_FUNC_IMPL(__imp__sub_83BED378) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-7552
	ctx.r6.s64 = ctx.r7.s64 + -7552;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-7624(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -7624);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-28648(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28648);
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
	// std r9,-7552(r7)
	PPC_STORE_U64(ctx.r7.u32 + -7552, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BED3C0"))) PPC_WEAK_FUNC(sub_83BED3C0);
PPC_FUNC_IMPL(__imp__sub_83BED3C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15400
	ctx.r3.s64 = ctx.r11.s64 + -15400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED3CC"))) PPC_WEAK_FUNC(sub_83BED3CC);
PPC_FUNC_IMPL(__imp__sub_83BED3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED3D0"))) PPC_WEAK_FUNC(sub_83BED3D0);
PPC_FUNC_IMPL(__imp__sub_83BED3D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-28640
	ctx.r3.s64 = ctx.r11.s64 + -28640;
	// bl 0x8259af80
	ctx.lr = 0x83BED3E8;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-15384
	ctx.r3.s64 = ctx.r10.s64 + -15384;
	// bl 0x831cdcc8
	ctx.lr = 0x83BED3F4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BED404"))) PPC_WEAK_FUNC(sub_83BED404);
PPC_FUNC_IMPL(__imp__sub_83BED404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED408"))) PPC_WEAK_FUNC(sub_83BED408);
PPC_FUNC_IMPL(__imp__sub_83BED408) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-28660
	ctx.r11.s64 = ctx.r8.s64 + -28660;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-7576(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7576);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-15392
	ctx.r3.s64 = ctx.r6.s64 + -15392;
	// stw r10,-28660(r8)
	PPC_STORE_U32(ctx.r8.u32 + -28660, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED438"))) PPC_WEAK_FUNC(sub_83BED438);
PPC_FUNC_IMPL(__imp__sub_83BED438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15376
	ctx.r3.s64 = ctx.r11.s64 + -15376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED444"))) PPC_WEAK_FUNC(sub_83BED444);
PPC_FUNC_IMPL(__imp__sub_83BED444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED448"))) PPC_WEAK_FUNC(sub_83BED448);
PPC_FUNC_IMPL(__imp__sub_83BED448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15368
	ctx.r3.s64 = ctx.r11.s64 + -15368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED454"))) PPC_WEAK_FUNC(sub_83BED454);
PPC_FUNC_IMPL(__imp__sub_83BED454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED458"))) PPC_WEAK_FUNC(sub_83BED458);
PPC_FUNC_IMPL(__imp__sub_83BED458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15360
	ctx.r3.s64 = ctx.r11.s64 + -15360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED464"))) PPC_WEAK_FUNC(sub_83BED464);
PPC_FUNC_IMPL(__imp__sub_83BED464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED468"))) PPC_WEAK_FUNC(sub_83BED468);
PPC_FUNC_IMPL(__imp__sub_83BED468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15352
	ctx.r3.s64 = ctx.r11.s64 + -15352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED474"))) PPC_WEAK_FUNC(sub_83BED474);
PPC_FUNC_IMPL(__imp__sub_83BED474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED478"))) PPC_WEAK_FUNC(sub_83BED478);
PPC_FUNC_IMPL(__imp__sub_83BED478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15344
	ctx.r3.s64 = ctx.r11.s64 + -15344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED484"))) PPC_WEAK_FUNC(sub_83BED484);
PPC_FUNC_IMPL(__imp__sub_83BED484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED488"))) PPC_WEAK_FUNC(sub_83BED488);
PPC_FUNC_IMPL(__imp__sub_83BED488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15336
	ctx.r3.s64 = ctx.r11.s64 + -15336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED494"))) PPC_WEAK_FUNC(sub_83BED494);
PPC_FUNC_IMPL(__imp__sub_83BED494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED498"))) PPC_WEAK_FUNC(sub_83BED498);
PPC_FUNC_IMPL(__imp__sub_83BED498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15328
	ctx.r3.s64 = ctx.r11.s64 + -15328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED4A4"))) PPC_WEAK_FUNC(sub_83BED4A4);
PPC_FUNC_IMPL(__imp__sub_83BED4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED4A8"))) PPC_WEAK_FUNC(sub_83BED4A8);
PPC_FUNC_IMPL(__imp__sub_83BED4A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15320
	ctx.r3.s64 = ctx.r11.s64 + -15320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED4B4"))) PPC_WEAK_FUNC(sub_83BED4B4);
PPC_FUNC_IMPL(__imp__sub_83BED4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED4B8"))) PPC_WEAK_FUNC(sub_83BED4B8);
PPC_FUNC_IMPL(__imp__sub_83BED4B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15312
	ctx.r3.s64 = ctx.r11.s64 + -15312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED4C4"))) PPC_WEAK_FUNC(sub_83BED4C4);
PPC_FUNC_IMPL(__imp__sub_83BED4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED4C8"))) PPC_WEAK_FUNC(sub_83BED4C8);
PPC_FUNC_IMPL(__imp__sub_83BED4C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15304
	ctx.r3.s64 = ctx.r11.s64 + -15304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED4D4"))) PPC_WEAK_FUNC(sub_83BED4D4);
PPC_FUNC_IMPL(__imp__sub_83BED4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED4D8"))) PPC_WEAK_FUNC(sub_83BED4D8);
PPC_FUNC_IMPL(__imp__sub_83BED4D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15296
	ctx.r3.s64 = ctx.r11.s64 + -15296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED4E4"))) PPC_WEAK_FUNC(sub_83BED4E4);
PPC_FUNC_IMPL(__imp__sub_83BED4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED4E8"))) PPC_WEAK_FUNC(sub_83BED4E8);
PPC_FUNC_IMPL(__imp__sub_83BED4E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15288
	ctx.r3.s64 = ctx.r11.s64 + -15288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED4F4"))) PPC_WEAK_FUNC(sub_83BED4F4);
PPC_FUNC_IMPL(__imp__sub_83BED4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED4F8"))) PPC_WEAK_FUNC(sub_83BED4F8);
PPC_FUNC_IMPL(__imp__sub_83BED4F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-28296
	ctx.r3.s64 = ctx.r11.s64 + -28296;
	// bl 0x83523120
	ctx.lr = 0x83BED510;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-15280
	ctx.r3.s64 = ctx.r10.s64 + -15280;
	// bl 0x831cdcc8
	ctx.lr = 0x83BED51C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BED52C"))) PPC_WEAK_FUNC(sub_83BED52C);
PPC_FUNC_IMPL(__imp__sub_83BED52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED530"))) PPC_WEAK_FUNC(sub_83BED530);
PPC_FUNC_IMPL(__imp__sub_83BED530) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-28280
	ctx.r7.s64 = ctx.r8.s64 + -28280;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-28280(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -28280);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-28280(r8)
	PPC_STORE_U32(ctx.r8.u32 + -28280, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BED558"))) PPC_WEAK_FUNC(sub_83BED558);
PPC_FUNC_IMPL(__imp__sub_83BED558) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-7408
	ctx.r6.s64 = ctx.r7.s64 + -7408;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-7480(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -7480);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-28280(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28280);
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
	// std r9,-7408(r7)
	PPC_STORE_U64(ctx.r7.u32 + -7408, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BED5A0"))) PPC_WEAK_FUNC(sub_83BED5A0);
PPC_FUNC_IMPL(__imp__sub_83BED5A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15264
	ctx.r3.s64 = ctx.r11.s64 + -15264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED5AC"))) PPC_WEAK_FUNC(sub_83BED5AC);
PPC_FUNC_IMPL(__imp__sub_83BED5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED5B0"))) PPC_WEAK_FUNC(sub_83BED5B0);
PPC_FUNC_IMPL(__imp__sub_83BED5B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-28272
	ctx.r3.s64 = ctx.r11.s64 + -28272;
	// bl 0x8259af80
	ctx.lr = 0x83BED5C8;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-15248
	ctx.r3.s64 = ctx.r10.s64 + -15248;
	// bl 0x831cdcc8
	ctx.lr = 0x83BED5D4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BED5E4"))) PPC_WEAK_FUNC(sub_83BED5E4);
PPC_FUNC_IMPL(__imp__sub_83BED5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED5E8"))) PPC_WEAK_FUNC(sub_83BED5E8);
PPC_FUNC_IMPL(__imp__sub_83BED5E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-28292
	ctx.r11.s64 = ctx.r8.s64 + -28292;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-7432(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7432);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-15256
	ctx.r3.s64 = ctx.r6.s64 + -15256;
	// stw r10,-28292(r8)
	PPC_STORE_U32(ctx.r8.u32 + -28292, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED618"))) PPC_WEAK_FUNC(sub_83BED618);
PPC_FUNC_IMPL(__imp__sub_83BED618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15240
	ctx.r3.s64 = ctx.r11.s64 + -15240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED624"))) PPC_WEAK_FUNC(sub_83BED624);
PPC_FUNC_IMPL(__imp__sub_83BED624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED628"))) PPC_WEAK_FUNC(sub_83BED628);
PPC_FUNC_IMPL(__imp__sub_83BED628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15232
	ctx.r3.s64 = ctx.r11.s64 + -15232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED634"))) PPC_WEAK_FUNC(sub_83BED634);
PPC_FUNC_IMPL(__imp__sub_83BED634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED638"))) PPC_WEAK_FUNC(sub_83BED638);
PPC_FUNC_IMPL(__imp__sub_83BED638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15224
	ctx.r3.s64 = ctx.r11.s64 + -15224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED644"))) PPC_WEAK_FUNC(sub_83BED644);
PPC_FUNC_IMPL(__imp__sub_83BED644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED648"))) PPC_WEAK_FUNC(sub_83BED648);
PPC_FUNC_IMPL(__imp__sub_83BED648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15216
	ctx.r3.s64 = ctx.r11.s64 + -15216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED654"))) PPC_WEAK_FUNC(sub_83BED654);
PPC_FUNC_IMPL(__imp__sub_83BED654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED658"))) PPC_WEAK_FUNC(sub_83BED658);
PPC_FUNC_IMPL(__imp__sub_83BED658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15208
	ctx.r3.s64 = ctx.r11.s64 + -15208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED664"))) PPC_WEAK_FUNC(sub_83BED664);
PPC_FUNC_IMPL(__imp__sub_83BED664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED668"))) PPC_WEAK_FUNC(sub_83BED668);
PPC_FUNC_IMPL(__imp__sub_83BED668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15200
	ctx.r3.s64 = ctx.r11.s64 + -15200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED674"))) PPC_WEAK_FUNC(sub_83BED674);
PPC_FUNC_IMPL(__imp__sub_83BED674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED678"))) PPC_WEAK_FUNC(sub_83BED678);
PPC_FUNC_IMPL(__imp__sub_83BED678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15192
	ctx.r3.s64 = ctx.r11.s64 + -15192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED684"))) PPC_WEAK_FUNC(sub_83BED684);
PPC_FUNC_IMPL(__imp__sub_83BED684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED688"))) PPC_WEAK_FUNC(sub_83BED688);
PPC_FUNC_IMPL(__imp__sub_83BED688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15184
	ctx.r3.s64 = ctx.r11.s64 + -15184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED694"))) PPC_WEAK_FUNC(sub_83BED694);
PPC_FUNC_IMPL(__imp__sub_83BED694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED698"))) PPC_WEAK_FUNC(sub_83BED698);
PPC_FUNC_IMPL(__imp__sub_83BED698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15176
	ctx.r3.s64 = ctx.r11.s64 + -15176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED6A4"))) PPC_WEAK_FUNC(sub_83BED6A4);
PPC_FUNC_IMPL(__imp__sub_83BED6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED6A8"))) PPC_WEAK_FUNC(sub_83BED6A8);
PPC_FUNC_IMPL(__imp__sub_83BED6A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15168
	ctx.r3.s64 = ctx.r11.s64 + -15168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED6B4"))) PPC_WEAK_FUNC(sub_83BED6B4);
PPC_FUNC_IMPL(__imp__sub_83BED6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED6B8"))) PPC_WEAK_FUNC(sub_83BED6B8);
PPC_FUNC_IMPL(__imp__sub_83BED6B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15160
	ctx.r3.s64 = ctx.r11.s64 + -15160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED6C4"))) PPC_WEAK_FUNC(sub_83BED6C4);
PPC_FUNC_IMPL(__imp__sub_83BED6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED6C8"))) PPC_WEAK_FUNC(sub_83BED6C8);
PPC_FUNC_IMPL(__imp__sub_83BED6C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15152
	ctx.r3.s64 = ctx.r11.s64 + -15152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED6D4"))) PPC_WEAK_FUNC(sub_83BED6D4);
PPC_FUNC_IMPL(__imp__sub_83BED6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED6D8"))) PPC_WEAK_FUNC(sub_83BED6D8);
PPC_FUNC_IMPL(__imp__sub_83BED6D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-27928
	ctx.r3.s64 = ctx.r11.s64 + -27928;
	// bl 0x83523120
	ctx.lr = 0x83BED6F0;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-15144
	ctx.r3.s64 = ctx.r10.s64 + -15144;
	// bl 0x831cdcc8
	ctx.lr = 0x83BED6FC;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BED70C"))) PPC_WEAK_FUNC(sub_83BED70C);
PPC_FUNC_IMPL(__imp__sub_83BED70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED710"))) PPC_WEAK_FUNC(sub_83BED710);
PPC_FUNC_IMPL(__imp__sub_83BED710) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-27912
	ctx.r7.s64 = ctx.r8.s64 + -27912;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-27912(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -27912);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-27912(r8)
	PPC_STORE_U32(ctx.r8.u32 + -27912, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BED738"))) PPC_WEAK_FUNC(sub_83BED738);
PPC_FUNC_IMPL(__imp__sub_83BED738) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-7248
	ctx.r6.s64 = ctx.r7.s64 + -7248;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-7320(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -7320);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-27912(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -27912);
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
	// std r9,-7248(r7)
	PPC_STORE_U64(ctx.r7.u32 + -7248, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BED780"))) PPC_WEAK_FUNC(sub_83BED780);
PPC_FUNC_IMPL(__imp__sub_83BED780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15128
	ctx.r3.s64 = ctx.r11.s64 + -15128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED78C"))) PPC_WEAK_FUNC(sub_83BED78C);
PPC_FUNC_IMPL(__imp__sub_83BED78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED790"))) PPC_WEAK_FUNC(sub_83BED790);
PPC_FUNC_IMPL(__imp__sub_83BED790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31759
	ctx.r11.s64 = -2081357824;
	// addi r3,r11,-27904
	ctx.r3.s64 = ctx.r11.s64 + -27904;
	// bl 0x8259af80
	ctx.lr = 0x83BED7A8;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-15112
	ctx.r3.s64 = ctx.r10.s64 + -15112;
	// bl 0x831cdcc8
	ctx.lr = 0x83BED7B4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BED7C4"))) PPC_WEAK_FUNC(sub_83BED7C4);
PPC_FUNC_IMPL(__imp__sub_83BED7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED7C8"))) PPC_WEAK_FUNC(sub_83BED7C8);
PPC_FUNC_IMPL(__imp__sub_83BED7C8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-27924
	ctx.r11.s64 = ctx.r8.s64 + -27924;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-7272(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7272);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-15120
	ctx.r3.s64 = ctx.r6.s64 + -15120;
	// stw r10,-27924(r8)
	PPC_STORE_U32(ctx.r8.u32 + -27924, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED7F8"))) PPC_WEAK_FUNC(sub_83BED7F8);
PPC_FUNC_IMPL(__imp__sub_83BED7F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15104
	ctx.r3.s64 = ctx.r11.s64 + -15104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED804"))) PPC_WEAK_FUNC(sub_83BED804);
PPC_FUNC_IMPL(__imp__sub_83BED804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED808"))) PPC_WEAK_FUNC(sub_83BED808);
PPC_FUNC_IMPL(__imp__sub_83BED808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15096
	ctx.r3.s64 = ctx.r11.s64 + -15096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED814"))) PPC_WEAK_FUNC(sub_83BED814);
PPC_FUNC_IMPL(__imp__sub_83BED814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED818"))) PPC_WEAK_FUNC(sub_83BED818);
PPC_FUNC_IMPL(__imp__sub_83BED818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15088
	ctx.r3.s64 = ctx.r11.s64 + -15088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BED824"))) PPC_WEAK_FUNC(sub_83BED824);
PPC_FUNC_IMPL(__imp__sub_83BED824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BED828"))) PPC_WEAK_FUNC(sub_83BED828);
PPC_FUNC_IMPL(__imp__sub_83BED828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-15080
	ctx.r3.s64 = ctx.r11.s64 + -15080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

