#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BDFB28"))) PPC_WEAK_FUNC(sub_83BDFB28);
PPC_FUNC_IMPL(__imp__sub_83BDFB28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,32336
	ctx.r3.s64 = ctx.r11.s64 + 32336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDFB34"))) PPC_WEAK_FUNC(sub_83BDFB34);
PPC_FUNC_IMPL(__imp__sub_83BDFB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDFB38"))) PPC_WEAK_FUNC(sub_83BDFB38);
PPC_FUNC_IMPL(__imp__sub_83BDFB38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,32344
	ctx.r3.s64 = ctx.r11.s64 + 32344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDFB44"))) PPC_WEAK_FUNC(sub_83BDFB44);
PPC_FUNC_IMPL(__imp__sub_83BDFB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDFB48"))) PPC_WEAK_FUNC(sub_83BDFB48);
PPC_FUNC_IMPL(__imp__sub_83BDFB48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,32352
	ctx.r3.s64 = ctx.r11.s64 + 32352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDFB54"))) PPC_WEAK_FUNC(sub_83BDFB54);
PPC_FUNC_IMPL(__imp__sub_83BDFB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDFB58"))) PPC_WEAK_FUNC(sub_83BDFB58);
PPC_FUNC_IMPL(__imp__sub_83BDFB58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,32360
	ctx.r3.s64 = ctx.r11.s64 + 32360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDFB64"))) PPC_WEAK_FUNC(sub_83BDFB64);
PPC_FUNC_IMPL(__imp__sub_83BDFB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDFB68"))) PPC_WEAK_FUNC(sub_83BDFB68);
PPC_FUNC_IMPL(__imp__sub_83BDFB68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,32368
	ctx.r3.s64 = ctx.r11.s64 + 32368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDFB74"))) PPC_WEAK_FUNC(sub_83BDFB74);
PPC_FUNC_IMPL(__imp__sub_83BDFB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDFB78"))) PPC_WEAK_FUNC(sub_83BDFB78);
PPC_FUNC_IMPL(__imp__sub_83BDFB78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,32376
	ctx.r3.s64 = ctx.r11.s64 + 32376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDFB84"))) PPC_WEAK_FUNC(sub_83BDFB84);
PPC_FUNC_IMPL(__imp__sub_83BDFB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDFB88"))) PPC_WEAK_FUNC(sub_83BDFB88);
PPC_FUNC_IMPL(__imp__sub_83BDFB88) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-7944
	ctx.r3.s64 = ctx.r11.s64 + -7944;
	// bl 0x83523120
	ctx.lr = 0x83BDFBA0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,32384
	ctx.r3.s64 = ctx.r10.s64 + 32384;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDFBAC;
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

__attribute__((alias("__imp__sub_83BDFBBC"))) PPC_WEAK_FUNC(sub_83BDFBBC);
PPC_FUNC_IMPL(__imp__sub_83BDFBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDFBC0"))) PPC_WEAK_FUNC(sub_83BDFBC0);
PPC_FUNC_IMPL(__imp__sub_83BDFBC0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-7928
	ctx.r7.s64 = ctx.r8.s64 + -7928;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-7928(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7928);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-7928(r8)
	PPC_STORE_U32(ctx.r8.u32 + -7928, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDFBE8"))) PPC_WEAK_FUNC(sub_83BDFBE8);
PPC_FUNC_IMPL(__imp__sub_83BDFBE8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-20080
	ctx.r6.s64 = ctx.r7.s64 + -20080;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-20152(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -20152);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-7928(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -7928);
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
	// std r9,-20080(r7)
	PPC_STORE_U64(ctx.r7.u32 + -20080, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDFC30"))) PPC_WEAK_FUNC(sub_83BDFC30);
PPC_FUNC_IMPL(__imp__sub_83BDFC30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,32400
	ctx.r3.s64 = ctx.r11.s64 + 32400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDFC3C"))) PPC_WEAK_FUNC(sub_83BDFC3C);
PPC_FUNC_IMPL(__imp__sub_83BDFC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDFC40"))) PPC_WEAK_FUNC(sub_83BDFC40);
PPC_FUNC_IMPL(__imp__sub_83BDFC40) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-7920
	ctx.r3.s64 = ctx.r11.s64 + -7920;
	// bl 0x8259af80
	ctx.lr = 0x83BDFC58;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,32416
	ctx.r3.s64 = ctx.r10.s64 + 32416;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDFC64;
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

__attribute__((alias("__imp__sub_83BDFC74"))) PPC_WEAK_FUNC(sub_83BDFC74);
PPC_FUNC_IMPL(__imp__sub_83BDFC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDFC78"))) PPC_WEAK_FUNC(sub_83BDFC78);
PPC_FUNC_IMPL(__imp__sub_83BDFC78) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-7940
	ctx.r11.s64 = ctx.r8.s64 + -7940;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-20104(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20104);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,32408
	ctx.r3.s64 = ctx.r6.s64 + 32408;
	// stw r10,-7940(r8)
	PPC_STORE_U32(ctx.r8.u32 + -7940, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDFCA8"))) PPC_WEAK_FUNC(sub_83BDFCA8);
PPC_FUNC_IMPL(__imp__sub_83BDFCA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r31,r11,-20056
	ctx.r31.s64 = ctx.r11.s64 + -20056;
	// addi r30,r10,-9444
	ctx.r30.s64 = ctx.r10.s64 + -9444;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8259cc28
	ctx.lr = 0x83BDFCDC;
	sub_8259CC28(ctx, base);
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// li r10,15
	ctx.r10.s64 = 15;
	// ori r11,r11,37
	ctx.r11.u64 = ctx.r11.u64 | 37;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// stb r11,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r11.u8);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x8259cc28
	ctx.lr = 0x83BDFD10;
	sub_8259CC28(ctx, base);
	// lis r11,60
	ctx.r11.s64 = 3932160;
	// li r10,15
	ctx.r10.s64 = 15;
	// ori r11,r11,74
	ctx.r11.u64 = ctx.r11.u64 | 74;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// stb r11,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r11.u8);
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x8259cc28
	ctx.lr = 0x83BDFD44;
	sub_8259CC28(ctx, base);
	// lis r11,700
	ctx.r11.s64 = 45875200;
	// li r10,15
	ctx.r10.s64 = 15;
	// ori r11,r11,736
	ctx.r11.u64 = ctx.r11.u64 | 736;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r9.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r11,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r11.u8);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x8259cc28
	ctx.lr = 0x83BDFD78;
	sub_8259CC28(ctx, base);
	// lis r9,-31791
	ctx.r9.s64 = -2083454976;
	// addi r3,r9,32424
	ctx.r3.s64 = ctx.r9.s64 + 32424;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDFD84;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDFD9C"))) PPC_WEAK_FUNC(sub_83BDFD9C);
PPC_FUNC_IMPL(__imp__sub_83BDFD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDFDA0"))) PPC_WEAK_FUNC(sub_83BDFDA0);
PPC_FUNC_IMPL(__imp__sub_83BDFDA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,32528
	ctx.r3.s64 = ctx.r11.s64 + 32528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDFDAC"))) PPC_WEAK_FUNC(sub_83BDFDAC);
PPC_FUNC_IMPL(__imp__sub_83BDFDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDFDB0"))) PPC_WEAK_FUNC(sub_83BDFDB0);
PPC_FUNC_IMPL(__imp__sub_83BDFDB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,32536
	ctx.r3.s64 = ctx.r11.s64 + 32536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDFDBC"))) PPC_WEAK_FUNC(sub_83BDFDBC);
PPC_FUNC_IMPL(__imp__sub_83BDFDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDFDC0"))) PPC_WEAK_FUNC(sub_83BDFDC0);
PPC_FUNC_IMPL(__imp__sub_83BDFDC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,32544
	ctx.r3.s64 = ctx.r11.s64 + 32544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDFDCC"))) PPC_WEAK_FUNC(sub_83BDFDCC);
PPC_FUNC_IMPL(__imp__sub_83BDFDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDFDD0"))) PPC_WEAK_FUNC(sub_83BDFDD0);
PPC_FUNC_IMPL(__imp__sub_83BDFDD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,32552
	ctx.r3.s64 = ctx.r11.s64 + 32552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDFDDC"))) PPC_WEAK_FUNC(sub_83BDFDDC);
PPC_FUNC_IMPL(__imp__sub_83BDFDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDFDE0"))) PPC_WEAK_FUNC(sub_83BDFDE0);
PPC_FUNC_IMPL(__imp__sub_83BDFDE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,32560
	ctx.r3.s64 = ctx.r11.s64 + 32560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDFDEC"))) PPC_WEAK_FUNC(sub_83BDFDEC);
PPC_FUNC_IMPL(__imp__sub_83BDFDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDFDF0"))) PPC_WEAK_FUNC(sub_83BDFDF0);
PPC_FUNC_IMPL(__imp__sub_83BDFDF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,32568
	ctx.r3.s64 = ctx.r11.s64 + 32568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDFDFC"))) PPC_WEAK_FUNC(sub_83BDFDFC);
PPC_FUNC_IMPL(__imp__sub_83BDFDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDFE00"))) PPC_WEAK_FUNC(sub_83BDFE00);
PPC_FUNC_IMPL(__imp__sub_83BDFE00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,32576
	ctx.r3.s64 = ctx.r11.s64 + 32576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDFE0C"))) PPC_WEAK_FUNC(sub_83BDFE0C);
PPC_FUNC_IMPL(__imp__sub_83BDFE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDFE10"))) PPC_WEAK_FUNC(sub_83BDFE10);
PPC_FUNC_IMPL(__imp__sub_83BDFE10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,32584
	ctx.r3.s64 = ctx.r11.s64 + 32584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDFE1C"))) PPC_WEAK_FUNC(sub_83BDFE1C);
PPC_FUNC_IMPL(__imp__sub_83BDFE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDFE20"))) PPC_WEAK_FUNC(sub_83BDFE20);
PPC_FUNC_IMPL(__imp__sub_83BDFE20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,32592
	ctx.r3.s64 = ctx.r11.s64 + 32592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDFE2C"))) PPC_WEAK_FUNC(sub_83BDFE2C);
PPC_FUNC_IMPL(__imp__sub_83BDFE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDFE30"))) PPC_WEAK_FUNC(sub_83BDFE30);
PPC_FUNC_IMPL(__imp__sub_83BDFE30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,32600
	ctx.r3.s64 = ctx.r11.s64 + 32600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDFE3C"))) PPC_WEAK_FUNC(sub_83BDFE3C);
PPC_FUNC_IMPL(__imp__sub_83BDFE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDFE40"))) PPC_WEAK_FUNC(sub_83BDFE40);
PPC_FUNC_IMPL(__imp__sub_83BDFE40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,32608
	ctx.r3.s64 = ctx.r11.s64 + 32608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDFE4C"))) PPC_WEAK_FUNC(sub_83BDFE4C);
PPC_FUNC_IMPL(__imp__sub_83BDFE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDFE50"))) PPC_WEAK_FUNC(sub_83BDFE50);
PPC_FUNC_IMPL(__imp__sub_83BDFE50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,32616
	ctx.r3.s64 = ctx.r11.s64 + 32616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDFE5C"))) PPC_WEAK_FUNC(sub_83BDFE5C);
PPC_FUNC_IMPL(__imp__sub_83BDFE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDFE60"))) PPC_WEAK_FUNC(sub_83BDFE60);
PPC_FUNC_IMPL(__imp__sub_83BDFE60) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-7576
	ctx.r3.s64 = ctx.r11.s64 + -7576;
	// bl 0x83523120
	ctx.lr = 0x83BDFE78;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,32624
	ctx.r3.s64 = ctx.r10.s64 + 32624;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDFE84;
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

__attribute__((alias("__imp__sub_83BDFE94"))) PPC_WEAK_FUNC(sub_83BDFE94);
PPC_FUNC_IMPL(__imp__sub_83BDFE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDFE98"))) PPC_WEAK_FUNC(sub_83BDFE98);
PPC_FUNC_IMPL(__imp__sub_83BDFE98) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-7560
	ctx.r7.s64 = ctx.r8.s64 + -7560;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-7560(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7560);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-7560(r8)
	PPC_STORE_U32(ctx.r8.u32 + -7560, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDFEC0"))) PPC_WEAK_FUNC(sub_83BDFEC0);
PPC_FUNC_IMPL(__imp__sub_83BDFEC0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-19824
	ctx.r6.s64 = ctx.r7.s64 + -19824;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-19896(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -19896);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-7560(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -7560);
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
	// std r9,-19824(r7)
	PPC_STORE_U64(ctx.r7.u32 + -19824, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BDFF08"))) PPC_WEAK_FUNC(sub_83BDFF08);
PPC_FUNC_IMPL(__imp__sub_83BDFF08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,32640
	ctx.r3.s64 = ctx.r11.s64 + 32640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDFF14"))) PPC_WEAK_FUNC(sub_83BDFF14);
PPC_FUNC_IMPL(__imp__sub_83BDFF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDFF18"))) PPC_WEAK_FUNC(sub_83BDFF18);
PPC_FUNC_IMPL(__imp__sub_83BDFF18) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-7552
	ctx.r3.s64 = ctx.r11.s64 + -7552;
	// bl 0x8259af80
	ctx.lr = 0x83BDFF30;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,32656
	ctx.r3.s64 = ctx.r10.s64 + 32656;
	// bl 0x831cdcc8
	ctx.lr = 0x83BDFF3C;
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

__attribute__((alias("__imp__sub_83BDFF4C"))) PPC_WEAK_FUNC(sub_83BDFF4C);
PPC_FUNC_IMPL(__imp__sub_83BDFF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BDFF50"))) PPC_WEAK_FUNC(sub_83BDFF50);
PPC_FUNC_IMPL(__imp__sub_83BDFF50) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-7572
	ctx.r11.s64 = ctx.r8.s64 + -7572;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-19848(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19848);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,32648
	ctx.r3.s64 = ctx.r6.s64 + 32648;
	// stw r10,-7572(r8)
	PPC_STORE_U32(ctx.r8.u32 + -7572, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BDFF80"))) PPC_WEAK_FUNC(sub_83BDFF80);
PPC_FUNC_IMPL(__imp__sub_83BDFF80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r31,r11,-19800
	ctx.r31.s64 = ctx.r11.s64 + -19800;
	// addi r30,r10,-8692
	ctx.r30.s64 = ctx.r10.s64 + -8692;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8259cc28
	ctx.lr = 0x83BDFFB4;
	sub_8259CC28(ctx, base);
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// li r10,15
	ctx.r10.s64 = 15;
	// ori r11,r11,37
	ctx.r11.u64 = ctx.r11.u64 | 37;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// stb r11,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r11.u8);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x8259cc28
	ctx.lr = 0x83BDFFE8;
	sub_8259CC28(ctx, base);
	// lis r11,60
	ctx.r11.s64 = 3932160;
	// li r10,15
	ctx.r10.s64 = 15;
	// ori r11,r11,74
	ctx.r11.u64 = ctx.r11.u64 | 74;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// stb r11,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r11.u8);
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x8259cc28
	ctx.lr = 0x83BE001C;
	sub_8259CC28(ctx, base);
	// lis r11,700
	ctx.r11.s64 = 45875200;
	// li r10,15
	ctx.r10.s64 = 15;
	// ori r11,r11,736
	ctx.r11.u64 = ctx.r11.u64 | 736;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r9.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r11,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r11.u8);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x8259cc28
	ctx.lr = 0x83BE0050;
	sub_8259CC28(ctx, base);
	// lis r9,-31791
	ctx.r9.s64 = -2083454976;
	// addi r3,r9,32664
	ctx.r3.s64 = ctx.r9.s64 + 32664;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE005C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE0074"))) PPC_WEAK_FUNC(sub_83BE0074);
PPC_FUNC_IMPL(__imp__sub_83BE0074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0078"))) PPC_WEAK_FUNC(sub_83BE0078);
PPC_FUNC_IMPL(__imp__sub_83BE0078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32768
	ctx.r3.s64 = ctx.r11.s64 + -32768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE0084"))) PPC_WEAK_FUNC(sub_83BE0084);
PPC_FUNC_IMPL(__imp__sub_83BE0084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0088"))) PPC_WEAK_FUNC(sub_83BE0088);
PPC_FUNC_IMPL(__imp__sub_83BE0088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32760
	ctx.r3.s64 = ctx.r11.s64 + -32760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE0094"))) PPC_WEAK_FUNC(sub_83BE0094);
PPC_FUNC_IMPL(__imp__sub_83BE0094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0098"))) PPC_WEAK_FUNC(sub_83BE0098);
PPC_FUNC_IMPL(__imp__sub_83BE0098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32752
	ctx.r3.s64 = ctx.r11.s64 + -32752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE00A4"))) PPC_WEAK_FUNC(sub_83BE00A4);
PPC_FUNC_IMPL(__imp__sub_83BE00A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE00A8"))) PPC_WEAK_FUNC(sub_83BE00A8);
PPC_FUNC_IMPL(__imp__sub_83BE00A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32744
	ctx.r3.s64 = ctx.r11.s64 + -32744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE00B4"))) PPC_WEAK_FUNC(sub_83BE00B4);
PPC_FUNC_IMPL(__imp__sub_83BE00B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE00B8"))) PPC_WEAK_FUNC(sub_83BE00B8);
PPC_FUNC_IMPL(__imp__sub_83BE00B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32736
	ctx.r3.s64 = ctx.r11.s64 + -32736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE00C4"))) PPC_WEAK_FUNC(sub_83BE00C4);
PPC_FUNC_IMPL(__imp__sub_83BE00C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE00C8"))) PPC_WEAK_FUNC(sub_83BE00C8);
PPC_FUNC_IMPL(__imp__sub_83BE00C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32728
	ctx.r3.s64 = ctx.r11.s64 + -32728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE00D4"))) PPC_WEAK_FUNC(sub_83BE00D4);
PPC_FUNC_IMPL(__imp__sub_83BE00D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE00D8"))) PPC_WEAK_FUNC(sub_83BE00D8);
PPC_FUNC_IMPL(__imp__sub_83BE00D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32720
	ctx.r3.s64 = ctx.r11.s64 + -32720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE00E4"))) PPC_WEAK_FUNC(sub_83BE00E4);
PPC_FUNC_IMPL(__imp__sub_83BE00E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE00E8"))) PPC_WEAK_FUNC(sub_83BE00E8);
PPC_FUNC_IMPL(__imp__sub_83BE00E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32712
	ctx.r3.s64 = ctx.r11.s64 + -32712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE00F4"))) PPC_WEAK_FUNC(sub_83BE00F4);
PPC_FUNC_IMPL(__imp__sub_83BE00F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE00F8"))) PPC_WEAK_FUNC(sub_83BE00F8);
PPC_FUNC_IMPL(__imp__sub_83BE00F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32704
	ctx.r3.s64 = ctx.r11.s64 + -32704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE0104"))) PPC_WEAK_FUNC(sub_83BE0104);
PPC_FUNC_IMPL(__imp__sub_83BE0104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0108"))) PPC_WEAK_FUNC(sub_83BE0108);
PPC_FUNC_IMPL(__imp__sub_83BE0108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32696
	ctx.r3.s64 = ctx.r11.s64 + -32696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE0114"))) PPC_WEAK_FUNC(sub_83BE0114);
PPC_FUNC_IMPL(__imp__sub_83BE0114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0118"))) PPC_WEAK_FUNC(sub_83BE0118);
PPC_FUNC_IMPL(__imp__sub_83BE0118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32688
	ctx.r3.s64 = ctx.r11.s64 + -32688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE0124"))) PPC_WEAK_FUNC(sub_83BE0124);
PPC_FUNC_IMPL(__imp__sub_83BE0124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0128"))) PPC_WEAK_FUNC(sub_83BE0128);
PPC_FUNC_IMPL(__imp__sub_83BE0128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32680
	ctx.r3.s64 = ctx.r11.s64 + -32680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE0134"))) PPC_WEAK_FUNC(sub_83BE0134);
PPC_FUNC_IMPL(__imp__sub_83BE0134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0138"))) PPC_WEAK_FUNC(sub_83BE0138);
PPC_FUNC_IMPL(__imp__sub_83BE0138) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-7208
	ctx.r3.s64 = ctx.r11.s64 + -7208;
	// bl 0x83523120
	ctx.lr = 0x83BE0150;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-32672
	ctx.r3.s64 = ctx.r10.s64 + -32672;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE015C;
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

__attribute__((alias("__imp__sub_83BE016C"))) PPC_WEAK_FUNC(sub_83BE016C);
PPC_FUNC_IMPL(__imp__sub_83BE016C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0170"))) PPC_WEAK_FUNC(sub_83BE0170);
PPC_FUNC_IMPL(__imp__sub_83BE0170) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-7192
	ctx.r7.s64 = ctx.r8.s64 + -7192;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-7192(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7192);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-7192(r8)
	PPC_STORE_U32(ctx.r8.u32 + -7192, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE0198"))) PPC_WEAK_FUNC(sub_83BE0198);
PPC_FUNC_IMPL(__imp__sub_83BE0198) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-19564
	ctx.r6.s64 = ctx.r7.s64 + -19564;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-19636(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -19636);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-7192(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -7192);
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
	// std r9,-19564(r7)
	PPC_STORE_U64(ctx.r7.u32 + -19564, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE01E0"))) PPC_WEAK_FUNC(sub_83BE01E0);
PPC_FUNC_IMPL(__imp__sub_83BE01E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32656
	ctx.r3.s64 = ctx.r11.s64 + -32656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE01EC"))) PPC_WEAK_FUNC(sub_83BE01EC);
PPC_FUNC_IMPL(__imp__sub_83BE01EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE01F0"))) PPC_WEAK_FUNC(sub_83BE01F0);
PPC_FUNC_IMPL(__imp__sub_83BE01F0) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-7184
	ctx.r3.s64 = ctx.r11.s64 + -7184;
	// bl 0x8259af80
	ctx.lr = 0x83BE0208;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-32640
	ctx.r3.s64 = ctx.r10.s64 + -32640;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE0214;
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

__attribute__((alias("__imp__sub_83BE0224"))) PPC_WEAK_FUNC(sub_83BE0224);
PPC_FUNC_IMPL(__imp__sub_83BE0224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0228"))) PPC_WEAK_FUNC(sub_83BE0228);
PPC_FUNC_IMPL(__imp__sub_83BE0228) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-7204
	ctx.r11.s64 = ctx.r8.s64 + -7204;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-19588(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19588);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-32648
	ctx.r3.s64 = ctx.r6.s64 + -32648;
	// stw r10,-7204(r8)
	PPC_STORE_U32(ctx.r8.u32 + -7204, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE0258"))) PPC_WEAK_FUNC(sub_83BE0258);
PPC_FUNC_IMPL(__imp__sub_83BE0258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32632
	ctx.r3.s64 = ctx.r11.s64 + -32632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE0264"))) PPC_WEAK_FUNC(sub_83BE0264);
PPC_FUNC_IMPL(__imp__sub_83BE0264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0268"))) PPC_WEAK_FUNC(sub_83BE0268);
PPC_FUNC_IMPL(__imp__sub_83BE0268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32624
	ctx.r3.s64 = ctx.r11.s64 + -32624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE0274"))) PPC_WEAK_FUNC(sub_83BE0274);
PPC_FUNC_IMPL(__imp__sub_83BE0274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0278"))) PPC_WEAK_FUNC(sub_83BE0278);
PPC_FUNC_IMPL(__imp__sub_83BE0278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32616
	ctx.r3.s64 = ctx.r11.s64 + -32616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE0284"))) PPC_WEAK_FUNC(sub_83BE0284);
PPC_FUNC_IMPL(__imp__sub_83BE0284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0288"))) PPC_WEAK_FUNC(sub_83BE0288);
PPC_FUNC_IMPL(__imp__sub_83BE0288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32608
	ctx.r3.s64 = ctx.r11.s64 + -32608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE0294"))) PPC_WEAK_FUNC(sub_83BE0294);
PPC_FUNC_IMPL(__imp__sub_83BE0294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0298"))) PPC_WEAK_FUNC(sub_83BE0298);
PPC_FUNC_IMPL(__imp__sub_83BE0298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32600
	ctx.r3.s64 = ctx.r11.s64 + -32600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE02A4"))) PPC_WEAK_FUNC(sub_83BE02A4);
PPC_FUNC_IMPL(__imp__sub_83BE02A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE02A8"))) PPC_WEAK_FUNC(sub_83BE02A8);
PPC_FUNC_IMPL(__imp__sub_83BE02A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32592
	ctx.r3.s64 = ctx.r11.s64 + -32592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE02B4"))) PPC_WEAK_FUNC(sub_83BE02B4);
PPC_FUNC_IMPL(__imp__sub_83BE02B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE02B8"))) PPC_WEAK_FUNC(sub_83BE02B8);
PPC_FUNC_IMPL(__imp__sub_83BE02B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32584
	ctx.r3.s64 = ctx.r11.s64 + -32584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE02C4"))) PPC_WEAK_FUNC(sub_83BE02C4);
PPC_FUNC_IMPL(__imp__sub_83BE02C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE02C8"))) PPC_WEAK_FUNC(sub_83BE02C8);
PPC_FUNC_IMPL(__imp__sub_83BE02C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32576
	ctx.r3.s64 = ctx.r11.s64 + -32576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE02D4"))) PPC_WEAK_FUNC(sub_83BE02D4);
PPC_FUNC_IMPL(__imp__sub_83BE02D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE02D8"))) PPC_WEAK_FUNC(sub_83BE02D8);
PPC_FUNC_IMPL(__imp__sub_83BE02D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32568
	ctx.r3.s64 = ctx.r11.s64 + -32568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE02E4"))) PPC_WEAK_FUNC(sub_83BE02E4);
PPC_FUNC_IMPL(__imp__sub_83BE02E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE02E8"))) PPC_WEAK_FUNC(sub_83BE02E8);
PPC_FUNC_IMPL(__imp__sub_83BE02E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32560
	ctx.r3.s64 = ctx.r11.s64 + -32560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE02F4"))) PPC_WEAK_FUNC(sub_83BE02F4);
PPC_FUNC_IMPL(__imp__sub_83BE02F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE02F8"))) PPC_WEAK_FUNC(sub_83BE02F8);
PPC_FUNC_IMPL(__imp__sub_83BE02F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32552
	ctx.r3.s64 = ctx.r11.s64 + -32552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE0304"))) PPC_WEAK_FUNC(sub_83BE0304);
PPC_FUNC_IMPL(__imp__sub_83BE0304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0308"))) PPC_WEAK_FUNC(sub_83BE0308);
PPC_FUNC_IMPL(__imp__sub_83BE0308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32544
	ctx.r3.s64 = ctx.r11.s64 + -32544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE0314"))) PPC_WEAK_FUNC(sub_83BE0314);
PPC_FUNC_IMPL(__imp__sub_83BE0314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0318"))) PPC_WEAK_FUNC(sub_83BE0318);
PPC_FUNC_IMPL(__imp__sub_83BE0318) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-6840
	ctx.r3.s64 = ctx.r11.s64 + -6840;
	// bl 0x83523120
	ctx.lr = 0x83BE0330;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-32536
	ctx.r3.s64 = ctx.r10.s64 + -32536;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE033C;
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

__attribute__((alias("__imp__sub_83BE034C"))) PPC_WEAK_FUNC(sub_83BE034C);
PPC_FUNC_IMPL(__imp__sub_83BE034C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0350"))) PPC_WEAK_FUNC(sub_83BE0350);
PPC_FUNC_IMPL(__imp__sub_83BE0350) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-6824
	ctx.r7.s64 = ctx.r8.s64 + -6824;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-6824(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6824);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-6824(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6824, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE0378"))) PPC_WEAK_FUNC(sub_83BE0378);
PPC_FUNC_IMPL(__imp__sub_83BE0378) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-19436
	ctx.r6.s64 = ctx.r7.s64 + -19436;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-19508(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -19508);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-6824(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -6824);
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
	// std r9,-19436(r7)
	PPC_STORE_U64(ctx.r7.u32 + -19436, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE03C0"))) PPC_WEAK_FUNC(sub_83BE03C0);
PPC_FUNC_IMPL(__imp__sub_83BE03C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32520
	ctx.r3.s64 = ctx.r11.s64 + -32520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE03CC"))) PPC_WEAK_FUNC(sub_83BE03CC);
PPC_FUNC_IMPL(__imp__sub_83BE03CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE03D0"))) PPC_WEAK_FUNC(sub_83BE03D0);
PPC_FUNC_IMPL(__imp__sub_83BE03D0) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-6816
	ctx.r3.s64 = ctx.r11.s64 + -6816;
	// bl 0x8259af80
	ctx.lr = 0x83BE03E8;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-32504
	ctx.r3.s64 = ctx.r10.s64 + -32504;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE03F4;
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

__attribute__((alias("__imp__sub_83BE0404"))) PPC_WEAK_FUNC(sub_83BE0404);
PPC_FUNC_IMPL(__imp__sub_83BE0404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0408"))) PPC_WEAK_FUNC(sub_83BE0408);
PPC_FUNC_IMPL(__imp__sub_83BE0408) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-6836
	ctx.r11.s64 = ctx.r8.s64 + -6836;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-19460(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19460);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-32512
	ctx.r3.s64 = ctx.r6.s64 + -32512;
	// stw r10,-6836(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6836, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE0438"))) PPC_WEAK_FUNC(sub_83BE0438);
PPC_FUNC_IMPL(__imp__sub_83BE0438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32496
	ctx.r3.s64 = ctx.r11.s64 + -32496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE0444"))) PPC_WEAK_FUNC(sub_83BE0444);
PPC_FUNC_IMPL(__imp__sub_83BE0444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0448"))) PPC_WEAK_FUNC(sub_83BE0448);
PPC_FUNC_IMPL(__imp__sub_83BE0448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32488
	ctx.r3.s64 = ctx.r11.s64 + -32488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE0454"))) PPC_WEAK_FUNC(sub_83BE0454);
PPC_FUNC_IMPL(__imp__sub_83BE0454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0458"))) PPC_WEAK_FUNC(sub_83BE0458);
PPC_FUNC_IMPL(__imp__sub_83BE0458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32480
	ctx.r3.s64 = ctx.r11.s64 + -32480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE0464"))) PPC_WEAK_FUNC(sub_83BE0464);
PPC_FUNC_IMPL(__imp__sub_83BE0464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0468"))) PPC_WEAK_FUNC(sub_83BE0468);
PPC_FUNC_IMPL(__imp__sub_83BE0468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32472
	ctx.r3.s64 = ctx.r11.s64 + -32472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE0474"))) PPC_WEAK_FUNC(sub_83BE0474);
PPC_FUNC_IMPL(__imp__sub_83BE0474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0478"))) PPC_WEAK_FUNC(sub_83BE0478);
PPC_FUNC_IMPL(__imp__sub_83BE0478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32464
	ctx.r3.s64 = ctx.r11.s64 + -32464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE0484"))) PPC_WEAK_FUNC(sub_83BE0484);
PPC_FUNC_IMPL(__imp__sub_83BE0484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0488"))) PPC_WEAK_FUNC(sub_83BE0488);
PPC_FUNC_IMPL(__imp__sub_83BE0488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32456
	ctx.r3.s64 = ctx.r11.s64 + -32456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE0494"))) PPC_WEAK_FUNC(sub_83BE0494);
PPC_FUNC_IMPL(__imp__sub_83BE0494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0498"))) PPC_WEAK_FUNC(sub_83BE0498);
PPC_FUNC_IMPL(__imp__sub_83BE0498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32448
	ctx.r3.s64 = ctx.r11.s64 + -32448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE04A4"))) PPC_WEAK_FUNC(sub_83BE04A4);
PPC_FUNC_IMPL(__imp__sub_83BE04A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE04A8"))) PPC_WEAK_FUNC(sub_83BE04A8);
PPC_FUNC_IMPL(__imp__sub_83BE04A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32440
	ctx.r3.s64 = ctx.r11.s64 + -32440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE04B4"))) PPC_WEAK_FUNC(sub_83BE04B4);
PPC_FUNC_IMPL(__imp__sub_83BE04B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE04B8"))) PPC_WEAK_FUNC(sub_83BE04B8);
PPC_FUNC_IMPL(__imp__sub_83BE04B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32432
	ctx.r3.s64 = ctx.r11.s64 + -32432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE04C4"))) PPC_WEAK_FUNC(sub_83BE04C4);
PPC_FUNC_IMPL(__imp__sub_83BE04C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE04C8"))) PPC_WEAK_FUNC(sub_83BE04C8);
PPC_FUNC_IMPL(__imp__sub_83BE04C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32424
	ctx.r3.s64 = ctx.r11.s64 + -32424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE04D4"))) PPC_WEAK_FUNC(sub_83BE04D4);
PPC_FUNC_IMPL(__imp__sub_83BE04D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE04D8"))) PPC_WEAK_FUNC(sub_83BE04D8);
PPC_FUNC_IMPL(__imp__sub_83BE04D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32416
	ctx.r3.s64 = ctx.r11.s64 + -32416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE04E4"))) PPC_WEAK_FUNC(sub_83BE04E4);
PPC_FUNC_IMPL(__imp__sub_83BE04E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE04E8"))) PPC_WEAK_FUNC(sub_83BE04E8);
PPC_FUNC_IMPL(__imp__sub_83BE04E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32408
	ctx.r3.s64 = ctx.r11.s64 + -32408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE04F4"))) PPC_WEAK_FUNC(sub_83BE04F4);
PPC_FUNC_IMPL(__imp__sub_83BE04F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE04F8"))) PPC_WEAK_FUNC(sub_83BE04F8);
PPC_FUNC_IMPL(__imp__sub_83BE04F8) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-6472
	ctx.r3.s64 = ctx.r11.s64 + -6472;
	// bl 0x83523120
	ctx.lr = 0x83BE0510;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-32400
	ctx.r3.s64 = ctx.r10.s64 + -32400;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE051C;
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

__attribute__((alias("__imp__sub_83BE052C"))) PPC_WEAK_FUNC(sub_83BE052C);
PPC_FUNC_IMPL(__imp__sub_83BE052C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0530"))) PPC_WEAK_FUNC(sub_83BE0530);
PPC_FUNC_IMPL(__imp__sub_83BE0530) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-6456
	ctx.r7.s64 = ctx.r8.s64 + -6456;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-6456(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6456);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-6456(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6456, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE0558"))) PPC_WEAK_FUNC(sub_83BE0558);
PPC_FUNC_IMPL(__imp__sub_83BE0558) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-19300
	ctx.r6.s64 = ctx.r7.s64 + -19300;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-19372(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -19372);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-6456(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -6456);
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
	// std r9,-19300(r7)
	PPC_STORE_U64(ctx.r7.u32 + -19300, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE05A0"))) PPC_WEAK_FUNC(sub_83BE05A0);
PPC_FUNC_IMPL(__imp__sub_83BE05A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32384
	ctx.r3.s64 = ctx.r11.s64 + -32384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE05AC"))) PPC_WEAK_FUNC(sub_83BE05AC);
PPC_FUNC_IMPL(__imp__sub_83BE05AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE05B0"))) PPC_WEAK_FUNC(sub_83BE05B0);
PPC_FUNC_IMPL(__imp__sub_83BE05B0) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-6448
	ctx.r3.s64 = ctx.r11.s64 + -6448;
	// bl 0x8259af80
	ctx.lr = 0x83BE05C8;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-32368
	ctx.r3.s64 = ctx.r10.s64 + -32368;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE05D4;
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

__attribute__((alias("__imp__sub_83BE05E4"))) PPC_WEAK_FUNC(sub_83BE05E4);
PPC_FUNC_IMPL(__imp__sub_83BE05E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE05E8"))) PPC_WEAK_FUNC(sub_83BE05E8);
PPC_FUNC_IMPL(__imp__sub_83BE05E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-6468
	ctx.r11.s64 = ctx.r8.s64 + -6468;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-19324(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19324);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-32376
	ctx.r3.s64 = ctx.r6.s64 + -32376;
	// stw r10,-6468(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6468, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE0618"))) PPC_WEAK_FUNC(sub_83BE0618);
PPC_FUNC_IMPL(__imp__sub_83BE0618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32360
	ctx.r3.s64 = ctx.r11.s64 + -32360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE0624"))) PPC_WEAK_FUNC(sub_83BE0624);
PPC_FUNC_IMPL(__imp__sub_83BE0624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0628"))) PPC_WEAK_FUNC(sub_83BE0628);
PPC_FUNC_IMPL(__imp__sub_83BE0628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32352
	ctx.r3.s64 = ctx.r11.s64 + -32352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE0634"))) PPC_WEAK_FUNC(sub_83BE0634);
PPC_FUNC_IMPL(__imp__sub_83BE0634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0638"))) PPC_WEAK_FUNC(sub_83BE0638);
PPC_FUNC_IMPL(__imp__sub_83BE0638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32344
	ctx.r3.s64 = ctx.r11.s64 + -32344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE0644"))) PPC_WEAK_FUNC(sub_83BE0644);
PPC_FUNC_IMPL(__imp__sub_83BE0644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0648"))) PPC_WEAK_FUNC(sub_83BE0648);
PPC_FUNC_IMPL(__imp__sub_83BE0648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32336
	ctx.r3.s64 = ctx.r11.s64 + -32336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE0654"))) PPC_WEAK_FUNC(sub_83BE0654);
PPC_FUNC_IMPL(__imp__sub_83BE0654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0658"))) PPC_WEAK_FUNC(sub_83BE0658);
PPC_FUNC_IMPL(__imp__sub_83BE0658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32328
	ctx.r3.s64 = ctx.r11.s64 + -32328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE0664"))) PPC_WEAK_FUNC(sub_83BE0664);
PPC_FUNC_IMPL(__imp__sub_83BE0664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0668"))) PPC_WEAK_FUNC(sub_83BE0668);
PPC_FUNC_IMPL(__imp__sub_83BE0668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32320
	ctx.r3.s64 = ctx.r11.s64 + -32320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE0674"))) PPC_WEAK_FUNC(sub_83BE0674);
PPC_FUNC_IMPL(__imp__sub_83BE0674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0678"))) PPC_WEAK_FUNC(sub_83BE0678);
PPC_FUNC_IMPL(__imp__sub_83BE0678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32312
	ctx.r3.s64 = ctx.r11.s64 + -32312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE0684"))) PPC_WEAK_FUNC(sub_83BE0684);
PPC_FUNC_IMPL(__imp__sub_83BE0684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0688"))) PPC_WEAK_FUNC(sub_83BE0688);
PPC_FUNC_IMPL(__imp__sub_83BE0688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32304
	ctx.r3.s64 = ctx.r11.s64 + -32304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE0694"))) PPC_WEAK_FUNC(sub_83BE0694);
PPC_FUNC_IMPL(__imp__sub_83BE0694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0698"))) PPC_WEAK_FUNC(sub_83BE0698);
PPC_FUNC_IMPL(__imp__sub_83BE0698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32296
	ctx.r3.s64 = ctx.r11.s64 + -32296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE06A4"))) PPC_WEAK_FUNC(sub_83BE06A4);
PPC_FUNC_IMPL(__imp__sub_83BE06A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE06A8"))) PPC_WEAK_FUNC(sub_83BE06A8);
PPC_FUNC_IMPL(__imp__sub_83BE06A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32288
	ctx.r3.s64 = ctx.r11.s64 + -32288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE06B4"))) PPC_WEAK_FUNC(sub_83BE06B4);
PPC_FUNC_IMPL(__imp__sub_83BE06B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE06B8"))) PPC_WEAK_FUNC(sub_83BE06B8);
PPC_FUNC_IMPL(__imp__sub_83BE06B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32280
	ctx.r3.s64 = ctx.r11.s64 + -32280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE06C4"))) PPC_WEAK_FUNC(sub_83BE06C4);
PPC_FUNC_IMPL(__imp__sub_83BE06C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE06C8"))) PPC_WEAK_FUNC(sub_83BE06C8);
PPC_FUNC_IMPL(__imp__sub_83BE06C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32272
	ctx.r3.s64 = ctx.r11.s64 + -32272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE06D4"))) PPC_WEAK_FUNC(sub_83BE06D4);
PPC_FUNC_IMPL(__imp__sub_83BE06D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE06D8"))) PPC_WEAK_FUNC(sub_83BE06D8);
PPC_FUNC_IMPL(__imp__sub_83BE06D8) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-6096
	ctx.r3.s64 = ctx.r11.s64 + -6096;
	// bl 0x83523120
	ctx.lr = 0x83BE06F0;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-32264
	ctx.r3.s64 = ctx.r10.s64 + -32264;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE06FC;
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

__attribute__((alias("__imp__sub_83BE070C"))) PPC_WEAK_FUNC(sub_83BE070C);
PPC_FUNC_IMPL(__imp__sub_83BE070C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0710"))) PPC_WEAK_FUNC(sub_83BE0710);
PPC_FUNC_IMPL(__imp__sub_83BE0710) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-6080
	ctx.r7.s64 = ctx.r8.s64 + -6080;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-6080(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6080);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-6080(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6080, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE0738"))) PPC_WEAK_FUNC(sub_83BE0738);
PPC_FUNC_IMPL(__imp__sub_83BE0738) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-19172
	ctx.r6.s64 = ctx.r7.s64 + -19172;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-19244(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -19244);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-6080(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -6080);
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
	// std r9,-19172(r7)
	PPC_STORE_U64(ctx.r7.u32 + -19172, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE0780"))) PPC_WEAK_FUNC(sub_83BE0780);
PPC_FUNC_IMPL(__imp__sub_83BE0780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32248
	ctx.r3.s64 = ctx.r11.s64 + -32248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE078C"))) PPC_WEAK_FUNC(sub_83BE078C);
PPC_FUNC_IMPL(__imp__sub_83BE078C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0790"))) PPC_WEAK_FUNC(sub_83BE0790);
PPC_FUNC_IMPL(__imp__sub_83BE0790) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-6072
	ctx.r3.s64 = ctx.r11.s64 + -6072;
	// bl 0x8259af80
	ctx.lr = 0x83BE07A8;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-32232
	ctx.r3.s64 = ctx.r10.s64 + -32232;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE07B4;
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

__attribute__((alias("__imp__sub_83BE07C4"))) PPC_WEAK_FUNC(sub_83BE07C4);
PPC_FUNC_IMPL(__imp__sub_83BE07C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE07C8"))) PPC_WEAK_FUNC(sub_83BE07C8);
PPC_FUNC_IMPL(__imp__sub_83BE07C8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-6092
	ctx.r11.s64 = ctx.r8.s64 + -6092;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-19196(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19196);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-32240
	ctx.r3.s64 = ctx.r6.s64 + -32240;
	// stw r10,-6092(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6092, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE07F8"))) PPC_WEAK_FUNC(sub_83BE07F8);
PPC_FUNC_IMPL(__imp__sub_83BE07F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32224
	ctx.r3.s64 = ctx.r11.s64 + -32224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE0804"))) PPC_WEAK_FUNC(sub_83BE0804);
PPC_FUNC_IMPL(__imp__sub_83BE0804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0808"))) PPC_WEAK_FUNC(sub_83BE0808);
PPC_FUNC_IMPL(__imp__sub_83BE0808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32216
	ctx.r3.s64 = ctx.r11.s64 + -32216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE0814"))) PPC_WEAK_FUNC(sub_83BE0814);
PPC_FUNC_IMPL(__imp__sub_83BE0814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0818"))) PPC_WEAK_FUNC(sub_83BE0818);
PPC_FUNC_IMPL(__imp__sub_83BE0818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32208
	ctx.r3.s64 = ctx.r11.s64 + -32208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE0824"))) PPC_WEAK_FUNC(sub_83BE0824);
PPC_FUNC_IMPL(__imp__sub_83BE0824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0828"))) PPC_WEAK_FUNC(sub_83BE0828);
PPC_FUNC_IMPL(__imp__sub_83BE0828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32200
	ctx.r3.s64 = ctx.r11.s64 + -32200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE0834"))) PPC_WEAK_FUNC(sub_83BE0834);
PPC_FUNC_IMPL(__imp__sub_83BE0834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0838"))) PPC_WEAK_FUNC(sub_83BE0838);
PPC_FUNC_IMPL(__imp__sub_83BE0838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32192
	ctx.r3.s64 = ctx.r11.s64 + -32192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE0844"))) PPC_WEAK_FUNC(sub_83BE0844);
PPC_FUNC_IMPL(__imp__sub_83BE0844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0848"))) PPC_WEAK_FUNC(sub_83BE0848);
PPC_FUNC_IMPL(__imp__sub_83BE0848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32184
	ctx.r3.s64 = ctx.r11.s64 + -32184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE0854"))) PPC_WEAK_FUNC(sub_83BE0854);
PPC_FUNC_IMPL(__imp__sub_83BE0854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0858"))) PPC_WEAK_FUNC(sub_83BE0858);
PPC_FUNC_IMPL(__imp__sub_83BE0858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32176
	ctx.r3.s64 = ctx.r11.s64 + -32176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE0864"))) PPC_WEAK_FUNC(sub_83BE0864);
PPC_FUNC_IMPL(__imp__sub_83BE0864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0868"))) PPC_WEAK_FUNC(sub_83BE0868);
PPC_FUNC_IMPL(__imp__sub_83BE0868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32168
	ctx.r3.s64 = ctx.r11.s64 + -32168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE0874"))) PPC_WEAK_FUNC(sub_83BE0874);
PPC_FUNC_IMPL(__imp__sub_83BE0874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0878"))) PPC_WEAK_FUNC(sub_83BE0878);
PPC_FUNC_IMPL(__imp__sub_83BE0878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32160
	ctx.r3.s64 = ctx.r11.s64 + -32160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE0884"))) PPC_WEAK_FUNC(sub_83BE0884);
PPC_FUNC_IMPL(__imp__sub_83BE0884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0888"))) PPC_WEAK_FUNC(sub_83BE0888);
PPC_FUNC_IMPL(__imp__sub_83BE0888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32152
	ctx.r3.s64 = ctx.r11.s64 + -32152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE0894"))) PPC_WEAK_FUNC(sub_83BE0894);
PPC_FUNC_IMPL(__imp__sub_83BE0894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0898"))) PPC_WEAK_FUNC(sub_83BE0898);
PPC_FUNC_IMPL(__imp__sub_83BE0898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32144
	ctx.r3.s64 = ctx.r11.s64 + -32144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE08A4"))) PPC_WEAK_FUNC(sub_83BE08A4);
PPC_FUNC_IMPL(__imp__sub_83BE08A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE08A8"))) PPC_WEAK_FUNC(sub_83BE08A8);
PPC_FUNC_IMPL(__imp__sub_83BE08A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32136
	ctx.r3.s64 = ctx.r11.s64 + -32136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE08B4"))) PPC_WEAK_FUNC(sub_83BE08B4);
PPC_FUNC_IMPL(__imp__sub_83BE08B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE08B8"))) PPC_WEAK_FUNC(sub_83BE08B8);
PPC_FUNC_IMPL(__imp__sub_83BE08B8) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-5728
	ctx.r3.s64 = ctx.r11.s64 + -5728;
	// bl 0x83523120
	ctx.lr = 0x83BE08D0;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-32128
	ctx.r3.s64 = ctx.r10.s64 + -32128;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE08DC;
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

__attribute__((alias("__imp__sub_83BE08EC"))) PPC_WEAK_FUNC(sub_83BE08EC);
PPC_FUNC_IMPL(__imp__sub_83BE08EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE08F0"))) PPC_WEAK_FUNC(sub_83BE08F0);
PPC_FUNC_IMPL(__imp__sub_83BE08F0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5712
	ctx.r7.s64 = ctx.r8.s64 + -5712;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5712(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5712);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5712(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5712, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE0918"))) PPC_WEAK_FUNC(sub_83BE0918);
PPC_FUNC_IMPL(__imp__sub_83BE0918) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-18928
	ctx.r6.s64 = ctx.r7.s64 + -18928;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-19000(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -19000);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-5712(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -5712);
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
	// std r9,-18928(r7)
	PPC_STORE_U64(ctx.r7.u32 + -18928, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE0960"))) PPC_WEAK_FUNC(sub_83BE0960);
PPC_FUNC_IMPL(__imp__sub_83BE0960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32112
	ctx.r3.s64 = ctx.r11.s64 + -32112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE096C"))) PPC_WEAK_FUNC(sub_83BE096C);
PPC_FUNC_IMPL(__imp__sub_83BE096C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0970"))) PPC_WEAK_FUNC(sub_83BE0970);
PPC_FUNC_IMPL(__imp__sub_83BE0970) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-5704
	ctx.r3.s64 = ctx.r11.s64 + -5704;
	// bl 0x8259af80
	ctx.lr = 0x83BE0988;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-32096
	ctx.r3.s64 = ctx.r10.s64 + -32096;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE0994;
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

__attribute__((alias("__imp__sub_83BE09A4"))) PPC_WEAK_FUNC(sub_83BE09A4);
PPC_FUNC_IMPL(__imp__sub_83BE09A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE09A8"))) PPC_WEAK_FUNC(sub_83BE09A8);
PPC_FUNC_IMPL(__imp__sub_83BE09A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-5724
	ctx.r11.s64 = ctx.r8.s64 + -5724;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-18952(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18952);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-32104
	ctx.r3.s64 = ctx.r6.s64 + -32104;
	// stw r10,-5724(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5724, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE09D8"))) PPC_WEAK_FUNC(sub_83BE09D8);
PPC_FUNC_IMPL(__imp__sub_83BE09D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32088
	ctx.r3.s64 = ctx.r11.s64 + -32088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE09E4"))) PPC_WEAK_FUNC(sub_83BE09E4);
PPC_FUNC_IMPL(__imp__sub_83BE09E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE09E8"))) PPC_WEAK_FUNC(sub_83BE09E8);
PPC_FUNC_IMPL(__imp__sub_83BE09E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32080
	ctx.r3.s64 = ctx.r11.s64 + -32080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE09F4"))) PPC_WEAK_FUNC(sub_83BE09F4);
PPC_FUNC_IMPL(__imp__sub_83BE09F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE09F8"))) PPC_WEAK_FUNC(sub_83BE09F8);
PPC_FUNC_IMPL(__imp__sub_83BE09F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32072
	ctx.r3.s64 = ctx.r11.s64 + -32072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE0A04"))) PPC_WEAK_FUNC(sub_83BE0A04);
PPC_FUNC_IMPL(__imp__sub_83BE0A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0A08"))) PPC_WEAK_FUNC(sub_83BE0A08);
PPC_FUNC_IMPL(__imp__sub_83BE0A08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32064
	ctx.r3.s64 = ctx.r11.s64 + -32064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE0A14"))) PPC_WEAK_FUNC(sub_83BE0A14);
PPC_FUNC_IMPL(__imp__sub_83BE0A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0A18"))) PPC_WEAK_FUNC(sub_83BE0A18);
PPC_FUNC_IMPL(__imp__sub_83BE0A18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32056
	ctx.r3.s64 = ctx.r11.s64 + -32056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE0A24"))) PPC_WEAK_FUNC(sub_83BE0A24);
PPC_FUNC_IMPL(__imp__sub_83BE0A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0A28"))) PPC_WEAK_FUNC(sub_83BE0A28);
PPC_FUNC_IMPL(__imp__sub_83BE0A28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32048
	ctx.r3.s64 = ctx.r11.s64 + -32048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE0A34"))) PPC_WEAK_FUNC(sub_83BE0A34);
PPC_FUNC_IMPL(__imp__sub_83BE0A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0A38"))) PPC_WEAK_FUNC(sub_83BE0A38);
PPC_FUNC_IMPL(__imp__sub_83BE0A38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32040
	ctx.r3.s64 = ctx.r11.s64 + -32040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE0A44"))) PPC_WEAK_FUNC(sub_83BE0A44);
PPC_FUNC_IMPL(__imp__sub_83BE0A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0A48"))) PPC_WEAK_FUNC(sub_83BE0A48);
PPC_FUNC_IMPL(__imp__sub_83BE0A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32032
	ctx.r3.s64 = ctx.r11.s64 + -32032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE0A54"))) PPC_WEAK_FUNC(sub_83BE0A54);
PPC_FUNC_IMPL(__imp__sub_83BE0A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0A58"))) PPC_WEAK_FUNC(sub_83BE0A58);
PPC_FUNC_IMPL(__imp__sub_83BE0A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32024
	ctx.r3.s64 = ctx.r11.s64 + -32024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE0A64"))) PPC_WEAK_FUNC(sub_83BE0A64);
PPC_FUNC_IMPL(__imp__sub_83BE0A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0A68"))) PPC_WEAK_FUNC(sub_83BE0A68);
PPC_FUNC_IMPL(__imp__sub_83BE0A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32016
	ctx.r3.s64 = ctx.r11.s64 + -32016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE0A74"))) PPC_WEAK_FUNC(sub_83BE0A74);
PPC_FUNC_IMPL(__imp__sub_83BE0A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0A78"))) PPC_WEAK_FUNC(sub_83BE0A78);
PPC_FUNC_IMPL(__imp__sub_83BE0A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32008
	ctx.r3.s64 = ctx.r11.s64 + -32008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE0A84"))) PPC_WEAK_FUNC(sub_83BE0A84);
PPC_FUNC_IMPL(__imp__sub_83BE0A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0A88"))) PPC_WEAK_FUNC(sub_83BE0A88);
PPC_FUNC_IMPL(__imp__sub_83BE0A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-32000
	ctx.r3.s64 = ctx.r11.s64 + -32000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE0A94"))) PPC_WEAK_FUNC(sub_83BE0A94);
PPC_FUNC_IMPL(__imp__sub_83BE0A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0A98"))) PPC_WEAK_FUNC(sub_83BE0A98);
PPC_FUNC_IMPL(__imp__sub_83BE0A98) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-5360
	ctx.r3.s64 = ctx.r11.s64 + -5360;
	// bl 0x83523120
	ctx.lr = 0x83BE0AB0;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-31992
	ctx.r3.s64 = ctx.r10.s64 + -31992;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE0ABC;
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

__attribute__((alias("__imp__sub_83BE0ACC"))) PPC_WEAK_FUNC(sub_83BE0ACC);
PPC_FUNC_IMPL(__imp__sub_83BE0ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0AD0"))) PPC_WEAK_FUNC(sub_83BE0AD0);
PPC_FUNC_IMPL(__imp__sub_83BE0AD0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5344
	ctx.r7.s64 = ctx.r8.s64 + -5344;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5344(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5344);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5344(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5344, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE0AF8"))) PPC_WEAK_FUNC(sub_83BE0AF8);
PPC_FUNC_IMPL(__imp__sub_83BE0AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-18780
	ctx.r6.s64 = ctx.r7.s64 + -18780;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-18852(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -18852);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-5344(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -5344);
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
	// std r9,-18780(r7)
	PPC_STORE_U64(ctx.r7.u32 + -18780, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE0B40"))) PPC_WEAK_FUNC(sub_83BE0B40);
PPC_FUNC_IMPL(__imp__sub_83BE0B40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-31976
	ctx.r3.s64 = ctx.r11.s64 + -31976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE0B4C"))) PPC_WEAK_FUNC(sub_83BE0B4C);
PPC_FUNC_IMPL(__imp__sub_83BE0B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0B50"))) PPC_WEAK_FUNC(sub_83BE0B50);
PPC_FUNC_IMPL(__imp__sub_83BE0B50) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,-5336
	ctx.r3.s64 = ctx.r11.s64 + -5336;
	// bl 0x8259af80
	ctx.lr = 0x83BE0B68;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-31960
	ctx.r3.s64 = ctx.r10.s64 + -31960;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE0B74;
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

__attribute__((alias("__imp__sub_83BE0B84"))) PPC_WEAK_FUNC(sub_83BE0B84);
PPC_FUNC_IMPL(__imp__sub_83BE0B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE0B88"))) PPC_WEAK_FUNC(sub_83BE0B88);
PPC_FUNC_IMPL(__imp__sub_83BE0B88) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-5356
	ctx.r11.s64 = ctx.r8.s64 + -5356;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-18804(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18804);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-31968
	ctx.r3.s64 = ctx.r6.s64 + -31968;
	// stw r10,-5356(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5356, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

