#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83CE89F8"))) PPC_WEAK_FUNC(sub_83CE89F8);
PPC_FUNC_IMPL(__imp__sub_83CE89F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9784
	ctx.r3.s64 = ctx.r11.s64 + 9784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8A04"))) PPC_WEAK_FUNC(sub_83CE8A04);
PPC_FUNC_IMPL(__imp__sub_83CE8A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8A08"))) PPC_WEAK_FUNC(sub_83CE8A08);
PPC_FUNC_IMPL(__imp__sub_83CE8A08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9792
	ctx.r3.s64 = ctx.r11.s64 + 9792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8A14"))) PPC_WEAK_FUNC(sub_83CE8A14);
PPC_FUNC_IMPL(__imp__sub_83CE8A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8A18"))) PPC_WEAK_FUNC(sub_83CE8A18);
PPC_FUNC_IMPL(__imp__sub_83CE8A18) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-4128
	ctx.r3.s64 = ctx.r11.s64 + -4128;
	// bl 0x83523120
	ctx.lr = 0x83CE8A30;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,9800
	ctx.r3.s64 = ctx.r10.s64 + 9800;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE8A3C;
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

__attribute__((alias("__imp__sub_83CE8A4C"))) PPC_WEAK_FUNC(sub_83CE8A4C);
PPC_FUNC_IMPL(__imp__sub_83CE8A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8A50"))) PPC_WEAK_FUNC(sub_83CE8A50);
PPC_FUNC_IMPL(__imp__sub_83CE8A50) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-4112
	ctx.r7.s64 = ctx.r8.s64 + -4112;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-4112(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4112);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-4112(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4112, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE8A78"))) PPC_WEAK_FUNC(sub_83CE8A78);
PPC_FUNC_IMPL(__imp__sub_83CE8A78) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,30696
	ctx.r6.s64 = ctx.r7.s64 + 30696;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,30624(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 30624);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-4112(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4112);
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
	// std r9,30696(r7)
	PPC_STORE_U64(ctx.r7.u32 + 30696, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE8AC0"))) PPC_WEAK_FUNC(sub_83CE8AC0);
PPC_FUNC_IMPL(__imp__sub_83CE8AC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9816
	ctx.r3.s64 = ctx.r11.s64 + 9816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8ACC"))) PPC_WEAK_FUNC(sub_83CE8ACC);
PPC_FUNC_IMPL(__imp__sub_83CE8ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8AD0"))) PPC_WEAK_FUNC(sub_83CE8AD0);
PPC_FUNC_IMPL(__imp__sub_83CE8AD0) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-4104
	ctx.r3.s64 = ctx.r11.s64 + -4104;
	// bl 0x8259af80
	ctx.lr = 0x83CE8AE8;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,9832
	ctx.r3.s64 = ctx.r10.s64 + 9832;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE8AF4;
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

__attribute__((alias("__imp__sub_83CE8B04"))) PPC_WEAK_FUNC(sub_83CE8B04);
PPC_FUNC_IMPL(__imp__sub_83CE8B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8B08"))) PPC_WEAK_FUNC(sub_83CE8B08);
PPC_FUNC_IMPL(__imp__sub_83CE8B08) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-4124
	ctx.r11.s64 = ctx.r8.s64 + -4124;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,30672(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30672);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,9824
	ctx.r3.s64 = ctx.r6.s64 + 9824;
	// stw r10,-4124(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4124, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8B38"))) PPC_WEAK_FUNC(sub_83CE8B38);
PPC_FUNC_IMPL(__imp__sub_83CE8B38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9840
	ctx.r3.s64 = ctx.r11.s64 + 9840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8B44"))) PPC_WEAK_FUNC(sub_83CE8B44);
PPC_FUNC_IMPL(__imp__sub_83CE8B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8B48"))) PPC_WEAK_FUNC(sub_83CE8B48);
PPC_FUNC_IMPL(__imp__sub_83CE8B48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9848
	ctx.r3.s64 = ctx.r11.s64 + 9848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8B54"))) PPC_WEAK_FUNC(sub_83CE8B54);
PPC_FUNC_IMPL(__imp__sub_83CE8B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8B58"))) PPC_WEAK_FUNC(sub_83CE8B58);
PPC_FUNC_IMPL(__imp__sub_83CE8B58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9856
	ctx.r3.s64 = ctx.r11.s64 + 9856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8B64"))) PPC_WEAK_FUNC(sub_83CE8B64);
PPC_FUNC_IMPL(__imp__sub_83CE8B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8B68"))) PPC_WEAK_FUNC(sub_83CE8B68);
PPC_FUNC_IMPL(__imp__sub_83CE8B68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9864
	ctx.r3.s64 = ctx.r11.s64 + 9864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8B74"))) PPC_WEAK_FUNC(sub_83CE8B74);
PPC_FUNC_IMPL(__imp__sub_83CE8B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8B78"))) PPC_WEAK_FUNC(sub_83CE8B78);
PPC_FUNC_IMPL(__imp__sub_83CE8B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9872
	ctx.r3.s64 = ctx.r11.s64 + 9872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8B84"))) PPC_WEAK_FUNC(sub_83CE8B84);
PPC_FUNC_IMPL(__imp__sub_83CE8B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8B88"))) PPC_WEAK_FUNC(sub_83CE8B88);
PPC_FUNC_IMPL(__imp__sub_83CE8B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9880
	ctx.r3.s64 = ctx.r11.s64 + 9880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8B94"))) PPC_WEAK_FUNC(sub_83CE8B94);
PPC_FUNC_IMPL(__imp__sub_83CE8B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8B98"))) PPC_WEAK_FUNC(sub_83CE8B98);
PPC_FUNC_IMPL(__imp__sub_83CE8B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9888
	ctx.r3.s64 = ctx.r11.s64 + 9888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8BA4"))) PPC_WEAK_FUNC(sub_83CE8BA4);
PPC_FUNC_IMPL(__imp__sub_83CE8BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8BA8"))) PPC_WEAK_FUNC(sub_83CE8BA8);
PPC_FUNC_IMPL(__imp__sub_83CE8BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9896
	ctx.r3.s64 = ctx.r11.s64 + 9896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8BB4"))) PPC_WEAK_FUNC(sub_83CE8BB4);
PPC_FUNC_IMPL(__imp__sub_83CE8BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8BB8"))) PPC_WEAK_FUNC(sub_83CE8BB8);
PPC_FUNC_IMPL(__imp__sub_83CE8BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9904
	ctx.r3.s64 = ctx.r11.s64 + 9904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8BC4"))) PPC_WEAK_FUNC(sub_83CE8BC4);
PPC_FUNC_IMPL(__imp__sub_83CE8BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8BC8"))) PPC_WEAK_FUNC(sub_83CE8BC8);
PPC_FUNC_IMPL(__imp__sub_83CE8BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9912
	ctx.r3.s64 = ctx.r11.s64 + 9912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8BD4"))) PPC_WEAK_FUNC(sub_83CE8BD4);
PPC_FUNC_IMPL(__imp__sub_83CE8BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8BD8"))) PPC_WEAK_FUNC(sub_83CE8BD8);
PPC_FUNC_IMPL(__imp__sub_83CE8BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9920
	ctx.r3.s64 = ctx.r11.s64 + 9920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8BE4"))) PPC_WEAK_FUNC(sub_83CE8BE4);
PPC_FUNC_IMPL(__imp__sub_83CE8BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8BE8"))) PPC_WEAK_FUNC(sub_83CE8BE8);
PPC_FUNC_IMPL(__imp__sub_83CE8BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9928
	ctx.r3.s64 = ctx.r11.s64 + 9928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8BF4"))) PPC_WEAK_FUNC(sub_83CE8BF4);
PPC_FUNC_IMPL(__imp__sub_83CE8BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8BF8"))) PPC_WEAK_FUNC(sub_83CE8BF8);
PPC_FUNC_IMPL(__imp__sub_83CE8BF8) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-3760
	ctx.r3.s64 = ctx.r11.s64 + -3760;
	// bl 0x83523120
	ctx.lr = 0x83CE8C10;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,9936
	ctx.r3.s64 = ctx.r10.s64 + 9936;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE8C1C;
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

__attribute__((alias("__imp__sub_83CE8C2C"))) PPC_WEAK_FUNC(sub_83CE8C2C);
PPC_FUNC_IMPL(__imp__sub_83CE8C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8C30"))) PPC_WEAK_FUNC(sub_83CE8C30);
PPC_FUNC_IMPL(__imp__sub_83CE8C30) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-3744
	ctx.r7.s64 = ctx.r8.s64 + -3744;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-3744(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -3744);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-3744(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3744, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE8C58"))) PPC_WEAK_FUNC(sub_83CE8C58);
PPC_FUNC_IMPL(__imp__sub_83CE8C58) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,31036
	ctx.r6.s64 = ctx.r7.s64 + 31036;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,30964(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 30964);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-3744(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -3744);
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
	// std r9,31036(r7)
	PPC_STORE_U64(ctx.r7.u32 + 31036, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE8CA0"))) PPC_WEAK_FUNC(sub_83CE8CA0);
PPC_FUNC_IMPL(__imp__sub_83CE8CA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9952
	ctx.r3.s64 = ctx.r11.s64 + 9952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8CAC"))) PPC_WEAK_FUNC(sub_83CE8CAC);
PPC_FUNC_IMPL(__imp__sub_83CE8CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8CB0"))) PPC_WEAK_FUNC(sub_83CE8CB0);
PPC_FUNC_IMPL(__imp__sub_83CE8CB0) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-3736
	ctx.r3.s64 = ctx.r11.s64 + -3736;
	// bl 0x8259af80
	ctx.lr = 0x83CE8CC8;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,9968
	ctx.r3.s64 = ctx.r10.s64 + 9968;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE8CD4;
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

__attribute__((alias("__imp__sub_83CE8CE4"))) PPC_WEAK_FUNC(sub_83CE8CE4);
PPC_FUNC_IMPL(__imp__sub_83CE8CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8CE8"))) PPC_WEAK_FUNC(sub_83CE8CE8);
PPC_FUNC_IMPL(__imp__sub_83CE8CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-3756
	ctx.r11.s64 = ctx.r8.s64 + -3756;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,31012(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31012);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,9960
	ctx.r3.s64 = ctx.r6.s64 + 9960;
	// stw r10,-3756(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3756, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8D18"))) PPC_WEAK_FUNC(sub_83CE8D18);
PPC_FUNC_IMPL(__imp__sub_83CE8D18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9976
	ctx.r3.s64 = ctx.r11.s64 + 9976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8D24"))) PPC_WEAK_FUNC(sub_83CE8D24);
PPC_FUNC_IMPL(__imp__sub_83CE8D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8D28"))) PPC_WEAK_FUNC(sub_83CE8D28);
PPC_FUNC_IMPL(__imp__sub_83CE8D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9984
	ctx.r3.s64 = ctx.r11.s64 + 9984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8D34"))) PPC_WEAK_FUNC(sub_83CE8D34);
PPC_FUNC_IMPL(__imp__sub_83CE8D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8D38"))) PPC_WEAK_FUNC(sub_83CE8D38);
PPC_FUNC_IMPL(__imp__sub_83CE8D38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,9992
	ctx.r3.s64 = ctx.r11.s64 + 9992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8D44"))) PPC_WEAK_FUNC(sub_83CE8D44);
PPC_FUNC_IMPL(__imp__sub_83CE8D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8D48"))) PPC_WEAK_FUNC(sub_83CE8D48);
PPC_FUNC_IMPL(__imp__sub_83CE8D48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10000
	ctx.r3.s64 = ctx.r11.s64 + 10000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8D54"))) PPC_WEAK_FUNC(sub_83CE8D54);
PPC_FUNC_IMPL(__imp__sub_83CE8D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8D58"))) PPC_WEAK_FUNC(sub_83CE8D58);
PPC_FUNC_IMPL(__imp__sub_83CE8D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10008
	ctx.r3.s64 = ctx.r11.s64 + 10008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8D64"))) PPC_WEAK_FUNC(sub_83CE8D64);
PPC_FUNC_IMPL(__imp__sub_83CE8D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8D68"))) PPC_WEAK_FUNC(sub_83CE8D68);
PPC_FUNC_IMPL(__imp__sub_83CE8D68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10016
	ctx.r3.s64 = ctx.r11.s64 + 10016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8D74"))) PPC_WEAK_FUNC(sub_83CE8D74);
PPC_FUNC_IMPL(__imp__sub_83CE8D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8D78"))) PPC_WEAK_FUNC(sub_83CE8D78);
PPC_FUNC_IMPL(__imp__sub_83CE8D78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10024
	ctx.r3.s64 = ctx.r11.s64 + 10024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8D84"))) PPC_WEAK_FUNC(sub_83CE8D84);
PPC_FUNC_IMPL(__imp__sub_83CE8D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8D88"))) PPC_WEAK_FUNC(sub_83CE8D88);
PPC_FUNC_IMPL(__imp__sub_83CE8D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10032
	ctx.r3.s64 = ctx.r11.s64 + 10032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8D94"))) PPC_WEAK_FUNC(sub_83CE8D94);
PPC_FUNC_IMPL(__imp__sub_83CE8D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8D98"))) PPC_WEAK_FUNC(sub_83CE8D98);
PPC_FUNC_IMPL(__imp__sub_83CE8D98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10040
	ctx.r3.s64 = ctx.r11.s64 + 10040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8DA4"))) PPC_WEAK_FUNC(sub_83CE8DA4);
PPC_FUNC_IMPL(__imp__sub_83CE8DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8DA8"))) PPC_WEAK_FUNC(sub_83CE8DA8);
PPC_FUNC_IMPL(__imp__sub_83CE8DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10048
	ctx.r3.s64 = ctx.r11.s64 + 10048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8DB4"))) PPC_WEAK_FUNC(sub_83CE8DB4);
PPC_FUNC_IMPL(__imp__sub_83CE8DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8DB8"))) PPC_WEAK_FUNC(sub_83CE8DB8);
PPC_FUNC_IMPL(__imp__sub_83CE8DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10056
	ctx.r3.s64 = ctx.r11.s64 + 10056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8DC4"))) PPC_WEAK_FUNC(sub_83CE8DC4);
PPC_FUNC_IMPL(__imp__sub_83CE8DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8DC8"))) PPC_WEAK_FUNC(sub_83CE8DC8);
PPC_FUNC_IMPL(__imp__sub_83CE8DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10064
	ctx.r3.s64 = ctx.r11.s64 + 10064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8DD4"))) PPC_WEAK_FUNC(sub_83CE8DD4);
PPC_FUNC_IMPL(__imp__sub_83CE8DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8DD8"))) PPC_WEAK_FUNC(sub_83CE8DD8);
PPC_FUNC_IMPL(__imp__sub_83CE8DD8) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-3392
	ctx.r3.s64 = ctx.r11.s64 + -3392;
	// bl 0x83523120
	ctx.lr = 0x83CE8DF0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,10072
	ctx.r3.s64 = ctx.r10.s64 + 10072;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE8DFC;
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

__attribute__((alias("__imp__sub_83CE8E0C"))) PPC_WEAK_FUNC(sub_83CE8E0C);
PPC_FUNC_IMPL(__imp__sub_83CE8E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8E10"))) PPC_WEAK_FUNC(sub_83CE8E10);
PPC_FUNC_IMPL(__imp__sub_83CE8E10) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-3376
	ctx.r7.s64 = ctx.r8.s64 + -3376;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-3376(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -3376);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-3376(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3376, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE8E38"))) PPC_WEAK_FUNC(sub_83CE8E38);
PPC_FUNC_IMPL(__imp__sub_83CE8E38) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,31296
	ctx.r6.s64 = ctx.r7.s64 + 31296;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,31224(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 31224);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-3376(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -3376);
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
	// std r9,31296(r7)
	PPC_STORE_U64(ctx.r7.u32 + 31296, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE8E80"))) PPC_WEAK_FUNC(sub_83CE8E80);
PPC_FUNC_IMPL(__imp__sub_83CE8E80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10088
	ctx.r3.s64 = ctx.r11.s64 + 10088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8E8C"))) PPC_WEAK_FUNC(sub_83CE8E8C);
PPC_FUNC_IMPL(__imp__sub_83CE8E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8E90"))) PPC_WEAK_FUNC(sub_83CE8E90);
PPC_FUNC_IMPL(__imp__sub_83CE8E90) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-3368
	ctx.r3.s64 = ctx.r11.s64 + -3368;
	// bl 0x8259af80
	ctx.lr = 0x83CE8EA8;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,10104
	ctx.r3.s64 = ctx.r10.s64 + 10104;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE8EB4;
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

__attribute__((alias("__imp__sub_83CE8EC4"))) PPC_WEAK_FUNC(sub_83CE8EC4);
PPC_FUNC_IMPL(__imp__sub_83CE8EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8EC8"))) PPC_WEAK_FUNC(sub_83CE8EC8);
PPC_FUNC_IMPL(__imp__sub_83CE8EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-3388
	ctx.r11.s64 = ctx.r8.s64 + -3388;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,31272(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31272);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,10096
	ctx.r3.s64 = ctx.r6.s64 + 10096;
	// stw r10,-3388(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3388, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8EF8"))) PPC_WEAK_FUNC(sub_83CE8EF8);
PPC_FUNC_IMPL(__imp__sub_83CE8EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10112
	ctx.r3.s64 = ctx.r11.s64 + 10112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8F04"))) PPC_WEAK_FUNC(sub_83CE8F04);
PPC_FUNC_IMPL(__imp__sub_83CE8F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8F08"))) PPC_WEAK_FUNC(sub_83CE8F08);
PPC_FUNC_IMPL(__imp__sub_83CE8F08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10120
	ctx.r3.s64 = ctx.r11.s64 + 10120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8F14"))) PPC_WEAK_FUNC(sub_83CE8F14);
PPC_FUNC_IMPL(__imp__sub_83CE8F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8F18"))) PPC_WEAK_FUNC(sub_83CE8F18);
PPC_FUNC_IMPL(__imp__sub_83CE8F18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10128
	ctx.r3.s64 = ctx.r11.s64 + 10128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8F24"))) PPC_WEAK_FUNC(sub_83CE8F24);
PPC_FUNC_IMPL(__imp__sub_83CE8F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8F28"))) PPC_WEAK_FUNC(sub_83CE8F28);
PPC_FUNC_IMPL(__imp__sub_83CE8F28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10136
	ctx.r3.s64 = ctx.r11.s64 + 10136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8F34"))) PPC_WEAK_FUNC(sub_83CE8F34);
PPC_FUNC_IMPL(__imp__sub_83CE8F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8F38"))) PPC_WEAK_FUNC(sub_83CE8F38);
PPC_FUNC_IMPL(__imp__sub_83CE8F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10144
	ctx.r3.s64 = ctx.r11.s64 + 10144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8F44"))) PPC_WEAK_FUNC(sub_83CE8F44);
PPC_FUNC_IMPL(__imp__sub_83CE8F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8F48"))) PPC_WEAK_FUNC(sub_83CE8F48);
PPC_FUNC_IMPL(__imp__sub_83CE8F48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10152
	ctx.r3.s64 = ctx.r11.s64 + 10152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8F54"))) PPC_WEAK_FUNC(sub_83CE8F54);
PPC_FUNC_IMPL(__imp__sub_83CE8F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8F58"))) PPC_WEAK_FUNC(sub_83CE8F58);
PPC_FUNC_IMPL(__imp__sub_83CE8F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10160
	ctx.r3.s64 = ctx.r11.s64 + 10160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8F64"))) PPC_WEAK_FUNC(sub_83CE8F64);
PPC_FUNC_IMPL(__imp__sub_83CE8F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8F68"))) PPC_WEAK_FUNC(sub_83CE8F68);
PPC_FUNC_IMPL(__imp__sub_83CE8F68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10168
	ctx.r3.s64 = ctx.r11.s64 + 10168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8F74"))) PPC_WEAK_FUNC(sub_83CE8F74);
PPC_FUNC_IMPL(__imp__sub_83CE8F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8F78"))) PPC_WEAK_FUNC(sub_83CE8F78);
PPC_FUNC_IMPL(__imp__sub_83CE8F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10176
	ctx.r3.s64 = ctx.r11.s64 + 10176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8F84"))) PPC_WEAK_FUNC(sub_83CE8F84);
PPC_FUNC_IMPL(__imp__sub_83CE8F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8F88"))) PPC_WEAK_FUNC(sub_83CE8F88);
PPC_FUNC_IMPL(__imp__sub_83CE8F88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10184
	ctx.r3.s64 = ctx.r11.s64 + 10184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8F94"))) PPC_WEAK_FUNC(sub_83CE8F94);
PPC_FUNC_IMPL(__imp__sub_83CE8F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8F98"))) PPC_WEAK_FUNC(sub_83CE8F98);
PPC_FUNC_IMPL(__imp__sub_83CE8F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10192
	ctx.r3.s64 = ctx.r11.s64 + 10192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8FA4"))) PPC_WEAK_FUNC(sub_83CE8FA4);
PPC_FUNC_IMPL(__imp__sub_83CE8FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8FA8"))) PPC_WEAK_FUNC(sub_83CE8FA8);
PPC_FUNC_IMPL(__imp__sub_83CE8FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10200
	ctx.r3.s64 = ctx.r11.s64 + 10200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE8FB4"))) PPC_WEAK_FUNC(sub_83CE8FB4);
PPC_FUNC_IMPL(__imp__sub_83CE8FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8FB8"))) PPC_WEAK_FUNC(sub_83CE8FB8);
PPC_FUNC_IMPL(__imp__sub_83CE8FB8) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-3024
	ctx.r3.s64 = ctx.r11.s64 + -3024;
	// bl 0x83523120
	ctx.lr = 0x83CE8FD0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,10208
	ctx.r3.s64 = ctx.r10.s64 + 10208;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE8FDC;
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

__attribute__((alias("__imp__sub_83CE8FEC"))) PPC_WEAK_FUNC(sub_83CE8FEC);
PPC_FUNC_IMPL(__imp__sub_83CE8FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE8FF0"))) PPC_WEAK_FUNC(sub_83CE8FF0);
PPC_FUNC_IMPL(__imp__sub_83CE8FF0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-3008
	ctx.r7.s64 = ctx.r8.s64 + -3008;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-3008(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -3008);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-3008(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3008, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE9018"))) PPC_WEAK_FUNC(sub_83CE9018);
PPC_FUNC_IMPL(__imp__sub_83CE9018) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,31468
	ctx.r6.s64 = ctx.r7.s64 + 31468;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,31396(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 31396);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-3008(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -3008);
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
	// std r9,31468(r7)
	PPC_STORE_U64(ctx.r7.u32 + 31468, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE9060"))) PPC_WEAK_FUNC(sub_83CE9060);
PPC_FUNC_IMPL(__imp__sub_83CE9060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10224
	ctx.r3.s64 = ctx.r11.s64 + 10224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE906C"))) PPC_WEAK_FUNC(sub_83CE906C);
PPC_FUNC_IMPL(__imp__sub_83CE906C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9070"))) PPC_WEAK_FUNC(sub_83CE9070);
PPC_FUNC_IMPL(__imp__sub_83CE9070) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-3000
	ctx.r3.s64 = ctx.r11.s64 + -3000;
	// bl 0x8259af80
	ctx.lr = 0x83CE9088;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,10240
	ctx.r3.s64 = ctx.r10.s64 + 10240;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE9094;
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

__attribute__((alias("__imp__sub_83CE90A4"))) PPC_WEAK_FUNC(sub_83CE90A4);
PPC_FUNC_IMPL(__imp__sub_83CE90A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE90A8"))) PPC_WEAK_FUNC(sub_83CE90A8);
PPC_FUNC_IMPL(__imp__sub_83CE90A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-3020
	ctx.r11.s64 = ctx.r8.s64 + -3020;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,31444(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31444);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,10232
	ctx.r3.s64 = ctx.r6.s64 + 10232;
	// stw r10,-3020(r8)
	PPC_STORE_U32(ctx.r8.u32 + -3020, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE90D8"))) PPC_WEAK_FUNC(sub_83CE90D8);
PPC_FUNC_IMPL(__imp__sub_83CE90D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10248
	ctx.r3.s64 = ctx.r11.s64 + 10248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE90E4"))) PPC_WEAK_FUNC(sub_83CE90E4);
PPC_FUNC_IMPL(__imp__sub_83CE90E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE90E8"))) PPC_WEAK_FUNC(sub_83CE90E8);
PPC_FUNC_IMPL(__imp__sub_83CE90E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10256
	ctx.r3.s64 = ctx.r11.s64 + 10256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE90F4"))) PPC_WEAK_FUNC(sub_83CE90F4);
PPC_FUNC_IMPL(__imp__sub_83CE90F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE90F8"))) PPC_WEAK_FUNC(sub_83CE90F8);
PPC_FUNC_IMPL(__imp__sub_83CE90F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10264
	ctx.r3.s64 = ctx.r11.s64 + 10264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9104"))) PPC_WEAK_FUNC(sub_83CE9104);
PPC_FUNC_IMPL(__imp__sub_83CE9104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9108"))) PPC_WEAK_FUNC(sub_83CE9108);
PPC_FUNC_IMPL(__imp__sub_83CE9108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10272
	ctx.r3.s64 = ctx.r11.s64 + 10272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9114"))) PPC_WEAK_FUNC(sub_83CE9114);
PPC_FUNC_IMPL(__imp__sub_83CE9114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9118"))) PPC_WEAK_FUNC(sub_83CE9118);
PPC_FUNC_IMPL(__imp__sub_83CE9118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10280
	ctx.r3.s64 = ctx.r11.s64 + 10280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9124"))) PPC_WEAK_FUNC(sub_83CE9124);
PPC_FUNC_IMPL(__imp__sub_83CE9124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9128"))) PPC_WEAK_FUNC(sub_83CE9128);
PPC_FUNC_IMPL(__imp__sub_83CE9128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10288
	ctx.r3.s64 = ctx.r11.s64 + 10288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9134"))) PPC_WEAK_FUNC(sub_83CE9134);
PPC_FUNC_IMPL(__imp__sub_83CE9134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9138"))) PPC_WEAK_FUNC(sub_83CE9138);
PPC_FUNC_IMPL(__imp__sub_83CE9138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10296
	ctx.r3.s64 = ctx.r11.s64 + 10296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9144"))) PPC_WEAK_FUNC(sub_83CE9144);
PPC_FUNC_IMPL(__imp__sub_83CE9144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9148"))) PPC_WEAK_FUNC(sub_83CE9148);
PPC_FUNC_IMPL(__imp__sub_83CE9148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10304
	ctx.r3.s64 = ctx.r11.s64 + 10304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9154"))) PPC_WEAK_FUNC(sub_83CE9154);
PPC_FUNC_IMPL(__imp__sub_83CE9154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9158"))) PPC_WEAK_FUNC(sub_83CE9158);
PPC_FUNC_IMPL(__imp__sub_83CE9158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10312
	ctx.r3.s64 = ctx.r11.s64 + 10312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9164"))) PPC_WEAK_FUNC(sub_83CE9164);
PPC_FUNC_IMPL(__imp__sub_83CE9164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9168"))) PPC_WEAK_FUNC(sub_83CE9168);
PPC_FUNC_IMPL(__imp__sub_83CE9168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10320
	ctx.r3.s64 = ctx.r11.s64 + 10320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9174"))) PPC_WEAK_FUNC(sub_83CE9174);
PPC_FUNC_IMPL(__imp__sub_83CE9174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9178"))) PPC_WEAK_FUNC(sub_83CE9178);
PPC_FUNC_IMPL(__imp__sub_83CE9178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10328
	ctx.r3.s64 = ctx.r11.s64 + 10328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9184"))) PPC_WEAK_FUNC(sub_83CE9184);
PPC_FUNC_IMPL(__imp__sub_83CE9184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9188"))) PPC_WEAK_FUNC(sub_83CE9188);
PPC_FUNC_IMPL(__imp__sub_83CE9188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10336
	ctx.r3.s64 = ctx.r11.s64 + 10336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9194"))) PPC_WEAK_FUNC(sub_83CE9194);
PPC_FUNC_IMPL(__imp__sub_83CE9194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9198"))) PPC_WEAK_FUNC(sub_83CE9198);
PPC_FUNC_IMPL(__imp__sub_83CE9198) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-2656
	ctx.r3.s64 = ctx.r11.s64 + -2656;
	// bl 0x83523120
	ctx.lr = 0x83CE91B0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,10344
	ctx.r3.s64 = ctx.r10.s64 + 10344;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE91BC;
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

__attribute__((alias("__imp__sub_83CE91CC"))) PPC_WEAK_FUNC(sub_83CE91CC);
PPC_FUNC_IMPL(__imp__sub_83CE91CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE91D0"))) PPC_WEAK_FUNC(sub_83CE91D0);
PPC_FUNC_IMPL(__imp__sub_83CE91D0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-2640
	ctx.r7.s64 = ctx.r8.s64 + -2640;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-2640(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2640);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-2640(r8)
	PPC_STORE_U32(ctx.r8.u32 + -2640, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE91F8"))) PPC_WEAK_FUNC(sub_83CE91F8);
PPC_FUNC_IMPL(__imp__sub_83CE91F8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,31836
	ctx.r6.s64 = ctx.r7.s64 + 31836;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,31764(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 31764);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-2640(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -2640);
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
	// std r9,31836(r7)
	PPC_STORE_U64(ctx.r7.u32 + 31836, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE9240"))) PPC_WEAK_FUNC(sub_83CE9240);
PPC_FUNC_IMPL(__imp__sub_83CE9240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10360
	ctx.r3.s64 = ctx.r11.s64 + 10360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE924C"))) PPC_WEAK_FUNC(sub_83CE924C);
PPC_FUNC_IMPL(__imp__sub_83CE924C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9250"))) PPC_WEAK_FUNC(sub_83CE9250);
PPC_FUNC_IMPL(__imp__sub_83CE9250) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-2632
	ctx.r3.s64 = ctx.r11.s64 + -2632;
	// bl 0x8259af80
	ctx.lr = 0x83CE9268;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,10376
	ctx.r3.s64 = ctx.r10.s64 + 10376;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE9274;
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

__attribute__((alias("__imp__sub_83CE9284"))) PPC_WEAK_FUNC(sub_83CE9284);
PPC_FUNC_IMPL(__imp__sub_83CE9284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9288"))) PPC_WEAK_FUNC(sub_83CE9288);
PPC_FUNC_IMPL(__imp__sub_83CE9288) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-2652
	ctx.r11.s64 = ctx.r8.s64 + -2652;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,31812(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31812);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,10368
	ctx.r3.s64 = ctx.r6.s64 + 10368;
	// stw r10,-2652(r8)
	PPC_STORE_U32(ctx.r8.u32 + -2652, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE92B8"))) PPC_WEAK_FUNC(sub_83CE92B8);
PPC_FUNC_IMPL(__imp__sub_83CE92B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10384
	ctx.r3.s64 = ctx.r11.s64 + 10384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE92C4"))) PPC_WEAK_FUNC(sub_83CE92C4);
PPC_FUNC_IMPL(__imp__sub_83CE92C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE92C8"))) PPC_WEAK_FUNC(sub_83CE92C8);
PPC_FUNC_IMPL(__imp__sub_83CE92C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10392
	ctx.r3.s64 = ctx.r11.s64 + 10392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE92D4"))) PPC_WEAK_FUNC(sub_83CE92D4);
PPC_FUNC_IMPL(__imp__sub_83CE92D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE92D8"))) PPC_WEAK_FUNC(sub_83CE92D8);
PPC_FUNC_IMPL(__imp__sub_83CE92D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10400
	ctx.r3.s64 = ctx.r11.s64 + 10400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE92E4"))) PPC_WEAK_FUNC(sub_83CE92E4);
PPC_FUNC_IMPL(__imp__sub_83CE92E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE92E8"))) PPC_WEAK_FUNC(sub_83CE92E8);
PPC_FUNC_IMPL(__imp__sub_83CE92E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10408
	ctx.r3.s64 = ctx.r11.s64 + 10408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE92F4"))) PPC_WEAK_FUNC(sub_83CE92F4);
PPC_FUNC_IMPL(__imp__sub_83CE92F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE92F8"))) PPC_WEAK_FUNC(sub_83CE92F8);
PPC_FUNC_IMPL(__imp__sub_83CE92F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9304"))) PPC_WEAK_FUNC(sub_83CE9304);
PPC_FUNC_IMPL(__imp__sub_83CE9304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9308"))) PPC_WEAK_FUNC(sub_83CE9308);
PPC_FUNC_IMPL(__imp__sub_83CE9308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10424
	ctx.r3.s64 = ctx.r11.s64 + 10424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9314"))) PPC_WEAK_FUNC(sub_83CE9314);
PPC_FUNC_IMPL(__imp__sub_83CE9314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9318"))) PPC_WEAK_FUNC(sub_83CE9318);
PPC_FUNC_IMPL(__imp__sub_83CE9318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10432
	ctx.r3.s64 = ctx.r11.s64 + 10432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9324"))) PPC_WEAK_FUNC(sub_83CE9324);
PPC_FUNC_IMPL(__imp__sub_83CE9324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9328"))) PPC_WEAK_FUNC(sub_83CE9328);
PPC_FUNC_IMPL(__imp__sub_83CE9328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10440
	ctx.r3.s64 = ctx.r11.s64 + 10440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9334"))) PPC_WEAK_FUNC(sub_83CE9334);
PPC_FUNC_IMPL(__imp__sub_83CE9334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9338"))) PPC_WEAK_FUNC(sub_83CE9338);
PPC_FUNC_IMPL(__imp__sub_83CE9338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10448
	ctx.r3.s64 = ctx.r11.s64 + 10448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9344"))) PPC_WEAK_FUNC(sub_83CE9344);
PPC_FUNC_IMPL(__imp__sub_83CE9344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9348"))) PPC_WEAK_FUNC(sub_83CE9348);
PPC_FUNC_IMPL(__imp__sub_83CE9348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10456
	ctx.r3.s64 = ctx.r11.s64 + 10456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9354"))) PPC_WEAK_FUNC(sub_83CE9354);
PPC_FUNC_IMPL(__imp__sub_83CE9354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9358"))) PPC_WEAK_FUNC(sub_83CE9358);
PPC_FUNC_IMPL(__imp__sub_83CE9358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10464
	ctx.r3.s64 = ctx.r11.s64 + 10464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9364"))) PPC_WEAK_FUNC(sub_83CE9364);
PPC_FUNC_IMPL(__imp__sub_83CE9364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9368"))) PPC_WEAK_FUNC(sub_83CE9368);
PPC_FUNC_IMPL(__imp__sub_83CE9368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10472
	ctx.r3.s64 = ctx.r11.s64 + 10472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9374"))) PPC_WEAK_FUNC(sub_83CE9374);
PPC_FUNC_IMPL(__imp__sub_83CE9374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9378"))) PPC_WEAK_FUNC(sub_83CE9378);
PPC_FUNC_IMPL(__imp__sub_83CE9378) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-2272
	ctx.r7.s64 = ctx.r8.s64 + -2272;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-2272(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2272);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-2272(r8)
	PPC_STORE_U32(ctx.r8.u32 + -2272, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE93A0"))) PPC_WEAK_FUNC(sub_83CE93A0);
PPC_FUNC_IMPL(__imp__sub_83CE93A0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,31964
	ctx.r6.s64 = ctx.r7.s64 + 31964;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,31892(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 31892);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-2272(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -2272);
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
	// std r9,31964(r7)
	PPC_STORE_U64(ctx.r7.u32 + 31964, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE93E8"))) PPC_WEAK_FUNC(sub_83CE93E8);
PPC_FUNC_IMPL(__imp__sub_83CE93E8) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-2288
	ctx.r3.s64 = ctx.r11.s64 + -2288;
	// bl 0x83523120
	ctx.lr = 0x83CE9400;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,10480
	ctx.r3.s64 = ctx.r10.s64 + 10480;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE940C;
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

__attribute__((alias("__imp__sub_83CE941C"))) PPC_WEAK_FUNC(sub_83CE941C);
PPC_FUNC_IMPL(__imp__sub_83CE941C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9420"))) PPC_WEAK_FUNC(sub_83CE9420);
PPC_FUNC_IMPL(__imp__sub_83CE9420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10496
	ctx.r3.s64 = ctx.r11.s64 + 10496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE942C"))) PPC_WEAK_FUNC(sub_83CE942C);
PPC_FUNC_IMPL(__imp__sub_83CE942C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9430"))) PPC_WEAK_FUNC(sub_83CE9430);
PPC_FUNC_IMPL(__imp__sub_83CE9430) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-2264
	ctx.r3.s64 = ctx.r11.s64 + -2264;
	// bl 0x8259af80
	ctx.lr = 0x83CE9448;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,10512
	ctx.r3.s64 = ctx.r10.s64 + 10512;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE9454;
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

__attribute__((alias("__imp__sub_83CE9464"))) PPC_WEAK_FUNC(sub_83CE9464);
PPC_FUNC_IMPL(__imp__sub_83CE9464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9468"))) PPC_WEAK_FUNC(sub_83CE9468);
PPC_FUNC_IMPL(__imp__sub_83CE9468) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-2284
	ctx.r11.s64 = ctx.r8.s64 + -2284;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,31940(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31940);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,10504
	ctx.r3.s64 = ctx.r6.s64 + 10504;
	// stw r10,-2284(r8)
	PPC_STORE_U32(ctx.r8.u32 + -2284, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9498"))) PPC_WEAK_FUNC(sub_83CE9498);
PPC_FUNC_IMPL(__imp__sub_83CE9498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10520
	ctx.r3.s64 = ctx.r11.s64 + 10520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE94A4"))) PPC_WEAK_FUNC(sub_83CE94A4);
PPC_FUNC_IMPL(__imp__sub_83CE94A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE94A8"))) PPC_WEAK_FUNC(sub_83CE94A8);
PPC_FUNC_IMPL(__imp__sub_83CE94A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10528
	ctx.r3.s64 = ctx.r11.s64 + 10528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE94B4"))) PPC_WEAK_FUNC(sub_83CE94B4);
PPC_FUNC_IMPL(__imp__sub_83CE94B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE94B8"))) PPC_WEAK_FUNC(sub_83CE94B8);
PPC_FUNC_IMPL(__imp__sub_83CE94B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10536
	ctx.r3.s64 = ctx.r11.s64 + 10536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE94C4"))) PPC_WEAK_FUNC(sub_83CE94C4);
PPC_FUNC_IMPL(__imp__sub_83CE94C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE94C8"))) PPC_WEAK_FUNC(sub_83CE94C8);
PPC_FUNC_IMPL(__imp__sub_83CE94C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10544
	ctx.r3.s64 = ctx.r11.s64 + 10544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE94D4"))) PPC_WEAK_FUNC(sub_83CE94D4);
PPC_FUNC_IMPL(__imp__sub_83CE94D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE94D8"))) PPC_WEAK_FUNC(sub_83CE94D8);
PPC_FUNC_IMPL(__imp__sub_83CE94D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10552
	ctx.r3.s64 = ctx.r11.s64 + 10552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE94E4"))) PPC_WEAK_FUNC(sub_83CE94E4);
PPC_FUNC_IMPL(__imp__sub_83CE94E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE94E8"))) PPC_WEAK_FUNC(sub_83CE94E8);
PPC_FUNC_IMPL(__imp__sub_83CE94E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10560
	ctx.r3.s64 = ctx.r11.s64 + 10560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE94F4"))) PPC_WEAK_FUNC(sub_83CE94F4);
PPC_FUNC_IMPL(__imp__sub_83CE94F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE94F8"))) PPC_WEAK_FUNC(sub_83CE94F8);
PPC_FUNC_IMPL(__imp__sub_83CE94F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10568
	ctx.r3.s64 = ctx.r11.s64 + 10568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9504"))) PPC_WEAK_FUNC(sub_83CE9504);
PPC_FUNC_IMPL(__imp__sub_83CE9504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9508"))) PPC_WEAK_FUNC(sub_83CE9508);
PPC_FUNC_IMPL(__imp__sub_83CE9508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10576
	ctx.r3.s64 = ctx.r11.s64 + 10576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9514"))) PPC_WEAK_FUNC(sub_83CE9514);
PPC_FUNC_IMPL(__imp__sub_83CE9514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9518"))) PPC_WEAK_FUNC(sub_83CE9518);
PPC_FUNC_IMPL(__imp__sub_83CE9518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10584
	ctx.r3.s64 = ctx.r11.s64 + 10584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9524"))) PPC_WEAK_FUNC(sub_83CE9524);
PPC_FUNC_IMPL(__imp__sub_83CE9524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9528"))) PPC_WEAK_FUNC(sub_83CE9528);
PPC_FUNC_IMPL(__imp__sub_83CE9528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10592
	ctx.r3.s64 = ctx.r11.s64 + 10592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9534"))) PPC_WEAK_FUNC(sub_83CE9534);
PPC_FUNC_IMPL(__imp__sub_83CE9534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9538"))) PPC_WEAK_FUNC(sub_83CE9538);
PPC_FUNC_IMPL(__imp__sub_83CE9538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10600
	ctx.r3.s64 = ctx.r11.s64 + 10600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9544"))) PPC_WEAK_FUNC(sub_83CE9544);
PPC_FUNC_IMPL(__imp__sub_83CE9544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9548"))) PPC_WEAK_FUNC(sub_83CE9548);
PPC_FUNC_IMPL(__imp__sub_83CE9548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10608
	ctx.r3.s64 = ctx.r11.s64 + 10608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9554"))) PPC_WEAK_FUNC(sub_83CE9554);
PPC_FUNC_IMPL(__imp__sub_83CE9554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9558"))) PPC_WEAK_FUNC(sub_83CE9558);
PPC_FUNC_IMPL(__imp__sub_83CE9558) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-1920
	ctx.r3.s64 = ctx.r11.s64 + -1920;
	// bl 0x83523120
	ctx.lr = 0x83CE9570;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,10616
	ctx.r3.s64 = ctx.r10.s64 + 10616;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE957C;
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

__attribute__((alias("__imp__sub_83CE958C"))) PPC_WEAK_FUNC(sub_83CE958C);
PPC_FUNC_IMPL(__imp__sub_83CE958C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9590"))) PPC_WEAK_FUNC(sub_83CE9590);
PPC_FUNC_IMPL(__imp__sub_83CE9590) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-1904
	ctx.r7.s64 = ctx.r8.s64 + -1904;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-1904(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -1904);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-1904(r8)
	PPC_STORE_U32(ctx.r8.u32 + -1904, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE95B8"))) PPC_WEAK_FUNC(sub_83CE95B8);
PPC_FUNC_IMPL(__imp__sub_83CE95B8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,32100
	ctx.r6.s64 = ctx.r7.s64 + 32100;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,32028(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 32028);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-1904(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -1904);
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
	// std r9,32100(r7)
	PPC_STORE_U64(ctx.r7.u32 + 32100, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE9600"))) PPC_WEAK_FUNC(sub_83CE9600);
PPC_FUNC_IMPL(__imp__sub_83CE9600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10632
	ctx.r3.s64 = ctx.r11.s64 + 10632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE960C"))) PPC_WEAK_FUNC(sub_83CE960C);
PPC_FUNC_IMPL(__imp__sub_83CE960C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9610"))) PPC_WEAK_FUNC(sub_83CE9610);
PPC_FUNC_IMPL(__imp__sub_83CE9610) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-1896
	ctx.r3.s64 = ctx.r11.s64 + -1896;
	// bl 0x8259af80
	ctx.lr = 0x83CE9628;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,10648
	ctx.r3.s64 = ctx.r10.s64 + 10648;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE9634;
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

__attribute__((alias("__imp__sub_83CE9644"))) PPC_WEAK_FUNC(sub_83CE9644);
PPC_FUNC_IMPL(__imp__sub_83CE9644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9648"))) PPC_WEAK_FUNC(sub_83CE9648);
PPC_FUNC_IMPL(__imp__sub_83CE9648) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-1916
	ctx.r11.s64 = ctx.r8.s64 + -1916;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,32076(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32076);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,10640
	ctx.r3.s64 = ctx.r6.s64 + 10640;
	// stw r10,-1916(r8)
	PPC_STORE_U32(ctx.r8.u32 + -1916, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9678"))) PPC_WEAK_FUNC(sub_83CE9678);
PPC_FUNC_IMPL(__imp__sub_83CE9678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10656
	ctx.r3.s64 = ctx.r11.s64 + 10656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9684"))) PPC_WEAK_FUNC(sub_83CE9684);
PPC_FUNC_IMPL(__imp__sub_83CE9684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9688"))) PPC_WEAK_FUNC(sub_83CE9688);
PPC_FUNC_IMPL(__imp__sub_83CE9688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10664
	ctx.r3.s64 = ctx.r11.s64 + 10664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9694"))) PPC_WEAK_FUNC(sub_83CE9694);
PPC_FUNC_IMPL(__imp__sub_83CE9694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9698"))) PPC_WEAK_FUNC(sub_83CE9698);
PPC_FUNC_IMPL(__imp__sub_83CE9698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10672
	ctx.r3.s64 = ctx.r11.s64 + 10672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE96A4"))) PPC_WEAK_FUNC(sub_83CE96A4);
PPC_FUNC_IMPL(__imp__sub_83CE96A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE96A8"))) PPC_WEAK_FUNC(sub_83CE96A8);
PPC_FUNC_IMPL(__imp__sub_83CE96A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10680
	ctx.r3.s64 = ctx.r11.s64 + 10680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE96B4"))) PPC_WEAK_FUNC(sub_83CE96B4);
PPC_FUNC_IMPL(__imp__sub_83CE96B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE96B8"))) PPC_WEAK_FUNC(sub_83CE96B8);
PPC_FUNC_IMPL(__imp__sub_83CE96B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10688
	ctx.r3.s64 = ctx.r11.s64 + 10688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE96C4"))) PPC_WEAK_FUNC(sub_83CE96C4);
PPC_FUNC_IMPL(__imp__sub_83CE96C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE96C8"))) PPC_WEAK_FUNC(sub_83CE96C8);
PPC_FUNC_IMPL(__imp__sub_83CE96C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10696
	ctx.r3.s64 = ctx.r11.s64 + 10696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE96D4"))) PPC_WEAK_FUNC(sub_83CE96D4);
PPC_FUNC_IMPL(__imp__sub_83CE96D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE96D8"))) PPC_WEAK_FUNC(sub_83CE96D8);
PPC_FUNC_IMPL(__imp__sub_83CE96D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10704
	ctx.r3.s64 = ctx.r11.s64 + 10704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE96E4"))) PPC_WEAK_FUNC(sub_83CE96E4);
PPC_FUNC_IMPL(__imp__sub_83CE96E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE96E8"))) PPC_WEAK_FUNC(sub_83CE96E8);
PPC_FUNC_IMPL(__imp__sub_83CE96E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10712
	ctx.r3.s64 = ctx.r11.s64 + 10712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE96F4"))) PPC_WEAK_FUNC(sub_83CE96F4);
PPC_FUNC_IMPL(__imp__sub_83CE96F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE96F8"))) PPC_WEAK_FUNC(sub_83CE96F8);
PPC_FUNC_IMPL(__imp__sub_83CE96F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10720
	ctx.r3.s64 = ctx.r11.s64 + 10720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9704"))) PPC_WEAK_FUNC(sub_83CE9704);
PPC_FUNC_IMPL(__imp__sub_83CE9704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9708"))) PPC_WEAK_FUNC(sub_83CE9708);
PPC_FUNC_IMPL(__imp__sub_83CE9708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10728
	ctx.r3.s64 = ctx.r11.s64 + 10728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9714"))) PPC_WEAK_FUNC(sub_83CE9714);
PPC_FUNC_IMPL(__imp__sub_83CE9714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9718"))) PPC_WEAK_FUNC(sub_83CE9718);
PPC_FUNC_IMPL(__imp__sub_83CE9718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10736
	ctx.r3.s64 = ctx.r11.s64 + 10736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9724"))) PPC_WEAK_FUNC(sub_83CE9724);
PPC_FUNC_IMPL(__imp__sub_83CE9724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9728"))) PPC_WEAK_FUNC(sub_83CE9728);
PPC_FUNC_IMPL(__imp__sub_83CE9728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10744
	ctx.r3.s64 = ctx.r11.s64 + 10744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9734"))) PPC_WEAK_FUNC(sub_83CE9734);
PPC_FUNC_IMPL(__imp__sub_83CE9734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9738"))) PPC_WEAK_FUNC(sub_83CE9738);
PPC_FUNC_IMPL(__imp__sub_83CE9738) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-1544
	ctx.r3.s64 = ctx.r11.s64 + -1544;
	// bl 0x83523120
	ctx.lr = 0x83CE9750;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,10752
	ctx.r3.s64 = ctx.r10.s64 + 10752;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE975C;
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

__attribute__((alias("__imp__sub_83CE976C"))) PPC_WEAK_FUNC(sub_83CE976C);
PPC_FUNC_IMPL(__imp__sub_83CE976C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9770"))) PPC_WEAK_FUNC(sub_83CE9770);
PPC_FUNC_IMPL(__imp__sub_83CE9770) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-1528
	ctx.r7.s64 = ctx.r8.s64 + -1528;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-1528(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -1528);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-1528(r8)
	PPC_STORE_U32(ctx.r8.u32 + -1528, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE9798"))) PPC_WEAK_FUNC(sub_83CE9798);
PPC_FUNC_IMPL(__imp__sub_83CE9798) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,32632
	ctx.r6.s64 = ctx.r7.s64 + 32632;
	// lis r3,-31742
	ctx.r3.s64 = -2080243712;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,32560(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 32560);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-1528(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -1528);
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
	// std r9,32632(r7)
	PPC_STORE_U64(ctx.r7.u32 + 32632, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CE97E0"))) PPC_WEAK_FUNC(sub_83CE97E0);
PPC_FUNC_IMPL(__imp__sub_83CE97E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10768
	ctx.r3.s64 = ctx.r11.s64 + 10768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE97EC"))) PPC_WEAK_FUNC(sub_83CE97EC);
PPC_FUNC_IMPL(__imp__sub_83CE97EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE97F0"))) PPC_WEAK_FUNC(sub_83CE97F0);
PPC_FUNC_IMPL(__imp__sub_83CE97F0) {
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
	// lis r11,-31742
	ctx.r11.s64 = -2080243712;
	// addi r3,r11,-1520
	ctx.r3.s64 = ctx.r11.s64 + -1520;
	// bl 0x8259af80
	ctx.lr = 0x83CE9808;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,10784
	ctx.r3.s64 = ctx.r10.s64 + 10784;
	// bl 0x831cdcc8
	ctx.lr = 0x83CE9814;
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

__attribute__((alias("__imp__sub_83CE9824"))) PPC_WEAK_FUNC(sub_83CE9824);
PPC_FUNC_IMPL(__imp__sub_83CE9824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9828"))) PPC_WEAK_FUNC(sub_83CE9828);
PPC_FUNC_IMPL(__imp__sub_83CE9828) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31742
	ctx.r8.s64 = -2080243712;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-1540
	ctx.r11.s64 = ctx.r8.s64 + -1540;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,32608(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32608);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,10776
	ctx.r3.s64 = ctx.r6.s64 + 10776;
	// stw r10,-1540(r8)
	PPC_STORE_U32(ctx.r8.u32 + -1540, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9858"))) PPC_WEAK_FUNC(sub_83CE9858);
PPC_FUNC_IMPL(__imp__sub_83CE9858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10792
	ctx.r3.s64 = ctx.r11.s64 + 10792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9864"))) PPC_WEAK_FUNC(sub_83CE9864);
PPC_FUNC_IMPL(__imp__sub_83CE9864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9868"))) PPC_WEAK_FUNC(sub_83CE9868);
PPC_FUNC_IMPL(__imp__sub_83CE9868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10800
	ctx.r3.s64 = ctx.r11.s64 + 10800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9874"))) PPC_WEAK_FUNC(sub_83CE9874);
PPC_FUNC_IMPL(__imp__sub_83CE9874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9878"))) PPC_WEAK_FUNC(sub_83CE9878);
PPC_FUNC_IMPL(__imp__sub_83CE9878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10808
	ctx.r3.s64 = ctx.r11.s64 + 10808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9884"))) PPC_WEAK_FUNC(sub_83CE9884);
PPC_FUNC_IMPL(__imp__sub_83CE9884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9888"))) PPC_WEAK_FUNC(sub_83CE9888);
PPC_FUNC_IMPL(__imp__sub_83CE9888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10816
	ctx.r3.s64 = ctx.r11.s64 + 10816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE9894"))) PPC_WEAK_FUNC(sub_83CE9894);
PPC_FUNC_IMPL(__imp__sub_83CE9894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE9898"))) PPC_WEAK_FUNC(sub_83CE9898);
PPC_FUNC_IMPL(__imp__sub_83CE9898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10824
	ctx.r3.s64 = ctx.r11.s64 + 10824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE98A4"))) PPC_WEAK_FUNC(sub_83CE98A4);
PPC_FUNC_IMPL(__imp__sub_83CE98A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CE98A8"))) PPC_WEAK_FUNC(sub_83CE98A8);
PPC_FUNC_IMPL(__imp__sub_83CE98A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,10832
	ctx.r3.s64 = ctx.r11.s64 + 10832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CE98B4"))) PPC_WEAK_FUNC(sub_83CE98B4);
PPC_FUNC_IMPL(__imp__sub_83CE98B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

