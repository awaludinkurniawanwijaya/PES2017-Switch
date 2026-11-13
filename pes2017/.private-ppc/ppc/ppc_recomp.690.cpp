#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BFF9A0"))) PPC_WEAK_FUNC(sub_83BFF9A0);
PPC_FUNC_IMPL(__imp__sub_83BFF9A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,7728
	ctx.r3.s64 = ctx.r11.s64 + 7728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFF9AC"))) PPC_WEAK_FUNC(sub_83BFF9AC);
PPC_FUNC_IMPL(__imp__sub_83BFF9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFF9B0"))) PPC_WEAK_FUNC(sub_83BFF9B0);
PPC_FUNC_IMPL(__imp__sub_83BFF9B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,7736
	ctx.r3.s64 = ctx.r11.s64 + 7736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFF9BC"))) PPC_WEAK_FUNC(sub_83BFF9BC);
PPC_FUNC_IMPL(__imp__sub_83BFF9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFF9C0"))) PPC_WEAK_FUNC(sub_83BFF9C0);
PPC_FUNC_IMPL(__imp__sub_83BFF9C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,7744
	ctx.r3.s64 = ctx.r11.s64 + 7744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFF9CC"))) PPC_WEAK_FUNC(sub_83BFF9CC);
PPC_FUNC_IMPL(__imp__sub_83BFF9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFF9D0"))) PPC_WEAK_FUNC(sub_83BFF9D0);
PPC_FUNC_IMPL(__imp__sub_83BFF9D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,7752
	ctx.r3.s64 = ctx.r11.s64 + 7752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFF9DC"))) PPC_WEAK_FUNC(sub_83BFF9DC);
PPC_FUNC_IMPL(__imp__sub_83BFF9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFF9E0"))) PPC_WEAK_FUNC(sub_83BFF9E0);
PPC_FUNC_IMPL(__imp__sub_83BFF9E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,7760
	ctx.r3.s64 = ctx.r11.s64 + 7760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFF9EC"))) PPC_WEAK_FUNC(sub_83BFF9EC);
PPC_FUNC_IMPL(__imp__sub_83BFF9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFF9F0"))) PPC_WEAK_FUNC(sub_83BFF9F0);
PPC_FUNC_IMPL(__imp__sub_83BFF9F0) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-31064
	ctx.r3.s64 = ctx.r11.s64 + -31064;
	// bl 0x83523120
	ctx.lr = 0x83BFFA08;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,7768
	ctx.r3.s64 = ctx.r10.s64 + 7768;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFFA14;
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

__attribute__((alias("__imp__sub_83BFFA24"))) PPC_WEAK_FUNC(sub_83BFFA24);
PPC_FUNC_IMPL(__imp__sub_83BFFA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFA28"))) PPC_WEAK_FUNC(sub_83BFFA28);
PPC_FUNC_IMPL(__imp__sub_83BFFA28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,7784
	ctx.r3.s64 = ctx.r11.s64 + 7784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFA34"))) PPC_WEAK_FUNC(sub_83BFFA34);
PPC_FUNC_IMPL(__imp__sub_83BFFA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFA38"))) PPC_WEAK_FUNC(sub_83BFFA38);
PPC_FUNC_IMPL(__imp__sub_83BFFA38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,7792
	ctx.r3.s64 = ctx.r11.s64 + 7792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFA44"))) PPC_WEAK_FUNC(sub_83BFFA44);
PPC_FUNC_IMPL(__imp__sub_83BFFA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFA48"))) PPC_WEAK_FUNC(sub_83BFFA48);
PPC_FUNC_IMPL(__imp__sub_83BFFA48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,7800
	ctx.r3.s64 = ctx.r11.s64 + 7800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFA54"))) PPC_WEAK_FUNC(sub_83BFFA54);
PPC_FUNC_IMPL(__imp__sub_83BFFA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFA58"))) PPC_WEAK_FUNC(sub_83BFFA58);
PPC_FUNC_IMPL(__imp__sub_83BFFA58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,7808
	ctx.r3.s64 = ctx.r11.s64 + 7808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFA64"))) PPC_WEAK_FUNC(sub_83BFFA64);
PPC_FUNC_IMPL(__imp__sub_83BFFA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFA68"))) PPC_WEAK_FUNC(sub_83BFFA68);
PPC_FUNC_IMPL(__imp__sub_83BFFA68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,7816
	ctx.r3.s64 = ctx.r11.s64 + 7816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFA74"))) PPC_WEAK_FUNC(sub_83BFFA74);
PPC_FUNC_IMPL(__imp__sub_83BFFA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFA78"))) PPC_WEAK_FUNC(sub_83BFFA78);
PPC_FUNC_IMPL(__imp__sub_83BFFA78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,7824
	ctx.r3.s64 = ctx.r11.s64 + 7824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFA84"))) PPC_WEAK_FUNC(sub_83BFFA84);
PPC_FUNC_IMPL(__imp__sub_83BFFA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFA88"))) PPC_WEAK_FUNC(sub_83BFFA88);
PPC_FUNC_IMPL(__imp__sub_83BFFA88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,7832
	ctx.r3.s64 = ctx.r11.s64 + 7832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFA94"))) PPC_WEAK_FUNC(sub_83BFFA94);
PPC_FUNC_IMPL(__imp__sub_83BFFA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFA98"))) PPC_WEAK_FUNC(sub_83BFFA98);
PPC_FUNC_IMPL(__imp__sub_83BFFA98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,7840
	ctx.r3.s64 = ctx.r11.s64 + 7840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFAA4"))) PPC_WEAK_FUNC(sub_83BFFAA4);
PPC_FUNC_IMPL(__imp__sub_83BFFAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFAA8"))) PPC_WEAK_FUNC(sub_83BFFAA8);
PPC_FUNC_IMPL(__imp__sub_83BFFAA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,7848
	ctx.r3.s64 = ctx.r11.s64 + 7848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFAB4"))) PPC_WEAK_FUNC(sub_83BFFAB4);
PPC_FUNC_IMPL(__imp__sub_83BFFAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFAB8"))) PPC_WEAK_FUNC(sub_83BFFAB8);
PPC_FUNC_IMPL(__imp__sub_83BFFAB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,7856
	ctx.r3.s64 = ctx.r11.s64 + 7856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFAC4"))) PPC_WEAK_FUNC(sub_83BFFAC4);
PPC_FUNC_IMPL(__imp__sub_83BFFAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFAC8"))) PPC_WEAK_FUNC(sub_83BFFAC8);
PPC_FUNC_IMPL(__imp__sub_83BFFAC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,7864
	ctx.r3.s64 = ctx.r11.s64 + 7864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFAD4"))) PPC_WEAK_FUNC(sub_83BFFAD4);
PPC_FUNC_IMPL(__imp__sub_83BFFAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFAD8"))) PPC_WEAK_FUNC(sub_83BFFAD8);
PPC_FUNC_IMPL(__imp__sub_83BFFAD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,7872
	ctx.r3.s64 = ctx.r11.s64 + 7872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFAE4"))) PPC_WEAK_FUNC(sub_83BFFAE4);
PPC_FUNC_IMPL(__imp__sub_83BFFAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFAE8"))) PPC_WEAK_FUNC(sub_83BFFAE8);
PPC_FUNC_IMPL(__imp__sub_83BFFAE8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-30636
	ctx.r7.s64 = ctx.r8.s64 + -30636;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-30636(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30636);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-30636(r8)
	PPC_STORE_U32(ctx.r8.u32 + -30636, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFFB10"))) PPC_WEAK_FUNC(sub_83BFFB10);
PPC_FUNC_IMPL(__imp__sub_83BFFB10) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,22760
	ctx.r6.s64 = ctx.r7.s64 + 22760;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,22688(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 22688);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-30636(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -30636);
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
	// std r9,22760(r7)
	PPC_STORE_U64(ctx.r7.u32 + 22760, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFFB58"))) PPC_WEAK_FUNC(sub_83BFFB58);
PPC_FUNC_IMPL(__imp__sub_83BFFB58) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-30652
	ctx.r3.s64 = ctx.r11.s64 + -30652;
	// bl 0x83523120
	ctx.lr = 0x83BFFB70;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,7880
	ctx.r3.s64 = ctx.r10.s64 + 7880;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFFB7C;
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

__attribute__((alias("__imp__sub_83BFFB8C"))) PPC_WEAK_FUNC(sub_83BFFB8C);
PPC_FUNC_IMPL(__imp__sub_83BFFB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFB90"))) PPC_WEAK_FUNC(sub_83BFFB90);
PPC_FUNC_IMPL(__imp__sub_83BFFB90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,7896
	ctx.r3.s64 = ctx.r11.s64 + 7896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFB9C"))) PPC_WEAK_FUNC(sub_83BFFB9C);
PPC_FUNC_IMPL(__imp__sub_83BFFB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFBA0"))) PPC_WEAK_FUNC(sub_83BFFBA0);
PPC_FUNC_IMPL(__imp__sub_83BFFBA0) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-30624
	ctx.r3.s64 = ctx.r11.s64 + -30624;
	// bl 0x8259af80
	ctx.lr = 0x83BFFBB8;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,7912
	ctx.r3.s64 = ctx.r10.s64 + 7912;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFFBC4;
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

__attribute__((alias("__imp__sub_83BFFBD4"))) PPC_WEAK_FUNC(sub_83BFFBD4);
PPC_FUNC_IMPL(__imp__sub_83BFFBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFBD8"))) PPC_WEAK_FUNC(sub_83BFFBD8);
PPC_FUNC_IMPL(__imp__sub_83BFFBD8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-30648
	ctx.r11.s64 = ctx.r8.s64 + -30648;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,22736(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22736);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,7904
	ctx.r3.s64 = ctx.r6.s64 + 7904;
	// stw r10,-30648(r8)
	PPC_STORE_U32(ctx.r8.u32 + -30648, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFC08"))) PPC_WEAK_FUNC(sub_83BFFC08);
PPC_FUNC_IMPL(__imp__sub_83BFFC08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,7920
	ctx.r3.s64 = ctx.r11.s64 + 7920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFC14"))) PPC_WEAK_FUNC(sub_83BFFC14);
PPC_FUNC_IMPL(__imp__sub_83BFFC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFC18"))) PPC_WEAK_FUNC(sub_83BFFC18);
PPC_FUNC_IMPL(__imp__sub_83BFFC18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,7928
	ctx.r3.s64 = ctx.r11.s64 + 7928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFC24"))) PPC_WEAK_FUNC(sub_83BFFC24);
PPC_FUNC_IMPL(__imp__sub_83BFFC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFC28"))) PPC_WEAK_FUNC(sub_83BFFC28);
PPC_FUNC_IMPL(__imp__sub_83BFFC28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,7936
	ctx.r3.s64 = ctx.r11.s64 + 7936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFC34"))) PPC_WEAK_FUNC(sub_83BFFC34);
PPC_FUNC_IMPL(__imp__sub_83BFFC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFC38"))) PPC_WEAK_FUNC(sub_83BFFC38);
PPC_FUNC_IMPL(__imp__sub_83BFFC38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,7944
	ctx.r3.s64 = ctx.r11.s64 + 7944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFC44"))) PPC_WEAK_FUNC(sub_83BFFC44);
PPC_FUNC_IMPL(__imp__sub_83BFFC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFC48"))) PPC_WEAK_FUNC(sub_83BFFC48);
PPC_FUNC_IMPL(__imp__sub_83BFFC48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,7952
	ctx.r3.s64 = ctx.r11.s64 + 7952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFC54"))) PPC_WEAK_FUNC(sub_83BFFC54);
PPC_FUNC_IMPL(__imp__sub_83BFFC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFC58"))) PPC_WEAK_FUNC(sub_83BFFC58);
PPC_FUNC_IMPL(__imp__sub_83BFFC58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,7960
	ctx.r3.s64 = ctx.r11.s64 + 7960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFC64"))) PPC_WEAK_FUNC(sub_83BFFC64);
PPC_FUNC_IMPL(__imp__sub_83BFFC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFC68"))) PPC_WEAK_FUNC(sub_83BFFC68);
PPC_FUNC_IMPL(__imp__sub_83BFFC68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,7968
	ctx.r3.s64 = ctx.r11.s64 + 7968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFC74"))) PPC_WEAK_FUNC(sub_83BFFC74);
PPC_FUNC_IMPL(__imp__sub_83BFFC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFC78"))) PPC_WEAK_FUNC(sub_83BFFC78);
PPC_FUNC_IMPL(__imp__sub_83BFFC78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,7976
	ctx.r3.s64 = ctx.r11.s64 + 7976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFC84"))) PPC_WEAK_FUNC(sub_83BFFC84);
PPC_FUNC_IMPL(__imp__sub_83BFFC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFC88"))) PPC_WEAK_FUNC(sub_83BFFC88);
PPC_FUNC_IMPL(__imp__sub_83BFFC88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,7984
	ctx.r3.s64 = ctx.r11.s64 + 7984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFC94"))) PPC_WEAK_FUNC(sub_83BFFC94);
PPC_FUNC_IMPL(__imp__sub_83BFFC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFC98"))) PPC_WEAK_FUNC(sub_83BFFC98);
PPC_FUNC_IMPL(__imp__sub_83BFFC98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,7992
	ctx.r3.s64 = ctx.r11.s64 + 7992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFCA4"))) PPC_WEAK_FUNC(sub_83BFFCA4);
PPC_FUNC_IMPL(__imp__sub_83BFFCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFCA8"))) PPC_WEAK_FUNC(sub_83BFFCA8);
PPC_FUNC_IMPL(__imp__sub_83BFFCA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8000
	ctx.r3.s64 = ctx.r11.s64 + 8000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFCB4"))) PPC_WEAK_FUNC(sub_83BFFCB4);
PPC_FUNC_IMPL(__imp__sub_83BFFCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFCB8"))) PPC_WEAK_FUNC(sub_83BFFCB8);
PPC_FUNC_IMPL(__imp__sub_83BFFCB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8008
	ctx.r3.s64 = ctx.r11.s64 + 8008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFCC4"))) PPC_WEAK_FUNC(sub_83BFFCC4);
PPC_FUNC_IMPL(__imp__sub_83BFFCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFCC8"))) PPC_WEAK_FUNC(sub_83BFFCC8);
PPC_FUNC_IMPL(__imp__sub_83BFFCC8) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-30280
	ctx.r3.s64 = ctx.r11.s64 + -30280;
	// bl 0x83523120
	ctx.lr = 0x83BFFCE0;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,8016
	ctx.r3.s64 = ctx.r10.s64 + 8016;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFFCEC;
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

__attribute__((alias("__imp__sub_83BFFCFC"))) PPC_WEAK_FUNC(sub_83BFFCFC);
PPC_FUNC_IMPL(__imp__sub_83BFFCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFD00"))) PPC_WEAK_FUNC(sub_83BFFD00);
PPC_FUNC_IMPL(__imp__sub_83BFFD00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8032
	ctx.r3.s64 = ctx.r11.s64 + 8032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFD0C"))) PPC_WEAK_FUNC(sub_83BFFD0C);
PPC_FUNC_IMPL(__imp__sub_83BFFD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFD10"))) PPC_WEAK_FUNC(sub_83BFFD10);
PPC_FUNC_IMPL(__imp__sub_83BFFD10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8040
	ctx.r3.s64 = ctx.r11.s64 + 8040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFD1C"))) PPC_WEAK_FUNC(sub_83BFFD1C);
PPC_FUNC_IMPL(__imp__sub_83BFFD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFD20"))) PPC_WEAK_FUNC(sub_83BFFD20);
PPC_FUNC_IMPL(__imp__sub_83BFFD20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8048
	ctx.r3.s64 = ctx.r11.s64 + 8048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFD2C"))) PPC_WEAK_FUNC(sub_83BFFD2C);
PPC_FUNC_IMPL(__imp__sub_83BFFD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFD30"))) PPC_WEAK_FUNC(sub_83BFFD30);
PPC_FUNC_IMPL(__imp__sub_83BFFD30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8056
	ctx.r3.s64 = ctx.r11.s64 + 8056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFD3C"))) PPC_WEAK_FUNC(sub_83BFFD3C);
PPC_FUNC_IMPL(__imp__sub_83BFFD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFD40"))) PPC_WEAK_FUNC(sub_83BFFD40);
PPC_FUNC_IMPL(__imp__sub_83BFFD40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8064
	ctx.r3.s64 = ctx.r11.s64 + 8064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFD4C"))) PPC_WEAK_FUNC(sub_83BFFD4C);
PPC_FUNC_IMPL(__imp__sub_83BFFD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFD50"))) PPC_WEAK_FUNC(sub_83BFFD50);
PPC_FUNC_IMPL(__imp__sub_83BFFD50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8072
	ctx.r3.s64 = ctx.r11.s64 + 8072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFD5C"))) PPC_WEAK_FUNC(sub_83BFFD5C);
PPC_FUNC_IMPL(__imp__sub_83BFFD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFD60"))) PPC_WEAK_FUNC(sub_83BFFD60);
PPC_FUNC_IMPL(__imp__sub_83BFFD60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8080
	ctx.r3.s64 = ctx.r11.s64 + 8080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFD6C"))) PPC_WEAK_FUNC(sub_83BFFD6C);
PPC_FUNC_IMPL(__imp__sub_83BFFD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFD70"))) PPC_WEAK_FUNC(sub_83BFFD70);
PPC_FUNC_IMPL(__imp__sub_83BFFD70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8088
	ctx.r3.s64 = ctx.r11.s64 + 8088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFD7C"))) PPC_WEAK_FUNC(sub_83BFFD7C);
PPC_FUNC_IMPL(__imp__sub_83BFFD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFD80"))) PPC_WEAK_FUNC(sub_83BFFD80);
PPC_FUNC_IMPL(__imp__sub_83BFFD80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8096
	ctx.r3.s64 = ctx.r11.s64 + 8096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFD8C"))) PPC_WEAK_FUNC(sub_83BFFD8C);
PPC_FUNC_IMPL(__imp__sub_83BFFD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFD90"))) PPC_WEAK_FUNC(sub_83BFFD90);
PPC_FUNC_IMPL(__imp__sub_83BFFD90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8104
	ctx.r3.s64 = ctx.r11.s64 + 8104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFD9C"))) PPC_WEAK_FUNC(sub_83BFFD9C);
PPC_FUNC_IMPL(__imp__sub_83BFFD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFDA0"))) PPC_WEAK_FUNC(sub_83BFFDA0);
PPC_FUNC_IMPL(__imp__sub_83BFFDA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8112
	ctx.r3.s64 = ctx.r11.s64 + 8112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFDAC"))) PPC_WEAK_FUNC(sub_83BFFDAC);
PPC_FUNC_IMPL(__imp__sub_83BFFDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFDB0"))) PPC_WEAK_FUNC(sub_83BFFDB0);
PPC_FUNC_IMPL(__imp__sub_83BFFDB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8120
	ctx.r3.s64 = ctx.r11.s64 + 8120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFDBC"))) PPC_WEAK_FUNC(sub_83BFFDBC);
PPC_FUNC_IMPL(__imp__sub_83BFFDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFDC0"))) PPC_WEAK_FUNC(sub_83BFFDC0);
PPC_FUNC_IMPL(__imp__sub_83BFFDC0) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-30240
	ctx.r3.s64 = ctx.r11.s64 + -30240;
	// bl 0x83523120
	ctx.lr = 0x83BFFDD8;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,8128
	ctx.r3.s64 = ctx.r10.s64 + 8128;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFFDE4;
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

__attribute__((alias("__imp__sub_83BFFDF4"))) PPC_WEAK_FUNC(sub_83BFFDF4);
PPC_FUNC_IMPL(__imp__sub_83BFFDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFDF8"))) PPC_WEAK_FUNC(sub_83BFFDF8);
PPC_FUNC_IMPL(__imp__sub_83BFFDF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8144
	ctx.r3.s64 = ctx.r11.s64 + 8144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFE04"))) PPC_WEAK_FUNC(sub_83BFFE04);
PPC_FUNC_IMPL(__imp__sub_83BFFE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFE08"))) PPC_WEAK_FUNC(sub_83BFFE08);
PPC_FUNC_IMPL(__imp__sub_83BFFE08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8152
	ctx.r3.s64 = ctx.r11.s64 + 8152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFE14"))) PPC_WEAK_FUNC(sub_83BFFE14);
PPC_FUNC_IMPL(__imp__sub_83BFFE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFE18"))) PPC_WEAK_FUNC(sub_83BFFE18);
PPC_FUNC_IMPL(__imp__sub_83BFFE18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8160
	ctx.r3.s64 = ctx.r11.s64 + 8160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFE24"))) PPC_WEAK_FUNC(sub_83BFFE24);
PPC_FUNC_IMPL(__imp__sub_83BFFE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFE28"))) PPC_WEAK_FUNC(sub_83BFFE28);
PPC_FUNC_IMPL(__imp__sub_83BFFE28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8168
	ctx.r3.s64 = ctx.r11.s64 + 8168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFE34"))) PPC_WEAK_FUNC(sub_83BFFE34);
PPC_FUNC_IMPL(__imp__sub_83BFFE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFE38"))) PPC_WEAK_FUNC(sub_83BFFE38);
PPC_FUNC_IMPL(__imp__sub_83BFFE38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8176
	ctx.r3.s64 = ctx.r11.s64 + 8176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFE44"))) PPC_WEAK_FUNC(sub_83BFFE44);
PPC_FUNC_IMPL(__imp__sub_83BFFE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFE48"))) PPC_WEAK_FUNC(sub_83BFFE48);
PPC_FUNC_IMPL(__imp__sub_83BFFE48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8184
	ctx.r3.s64 = ctx.r11.s64 + 8184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFE54"))) PPC_WEAK_FUNC(sub_83BFFE54);
PPC_FUNC_IMPL(__imp__sub_83BFFE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFE58"))) PPC_WEAK_FUNC(sub_83BFFE58);
PPC_FUNC_IMPL(__imp__sub_83BFFE58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8192
	ctx.r3.s64 = ctx.r11.s64 + 8192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFE64"))) PPC_WEAK_FUNC(sub_83BFFE64);
PPC_FUNC_IMPL(__imp__sub_83BFFE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFE68"))) PPC_WEAK_FUNC(sub_83BFFE68);
PPC_FUNC_IMPL(__imp__sub_83BFFE68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8200
	ctx.r3.s64 = ctx.r11.s64 + 8200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFE74"))) PPC_WEAK_FUNC(sub_83BFFE74);
PPC_FUNC_IMPL(__imp__sub_83BFFE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFE78"))) PPC_WEAK_FUNC(sub_83BFFE78);
PPC_FUNC_IMPL(__imp__sub_83BFFE78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8208
	ctx.r3.s64 = ctx.r11.s64 + 8208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFE84"))) PPC_WEAK_FUNC(sub_83BFFE84);
PPC_FUNC_IMPL(__imp__sub_83BFFE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFE88"))) PPC_WEAK_FUNC(sub_83BFFE88);
PPC_FUNC_IMPL(__imp__sub_83BFFE88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8216
	ctx.r3.s64 = ctx.r11.s64 + 8216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFE94"))) PPC_WEAK_FUNC(sub_83BFFE94);
PPC_FUNC_IMPL(__imp__sub_83BFFE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFE98"))) PPC_WEAK_FUNC(sub_83BFFE98);
PPC_FUNC_IMPL(__imp__sub_83BFFE98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8224
	ctx.r3.s64 = ctx.r11.s64 + 8224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFEA4"))) PPC_WEAK_FUNC(sub_83BFFEA4);
PPC_FUNC_IMPL(__imp__sub_83BFFEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFEA8"))) PPC_WEAK_FUNC(sub_83BFFEA8);
PPC_FUNC_IMPL(__imp__sub_83BFFEA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8232
	ctx.r3.s64 = ctx.r11.s64 + 8232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFEB4"))) PPC_WEAK_FUNC(sub_83BFFEB4);
PPC_FUNC_IMPL(__imp__sub_83BFFEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFEB8"))) PPC_WEAK_FUNC(sub_83BFFEB8);
PPC_FUNC_IMPL(__imp__sub_83BFFEB8) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-30232
	ctx.r3.s64 = ctx.r11.s64 + -30232;
	// bl 0x83523120
	ctx.lr = 0x83BFFED0;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,8240
	ctx.r3.s64 = ctx.r10.s64 + 8240;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFFEDC;
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

__attribute__((alias("__imp__sub_83BFFEEC"))) PPC_WEAK_FUNC(sub_83BFFEEC);
PPC_FUNC_IMPL(__imp__sub_83BFFEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFEF0"))) PPC_WEAK_FUNC(sub_83BFFEF0);
PPC_FUNC_IMPL(__imp__sub_83BFFEF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8256
	ctx.r3.s64 = ctx.r11.s64 + 8256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFEFC"))) PPC_WEAK_FUNC(sub_83BFFEFC);
PPC_FUNC_IMPL(__imp__sub_83BFFEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFF00"))) PPC_WEAK_FUNC(sub_83BFFF00);
PPC_FUNC_IMPL(__imp__sub_83BFFF00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8264
	ctx.r3.s64 = ctx.r11.s64 + 8264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFF0C"))) PPC_WEAK_FUNC(sub_83BFFF0C);
PPC_FUNC_IMPL(__imp__sub_83BFFF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFF10"))) PPC_WEAK_FUNC(sub_83BFFF10);
PPC_FUNC_IMPL(__imp__sub_83BFFF10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8272
	ctx.r3.s64 = ctx.r11.s64 + 8272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFF1C"))) PPC_WEAK_FUNC(sub_83BFFF1C);
PPC_FUNC_IMPL(__imp__sub_83BFFF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFF20"))) PPC_WEAK_FUNC(sub_83BFFF20);
PPC_FUNC_IMPL(__imp__sub_83BFFF20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8280
	ctx.r3.s64 = ctx.r11.s64 + 8280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFF2C"))) PPC_WEAK_FUNC(sub_83BFFF2C);
PPC_FUNC_IMPL(__imp__sub_83BFFF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFF30"))) PPC_WEAK_FUNC(sub_83BFFF30);
PPC_FUNC_IMPL(__imp__sub_83BFFF30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8288
	ctx.r3.s64 = ctx.r11.s64 + 8288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFF3C"))) PPC_WEAK_FUNC(sub_83BFFF3C);
PPC_FUNC_IMPL(__imp__sub_83BFFF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFF40"))) PPC_WEAK_FUNC(sub_83BFFF40);
PPC_FUNC_IMPL(__imp__sub_83BFFF40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8296
	ctx.r3.s64 = ctx.r11.s64 + 8296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFF4C"))) PPC_WEAK_FUNC(sub_83BFFF4C);
PPC_FUNC_IMPL(__imp__sub_83BFFF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFF50"))) PPC_WEAK_FUNC(sub_83BFFF50);
PPC_FUNC_IMPL(__imp__sub_83BFFF50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8304
	ctx.r3.s64 = ctx.r11.s64 + 8304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFF5C"))) PPC_WEAK_FUNC(sub_83BFFF5C);
PPC_FUNC_IMPL(__imp__sub_83BFFF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFF60"))) PPC_WEAK_FUNC(sub_83BFFF60);
PPC_FUNC_IMPL(__imp__sub_83BFFF60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8312
	ctx.r3.s64 = ctx.r11.s64 + 8312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFF6C"))) PPC_WEAK_FUNC(sub_83BFFF6C);
PPC_FUNC_IMPL(__imp__sub_83BFFF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFF70"))) PPC_WEAK_FUNC(sub_83BFFF70);
PPC_FUNC_IMPL(__imp__sub_83BFFF70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8320
	ctx.r3.s64 = ctx.r11.s64 + 8320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFF7C"))) PPC_WEAK_FUNC(sub_83BFFF7C);
PPC_FUNC_IMPL(__imp__sub_83BFFF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFF80"))) PPC_WEAK_FUNC(sub_83BFFF80);
PPC_FUNC_IMPL(__imp__sub_83BFFF80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8328
	ctx.r3.s64 = ctx.r11.s64 + 8328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFF8C"))) PPC_WEAK_FUNC(sub_83BFFF8C);
PPC_FUNC_IMPL(__imp__sub_83BFFF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFF90"))) PPC_WEAK_FUNC(sub_83BFFF90);
PPC_FUNC_IMPL(__imp__sub_83BFFF90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8336
	ctx.r3.s64 = ctx.r11.s64 + 8336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFF9C"))) PPC_WEAK_FUNC(sub_83BFFF9C);
PPC_FUNC_IMPL(__imp__sub_83BFFF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFFA0"))) PPC_WEAK_FUNC(sub_83BFFFA0);
PPC_FUNC_IMPL(__imp__sub_83BFFFA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8344
	ctx.r3.s64 = ctx.r11.s64 + 8344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFFAC"))) PPC_WEAK_FUNC(sub_83BFFFAC);
PPC_FUNC_IMPL(__imp__sub_83BFFFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFFB0"))) PPC_WEAK_FUNC(sub_83BFFFB0);
PPC_FUNC_IMPL(__imp__sub_83BFFFB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8352
	ctx.r3.s64 = ctx.r11.s64 + 8352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFFBC"))) PPC_WEAK_FUNC(sub_83BFFFBC);
PPC_FUNC_IMPL(__imp__sub_83BFFFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFFC0"))) PPC_WEAK_FUNC(sub_83BFFFC0);
PPC_FUNC_IMPL(__imp__sub_83BFFFC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8360
	ctx.r3.s64 = ctx.r11.s64 + 8360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFFCC"))) PPC_WEAK_FUNC(sub_83BFFFCC);
PPC_FUNC_IMPL(__imp__sub_83BFFFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFFD0"))) PPC_WEAK_FUNC(sub_83BFFFD0);
PPC_FUNC_IMPL(__imp__sub_83BFFFD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8368
	ctx.r3.s64 = ctx.r11.s64 + 8368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFFDC"))) PPC_WEAK_FUNC(sub_83BFFFDC);
PPC_FUNC_IMPL(__imp__sub_83BFFFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFFE0"))) PPC_WEAK_FUNC(sub_83BFFFE0);
PPC_FUNC_IMPL(__imp__sub_83BFFFE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8376
	ctx.r3.s64 = ctx.r11.s64 + 8376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFFEC"))) PPC_WEAK_FUNC(sub_83BFFFEC);
PPC_FUNC_IMPL(__imp__sub_83BFFFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFFFF0"))) PPC_WEAK_FUNC(sub_83BFFFF0);
PPC_FUNC_IMPL(__imp__sub_83BFFFF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8384
	ctx.r3.s64 = ctx.r11.s64 + 8384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFFFFC"))) PPC_WEAK_FUNC(sub_83BFFFFC);
PPC_FUNC_IMPL(__imp__sub_83BFFFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C00000"))) PPC_WEAK_FUNC(sub_83C00000);
PPC_FUNC_IMPL(__imp__sub_83C00000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8392
	ctx.r3.s64 = ctx.r11.s64 + 8392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0000C"))) PPC_WEAK_FUNC(sub_83C0000C);
PPC_FUNC_IMPL(__imp__sub_83C0000C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C00010"))) PPC_WEAK_FUNC(sub_83C00010);
PPC_FUNC_IMPL(__imp__sub_83C00010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8400
	ctx.r3.s64 = ctx.r11.s64 + 8400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0001C"))) PPC_WEAK_FUNC(sub_83C0001C);
PPC_FUNC_IMPL(__imp__sub_83C0001C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C00020"))) PPC_WEAK_FUNC(sub_83C00020);
PPC_FUNC_IMPL(__imp__sub_83C00020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8408
	ctx.r3.s64 = ctx.r11.s64 + 8408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0002C"))) PPC_WEAK_FUNC(sub_83C0002C);
PPC_FUNC_IMPL(__imp__sub_83C0002C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C00030"))) PPC_WEAK_FUNC(sub_83C00030);
PPC_FUNC_IMPL(__imp__sub_83C00030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8416
	ctx.r3.s64 = ctx.r11.s64 + 8416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0003C"))) PPC_WEAK_FUNC(sub_83C0003C);
PPC_FUNC_IMPL(__imp__sub_83C0003C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C00040"))) PPC_WEAK_FUNC(sub_83C00040);
PPC_FUNC_IMPL(__imp__sub_83C00040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8424
	ctx.r3.s64 = ctx.r11.s64 + 8424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0004C"))) PPC_WEAK_FUNC(sub_83C0004C);
PPC_FUNC_IMPL(__imp__sub_83C0004C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C00050"))) PPC_WEAK_FUNC(sub_83C00050);
PPC_FUNC_IMPL(__imp__sub_83C00050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8432
	ctx.r3.s64 = ctx.r11.s64 + 8432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0005C"))) PPC_WEAK_FUNC(sub_83C0005C);
PPC_FUNC_IMPL(__imp__sub_83C0005C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C00060"))) PPC_WEAK_FUNC(sub_83C00060);
PPC_FUNC_IMPL(__imp__sub_83C00060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8440
	ctx.r3.s64 = ctx.r11.s64 + 8440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0006C"))) PPC_WEAK_FUNC(sub_83C0006C);
PPC_FUNC_IMPL(__imp__sub_83C0006C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C00070"))) PPC_WEAK_FUNC(sub_83C00070);
PPC_FUNC_IMPL(__imp__sub_83C00070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8448
	ctx.r3.s64 = ctx.r11.s64 + 8448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0007C"))) PPC_WEAK_FUNC(sub_83C0007C);
PPC_FUNC_IMPL(__imp__sub_83C0007C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C00080"))) PPC_WEAK_FUNC(sub_83C00080);
PPC_FUNC_IMPL(__imp__sub_83C00080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8456
	ctx.r3.s64 = ctx.r11.s64 + 8456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0008C"))) PPC_WEAK_FUNC(sub_83C0008C);
PPC_FUNC_IMPL(__imp__sub_83C0008C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C00090"))) PPC_WEAK_FUNC(sub_83C00090);
PPC_FUNC_IMPL(__imp__sub_83C00090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8464
	ctx.r3.s64 = ctx.r11.s64 + 8464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0009C"))) PPC_WEAK_FUNC(sub_83C0009C);
PPC_FUNC_IMPL(__imp__sub_83C0009C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C000A0"))) PPC_WEAK_FUNC(sub_83C000A0);
PPC_FUNC_IMPL(__imp__sub_83C000A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8472
	ctx.r3.s64 = ctx.r11.s64 + 8472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C000AC"))) PPC_WEAK_FUNC(sub_83C000AC);
PPC_FUNC_IMPL(__imp__sub_83C000AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C000B0"))) PPC_WEAK_FUNC(sub_83C000B0);
PPC_FUNC_IMPL(__imp__sub_83C000B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8480
	ctx.r3.s64 = ctx.r11.s64 + 8480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C000BC"))) PPC_WEAK_FUNC(sub_83C000BC);
PPC_FUNC_IMPL(__imp__sub_83C000BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C000C0"))) PPC_WEAK_FUNC(sub_83C000C0);
PPC_FUNC_IMPL(__imp__sub_83C000C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8488
	ctx.r3.s64 = ctx.r11.s64 + 8488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C000CC"))) PPC_WEAK_FUNC(sub_83C000CC);
PPC_FUNC_IMPL(__imp__sub_83C000CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C000D0"))) PPC_WEAK_FUNC(sub_83C000D0);
PPC_FUNC_IMPL(__imp__sub_83C000D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8496
	ctx.r3.s64 = ctx.r11.s64 + 8496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C000DC"))) PPC_WEAK_FUNC(sub_83C000DC);
PPC_FUNC_IMPL(__imp__sub_83C000DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C000E0"))) PPC_WEAK_FUNC(sub_83C000E0);
PPC_FUNC_IMPL(__imp__sub_83C000E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8504
	ctx.r3.s64 = ctx.r11.s64 + 8504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C000EC"))) PPC_WEAK_FUNC(sub_83C000EC);
PPC_FUNC_IMPL(__imp__sub_83C000EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C000F0"))) PPC_WEAK_FUNC(sub_83C000F0);
PPC_FUNC_IMPL(__imp__sub_83C000F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8512
	ctx.r3.s64 = ctx.r11.s64 + 8512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C000FC"))) PPC_WEAK_FUNC(sub_83C000FC);
PPC_FUNC_IMPL(__imp__sub_83C000FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C00100"))) PPC_WEAK_FUNC(sub_83C00100);
PPC_FUNC_IMPL(__imp__sub_83C00100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8520
	ctx.r3.s64 = ctx.r11.s64 + 8520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0010C"))) PPC_WEAK_FUNC(sub_83C0010C);
PPC_FUNC_IMPL(__imp__sub_83C0010C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C00110"))) PPC_WEAK_FUNC(sub_83C00110);
PPC_FUNC_IMPL(__imp__sub_83C00110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8528
	ctx.r3.s64 = ctx.r11.s64 + 8528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0011C"))) PPC_WEAK_FUNC(sub_83C0011C);
PPC_FUNC_IMPL(__imp__sub_83C0011C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C00120"))) PPC_WEAK_FUNC(sub_83C00120);
PPC_FUNC_IMPL(__imp__sub_83C00120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8536
	ctx.r3.s64 = ctx.r11.s64 + 8536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0012C"))) PPC_WEAK_FUNC(sub_83C0012C);
PPC_FUNC_IMPL(__imp__sub_83C0012C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C00130"))) PPC_WEAK_FUNC(sub_83C00130);
PPC_FUNC_IMPL(__imp__sub_83C00130) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-30212
	ctx.r3.s64 = ctx.r11.s64 + -30212;
	// bl 0x83523120
	ctx.lr = 0x83C00148;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,8544
	ctx.r3.s64 = ctx.r10.s64 + 8544;
	// bl 0x831cdcc8
	ctx.lr = 0x83C00154;
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

__attribute__((alias("__imp__sub_83C00164"))) PPC_WEAK_FUNC(sub_83C00164);
PPC_FUNC_IMPL(__imp__sub_83C00164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C00168"))) PPC_WEAK_FUNC(sub_83C00168);
PPC_FUNC_IMPL(__imp__sub_83C00168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8560
	ctx.r3.s64 = ctx.r11.s64 + 8560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C00174"))) PPC_WEAK_FUNC(sub_83C00174);
PPC_FUNC_IMPL(__imp__sub_83C00174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C00178"))) PPC_WEAK_FUNC(sub_83C00178);
PPC_FUNC_IMPL(__imp__sub_83C00178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8568
	ctx.r3.s64 = ctx.r11.s64 + 8568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C00184"))) PPC_WEAK_FUNC(sub_83C00184);
PPC_FUNC_IMPL(__imp__sub_83C00184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C00188"))) PPC_WEAK_FUNC(sub_83C00188);
PPC_FUNC_IMPL(__imp__sub_83C00188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8576
	ctx.r3.s64 = ctx.r11.s64 + 8576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C00194"))) PPC_WEAK_FUNC(sub_83C00194);
PPC_FUNC_IMPL(__imp__sub_83C00194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C00198"))) PPC_WEAK_FUNC(sub_83C00198);
PPC_FUNC_IMPL(__imp__sub_83C00198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8584
	ctx.r3.s64 = ctx.r11.s64 + 8584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C001A4"))) PPC_WEAK_FUNC(sub_83C001A4);
PPC_FUNC_IMPL(__imp__sub_83C001A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C001A8"))) PPC_WEAK_FUNC(sub_83C001A8);
PPC_FUNC_IMPL(__imp__sub_83C001A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8592
	ctx.r3.s64 = ctx.r11.s64 + 8592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C001B4"))) PPC_WEAK_FUNC(sub_83C001B4);
PPC_FUNC_IMPL(__imp__sub_83C001B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C001B8"))) PPC_WEAK_FUNC(sub_83C001B8);
PPC_FUNC_IMPL(__imp__sub_83C001B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8600
	ctx.r3.s64 = ctx.r11.s64 + 8600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C001C4"))) PPC_WEAK_FUNC(sub_83C001C4);
PPC_FUNC_IMPL(__imp__sub_83C001C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C001C8"))) PPC_WEAK_FUNC(sub_83C001C8);
PPC_FUNC_IMPL(__imp__sub_83C001C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8608
	ctx.r3.s64 = ctx.r11.s64 + 8608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C001D4"))) PPC_WEAK_FUNC(sub_83C001D4);
PPC_FUNC_IMPL(__imp__sub_83C001D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C001D8"))) PPC_WEAK_FUNC(sub_83C001D8);
PPC_FUNC_IMPL(__imp__sub_83C001D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8616
	ctx.r3.s64 = ctx.r11.s64 + 8616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C001E4"))) PPC_WEAK_FUNC(sub_83C001E4);
PPC_FUNC_IMPL(__imp__sub_83C001E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C001E8"))) PPC_WEAK_FUNC(sub_83C001E8);
PPC_FUNC_IMPL(__imp__sub_83C001E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8624
	ctx.r3.s64 = ctx.r11.s64 + 8624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C001F4"))) PPC_WEAK_FUNC(sub_83C001F4);
PPC_FUNC_IMPL(__imp__sub_83C001F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C001F8"))) PPC_WEAK_FUNC(sub_83C001F8);
PPC_FUNC_IMPL(__imp__sub_83C001F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8632
	ctx.r3.s64 = ctx.r11.s64 + 8632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C00204"))) PPC_WEAK_FUNC(sub_83C00204);
PPC_FUNC_IMPL(__imp__sub_83C00204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C00208"))) PPC_WEAK_FUNC(sub_83C00208);
PPC_FUNC_IMPL(__imp__sub_83C00208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8640
	ctx.r3.s64 = ctx.r11.s64 + 8640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C00214"))) PPC_WEAK_FUNC(sub_83C00214);
PPC_FUNC_IMPL(__imp__sub_83C00214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C00218"))) PPC_WEAK_FUNC(sub_83C00218);
PPC_FUNC_IMPL(__imp__sub_83C00218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8648
	ctx.r3.s64 = ctx.r11.s64 + 8648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C00224"))) PPC_WEAK_FUNC(sub_83C00224);
PPC_FUNC_IMPL(__imp__sub_83C00224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C00228"))) PPC_WEAK_FUNC(sub_83C00228);
PPC_FUNC_IMPL(__imp__sub_83C00228) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-30204
	ctx.r3.s64 = ctx.r11.s64 + -30204;
	// bl 0x83523120
	ctx.lr = 0x83C00240;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,8656
	ctx.r3.s64 = ctx.r10.s64 + 8656;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0024C;
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

__attribute__((alias("__imp__sub_83C0025C"))) PPC_WEAK_FUNC(sub_83C0025C);
PPC_FUNC_IMPL(__imp__sub_83C0025C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C00260"))) PPC_WEAK_FUNC(sub_83C00260);
PPC_FUNC_IMPL(__imp__sub_83C00260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8672
	ctx.r3.s64 = ctx.r11.s64 + 8672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0026C"))) PPC_WEAK_FUNC(sub_83C0026C);
PPC_FUNC_IMPL(__imp__sub_83C0026C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C00270"))) PPC_WEAK_FUNC(sub_83C00270);
PPC_FUNC_IMPL(__imp__sub_83C00270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8680
	ctx.r3.s64 = ctx.r11.s64 + 8680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0027C"))) PPC_WEAK_FUNC(sub_83C0027C);
PPC_FUNC_IMPL(__imp__sub_83C0027C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C00280"))) PPC_WEAK_FUNC(sub_83C00280);
PPC_FUNC_IMPL(__imp__sub_83C00280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8688
	ctx.r3.s64 = ctx.r11.s64 + 8688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0028C"))) PPC_WEAK_FUNC(sub_83C0028C);
PPC_FUNC_IMPL(__imp__sub_83C0028C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C00290"))) PPC_WEAK_FUNC(sub_83C00290);
PPC_FUNC_IMPL(__imp__sub_83C00290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8696
	ctx.r3.s64 = ctx.r11.s64 + 8696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0029C"))) PPC_WEAK_FUNC(sub_83C0029C);
PPC_FUNC_IMPL(__imp__sub_83C0029C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C002A0"))) PPC_WEAK_FUNC(sub_83C002A0);
PPC_FUNC_IMPL(__imp__sub_83C002A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8704
	ctx.r3.s64 = ctx.r11.s64 + 8704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C002AC"))) PPC_WEAK_FUNC(sub_83C002AC);
PPC_FUNC_IMPL(__imp__sub_83C002AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C002B0"))) PPC_WEAK_FUNC(sub_83C002B0);
PPC_FUNC_IMPL(__imp__sub_83C002B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8712
	ctx.r3.s64 = ctx.r11.s64 + 8712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C002BC"))) PPC_WEAK_FUNC(sub_83C002BC);
PPC_FUNC_IMPL(__imp__sub_83C002BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C002C0"))) PPC_WEAK_FUNC(sub_83C002C0);
PPC_FUNC_IMPL(__imp__sub_83C002C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8720
	ctx.r3.s64 = ctx.r11.s64 + 8720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C002CC"))) PPC_WEAK_FUNC(sub_83C002CC);
PPC_FUNC_IMPL(__imp__sub_83C002CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C002D0"))) PPC_WEAK_FUNC(sub_83C002D0);
PPC_FUNC_IMPL(__imp__sub_83C002D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8728
	ctx.r3.s64 = ctx.r11.s64 + 8728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C002DC"))) PPC_WEAK_FUNC(sub_83C002DC);
PPC_FUNC_IMPL(__imp__sub_83C002DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C002E0"))) PPC_WEAK_FUNC(sub_83C002E0);
PPC_FUNC_IMPL(__imp__sub_83C002E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8736
	ctx.r3.s64 = ctx.r11.s64 + 8736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C002EC"))) PPC_WEAK_FUNC(sub_83C002EC);
PPC_FUNC_IMPL(__imp__sub_83C002EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C002F0"))) PPC_WEAK_FUNC(sub_83C002F0);
PPC_FUNC_IMPL(__imp__sub_83C002F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8744
	ctx.r3.s64 = ctx.r11.s64 + 8744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C002FC"))) PPC_WEAK_FUNC(sub_83C002FC);
PPC_FUNC_IMPL(__imp__sub_83C002FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C00300"))) PPC_WEAK_FUNC(sub_83C00300);
PPC_FUNC_IMPL(__imp__sub_83C00300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8752
	ctx.r3.s64 = ctx.r11.s64 + 8752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0030C"))) PPC_WEAK_FUNC(sub_83C0030C);
PPC_FUNC_IMPL(__imp__sub_83C0030C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C00310"))) PPC_WEAK_FUNC(sub_83C00310);
PPC_FUNC_IMPL(__imp__sub_83C00310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8760
	ctx.r3.s64 = ctx.r11.s64 + 8760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0031C"))) PPC_WEAK_FUNC(sub_83C0031C);
PPC_FUNC_IMPL(__imp__sub_83C0031C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C00320"))) PPC_WEAK_FUNC(sub_83C00320);
PPC_FUNC_IMPL(__imp__sub_83C00320) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-30196
	ctx.r3.s64 = ctx.r11.s64 + -30196;
	// bl 0x83523120
	ctx.lr = 0x83C00338;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,8768
	ctx.r3.s64 = ctx.r10.s64 + 8768;
	// bl 0x831cdcc8
	ctx.lr = 0x83C00344;
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

__attribute__((alias("__imp__sub_83C00354"))) PPC_WEAK_FUNC(sub_83C00354);
PPC_FUNC_IMPL(__imp__sub_83C00354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C00358"))) PPC_WEAK_FUNC(sub_83C00358);
PPC_FUNC_IMPL(__imp__sub_83C00358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8784
	ctx.r3.s64 = ctx.r11.s64 + 8784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C00364"))) PPC_WEAK_FUNC(sub_83C00364);
PPC_FUNC_IMPL(__imp__sub_83C00364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C00368"))) PPC_WEAK_FUNC(sub_83C00368);
PPC_FUNC_IMPL(__imp__sub_83C00368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8792
	ctx.r3.s64 = ctx.r11.s64 + 8792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C00374"))) PPC_WEAK_FUNC(sub_83C00374);
PPC_FUNC_IMPL(__imp__sub_83C00374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C00378"))) PPC_WEAK_FUNC(sub_83C00378);
PPC_FUNC_IMPL(__imp__sub_83C00378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8800
	ctx.r3.s64 = ctx.r11.s64 + 8800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C00384"))) PPC_WEAK_FUNC(sub_83C00384);
PPC_FUNC_IMPL(__imp__sub_83C00384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C00388"))) PPC_WEAK_FUNC(sub_83C00388);
PPC_FUNC_IMPL(__imp__sub_83C00388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,8808
	ctx.r3.s64 = ctx.r11.s64 + 8808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

