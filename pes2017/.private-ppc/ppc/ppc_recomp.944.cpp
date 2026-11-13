#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83CDA8F4"))) PPC_WEAK_FUNC(sub_83CDA8F4);
PPC_FUNC_IMPL(__imp__sub_83CDA8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA8F8"))) PPC_WEAK_FUNC(sub_83CDA8F8);
PPC_FUNC_IMPL(__imp__sub_83CDA8F8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,20812
	ctx.r11.s64 = ctx.r8.s64 + 20812;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,8308(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8308);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-8200
	ctx.r3.s64 = ctx.r6.s64 + -8200;
	// stw r10,20812(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20812, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA928"))) PPC_WEAK_FUNC(sub_83CDA928);
PPC_FUNC_IMPL(__imp__sub_83CDA928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8184
	ctx.r3.s64 = ctx.r11.s64 + -8184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA934"))) PPC_WEAK_FUNC(sub_83CDA934);
PPC_FUNC_IMPL(__imp__sub_83CDA934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA938"))) PPC_WEAK_FUNC(sub_83CDA938);
PPC_FUNC_IMPL(__imp__sub_83CDA938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8176
	ctx.r3.s64 = ctx.r11.s64 + -8176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA944"))) PPC_WEAK_FUNC(sub_83CDA944);
PPC_FUNC_IMPL(__imp__sub_83CDA944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA948"))) PPC_WEAK_FUNC(sub_83CDA948);
PPC_FUNC_IMPL(__imp__sub_83CDA948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8168
	ctx.r3.s64 = ctx.r11.s64 + -8168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA954"))) PPC_WEAK_FUNC(sub_83CDA954);
PPC_FUNC_IMPL(__imp__sub_83CDA954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA958"))) PPC_WEAK_FUNC(sub_83CDA958);
PPC_FUNC_IMPL(__imp__sub_83CDA958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8160
	ctx.r3.s64 = ctx.r11.s64 + -8160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA964"))) PPC_WEAK_FUNC(sub_83CDA964);
PPC_FUNC_IMPL(__imp__sub_83CDA964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA968"))) PPC_WEAK_FUNC(sub_83CDA968);
PPC_FUNC_IMPL(__imp__sub_83CDA968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8152
	ctx.r3.s64 = ctx.r11.s64 + -8152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA974"))) PPC_WEAK_FUNC(sub_83CDA974);
PPC_FUNC_IMPL(__imp__sub_83CDA974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA978"))) PPC_WEAK_FUNC(sub_83CDA978);
PPC_FUNC_IMPL(__imp__sub_83CDA978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8144
	ctx.r3.s64 = ctx.r11.s64 + -8144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA984"))) PPC_WEAK_FUNC(sub_83CDA984);
PPC_FUNC_IMPL(__imp__sub_83CDA984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA988"))) PPC_WEAK_FUNC(sub_83CDA988);
PPC_FUNC_IMPL(__imp__sub_83CDA988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8136
	ctx.r3.s64 = ctx.r11.s64 + -8136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA994"))) PPC_WEAK_FUNC(sub_83CDA994);
PPC_FUNC_IMPL(__imp__sub_83CDA994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA998"))) PPC_WEAK_FUNC(sub_83CDA998);
PPC_FUNC_IMPL(__imp__sub_83CDA998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8128
	ctx.r3.s64 = ctx.r11.s64 + -8128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA9A4"))) PPC_WEAK_FUNC(sub_83CDA9A4);
PPC_FUNC_IMPL(__imp__sub_83CDA9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA9A8"))) PPC_WEAK_FUNC(sub_83CDA9A8);
PPC_FUNC_IMPL(__imp__sub_83CDA9A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8120
	ctx.r3.s64 = ctx.r11.s64 + -8120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA9B4"))) PPC_WEAK_FUNC(sub_83CDA9B4);
PPC_FUNC_IMPL(__imp__sub_83CDA9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA9B8"))) PPC_WEAK_FUNC(sub_83CDA9B8);
PPC_FUNC_IMPL(__imp__sub_83CDA9B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8112
	ctx.r3.s64 = ctx.r11.s64 + -8112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA9C4"))) PPC_WEAK_FUNC(sub_83CDA9C4);
PPC_FUNC_IMPL(__imp__sub_83CDA9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA9C8"))) PPC_WEAK_FUNC(sub_83CDA9C8);
PPC_FUNC_IMPL(__imp__sub_83CDA9C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8104
	ctx.r3.s64 = ctx.r11.s64 + -8104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA9D4"))) PPC_WEAK_FUNC(sub_83CDA9D4);
PPC_FUNC_IMPL(__imp__sub_83CDA9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA9D8"))) PPC_WEAK_FUNC(sub_83CDA9D8);
PPC_FUNC_IMPL(__imp__sub_83CDA9D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8096
	ctx.r3.s64 = ctx.r11.s64 + -8096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDA9E4"))) PPC_WEAK_FUNC(sub_83CDA9E4);
PPC_FUNC_IMPL(__imp__sub_83CDA9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDA9E8"))) PPC_WEAK_FUNC(sub_83CDA9E8);
PPC_FUNC_IMPL(__imp__sub_83CDA9E8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,21180
	ctx.r7.s64 = ctx.r8.s64 + 21180;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,21180(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21180);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,21180(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21180, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDAA10"))) PPC_WEAK_FUNC(sub_83CDAA10);
PPC_FUNC_IMPL(__imp__sub_83CDAA10) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,21176
	ctx.r3.s64 = ctx.r11.s64 + 21176;
	// bl 0x83523120
	ctx.lr = 0x83CDAA28;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-8088
	ctx.r3.s64 = ctx.r10.s64 + -8088;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDAA34;
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

__attribute__((alias("__imp__sub_83CDAA44"))) PPC_WEAK_FUNC(sub_83CDAA44);
PPC_FUNC_IMPL(__imp__sub_83CDAA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDAA48"))) PPC_WEAK_FUNC(sub_83CDAA48);
PPC_FUNC_IMPL(__imp__sub_83CDAA48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8072
	ctx.r3.s64 = ctx.r11.s64 + -8072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDAA54"))) PPC_WEAK_FUNC(sub_83CDAA54);
PPC_FUNC_IMPL(__imp__sub_83CDAA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDAA58"))) PPC_WEAK_FUNC(sub_83CDAA58);
PPC_FUNC_IMPL(__imp__sub_83CDAA58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8064
	ctx.r3.s64 = ctx.r11.s64 + -8064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDAA64"))) PPC_WEAK_FUNC(sub_83CDAA64);
PPC_FUNC_IMPL(__imp__sub_83CDAA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDAA68"))) PPC_WEAK_FUNC(sub_83CDAA68);
PPC_FUNC_IMPL(__imp__sub_83CDAA68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8056
	ctx.r3.s64 = ctx.r11.s64 + -8056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDAA74"))) PPC_WEAK_FUNC(sub_83CDAA74);
PPC_FUNC_IMPL(__imp__sub_83CDAA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDAA78"))) PPC_WEAK_FUNC(sub_83CDAA78);
PPC_FUNC_IMPL(__imp__sub_83CDAA78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8048
	ctx.r3.s64 = ctx.r11.s64 + -8048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDAA84"))) PPC_WEAK_FUNC(sub_83CDAA84);
PPC_FUNC_IMPL(__imp__sub_83CDAA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDAA88"))) PPC_WEAK_FUNC(sub_83CDAA88);
PPC_FUNC_IMPL(__imp__sub_83CDAA88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8040
	ctx.r3.s64 = ctx.r11.s64 + -8040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDAA94"))) PPC_WEAK_FUNC(sub_83CDAA94);
PPC_FUNC_IMPL(__imp__sub_83CDAA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDAA98"))) PPC_WEAK_FUNC(sub_83CDAA98);
PPC_FUNC_IMPL(__imp__sub_83CDAA98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8032
	ctx.r3.s64 = ctx.r11.s64 + -8032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDAAA4"))) PPC_WEAK_FUNC(sub_83CDAAA4);
PPC_FUNC_IMPL(__imp__sub_83CDAAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDAAA8"))) PPC_WEAK_FUNC(sub_83CDAAA8);
PPC_FUNC_IMPL(__imp__sub_83CDAAA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8024
	ctx.r3.s64 = ctx.r11.s64 + -8024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDAAB4"))) PPC_WEAK_FUNC(sub_83CDAAB4);
PPC_FUNC_IMPL(__imp__sub_83CDAAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDAAB8"))) PPC_WEAK_FUNC(sub_83CDAAB8);
PPC_FUNC_IMPL(__imp__sub_83CDAAB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8016
	ctx.r3.s64 = ctx.r11.s64 + -8016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDAAC4"))) PPC_WEAK_FUNC(sub_83CDAAC4);
PPC_FUNC_IMPL(__imp__sub_83CDAAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDAAC8"))) PPC_WEAK_FUNC(sub_83CDAAC8);
PPC_FUNC_IMPL(__imp__sub_83CDAAC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8008
	ctx.r3.s64 = ctx.r11.s64 + -8008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDAAD4"))) PPC_WEAK_FUNC(sub_83CDAAD4);
PPC_FUNC_IMPL(__imp__sub_83CDAAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDAAD8"))) PPC_WEAK_FUNC(sub_83CDAAD8);
PPC_FUNC_IMPL(__imp__sub_83CDAAD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-8000
	ctx.r3.s64 = ctx.r11.s64 + -8000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDAAE4"))) PPC_WEAK_FUNC(sub_83CDAAE4);
PPC_FUNC_IMPL(__imp__sub_83CDAAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDAAE8"))) PPC_WEAK_FUNC(sub_83CDAAE8);
PPC_FUNC_IMPL(__imp__sub_83CDAAE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7992
	ctx.r3.s64 = ctx.r11.s64 + -7992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDAAF4"))) PPC_WEAK_FUNC(sub_83CDAAF4);
PPC_FUNC_IMPL(__imp__sub_83CDAAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDAAF8"))) PPC_WEAK_FUNC(sub_83CDAAF8);
PPC_FUNC_IMPL(__imp__sub_83CDAAF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7984
	ctx.r3.s64 = ctx.r11.s64 + -7984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDAB04"))) PPC_WEAK_FUNC(sub_83CDAB04);
PPC_FUNC_IMPL(__imp__sub_83CDAB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDAB08"))) PPC_WEAK_FUNC(sub_83CDAB08);
PPC_FUNC_IMPL(__imp__sub_83CDAB08) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,21192
	ctx.r7.s64 = ctx.r8.s64 + 21192;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,21192(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21192);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,21192(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21192, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDAB30"))) PPC_WEAK_FUNC(sub_83CDAB30);
PPC_FUNC_IMPL(__imp__sub_83CDAB30) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,21188
	ctx.r3.s64 = ctx.r11.s64 + 21188;
	// bl 0x83523120
	ctx.lr = 0x83CDAB48;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-7976
	ctx.r3.s64 = ctx.r10.s64 + -7976;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDAB54;
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

__attribute__((alias("__imp__sub_83CDAB64"))) PPC_WEAK_FUNC(sub_83CDAB64);
PPC_FUNC_IMPL(__imp__sub_83CDAB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDAB68"))) PPC_WEAK_FUNC(sub_83CDAB68);
PPC_FUNC_IMPL(__imp__sub_83CDAB68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7960
	ctx.r3.s64 = ctx.r11.s64 + -7960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDAB74"))) PPC_WEAK_FUNC(sub_83CDAB74);
PPC_FUNC_IMPL(__imp__sub_83CDAB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDAB78"))) PPC_WEAK_FUNC(sub_83CDAB78);
PPC_FUNC_IMPL(__imp__sub_83CDAB78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7952
	ctx.r3.s64 = ctx.r11.s64 + -7952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDAB84"))) PPC_WEAK_FUNC(sub_83CDAB84);
PPC_FUNC_IMPL(__imp__sub_83CDAB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDAB88"))) PPC_WEAK_FUNC(sub_83CDAB88);
PPC_FUNC_IMPL(__imp__sub_83CDAB88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7944
	ctx.r3.s64 = ctx.r11.s64 + -7944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDAB94"))) PPC_WEAK_FUNC(sub_83CDAB94);
PPC_FUNC_IMPL(__imp__sub_83CDAB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDAB98"))) PPC_WEAK_FUNC(sub_83CDAB98);
PPC_FUNC_IMPL(__imp__sub_83CDAB98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7936
	ctx.r3.s64 = ctx.r11.s64 + -7936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDABA4"))) PPC_WEAK_FUNC(sub_83CDABA4);
PPC_FUNC_IMPL(__imp__sub_83CDABA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDABA8"))) PPC_WEAK_FUNC(sub_83CDABA8);
PPC_FUNC_IMPL(__imp__sub_83CDABA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7928
	ctx.r3.s64 = ctx.r11.s64 + -7928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDABB4"))) PPC_WEAK_FUNC(sub_83CDABB4);
PPC_FUNC_IMPL(__imp__sub_83CDABB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDABB8"))) PPC_WEAK_FUNC(sub_83CDABB8);
PPC_FUNC_IMPL(__imp__sub_83CDABB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7920
	ctx.r3.s64 = ctx.r11.s64 + -7920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDABC4"))) PPC_WEAK_FUNC(sub_83CDABC4);
PPC_FUNC_IMPL(__imp__sub_83CDABC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDABC8"))) PPC_WEAK_FUNC(sub_83CDABC8);
PPC_FUNC_IMPL(__imp__sub_83CDABC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7912
	ctx.r3.s64 = ctx.r11.s64 + -7912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDABD4"))) PPC_WEAK_FUNC(sub_83CDABD4);
PPC_FUNC_IMPL(__imp__sub_83CDABD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDABD8"))) PPC_WEAK_FUNC(sub_83CDABD8);
PPC_FUNC_IMPL(__imp__sub_83CDABD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7904
	ctx.r3.s64 = ctx.r11.s64 + -7904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDABE4"))) PPC_WEAK_FUNC(sub_83CDABE4);
PPC_FUNC_IMPL(__imp__sub_83CDABE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDABE8"))) PPC_WEAK_FUNC(sub_83CDABE8);
PPC_FUNC_IMPL(__imp__sub_83CDABE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7896
	ctx.r3.s64 = ctx.r11.s64 + -7896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDABF4"))) PPC_WEAK_FUNC(sub_83CDABF4);
PPC_FUNC_IMPL(__imp__sub_83CDABF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDABF8"))) PPC_WEAK_FUNC(sub_83CDABF8);
PPC_FUNC_IMPL(__imp__sub_83CDABF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7888
	ctx.r3.s64 = ctx.r11.s64 + -7888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDAC04"))) PPC_WEAK_FUNC(sub_83CDAC04);
PPC_FUNC_IMPL(__imp__sub_83CDAC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDAC08"))) PPC_WEAK_FUNC(sub_83CDAC08);
PPC_FUNC_IMPL(__imp__sub_83CDAC08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7880
	ctx.r3.s64 = ctx.r11.s64 + -7880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDAC14"))) PPC_WEAK_FUNC(sub_83CDAC14);
PPC_FUNC_IMPL(__imp__sub_83CDAC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDAC18"))) PPC_WEAK_FUNC(sub_83CDAC18);
PPC_FUNC_IMPL(__imp__sub_83CDAC18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7872
	ctx.r3.s64 = ctx.r11.s64 + -7872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDAC24"))) PPC_WEAK_FUNC(sub_83CDAC24);
PPC_FUNC_IMPL(__imp__sub_83CDAC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDAC28"))) PPC_WEAK_FUNC(sub_83CDAC28);
PPC_FUNC_IMPL(__imp__sub_83CDAC28) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,21216
	ctx.r7.s64 = ctx.r8.s64 + 21216;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,21216(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21216);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,21216(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21216, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDAC50"))) PPC_WEAK_FUNC(sub_83CDAC50);
PPC_FUNC_IMPL(__imp__sub_83CDAC50) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,21200
	ctx.r3.s64 = ctx.r11.s64 + 21200;
	// bl 0x83523120
	ctx.lr = 0x83CDAC68;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-7864
	ctx.r3.s64 = ctx.r10.s64 + -7864;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDAC74;
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

__attribute__((alias("__imp__sub_83CDAC84"))) PPC_WEAK_FUNC(sub_83CDAC84);
PPC_FUNC_IMPL(__imp__sub_83CDAC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDAC88"))) PPC_WEAK_FUNC(sub_83CDAC88);
PPC_FUNC_IMPL(__imp__sub_83CDAC88) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,8792
	ctx.r6.s64 = ctx.r7.s64 + 8792;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,8696(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8696);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,21216(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21216);
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
	// std r9,8792(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8792, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDACD0"))) PPC_WEAK_FUNC(sub_83CDACD0);
PPC_FUNC_IMPL(__imp__sub_83CDACD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7848
	ctx.r3.s64 = ctx.r11.s64 + -7848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDACDC"))) PPC_WEAK_FUNC(sub_83CDACDC);
PPC_FUNC_IMPL(__imp__sub_83CDACDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDACE0"))) PPC_WEAK_FUNC(sub_83CDACE0);
PPC_FUNC_IMPL(__imp__sub_83CDACE0) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,21224
	ctx.r3.s64 = ctx.r11.s64 + 21224;
	// bl 0x8259af80
	ctx.lr = 0x83CDACF8;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-7832
	ctx.r3.s64 = ctx.r10.s64 + -7832;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDAD04;
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

__attribute__((alias("__imp__sub_83CDAD14"))) PPC_WEAK_FUNC(sub_83CDAD14);
PPC_FUNC_IMPL(__imp__sub_83CDAD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDAD18"))) PPC_WEAK_FUNC(sub_83CDAD18);
PPC_FUNC_IMPL(__imp__sub_83CDAD18) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,21204
	ctx.r11.s64 = ctx.r8.s64 + 21204;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,8744(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8744);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-7840
	ctx.r3.s64 = ctx.r6.s64 + -7840;
	// stw r10,21204(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21204, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDAD48"))) PPC_WEAK_FUNC(sub_83CDAD48);
PPC_FUNC_IMPL(__imp__sub_83CDAD48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7824
	ctx.r3.s64 = ctx.r11.s64 + -7824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDAD54"))) PPC_WEAK_FUNC(sub_83CDAD54);
PPC_FUNC_IMPL(__imp__sub_83CDAD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDAD58"))) PPC_WEAK_FUNC(sub_83CDAD58);
PPC_FUNC_IMPL(__imp__sub_83CDAD58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7816
	ctx.r3.s64 = ctx.r11.s64 + -7816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDAD64"))) PPC_WEAK_FUNC(sub_83CDAD64);
PPC_FUNC_IMPL(__imp__sub_83CDAD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDAD68"))) PPC_WEAK_FUNC(sub_83CDAD68);
PPC_FUNC_IMPL(__imp__sub_83CDAD68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7808
	ctx.r3.s64 = ctx.r11.s64 + -7808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDAD74"))) PPC_WEAK_FUNC(sub_83CDAD74);
PPC_FUNC_IMPL(__imp__sub_83CDAD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDAD78"))) PPC_WEAK_FUNC(sub_83CDAD78);
PPC_FUNC_IMPL(__imp__sub_83CDAD78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7800
	ctx.r3.s64 = ctx.r11.s64 + -7800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDAD84"))) PPC_WEAK_FUNC(sub_83CDAD84);
PPC_FUNC_IMPL(__imp__sub_83CDAD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDAD88"))) PPC_WEAK_FUNC(sub_83CDAD88);
PPC_FUNC_IMPL(__imp__sub_83CDAD88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7792
	ctx.r3.s64 = ctx.r11.s64 + -7792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDAD94"))) PPC_WEAK_FUNC(sub_83CDAD94);
PPC_FUNC_IMPL(__imp__sub_83CDAD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDAD98"))) PPC_WEAK_FUNC(sub_83CDAD98);
PPC_FUNC_IMPL(__imp__sub_83CDAD98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7784
	ctx.r3.s64 = ctx.r11.s64 + -7784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDADA4"))) PPC_WEAK_FUNC(sub_83CDADA4);
PPC_FUNC_IMPL(__imp__sub_83CDADA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDADA8"))) PPC_WEAK_FUNC(sub_83CDADA8);
PPC_FUNC_IMPL(__imp__sub_83CDADA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7776
	ctx.r3.s64 = ctx.r11.s64 + -7776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDADB4"))) PPC_WEAK_FUNC(sub_83CDADB4);
PPC_FUNC_IMPL(__imp__sub_83CDADB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDADB8"))) PPC_WEAK_FUNC(sub_83CDADB8);
PPC_FUNC_IMPL(__imp__sub_83CDADB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7768
	ctx.r3.s64 = ctx.r11.s64 + -7768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDADC4"))) PPC_WEAK_FUNC(sub_83CDADC4);
PPC_FUNC_IMPL(__imp__sub_83CDADC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDADC8"))) PPC_WEAK_FUNC(sub_83CDADC8);
PPC_FUNC_IMPL(__imp__sub_83CDADC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7760
	ctx.r3.s64 = ctx.r11.s64 + -7760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDADD4"))) PPC_WEAK_FUNC(sub_83CDADD4);
PPC_FUNC_IMPL(__imp__sub_83CDADD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDADD8"))) PPC_WEAK_FUNC(sub_83CDADD8);
PPC_FUNC_IMPL(__imp__sub_83CDADD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7752
	ctx.r3.s64 = ctx.r11.s64 + -7752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDADE4"))) PPC_WEAK_FUNC(sub_83CDADE4);
PPC_FUNC_IMPL(__imp__sub_83CDADE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDADE8"))) PPC_WEAK_FUNC(sub_83CDADE8);
PPC_FUNC_IMPL(__imp__sub_83CDADE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7744
	ctx.r3.s64 = ctx.r11.s64 + -7744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDADF4"))) PPC_WEAK_FUNC(sub_83CDADF4);
PPC_FUNC_IMPL(__imp__sub_83CDADF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDADF8"))) PPC_WEAK_FUNC(sub_83CDADF8);
PPC_FUNC_IMPL(__imp__sub_83CDADF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7736
	ctx.r3.s64 = ctx.r11.s64 + -7736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDAE04"))) PPC_WEAK_FUNC(sub_83CDAE04);
PPC_FUNC_IMPL(__imp__sub_83CDAE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDAE08"))) PPC_WEAK_FUNC(sub_83CDAE08);
PPC_FUNC_IMPL(__imp__sub_83CDAE08) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,21572
	ctx.r7.s64 = ctx.r8.s64 + 21572;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,21572(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21572);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,21572(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21572, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDAE30"))) PPC_WEAK_FUNC(sub_83CDAE30);
PPC_FUNC_IMPL(__imp__sub_83CDAE30) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,21568
	ctx.r3.s64 = ctx.r11.s64 + 21568;
	// bl 0x83523120
	ctx.lr = 0x83CDAE48;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-7728
	ctx.r3.s64 = ctx.r10.s64 + -7728;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDAE54;
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

__attribute__((alias("__imp__sub_83CDAE64"))) PPC_WEAK_FUNC(sub_83CDAE64);
PPC_FUNC_IMPL(__imp__sub_83CDAE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDAE68"))) PPC_WEAK_FUNC(sub_83CDAE68);
PPC_FUNC_IMPL(__imp__sub_83CDAE68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7712
	ctx.r3.s64 = ctx.r11.s64 + -7712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDAE74"))) PPC_WEAK_FUNC(sub_83CDAE74);
PPC_FUNC_IMPL(__imp__sub_83CDAE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDAE78"))) PPC_WEAK_FUNC(sub_83CDAE78);
PPC_FUNC_IMPL(__imp__sub_83CDAE78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7704
	ctx.r3.s64 = ctx.r11.s64 + -7704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDAE84"))) PPC_WEAK_FUNC(sub_83CDAE84);
PPC_FUNC_IMPL(__imp__sub_83CDAE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDAE88"))) PPC_WEAK_FUNC(sub_83CDAE88);
PPC_FUNC_IMPL(__imp__sub_83CDAE88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7696
	ctx.r3.s64 = ctx.r11.s64 + -7696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDAE94"))) PPC_WEAK_FUNC(sub_83CDAE94);
PPC_FUNC_IMPL(__imp__sub_83CDAE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDAE98"))) PPC_WEAK_FUNC(sub_83CDAE98);
PPC_FUNC_IMPL(__imp__sub_83CDAE98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7688
	ctx.r3.s64 = ctx.r11.s64 + -7688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDAEA4"))) PPC_WEAK_FUNC(sub_83CDAEA4);
PPC_FUNC_IMPL(__imp__sub_83CDAEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDAEA8"))) PPC_WEAK_FUNC(sub_83CDAEA8);
PPC_FUNC_IMPL(__imp__sub_83CDAEA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7680
	ctx.r3.s64 = ctx.r11.s64 + -7680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDAEB4"))) PPC_WEAK_FUNC(sub_83CDAEB4);
PPC_FUNC_IMPL(__imp__sub_83CDAEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDAEB8"))) PPC_WEAK_FUNC(sub_83CDAEB8);
PPC_FUNC_IMPL(__imp__sub_83CDAEB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7672
	ctx.r3.s64 = ctx.r11.s64 + -7672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDAEC4"))) PPC_WEAK_FUNC(sub_83CDAEC4);
PPC_FUNC_IMPL(__imp__sub_83CDAEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDAEC8"))) PPC_WEAK_FUNC(sub_83CDAEC8);
PPC_FUNC_IMPL(__imp__sub_83CDAEC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7664
	ctx.r3.s64 = ctx.r11.s64 + -7664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDAED4"))) PPC_WEAK_FUNC(sub_83CDAED4);
PPC_FUNC_IMPL(__imp__sub_83CDAED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDAED8"))) PPC_WEAK_FUNC(sub_83CDAED8);
PPC_FUNC_IMPL(__imp__sub_83CDAED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7656
	ctx.r3.s64 = ctx.r11.s64 + -7656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDAEE4"))) PPC_WEAK_FUNC(sub_83CDAEE4);
PPC_FUNC_IMPL(__imp__sub_83CDAEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDAEE8"))) PPC_WEAK_FUNC(sub_83CDAEE8);
PPC_FUNC_IMPL(__imp__sub_83CDAEE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7648
	ctx.r3.s64 = ctx.r11.s64 + -7648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDAEF4"))) PPC_WEAK_FUNC(sub_83CDAEF4);
PPC_FUNC_IMPL(__imp__sub_83CDAEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDAEF8"))) PPC_WEAK_FUNC(sub_83CDAEF8);
PPC_FUNC_IMPL(__imp__sub_83CDAEF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7640
	ctx.r3.s64 = ctx.r11.s64 + -7640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDAF04"))) PPC_WEAK_FUNC(sub_83CDAF04);
PPC_FUNC_IMPL(__imp__sub_83CDAF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDAF08"))) PPC_WEAK_FUNC(sub_83CDAF08);
PPC_FUNC_IMPL(__imp__sub_83CDAF08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7632
	ctx.r3.s64 = ctx.r11.s64 + -7632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDAF14"))) PPC_WEAK_FUNC(sub_83CDAF14);
PPC_FUNC_IMPL(__imp__sub_83CDAF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDAF18"))) PPC_WEAK_FUNC(sub_83CDAF18);
PPC_FUNC_IMPL(__imp__sub_83CDAF18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7624
	ctx.r3.s64 = ctx.r11.s64 + -7624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDAF24"))) PPC_WEAK_FUNC(sub_83CDAF24);
PPC_FUNC_IMPL(__imp__sub_83CDAF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDAF28"))) PPC_WEAK_FUNC(sub_83CDAF28);
PPC_FUNC_IMPL(__imp__sub_83CDAF28) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,21600
	ctx.r7.s64 = ctx.r8.s64 + 21600;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,21600(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21600);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,21600(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21600, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDAF50"))) PPC_WEAK_FUNC(sub_83CDAF50);
PPC_FUNC_IMPL(__imp__sub_83CDAF50) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,21584
	ctx.r3.s64 = ctx.r11.s64 + 21584;
	// bl 0x83523120
	ctx.lr = 0x83CDAF68;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-7616
	ctx.r3.s64 = ctx.r10.s64 + -7616;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDAF74;
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

__attribute__((alias("__imp__sub_83CDAF84"))) PPC_WEAK_FUNC(sub_83CDAF84);
PPC_FUNC_IMPL(__imp__sub_83CDAF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDAF88"))) PPC_WEAK_FUNC(sub_83CDAF88);
PPC_FUNC_IMPL(__imp__sub_83CDAF88) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,9076
	ctx.r6.s64 = ctx.r7.s64 + 9076;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,8980(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8980);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,21600(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21600);
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
	// std r9,9076(r7)
	PPC_STORE_U64(ctx.r7.u32 + 9076, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDAFD0"))) PPC_WEAK_FUNC(sub_83CDAFD0);
PPC_FUNC_IMPL(__imp__sub_83CDAFD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7600
	ctx.r3.s64 = ctx.r11.s64 + -7600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDAFDC"))) PPC_WEAK_FUNC(sub_83CDAFDC);
PPC_FUNC_IMPL(__imp__sub_83CDAFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDAFE0"))) PPC_WEAK_FUNC(sub_83CDAFE0);
PPC_FUNC_IMPL(__imp__sub_83CDAFE0) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,21608
	ctx.r3.s64 = ctx.r11.s64 + 21608;
	// bl 0x8259af80
	ctx.lr = 0x83CDAFF8;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-7584
	ctx.r3.s64 = ctx.r10.s64 + -7584;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDB004;
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

__attribute__((alias("__imp__sub_83CDB014"))) PPC_WEAK_FUNC(sub_83CDB014);
PPC_FUNC_IMPL(__imp__sub_83CDB014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDB018"))) PPC_WEAK_FUNC(sub_83CDB018);
PPC_FUNC_IMPL(__imp__sub_83CDB018) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,21588
	ctx.r11.s64 = ctx.r8.s64 + 21588;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,9028(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9028);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-7592
	ctx.r3.s64 = ctx.r6.s64 + -7592;
	// stw r10,21588(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21588, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDB048"))) PPC_WEAK_FUNC(sub_83CDB048);
PPC_FUNC_IMPL(__imp__sub_83CDB048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7576
	ctx.r3.s64 = ctx.r11.s64 + -7576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDB054"))) PPC_WEAK_FUNC(sub_83CDB054);
PPC_FUNC_IMPL(__imp__sub_83CDB054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDB058"))) PPC_WEAK_FUNC(sub_83CDB058);
PPC_FUNC_IMPL(__imp__sub_83CDB058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7568
	ctx.r3.s64 = ctx.r11.s64 + -7568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDB064"))) PPC_WEAK_FUNC(sub_83CDB064);
PPC_FUNC_IMPL(__imp__sub_83CDB064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDB068"))) PPC_WEAK_FUNC(sub_83CDB068);
PPC_FUNC_IMPL(__imp__sub_83CDB068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7560
	ctx.r3.s64 = ctx.r11.s64 + -7560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDB074"))) PPC_WEAK_FUNC(sub_83CDB074);
PPC_FUNC_IMPL(__imp__sub_83CDB074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDB078"))) PPC_WEAK_FUNC(sub_83CDB078);
PPC_FUNC_IMPL(__imp__sub_83CDB078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7552
	ctx.r3.s64 = ctx.r11.s64 + -7552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDB084"))) PPC_WEAK_FUNC(sub_83CDB084);
PPC_FUNC_IMPL(__imp__sub_83CDB084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDB088"))) PPC_WEAK_FUNC(sub_83CDB088);
PPC_FUNC_IMPL(__imp__sub_83CDB088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7544
	ctx.r3.s64 = ctx.r11.s64 + -7544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDB094"))) PPC_WEAK_FUNC(sub_83CDB094);
PPC_FUNC_IMPL(__imp__sub_83CDB094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDB098"))) PPC_WEAK_FUNC(sub_83CDB098);
PPC_FUNC_IMPL(__imp__sub_83CDB098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7536
	ctx.r3.s64 = ctx.r11.s64 + -7536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDB0A4"))) PPC_WEAK_FUNC(sub_83CDB0A4);
PPC_FUNC_IMPL(__imp__sub_83CDB0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDB0A8"))) PPC_WEAK_FUNC(sub_83CDB0A8);
PPC_FUNC_IMPL(__imp__sub_83CDB0A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7528
	ctx.r3.s64 = ctx.r11.s64 + -7528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDB0B4"))) PPC_WEAK_FUNC(sub_83CDB0B4);
PPC_FUNC_IMPL(__imp__sub_83CDB0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDB0B8"))) PPC_WEAK_FUNC(sub_83CDB0B8);
PPC_FUNC_IMPL(__imp__sub_83CDB0B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7520
	ctx.r3.s64 = ctx.r11.s64 + -7520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDB0C4"))) PPC_WEAK_FUNC(sub_83CDB0C4);
PPC_FUNC_IMPL(__imp__sub_83CDB0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDB0C8"))) PPC_WEAK_FUNC(sub_83CDB0C8);
PPC_FUNC_IMPL(__imp__sub_83CDB0C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7512
	ctx.r3.s64 = ctx.r11.s64 + -7512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDB0D4"))) PPC_WEAK_FUNC(sub_83CDB0D4);
PPC_FUNC_IMPL(__imp__sub_83CDB0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDB0D8"))) PPC_WEAK_FUNC(sub_83CDB0D8);
PPC_FUNC_IMPL(__imp__sub_83CDB0D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7504
	ctx.r3.s64 = ctx.r11.s64 + -7504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDB0E4"))) PPC_WEAK_FUNC(sub_83CDB0E4);
PPC_FUNC_IMPL(__imp__sub_83CDB0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDB0E8"))) PPC_WEAK_FUNC(sub_83CDB0E8);
PPC_FUNC_IMPL(__imp__sub_83CDB0E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7496
	ctx.r3.s64 = ctx.r11.s64 + -7496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDB0F4"))) PPC_WEAK_FUNC(sub_83CDB0F4);
PPC_FUNC_IMPL(__imp__sub_83CDB0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDB0F8"))) PPC_WEAK_FUNC(sub_83CDB0F8);
PPC_FUNC_IMPL(__imp__sub_83CDB0F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7488
	ctx.r3.s64 = ctx.r11.s64 + -7488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDB104"))) PPC_WEAK_FUNC(sub_83CDB104);
PPC_FUNC_IMPL(__imp__sub_83CDB104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDB108"))) PPC_WEAK_FUNC(sub_83CDB108);
PPC_FUNC_IMPL(__imp__sub_83CDB108) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,21968
	ctx.r7.s64 = ctx.r8.s64 + 21968;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,21968(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21968);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,21968(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21968, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDB130"))) PPC_WEAK_FUNC(sub_83CDB130);
PPC_FUNC_IMPL(__imp__sub_83CDB130) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,21952
	ctx.r3.s64 = ctx.r11.s64 + 21952;
	// bl 0x83523120
	ctx.lr = 0x83CDB148;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-7480
	ctx.r3.s64 = ctx.r10.s64 + -7480;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDB154;
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

__attribute__((alias("__imp__sub_83CDB164"))) PPC_WEAK_FUNC(sub_83CDB164);
PPC_FUNC_IMPL(__imp__sub_83CDB164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDB168"))) PPC_WEAK_FUNC(sub_83CDB168);
PPC_FUNC_IMPL(__imp__sub_83CDB168) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,9228
	ctx.r6.s64 = ctx.r7.s64 + 9228;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,9132(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 9132);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,21968(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21968);
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
	// std r9,9228(r7)
	PPC_STORE_U64(ctx.r7.u32 + 9228, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDB1B0"))) PPC_WEAK_FUNC(sub_83CDB1B0);
PPC_FUNC_IMPL(__imp__sub_83CDB1B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7464
	ctx.r3.s64 = ctx.r11.s64 + -7464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDB1BC"))) PPC_WEAK_FUNC(sub_83CDB1BC);
PPC_FUNC_IMPL(__imp__sub_83CDB1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDB1C0"))) PPC_WEAK_FUNC(sub_83CDB1C0);
PPC_FUNC_IMPL(__imp__sub_83CDB1C0) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,21976
	ctx.r3.s64 = ctx.r11.s64 + 21976;
	// bl 0x8259af80
	ctx.lr = 0x83CDB1D8;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-7448
	ctx.r3.s64 = ctx.r10.s64 + -7448;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDB1E4;
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

__attribute__((alias("__imp__sub_83CDB1F4"))) PPC_WEAK_FUNC(sub_83CDB1F4);
PPC_FUNC_IMPL(__imp__sub_83CDB1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDB1F8"))) PPC_WEAK_FUNC(sub_83CDB1F8);
PPC_FUNC_IMPL(__imp__sub_83CDB1F8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,21956
	ctx.r11.s64 = ctx.r8.s64 + 21956;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,9180(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9180);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-7456
	ctx.r3.s64 = ctx.r6.s64 + -7456;
	// stw r10,21956(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21956, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDB228"))) PPC_WEAK_FUNC(sub_83CDB228);
PPC_FUNC_IMPL(__imp__sub_83CDB228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7440
	ctx.r3.s64 = ctx.r11.s64 + -7440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDB234"))) PPC_WEAK_FUNC(sub_83CDB234);
PPC_FUNC_IMPL(__imp__sub_83CDB234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDB238"))) PPC_WEAK_FUNC(sub_83CDB238);
PPC_FUNC_IMPL(__imp__sub_83CDB238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7432
	ctx.r3.s64 = ctx.r11.s64 + -7432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDB244"))) PPC_WEAK_FUNC(sub_83CDB244);
PPC_FUNC_IMPL(__imp__sub_83CDB244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDB248"))) PPC_WEAK_FUNC(sub_83CDB248);
PPC_FUNC_IMPL(__imp__sub_83CDB248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7424
	ctx.r3.s64 = ctx.r11.s64 + -7424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDB254"))) PPC_WEAK_FUNC(sub_83CDB254);
PPC_FUNC_IMPL(__imp__sub_83CDB254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDB258"))) PPC_WEAK_FUNC(sub_83CDB258);
PPC_FUNC_IMPL(__imp__sub_83CDB258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7416
	ctx.r3.s64 = ctx.r11.s64 + -7416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDB264"))) PPC_WEAK_FUNC(sub_83CDB264);
PPC_FUNC_IMPL(__imp__sub_83CDB264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDB268"))) PPC_WEAK_FUNC(sub_83CDB268);
PPC_FUNC_IMPL(__imp__sub_83CDB268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7408
	ctx.r3.s64 = ctx.r11.s64 + -7408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDB274"))) PPC_WEAK_FUNC(sub_83CDB274);
PPC_FUNC_IMPL(__imp__sub_83CDB274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDB278"))) PPC_WEAK_FUNC(sub_83CDB278);
PPC_FUNC_IMPL(__imp__sub_83CDB278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7400
	ctx.r3.s64 = ctx.r11.s64 + -7400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDB284"))) PPC_WEAK_FUNC(sub_83CDB284);
PPC_FUNC_IMPL(__imp__sub_83CDB284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDB288"))) PPC_WEAK_FUNC(sub_83CDB288);
PPC_FUNC_IMPL(__imp__sub_83CDB288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7392
	ctx.r3.s64 = ctx.r11.s64 + -7392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDB294"))) PPC_WEAK_FUNC(sub_83CDB294);
PPC_FUNC_IMPL(__imp__sub_83CDB294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDB298"))) PPC_WEAK_FUNC(sub_83CDB298);
PPC_FUNC_IMPL(__imp__sub_83CDB298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7384
	ctx.r3.s64 = ctx.r11.s64 + -7384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDB2A4"))) PPC_WEAK_FUNC(sub_83CDB2A4);
PPC_FUNC_IMPL(__imp__sub_83CDB2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDB2A8"))) PPC_WEAK_FUNC(sub_83CDB2A8);
PPC_FUNC_IMPL(__imp__sub_83CDB2A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7376
	ctx.r3.s64 = ctx.r11.s64 + -7376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDB2B4"))) PPC_WEAK_FUNC(sub_83CDB2B4);
PPC_FUNC_IMPL(__imp__sub_83CDB2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDB2B8"))) PPC_WEAK_FUNC(sub_83CDB2B8);
PPC_FUNC_IMPL(__imp__sub_83CDB2B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7368
	ctx.r3.s64 = ctx.r11.s64 + -7368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDB2C4"))) PPC_WEAK_FUNC(sub_83CDB2C4);
PPC_FUNC_IMPL(__imp__sub_83CDB2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDB2C8"))) PPC_WEAK_FUNC(sub_83CDB2C8);
PPC_FUNC_IMPL(__imp__sub_83CDB2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7360
	ctx.r3.s64 = ctx.r11.s64 + -7360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDB2D4"))) PPC_WEAK_FUNC(sub_83CDB2D4);
PPC_FUNC_IMPL(__imp__sub_83CDB2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDB2D8"))) PPC_WEAK_FUNC(sub_83CDB2D8);
PPC_FUNC_IMPL(__imp__sub_83CDB2D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7352
	ctx.r3.s64 = ctx.r11.s64 + -7352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDB2E4"))) PPC_WEAK_FUNC(sub_83CDB2E4);
PPC_FUNC_IMPL(__imp__sub_83CDB2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDB2E8"))) PPC_WEAK_FUNC(sub_83CDB2E8);
PPC_FUNC_IMPL(__imp__sub_83CDB2E8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,22336
	ctx.r7.s64 = ctx.r8.s64 + 22336;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,22336(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 22336);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,22336(r8)
	PPC_STORE_U32(ctx.r8.u32 + 22336, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDB310"))) PPC_WEAK_FUNC(sub_83CDB310);
PPC_FUNC_IMPL(__imp__sub_83CDB310) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,22320
	ctx.r3.s64 = ctx.r11.s64 + 22320;
	// bl 0x83523120
	ctx.lr = 0x83CDB328;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-7344
	ctx.r3.s64 = ctx.r10.s64 + -7344;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDB334;
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

__attribute__((alias("__imp__sub_83CDB344"))) PPC_WEAK_FUNC(sub_83CDB344);
PPC_FUNC_IMPL(__imp__sub_83CDB344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDB348"))) PPC_WEAK_FUNC(sub_83CDB348);
PPC_FUNC_IMPL(__imp__sub_83CDB348) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,9416
	ctx.r6.s64 = ctx.r7.s64 + 9416;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,9320(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 9320);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,22336(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22336);
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
	// std r9,9416(r7)
	PPC_STORE_U64(ctx.r7.u32 + 9416, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDB390"))) PPC_WEAK_FUNC(sub_83CDB390);
PPC_FUNC_IMPL(__imp__sub_83CDB390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7328
	ctx.r3.s64 = ctx.r11.s64 + -7328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDB39C"))) PPC_WEAK_FUNC(sub_83CDB39C);
PPC_FUNC_IMPL(__imp__sub_83CDB39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDB3A0"))) PPC_WEAK_FUNC(sub_83CDB3A0);
PPC_FUNC_IMPL(__imp__sub_83CDB3A0) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,22344
	ctx.r3.s64 = ctx.r11.s64 + 22344;
	// bl 0x8259af80
	ctx.lr = 0x83CDB3B8;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-7312
	ctx.r3.s64 = ctx.r10.s64 + -7312;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDB3C4;
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

__attribute__((alias("__imp__sub_83CDB3D4"))) PPC_WEAK_FUNC(sub_83CDB3D4);
PPC_FUNC_IMPL(__imp__sub_83CDB3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDB3D8"))) PPC_WEAK_FUNC(sub_83CDB3D8);
PPC_FUNC_IMPL(__imp__sub_83CDB3D8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,22324
	ctx.r11.s64 = ctx.r8.s64 + 22324;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,9368(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9368);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-7320
	ctx.r3.s64 = ctx.r6.s64 + -7320;
	// stw r10,22324(r8)
	PPC_STORE_U32(ctx.r8.u32 + 22324, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDB408"))) PPC_WEAK_FUNC(sub_83CDB408);
PPC_FUNC_IMPL(__imp__sub_83CDB408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7304
	ctx.r3.s64 = ctx.r11.s64 + -7304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDB414"))) PPC_WEAK_FUNC(sub_83CDB414);
PPC_FUNC_IMPL(__imp__sub_83CDB414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDB418"))) PPC_WEAK_FUNC(sub_83CDB418);
PPC_FUNC_IMPL(__imp__sub_83CDB418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7296
	ctx.r3.s64 = ctx.r11.s64 + -7296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDB424"))) PPC_WEAK_FUNC(sub_83CDB424);
PPC_FUNC_IMPL(__imp__sub_83CDB424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDB428"))) PPC_WEAK_FUNC(sub_83CDB428);
PPC_FUNC_IMPL(__imp__sub_83CDB428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7288
	ctx.r3.s64 = ctx.r11.s64 + -7288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDB434"))) PPC_WEAK_FUNC(sub_83CDB434);
PPC_FUNC_IMPL(__imp__sub_83CDB434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDB438"))) PPC_WEAK_FUNC(sub_83CDB438);
PPC_FUNC_IMPL(__imp__sub_83CDB438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7280
	ctx.r3.s64 = ctx.r11.s64 + -7280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDB444"))) PPC_WEAK_FUNC(sub_83CDB444);
PPC_FUNC_IMPL(__imp__sub_83CDB444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDB448"))) PPC_WEAK_FUNC(sub_83CDB448);
PPC_FUNC_IMPL(__imp__sub_83CDB448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7272
	ctx.r3.s64 = ctx.r11.s64 + -7272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDB454"))) PPC_WEAK_FUNC(sub_83CDB454);
PPC_FUNC_IMPL(__imp__sub_83CDB454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDB458"))) PPC_WEAK_FUNC(sub_83CDB458);
PPC_FUNC_IMPL(__imp__sub_83CDB458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7264
	ctx.r3.s64 = ctx.r11.s64 + -7264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDB464"))) PPC_WEAK_FUNC(sub_83CDB464);
PPC_FUNC_IMPL(__imp__sub_83CDB464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDB468"))) PPC_WEAK_FUNC(sub_83CDB468);
PPC_FUNC_IMPL(__imp__sub_83CDB468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7256
	ctx.r3.s64 = ctx.r11.s64 + -7256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDB474"))) PPC_WEAK_FUNC(sub_83CDB474);
PPC_FUNC_IMPL(__imp__sub_83CDB474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDB478"))) PPC_WEAK_FUNC(sub_83CDB478);
PPC_FUNC_IMPL(__imp__sub_83CDB478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7248
	ctx.r3.s64 = ctx.r11.s64 + -7248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDB484"))) PPC_WEAK_FUNC(sub_83CDB484);
PPC_FUNC_IMPL(__imp__sub_83CDB484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDB488"))) PPC_WEAK_FUNC(sub_83CDB488);
PPC_FUNC_IMPL(__imp__sub_83CDB488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7240
	ctx.r3.s64 = ctx.r11.s64 + -7240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDB494"))) PPC_WEAK_FUNC(sub_83CDB494);
PPC_FUNC_IMPL(__imp__sub_83CDB494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDB498"))) PPC_WEAK_FUNC(sub_83CDB498);
PPC_FUNC_IMPL(__imp__sub_83CDB498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7232
	ctx.r3.s64 = ctx.r11.s64 + -7232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDB4A4"))) PPC_WEAK_FUNC(sub_83CDB4A4);
PPC_FUNC_IMPL(__imp__sub_83CDB4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDB4A8"))) PPC_WEAK_FUNC(sub_83CDB4A8);
PPC_FUNC_IMPL(__imp__sub_83CDB4A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7224
	ctx.r3.s64 = ctx.r11.s64 + -7224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDB4B4"))) PPC_WEAK_FUNC(sub_83CDB4B4);
PPC_FUNC_IMPL(__imp__sub_83CDB4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDB4B8"))) PPC_WEAK_FUNC(sub_83CDB4B8);
PPC_FUNC_IMPL(__imp__sub_83CDB4B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7216
	ctx.r3.s64 = ctx.r11.s64 + -7216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDB4C4"))) PPC_WEAK_FUNC(sub_83CDB4C4);
PPC_FUNC_IMPL(__imp__sub_83CDB4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDB4C8"))) PPC_WEAK_FUNC(sub_83CDB4C8);
PPC_FUNC_IMPL(__imp__sub_83CDB4C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,22712
	ctx.r7.s64 = ctx.r8.s64 + 22712;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,22712(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 22712);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,22712(r8)
	PPC_STORE_U32(ctx.r8.u32 + 22712, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDB4F0"))) PPC_WEAK_FUNC(sub_83CDB4F0);
PPC_FUNC_IMPL(__imp__sub_83CDB4F0) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,22696
	ctx.r3.s64 = ctx.r11.s64 + 22696;
	// bl 0x83523120
	ctx.lr = 0x83CDB508;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-7208
	ctx.r3.s64 = ctx.r10.s64 + -7208;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDB514;
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

__attribute__((alias("__imp__sub_83CDB524"))) PPC_WEAK_FUNC(sub_83CDB524);
PPC_FUNC_IMPL(__imp__sub_83CDB524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDB528"))) PPC_WEAK_FUNC(sub_83CDB528);
PPC_FUNC_IMPL(__imp__sub_83CDB528) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31768
	ctx.r7.s64 = -2081947648;
	// lis r5,-31768
	ctx.r5.s64 = -2081947648;
	// addi r6,r7,9584
	ctx.r6.s64 = ctx.r7.s64 + 9584;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,9488(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 9488);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,22712(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22712);
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
	// std r9,9584(r7)
	PPC_STORE_U64(ctx.r7.u32 + 9584, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CDB570"))) PPC_WEAK_FUNC(sub_83CDB570);
PPC_FUNC_IMPL(__imp__sub_83CDB570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7192
	ctx.r3.s64 = ctx.r11.s64 + -7192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDB57C"))) PPC_WEAK_FUNC(sub_83CDB57C);
PPC_FUNC_IMPL(__imp__sub_83CDB57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDB580"))) PPC_WEAK_FUNC(sub_83CDB580);
PPC_FUNC_IMPL(__imp__sub_83CDB580) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,22720
	ctx.r3.s64 = ctx.r11.s64 + 22720;
	// bl 0x8259af80
	ctx.lr = 0x83CDB598;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-7176
	ctx.r3.s64 = ctx.r10.s64 + -7176;
	// bl 0x831cdcc8
	ctx.lr = 0x83CDB5A4;
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

__attribute__((alias("__imp__sub_83CDB5B4"))) PPC_WEAK_FUNC(sub_83CDB5B4);
PPC_FUNC_IMPL(__imp__sub_83CDB5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDB5B8"))) PPC_WEAK_FUNC(sub_83CDB5B8);
PPC_FUNC_IMPL(__imp__sub_83CDB5B8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31768
	ctx.r10.s64 = -2081947648;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,22700
	ctx.r11.s64 = ctx.r8.s64 + 22700;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,9536(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9536);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-7184
	ctx.r3.s64 = ctx.r6.s64 + -7184;
	// stw r10,22700(r8)
	PPC_STORE_U32(ctx.r8.u32 + 22700, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDB5E8"))) PPC_WEAK_FUNC(sub_83CDB5E8);
PPC_FUNC_IMPL(__imp__sub_83CDB5E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7168
	ctx.r3.s64 = ctx.r11.s64 + -7168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDB5F4"))) PPC_WEAK_FUNC(sub_83CDB5F4);
PPC_FUNC_IMPL(__imp__sub_83CDB5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDB5F8"))) PPC_WEAK_FUNC(sub_83CDB5F8);
PPC_FUNC_IMPL(__imp__sub_83CDB5F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7160
	ctx.r3.s64 = ctx.r11.s64 + -7160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDB604"))) PPC_WEAK_FUNC(sub_83CDB604);
PPC_FUNC_IMPL(__imp__sub_83CDB604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDB608"))) PPC_WEAK_FUNC(sub_83CDB608);
PPC_FUNC_IMPL(__imp__sub_83CDB608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7152
	ctx.r3.s64 = ctx.r11.s64 + -7152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDB614"))) PPC_WEAK_FUNC(sub_83CDB614);
PPC_FUNC_IMPL(__imp__sub_83CDB614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CDB618"))) PPC_WEAK_FUNC(sub_83CDB618);
PPC_FUNC_IMPL(__imp__sub_83CDB618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-7144
	ctx.r3.s64 = ctx.r11.s64 + -7144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CDB624"))) PPC_WEAK_FUNC(sub_83CDB624);
PPC_FUNC_IMPL(__imp__sub_83CDB624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

