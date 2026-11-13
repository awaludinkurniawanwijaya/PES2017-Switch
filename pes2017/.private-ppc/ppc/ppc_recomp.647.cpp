#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BD0288"))) PPC_WEAK_FUNC(sub_83BD0288);
PPC_FUNC_IMPL(__imp__sub_83BD0288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15824
	ctx.r3.s64 = ctx.r11.s64 + 15824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0294"))) PPC_WEAK_FUNC(sub_83BD0294);
PPC_FUNC_IMPL(__imp__sub_83BD0294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0298"))) PPC_WEAK_FUNC(sub_83BD0298);
PPC_FUNC_IMPL(__imp__sub_83BD0298) {
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
	// addi r3,r11,17776
	ctx.r3.s64 = ctx.r11.s64 + 17776;
	// bl 0x83523120
	ctx.lr = 0x83BD02B0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,15832
	ctx.r3.s64 = ctx.r10.s64 + 15832;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD02BC;
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

__attribute__((alias("__imp__sub_83BD02CC"))) PPC_WEAK_FUNC(sub_83BD02CC);
PPC_FUNC_IMPL(__imp__sub_83BD02CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD02D0"))) PPC_WEAK_FUNC(sub_83BD02D0);
PPC_FUNC_IMPL(__imp__sub_83BD02D0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,17792
	ctx.r7.s64 = ctx.r8.s64 + 17792;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,17792(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17792);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,17792(r8)
	PPC_STORE_U32(ctx.r8.u32 + 17792, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD02F8"))) PPC_WEAK_FUNC(sub_83BD02F8);
PPC_FUNC_IMPL(__imp__sub_83BD02F8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,20660
	ctx.r6.s64 = ctx.r7.s64 + 20660;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,20588(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 20588);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,17792(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 17792);
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
	// std r9,20660(r7)
	PPC_STORE_U64(ctx.r7.u32 + 20660, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD0340"))) PPC_WEAK_FUNC(sub_83BD0340);
PPC_FUNC_IMPL(__imp__sub_83BD0340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15848
	ctx.r3.s64 = ctx.r11.s64 + 15848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD034C"))) PPC_WEAK_FUNC(sub_83BD034C);
PPC_FUNC_IMPL(__imp__sub_83BD034C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0350"))) PPC_WEAK_FUNC(sub_83BD0350);
PPC_FUNC_IMPL(__imp__sub_83BD0350) {
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
	// addi r3,r11,17800
	ctx.r3.s64 = ctx.r11.s64 + 17800;
	// bl 0x8259af80
	ctx.lr = 0x83BD0368;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,15864
	ctx.r3.s64 = ctx.r10.s64 + 15864;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD0374;
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

__attribute__((alias("__imp__sub_83BD0384"))) PPC_WEAK_FUNC(sub_83BD0384);
PPC_FUNC_IMPL(__imp__sub_83BD0384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0388"))) PPC_WEAK_FUNC(sub_83BD0388);
PPC_FUNC_IMPL(__imp__sub_83BD0388) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,17780
	ctx.r11.s64 = ctx.r8.s64 + 17780;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,20636(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20636);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,15856
	ctx.r3.s64 = ctx.r6.s64 + 15856;
	// stw r10,17780(r8)
	PPC_STORE_U32(ctx.r8.u32 + 17780, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD03B8"))) PPC_WEAK_FUNC(sub_83BD03B8);
PPC_FUNC_IMPL(__imp__sub_83BD03B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15872
	ctx.r3.s64 = ctx.r11.s64 + 15872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD03C4"))) PPC_WEAK_FUNC(sub_83BD03C4);
PPC_FUNC_IMPL(__imp__sub_83BD03C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD03C8"))) PPC_WEAK_FUNC(sub_83BD03C8);
PPC_FUNC_IMPL(__imp__sub_83BD03C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15880
	ctx.r3.s64 = ctx.r11.s64 + 15880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD03D4"))) PPC_WEAK_FUNC(sub_83BD03D4);
PPC_FUNC_IMPL(__imp__sub_83BD03D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD03D8"))) PPC_WEAK_FUNC(sub_83BD03D8);
PPC_FUNC_IMPL(__imp__sub_83BD03D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15888
	ctx.r3.s64 = ctx.r11.s64 + 15888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD03E4"))) PPC_WEAK_FUNC(sub_83BD03E4);
PPC_FUNC_IMPL(__imp__sub_83BD03E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD03E8"))) PPC_WEAK_FUNC(sub_83BD03E8);
PPC_FUNC_IMPL(__imp__sub_83BD03E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15896
	ctx.r3.s64 = ctx.r11.s64 + 15896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD03F4"))) PPC_WEAK_FUNC(sub_83BD03F4);
PPC_FUNC_IMPL(__imp__sub_83BD03F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD03F8"))) PPC_WEAK_FUNC(sub_83BD03F8);
PPC_FUNC_IMPL(__imp__sub_83BD03F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15904
	ctx.r3.s64 = ctx.r11.s64 + 15904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0404"))) PPC_WEAK_FUNC(sub_83BD0404);
PPC_FUNC_IMPL(__imp__sub_83BD0404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0408"))) PPC_WEAK_FUNC(sub_83BD0408);
PPC_FUNC_IMPL(__imp__sub_83BD0408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15912
	ctx.r3.s64 = ctx.r11.s64 + 15912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0414"))) PPC_WEAK_FUNC(sub_83BD0414);
PPC_FUNC_IMPL(__imp__sub_83BD0414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0418"))) PPC_WEAK_FUNC(sub_83BD0418);
PPC_FUNC_IMPL(__imp__sub_83BD0418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15920
	ctx.r3.s64 = ctx.r11.s64 + 15920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0424"))) PPC_WEAK_FUNC(sub_83BD0424);
PPC_FUNC_IMPL(__imp__sub_83BD0424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0428"))) PPC_WEAK_FUNC(sub_83BD0428);
PPC_FUNC_IMPL(__imp__sub_83BD0428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15928
	ctx.r3.s64 = ctx.r11.s64 + 15928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0434"))) PPC_WEAK_FUNC(sub_83BD0434);
PPC_FUNC_IMPL(__imp__sub_83BD0434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0438"))) PPC_WEAK_FUNC(sub_83BD0438);
PPC_FUNC_IMPL(__imp__sub_83BD0438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15936
	ctx.r3.s64 = ctx.r11.s64 + 15936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0444"))) PPC_WEAK_FUNC(sub_83BD0444);
PPC_FUNC_IMPL(__imp__sub_83BD0444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0448"))) PPC_WEAK_FUNC(sub_83BD0448);
PPC_FUNC_IMPL(__imp__sub_83BD0448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15944
	ctx.r3.s64 = ctx.r11.s64 + 15944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0454"))) PPC_WEAK_FUNC(sub_83BD0454);
PPC_FUNC_IMPL(__imp__sub_83BD0454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0458"))) PPC_WEAK_FUNC(sub_83BD0458);
PPC_FUNC_IMPL(__imp__sub_83BD0458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15952
	ctx.r3.s64 = ctx.r11.s64 + 15952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0464"))) PPC_WEAK_FUNC(sub_83BD0464);
PPC_FUNC_IMPL(__imp__sub_83BD0464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0468"))) PPC_WEAK_FUNC(sub_83BD0468);
PPC_FUNC_IMPL(__imp__sub_83BD0468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15960
	ctx.r3.s64 = ctx.r11.s64 + 15960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0474"))) PPC_WEAK_FUNC(sub_83BD0474);
PPC_FUNC_IMPL(__imp__sub_83BD0474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0478"))) PPC_WEAK_FUNC(sub_83BD0478);
PPC_FUNC_IMPL(__imp__sub_83BD0478) {
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
	// addi r3,r11,18148
	ctx.r3.s64 = ctx.r11.s64 + 18148;
	// bl 0x83523120
	ctx.lr = 0x83BD0490;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,15968
	ctx.r3.s64 = ctx.r10.s64 + 15968;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD049C;
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

__attribute__((alias("__imp__sub_83BD04AC"))) PPC_WEAK_FUNC(sub_83BD04AC);
PPC_FUNC_IMPL(__imp__sub_83BD04AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD04B0"))) PPC_WEAK_FUNC(sub_83BD04B0);
PPC_FUNC_IMPL(__imp__sub_83BD04B0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,18164
	ctx.r7.s64 = ctx.r8.s64 + 18164;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,18164(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18164);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,18164(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18164, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD04D8"))) PPC_WEAK_FUNC(sub_83BD04D8);
PPC_FUNC_IMPL(__imp__sub_83BD04D8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,20820
	ctx.r6.s64 = ctx.r7.s64 + 20820;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,20748(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 20748);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,18164(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18164);
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
	// std r9,20820(r7)
	PPC_STORE_U64(ctx.r7.u32 + 20820, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD0520"))) PPC_WEAK_FUNC(sub_83BD0520);
PPC_FUNC_IMPL(__imp__sub_83BD0520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,15984
	ctx.r3.s64 = ctx.r11.s64 + 15984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD052C"))) PPC_WEAK_FUNC(sub_83BD052C);
PPC_FUNC_IMPL(__imp__sub_83BD052C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0530"))) PPC_WEAK_FUNC(sub_83BD0530);
PPC_FUNC_IMPL(__imp__sub_83BD0530) {
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
	// addi r3,r11,18176
	ctx.r3.s64 = ctx.r11.s64 + 18176;
	// bl 0x8259af80
	ctx.lr = 0x83BD0548;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,16000
	ctx.r3.s64 = ctx.r10.s64 + 16000;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD0554;
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

__attribute__((alias("__imp__sub_83BD0564"))) PPC_WEAK_FUNC(sub_83BD0564);
PPC_FUNC_IMPL(__imp__sub_83BD0564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0568"))) PPC_WEAK_FUNC(sub_83BD0568);
PPC_FUNC_IMPL(__imp__sub_83BD0568) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,18152
	ctx.r11.s64 = ctx.r8.s64 + 18152;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,20796(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20796);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,15992
	ctx.r3.s64 = ctx.r6.s64 + 15992;
	// stw r10,18152(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18152, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0598"))) PPC_WEAK_FUNC(sub_83BD0598);
PPC_FUNC_IMPL(__imp__sub_83BD0598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16008
	ctx.r3.s64 = ctx.r11.s64 + 16008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD05A4"))) PPC_WEAK_FUNC(sub_83BD05A4);
PPC_FUNC_IMPL(__imp__sub_83BD05A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD05A8"))) PPC_WEAK_FUNC(sub_83BD05A8);
PPC_FUNC_IMPL(__imp__sub_83BD05A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16016
	ctx.r3.s64 = ctx.r11.s64 + 16016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD05B4"))) PPC_WEAK_FUNC(sub_83BD05B4);
PPC_FUNC_IMPL(__imp__sub_83BD05B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD05B8"))) PPC_WEAK_FUNC(sub_83BD05B8);
PPC_FUNC_IMPL(__imp__sub_83BD05B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16024
	ctx.r3.s64 = ctx.r11.s64 + 16024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD05C4"))) PPC_WEAK_FUNC(sub_83BD05C4);
PPC_FUNC_IMPL(__imp__sub_83BD05C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD05C8"))) PPC_WEAK_FUNC(sub_83BD05C8);
PPC_FUNC_IMPL(__imp__sub_83BD05C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16032
	ctx.r3.s64 = ctx.r11.s64 + 16032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD05D4"))) PPC_WEAK_FUNC(sub_83BD05D4);
PPC_FUNC_IMPL(__imp__sub_83BD05D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD05D8"))) PPC_WEAK_FUNC(sub_83BD05D8);
PPC_FUNC_IMPL(__imp__sub_83BD05D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16040
	ctx.r3.s64 = ctx.r11.s64 + 16040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD05E4"))) PPC_WEAK_FUNC(sub_83BD05E4);
PPC_FUNC_IMPL(__imp__sub_83BD05E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD05E8"))) PPC_WEAK_FUNC(sub_83BD05E8);
PPC_FUNC_IMPL(__imp__sub_83BD05E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16048
	ctx.r3.s64 = ctx.r11.s64 + 16048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD05F4"))) PPC_WEAK_FUNC(sub_83BD05F4);
PPC_FUNC_IMPL(__imp__sub_83BD05F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD05F8"))) PPC_WEAK_FUNC(sub_83BD05F8);
PPC_FUNC_IMPL(__imp__sub_83BD05F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16056
	ctx.r3.s64 = ctx.r11.s64 + 16056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0604"))) PPC_WEAK_FUNC(sub_83BD0604);
PPC_FUNC_IMPL(__imp__sub_83BD0604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0608"))) PPC_WEAK_FUNC(sub_83BD0608);
PPC_FUNC_IMPL(__imp__sub_83BD0608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16064
	ctx.r3.s64 = ctx.r11.s64 + 16064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0614"))) PPC_WEAK_FUNC(sub_83BD0614);
PPC_FUNC_IMPL(__imp__sub_83BD0614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0618"))) PPC_WEAK_FUNC(sub_83BD0618);
PPC_FUNC_IMPL(__imp__sub_83BD0618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16072
	ctx.r3.s64 = ctx.r11.s64 + 16072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0624"))) PPC_WEAK_FUNC(sub_83BD0624);
PPC_FUNC_IMPL(__imp__sub_83BD0624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0628"))) PPC_WEAK_FUNC(sub_83BD0628);
PPC_FUNC_IMPL(__imp__sub_83BD0628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16080
	ctx.r3.s64 = ctx.r11.s64 + 16080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0634"))) PPC_WEAK_FUNC(sub_83BD0634);
PPC_FUNC_IMPL(__imp__sub_83BD0634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0638"))) PPC_WEAK_FUNC(sub_83BD0638);
PPC_FUNC_IMPL(__imp__sub_83BD0638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16088
	ctx.r3.s64 = ctx.r11.s64 + 16088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0644"))) PPC_WEAK_FUNC(sub_83BD0644);
PPC_FUNC_IMPL(__imp__sub_83BD0644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0648"))) PPC_WEAK_FUNC(sub_83BD0648);
PPC_FUNC_IMPL(__imp__sub_83BD0648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16096
	ctx.r3.s64 = ctx.r11.s64 + 16096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0654"))) PPC_WEAK_FUNC(sub_83BD0654);
PPC_FUNC_IMPL(__imp__sub_83BD0654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0658"))) PPC_WEAK_FUNC(sub_83BD0658);
PPC_FUNC_IMPL(__imp__sub_83BD0658) {
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
	// addi r3,r11,18520
	ctx.r3.s64 = ctx.r11.s64 + 18520;
	// bl 0x83523120
	ctx.lr = 0x83BD0670;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,16104
	ctx.r3.s64 = ctx.r10.s64 + 16104;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD067C;
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

__attribute__((alias("__imp__sub_83BD068C"))) PPC_WEAK_FUNC(sub_83BD068C);
PPC_FUNC_IMPL(__imp__sub_83BD068C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0690"))) PPC_WEAK_FUNC(sub_83BD0690);
PPC_FUNC_IMPL(__imp__sub_83BD0690) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,18536
	ctx.r7.s64 = ctx.r8.s64 + 18536;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,18536(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18536);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,18536(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18536, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD06B8"))) PPC_WEAK_FUNC(sub_83BD06B8);
PPC_FUNC_IMPL(__imp__sub_83BD06B8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,20948
	ctx.r6.s64 = ctx.r7.s64 + 20948;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,20876(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 20876);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,18536(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18536);
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
	// std r9,20948(r7)
	PPC_STORE_U64(ctx.r7.u32 + 20948, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD0700"))) PPC_WEAK_FUNC(sub_83BD0700);
PPC_FUNC_IMPL(__imp__sub_83BD0700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16120
	ctx.r3.s64 = ctx.r11.s64 + 16120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD070C"))) PPC_WEAK_FUNC(sub_83BD070C);
PPC_FUNC_IMPL(__imp__sub_83BD070C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0710"))) PPC_WEAK_FUNC(sub_83BD0710);
PPC_FUNC_IMPL(__imp__sub_83BD0710) {
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
	// addi r3,r11,18544
	ctx.r3.s64 = ctx.r11.s64 + 18544;
	// bl 0x8259af80
	ctx.lr = 0x83BD0728;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,16136
	ctx.r3.s64 = ctx.r10.s64 + 16136;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD0734;
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

__attribute__((alias("__imp__sub_83BD0744"))) PPC_WEAK_FUNC(sub_83BD0744);
PPC_FUNC_IMPL(__imp__sub_83BD0744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0748"))) PPC_WEAK_FUNC(sub_83BD0748);
PPC_FUNC_IMPL(__imp__sub_83BD0748) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,18524
	ctx.r11.s64 = ctx.r8.s64 + 18524;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,20924(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20924);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,16128
	ctx.r3.s64 = ctx.r6.s64 + 16128;
	// stw r10,18524(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18524, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0778"))) PPC_WEAK_FUNC(sub_83BD0778);
PPC_FUNC_IMPL(__imp__sub_83BD0778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16144
	ctx.r3.s64 = ctx.r11.s64 + 16144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0784"))) PPC_WEAK_FUNC(sub_83BD0784);
PPC_FUNC_IMPL(__imp__sub_83BD0784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0788"))) PPC_WEAK_FUNC(sub_83BD0788);
PPC_FUNC_IMPL(__imp__sub_83BD0788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16152
	ctx.r3.s64 = ctx.r11.s64 + 16152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0794"))) PPC_WEAK_FUNC(sub_83BD0794);
PPC_FUNC_IMPL(__imp__sub_83BD0794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0798"))) PPC_WEAK_FUNC(sub_83BD0798);
PPC_FUNC_IMPL(__imp__sub_83BD0798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16160
	ctx.r3.s64 = ctx.r11.s64 + 16160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD07A4"))) PPC_WEAK_FUNC(sub_83BD07A4);
PPC_FUNC_IMPL(__imp__sub_83BD07A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD07A8"))) PPC_WEAK_FUNC(sub_83BD07A8);
PPC_FUNC_IMPL(__imp__sub_83BD07A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16168
	ctx.r3.s64 = ctx.r11.s64 + 16168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD07B4"))) PPC_WEAK_FUNC(sub_83BD07B4);
PPC_FUNC_IMPL(__imp__sub_83BD07B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD07B8"))) PPC_WEAK_FUNC(sub_83BD07B8);
PPC_FUNC_IMPL(__imp__sub_83BD07B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16176
	ctx.r3.s64 = ctx.r11.s64 + 16176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD07C4"))) PPC_WEAK_FUNC(sub_83BD07C4);
PPC_FUNC_IMPL(__imp__sub_83BD07C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD07C8"))) PPC_WEAK_FUNC(sub_83BD07C8);
PPC_FUNC_IMPL(__imp__sub_83BD07C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16184
	ctx.r3.s64 = ctx.r11.s64 + 16184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD07D4"))) PPC_WEAK_FUNC(sub_83BD07D4);
PPC_FUNC_IMPL(__imp__sub_83BD07D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD07D8"))) PPC_WEAK_FUNC(sub_83BD07D8);
PPC_FUNC_IMPL(__imp__sub_83BD07D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16192
	ctx.r3.s64 = ctx.r11.s64 + 16192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD07E4"))) PPC_WEAK_FUNC(sub_83BD07E4);
PPC_FUNC_IMPL(__imp__sub_83BD07E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD07E8"))) PPC_WEAK_FUNC(sub_83BD07E8);
PPC_FUNC_IMPL(__imp__sub_83BD07E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16200
	ctx.r3.s64 = ctx.r11.s64 + 16200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD07F4"))) PPC_WEAK_FUNC(sub_83BD07F4);
PPC_FUNC_IMPL(__imp__sub_83BD07F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD07F8"))) PPC_WEAK_FUNC(sub_83BD07F8);
PPC_FUNC_IMPL(__imp__sub_83BD07F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16208
	ctx.r3.s64 = ctx.r11.s64 + 16208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0804"))) PPC_WEAK_FUNC(sub_83BD0804);
PPC_FUNC_IMPL(__imp__sub_83BD0804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0808"))) PPC_WEAK_FUNC(sub_83BD0808);
PPC_FUNC_IMPL(__imp__sub_83BD0808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16216
	ctx.r3.s64 = ctx.r11.s64 + 16216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0814"))) PPC_WEAK_FUNC(sub_83BD0814);
PPC_FUNC_IMPL(__imp__sub_83BD0814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0818"))) PPC_WEAK_FUNC(sub_83BD0818);
PPC_FUNC_IMPL(__imp__sub_83BD0818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16224
	ctx.r3.s64 = ctx.r11.s64 + 16224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0824"))) PPC_WEAK_FUNC(sub_83BD0824);
PPC_FUNC_IMPL(__imp__sub_83BD0824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0828"))) PPC_WEAK_FUNC(sub_83BD0828);
PPC_FUNC_IMPL(__imp__sub_83BD0828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16232
	ctx.r3.s64 = ctx.r11.s64 + 16232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0834"))) PPC_WEAK_FUNC(sub_83BD0834);
PPC_FUNC_IMPL(__imp__sub_83BD0834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0838"))) PPC_WEAK_FUNC(sub_83BD0838);
PPC_FUNC_IMPL(__imp__sub_83BD0838) {
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
	// addi r3,r11,18888
	ctx.r3.s64 = ctx.r11.s64 + 18888;
	// bl 0x83523120
	ctx.lr = 0x83BD0850;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,16240
	ctx.r3.s64 = ctx.r10.s64 + 16240;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD085C;
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

__attribute__((alias("__imp__sub_83BD086C"))) PPC_WEAK_FUNC(sub_83BD086C);
PPC_FUNC_IMPL(__imp__sub_83BD086C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0870"))) PPC_WEAK_FUNC(sub_83BD0870);
PPC_FUNC_IMPL(__imp__sub_83BD0870) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,18904
	ctx.r7.s64 = ctx.r8.s64 + 18904;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,18904(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18904);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,18904(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18904, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD0898"))) PPC_WEAK_FUNC(sub_83BD0898);
PPC_FUNC_IMPL(__imp__sub_83BD0898) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,21096
	ctx.r6.s64 = ctx.r7.s64 + 21096;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,21024(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 21024);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,18904(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18904);
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
	// std r9,21096(r7)
	PPC_STORE_U64(ctx.r7.u32 + 21096, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD08E0"))) PPC_WEAK_FUNC(sub_83BD08E0);
PPC_FUNC_IMPL(__imp__sub_83BD08E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16256
	ctx.r3.s64 = ctx.r11.s64 + 16256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD08EC"))) PPC_WEAK_FUNC(sub_83BD08EC);
PPC_FUNC_IMPL(__imp__sub_83BD08EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD08F0"))) PPC_WEAK_FUNC(sub_83BD08F0);
PPC_FUNC_IMPL(__imp__sub_83BD08F0) {
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
	// addi r3,r11,18912
	ctx.r3.s64 = ctx.r11.s64 + 18912;
	// bl 0x8259af80
	ctx.lr = 0x83BD0908;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,16272
	ctx.r3.s64 = ctx.r10.s64 + 16272;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD0914;
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

__attribute__((alias("__imp__sub_83BD0924"))) PPC_WEAK_FUNC(sub_83BD0924);
PPC_FUNC_IMPL(__imp__sub_83BD0924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0928"))) PPC_WEAK_FUNC(sub_83BD0928);
PPC_FUNC_IMPL(__imp__sub_83BD0928) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,18892
	ctx.r11.s64 = ctx.r8.s64 + 18892;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,21072(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21072);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,16264
	ctx.r3.s64 = ctx.r6.s64 + 16264;
	// stw r10,18892(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18892, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0958"))) PPC_WEAK_FUNC(sub_83BD0958);
PPC_FUNC_IMPL(__imp__sub_83BD0958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16280
	ctx.r3.s64 = ctx.r11.s64 + 16280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0964"))) PPC_WEAK_FUNC(sub_83BD0964);
PPC_FUNC_IMPL(__imp__sub_83BD0964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0968"))) PPC_WEAK_FUNC(sub_83BD0968);
PPC_FUNC_IMPL(__imp__sub_83BD0968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16288
	ctx.r3.s64 = ctx.r11.s64 + 16288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0974"))) PPC_WEAK_FUNC(sub_83BD0974);
PPC_FUNC_IMPL(__imp__sub_83BD0974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0978"))) PPC_WEAK_FUNC(sub_83BD0978);
PPC_FUNC_IMPL(__imp__sub_83BD0978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16296
	ctx.r3.s64 = ctx.r11.s64 + 16296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0984"))) PPC_WEAK_FUNC(sub_83BD0984);
PPC_FUNC_IMPL(__imp__sub_83BD0984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0988"))) PPC_WEAK_FUNC(sub_83BD0988);
PPC_FUNC_IMPL(__imp__sub_83BD0988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16304
	ctx.r3.s64 = ctx.r11.s64 + 16304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0994"))) PPC_WEAK_FUNC(sub_83BD0994);
PPC_FUNC_IMPL(__imp__sub_83BD0994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0998"))) PPC_WEAK_FUNC(sub_83BD0998);
PPC_FUNC_IMPL(__imp__sub_83BD0998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16312
	ctx.r3.s64 = ctx.r11.s64 + 16312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD09A4"))) PPC_WEAK_FUNC(sub_83BD09A4);
PPC_FUNC_IMPL(__imp__sub_83BD09A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD09A8"))) PPC_WEAK_FUNC(sub_83BD09A8);
PPC_FUNC_IMPL(__imp__sub_83BD09A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16320
	ctx.r3.s64 = ctx.r11.s64 + 16320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD09B4"))) PPC_WEAK_FUNC(sub_83BD09B4);
PPC_FUNC_IMPL(__imp__sub_83BD09B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD09B8"))) PPC_WEAK_FUNC(sub_83BD09B8);
PPC_FUNC_IMPL(__imp__sub_83BD09B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16328
	ctx.r3.s64 = ctx.r11.s64 + 16328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD09C4"))) PPC_WEAK_FUNC(sub_83BD09C4);
PPC_FUNC_IMPL(__imp__sub_83BD09C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD09C8"))) PPC_WEAK_FUNC(sub_83BD09C8);
PPC_FUNC_IMPL(__imp__sub_83BD09C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16336
	ctx.r3.s64 = ctx.r11.s64 + 16336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD09D4"))) PPC_WEAK_FUNC(sub_83BD09D4);
PPC_FUNC_IMPL(__imp__sub_83BD09D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD09D8"))) PPC_WEAK_FUNC(sub_83BD09D8);
PPC_FUNC_IMPL(__imp__sub_83BD09D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16344
	ctx.r3.s64 = ctx.r11.s64 + 16344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD09E4"))) PPC_WEAK_FUNC(sub_83BD09E4);
PPC_FUNC_IMPL(__imp__sub_83BD09E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD09E8"))) PPC_WEAK_FUNC(sub_83BD09E8);
PPC_FUNC_IMPL(__imp__sub_83BD09E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16352
	ctx.r3.s64 = ctx.r11.s64 + 16352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD09F4"))) PPC_WEAK_FUNC(sub_83BD09F4);
PPC_FUNC_IMPL(__imp__sub_83BD09F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD09F8"))) PPC_WEAK_FUNC(sub_83BD09F8);
PPC_FUNC_IMPL(__imp__sub_83BD09F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16360
	ctx.r3.s64 = ctx.r11.s64 + 16360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0A04"))) PPC_WEAK_FUNC(sub_83BD0A04);
PPC_FUNC_IMPL(__imp__sub_83BD0A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0A08"))) PPC_WEAK_FUNC(sub_83BD0A08);
PPC_FUNC_IMPL(__imp__sub_83BD0A08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16368
	ctx.r3.s64 = ctx.r11.s64 + 16368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0A14"))) PPC_WEAK_FUNC(sub_83BD0A14);
PPC_FUNC_IMPL(__imp__sub_83BD0A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0A18"))) PPC_WEAK_FUNC(sub_83BD0A18);
PPC_FUNC_IMPL(__imp__sub_83BD0A18) {
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
	// addi r3,r11,19256
	ctx.r3.s64 = ctx.r11.s64 + 19256;
	// bl 0x83523120
	ctx.lr = 0x83BD0A30;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,16376
	ctx.r3.s64 = ctx.r10.s64 + 16376;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD0A3C;
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

__attribute__((alias("__imp__sub_83BD0A4C"))) PPC_WEAK_FUNC(sub_83BD0A4C);
PPC_FUNC_IMPL(__imp__sub_83BD0A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0A50"))) PPC_WEAK_FUNC(sub_83BD0A50);
PPC_FUNC_IMPL(__imp__sub_83BD0A50) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,19272
	ctx.r7.s64 = ctx.r8.s64 + 19272;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,19272(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19272);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,19272(r8)
	PPC_STORE_U32(ctx.r8.u32 + 19272, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD0A78"))) PPC_WEAK_FUNC(sub_83BD0A78);
PPC_FUNC_IMPL(__imp__sub_83BD0A78) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,21224
	ctx.r6.s64 = ctx.r7.s64 + 21224;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,21152(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 21152);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,19272(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19272);
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
	// std r9,21224(r7)
	PPC_STORE_U64(ctx.r7.u32 + 21224, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD0AC0"))) PPC_WEAK_FUNC(sub_83BD0AC0);
PPC_FUNC_IMPL(__imp__sub_83BD0AC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16392
	ctx.r3.s64 = ctx.r11.s64 + 16392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0ACC"))) PPC_WEAK_FUNC(sub_83BD0ACC);
PPC_FUNC_IMPL(__imp__sub_83BD0ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0AD0"))) PPC_WEAK_FUNC(sub_83BD0AD0);
PPC_FUNC_IMPL(__imp__sub_83BD0AD0) {
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
	// addi r3,r11,19280
	ctx.r3.s64 = ctx.r11.s64 + 19280;
	// bl 0x8259af80
	ctx.lr = 0x83BD0AE8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,16408
	ctx.r3.s64 = ctx.r10.s64 + 16408;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD0AF4;
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

__attribute__((alias("__imp__sub_83BD0B04"))) PPC_WEAK_FUNC(sub_83BD0B04);
PPC_FUNC_IMPL(__imp__sub_83BD0B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0B08"))) PPC_WEAK_FUNC(sub_83BD0B08);
PPC_FUNC_IMPL(__imp__sub_83BD0B08) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,19260
	ctx.r11.s64 = ctx.r8.s64 + 19260;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,21200(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21200);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,16400
	ctx.r3.s64 = ctx.r6.s64 + 16400;
	// stw r10,19260(r8)
	PPC_STORE_U32(ctx.r8.u32 + 19260, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0B38"))) PPC_WEAK_FUNC(sub_83BD0B38);
PPC_FUNC_IMPL(__imp__sub_83BD0B38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16416
	ctx.r3.s64 = ctx.r11.s64 + 16416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0B44"))) PPC_WEAK_FUNC(sub_83BD0B44);
PPC_FUNC_IMPL(__imp__sub_83BD0B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0B48"))) PPC_WEAK_FUNC(sub_83BD0B48);
PPC_FUNC_IMPL(__imp__sub_83BD0B48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16424
	ctx.r3.s64 = ctx.r11.s64 + 16424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0B54"))) PPC_WEAK_FUNC(sub_83BD0B54);
PPC_FUNC_IMPL(__imp__sub_83BD0B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0B58"))) PPC_WEAK_FUNC(sub_83BD0B58);
PPC_FUNC_IMPL(__imp__sub_83BD0B58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16432
	ctx.r3.s64 = ctx.r11.s64 + 16432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0B64"))) PPC_WEAK_FUNC(sub_83BD0B64);
PPC_FUNC_IMPL(__imp__sub_83BD0B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0B68"))) PPC_WEAK_FUNC(sub_83BD0B68);
PPC_FUNC_IMPL(__imp__sub_83BD0B68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16440
	ctx.r3.s64 = ctx.r11.s64 + 16440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0B74"))) PPC_WEAK_FUNC(sub_83BD0B74);
PPC_FUNC_IMPL(__imp__sub_83BD0B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0B78"))) PPC_WEAK_FUNC(sub_83BD0B78);
PPC_FUNC_IMPL(__imp__sub_83BD0B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16448
	ctx.r3.s64 = ctx.r11.s64 + 16448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0B84"))) PPC_WEAK_FUNC(sub_83BD0B84);
PPC_FUNC_IMPL(__imp__sub_83BD0B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0B88"))) PPC_WEAK_FUNC(sub_83BD0B88);
PPC_FUNC_IMPL(__imp__sub_83BD0B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16456
	ctx.r3.s64 = ctx.r11.s64 + 16456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0B94"))) PPC_WEAK_FUNC(sub_83BD0B94);
PPC_FUNC_IMPL(__imp__sub_83BD0B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0B98"))) PPC_WEAK_FUNC(sub_83BD0B98);
PPC_FUNC_IMPL(__imp__sub_83BD0B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16464
	ctx.r3.s64 = ctx.r11.s64 + 16464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0BA4"))) PPC_WEAK_FUNC(sub_83BD0BA4);
PPC_FUNC_IMPL(__imp__sub_83BD0BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0BA8"))) PPC_WEAK_FUNC(sub_83BD0BA8);
PPC_FUNC_IMPL(__imp__sub_83BD0BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16472
	ctx.r3.s64 = ctx.r11.s64 + 16472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0BB4"))) PPC_WEAK_FUNC(sub_83BD0BB4);
PPC_FUNC_IMPL(__imp__sub_83BD0BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0BB8"))) PPC_WEAK_FUNC(sub_83BD0BB8);
PPC_FUNC_IMPL(__imp__sub_83BD0BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16480
	ctx.r3.s64 = ctx.r11.s64 + 16480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0BC4"))) PPC_WEAK_FUNC(sub_83BD0BC4);
PPC_FUNC_IMPL(__imp__sub_83BD0BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0BC8"))) PPC_WEAK_FUNC(sub_83BD0BC8);
PPC_FUNC_IMPL(__imp__sub_83BD0BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16488
	ctx.r3.s64 = ctx.r11.s64 + 16488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0BD4"))) PPC_WEAK_FUNC(sub_83BD0BD4);
PPC_FUNC_IMPL(__imp__sub_83BD0BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0BD8"))) PPC_WEAK_FUNC(sub_83BD0BD8);
PPC_FUNC_IMPL(__imp__sub_83BD0BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16496
	ctx.r3.s64 = ctx.r11.s64 + 16496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0BE4"))) PPC_WEAK_FUNC(sub_83BD0BE4);
PPC_FUNC_IMPL(__imp__sub_83BD0BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0BE8"))) PPC_WEAK_FUNC(sub_83BD0BE8);
PPC_FUNC_IMPL(__imp__sub_83BD0BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16504
	ctx.r3.s64 = ctx.r11.s64 + 16504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0BF4"))) PPC_WEAK_FUNC(sub_83BD0BF4);
PPC_FUNC_IMPL(__imp__sub_83BD0BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0BF8"))) PPC_WEAK_FUNC(sub_83BD0BF8);
PPC_FUNC_IMPL(__imp__sub_83BD0BF8) {
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
	// addi r3,r11,19624
	ctx.r3.s64 = ctx.r11.s64 + 19624;
	// bl 0x83523120
	ctx.lr = 0x83BD0C10;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,16512
	ctx.r3.s64 = ctx.r10.s64 + 16512;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD0C1C;
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

__attribute__((alias("__imp__sub_83BD0C2C"))) PPC_WEAK_FUNC(sub_83BD0C2C);
PPC_FUNC_IMPL(__imp__sub_83BD0C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0C30"))) PPC_WEAK_FUNC(sub_83BD0C30);
PPC_FUNC_IMPL(__imp__sub_83BD0C30) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,19640
	ctx.r7.s64 = ctx.r8.s64 + 19640;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,19640(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19640);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,19640(r8)
	PPC_STORE_U32(ctx.r8.u32 + 19640, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD0C58"))) PPC_WEAK_FUNC(sub_83BD0C58);
PPC_FUNC_IMPL(__imp__sub_83BD0C58) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,21356
	ctx.r6.s64 = ctx.r7.s64 + 21356;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,21284(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 21284);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,19640(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19640);
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
	// std r9,21356(r7)
	PPC_STORE_U64(ctx.r7.u32 + 21356, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD0CA0"))) PPC_WEAK_FUNC(sub_83BD0CA0);
PPC_FUNC_IMPL(__imp__sub_83BD0CA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16528
	ctx.r3.s64 = ctx.r11.s64 + 16528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0CAC"))) PPC_WEAK_FUNC(sub_83BD0CAC);
PPC_FUNC_IMPL(__imp__sub_83BD0CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0CB0"))) PPC_WEAK_FUNC(sub_83BD0CB0);
PPC_FUNC_IMPL(__imp__sub_83BD0CB0) {
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
	// addi r3,r11,19648
	ctx.r3.s64 = ctx.r11.s64 + 19648;
	// bl 0x8259af80
	ctx.lr = 0x83BD0CC8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,16544
	ctx.r3.s64 = ctx.r10.s64 + 16544;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD0CD4;
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

__attribute__((alias("__imp__sub_83BD0CE4"))) PPC_WEAK_FUNC(sub_83BD0CE4);
PPC_FUNC_IMPL(__imp__sub_83BD0CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0CE8"))) PPC_WEAK_FUNC(sub_83BD0CE8);
PPC_FUNC_IMPL(__imp__sub_83BD0CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,19628
	ctx.r11.s64 = ctx.r8.s64 + 19628;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,21332(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21332);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,16536
	ctx.r3.s64 = ctx.r6.s64 + 16536;
	// stw r10,19628(r8)
	PPC_STORE_U32(ctx.r8.u32 + 19628, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0D18"))) PPC_WEAK_FUNC(sub_83BD0D18);
PPC_FUNC_IMPL(__imp__sub_83BD0D18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16552
	ctx.r3.s64 = ctx.r11.s64 + 16552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0D24"))) PPC_WEAK_FUNC(sub_83BD0D24);
PPC_FUNC_IMPL(__imp__sub_83BD0D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0D28"))) PPC_WEAK_FUNC(sub_83BD0D28);
PPC_FUNC_IMPL(__imp__sub_83BD0D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16560
	ctx.r3.s64 = ctx.r11.s64 + 16560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0D34"))) PPC_WEAK_FUNC(sub_83BD0D34);
PPC_FUNC_IMPL(__imp__sub_83BD0D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0D38"))) PPC_WEAK_FUNC(sub_83BD0D38);
PPC_FUNC_IMPL(__imp__sub_83BD0D38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16568
	ctx.r3.s64 = ctx.r11.s64 + 16568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0D44"))) PPC_WEAK_FUNC(sub_83BD0D44);
PPC_FUNC_IMPL(__imp__sub_83BD0D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0D48"))) PPC_WEAK_FUNC(sub_83BD0D48);
PPC_FUNC_IMPL(__imp__sub_83BD0D48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16576
	ctx.r3.s64 = ctx.r11.s64 + 16576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0D54"))) PPC_WEAK_FUNC(sub_83BD0D54);
PPC_FUNC_IMPL(__imp__sub_83BD0D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0D58"))) PPC_WEAK_FUNC(sub_83BD0D58);
PPC_FUNC_IMPL(__imp__sub_83BD0D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16584
	ctx.r3.s64 = ctx.r11.s64 + 16584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0D64"))) PPC_WEAK_FUNC(sub_83BD0D64);
PPC_FUNC_IMPL(__imp__sub_83BD0D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0D68"))) PPC_WEAK_FUNC(sub_83BD0D68);
PPC_FUNC_IMPL(__imp__sub_83BD0D68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16592
	ctx.r3.s64 = ctx.r11.s64 + 16592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0D74"))) PPC_WEAK_FUNC(sub_83BD0D74);
PPC_FUNC_IMPL(__imp__sub_83BD0D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0D78"))) PPC_WEAK_FUNC(sub_83BD0D78);
PPC_FUNC_IMPL(__imp__sub_83BD0D78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16600
	ctx.r3.s64 = ctx.r11.s64 + 16600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0D84"))) PPC_WEAK_FUNC(sub_83BD0D84);
PPC_FUNC_IMPL(__imp__sub_83BD0D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0D88"))) PPC_WEAK_FUNC(sub_83BD0D88);
PPC_FUNC_IMPL(__imp__sub_83BD0D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16608
	ctx.r3.s64 = ctx.r11.s64 + 16608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0D94"))) PPC_WEAK_FUNC(sub_83BD0D94);
PPC_FUNC_IMPL(__imp__sub_83BD0D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0D98"))) PPC_WEAK_FUNC(sub_83BD0D98);
PPC_FUNC_IMPL(__imp__sub_83BD0D98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16616
	ctx.r3.s64 = ctx.r11.s64 + 16616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0DA4"))) PPC_WEAK_FUNC(sub_83BD0DA4);
PPC_FUNC_IMPL(__imp__sub_83BD0DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0DA8"))) PPC_WEAK_FUNC(sub_83BD0DA8);
PPC_FUNC_IMPL(__imp__sub_83BD0DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16624
	ctx.r3.s64 = ctx.r11.s64 + 16624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0DB4"))) PPC_WEAK_FUNC(sub_83BD0DB4);
PPC_FUNC_IMPL(__imp__sub_83BD0DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0DB8"))) PPC_WEAK_FUNC(sub_83BD0DB8);
PPC_FUNC_IMPL(__imp__sub_83BD0DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16632
	ctx.r3.s64 = ctx.r11.s64 + 16632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0DC4"))) PPC_WEAK_FUNC(sub_83BD0DC4);
PPC_FUNC_IMPL(__imp__sub_83BD0DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0DC8"))) PPC_WEAK_FUNC(sub_83BD0DC8);
PPC_FUNC_IMPL(__imp__sub_83BD0DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16640
	ctx.r3.s64 = ctx.r11.s64 + 16640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0DD4"))) PPC_WEAK_FUNC(sub_83BD0DD4);
PPC_FUNC_IMPL(__imp__sub_83BD0DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0DD8"))) PPC_WEAK_FUNC(sub_83BD0DD8);
PPC_FUNC_IMPL(__imp__sub_83BD0DD8) {
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
	// addi r3,r11,20000
	ctx.r3.s64 = ctx.r11.s64 + 20000;
	// bl 0x83523120
	ctx.lr = 0x83BD0DF0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,16648
	ctx.r3.s64 = ctx.r10.s64 + 16648;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD0DFC;
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

__attribute__((alias("__imp__sub_83BD0E0C"))) PPC_WEAK_FUNC(sub_83BD0E0C);
PPC_FUNC_IMPL(__imp__sub_83BD0E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0E10"))) PPC_WEAK_FUNC(sub_83BD0E10);
PPC_FUNC_IMPL(__imp__sub_83BD0E10) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,20016
	ctx.r7.s64 = ctx.r8.s64 + 20016;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,20016(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20016);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,20016(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20016, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD0E38"))) PPC_WEAK_FUNC(sub_83BD0E38);
PPC_FUNC_IMPL(__imp__sub_83BD0E38) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,21572
	ctx.r6.s64 = ctx.r7.s64 + 21572;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,21500(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 21500);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,20016(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20016);
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
	// std r9,21572(r7)
	PPC_STORE_U64(ctx.r7.u32 + 21572, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD0E80"))) PPC_WEAK_FUNC(sub_83BD0E80);
PPC_FUNC_IMPL(__imp__sub_83BD0E80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16664
	ctx.r3.s64 = ctx.r11.s64 + 16664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0E8C"))) PPC_WEAK_FUNC(sub_83BD0E8C);
PPC_FUNC_IMPL(__imp__sub_83BD0E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0E90"))) PPC_WEAK_FUNC(sub_83BD0E90);
PPC_FUNC_IMPL(__imp__sub_83BD0E90) {
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
	// addi r3,r11,20024
	ctx.r3.s64 = ctx.r11.s64 + 20024;
	// bl 0x8259af80
	ctx.lr = 0x83BD0EA8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,16680
	ctx.r3.s64 = ctx.r10.s64 + 16680;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD0EB4;
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

__attribute__((alias("__imp__sub_83BD0EC4"))) PPC_WEAK_FUNC(sub_83BD0EC4);
PPC_FUNC_IMPL(__imp__sub_83BD0EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0EC8"))) PPC_WEAK_FUNC(sub_83BD0EC8);
PPC_FUNC_IMPL(__imp__sub_83BD0EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,20004
	ctx.r11.s64 = ctx.r8.s64 + 20004;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,21548(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21548);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,16672
	ctx.r3.s64 = ctx.r6.s64 + 16672;
	// stw r10,20004(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20004, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0EF8"))) PPC_WEAK_FUNC(sub_83BD0EF8);
PPC_FUNC_IMPL(__imp__sub_83BD0EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16688
	ctx.r3.s64 = ctx.r11.s64 + 16688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0F04"))) PPC_WEAK_FUNC(sub_83BD0F04);
PPC_FUNC_IMPL(__imp__sub_83BD0F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0F08"))) PPC_WEAK_FUNC(sub_83BD0F08);
PPC_FUNC_IMPL(__imp__sub_83BD0F08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16696
	ctx.r3.s64 = ctx.r11.s64 + 16696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0F14"))) PPC_WEAK_FUNC(sub_83BD0F14);
PPC_FUNC_IMPL(__imp__sub_83BD0F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0F18"))) PPC_WEAK_FUNC(sub_83BD0F18);
PPC_FUNC_IMPL(__imp__sub_83BD0F18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16704
	ctx.r3.s64 = ctx.r11.s64 + 16704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0F24"))) PPC_WEAK_FUNC(sub_83BD0F24);
PPC_FUNC_IMPL(__imp__sub_83BD0F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0F28"))) PPC_WEAK_FUNC(sub_83BD0F28);
PPC_FUNC_IMPL(__imp__sub_83BD0F28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16712
	ctx.r3.s64 = ctx.r11.s64 + 16712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0F34"))) PPC_WEAK_FUNC(sub_83BD0F34);
PPC_FUNC_IMPL(__imp__sub_83BD0F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0F38"))) PPC_WEAK_FUNC(sub_83BD0F38);
PPC_FUNC_IMPL(__imp__sub_83BD0F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16720
	ctx.r3.s64 = ctx.r11.s64 + 16720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0F44"))) PPC_WEAK_FUNC(sub_83BD0F44);
PPC_FUNC_IMPL(__imp__sub_83BD0F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0F48"))) PPC_WEAK_FUNC(sub_83BD0F48);
PPC_FUNC_IMPL(__imp__sub_83BD0F48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16728
	ctx.r3.s64 = ctx.r11.s64 + 16728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0F54"))) PPC_WEAK_FUNC(sub_83BD0F54);
PPC_FUNC_IMPL(__imp__sub_83BD0F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0F58"))) PPC_WEAK_FUNC(sub_83BD0F58);
PPC_FUNC_IMPL(__imp__sub_83BD0F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16736
	ctx.r3.s64 = ctx.r11.s64 + 16736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0F64"))) PPC_WEAK_FUNC(sub_83BD0F64);
PPC_FUNC_IMPL(__imp__sub_83BD0F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0F68"))) PPC_WEAK_FUNC(sub_83BD0F68);
PPC_FUNC_IMPL(__imp__sub_83BD0F68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16744
	ctx.r3.s64 = ctx.r11.s64 + 16744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0F74"))) PPC_WEAK_FUNC(sub_83BD0F74);
PPC_FUNC_IMPL(__imp__sub_83BD0F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0F78"))) PPC_WEAK_FUNC(sub_83BD0F78);
PPC_FUNC_IMPL(__imp__sub_83BD0F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16752
	ctx.r3.s64 = ctx.r11.s64 + 16752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0F84"))) PPC_WEAK_FUNC(sub_83BD0F84);
PPC_FUNC_IMPL(__imp__sub_83BD0F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0F88"))) PPC_WEAK_FUNC(sub_83BD0F88);
PPC_FUNC_IMPL(__imp__sub_83BD0F88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16760
	ctx.r3.s64 = ctx.r11.s64 + 16760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0F94"))) PPC_WEAK_FUNC(sub_83BD0F94);
PPC_FUNC_IMPL(__imp__sub_83BD0F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0F98"))) PPC_WEAK_FUNC(sub_83BD0F98);
PPC_FUNC_IMPL(__imp__sub_83BD0F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16768
	ctx.r3.s64 = ctx.r11.s64 + 16768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0FA4"))) PPC_WEAK_FUNC(sub_83BD0FA4);
PPC_FUNC_IMPL(__imp__sub_83BD0FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0FA8"))) PPC_WEAK_FUNC(sub_83BD0FA8);
PPC_FUNC_IMPL(__imp__sub_83BD0FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16776
	ctx.r3.s64 = ctx.r11.s64 + 16776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD0FB4"))) PPC_WEAK_FUNC(sub_83BD0FB4);
PPC_FUNC_IMPL(__imp__sub_83BD0FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0FB8"))) PPC_WEAK_FUNC(sub_83BD0FB8);
PPC_FUNC_IMPL(__imp__sub_83BD0FB8) {
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
	// addi r3,r11,20368
	ctx.r3.s64 = ctx.r11.s64 + 20368;
	// bl 0x83523120
	ctx.lr = 0x83BD0FD0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,16784
	ctx.r3.s64 = ctx.r10.s64 + 16784;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD0FDC;
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

__attribute__((alias("__imp__sub_83BD0FEC"))) PPC_WEAK_FUNC(sub_83BD0FEC);
PPC_FUNC_IMPL(__imp__sub_83BD0FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD0FF0"))) PPC_WEAK_FUNC(sub_83BD0FF0);
PPC_FUNC_IMPL(__imp__sub_83BD0FF0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,20384
	ctx.r7.s64 = ctx.r8.s64 + 20384;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,20384(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20384);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,20384(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20384, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD1018"))) PPC_WEAK_FUNC(sub_83BD1018);
PPC_FUNC_IMPL(__imp__sub_83BD1018) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,21812
	ctx.r6.s64 = ctx.r7.s64 + 21812;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,21740(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 21740);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,20384(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20384);
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
	// std r9,21812(r7)
	PPC_STORE_U64(ctx.r7.u32 + 21812, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD1060"))) PPC_WEAK_FUNC(sub_83BD1060);
PPC_FUNC_IMPL(__imp__sub_83BD1060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16800
	ctx.r3.s64 = ctx.r11.s64 + 16800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD106C"))) PPC_WEAK_FUNC(sub_83BD106C);
PPC_FUNC_IMPL(__imp__sub_83BD106C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1070"))) PPC_WEAK_FUNC(sub_83BD1070);
PPC_FUNC_IMPL(__imp__sub_83BD1070) {
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
	// addi r3,r11,20392
	ctx.r3.s64 = ctx.r11.s64 + 20392;
	// bl 0x8259af80
	ctx.lr = 0x83BD1088;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,16816
	ctx.r3.s64 = ctx.r10.s64 + 16816;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD1094;
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

__attribute__((alias("__imp__sub_83BD10A4"))) PPC_WEAK_FUNC(sub_83BD10A4);
PPC_FUNC_IMPL(__imp__sub_83BD10A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD10A8"))) PPC_WEAK_FUNC(sub_83BD10A8);
PPC_FUNC_IMPL(__imp__sub_83BD10A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,20372
	ctx.r11.s64 = ctx.r8.s64 + 20372;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,21788(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21788);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,16808
	ctx.r3.s64 = ctx.r6.s64 + 16808;
	// stw r10,20372(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20372, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD10D8"))) PPC_WEAK_FUNC(sub_83BD10D8);
PPC_FUNC_IMPL(__imp__sub_83BD10D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16824
	ctx.r3.s64 = ctx.r11.s64 + 16824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD10E4"))) PPC_WEAK_FUNC(sub_83BD10E4);
PPC_FUNC_IMPL(__imp__sub_83BD10E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD10E8"))) PPC_WEAK_FUNC(sub_83BD10E8);
PPC_FUNC_IMPL(__imp__sub_83BD10E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16832
	ctx.r3.s64 = ctx.r11.s64 + 16832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD10F4"))) PPC_WEAK_FUNC(sub_83BD10F4);
PPC_FUNC_IMPL(__imp__sub_83BD10F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD10F8"))) PPC_WEAK_FUNC(sub_83BD10F8);
PPC_FUNC_IMPL(__imp__sub_83BD10F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16840
	ctx.r3.s64 = ctx.r11.s64 + 16840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1104"))) PPC_WEAK_FUNC(sub_83BD1104);
PPC_FUNC_IMPL(__imp__sub_83BD1104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1108"))) PPC_WEAK_FUNC(sub_83BD1108);
PPC_FUNC_IMPL(__imp__sub_83BD1108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16848
	ctx.r3.s64 = ctx.r11.s64 + 16848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1114"))) PPC_WEAK_FUNC(sub_83BD1114);
PPC_FUNC_IMPL(__imp__sub_83BD1114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1118"))) PPC_WEAK_FUNC(sub_83BD1118);
PPC_FUNC_IMPL(__imp__sub_83BD1118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16856
	ctx.r3.s64 = ctx.r11.s64 + 16856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1124"))) PPC_WEAK_FUNC(sub_83BD1124);
PPC_FUNC_IMPL(__imp__sub_83BD1124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1128"))) PPC_WEAK_FUNC(sub_83BD1128);
PPC_FUNC_IMPL(__imp__sub_83BD1128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16864
	ctx.r3.s64 = ctx.r11.s64 + 16864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1134"))) PPC_WEAK_FUNC(sub_83BD1134);
PPC_FUNC_IMPL(__imp__sub_83BD1134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD1138"))) PPC_WEAK_FUNC(sub_83BD1138);
PPC_FUNC_IMPL(__imp__sub_83BD1138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,16872
	ctx.r3.s64 = ctx.r11.s64 + 16872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD1144"))) PPC_WEAK_FUNC(sub_83BD1144);
PPC_FUNC_IMPL(__imp__sub_83BD1144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

