#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BB61F4"))) PPC_WEAK_FUNC(sub_83BB61F4);
PPC_FUNC_IMPL(__imp__sub_83BB61F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB61F8"))) PPC_WEAK_FUNC(sub_83BB61F8);
PPC_FUNC_IMPL(__imp__sub_83BB61F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17096
	ctx.r3.s64 = ctx.r11.s64 + -17096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6204"))) PPC_WEAK_FUNC(sub_83BB6204);
PPC_FUNC_IMPL(__imp__sub_83BB6204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6208"))) PPC_WEAK_FUNC(sub_83BB6208);
PPC_FUNC_IMPL(__imp__sub_83BB6208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17088
	ctx.r3.s64 = ctx.r11.s64 + -17088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6214"))) PPC_WEAK_FUNC(sub_83BB6214);
PPC_FUNC_IMPL(__imp__sub_83BB6214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6218"))) PPC_WEAK_FUNC(sub_83BB6218);
PPC_FUNC_IMPL(__imp__sub_83BB6218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17080
	ctx.r3.s64 = ctx.r11.s64 + -17080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6224"))) PPC_WEAK_FUNC(sub_83BB6224);
PPC_FUNC_IMPL(__imp__sub_83BB6224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6228"))) PPC_WEAK_FUNC(sub_83BB6228);
PPC_FUNC_IMPL(__imp__sub_83BB6228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17072
	ctx.r3.s64 = ctx.r11.s64 + -17072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6234"))) PPC_WEAK_FUNC(sub_83BB6234);
PPC_FUNC_IMPL(__imp__sub_83BB6234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6238"))) PPC_WEAK_FUNC(sub_83BB6238);
PPC_FUNC_IMPL(__imp__sub_83BB6238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17064
	ctx.r3.s64 = ctx.r11.s64 + -17064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6244"))) PPC_WEAK_FUNC(sub_83BB6244);
PPC_FUNC_IMPL(__imp__sub_83BB6244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6248"))) PPC_WEAK_FUNC(sub_83BB6248);
PPC_FUNC_IMPL(__imp__sub_83BB6248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17056
	ctx.r3.s64 = ctx.r11.s64 + -17056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6254"))) PPC_WEAK_FUNC(sub_83BB6254);
PPC_FUNC_IMPL(__imp__sub_83BB6254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6258"))) PPC_WEAK_FUNC(sub_83BB6258);
PPC_FUNC_IMPL(__imp__sub_83BB6258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17048
	ctx.r3.s64 = ctx.r11.s64 + -17048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6264"))) PPC_WEAK_FUNC(sub_83BB6264);
PPC_FUNC_IMPL(__imp__sub_83BB6264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6268"))) PPC_WEAK_FUNC(sub_83BB6268);
PPC_FUNC_IMPL(__imp__sub_83BB6268) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,520
	ctx.r3.s64 = ctx.r11.s64 + 520;
	// bl 0x83523120
	ctx.lr = 0x83BB6280;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-17040
	ctx.r3.s64 = ctx.r10.s64 + -17040;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB628C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB629C"))) PPC_WEAK_FUNC(sub_83BB629C);
PPC_FUNC_IMPL(__imp__sub_83BB629C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB62A0"))) PPC_WEAK_FUNC(sub_83BB62A0);
PPC_FUNC_IMPL(__imp__sub_83BB62A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,536
	ctx.r7.s64 = ctx.r8.s64 + 536;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,536(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 536);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,536(r8)
	PPC_STORE_U32(ctx.r8.u32 + 536, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB62C8"))) PPC_WEAK_FUNC(sub_83BB62C8);
PPC_FUNC_IMPL(__imp__sub_83BB62C8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-16536
	ctx.r6.s64 = ctx.r7.s64 + -16536;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-16608(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -16608);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,536(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 536);
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
	// std r9,-16536(r7)
	PPC_STORE_U64(ctx.r7.u32 + -16536, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB6310"))) PPC_WEAK_FUNC(sub_83BB6310);
PPC_FUNC_IMPL(__imp__sub_83BB6310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17024
	ctx.r3.s64 = ctx.r11.s64 + -17024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB631C"))) PPC_WEAK_FUNC(sub_83BB631C);
PPC_FUNC_IMPL(__imp__sub_83BB631C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6320"))) PPC_WEAK_FUNC(sub_83BB6320);
PPC_FUNC_IMPL(__imp__sub_83BB6320) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,544
	ctx.r3.s64 = ctx.r11.s64 + 544;
	// bl 0x8259af80
	ctx.lr = 0x83BB6338;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-17008
	ctx.r3.s64 = ctx.r10.s64 + -17008;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB6344;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB6354"))) PPC_WEAK_FUNC(sub_83BB6354);
PPC_FUNC_IMPL(__imp__sub_83BB6354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6358"))) PPC_WEAK_FUNC(sub_83BB6358);
PPC_FUNC_IMPL(__imp__sub_83BB6358) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,524
	ctx.r11.s64 = ctx.r8.s64 + 524;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-16560(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16560);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-17016
	ctx.r3.s64 = ctx.r6.s64 + -17016;
	// stw r10,524(r8)
	PPC_STORE_U32(ctx.r8.u32 + 524, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6388"))) PPC_WEAK_FUNC(sub_83BB6388);
PPC_FUNC_IMPL(__imp__sub_83BB6388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-17000
	ctx.r3.s64 = ctx.r11.s64 + -17000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6394"))) PPC_WEAK_FUNC(sub_83BB6394);
PPC_FUNC_IMPL(__imp__sub_83BB6394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6398"))) PPC_WEAK_FUNC(sub_83BB6398);
PPC_FUNC_IMPL(__imp__sub_83BB6398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16992
	ctx.r3.s64 = ctx.r11.s64 + -16992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB63A4"))) PPC_WEAK_FUNC(sub_83BB63A4);
PPC_FUNC_IMPL(__imp__sub_83BB63A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB63A8"))) PPC_WEAK_FUNC(sub_83BB63A8);
PPC_FUNC_IMPL(__imp__sub_83BB63A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16984
	ctx.r3.s64 = ctx.r11.s64 + -16984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB63B4"))) PPC_WEAK_FUNC(sub_83BB63B4);
PPC_FUNC_IMPL(__imp__sub_83BB63B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB63B8"))) PPC_WEAK_FUNC(sub_83BB63B8);
PPC_FUNC_IMPL(__imp__sub_83BB63B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16976
	ctx.r3.s64 = ctx.r11.s64 + -16976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB63C4"))) PPC_WEAK_FUNC(sub_83BB63C4);
PPC_FUNC_IMPL(__imp__sub_83BB63C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB63C8"))) PPC_WEAK_FUNC(sub_83BB63C8);
PPC_FUNC_IMPL(__imp__sub_83BB63C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16968
	ctx.r3.s64 = ctx.r11.s64 + -16968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB63D4"))) PPC_WEAK_FUNC(sub_83BB63D4);
PPC_FUNC_IMPL(__imp__sub_83BB63D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB63D8"))) PPC_WEAK_FUNC(sub_83BB63D8);
PPC_FUNC_IMPL(__imp__sub_83BB63D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16960
	ctx.r3.s64 = ctx.r11.s64 + -16960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB63E4"))) PPC_WEAK_FUNC(sub_83BB63E4);
PPC_FUNC_IMPL(__imp__sub_83BB63E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB63E8"))) PPC_WEAK_FUNC(sub_83BB63E8);
PPC_FUNC_IMPL(__imp__sub_83BB63E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16952
	ctx.r3.s64 = ctx.r11.s64 + -16952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB63F4"))) PPC_WEAK_FUNC(sub_83BB63F4);
PPC_FUNC_IMPL(__imp__sub_83BB63F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB63F8"))) PPC_WEAK_FUNC(sub_83BB63F8);
PPC_FUNC_IMPL(__imp__sub_83BB63F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16944
	ctx.r3.s64 = ctx.r11.s64 + -16944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6404"))) PPC_WEAK_FUNC(sub_83BB6404);
PPC_FUNC_IMPL(__imp__sub_83BB6404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6408"))) PPC_WEAK_FUNC(sub_83BB6408);
PPC_FUNC_IMPL(__imp__sub_83BB6408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16936
	ctx.r3.s64 = ctx.r11.s64 + -16936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6414"))) PPC_WEAK_FUNC(sub_83BB6414);
PPC_FUNC_IMPL(__imp__sub_83BB6414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6418"))) PPC_WEAK_FUNC(sub_83BB6418);
PPC_FUNC_IMPL(__imp__sub_83BB6418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16928
	ctx.r3.s64 = ctx.r11.s64 + -16928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6424"))) PPC_WEAK_FUNC(sub_83BB6424);
PPC_FUNC_IMPL(__imp__sub_83BB6424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6428"))) PPC_WEAK_FUNC(sub_83BB6428);
PPC_FUNC_IMPL(__imp__sub_83BB6428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16920
	ctx.r3.s64 = ctx.r11.s64 + -16920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6434"))) PPC_WEAK_FUNC(sub_83BB6434);
PPC_FUNC_IMPL(__imp__sub_83BB6434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6438"))) PPC_WEAK_FUNC(sub_83BB6438);
PPC_FUNC_IMPL(__imp__sub_83BB6438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16912
	ctx.r3.s64 = ctx.r11.s64 + -16912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6444"))) PPC_WEAK_FUNC(sub_83BB6444);
PPC_FUNC_IMPL(__imp__sub_83BB6444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6448"))) PPC_WEAK_FUNC(sub_83BB6448);
PPC_FUNC_IMPL(__imp__sub_83BB6448) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,888
	ctx.r3.s64 = ctx.r11.s64 + 888;
	// bl 0x83523120
	ctx.lr = 0x83BB6460;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-16904
	ctx.r3.s64 = ctx.r10.s64 + -16904;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB646C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB647C"))) PPC_WEAK_FUNC(sub_83BB647C);
PPC_FUNC_IMPL(__imp__sub_83BB647C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6480"))) PPC_WEAK_FUNC(sub_83BB6480);
PPC_FUNC_IMPL(__imp__sub_83BB6480) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,904
	ctx.r7.s64 = ctx.r8.s64 + 904;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,904(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 904);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,904(r8)
	PPC_STORE_U32(ctx.r8.u32 + 904, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB64A8"))) PPC_WEAK_FUNC(sub_83BB64A8);
PPC_FUNC_IMPL(__imp__sub_83BB64A8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-16400
	ctx.r6.s64 = ctx.r7.s64 + -16400;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-16472(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -16472);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,904(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 904);
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
	// std r9,-16400(r7)
	PPC_STORE_U64(ctx.r7.u32 + -16400, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB64F0"))) PPC_WEAK_FUNC(sub_83BB64F0);
PPC_FUNC_IMPL(__imp__sub_83BB64F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16888
	ctx.r3.s64 = ctx.r11.s64 + -16888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB64FC"))) PPC_WEAK_FUNC(sub_83BB64FC);
PPC_FUNC_IMPL(__imp__sub_83BB64FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6500"))) PPC_WEAK_FUNC(sub_83BB6500);
PPC_FUNC_IMPL(__imp__sub_83BB6500) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,912
	ctx.r3.s64 = ctx.r11.s64 + 912;
	// bl 0x8259af80
	ctx.lr = 0x83BB6518;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-16872
	ctx.r3.s64 = ctx.r10.s64 + -16872;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB6524;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB6534"))) PPC_WEAK_FUNC(sub_83BB6534);
PPC_FUNC_IMPL(__imp__sub_83BB6534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6538"))) PPC_WEAK_FUNC(sub_83BB6538);
PPC_FUNC_IMPL(__imp__sub_83BB6538) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,892
	ctx.r11.s64 = ctx.r8.s64 + 892;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-16424(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16424);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-16880
	ctx.r3.s64 = ctx.r6.s64 + -16880;
	// stw r10,892(r8)
	PPC_STORE_U32(ctx.r8.u32 + 892, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6568"))) PPC_WEAK_FUNC(sub_83BB6568);
PPC_FUNC_IMPL(__imp__sub_83BB6568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16864
	ctx.r3.s64 = ctx.r11.s64 + -16864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6574"))) PPC_WEAK_FUNC(sub_83BB6574);
PPC_FUNC_IMPL(__imp__sub_83BB6574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6578"))) PPC_WEAK_FUNC(sub_83BB6578);
PPC_FUNC_IMPL(__imp__sub_83BB6578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16856
	ctx.r3.s64 = ctx.r11.s64 + -16856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6584"))) PPC_WEAK_FUNC(sub_83BB6584);
PPC_FUNC_IMPL(__imp__sub_83BB6584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6588"))) PPC_WEAK_FUNC(sub_83BB6588);
PPC_FUNC_IMPL(__imp__sub_83BB6588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16848
	ctx.r3.s64 = ctx.r11.s64 + -16848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6594"))) PPC_WEAK_FUNC(sub_83BB6594);
PPC_FUNC_IMPL(__imp__sub_83BB6594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6598"))) PPC_WEAK_FUNC(sub_83BB6598);
PPC_FUNC_IMPL(__imp__sub_83BB6598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16840
	ctx.r3.s64 = ctx.r11.s64 + -16840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB65A4"))) PPC_WEAK_FUNC(sub_83BB65A4);
PPC_FUNC_IMPL(__imp__sub_83BB65A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB65A8"))) PPC_WEAK_FUNC(sub_83BB65A8);
PPC_FUNC_IMPL(__imp__sub_83BB65A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16832
	ctx.r3.s64 = ctx.r11.s64 + -16832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB65B4"))) PPC_WEAK_FUNC(sub_83BB65B4);
PPC_FUNC_IMPL(__imp__sub_83BB65B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB65B8"))) PPC_WEAK_FUNC(sub_83BB65B8);
PPC_FUNC_IMPL(__imp__sub_83BB65B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16824
	ctx.r3.s64 = ctx.r11.s64 + -16824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB65C4"))) PPC_WEAK_FUNC(sub_83BB65C4);
PPC_FUNC_IMPL(__imp__sub_83BB65C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB65C8"))) PPC_WEAK_FUNC(sub_83BB65C8);
PPC_FUNC_IMPL(__imp__sub_83BB65C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16816
	ctx.r3.s64 = ctx.r11.s64 + -16816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB65D4"))) PPC_WEAK_FUNC(sub_83BB65D4);
PPC_FUNC_IMPL(__imp__sub_83BB65D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB65D8"))) PPC_WEAK_FUNC(sub_83BB65D8);
PPC_FUNC_IMPL(__imp__sub_83BB65D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16808
	ctx.r3.s64 = ctx.r11.s64 + -16808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB65E4"))) PPC_WEAK_FUNC(sub_83BB65E4);
PPC_FUNC_IMPL(__imp__sub_83BB65E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB65E8"))) PPC_WEAK_FUNC(sub_83BB65E8);
PPC_FUNC_IMPL(__imp__sub_83BB65E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16800
	ctx.r3.s64 = ctx.r11.s64 + -16800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB65F4"))) PPC_WEAK_FUNC(sub_83BB65F4);
PPC_FUNC_IMPL(__imp__sub_83BB65F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB65F8"))) PPC_WEAK_FUNC(sub_83BB65F8);
PPC_FUNC_IMPL(__imp__sub_83BB65F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16792
	ctx.r3.s64 = ctx.r11.s64 + -16792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6604"))) PPC_WEAK_FUNC(sub_83BB6604);
PPC_FUNC_IMPL(__imp__sub_83BB6604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6608"))) PPC_WEAK_FUNC(sub_83BB6608);
PPC_FUNC_IMPL(__imp__sub_83BB6608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16784
	ctx.r3.s64 = ctx.r11.s64 + -16784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6614"))) PPC_WEAK_FUNC(sub_83BB6614);
PPC_FUNC_IMPL(__imp__sub_83BB6614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6618"))) PPC_WEAK_FUNC(sub_83BB6618);
PPC_FUNC_IMPL(__imp__sub_83BB6618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16776
	ctx.r3.s64 = ctx.r11.s64 + -16776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6624"))) PPC_WEAK_FUNC(sub_83BB6624);
PPC_FUNC_IMPL(__imp__sub_83BB6624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6628"))) PPC_WEAK_FUNC(sub_83BB6628);
PPC_FUNC_IMPL(__imp__sub_83BB6628) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,1256
	ctx.r3.s64 = ctx.r11.s64 + 1256;
	// bl 0x83523120
	ctx.lr = 0x83BB6640;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-16768
	ctx.r3.s64 = ctx.r10.s64 + -16768;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB664C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB665C"))) PPC_WEAK_FUNC(sub_83BB665C);
PPC_FUNC_IMPL(__imp__sub_83BB665C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6660"))) PPC_WEAK_FUNC(sub_83BB6660);
PPC_FUNC_IMPL(__imp__sub_83BB6660) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,1272
	ctx.r7.s64 = ctx.r8.s64 + 1272;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,1272(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1272);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,1272(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1272, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB6688"))) PPC_WEAK_FUNC(sub_83BB6688);
PPC_FUNC_IMPL(__imp__sub_83BB6688) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-16232
	ctx.r6.s64 = ctx.r7.s64 + -16232;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-16304(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -16304);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,1272(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1272);
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
	// std r9,-16232(r7)
	PPC_STORE_U64(ctx.r7.u32 + -16232, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB66D0"))) PPC_WEAK_FUNC(sub_83BB66D0);
PPC_FUNC_IMPL(__imp__sub_83BB66D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16752
	ctx.r3.s64 = ctx.r11.s64 + -16752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB66DC"))) PPC_WEAK_FUNC(sub_83BB66DC);
PPC_FUNC_IMPL(__imp__sub_83BB66DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB66E0"))) PPC_WEAK_FUNC(sub_83BB66E0);
PPC_FUNC_IMPL(__imp__sub_83BB66E0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,1280
	ctx.r3.s64 = ctx.r11.s64 + 1280;
	// bl 0x8259af80
	ctx.lr = 0x83BB66F8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-16736
	ctx.r3.s64 = ctx.r10.s64 + -16736;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB6704;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB6714"))) PPC_WEAK_FUNC(sub_83BB6714);
PPC_FUNC_IMPL(__imp__sub_83BB6714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6718"))) PPC_WEAK_FUNC(sub_83BB6718);
PPC_FUNC_IMPL(__imp__sub_83BB6718) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,1260
	ctx.r11.s64 = ctx.r8.s64 + 1260;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-16256(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16256);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-16744
	ctx.r3.s64 = ctx.r6.s64 + -16744;
	// stw r10,1260(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1260, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6748"))) PPC_WEAK_FUNC(sub_83BB6748);
PPC_FUNC_IMPL(__imp__sub_83BB6748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16728
	ctx.r3.s64 = ctx.r11.s64 + -16728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6754"))) PPC_WEAK_FUNC(sub_83BB6754);
PPC_FUNC_IMPL(__imp__sub_83BB6754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6758"))) PPC_WEAK_FUNC(sub_83BB6758);
PPC_FUNC_IMPL(__imp__sub_83BB6758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16720
	ctx.r3.s64 = ctx.r11.s64 + -16720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6764"))) PPC_WEAK_FUNC(sub_83BB6764);
PPC_FUNC_IMPL(__imp__sub_83BB6764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6768"))) PPC_WEAK_FUNC(sub_83BB6768);
PPC_FUNC_IMPL(__imp__sub_83BB6768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16712
	ctx.r3.s64 = ctx.r11.s64 + -16712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6774"))) PPC_WEAK_FUNC(sub_83BB6774);
PPC_FUNC_IMPL(__imp__sub_83BB6774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6778"))) PPC_WEAK_FUNC(sub_83BB6778);
PPC_FUNC_IMPL(__imp__sub_83BB6778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16704
	ctx.r3.s64 = ctx.r11.s64 + -16704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6784"))) PPC_WEAK_FUNC(sub_83BB6784);
PPC_FUNC_IMPL(__imp__sub_83BB6784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6788"))) PPC_WEAK_FUNC(sub_83BB6788);
PPC_FUNC_IMPL(__imp__sub_83BB6788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16696
	ctx.r3.s64 = ctx.r11.s64 + -16696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6794"))) PPC_WEAK_FUNC(sub_83BB6794);
PPC_FUNC_IMPL(__imp__sub_83BB6794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6798"))) PPC_WEAK_FUNC(sub_83BB6798);
PPC_FUNC_IMPL(__imp__sub_83BB6798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16688
	ctx.r3.s64 = ctx.r11.s64 + -16688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB67A4"))) PPC_WEAK_FUNC(sub_83BB67A4);
PPC_FUNC_IMPL(__imp__sub_83BB67A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB67A8"))) PPC_WEAK_FUNC(sub_83BB67A8);
PPC_FUNC_IMPL(__imp__sub_83BB67A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16680
	ctx.r3.s64 = ctx.r11.s64 + -16680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB67B4"))) PPC_WEAK_FUNC(sub_83BB67B4);
PPC_FUNC_IMPL(__imp__sub_83BB67B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB67B8"))) PPC_WEAK_FUNC(sub_83BB67B8);
PPC_FUNC_IMPL(__imp__sub_83BB67B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16672
	ctx.r3.s64 = ctx.r11.s64 + -16672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB67C4"))) PPC_WEAK_FUNC(sub_83BB67C4);
PPC_FUNC_IMPL(__imp__sub_83BB67C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB67C8"))) PPC_WEAK_FUNC(sub_83BB67C8);
PPC_FUNC_IMPL(__imp__sub_83BB67C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16664
	ctx.r3.s64 = ctx.r11.s64 + -16664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB67D4"))) PPC_WEAK_FUNC(sub_83BB67D4);
PPC_FUNC_IMPL(__imp__sub_83BB67D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB67D8"))) PPC_WEAK_FUNC(sub_83BB67D8);
PPC_FUNC_IMPL(__imp__sub_83BB67D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16656
	ctx.r3.s64 = ctx.r11.s64 + -16656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB67E4"))) PPC_WEAK_FUNC(sub_83BB67E4);
PPC_FUNC_IMPL(__imp__sub_83BB67E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB67E8"))) PPC_WEAK_FUNC(sub_83BB67E8);
PPC_FUNC_IMPL(__imp__sub_83BB67E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16648
	ctx.r3.s64 = ctx.r11.s64 + -16648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB67F4"))) PPC_WEAK_FUNC(sub_83BB67F4);
PPC_FUNC_IMPL(__imp__sub_83BB67F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB67F8"))) PPC_WEAK_FUNC(sub_83BB67F8);
PPC_FUNC_IMPL(__imp__sub_83BB67F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16640
	ctx.r3.s64 = ctx.r11.s64 + -16640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6804"))) PPC_WEAK_FUNC(sub_83BB6804);
PPC_FUNC_IMPL(__imp__sub_83BB6804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6808"))) PPC_WEAK_FUNC(sub_83BB6808);
PPC_FUNC_IMPL(__imp__sub_83BB6808) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,1624
	ctx.r3.s64 = ctx.r11.s64 + 1624;
	// bl 0x83523120
	ctx.lr = 0x83BB6820;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-16632
	ctx.r3.s64 = ctx.r10.s64 + -16632;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB682C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB683C"))) PPC_WEAK_FUNC(sub_83BB683C);
PPC_FUNC_IMPL(__imp__sub_83BB683C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6840"))) PPC_WEAK_FUNC(sub_83BB6840);
PPC_FUNC_IMPL(__imp__sub_83BB6840) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,1640
	ctx.r7.s64 = ctx.r8.s64 + 1640;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,1640(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1640);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,1640(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1640, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB6868"))) PPC_WEAK_FUNC(sub_83BB6868);
PPC_FUNC_IMPL(__imp__sub_83BB6868) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-16096
	ctx.r6.s64 = ctx.r7.s64 + -16096;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-16168(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -16168);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,1640(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1640);
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
	// std r9,-16096(r7)
	PPC_STORE_U64(ctx.r7.u32 + -16096, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB68B0"))) PPC_WEAK_FUNC(sub_83BB68B0);
PPC_FUNC_IMPL(__imp__sub_83BB68B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16616
	ctx.r3.s64 = ctx.r11.s64 + -16616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB68BC"))) PPC_WEAK_FUNC(sub_83BB68BC);
PPC_FUNC_IMPL(__imp__sub_83BB68BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB68C0"))) PPC_WEAK_FUNC(sub_83BB68C0);
PPC_FUNC_IMPL(__imp__sub_83BB68C0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,1648
	ctx.r3.s64 = ctx.r11.s64 + 1648;
	// bl 0x8259af80
	ctx.lr = 0x83BB68D8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-16600
	ctx.r3.s64 = ctx.r10.s64 + -16600;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB68E4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB68F4"))) PPC_WEAK_FUNC(sub_83BB68F4);
PPC_FUNC_IMPL(__imp__sub_83BB68F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB68F8"))) PPC_WEAK_FUNC(sub_83BB68F8);
PPC_FUNC_IMPL(__imp__sub_83BB68F8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,1628
	ctx.r11.s64 = ctx.r8.s64 + 1628;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-16120(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16120);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-16608
	ctx.r3.s64 = ctx.r6.s64 + -16608;
	// stw r10,1628(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1628, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6928"))) PPC_WEAK_FUNC(sub_83BB6928);
PPC_FUNC_IMPL(__imp__sub_83BB6928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16592
	ctx.r3.s64 = ctx.r11.s64 + -16592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6934"))) PPC_WEAK_FUNC(sub_83BB6934);
PPC_FUNC_IMPL(__imp__sub_83BB6934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6938"))) PPC_WEAK_FUNC(sub_83BB6938);
PPC_FUNC_IMPL(__imp__sub_83BB6938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16584
	ctx.r3.s64 = ctx.r11.s64 + -16584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6944"))) PPC_WEAK_FUNC(sub_83BB6944);
PPC_FUNC_IMPL(__imp__sub_83BB6944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6948"))) PPC_WEAK_FUNC(sub_83BB6948);
PPC_FUNC_IMPL(__imp__sub_83BB6948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16576
	ctx.r3.s64 = ctx.r11.s64 + -16576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6954"))) PPC_WEAK_FUNC(sub_83BB6954);
PPC_FUNC_IMPL(__imp__sub_83BB6954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6958"))) PPC_WEAK_FUNC(sub_83BB6958);
PPC_FUNC_IMPL(__imp__sub_83BB6958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16568
	ctx.r3.s64 = ctx.r11.s64 + -16568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6964"))) PPC_WEAK_FUNC(sub_83BB6964);
PPC_FUNC_IMPL(__imp__sub_83BB6964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6968"))) PPC_WEAK_FUNC(sub_83BB6968);
PPC_FUNC_IMPL(__imp__sub_83BB6968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16560
	ctx.r3.s64 = ctx.r11.s64 + -16560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6974"))) PPC_WEAK_FUNC(sub_83BB6974);
PPC_FUNC_IMPL(__imp__sub_83BB6974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6978"))) PPC_WEAK_FUNC(sub_83BB6978);
PPC_FUNC_IMPL(__imp__sub_83BB6978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16552
	ctx.r3.s64 = ctx.r11.s64 + -16552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6984"))) PPC_WEAK_FUNC(sub_83BB6984);
PPC_FUNC_IMPL(__imp__sub_83BB6984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6988"))) PPC_WEAK_FUNC(sub_83BB6988);
PPC_FUNC_IMPL(__imp__sub_83BB6988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16544
	ctx.r3.s64 = ctx.r11.s64 + -16544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6994"))) PPC_WEAK_FUNC(sub_83BB6994);
PPC_FUNC_IMPL(__imp__sub_83BB6994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6998"))) PPC_WEAK_FUNC(sub_83BB6998);
PPC_FUNC_IMPL(__imp__sub_83BB6998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16536
	ctx.r3.s64 = ctx.r11.s64 + -16536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB69A4"))) PPC_WEAK_FUNC(sub_83BB69A4);
PPC_FUNC_IMPL(__imp__sub_83BB69A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB69A8"))) PPC_WEAK_FUNC(sub_83BB69A8);
PPC_FUNC_IMPL(__imp__sub_83BB69A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16528
	ctx.r3.s64 = ctx.r11.s64 + -16528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB69B4"))) PPC_WEAK_FUNC(sub_83BB69B4);
PPC_FUNC_IMPL(__imp__sub_83BB69B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB69B8"))) PPC_WEAK_FUNC(sub_83BB69B8);
PPC_FUNC_IMPL(__imp__sub_83BB69B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16520
	ctx.r3.s64 = ctx.r11.s64 + -16520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB69C4"))) PPC_WEAK_FUNC(sub_83BB69C4);
PPC_FUNC_IMPL(__imp__sub_83BB69C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB69C8"))) PPC_WEAK_FUNC(sub_83BB69C8);
PPC_FUNC_IMPL(__imp__sub_83BB69C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16512
	ctx.r3.s64 = ctx.r11.s64 + -16512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB69D4"))) PPC_WEAK_FUNC(sub_83BB69D4);
PPC_FUNC_IMPL(__imp__sub_83BB69D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB69D8"))) PPC_WEAK_FUNC(sub_83BB69D8);
PPC_FUNC_IMPL(__imp__sub_83BB69D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16504
	ctx.r3.s64 = ctx.r11.s64 + -16504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB69E4"))) PPC_WEAK_FUNC(sub_83BB69E4);
PPC_FUNC_IMPL(__imp__sub_83BB69E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB69E8"))) PPC_WEAK_FUNC(sub_83BB69E8);
PPC_FUNC_IMPL(__imp__sub_83BB69E8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,1992
	ctx.r3.s64 = ctx.r11.s64 + 1992;
	// bl 0x83523120
	ctx.lr = 0x83BB6A00;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-16496
	ctx.r3.s64 = ctx.r10.s64 + -16496;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB6A0C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB6A1C"))) PPC_WEAK_FUNC(sub_83BB6A1C);
PPC_FUNC_IMPL(__imp__sub_83BB6A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6A20"))) PPC_WEAK_FUNC(sub_83BB6A20);
PPC_FUNC_IMPL(__imp__sub_83BB6A20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,2008
	ctx.r7.s64 = ctx.r8.s64 + 2008;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,2008(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2008);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,2008(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2008, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB6A48"))) PPC_WEAK_FUNC(sub_83BB6A48);
PPC_FUNC_IMPL(__imp__sub_83BB6A48) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-15948
	ctx.r6.s64 = ctx.r7.s64 + -15948;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-16020(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -16020);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,2008(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2008);
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
	// std r9,-15948(r7)
	PPC_STORE_U64(ctx.r7.u32 + -15948, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB6A90"))) PPC_WEAK_FUNC(sub_83BB6A90);
PPC_FUNC_IMPL(__imp__sub_83BB6A90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16480
	ctx.r3.s64 = ctx.r11.s64 + -16480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6A9C"))) PPC_WEAK_FUNC(sub_83BB6A9C);
PPC_FUNC_IMPL(__imp__sub_83BB6A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6AA0"))) PPC_WEAK_FUNC(sub_83BB6AA0);
PPC_FUNC_IMPL(__imp__sub_83BB6AA0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,2016
	ctx.r3.s64 = ctx.r11.s64 + 2016;
	// bl 0x8259af80
	ctx.lr = 0x83BB6AB8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-16464
	ctx.r3.s64 = ctx.r10.s64 + -16464;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB6AC4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB6AD4"))) PPC_WEAK_FUNC(sub_83BB6AD4);
PPC_FUNC_IMPL(__imp__sub_83BB6AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6AD8"))) PPC_WEAK_FUNC(sub_83BB6AD8);
PPC_FUNC_IMPL(__imp__sub_83BB6AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,1996
	ctx.r11.s64 = ctx.r8.s64 + 1996;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-15972(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15972);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-16472
	ctx.r3.s64 = ctx.r6.s64 + -16472;
	// stw r10,1996(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1996, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6B08"))) PPC_WEAK_FUNC(sub_83BB6B08);
PPC_FUNC_IMPL(__imp__sub_83BB6B08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16456
	ctx.r3.s64 = ctx.r11.s64 + -16456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6B14"))) PPC_WEAK_FUNC(sub_83BB6B14);
PPC_FUNC_IMPL(__imp__sub_83BB6B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6B18"))) PPC_WEAK_FUNC(sub_83BB6B18);
PPC_FUNC_IMPL(__imp__sub_83BB6B18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16448
	ctx.r3.s64 = ctx.r11.s64 + -16448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6B24"))) PPC_WEAK_FUNC(sub_83BB6B24);
PPC_FUNC_IMPL(__imp__sub_83BB6B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6B28"))) PPC_WEAK_FUNC(sub_83BB6B28);
PPC_FUNC_IMPL(__imp__sub_83BB6B28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16440
	ctx.r3.s64 = ctx.r11.s64 + -16440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6B34"))) PPC_WEAK_FUNC(sub_83BB6B34);
PPC_FUNC_IMPL(__imp__sub_83BB6B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6B38"))) PPC_WEAK_FUNC(sub_83BB6B38);
PPC_FUNC_IMPL(__imp__sub_83BB6B38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16432
	ctx.r3.s64 = ctx.r11.s64 + -16432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6B44"))) PPC_WEAK_FUNC(sub_83BB6B44);
PPC_FUNC_IMPL(__imp__sub_83BB6B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6B48"))) PPC_WEAK_FUNC(sub_83BB6B48);
PPC_FUNC_IMPL(__imp__sub_83BB6B48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16424
	ctx.r3.s64 = ctx.r11.s64 + -16424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6B54"))) PPC_WEAK_FUNC(sub_83BB6B54);
PPC_FUNC_IMPL(__imp__sub_83BB6B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6B58"))) PPC_WEAK_FUNC(sub_83BB6B58);
PPC_FUNC_IMPL(__imp__sub_83BB6B58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16416
	ctx.r3.s64 = ctx.r11.s64 + -16416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6B64"))) PPC_WEAK_FUNC(sub_83BB6B64);
PPC_FUNC_IMPL(__imp__sub_83BB6B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6B68"))) PPC_WEAK_FUNC(sub_83BB6B68);
PPC_FUNC_IMPL(__imp__sub_83BB6B68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16408
	ctx.r3.s64 = ctx.r11.s64 + -16408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6B74"))) PPC_WEAK_FUNC(sub_83BB6B74);
PPC_FUNC_IMPL(__imp__sub_83BB6B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6B78"))) PPC_WEAK_FUNC(sub_83BB6B78);
PPC_FUNC_IMPL(__imp__sub_83BB6B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16400
	ctx.r3.s64 = ctx.r11.s64 + -16400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6B84"))) PPC_WEAK_FUNC(sub_83BB6B84);
PPC_FUNC_IMPL(__imp__sub_83BB6B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6B88"))) PPC_WEAK_FUNC(sub_83BB6B88);
PPC_FUNC_IMPL(__imp__sub_83BB6B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16392
	ctx.r3.s64 = ctx.r11.s64 + -16392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6B94"))) PPC_WEAK_FUNC(sub_83BB6B94);
PPC_FUNC_IMPL(__imp__sub_83BB6B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6B98"))) PPC_WEAK_FUNC(sub_83BB6B98);
PPC_FUNC_IMPL(__imp__sub_83BB6B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16384
	ctx.r3.s64 = ctx.r11.s64 + -16384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6BA4"))) PPC_WEAK_FUNC(sub_83BB6BA4);
PPC_FUNC_IMPL(__imp__sub_83BB6BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6BA8"))) PPC_WEAK_FUNC(sub_83BB6BA8);
PPC_FUNC_IMPL(__imp__sub_83BB6BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16376
	ctx.r3.s64 = ctx.r11.s64 + -16376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6BB4"))) PPC_WEAK_FUNC(sub_83BB6BB4);
PPC_FUNC_IMPL(__imp__sub_83BB6BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6BB8"))) PPC_WEAK_FUNC(sub_83BB6BB8);
PPC_FUNC_IMPL(__imp__sub_83BB6BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16368
	ctx.r3.s64 = ctx.r11.s64 + -16368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6BC4"))) PPC_WEAK_FUNC(sub_83BB6BC4);
PPC_FUNC_IMPL(__imp__sub_83BB6BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6BC8"))) PPC_WEAK_FUNC(sub_83BB6BC8);
PPC_FUNC_IMPL(__imp__sub_83BB6BC8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,2360
	ctx.r3.s64 = ctx.r11.s64 + 2360;
	// bl 0x83523120
	ctx.lr = 0x83BB6BE0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-16360
	ctx.r3.s64 = ctx.r10.s64 + -16360;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB6BEC;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB6BFC"))) PPC_WEAK_FUNC(sub_83BB6BFC);
PPC_FUNC_IMPL(__imp__sub_83BB6BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6C00"))) PPC_WEAK_FUNC(sub_83BB6C00);
PPC_FUNC_IMPL(__imp__sub_83BB6C00) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,2376
	ctx.r7.s64 = ctx.r8.s64 + 2376;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,2376(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2376);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,2376(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2376, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB6C28"))) PPC_WEAK_FUNC(sub_83BB6C28);
PPC_FUNC_IMPL(__imp__sub_83BB6C28) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-15812
	ctx.r6.s64 = ctx.r7.s64 + -15812;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-15884(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -15884);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,2376(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2376);
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
	// std r9,-15812(r7)
	PPC_STORE_U64(ctx.r7.u32 + -15812, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB6C70"))) PPC_WEAK_FUNC(sub_83BB6C70);
PPC_FUNC_IMPL(__imp__sub_83BB6C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16344
	ctx.r3.s64 = ctx.r11.s64 + -16344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6C7C"))) PPC_WEAK_FUNC(sub_83BB6C7C);
PPC_FUNC_IMPL(__imp__sub_83BB6C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6C80"))) PPC_WEAK_FUNC(sub_83BB6C80);
PPC_FUNC_IMPL(__imp__sub_83BB6C80) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,2384
	ctx.r3.s64 = ctx.r11.s64 + 2384;
	// bl 0x8259af80
	ctx.lr = 0x83BB6C98;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-16328
	ctx.r3.s64 = ctx.r10.s64 + -16328;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB6CA4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB6CB4"))) PPC_WEAK_FUNC(sub_83BB6CB4);
PPC_FUNC_IMPL(__imp__sub_83BB6CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6CB8"))) PPC_WEAK_FUNC(sub_83BB6CB8);
PPC_FUNC_IMPL(__imp__sub_83BB6CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,2364
	ctx.r11.s64 = ctx.r8.s64 + 2364;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-15836(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15836);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-16336
	ctx.r3.s64 = ctx.r6.s64 + -16336;
	// stw r10,2364(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2364, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6CE8"))) PPC_WEAK_FUNC(sub_83BB6CE8);
PPC_FUNC_IMPL(__imp__sub_83BB6CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16320
	ctx.r3.s64 = ctx.r11.s64 + -16320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6CF4"))) PPC_WEAK_FUNC(sub_83BB6CF4);
PPC_FUNC_IMPL(__imp__sub_83BB6CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6CF8"))) PPC_WEAK_FUNC(sub_83BB6CF8);
PPC_FUNC_IMPL(__imp__sub_83BB6CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16312
	ctx.r3.s64 = ctx.r11.s64 + -16312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6D04"))) PPC_WEAK_FUNC(sub_83BB6D04);
PPC_FUNC_IMPL(__imp__sub_83BB6D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6D08"))) PPC_WEAK_FUNC(sub_83BB6D08);
PPC_FUNC_IMPL(__imp__sub_83BB6D08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16304
	ctx.r3.s64 = ctx.r11.s64 + -16304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6D14"))) PPC_WEAK_FUNC(sub_83BB6D14);
PPC_FUNC_IMPL(__imp__sub_83BB6D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6D18"))) PPC_WEAK_FUNC(sub_83BB6D18);
PPC_FUNC_IMPL(__imp__sub_83BB6D18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16296
	ctx.r3.s64 = ctx.r11.s64 + -16296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6D24"))) PPC_WEAK_FUNC(sub_83BB6D24);
PPC_FUNC_IMPL(__imp__sub_83BB6D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6D28"))) PPC_WEAK_FUNC(sub_83BB6D28);
PPC_FUNC_IMPL(__imp__sub_83BB6D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16288
	ctx.r3.s64 = ctx.r11.s64 + -16288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6D34"))) PPC_WEAK_FUNC(sub_83BB6D34);
PPC_FUNC_IMPL(__imp__sub_83BB6D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6D38"))) PPC_WEAK_FUNC(sub_83BB6D38);
PPC_FUNC_IMPL(__imp__sub_83BB6D38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16280
	ctx.r3.s64 = ctx.r11.s64 + -16280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6D44"))) PPC_WEAK_FUNC(sub_83BB6D44);
PPC_FUNC_IMPL(__imp__sub_83BB6D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6D48"))) PPC_WEAK_FUNC(sub_83BB6D48);
PPC_FUNC_IMPL(__imp__sub_83BB6D48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16272
	ctx.r3.s64 = ctx.r11.s64 + -16272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6D54"))) PPC_WEAK_FUNC(sub_83BB6D54);
PPC_FUNC_IMPL(__imp__sub_83BB6D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6D58"))) PPC_WEAK_FUNC(sub_83BB6D58);
PPC_FUNC_IMPL(__imp__sub_83BB6D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16264
	ctx.r3.s64 = ctx.r11.s64 + -16264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6D64"))) PPC_WEAK_FUNC(sub_83BB6D64);
PPC_FUNC_IMPL(__imp__sub_83BB6D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6D68"))) PPC_WEAK_FUNC(sub_83BB6D68);
PPC_FUNC_IMPL(__imp__sub_83BB6D68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16256
	ctx.r3.s64 = ctx.r11.s64 + -16256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6D74"))) PPC_WEAK_FUNC(sub_83BB6D74);
PPC_FUNC_IMPL(__imp__sub_83BB6D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6D78"))) PPC_WEAK_FUNC(sub_83BB6D78);
PPC_FUNC_IMPL(__imp__sub_83BB6D78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16248
	ctx.r3.s64 = ctx.r11.s64 + -16248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6D84"))) PPC_WEAK_FUNC(sub_83BB6D84);
PPC_FUNC_IMPL(__imp__sub_83BB6D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6D88"))) PPC_WEAK_FUNC(sub_83BB6D88);
PPC_FUNC_IMPL(__imp__sub_83BB6D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16240
	ctx.r3.s64 = ctx.r11.s64 + -16240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6D94"))) PPC_WEAK_FUNC(sub_83BB6D94);
PPC_FUNC_IMPL(__imp__sub_83BB6D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6D98"))) PPC_WEAK_FUNC(sub_83BB6D98);
PPC_FUNC_IMPL(__imp__sub_83BB6D98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16232
	ctx.r3.s64 = ctx.r11.s64 + -16232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6DA4"))) PPC_WEAK_FUNC(sub_83BB6DA4);
PPC_FUNC_IMPL(__imp__sub_83BB6DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6DA8"))) PPC_WEAK_FUNC(sub_83BB6DA8);
PPC_FUNC_IMPL(__imp__sub_83BB6DA8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,2728
	ctx.r3.s64 = ctx.r11.s64 + 2728;
	// bl 0x83523120
	ctx.lr = 0x83BB6DC0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-16224
	ctx.r3.s64 = ctx.r10.s64 + -16224;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB6DCC;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB6DDC"))) PPC_WEAK_FUNC(sub_83BB6DDC);
PPC_FUNC_IMPL(__imp__sub_83BB6DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6DE0"))) PPC_WEAK_FUNC(sub_83BB6DE0);
PPC_FUNC_IMPL(__imp__sub_83BB6DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,2744
	ctx.r7.s64 = ctx.r8.s64 + 2744;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,2744(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2744);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,2744(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2744, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB6E08"))) PPC_WEAK_FUNC(sub_83BB6E08);
PPC_FUNC_IMPL(__imp__sub_83BB6E08) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-15684
	ctx.r6.s64 = ctx.r7.s64 + -15684;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-15756(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -15756);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,2744(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2744);
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
	// std r9,-15684(r7)
	PPC_STORE_U64(ctx.r7.u32 + -15684, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB6E50"))) PPC_WEAK_FUNC(sub_83BB6E50);
PPC_FUNC_IMPL(__imp__sub_83BB6E50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16208
	ctx.r3.s64 = ctx.r11.s64 + -16208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6E5C"))) PPC_WEAK_FUNC(sub_83BB6E5C);
PPC_FUNC_IMPL(__imp__sub_83BB6E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6E60"))) PPC_WEAK_FUNC(sub_83BB6E60);
PPC_FUNC_IMPL(__imp__sub_83BB6E60) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,2752
	ctx.r3.s64 = ctx.r11.s64 + 2752;
	// bl 0x8259af80
	ctx.lr = 0x83BB6E78;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-16192
	ctx.r3.s64 = ctx.r10.s64 + -16192;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB6E84;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB6E94"))) PPC_WEAK_FUNC(sub_83BB6E94);
PPC_FUNC_IMPL(__imp__sub_83BB6E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6E98"))) PPC_WEAK_FUNC(sub_83BB6E98);
PPC_FUNC_IMPL(__imp__sub_83BB6E98) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,2732
	ctx.r11.s64 = ctx.r8.s64 + 2732;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-15708(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15708);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-16200
	ctx.r3.s64 = ctx.r6.s64 + -16200;
	// stw r10,2732(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2732, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6EC8"))) PPC_WEAK_FUNC(sub_83BB6EC8);
PPC_FUNC_IMPL(__imp__sub_83BB6EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16184
	ctx.r3.s64 = ctx.r11.s64 + -16184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6ED4"))) PPC_WEAK_FUNC(sub_83BB6ED4);
PPC_FUNC_IMPL(__imp__sub_83BB6ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6ED8"))) PPC_WEAK_FUNC(sub_83BB6ED8);
PPC_FUNC_IMPL(__imp__sub_83BB6ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16176
	ctx.r3.s64 = ctx.r11.s64 + -16176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6EE4"))) PPC_WEAK_FUNC(sub_83BB6EE4);
PPC_FUNC_IMPL(__imp__sub_83BB6EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6EE8"))) PPC_WEAK_FUNC(sub_83BB6EE8);
PPC_FUNC_IMPL(__imp__sub_83BB6EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16168
	ctx.r3.s64 = ctx.r11.s64 + -16168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6EF4"))) PPC_WEAK_FUNC(sub_83BB6EF4);
PPC_FUNC_IMPL(__imp__sub_83BB6EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6EF8"))) PPC_WEAK_FUNC(sub_83BB6EF8);
PPC_FUNC_IMPL(__imp__sub_83BB6EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16160
	ctx.r3.s64 = ctx.r11.s64 + -16160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6F04"))) PPC_WEAK_FUNC(sub_83BB6F04);
PPC_FUNC_IMPL(__imp__sub_83BB6F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6F08"))) PPC_WEAK_FUNC(sub_83BB6F08);
PPC_FUNC_IMPL(__imp__sub_83BB6F08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16152
	ctx.r3.s64 = ctx.r11.s64 + -16152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6F14"))) PPC_WEAK_FUNC(sub_83BB6F14);
PPC_FUNC_IMPL(__imp__sub_83BB6F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6F18"))) PPC_WEAK_FUNC(sub_83BB6F18);
PPC_FUNC_IMPL(__imp__sub_83BB6F18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16144
	ctx.r3.s64 = ctx.r11.s64 + -16144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6F24"))) PPC_WEAK_FUNC(sub_83BB6F24);
PPC_FUNC_IMPL(__imp__sub_83BB6F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6F28"))) PPC_WEAK_FUNC(sub_83BB6F28);
PPC_FUNC_IMPL(__imp__sub_83BB6F28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16136
	ctx.r3.s64 = ctx.r11.s64 + -16136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6F34"))) PPC_WEAK_FUNC(sub_83BB6F34);
PPC_FUNC_IMPL(__imp__sub_83BB6F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6F38"))) PPC_WEAK_FUNC(sub_83BB6F38);
PPC_FUNC_IMPL(__imp__sub_83BB6F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16128
	ctx.r3.s64 = ctx.r11.s64 + -16128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6F44"))) PPC_WEAK_FUNC(sub_83BB6F44);
PPC_FUNC_IMPL(__imp__sub_83BB6F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6F48"))) PPC_WEAK_FUNC(sub_83BB6F48);
PPC_FUNC_IMPL(__imp__sub_83BB6F48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16120
	ctx.r3.s64 = ctx.r11.s64 + -16120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6F54"))) PPC_WEAK_FUNC(sub_83BB6F54);
PPC_FUNC_IMPL(__imp__sub_83BB6F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6F58"))) PPC_WEAK_FUNC(sub_83BB6F58);
PPC_FUNC_IMPL(__imp__sub_83BB6F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16112
	ctx.r3.s64 = ctx.r11.s64 + -16112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6F64"))) PPC_WEAK_FUNC(sub_83BB6F64);
PPC_FUNC_IMPL(__imp__sub_83BB6F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6F68"))) PPC_WEAK_FUNC(sub_83BB6F68);
PPC_FUNC_IMPL(__imp__sub_83BB6F68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16104
	ctx.r3.s64 = ctx.r11.s64 + -16104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6F74"))) PPC_WEAK_FUNC(sub_83BB6F74);
PPC_FUNC_IMPL(__imp__sub_83BB6F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6F78"))) PPC_WEAK_FUNC(sub_83BB6F78);
PPC_FUNC_IMPL(__imp__sub_83BB6F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16096
	ctx.r3.s64 = ctx.r11.s64 + -16096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB6F84"))) PPC_WEAK_FUNC(sub_83BB6F84);
PPC_FUNC_IMPL(__imp__sub_83BB6F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6F88"))) PPC_WEAK_FUNC(sub_83BB6F88);
PPC_FUNC_IMPL(__imp__sub_83BB6F88) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,3096
	ctx.r3.s64 = ctx.r11.s64 + 3096;
	// bl 0x83523120
	ctx.lr = 0x83BB6FA0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-16088
	ctx.r3.s64 = ctx.r10.s64 + -16088;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB6FAC;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB6FBC"))) PPC_WEAK_FUNC(sub_83BB6FBC);
PPC_FUNC_IMPL(__imp__sub_83BB6FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB6FC0"))) PPC_WEAK_FUNC(sub_83BB6FC0);
PPC_FUNC_IMPL(__imp__sub_83BB6FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,3112
	ctx.r7.s64 = ctx.r8.s64 + 3112;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,3112(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3112);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,3112(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3112, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB6FE8"))) PPC_WEAK_FUNC(sub_83BB6FE8);
PPC_FUNC_IMPL(__imp__sub_83BB6FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,-15540
	ctx.r6.s64 = ctx.r7.s64 + -15540;
	// lis r3,-31762
	ctx.r3.s64 = -2081554432;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-15612(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -15612);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,3112(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3112);
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
	// std r9,-15540(r7)
	PPC_STORE_U64(ctx.r7.u32 + -15540, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB7030"))) PPC_WEAK_FUNC(sub_83BB7030);
PPC_FUNC_IMPL(__imp__sub_83BB7030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16072
	ctx.r3.s64 = ctx.r11.s64 + -16072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB703C"))) PPC_WEAK_FUNC(sub_83BB703C);
PPC_FUNC_IMPL(__imp__sub_83BB703C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB7040"))) PPC_WEAK_FUNC(sub_83BB7040);
PPC_FUNC_IMPL(__imp__sub_83BB7040) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r11,3120
	ctx.r3.s64 = ctx.r11.s64 + 3120;
	// bl 0x8259af80
	ctx.lr = 0x83BB7058;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-16056
	ctx.r3.s64 = ctx.r10.s64 + -16056;
	// bl 0x831cdcc8
	ctx.lr = 0x83BB7064;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BB7074"))) PPC_WEAK_FUNC(sub_83BB7074);
PPC_FUNC_IMPL(__imp__sub_83BB7074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BB7078"))) PPC_WEAK_FUNC(sub_83BB7078);
PPC_FUNC_IMPL(__imp__sub_83BB7078) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31762
	ctx.r8.s64 = -2081554432;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,3100
	ctx.r11.s64 = ctx.r8.s64 + 3100;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-15564(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15564);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-16064
	ctx.r3.s64 = ctx.r6.s64 + -16064;
	// stw r10,3100(r8)
	PPC_STORE_U32(ctx.r8.u32 + 3100, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BB70A8"))) PPC_WEAK_FUNC(sub_83BB70A8);
PPC_FUNC_IMPL(__imp__sub_83BB70A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-16048
	ctx.r3.s64 = ctx.r11.s64 + -16048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

