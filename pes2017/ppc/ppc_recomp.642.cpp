#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BCB9E4"))) PPC_WEAK_FUNC(sub_83BCB9E4);
PPC_FUNC_IMPL(__imp__sub_83BCB9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCB9E8"))) PPC_WEAK_FUNC(sub_83BCB9E8);
PPC_FUNC_IMPL(__imp__sub_83BCB9E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-396
	ctx.r11.s64 = ctx.r8.s64 + -396;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,13724(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13724);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,9848
	ctx.r3.s64 = ctx.r6.s64 + 9848;
	// stw r10,-396(r8)
	PPC_STORE_U32(ctx.r8.u32 + -396, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCBA18"))) PPC_WEAK_FUNC(sub_83BCBA18);
PPC_FUNC_IMPL(__imp__sub_83BCBA18) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// addi r4,r11,26716
	ctx.r4.s64 = ctx.r11.s64 + 26716;
	// addi r3,r10,13784
	ctx.r3.s64 = ctx.r10.s64 + 13784;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83BCBA3C;
	sub_8259CC28(ctx, base);
	// lis r9,-31791
	ctx.r9.s64 = -2083454976;
	// addi r3,r9,9864
	ctx.r3.s64 = ctx.r9.s64 + 9864;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCBA48;
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

__attribute__((alias("__imp__sub_83BCBA58"))) PPC_WEAK_FUNC(sub_83BCBA58);
PPC_FUNC_IMPL(__imp__sub_83BCBA58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,9968
	ctx.r3.s64 = ctx.r11.s64 + 9968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCBA64"))) PPC_WEAK_FUNC(sub_83BCBA64);
PPC_FUNC_IMPL(__imp__sub_83BCBA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCBA68"))) PPC_WEAK_FUNC(sub_83BCBA68);
PPC_FUNC_IMPL(__imp__sub_83BCBA68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,9976
	ctx.r3.s64 = ctx.r11.s64 + 9976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCBA74"))) PPC_WEAK_FUNC(sub_83BCBA74);
PPC_FUNC_IMPL(__imp__sub_83BCBA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCBA78"))) PPC_WEAK_FUNC(sub_83BCBA78);
PPC_FUNC_IMPL(__imp__sub_83BCBA78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,9984
	ctx.r3.s64 = ctx.r11.s64 + 9984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCBA84"))) PPC_WEAK_FUNC(sub_83BCBA84);
PPC_FUNC_IMPL(__imp__sub_83BCBA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCBA88"))) PPC_WEAK_FUNC(sub_83BCBA88);
PPC_FUNC_IMPL(__imp__sub_83BCBA88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,9992
	ctx.r3.s64 = ctx.r11.s64 + 9992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCBA94"))) PPC_WEAK_FUNC(sub_83BCBA94);
PPC_FUNC_IMPL(__imp__sub_83BCBA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCBA98"))) PPC_WEAK_FUNC(sub_83BCBA98);
PPC_FUNC_IMPL(__imp__sub_83BCBA98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10000
	ctx.r3.s64 = ctx.r11.s64 + 10000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCBAA4"))) PPC_WEAK_FUNC(sub_83BCBAA4);
PPC_FUNC_IMPL(__imp__sub_83BCBAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCBAA8"))) PPC_WEAK_FUNC(sub_83BCBAA8);
PPC_FUNC_IMPL(__imp__sub_83BCBAA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10008
	ctx.r3.s64 = ctx.r11.s64 + 10008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCBAB4"))) PPC_WEAK_FUNC(sub_83BCBAB4);
PPC_FUNC_IMPL(__imp__sub_83BCBAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCBAB8"))) PPC_WEAK_FUNC(sub_83BCBAB8);
PPC_FUNC_IMPL(__imp__sub_83BCBAB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10016
	ctx.r3.s64 = ctx.r11.s64 + 10016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCBAC4"))) PPC_WEAK_FUNC(sub_83BCBAC4);
PPC_FUNC_IMPL(__imp__sub_83BCBAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCBAC8"))) PPC_WEAK_FUNC(sub_83BCBAC8);
PPC_FUNC_IMPL(__imp__sub_83BCBAC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10024
	ctx.r3.s64 = ctx.r11.s64 + 10024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCBAD4"))) PPC_WEAK_FUNC(sub_83BCBAD4);
PPC_FUNC_IMPL(__imp__sub_83BCBAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCBAD8"))) PPC_WEAK_FUNC(sub_83BCBAD8);
PPC_FUNC_IMPL(__imp__sub_83BCBAD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10032
	ctx.r3.s64 = ctx.r11.s64 + 10032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCBAE4"))) PPC_WEAK_FUNC(sub_83BCBAE4);
PPC_FUNC_IMPL(__imp__sub_83BCBAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCBAE8"))) PPC_WEAK_FUNC(sub_83BCBAE8);
PPC_FUNC_IMPL(__imp__sub_83BCBAE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10040
	ctx.r3.s64 = ctx.r11.s64 + 10040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCBAF4"))) PPC_WEAK_FUNC(sub_83BCBAF4);
PPC_FUNC_IMPL(__imp__sub_83BCBAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCBAF8"))) PPC_WEAK_FUNC(sub_83BCBAF8);
PPC_FUNC_IMPL(__imp__sub_83BCBAF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10048
	ctx.r3.s64 = ctx.r11.s64 + 10048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCBB04"))) PPC_WEAK_FUNC(sub_83BCBB04);
PPC_FUNC_IMPL(__imp__sub_83BCBB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCBB08"))) PPC_WEAK_FUNC(sub_83BCBB08);
PPC_FUNC_IMPL(__imp__sub_83BCBB08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10056
	ctx.r3.s64 = ctx.r11.s64 + 10056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCBB14"))) PPC_WEAK_FUNC(sub_83BCBB14);
PPC_FUNC_IMPL(__imp__sub_83BCBB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCBB18"))) PPC_WEAK_FUNC(sub_83BCBB18);
PPC_FUNC_IMPL(__imp__sub_83BCBB18) {
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
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// bl 0x83523120
	ctx.lr = 0x83BCBB30;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,10064
	ctx.r3.s64 = ctx.r10.s64 + 10064;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCBB3C;
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

__attribute__((alias("__imp__sub_83BCBB4C"))) PPC_WEAK_FUNC(sub_83BCBB4C);
PPC_FUNC_IMPL(__imp__sub_83BCBB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCBB50"))) PPC_WEAK_FUNC(sub_83BCBB50);
PPC_FUNC_IMPL(__imp__sub_83BCBB50) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-16
	ctx.r7.s64 = ctx.r8.s64 + -16;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-16(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-16(r8)
	PPC_STORE_U32(ctx.r8.u32 + -16, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCBB78"))) PPC_WEAK_FUNC(sub_83BCBB78);
PPC_FUNC_IMPL(__imp__sub_83BCBB78) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,13924
	ctx.r6.s64 = ctx.r7.s64 + 13924;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,13852(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 13852);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16);
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
	// std r9,13924(r7)
	PPC_STORE_U64(ctx.r7.u32 + 13924, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCBBC0"))) PPC_WEAK_FUNC(sub_83BCBBC0);
PPC_FUNC_IMPL(__imp__sub_83BCBBC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10080
	ctx.r3.s64 = ctx.r11.s64 + 10080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCBBCC"))) PPC_WEAK_FUNC(sub_83BCBBCC);
PPC_FUNC_IMPL(__imp__sub_83BCBBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCBBD0"))) PPC_WEAK_FUNC(sub_83BCBBD0);
PPC_FUNC_IMPL(__imp__sub_83BCBBD0) {
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
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x8259af80
	ctx.lr = 0x83BCBBE8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,10096
	ctx.r3.s64 = ctx.r10.s64 + 10096;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCBBF4;
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

__attribute__((alias("__imp__sub_83BCBC04"))) PPC_WEAK_FUNC(sub_83BCBC04);
PPC_FUNC_IMPL(__imp__sub_83BCBC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCBC08"))) PPC_WEAK_FUNC(sub_83BCBC08);
PPC_FUNC_IMPL(__imp__sub_83BCBC08) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-28
	ctx.r11.s64 = ctx.r8.s64 + -28;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,13900(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13900);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,10088
	ctx.r3.s64 = ctx.r6.s64 + 10088;
	// stw r10,-28(r8)
	PPC_STORE_U32(ctx.r8.u32 + -28, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCBC38"))) PPC_WEAK_FUNC(sub_83BCBC38);
PPC_FUNC_IMPL(__imp__sub_83BCBC38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10104
	ctx.r3.s64 = ctx.r11.s64 + 10104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCBC44"))) PPC_WEAK_FUNC(sub_83BCBC44);
PPC_FUNC_IMPL(__imp__sub_83BCBC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCBC48"))) PPC_WEAK_FUNC(sub_83BCBC48);
PPC_FUNC_IMPL(__imp__sub_83BCBC48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10112
	ctx.r3.s64 = ctx.r11.s64 + 10112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCBC54"))) PPC_WEAK_FUNC(sub_83BCBC54);
PPC_FUNC_IMPL(__imp__sub_83BCBC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCBC58"))) PPC_WEAK_FUNC(sub_83BCBC58);
PPC_FUNC_IMPL(__imp__sub_83BCBC58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10120
	ctx.r3.s64 = ctx.r11.s64 + 10120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCBC64"))) PPC_WEAK_FUNC(sub_83BCBC64);
PPC_FUNC_IMPL(__imp__sub_83BCBC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCBC68"))) PPC_WEAK_FUNC(sub_83BCBC68);
PPC_FUNC_IMPL(__imp__sub_83BCBC68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10128
	ctx.r3.s64 = ctx.r11.s64 + 10128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCBC74"))) PPC_WEAK_FUNC(sub_83BCBC74);
PPC_FUNC_IMPL(__imp__sub_83BCBC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCBC78"))) PPC_WEAK_FUNC(sub_83BCBC78);
PPC_FUNC_IMPL(__imp__sub_83BCBC78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10136
	ctx.r3.s64 = ctx.r11.s64 + 10136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCBC84"))) PPC_WEAK_FUNC(sub_83BCBC84);
PPC_FUNC_IMPL(__imp__sub_83BCBC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCBC88"))) PPC_WEAK_FUNC(sub_83BCBC88);
PPC_FUNC_IMPL(__imp__sub_83BCBC88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10144
	ctx.r3.s64 = ctx.r11.s64 + 10144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCBC94"))) PPC_WEAK_FUNC(sub_83BCBC94);
PPC_FUNC_IMPL(__imp__sub_83BCBC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCBC98"))) PPC_WEAK_FUNC(sub_83BCBC98);
PPC_FUNC_IMPL(__imp__sub_83BCBC98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10152
	ctx.r3.s64 = ctx.r11.s64 + 10152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCBCA4"))) PPC_WEAK_FUNC(sub_83BCBCA4);
PPC_FUNC_IMPL(__imp__sub_83BCBCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCBCA8"))) PPC_WEAK_FUNC(sub_83BCBCA8);
PPC_FUNC_IMPL(__imp__sub_83BCBCA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10160
	ctx.r3.s64 = ctx.r11.s64 + 10160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCBCB4"))) PPC_WEAK_FUNC(sub_83BCBCB4);
PPC_FUNC_IMPL(__imp__sub_83BCBCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCBCB8"))) PPC_WEAK_FUNC(sub_83BCBCB8);
PPC_FUNC_IMPL(__imp__sub_83BCBCB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10168
	ctx.r3.s64 = ctx.r11.s64 + 10168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCBCC4"))) PPC_WEAK_FUNC(sub_83BCBCC4);
PPC_FUNC_IMPL(__imp__sub_83BCBCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCBCC8"))) PPC_WEAK_FUNC(sub_83BCBCC8);
PPC_FUNC_IMPL(__imp__sub_83BCBCC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10176
	ctx.r3.s64 = ctx.r11.s64 + 10176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCBCD4"))) PPC_WEAK_FUNC(sub_83BCBCD4);
PPC_FUNC_IMPL(__imp__sub_83BCBCD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCBCD8"))) PPC_WEAK_FUNC(sub_83BCBCD8);
PPC_FUNC_IMPL(__imp__sub_83BCBCD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10184
	ctx.r3.s64 = ctx.r11.s64 + 10184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCBCE4"))) PPC_WEAK_FUNC(sub_83BCBCE4);
PPC_FUNC_IMPL(__imp__sub_83BCBCE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCBCE8"))) PPC_WEAK_FUNC(sub_83BCBCE8);
PPC_FUNC_IMPL(__imp__sub_83BCBCE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10192
	ctx.r3.s64 = ctx.r11.s64 + 10192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCBCF4"))) PPC_WEAK_FUNC(sub_83BCBCF4);
PPC_FUNC_IMPL(__imp__sub_83BCBCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCBCF8"))) PPC_WEAK_FUNC(sub_83BCBCF8);
PPC_FUNC_IMPL(__imp__sub_83BCBCF8) {
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
	// addi r3,r11,336
	ctx.r3.s64 = ctx.r11.s64 + 336;
	// bl 0x83523120
	ctx.lr = 0x83BCBD10;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,10200
	ctx.r3.s64 = ctx.r10.s64 + 10200;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCBD1C;
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

__attribute__((alias("__imp__sub_83BCBD2C"))) PPC_WEAK_FUNC(sub_83BCBD2C);
PPC_FUNC_IMPL(__imp__sub_83BCBD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCBD30"))) PPC_WEAK_FUNC(sub_83BCBD30);
PPC_FUNC_IMPL(__imp__sub_83BCBD30) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,352
	ctx.r7.s64 = ctx.r8.s64 + 352;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,352(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 352);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,352(r8)
	PPC_STORE_U32(ctx.r8.u32 + 352, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCBD58"))) PPC_WEAK_FUNC(sub_83BCBD58);
PPC_FUNC_IMPL(__imp__sub_83BCBD58) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,14056
	ctx.r6.s64 = ctx.r7.s64 + 14056;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,13984(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 13984);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,352(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
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
	// std r9,14056(r7)
	PPC_STORE_U64(ctx.r7.u32 + 14056, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCBDA0"))) PPC_WEAK_FUNC(sub_83BCBDA0);
PPC_FUNC_IMPL(__imp__sub_83BCBDA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10216
	ctx.r3.s64 = ctx.r11.s64 + 10216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCBDAC"))) PPC_WEAK_FUNC(sub_83BCBDAC);
PPC_FUNC_IMPL(__imp__sub_83BCBDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCBDB0"))) PPC_WEAK_FUNC(sub_83BCBDB0);
PPC_FUNC_IMPL(__imp__sub_83BCBDB0) {
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
	// addi r3,r11,360
	ctx.r3.s64 = ctx.r11.s64 + 360;
	// bl 0x8259af80
	ctx.lr = 0x83BCBDC8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,10232
	ctx.r3.s64 = ctx.r10.s64 + 10232;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCBDD4;
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

__attribute__((alias("__imp__sub_83BCBDE4"))) PPC_WEAK_FUNC(sub_83BCBDE4);
PPC_FUNC_IMPL(__imp__sub_83BCBDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCBDE8"))) PPC_WEAK_FUNC(sub_83BCBDE8);
PPC_FUNC_IMPL(__imp__sub_83BCBDE8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,340
	ctx.r11.s64 = ctx.r8.s64 + 340;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,14032(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14032);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,10224
	ctx.r3.s64 = ctx.r6.s64 + 10224;
	// stw r10,340(r8)
	PPC_STORE_U32(ctx.r8.u32 + 340, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCBE18"))) PPC_WEAK_FUNC(sub_83BCBE18);
PPC_FUNC_IMPL(__imp__sub_83BCBE18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10240
	ctx.r3.s64 = ctx.r11.s64 + 10240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCBE24"))) PPC_WEAK_FUNC(sub_83BCBE24);
PPC_FUNC_IMPL(__imp__sub_83BCBE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCBE28"))) PPC_WEAK_FUNC(sub_83BCBE28);
PPC_FUNC_IMPL(__imp__sub_83BCBE28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10248
	ctx.r3.s64 = ctx.r11.s64 + 10248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCBE34"))) PPC_WEAK_FUNC(sub_83BCBE34);
PPC_FUNC_IMPL(__imp__sub_83BCBE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCBE38"))) PPC_WEAK_FUNC(sub_83BCBE38);
PPC_FUNC_IMPL(__imp__sub_83BCBE38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10256
	ctx.r3.s64 = ctx.r11.s64 + 10256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCBE44"))) PPC_WEAK_FUNC(sub_83BCBE44);
PPC_FUNC_IMPL(__imp__sub_83BCBE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCBE48"))) PPC_WEAK_FUNC(sub_83BCBE48);
PPC_FUNC_IMPL(__imp__sub_83BCBE48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10264
	ctx.r3.s64 = ctx.r11.s64 + 10264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCBE54"))) PPC_WEAK_FUNC(sub_83BCBE54);
PPC_FUNC_IMPL(__imp__sub_83BCBE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCBE58"))) PPC_WEAK_FUNC(sub_83BCBE58);
PPC_FUNC_IMPL(__imp__sub_83BCBE58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10272
	ctx.r3.s64 = ctx.r11.s64 + 10272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCBE64"))) PPC_WEAK_FUNC(sub_83BCBE64);
PPC_FUNC_IMPL(__imp__sub_83BCBE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCBE68"))) PPC_WEAK_FUNC(sub_83BCBE68);
PPC_FUNC_IMPL(__imp__sub_83BCBE68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10280
	ctx.r3.s64 = ctx.r11.s64 + 10280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCBE74"))) PPC_WEAK_FUNC(sub_83BCBE74);
PPC_FUNC_IMPL(__imp__sub_83BCBE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCBE78"))) PPC_WEAK_FUNC(sub_83BCBE78);
PPC_FUNC_IMPL(__imp__sub_83BCBE78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10288
	ctx.r3.s64 = ctx.r11.s64 + 10288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCBE84"))) PPC_WEAK_FUNC(sub_83BCBE84);
PPC_FUNC_IMPL(__imp__sub_83BCBE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCBE88"))) PPC_WEAK_FUNC(sub_83BCBE88);
PPC_FUNC_IMPL(__imp__sub_83BCBE88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10296
	ctx.r3.s64 = ctx.r11.s64 + 10296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCBE94"))) PPC_WEAK_FUNC(sub_83BCBE94);
PPC_FUNC_IMPL(__imp__sub_83BCBE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCBE98"))) PPC_WEAK_FUNC(sub_83BCBE98);
PPC_FUNC_IMPL(__imp__sub_83BCBE98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10304
	ctx.r3.s64 = ctx.r11.s64 + 10304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCBEA4"))) PPC_WEAK_FUNC(sub_83BCBEA4);
PPC_FUNC_IMPL(__imp__sub_83BCBEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCBEA8"))) PPC_WEAK_FUNC(sub_83BCBEA8);
PPC_FUNC_IMPL(__imp__sub_83BCBEA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10312
	ctx.r3.s64 = ctx.r11.s64 + 10312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCBEB4"))) PPC_WEAK_FUNC(sub_83BCBEB4);
PPC_FUNC_IMPL(__imp__sub_83BCBEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCBEB8"))) PPC_WEAK_FUNC(sub_83BCBEB8);
PPC_FUNC_IMPL(__imp__sub_83BCBEB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10320
	ctx.r3.s64 = ctx.r11.s64 + 10320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCBEC4"))) PPC_WEAK_FUNC(sub_83BCBEC4);
PPC_FUNC_IMPL(__imp__sub_83BCBEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCBEC8"))) PPC_WEAK_FUNC(sub_83BCBEC8);
PPC_FUNC_IMPL(__imp__sub_83BCBEC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10328
	ctx.r3.s64 = ctx.r11.s64 + 10328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCBED4"))) PPC_WEAK_FUNC(sub_83BCBED4);
PPC_FUNC_IMPL(__imp__sub_83BCBED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCBED8"))) PPC_WEAK_FUNC(sub_83BCBED8);
PPC_FUNC_IMPL(__imp__sub_83BCBED8) {
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
	// addi r3,r11,704
	ctx.r3.s64 = ctx.r11.s64 + 704;
	// bl 0x83523120
	ctx.lr = 0x83BCBEF0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,10336
	ctx.r3.s64 = ctx.r10.s64 + 10336;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCBEFC;
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

__attribute__((alias("__imp__sub_83BCBF0C"))) PPC_WEAK_FUNC(sub_83BCBF0C);
PPC_FUNC_IMPL(__imp__sub_83BCBF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCBF10"))) PPC_WEAK_FUNC(sub_83BCBF10);
PPC_FUNC_IMPL(__imp__sub_83BCBF10) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,720
	ctx.r7.s64 = ctx.r8.s64 + 720;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,720(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 720);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,720(r8)
	PPC_STORE_U32(ctx.r8.u32 + 720, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCBF38"))) PPC_WEAK_FUNC(sub_83BCBF38);
PPC_FUNC_IMPL(__imp__sub_83BCBF38) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,14208
	ctx.r6.s64 = ctx.r7.s64 + 14208;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,14136(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 14136);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,720(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 720);
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
	// std r9,14208(r7)
	PPC_STORE_U64(ctx.r7.u32 + 14208, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCBF80"))) PPC_WEAK_FUNC(sub_83BCBF80);
PPC_FUNC_IMPL(__imp__sub_83BCBF80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10352
	ctx.r3.s64 = ctx.r11.s64 + 10352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCBF8C"))) PPC_WEAK_FUNC(sub_83BCBF8C);
PPC_FUNC_IMPL(__imp__sub_83BCBF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCBF90"))) PPC_WEAK_FUNC(sub_83BCBF90);
PPC_FUNC_IMPL(__imp__sub_83BCBF90) {
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
	// addi r3,r11,728
	ctx.r3.s64 = ctx.r11.s64 + 728;
	// bl 0x8259af80
	ctx.lr = 0x83BCBFA8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,10368
	ctx.r3.s64 = ctx.r10.s64 + 10368;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCBFB4;
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

__attribute__((alias("__imp__sub_83BCBFC4"))) PPC_WEAK_FUNC(sub_83BCBFC4);
PPC_FUNC_IMPL(__imp__sub_83BCBFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCBFC8"))) PPC_WEAK_FUNC(sub_83BCBFC8);
PPC_FUNC_IMPL(__imp__sub_83BCBFC8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,708
	ctx.r11.s64 = ctx.r8.s64 + 708;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,14184(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14184);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,10360
	ctx.r3.s64 = ctx.r6.s64 + 10360;
	// stw r10,708(r8)
	PPC_STORE_U32(ctx.r8.u32 + 708, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCBFF8"))) PPC_WEAK_FUNC(sub_83BCBFF8);
PPC_FUNC_IMPL(__imp__sub_83BCBFF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10376
	ctx.r3.s64 = ctx.r11.s64 + 10376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC004"))) PPC_WEAK_FUNC(sub_83BCC004);
PPC_FUNC_IMPL(__imp__sub_83BCC004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC008"))) PPC_WEAK_FUNC(sub_83BCC008);
PPC_FUNC_IMPL(__imp__sub_83BCC008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10384
	ctx.r3.s64 = ctx.r11.s64 + 10384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC014"))) PPC_WEAK_FUNC(sub_83BCC014);
PPC_FUNC_IMPL(__imp__sub_83BCC014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC018"))) PPC_WEAK_FUNC(sub_83BCC018);
PPC_FUNC_IMPL(__imp__sub_83BCC018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10392
	ctx.r3.s64 = ctx.r11.s64 + 10392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC024"))) PPC_WEAK_FUNC(sub_83BCC024);
PPC_FUNC_IMPL(__imp__sub_83BCC024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC028"))) PPC_WEAK_FUNC(sub_83BCC028);
PPC_FUNC_IMPL(__imp__sub_83BCC028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10400
	ctx.r3.s64 = ctx.r11.s64 + 10400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC034"))) PPC_WEAK_FUNC(sub_83BCC034);
PPC_FUNC_IMPL(__imp__sub_83BCC034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC038"))) PPC_WEAK_FUNC(sub_83BCC038);
PPC_FUNC_IMPL(__imp__sub_83BCC038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10408
	ctx.r3.s64 = ctx.r11.s64 + 10408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC044"))) PPC_WEAK_FUNC(sub_83BCC044);
PPC_FUNC_IMPL(__imp__sub_83BCC044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC048"))) PPC_WEAK_FUNC(sub_83BCC048);
PPC_FUNC_IMPL(__imp__sub_83BCC048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC054"))) PPC_WEAK_FUNC(sub_83BCC054);
PPC_FUNC_IMPL(__imp__sub_83BCC054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC058"))) PPC_WEAK_FUNC(sub_83BCC058);
PPC_FUNC_IMPL(__imp__sub_83BCC058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10424
	ctx.r3.s64 = ctx.r11.s64 + 10424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC064"))) PPC_WEAK_FUNC(sub_83BCC064);
PPC_FUNC_IMPL(__imp__sub_83BCC064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC068"))) PPC_WEAK_FUNC(sub_83BCC068);
PPC_FUNC_IMPL(__imp__sub_83BCC068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10432
	ctx.r3.s64 = ctx.r11.s64 + 10432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC074"))) PPC_WEAK_FUNC(sub_83BCC074);
PPC_FUNC_IMPL(__imp__sub_83BCC074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC078"))) PPC_WEAK_FUNC(sub_83BCC078);
PPC_FUNC_IMPL(__imp__sub_83BCC078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10440
	ctx.r3.s64 = ctx.r11.s64 + 10440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC084"))) PPC_WEAK_FUNC(sub_83BCC084);
PPC_FUNC_IMPL(__imp__sub_83BCC084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC088"))) PPC_WEAK_FUNC(sub_83BCC088);
PPC_FUNC_IMPL(__imp__sub_83BCC088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10448
	ctx.r3.s64 = ctx.r11.s64 + 10448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC094"))) PPC_WEAK_FUNC(sub_83BCC094);
PPC_FUNC_IMPL(__imp__sub_83BCC094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC098"))) PPC_WEAK_FUNC(sub_83BCC098);
PPC_FUNC_IMPL(__imp__sub_83BCC098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10456
	ctx.r3.s64 = ctx.r11.s64 + 10456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC0A4"))) PPC_WEAK_FUNC(sub_83BCC0A4);
PPC_FUNC_IMPL(__imp__sub_83BCC0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC0A8"))) PPC_WEAK_FUNC(sub_83BCC0A8);
PPC_FUNC_IMPL(__imp__sub_83BCC0A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10464
	ctx.r3.s64 = ctx.r11.s64 + 10464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC0B4"))) PPC_WEAK_FUNC(sub_83BCC0B4);
PPC_FUNC_IMPL(__imp__sub_83BCC0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC0B8"))) PPC_WEAK_FUNC(sub_83BCC0B8);
PPC_FUNC_IMPL(__imp__sub_83BCC0B8) {
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
	// addi r3,r11,1072
	ctx.r3.s64 = ctx.r11.s64 + 1072;
	// bl 0x83523120
	ctx.lr = 0x83BCC0D0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,10472
	ctx.r3.s64 = ctx.r10.s64 + 10472;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCC0DC;
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

__attribute__((alias("__imp__sub_83BCC0EC"))) PPC_WEAK_FUNC(sub_83BCC0EC);
PPC_FUNC_IMPL(__imp__sub_83BCC0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC0F0"))) PPC_WEAK_FUNC(sub_83BCC0F0);
PPC_FUNC_IMPL(__imp__sub_83BCC0F0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,1088
	ctx.r7.s64 = ctx.r8.s64 + 1088;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,1088(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1088);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,1088(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1088, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCC118"))) PPC_WEAK_FUNC(sub_83BCC118);
PPC_FUNC_IMPL(__imp__sub_83BCC118) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,14336
	ctx.r6.s64 = ctx.r7.s64 + 14336;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,14264(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 14264);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,1088(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1088);
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
	// std r9,14336(r7)
	PPC_STORE_U64(ctx.r7.u32 + 14336, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCC160"))) PPC_WEAK_FUNC(sub_83BCC160);
PPC_FUNC_IMPL(__imp__sub_83BCC160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10488
	ctx.r3.s64 = ctx.r11.s64 + 10488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC16C"))) PPC_WEAK_FUNC(sub_83BCC16C);
PPC_FUNC_IMPL(__imp__sub_83BCC16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC170"))) PPC_WEAK_FUNC(sub_83BCC170);
PPC_FUNC_IMPL(__imp__sub_83BCC170) {
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
	// addi r3,r11,1096
	ctx.r3.s64 = ctx.r11.s64 + 1096;
	// bl 0x8259af80
	ctx.lr = 0x83BCC188;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,10504
	ctx.r3.s64 = ctx.r10.s64 + 10504;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCC194;
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

__attribute__((alias("__imp__sub_83BCC1A4"))) PPC_WEAK_FUNC(sub_83BCC1A4);
PPC_FUNC_IMPL(__imp__sub_83BCC1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC1A8"))) PPC_WEAK_FUNC(sub_83BCC1A8);
PPC_FUNC_IMPL(__imp__sub_83BCC1A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,1076
	ctx.r11.s64 = ctx.r8.s64 + 1076;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,14312(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14312);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,10496
	ctx.r3.s64 = ctx.r6.s64 + 10496;
	// stw r10,1076(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1076, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC1D8"))) PPC_WEAK_FUNC(sub_83BCC1D8);
PPC_FUNC_IMPL(__imp__sub_83BCC1D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10512
	ctx.r3.s64 = ctx.r11.s64 + 10512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC1E4"))) PPC_WEAK_FUNC(sub_83BCC1E4);
PPC_FUNC_IMPL(__imp__sub_83BCC1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC1E8"))) PPC_WEAK_FUNC(sub_83BCC1E8);
PPC_FUNC_IMPL(__imp__sub_83BCC1E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10520
	ctx.r3.s64 = ctx.r11.s64 + 10520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC1F4"))) PPC_WEAK_FUNC(sub_83BCC1F4);
PPC_FUNC_IMPL(__imp__sub_83BCC1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC1F8"))) PPC_WEAK_FUNC(sub_83BCC1F8);
PPC_FUNC_IMPL(__imp__sub_83BCC1F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10528
	ctx.r3.s64 = ctx.r11.s64 + 10528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC204"))) PPC_WEAK_FUNC(sub_83BCC204);
PPC_FUNC_IMPL(__imp__sub_83BCC204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC208"))) PPC_WEAK_FUNC(sub_83BCC208);
PPC_FUNC_IMPL(__imp__sub_83BCC208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10536
	ctx.r3.s64 = ctx.r11.s64 + 10536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC214"))) PPC_WEAK_FUNC(sub_83BCC214);
PPC_FUNC_IMPL(__imp__sub_83BCC214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC218"))) PPC_WEAK_FUNC(sub_83BCC218);
PPC_FUNC_IMPL(__imp__sub_83BCC218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10544
	ctx.r3.s64 = ctx.r11.s64 + 10544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC224"))) PPC_WEAK_FUNC(sub_83BCC224);
PPC_FUNC_IMPL(__imp__sub_83BCC224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC228"))) PPC_WEAK_FUNC(sub_83BCC228);
PPC_FUNC_IMPL(__imp__sub_83BCC228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10552
	ctx.r3.s64 = ctx.r11.s64 + 10552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC234"))) PPC_WEAK_FUNC(sub_83BCC234);
PPC_FUNC_IMPL(__imp__sub_83BCC234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC238"))) PPC_WEAK_FUNC(sub_83BCC238);
PPC_FUNC_IMPL(__imp__sub_83BCC238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10560
	ctx.r3.s64 = ctx.r11.s64 + 10560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC244"))) PPC_WEAK_FUNC(sub_83BCC244);
PPC_FUNC_IMPL(__imp__sub_83BCC244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC248"))) PPC_WEAK_FUNC(sub_83BCC248);
PPC_FUNC_IMPL(__imp__sub_83BCC248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10568
	ctx.r3.s64 = ctx.r11.s64 + 10568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC254"))) PPC_WEAK_FUNC(sub_83BCC254);
PPC_FUNC_IMPL(__imp__sub_83BCC254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC258"))) PPC_WEAK_FUNC(sub_83BCC258);
PPC_FUNC_IMPL(__imp__sub_83BCC258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10576
	ctx.r3.s64 = ctx.r11.s64 + 10576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC264"))) PPC_WEAK_FUNC(sub_83BCC264);
PPC_FUNC_IMPL(__imp__sub_83BCC264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC268"))) PPC_WEAK_FUNC(sub_83BCC268);
PPC_FUNC_IMPL(__imp__sub_83BCC268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10584
	ctx.r3.s64 = ctx.r11.s64 + 10584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC274"))) PPC_WEAK_FUNC(sub_83BCC274);
PPC_FUNC_IMPL(__imp__sub_83BCC274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC278"))) PPC_WEAK_FUNC(sub_83BCC278);
PPC_FUNC_IMPL(__imp__sub_83BCC278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10592
	ctx.r3.s64 = ctx.r11.s64 + 10592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC284"))) PPC_WEAK_FUNC(sub_83BCC284);
PPC_FUNC_IMPL(__imp__sub_83BCC284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC288"))) PPC_WEAK_FUNC(sub_83BCC288);
PPC_FUNC_IMPL(__imp__sub_83BCC288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10600
	ctx.r3.s64 = ctx.r11.s64 + 10600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC294"))) PPC_WEAK_FUNC(sub_83BCC294);
PPC_FUNC_IMPL(__imp__sub_83BCC294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC298"))) PPC_WEAK_FUNC(sub_83BCC298);
PPC_FUNC_IMPL(__imp__sub_83BCC298) {
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
	// addi r3,r11,1440
	ctx.r3.s64 = ctx.r11.s64 + 1440;
	// bl 0x83523120
	ctx.lr = 0x83BCC2B0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,10608
	ctx.r3.s64 = ctx.r10.s64 + 10608;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCC2BC;
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

__attribute__((alias("__imp__sub_83BCC2CC"))) PPC_WEAK_FUNC(sub_83BCC2CC);
PPC_FUNC_IMPL(__imp__sub_83BCC2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC2D0"))) PPC_WEAK_FUNC(sub_83BCC2D0);
PPC_FUNC_IMPL(__imp__sub_83BCC2D0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,1456
	ctx.r7.s64 = ctx.r8.s64 + 1456;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,1456(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1456);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,1456(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1456, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCC2F8"))) PPC_WEAK_FUNC(sub_83BCC2F8);
PPC_FUNC_IMPL(__imp__sub_83BCC2F8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,14484
	ctx.r6.s64 = ctx.r7.s64 + 14484;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,14412(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 14412);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,1456(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1456);
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
	// std r9,14484(r7)
	PPC_STORE_U64(ctx.r7.u32 + 14484, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCC340"))) PPC_WEAK_FUNC(sub_83BCC340);
PPC_FUNC_IMPL(__imp__sub_83BCC340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10624
	ctx.r3.s64 = ctx.r11.s64 + 10624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC34C"))) PPC_WEAK_FUNC(sub_83BCC34C);
PPC_FUNC_IMPL(__imp__sub_83BCC34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC350"))) PPC_WEAK_FUNC(sub_83BCC350);
PPC_FUNC_IMPL(__imp__sub_83BCC350) {
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
	// addi r3,r11,1464
	ctx.r3.s64 = ctx.r11.s64 + 1464;
	// bl 0x8259af80
	ctx.lr = 0x83BCC368;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,10640
	ctx.r3.s64 = ctx.r10.s64 + 10640;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCC374;
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

__attribute__((alias("__imp__sub_83BCC384"))) PPC_WEAK_FUNC(sub_83BCC384);
PPC_FUNC_IMPL(__imp__sub_83BCC384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC388"))) PPC_WEAK_FUNC(sub_83BCC388);
PPC_FUNC_IMPL(__imp__sub_83BCC388) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,1444
	ctx.r11.s64 = ctx.r8.s64 + 1444;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,14460(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14460);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,10632
	ctx.r3.s64 = ctx.r6.s64 + 10632;
	// stw r10,1444(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1444, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC3B8"))) PPC_WEAK_FUNC(sub_83BCC3B8);
PPC_FUNC_IMPL(__imp__sub_83BCC3B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10648
	ctx.r3.s64 = ctx.r11.s64 + 10648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC3C4"))) PPC_WEAK_FUNC(sub_83BCC3C4);
PPC_FUNC_IMPL(__imp__sub_83BCC3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC3C8"))) PPC_WEAK_FUNC(sub_83BCC3C8);
PPC_FUNC_IMPL(__imp__sub_83BCC3C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10656
	ctx.r3.s64 = ctx.r11.s64 + 10656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC3D4"))) PPC_WEAK_FUNC(sub_83BCC3D4);
PPC_FUNC_IMPL(__imp__sub_83BCC3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC3D8"))) PPC_WEAK_FUNC(sub_83BCC3D8);
PPC_FUNC_IMPL(__imp__sub_83BCC3D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10664
	ctx.r3.s64 = ctx.r11.s64 + 10664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC3E4"))) PPC_WEAK_FUNC(sub_83BCC3E4);
PPC_FUNC_IMPL(__imp__sub_83BCC3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC3E8"))) PPC_WEAK_FUNC(sub_83BCC3E8);
PPC_FUNC_IMPL(__imp__sub_83BCC3E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10672
	ctx.r3.s64 = ctx.r11.s64 + 10672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC3F4"))) PPC_WEAK_FUNC(sub_83BCC3F4);
PPC_FUNC_IMPL(__imp__sub_83BCC3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC3F8"))) PPC_WEAK_FUNC(sub_83BCC3F8);
PPC_FUNC_IMPL(__imp__sub_83BCC3F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10680
	ctx.r3.s64 = ctx.r11.s64 + 10680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC404"))) PPC_WEAK_FUNC(sub_83BCC404);
PPC_FUNC_IMPL(__imp__sub_83BCC404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC408"))) PPC_WEAK_FUNC(sub_83BCC408);
PPC_FUNC_IMPL(__imp__sub_83BCC408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10688
	ctx.r3.s64 = ctx.r11.s64 + 10688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC414"))) PPC_WEAK_FUNC(sub_83BCC414);
PPC_FUNC_IMPL(__imp__sub_83BCC414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC418"))) PPC_WEAK_FUNC(sub_83BCC418);
PPC_FUNC_IMPL(__imp__sub_83BCC418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10696
	ctx.r3.s64 = ctx.r11.s64 + 10696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC424"))) PPC_WEAK_FUNC(sub_83BCC424);
PPC_FUNC_IMPL(__imp__sub_83BCC424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC428"))) PPC_WEAK_FUNC(sub_83BCC428);
PPC_FUNC_IMPL(__imp__sub_83BCC428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10704
	ctx.r3.s64 = ctx.r11.s64 + 10704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC434"))) PPC_WEAK_FUNC(sub_83BCC434);
PPC_FUNC_IMPL(__imp__sub_83BCC434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC438"))) PPC_WEAK_FUNC(sub_83BCC438);
PPC_FUNC_IMPL(__imp__sub_83BCC438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10712
	ctx.r3.s64 = ctx.r11.s64 + 10712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC444"))) PPC_WEAK_FUNC(sub_83BCC444);
PPC_FUNC_IMPL(__imp__sub_83BCC444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC448"))) PPC_WEAK_FUNC(sub_83BCC448);
PPC_FUNC_IMPL(__imp__sub_83BCC448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10720
	ctx.r3.s64 = ctx.r11.s64 + 10720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC454"))) PPC_WEAK_FUNC(sub_83BCC454);
PPC_FUNC_IMPL(__imp__sub_83BCC454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC458"))) PPC_WEAK_FUNC(sub_83BCC458);
PPC_FUNC_IMPL(__imp__sub_83BCC458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10728
	ctx.r3.s64 = ctx.r11.s64 + 10728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC464"))) PPC_WEAK_FUNC(sub_83BCC464);
PPC_FUNC_IMPL(__imp__sub_83BCC464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC468"))) PPC_WEAK_FUNC(sub_83BCC468);
PPC_FUNC_IMPL(__imp__sub_83BCC468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10736
	ctx.r3.s64 = ctx.r11.s64 + 10736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC474"))) PPC_WEAK_FUNC(sub_83BCC474);
PPC_FUNC_IMPL(__imp__sub_83BCC474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC478"))) PPC_WEAK_FUNC(sub_83BCC478);
PPC_FUNC_IMPL(__imp__sub_83BCC478) {
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
	// addi r3,r11,1808
	ctx.r3.s64 = ctx.r11.s64 + 1808;
	// bl 0x83523120
	ctx.lr = 0x83BCC490;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,10744
	ctx.r3.s64 = ctx.r10.s64 + 10744;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCC49C;
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

__attribute__((alias("__imp__sub_83BCC4AC"))) PPC_WEAK_FUNC(sub_83BCC4AC);
PPC_FUNC_IMPL(__imp__sub_83BCC4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC4B0"))) PPC_WEAK_FUNC(sub_83BCC4B0);
PPC_FUNC_IMPL(__imp__sub_83BCC4B0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,1824
	ctx.r7.s64 = ctx.r8.s64 + 1824;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,1824(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1824);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,1824(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1824, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCC4D8"))) PPC_WEAK_FUNC(sub_83BCC4D8);
PPC_FUNC_IMPL(__imp__sub_83BCC4D8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,14628
	ctx.r6.s64 = ctx.r7.s64 + 14628;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,14556(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 14556);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,1824(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1824);
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
	// std r9,14628(r7)
	PPC_STORE_U64(ctx.r7.u32 + 14628, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCC520"))) PPC_WEAK_FUNC(sub_83BCC520);
PPC_FUNC_IMPL(__imp__sub_83BCC520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10760
	ctx.r3.s64 = ctx.r11.s64 + 10760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC52C"))) PPC_WEAK_FUNC(sub_83BCC52C);
PPC_FUNC_IMPL(__imp__sub_83BCC52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC530"))) PPC_WEAK_FUNC(sub_83BCC530);
PPC_FUNC_IMPL(__imp__sub_83BCC530) {
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
	// addi r3,r11,1832
	ctx.r3.s64 = ctx.r11.s64 + 1832;
	// bl 0x8259af80
	ctx.lr = 0x83BCC548;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,10776
	ctx.r3.s64 = ctx.r10.s64 + 10776;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCC554;
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

__attribute__((alias("__imp__sub_83BCC564"))) PPC_WEAK_FUNC(sub_83BCC564);
PPC_FUNC_IMPL(__imp__sub_83BCC564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC568"))) PPC_WEAK_FUNC(sub_83BCC568);
PPC_FUNC_IMPL(__imp__sub_83BCC568) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,1812
	ctx.r11.s64 = ctx.r8.s64 + 1812;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,14604(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14604);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,10768
	ctx.r3.s64 = ctx.r6.s64 + 10768;
	// stw r10,1812(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1812, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC598"))) PPC_WEAK_FUNC(sub_83BCC598);
PPC_FUNC_IMPL(__imp__sub_83BCC598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10784
	ctx.r3.s64 = ctx.r11.s64 + 10784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC5A4"))) PPC_WEAK_FUNC(sub_83BCC5A4);
PPC_FUNC_IMPL(__imp__sub_83BCC5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC5A8"))) PPC_WEAK_FUNC(sub_83BCC5A8);
PPC_FUNC_IMPL(__imp__sub_83BCC5A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10792
	ctx.r3.s64 = ctx.r11.s64 + 10792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC5B4"))) PPC_WEAK_FUNC(sub_83BCC5B4);
PPC_FUNC_IMPL(__imp__sub_83BCC5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC5B8"))) PPC_WEAK_FUNC(sub_83BCC5B8);
PPC_FUNC_IMPL(__imp__sub_83BCC5B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10800
	ctx.r3.s64 = ctx.r11.s64 + 10800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC5C4"))) PPC_WEAK_FUNC(sub_83BCC5C4);
PPC_FUNC_IMPL(__imp__sub_83BCC5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC5C8"))) PPC_WEAK_FUNC(sub_83BCC5C8);
PPC_FUNC_IMPL(__imp__sub_83BCC5C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10808
	ctx.r3.s64 = ctx.r11.s64 + 10808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC5D4"))) PPC_WEAK_FUNC(sub_83BCC5D4);
PPC_FUNC_IMPL(__imp__sub_83BCC5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC5D8"))) PPC_WEAK_FUNC(sub_83BCC5D8);
PPC_FUNC_IMPL(__imp__sub_83BCC5D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10816
	ctx.r3.s64 = ctx.r11.s64 + 10816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC5E4"))) PPC_WEAK_FUNC(sub_83BCC5E4);
PPC_FUNC_IMPL(__imp__sub_83BCC5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC5E8"))) PPC_WEAK_FUNC(sub_83BCC5E8);
PPC_FUNC_IMPL(__imp__sub_83BCC5E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10824
	ctx.r3.s64 = ctx.r11.s64 + 10824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC5F4"))) PPC_WEAK_FUNC(sub_83BCC5F4);
PPC_FUNC_IMPL(__imp__sub_83BCC5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC5F8"))) PPC_WEAK_FUNC(sub_83BCC5F8);
PPC_FUNC_IMPL(__imp__sub_83BCC5F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10832
	ctx.r3.s64 = ctx.r11.s64 + 10832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC604"))) PPC_WEAK_FUNC(sub_83BCC604);
PPC_FUNC_IMPL(__imp__sub_83BCC604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC608"))) PPC_WEAK_FUNC(sub_83BCC608);
PPC_FUNC_IMPL(__imp__sub_83BCC608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10840
	ctx.r3.s64 = ctx.r11.s64 + 10840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC614"))) PPC_WEAK_FUNC(sub_83BCC614);
PPC_FUNC_IMPL(__imp__sub_83BCC614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC618"))) PPC_WEAK_FUNC(sub_83BCC618);
PPC_FUNC_IMPL(__imp__sub_83BCC618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10848
	ctx.r3.s64 = ctx.r11.s64 + 10848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC624"))) PPC_WEAK_FUNC(sub_83BCC624);
PPC_FUNC_IMPL(__imp__sub_83BCC624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC628"))) PPC_WEAK_FUNC(sub_83BCC628);
PPC_FUNC_IMPL(__imp__sub_83BCC628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10856
	ctx.r3.s64 = ctx.r11.s64 + 10856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC634"))) PPC_WEAK_FUNC(sub_83BCC634);
PPC_FUNC_IMPL(__imp__sub_83BCC634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC638"))) PPC_WEAK_FUNC(sub_83BCC638);
PPC_FUNC_IMPL(__imp__sub_83BCC638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10864
	ctx.r3.s64 = ctx.r11.s64 + 10864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC644"))) PPC_WEAK_FUNC(sub_83BCC644);
PPC_FUNC_IMPL(__imp__sub_83BCC644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC648"))) PPC_WEAK_FUNC(sub_83BCC648);
PPC_FUNC_IMPL(__imp__sub_83BCC648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10872
	ctx.r3.s64 = ctx.r11.s64 + 10872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC654"))) PPC_WEAK_FUNC(sub_83BCC654);
PPC_FUNC_IMPL(__imp__sub_83BCC654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC658"))) PPC_WEAK_FUNC(sub_83BCC658);
PPC_FUNC_IMPL(__imp__sub_83BCC658) {
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
	// addi r3,r11,2176
	ctx.r3.s64 = ctx.r11.s64 + 2176;
	// bl 0x83523120
	ctx.lr = 0x83BCC670;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,10880
	ctx.r3.s64 = ctx.r10.s64 + 10880;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCC67C;
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

__attribute__((alias("__imp__sub_83BCC68C"))) PPC_WEAK_FUNC(sub_83BCC68C);
PPC_FUNC_IMPL(__imp__sub_83BCC68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC690"))) PPC_WEAK_FUNC(sub_83BCC690);
PPC_FUNC_IMPL(__imp__sub_83BCC690) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,2192
	ctx.r7.s64 = ctx.r8.s64 + 2192;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,2192(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2192);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,2192(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2192, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCC6B8"))) PPC_WEAK_FUNC(sub_83BCC6B8);
PPC_FUNC_IMPL(__imp__sub_83BCC6B8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,14796
	ctx.r6.s64 = ctx.r7.s64 + 14796;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,14724(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 14724);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,2192(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2192);
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
	// std r9,14796(r7)
	PPC_STORE_U64(ctx.r7.u32 + 14796, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCC700"))) PPC_WEAK_FUNC(sub_83BCC700);
PPC_FUNC_IMPL(__imp__sub_83BCC700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10896
	ctx.r3.s64 = ctx.r11.s64 + 10896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC70C"))) PPC_WEAK_FUNC(sub_83BCC70C);
PPC_FUNC_IMPL(__imp__sub_83BCC70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC710"))) PPC_WEAK_FUNC(sub_83BCC710);
PPC_FUNC_IMPL(__imp__sub_83BCC710) {
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
	// addi r3,r11,2200
	ctx.r3.s64 = ctx.r11.s64 + 2200;
	// bl 0x8259af80
	ctx.lr = 0x83BCC728;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,10912
	ctx.r3.s64 = ctx.r10.s64 + 10912;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCC734;
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

__attribute__((alias("__imp__sub_83BCC744"))) PPC_WEAK_FUNC(sub_83BCC744);
PPC_FUNC_IMPL(__imp__sub_83BCC744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC748"))) PPC_WEAK_FUNC(sub_83BCC748);
PPC_FUNC_IMPL(__imp__sub_83BCC748) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,2180
	ctx.r11.s64 = ctx.r8.s64 + 2180;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,14772(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14772);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,10904
	ctx.r3.s64 = ctx.r6.s64 + 10904;
	// stw r10,2180(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2180, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC778"))) PPC_WEAK_FUNC(sub_83BCC778);
PPC_FUNC_IMPL(__imp__sub_83BCC778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10920
	ctx.r3.s64 = ctx.r11.s64 + 10920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC784"))) PPC_WEAK_FUNC(sub_83BCC784);
PPC_FUNC_IMPL(__imp__sub_83BCC784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC788"))) PPC_WEAK_FUNC(sub_83BCC788);
PPC_FUNC_IMPL(__imp__sub_83BCC788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10928
	ctx.r3.s64 = ctx.r11.s64 + 10928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC794"))) PPC_WEAK_FUNC(sub_83BCC794);
PPC_FUNC_IMPL(__imp__sub_83BCC794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC798"))) PPC_WEAK_FUNC(sub_83BCC798);
PPC_FUNC_IMPL(__imp__sub_83BCC798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10936
	ctx.r3.s64 = ctx.r11.s64 + 10936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC7A4"))) PPC_WEAK_FUNC(sub_83BCC7A4);
PPC_FUNC_IMPL(__imp__sub_83BCC7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC7A8"))) PPC_WEAK_FUNC(sub_83BCC7A8);
PPC_FUNC_IMPL(__imp__sub_83BCC7A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10944
	ctx.r3.s64 = ctx.r11.s64 + 10944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC7B4"))) PPC_WEAK_FUNC(sub_83BCC7B4);
PPC_FUNC_IMPL(__imp__sub_83BCC7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC7B8"))) PPC_WEAK_FUNC(sub_83BCC7B8);
PPC_FUNC_IMPL(__imp__sub_83BCC7B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10952
	ctx.r3.s64 = ctx.r11.s64 + 10952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC7C4"))) PPC_WEAK_FUNC(sub_83BCC7C4);
PPC_FUNC_IMPL(__imp__sub_83BCC7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC7C8"))) PPC_WEAK_FUNC(sub_83BCC7C8);
PPC_FUNC_IMPL(__imp__sub_83BCC7C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10960
	ctx.r3.s64 = ctx.r11.s64 + 10960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC7D4"))) PPC_WEAK_FUNC(sub_83BCC7D4);
PPC_FUNC_IMPL(__imp__sub_83BCC7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC7D8"))) PPC_WEAK_FUNC(sub_83BCC7D8);
PPC_FUNC_IMPL(__imp__sub_83BCC7D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10968
	ctx.r3.s64 = ctx.r11.s64 + 10968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC7E4"))) PPC_WEAK_FUNC(sub_83BCC7E4);
PPC_FUNC_IMPL(__imp__sub_83BCC7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC7E8"))) PPC_WEAK_FUNC(sub_83BCC7E8);
PPC_FUNC_IMPL(__imp__sub_83BCC7E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10976
	ctx.r3.s64 = ctx.r11.s64 + 10976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC7F4"))) PPC_WEAK_FUNC(sub_83BCC7F4);
PPC_FUNC_IMPL(__imp__sub_83BCC7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC7F8"))) PPC_WEAK_FUNC(sub_83BCC7F8);
PPC_FUNC_IMPL(__imp__sub_83BCC7F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10984
	ctx.r3.s64 = ctx.r11.s64 + 10984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC804"))) PPC_WEAK_FUNC(sub_83BCC804);
PPC_FUNC_IMPL(__imp__sub_83BCC804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC808"))) PPC_WEAK_FUNC(sub_83BCC808);
PPC_FUNC_IMPL(__imp__sub_83BCC808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,10992
	ctx.r3.s64 = ctx.r11.s64 + 10992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC814"))) PPC_WEAK_FUNC(sub_83BCC814);
PPC_FUNC_IMPL(__imp__sub_83BCC814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCC818"))) PPC_WEAK_FUNC(sub_83BCC818);
PPC_FUNC_IMPL(__imp__sub_83BCC818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,11000
	ctx.r3.s64 = ctx.r11.s64 + 11000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCC824"))) PPC_WEAK_FUNC(sub_83BCC824);
PPC_FUNC_IMPL(__imp__sub_83BCC824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

