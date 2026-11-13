#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BFCB18"))) PPC_WEAK_FUNC(sub_83BFCB18);
PPC_FUNC_IMPL(__imp__sub_83BFCB18) {
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
	// addi r3,r11,25688
	ctx.r3.s64 = ctx.r11.s64 + 25688;
	// bl 0x83523120
	ctx.lr = 0x83BFCB30;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,4040
	ctx.r3.s64 = ctx.r10.s64 + 4040;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFCB3C;
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

__attribute__((alias("__imp__sub_83BFCB4C"))) PPC_WEAK_FUNC(sub_83BFCB4C);
PPC_FUNC_IMPL(__imp__sub_83BFCB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFCB50"))) PPC_WEAK_FUNC(sub_83BFCB50);
PPC_FUNC_IMPL(__imp__sub_83BFCB50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,4056
	ctx.r3.s64 = ctx.r11.s64 + 4056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFCB5C"))) PPC_WEAK_FUNC(sub_83BFCB5C);
PPC_FUNC_IMPL(__imp__sub_83BFCB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFCB60"))) PPC_WEAK_FUNC(sub_83BFCB60);
PPC_FUNC_IMPL(__imp__sub_83BFCB60) {
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
	// addi r3,r11,25712
	ctx.r3.s64 = ctx.r11.s64 + 25712;
	// bl 0x8259af80
	ctx.lr = 0x83BFCB78;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,4072
	ctx.r3.s64 = ctx.r10.s64 + 4072;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFCB84;
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

__attribute__((alias("__imp__sub_83BFCB94"))) PPC_WEAK_FUNC(sub_83BFCB94);
PPC_FUNC_IMPL(__imp__sub_83BFCB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFCB98"))) PPC_WEAK_FUNC(sub_83BFCB98);
PPC_FUNC_IMPL(__imp__sub_83BFCB98) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,25692
	ctx.r11.s64 = ctx.r8.s64 + 25692;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,16900(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16900);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,4064
	ctx.r3.s64 = ctx.r6.s64 + 4064;
	// stw r10,25692(r8)
	PPC_STORE_U32(ctx.r8.u32 + 25692, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFCBC8"))) PPC_WEAK_FUNC(sub_83BFCBC8);
PPC_FUNC_IMPL(__imp__sub_83BFCBC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,4352
	ctx.r3.s64 = ctx.r11.s64 + 4352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFCBD4"))) PPC_WEAK_FUNC(sub_83BFCBD4);
PPC_FUNC_IMPL(__imp__sub_83BFCBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFCBD8"))) PPC_WEAK_FUNC(sub_83BFCBD8);
PPC_FUNC_IMPL(__imp__sub_83BFCBD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,4360
	ctx.r3.s64 = ctx.r11.s64 + 4360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFCBE4"))) PPC_WEAK_FUNC(sub_83BFCBE4);
PPC_FUNC_IMPL(__imp__sub_83BFCBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFCBE8"))) PPC_WEAK_FUNC(sub_83BFCBE8);
PPC_FUNC_IMPL(__imp__sub_83BFCBE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,4368
	ctx.r3.s64 = ctx.r11.s64 + 4368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFCBF4"))) PPC_WEAK_FUNC(sub_83BFCBF4);
PPC_FUNC_IMPL(__imp__sub_83BFCBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFCBF8"))) PPC_WEAK_FUNC(sub_83BFCBF8);
PPC_FUNC_IMPL(__imp__sub_83BFCBF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,4376
	ctx.r3.s64 = ctx.r11.s64 + 4376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFCC04"))) PPC_WEAK_FUNC(sub_83BFCC04);
PPC_FUNC_IMPL(__imp__sub_83BFCC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFCC08"))) PPC_WEAK_FUNC(sub_83BFCC08);
PPC_FUNC_IMPL(__imp__sub_83BFCC08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,4384
	ctx.r3.s64 = ctx.r11.s64 + 4384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFCC14"))) PPC_WEAK_FUNC(sub_83BFCC14);
PPC_FUNC_IMPL(__imp__sub_83BFCC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFCC18"))) PPC_WEAK_FUNC(sub_83BFCC18);
PPC_FUNC_IMPL(__imp__sub_83BFCC18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,4392
	ctx.r3.s64 = ctx.r11.s64 + 4392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFCC24"))) PPC_WEAK_FUNC(sub_83BFCC24);
PPC_FUNC_IMPL(__imp__sub_83BFCC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFCC28"))) PPC_WEAK_FUNC(sub_83BFCC28);
PPC_FUNC_IMPL(__imp__sub_83BFCC28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,4400
	ctx.r3.s64 = ctx.r11.s64 + 4400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFCC34"))) PPC_WEAK_FUNC(sub_83BFCC34);
PPC_FUNC_IMPL(__imp__sub_83BFCC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFCC38"))) PPC_WEAK_FUNC(sub_83BFCC38);
PPC_FUNC_IMPL(__imp__sub_83BFCC38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,4408
	ctx.r3.s64 = ctx.r11.s64 + 4408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFCC44"))) PPC_WEAK_FUNC(sub_83BFCC44);
PPC_FUNC_IMPL(__imp__sub_83BFCC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFCC48"))) PPC_WEAK_FUNC(sub_83BFCC48);
PPC_FUNC_IMPL(__imp__sub_83BFCC48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,4416
	ctx.r3.s64 = ctx.r11.s64 + 4416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFCC54"))) PPC_WEAK_FUNC(sub_83BFCC54);
PPC_FUNC_IMPL(__imp__sub_83BFCC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFCC58"))) PPC_WEAK_FUNC(sub_83BFCC58);
PPC_FUNC_IMPL(__imp__sub_83BFCC58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,4424
	ctx.r3.s64 = ctx.r11.s64 + 4424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFCC64"))) PPC_WEAK_FUNC(sub_83BFCC64);
PPC_FUNC_IMPL(__imp__sub_83BFCC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFCC68"))) PPC_WEAK_FUNC(sub_83BFCC68);
PPC_FUNC_IMPL(__imp__sub_83BFCC68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,4432
	ctx.r3.s64 = ctx.r11.s64 + 4432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFCC74"))) PPC_WEAK_FUNC(sub_83BFCC74);
PPC_FUNC_IMPL(__imp__sub_83BFCC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFCC78"))) PPC_WEAK_FUNC(sub_83BFCC78);
PPC_FUNC_IMPL(__imp__sub_83BFCC78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,4440
	ctx.r3.s64 = ctx.r11.s64 + 4440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFCC84"))) PPC_WEAK_FUNC(sub_83BFCC84);
PPC_FUNC_IMPL(__imp__sub_83BFCC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFCC88"))) PPC_WEAK_FUNC(sub_83BFCC88);
PPC_FUNC_IMPL(__imp__sub_83BFCC88) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,27848
	ctx.r7.s64 = ctx.r8.s64 + 27848;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,27848(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27848);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,27848(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27848, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFCCB0"))) PPC_WEAK_FUNC(sub_83BFCCB0);
PPC_FUNC_IMPL(__imp__sub_83BFCCB0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,17052
	ctx.r6.s64 = ctx.r7.s64 + 17052;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,16980(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 16980);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,27848(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 27848);
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
	// std r9,17052(r7)
	PPC_STORE_U64(ctx.r7.u32 + 17052, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFCCF8"))) PPC_WEAK_FUNC(sub_83BFCCF8);
PPC_FUNC_IMPL(__imp__sub_83BFCCF8) {
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
	// addi r3,r11,27832
	ctx.r3.s64 = ctx.r11.s64 + 27832;
	// bl 0x83523120
	ctx.lr = 0x83BFCD10;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,4448
	ctx.r3.s64 = ctx.r10.s64 + 4448;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFCD1C;
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

__attribute__((alias("__imp__sub_83BFCD2C"))) PPC_WEAK_FUNC(sub_83BFCD2C);
PPC_FUNC_IMPL(__imp__sub_83BFCD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFCD30"))) PPC_WEAK_FUNC(sub_83BFCD30);
PPC_FUNC_IMPL(__imp__sub_83BFCD30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,4464
	ctx.r3.s64 = ctx.r11.s64 + 4464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFCD3C"))) PPC_WEAK_FUNC(sub_83BFCD3C);
PPC_FUNC_IMPL(__imp__sub_83BFCD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFCD40"))) PPC_WEAK_FUNC(sub_83BFCD40);
PPC_FUNC_IMPL(__imp__sub_83BFCD40) {
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
	// addi r3,r11,27856
	ctx.r3.s64 = ctx.r11.s64 + 27856;
	// bl 0x8259af80
	ctx.lr = 0x83BFCD58;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,4480
	ctx.r3.s64 = ctx.r10.s64 + 4480;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFCD64;
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

__attribute__((alias("__imp__sub_83BFCD74"))) PPC_WEAK_FUNC(sub_83BFCD74);
PPC_FUNC_IMPL(__imp__sub_83BFCD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFCD78"))) PPC_WEAK_FUNC(sub_83BFCD78);
PPC_FUNC_IMPL(__imp__sub_83BFCD78) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,27836
	ctx.r11.s64 = ctx.r8.s64 + 27836;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,17028(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17028);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,4472
	ctx.r3.s64 = ctx.r6.s64 + 4472;
	// stw r10,27836(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27836, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFCDA8"))) PPC_WEAK_FUNC(sub_83BFCDA8);
PPC_FUNC_IMPL(__imp__sub_83BFCDA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,4760
	ctx.r3.s64 = ctx.r11.s64 + 4760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFCDB4"))) PPC_WEAK_FUNC(sub_83BFCDB4);
PPC_FUNC_IMPL(__imp__sub_83BFCDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFCDB8"))) PPC_WEAK_FUNC(sub_83BFCDB8);
PPC_FUNC_IMPL(__imp__sub_83BFCDB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,4768
	ctx.r3.s64 = ctx.r11.s64 + 4768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFCDC4"))) PPC_WEAK_FUNC(sub_83BFCDC4);
PPC_FUNC_IMPL(__imp__sub_83BFCDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFCDC8"))) PPC_WEAK_FUNC(sub_83BFCDC8);
PPC_FUNC_IMPL(__imp__sub_83BFCDC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,4776
	ctx.r3.s64 = ctx.r11.s64 + 4776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFCDD4"))) PPC_WEAK_FUNC(sub_83BFCDD4);
PPC_FUNC_IMPL(__imp__sub_83BFCDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFCDD8"))) PPC_WEAK_FUNC(sub_83BFCDD8);
PPC_FUNC_IMPL(__imp__sub_83BFCDD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,4784
	ctx.r3.s64 = ctx.r11.s64 + 4784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFCDE4"))) PPC_WEAK_FUNC(sub_83BFCDE4);
PPC_FUNC_IMPL(__imp__sub_83BFCDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFCDE8"))) PPC_WEAK_FUNC(sub_83BFCDE8);
PPC_FUNC_IMPL(__imp__sub_83BFCDE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,4792
	ctx.r3.s64 = ctx.r11.s64 + 4792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFCDF4"))) PPC_WEAK_FUNC(sub_83BFCDF4);
PPC_FUNC_IMPL(__imp__sub_83BFCDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFCDF8"))) PPC_WEAK_FUNC(sub_83BFCDF8);
PPC_FUNC_IMPL(__imp__sub_83BFCDF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,4800
	ctx.r3.s64 = ctx.r11.s64 + 4800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFCE04"))) PPC_WEAK_FUNC(sub_83BFCE04);
PPC_FUNC_IMPL(__imp__sub_83BFCE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFCE08"))) PPC_WEAK_FUNC(sub_83BFCE08);
PPC_FUNC_IMPL(__imp__sub_83BFCE08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,4808
	ctx.r3.s64 = ctx.r11.s64 + 4808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFCE14"))) PPC_WEAK_FUNC(sub_83BFCE14);
PPC_FUNC_IMPL(__imp__sub_83BFCE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFCE18"))) PPC_WEAK_FUNC(sub_83BFCE18);
PPC_FUNC_IMPL(__imp__sub_83BFCE18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,4816
	ctx.r3.s64 = ctx.r11.s64 + 4816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFCE24"))) PPC_WEAK_FUNC(sub_83BFCE24);
PPC_FUNC_IMPL(__imp__sub_83BFCE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFCE28"))) PPC_WEAK_FUNC(sub_83BFCE28);
PPC_FUNC_IMPL(__imp__sub_83BFCE28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,4824
	ctx.r3.s64 = ctx.r11.s64 + 4824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFCE34"))) PPC_WEAK_FUNC(sub_83BFCE34);
PPC_FUNC_IMPL(__imp__sub_83BFCE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFCE38"))) PPC_WEAK_FUNC(sub_83BFCE38);
PPC_FUNC_IMPL(__imp__sub_83BFCE38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,4832
	ctx.r3.s64 = ctx.r11.s64 + 4832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFCE44"))) PPC_WEAK_FUNC(sub_83BFCE44);
PPC_FUNC_IMPL(__imp__sub_83BFCE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFCE48"))) PPC_WEAK_FUNC(sub_83BFCE48);
PPC_FUNC_IMPL(__imp__sub_83BFCE48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,4840
	ctx.r3.s64 = ctx.r11.s64 + 4840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFCE54"))) PPC_WEAK_FUNC(sub_83BFCE54);
PPC_FUNC_IMPL(__imp__sub_83BFCE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFCE58"))) PPC_WEAK_FUNC(sub_83BFCE58);
PPC_FUNC_IMPL(__imp__sub_83BFCE58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,4848
	ctx.r3.s64 = ctx.r11.s64 + 4848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFCE64"))) PPC_WEAK_FUNC(sub_83BFCE64);
PPC_FUNC_IMPL(__imp__sub_83BFCE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFCE68"))) PPC_WEAK_FUNC(sub_83BFCE68);
PPC_FUNC_IMPL(__imp__sub_83BFCE68) {
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
	// addi r3,r11,28200
	ctx.r3.s64 = ctx.r11.s64 + 28200;
	// bl 0x83523120
	ctx.lr = 0x83BFCE80;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,4856
	ctx.r3.s64 = ctx.r10.s64 + 4856;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFCE8C;
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

__attribute__((alias("__imp__sub_83BFCE9C"))) PPC_WEAK_FUNC(sub_83BFCE9C);
PPC_FUNC_IMPL(__imp__sub_83BFCE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFCEA0"))) PPC_WEAK_FUNC(sub_83BFCEA0);
PPC_FUNC_IMPL(__imp__sub_83BFCEA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,28216
	ctx.r7.s64 = ctx.r8.s64 + 28216;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,28216(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28216);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,28216(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28216, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFCEC8"))) PPC_WEAK_FUNC(sub_83BFCEC8);
PPC_FUNC_IMPL(__imp__sub_83BFCEC8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,17188
	ctx.r6.s64 = ctx.r7.s64 + 17188;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,17116(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 17116);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,28216(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28216);
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
	// std r9,17188(r7)
	PPC_STORE_U64(ctx.r7.u32 + 17188, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFCF10"))) PPC_WEAK_FUNC(sub_83BFCF10);
PPC_FUNC_IMPL(__imp__sub_83BFCF10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,4872
	ctx.r3.s64 = ctx.r11.s64 + 4872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFCF1C"))) PPC_WEAK_FUNC(sub_83BFCF1C);
PPC_FUNC_IMPL(__imp__sub_83BFCF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFCF20"))) PPC_WEAK_FUNC(sub_83BFCF20);
PPC_FUNC_IMPL(__imp__sub_83BFCF20) {
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
	// addi r3,r11,28224
	ctx.r3.s64 = ctx.r11.s64 + 28224;
	// bl 0x8259af80
	ctx.lr = 0x83BFCF38;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,4888
	ctx.r3.s64 = ctx.r10.s64 + 4888;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFCF44;
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

__attribute__((alias("__imp__sub_83BFCF54"))) PPC_WEAK_FUNC(sub_83BFCF54);
PPC_FUNC_IMPL(__imp__sub_83BFCF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFCF58"))) PPC_WEAK_FUNC(sub_83BFCF58);
PPC_FUNC_IMPL(__imp__sub_83BFCF58) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,28204
	ctx.r11.s64 = ctx.r8.s64 + 28204;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,17164(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17164);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,4880
	ctx.r3.s64 = ctx.r6.s64 + 4880;
	// stw r10,28204(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28204, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFCF88"))) PPC_WEAK_FUNC(sub_83BFCF88);
PPC_FUNC_IMPL(__imp__sub_83BFCF88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,4896
	ctx.r3.s64 = ctx.r11.s64 + 4896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFCF94"))) PPC_WEAK_FUNC(sub_83BFCF94);
PPC_FUNC_IMPL(__imp__sub_83BFCF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFCF98"))) PPC_WEAK_FUNC(sub_83BFCF98);
PPC_FUNC_IMPL(__imp__sub_83BFCF98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,4904
	ctx.r3.s64 = ctx.r11.s64 + 4904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFCFA4"))) PPC_WEAK_FUNC(sub_83BFCFA4);
PPC_FUNC_IMPL(__imp__sub_83BFCFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFCFA8"))) PPC_WEAK_FUNC(sub_83BFCFA8);
PPC_FUNC_IMPL(__imp__sub_83BFCFA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,4912
	ctx.r3.s64 = ctx.r11.s64 + 4912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFCFB4"))) PPC_WEAK_FUNC(sub_83BFCFB4);
PPC_FUNC_IMPL(__imp__sub_83BFCFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFCFB8"))) PPC_WEAK_FUNC(sub_83BFCFB8);
PPC_FUNC_IMPL(__imp__sub_83BFCFB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,4920
	ctx.r3.s64 = ctx.r11.s64 + 4920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFCFC4"))) PPC_WEAK_FUNC(sub_83BFCFC4);
PPC_FUNC_IMPL(__imp__sub_83BFCFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFCFC8"))) PPC_WEAK_FUNC(sub_83BFCFC8);
PPC_FUNC_IMPL(__imp__sub_83BFCFC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,4928
	ctx.r3.s64 = ctx.r11.s64 + 4928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFCFD4"))) PPC_WEAK_FUNC(sub_83BFCFD4);
PPC_FUNC_IMPL(__imp__sub_83BFCFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFCFD8"))) PPC_WEAK_FUNC(sub_83BFCFD8);
PPC_FUNC_IMPL(__imp__sub_83BFCFD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,4936
	ctx.r3.s64 = ctx.r11.s64 + 4936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFCFE4"))) PPC_WEAK_FUNC(sub_83BFCFE4);
PPC_FUNC_IMPL(__imp__sub_83BFCFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFCFE8"))) PPC_WEAK_FUNC(sub_83BFCFE8);
PPC_FUNC_IMPL(__imp__sub_83BFCFE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,4944
	ctx.r3.s64 = ctx.r11.s64 + 4944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFCFF4"))) PPC_WEAK_FUNC(sub_83BFCFF4);
PPC_FUNC_IMPL(__imp__sub_83BFCFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFCFF8"))) PPC_WEAK_FUNC(sub_83BFCFF8);
PPC_FUNC_IMPL(__imp__sub_83BFCFF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,4952
	ctx.r3.s64 = ctx.r11.s64 + 4952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD004"))) PPC_WEAK_FUNC(sub_83BFD004);
PPC_FUNC_IMPL(__imp__sub_83BFD004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD008"))) PPC_WEAK_FUNC(sub_83BFD008);
PPC_FUNC_IMPL(__imp__sub_83BFD008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,4960
	ctx.r3.s64 = ctx.r11.s64 + 4960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD014"))) PPC_WEAK_FUNC(sub_83BFD014);
PPC_FUNC_IMPL(__imp__sub_83BFD014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD018"))) PPC_WEAK_FUNC(sub_83BFD018);
PPC_FUNC_IMPL(__imp__sub_83BFD018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,4968
	ctx.r3.s64 = ctx.r11.s64 + 4968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD024"))) PPC_WEAK_FUNC(sub_83BFD024);
PPC_FUNC_IMPL(__imp__sub_83BFD024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD028"))) PPC_WEAK_FUNC(sub_83BFD028);
PPC_FUNC_IMPL(__imp__sub_83BFD028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,4976
	ctx.r3.s64 = ctx.r11.s64 + 4976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD034"))) PPC_WEAK_FUNC(sub_83BFD034);
PPC_FUNC_IMPL(__imp__sub_83BFD034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD038"))) PPC_WEAK_FUNC(sub_83BFD038);
PPC_FUNC_IMPL(__imp__sub_83BFD038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,4984
	ctx.r3.s64 = ctx.r11.s64 + 4984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD044"))) PPC_WEAK_FUNC(sub_83BFD044);
PPC_FUNC_IMPL(__imp__sub_83BFD044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD048"))) PPC_WEAK_FUNC(sub_83BFD048);
PPC_FUNC_IMPL(__imp__sub_83BFD048) {
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
	// addi r3,r11,28568
	ctx.r3.s64 = ctx.r11.s64 + 28568;
	// bl 0x83523120
	ctx.lr = 0x83BFD060;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,4992
	ctx.r3.s64 = ctx.r10.s64 + 4992;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFD06C;
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

__attribute__((alias("__imp__sub_83BFD07C"))) PPC_WEAK_FUNC(sub_83BFD07C);
PPC_FUNC_IMPL(__imp__sub_83BFD07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD080"))) PPC_WEAK_FUNC(sub_83BFD080);
PPC_FUNC_IMPL(__imp__sub_83BFD080) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,28584
	ctx.r7.s64 = ctx.r8.s64 + 28584;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,28584(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28584);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,28584(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28584, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFD0A8"))) PPC_WEAK_FUNC(sub_83BFD0A8);
PPC_FUNC_IMPL(__imp__sub_83BFD0A8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,17388
	ctx.r6.s64 = ctx.r7.s64 + 17388;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,17316(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 17316);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,28584(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28584);
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
	// std r9,17388(r7)
	PPC_STORE_U64(ctx.r7.u32 + 17388, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFD0F0"))) PPC_WEAK_FUNC(sub_83BFD0F0);
PPC_FUNC_IMPL(__imp__sub_83BFD0F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5008
	ctx.r3.s64 = ctx.r11.s64 + 5008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD0FC"))) PPC_WEAK_FUNC(sub_83BFD0FC);
PPC_FUNC_IMPL(__imp__sub_83BFD0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD100"))) PPC_WEAK_FUNC(sub_83BFD100);
PPC_FUNC_IMPL(__imp__sub_83BFD100) {
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
	// addi r3,r11,28592
	ctx.r3.s64 = ctx.r11.s64 + 28592;
	// bl 0x8259af80
	ctx.lr = 0x83BFD118;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,5024
	ctx.r3.s64 = ctx.r10.s64 + 5024;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFD124;
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

__attribute__((alias("__imp__sub_83BFD134"))) PPC_WEAK_FUNC(sub_83BFD134);
PPC_FUNC_IMPL(__imp__sub_83BFD134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD138"))) PPC_WEAK_FUNC(sub_83BFD138);
PPC_FUNC_IMPL(__imp__sub_83BFD138) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,28572
	ctx.r11.s64 = ctx.r8.s64 + 28572;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,17364(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17364);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,5016
	ctx.r3.s64 = ctx.r6.s64 + 5016;
	// stw r10,28572(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28572, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD168"))) PPC_WEAK_FUNC(sub_83BFD168);
PPC_FUNC_IMPL(__imp__sub_83BFD168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5032
	ctx.r3.s64 = ctx.r11.s64 + 5032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD174"))) PPC_WEAK_FUNC(sub_83BFD174);
PPC_FUNC_IMPL(__imp__sub_83BFD174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD178"))) PPC_WEAK_FUNC(sub_83BFD178);
PPC_FUNC_IMPL(__imp__sub_83BFD178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5040
	ctx.r3.s64 = ctx.r11.s64 + 5040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD184"))) PPC_WEAK_FUNC(sub_83BFD184);
PPC_FUNC_IMPL(__imp__sub_83BFD184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD188"))) PPC_WEAK_FUNC(sub_83BFD188);
PPC_FUNC_IMPL(__imp__sub_83BFD188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5048
	ctx.r3.s64 = ctx.r11.s64 + 5048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD194"))) PPC_WEAK_FUNC(sub_83BFD194);
PPC_FUNC_IMPL(__imp__sub_83BFD194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD198"))) PPC_WEAK_FUNC(sub_83BFD198);
PPC_FUNC_IMPL(__imp__sub_83BFD198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5056
	ctx.r3.s64 = ctx.r11.s64 + 5056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD1A4"))) PPC_WEAK_FUNC(sub_83BFD1A4);
PPC_FUNC_IMPL(__imp__sub_83BFD1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD1A8"))) PPC_WEAK_FUNC(sub_83BFD1A8);
PPC_FUNC_IMPL(__imp__sub_83BFD1A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5064
	ctx.r3.s64 = ctx.r11.s64 + 5064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD1B4"))) PPC_WEAK_FUNC(sub_83BFD1B4);
PPC_FUNC_IMPL(__imp__sub_83BFD1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD1B8"))) PPC_WEAK_FUNC(sub_83BFD1B8);
PPC_FUNC_IMPL(__imp__sub_83BFD1B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5072
	ctx.r3.s64 = ctx.r11.s64 + 5072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD1C4"))) PPC_WEAK_FUNC(sub_83BFD1C4);
PPC_FUNC_IMPL(__imp__sub_83BFD1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD1C8"))) PPC_WEAK_FUNC(sub_83BFD1C8);
PPC_FUNC_IMPL(__imp__sub_83BFD1C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5080
	ctx.r3.s64 = ctx.r11.s64 + 5080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD1D4"))) PPC_WEAK_FUNC(sub_83BFD1D4);
PPC_FUNC_IMPL(__imp__sub_83BFD1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD1D8"))) PPC_WEAK_FUNC(sub_83BFD1D8);
PPC_FUNC_IMPL(__imp__sub_83BFD1D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5088
	ctx.r3.s64 = ctx.r11.s64 + 5088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD1E4"))) PPC_WEAK_FUNC(sub_83BFD1E4);
PPC_FUNC_IMPL(__imp__sub_83BFD1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD1E8"))) PPC_WEAK_FUNC(sub_83BFD1E8);
PPC_FUNC_IMPL(__imp__sub_83BFD1E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5096
	ctx.r3.s64 = ctx.r11.s64 + 5096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD1F4"))) PPC_WEAK_FUNC(sub_83BFD1F4);
PPC_FUNC_IMPL(__imp__sub_83BFD1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD1F8"))) PPC_WEAK_FUNC(sub_83BFD1F8);
PPC_FUNC_IMPL(__imp__sub_83BFD1F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5104
	ctx.r3.s64 = ctx.r11.s64 + 5104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD204"))) PPC_WEAK_FUNC(sub_83BFD204);
PPC_FUNC_IMPL(__imp__sub_83BFD204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD208"))) PPC_WEAK_FUNC(sub_83BFD208);
PPC_FUNC_IMPL(__imp__sub_83BFD208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5112
	ctx.r3.s64 = ctx.r11.s64 + 5112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD214"))) PPC_WEAK_FUNC(sub_83BFD214);
PPC_FUNC_IMPL(__imp__sub_83BFD214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD218"))) PPC_WEAK_FUNC(sub_83BFD218);
PPC_FUNC_IMPL(__imp__sub_83BFD218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5120
	ctx.r3.s64 = ctx.r11.s64 + 5120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD224"))) PPC_WEAK_FUNC(sub_83BFD224);
PPC_FUNC_IMPL(__imp__sub_83BFD224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD228"))) PPC_WEAK_FUNC(sub_83BFD228);
PPC_FUNC_IMPL(__imp__sub_83BFD228) {
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
	// addi r3,r11,28936
	ctx.r3.s64 = ctx.r11.s64 + 28936;
	// bl 0x83523120
	ctx.lr = 0x83BFD240;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,5128
	ctx.r3.s64 = ctx.r10.s64 + 5128;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFD24C;
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

__attribute__((alias("__imp__sub_83BFD25C"))) PPC_WEAK_FUNC(sub_83BFD25C);
PPC_FUNC_IMPL(__imp__sub_83BFD25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD260"))) PPC_WEAK_FUNC(sub_83BFD260);
PPC_FUNC_IMPL(__imp__sub_83BFD260) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,28952
	ctx.r7.s64 = ctx.r8.s64 + 28952;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,28952(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28952);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,28952(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28952, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFD288"))) PPC_WEAK_FUNC(sub_83BFD288);
PPC_FUNC_IMPL(__imp__sub_83BFD288) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,17552
	ctx.r6.s64 = ctx.r7.s64 + 17552;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,17480(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 17480);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,28952(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28952);
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
	// std r9,17552(r7)
	PPC_STORE_U64(ctx.r7.u32 + 17552, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFD2D0"))) PPC_WEAK_FUNC(sub_83BFD2D0);
PPC_FUNC_IMPL(__imp__sub_83BFD2D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5144
	ctx.r3.s64 = ctx.r11.s64 + 5144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD2DC"))) PPC_WEAK_FUNC(sub_83BFD2DC);
PPC_FUNC_IMPL(__imp__sub_83BFD2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD2E0"))) PPC_WEAK_FUNC(sub_83BFD2E0);
PPC_FUNC_IMPL(__imp__sub_83BFD2E0) {
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
	// addi r3,r11,28960
	ctx.r3.s64 = ctx.r11.s64 + 28960;
	// bl 0x8259af80
	ctx.lr = 0x83BFD2F8;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,5160
	ctx.r3.s64 = ctx.r10.s64 + 5160;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFD304;
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

__attribute__((alias("__imp__sub_83BFD314"))) PPC_WEAK_FUNC(sub_83BFD314);
PPC_FUNC_IMPL(__imp__sub_83BFD314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD318"))) PPC_WEAK_FUNC(sub_83BFD318);
PPC_FUNC_IMPL(__imp__sub_83BFD318) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,28940
	ctx.r11.s64 = ctx.r8.s64 + 28940;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,17528(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17528);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,5152
	ctx.r3.s64 = ctx.r6.s64 + 5152;
	// stw r10,28940(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28940, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD348"))) PPC_WEAK_FUNC(sub_83BFD348);
PPC_FUNC_IMPL(__imp__sub_83BFD348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5168
	ctx.r3.s64 = ctx.r11.s64 + 5168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD354"))) PPC_WEAK_FUNC(sub_83BFD354);
PPC_FUNC_IMPL(__imp__sub_83BFD354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD358"))) PPC_WEAK_FUNC(sub_83BFD358);
PPC_FUNC_IMPL(__imp__sub_83BFD358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5176
	ctx.r3.s64 = ctx.r11.s64 + 5176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD364"))) PPC_WEAK_FUNC(sub_83BFD364);
PPC_FUNC_IMPL(__imp__sub_83BFD364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD368"))) PPC_WEAK_FUNC(sub_83BFD368);
PPC_FUNC_IMPL(__imp__sub_83BFD368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5184
	ctx.r3.s64 = ctx.r11.s64 + 5184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD374"))) PPC_WEAK_FUNC(sub_83BFD374);
PPC_FUNC_IMPL(__imp__sub_83BFD374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD378"))) PPC_WEAK_FUNC(sub_83BFD378);
PPC_FUNC_IMPL(__imp__sub_83BFD378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5192
	ctx.r3.s64 = ctx.r11.s64 + 5192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD384"))) PPC_WEAK_FUNC(sub_83BFD384);
PPC_FUNC_IMPL(__imp__sub_83BFD384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD388"))) PPC_WEAK_FUNC(sub_83BFD388);
PPC_FUNC_IMPL(__imp__sub_83BFD388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5200
	ctx.r3.s64 = ctx.r11.s64 + 5200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD394"))) PPC_WEAK_FUNC(sub_83BFD394);
PPC_FUNC_IMPL(__imp__sub_83BFD394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD398"))) PPC_WEAK_FUNC(sub_83BFD398);
PPC_FUNC_IMPL(__imp__sub_83BFD398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5208
	ctx.r3.s64 = ctx.r11.s64 + 5208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD3A4"))) PPC_WEAK_FUNC(sub_83BFD3A4);
PPC_FUNC_IMPL(__imp__sub_83BFD3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD3A8"))) PPC_WEAK_FUNC(sub_83BFD3A8);
PPC_FUNC_IMPL(__imp__sub_83BFD3A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5216
	ctx.r3.s64 = ctx.r11.s64 + 5216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD3B4"))) PPC_WEAK_FUNC(sub_83BFD3B4);
PPC_FUNC_IMPL(__imp__sub_83BFD3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD3B8"))) PPC_WEAK_FUNC(sub_83BFD3B8);
PPC_FUNC_IMPL(__imp__sub_83BFD3B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5224
	ctx.r3.s64 = ctx.r11.s64 + 5224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD3C4"))) PPC_WEAK_FUNC(sub_83BFD3C4);
PPC_FUNC_IMPL(__imp__sub_83BFD3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD3C8"))) PPC_WEAK_FUNC(sub_83BFD3C8);
PPC_FUNC_IMPL(__imp__sub_83BFD3C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5232
	ctx.r3.s64 = ctx.r11.s64 + 5232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD3D4"))) PPC_WEAK_FUNC(sub_83BFD3D4);
PPC_FUNC_IMPL(__imp__sub_83BFD3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD3D8"))) PPC_WEAK_FUNC(sub_83BFD3D8);
PPC_FUNC_IMPL(__imp__sub_83BFD3D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5240
	ctx.r3.s64 = ctx.r11.s64 + 5240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD3E4"))) PPC_WEAK_FUNC(sub_83BFD3E4);
PPC_FUNC_IMPL(__imp__sub_83BFD3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD3E8"))) PPC_WEAK_FUNC(sub_83BFD3E8);
PPC_FUNC_IMPL(__imp__sub_83BFD3E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5248
	ctx.r3.s64 = ctx.r11.s64 + 5248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD3F4"))) PPC_WEAK_FUNC(sub_83BFD3F4);
PPC_FUNC_IMPL(__imp__sub_83BFD3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD3F8"))) PPC_WEAK_FUNC(sub_83BFD3F8);
PPC_FUNC_IMPL(__imp__sub_83BFD3F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5256
	ctx.r3.s64 = ctx.r11.s64 + 5256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD404"))) PPC_WEAK_FUNC(sub_83BFD404);
PPC_FUNC_IMPL(__imp__sub_83BFD404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD408"))) PPC_WEAK_FUNC(sub_83BFD408);
PPC_FUNC_IMPL(__imp__sub_83BFD408) {
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
	// addi r3,r11,29304
	ctx.r3.s64 = ctx.r11.s64 + 29304;
	// bl 0x83523120
	ctx.lr = 0x83BFD420;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,5264
	ctx.r3.s64 = ctx.r10.s64 + 5264;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFD42C;
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

__attribute__((alias("__imp__sub_83BFD43C"))) PPC_WEAK_FUNC(sub_83BFD43C);
PPC_FUNC_IMPL(__imp__sub_83BFD43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD440"))) PPC_WEAK_FUNC(sub_83BFD440);
PPC_FUNC_IMPL(__imp__sub_83BFD440) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,29320
	ctx.r7.s64 = ctx.r8.s64 + 29320;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,29320(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 29320);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,29320(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29320, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFD468"))) PPC_WEAK_FUNC(sub_83BFD468);
PPC_FUNC_IMPL(__imp__sub_83BFD468) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,17720
	ctx.r6.s64 = ctx.r7.s64 + 17720;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,17648(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 17648);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,29320(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29320);
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
	// std r9,17720(r7)
	PPC_STORE_U64(ctx.r7.u32 + 17720, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFD4B0"))) PPC_WEAK_FUNC(sub_83BFD4B0);
PPC_FUNC_IMPL(__imp__sub_83BFD4B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5280
	ctx.r3.s64 = ctx.r11.s64 + 5280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD4BC"))) PPC_WEAK_FUNC(sub_83BFD4BC);
PPC_FUNC_IMPL(__imp__sub_83BFD4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD4C0"))) PPC_WEAK_FUNC(sub_83BFD4C0);
PPC_FUNC_IMPL(__imp__sub_83BFD4C0) {
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
	// addi r3,r11,29328
	ctx.r3.s64 = ctx.r11.s64 + 29328;
	// bl 0x8259af80
	ctx.lr = 0x83BFD4D8;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,5296
	ctx.r3.s64 = ctx.r10.s64 + 5296;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFD4E4;
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

__attribute__((alias("__imp__sub_83BFD4F4"))) PPC_WEAK_FUNC(sub_83BFD4F4);
PPC_FUNC_IMPL(__imp__sub_83BFD4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD4F8"))) PPC_WEAK_FUNC(sub_83BFD4F8);
PPC_FUNC_IMPL(__imp__sub_83BFD4F8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,29308
	ctx.r11.s64 = ctx.r8.s64 + 29308;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,17696(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17696);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,5288
	ctx.r3.s64 = ctx.r6.s64 + 5288;
	// stw r10,29308(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29308, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD528"))) PPC_WEAK_FUNC(sub_83BFD528);
PPC_FUNC_IMPL(__imp__sub_83BFD528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5304
	ctx.r3.s64 = ctx.r11.s64 + 5304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD534"))) PPC_WEAK_FUNC(sub_83BFD534);
PPC_FUNC_IMPL(__imp__sub_83BFD534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD538"))) PPC_WEAK_FUNC(sub_83BFD538);
PPC_FUNC_IMPL(__imp__sub_83BFD538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5312
	ctx.r3.s64 = ctx.r11.s64 + 5312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD544"))) PPC_WEAK_FUNC(sub_83BFD544);
PPC_FUNC_IMPL(__imp__sub_83BFD544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD548"))) PPC_WEAK_FUNC(sub_83BFD548);
PPC_FUNC_IMPL(__imp__sub_83BFD548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5320
	ctx.r3.s64 = ctx.r11.s64 + 5320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD554"))) PPC_WEAK_FUNC(sub_83BFD554);
PPC_FUNC_IMPL(__imp__sub_83BFD554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD558"))) PPC_WEAK_FUNC(sub_83BFD558);
PPC_FUNC_IMPL(__imp__sub_83BFD558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5328
	ctx.r3.s64 = ctx.r11.s64 + 5328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD564"))) PPC_WEAK_FUNC(sub_83BFD564);
PPC_FUNC_IMPL(__imp__sub_83BFD564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD568"))) PPC_WEAK_FUNC(sub_83BFD568);
PPC_FUNC_IMPL(__imp__sub_83BFD568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5336
	ctx.r3.s64 = ctx.r11.s64 + 5336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD574"))) PPC_WEAK_FUNC(sub_83BFD574);
PPC_FUNC_IMPL(__imp__sub_83BFD574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD578"))) PPC_WEAK_FUNC(sub_83BFD578);
PPC_FUNC_IMPL(__imp__sub_83BFD578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5344
	ctx.r3.s64 = ctx.r11.s64 + 5344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD584"))) PPC_WEAK_FUNC(sub_83BFD584);
PPC_FUNC_IMPL(__imp__sub_83BFD584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD588"))) PPC_WEAK_FUNC(sub_83BFD588);
PPC_FUNC_IMPL(__imp__sub_83BFD588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5352
	ctx.r3.s64 = ctx.r11.s64 + 5352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD594"))) PPC_WEAK_FUNC(sub_83BFD594);
PPC_FUNC_IMPL(__imp__sub_83BFD594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD598"))) PPC_WEAK_FUNC(sub_83BFD598);
PPC_FUNC_IMPL(__imp__sub_83BFD598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5360
	ctx.r3.s64 = ctx.r11.s64 + 5360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD5A4"))) PPC_WEAK_FUNC(sub_83BFD5A4);
PPC_FUNC_IMPL(__imp__sub_83BFD5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD5A8"))) PPC_WEAK_FUNC(sub_83BFD5A8);
PPC_FUNC_IMPL(__imp__sub_83BFD5A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5368
	ctx.r3.s64 = ctx.r11.s64 + 5368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD5B4"))) PPC_WEAK_FUNC(sub_83BFD5B4);
PPC_FUNC_IMPL(__imp__sub_83BFD5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD5B8"))) PPC_WEAK_FUNC(sub_83BFD5B8);
PPC_FUNC_IMPL(__imp__sub_83BFD5B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5376
	ctx.r3.s64 = ctx.r11.s64 + 5376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD5C4"))) PPC_WEAK_FUNC(sub_83BFD5C4);
PPC_FUNC_IMPL(__imp__sub_83BFD5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD5C8"))) PPC_WEAK_FUNC(sub_83BFD5C8);
PPC_FUNC_IMPL(__imp__sub_83BFD5C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5384
	ctx.r3.s64 = ctx.r11.s64 + 5384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD5D4"))) PPC_WEAK_FUNC(sub_83BFD5D4);
PPC_FUNC_IMPL(__imp__sub_83BFD5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD5D8"))) PPC_WEAK_FUNC(sub_83BFD5D8);
PPC_FUNC_IMPL(__imp__sub_83BFD5D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5392
	ctx.r3.s64 = ctx.r11.s64 + 5392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD5E4"))) PPC_WEAK_FUNC(sub_83BFD5E4);
PPC_FUNC_IMPL(__imp__sub_83BFD5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD5E8"))) PPC_WEAK_FUNC(sub_83BFD5E8);
PPC_FUNC_IMPL(__imp__sub_83BFD5E8) {
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
	// addi r3,r11,29672
	ctx.r3.s64 = ctx.r11.s64 + 29672;
	// bl 0x83523120
	ctx.lr = 0x83BFD600;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,5400
	ctx.r3.s64 = ctx.r10.s64 + 5400;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFD60C;
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

__attribute__((alias("__imp__sub_83BFD61C"))) PPC_WEAK_FUNC(sub_83BFD61C);
PPC_FUNC_IMPL(__imp__sub_83BFD61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD620"))) PPC_WEAK_FUNC(sub_83BFD620);
PPC_FUNC_IMPL(__imp__sub_83BFD620) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,29688
	ctx.r7.s64 = ctx.r8.s64 + 29688;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,29688(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 29688);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,29688(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29688, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFD648"))) PPC_WEAK_FUNC(sub_83BFD648);
PPC_FUNC_IMPL(__imp__sub_83BFD648) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,18032
	ctx.r6.s64 = ctx.r7.s64 + 18032;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,17960(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 17960);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,29688(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29688);
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
	// std r9,18032(r7)
	PPC_STORE_U64(ctx.r7.u32 + 18032, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFD690"))) PPC_WEAK_FUNC(sub_83BFD690);
PPC_FUNC_IMPL(__imp__sub_83BFD690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5416
	ctx.r3.s64 = ctx.r11.s64 + 5416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD69C"))) PPC_WEAK_FUNC(sub_83BFD69C);
PPC_FUNC_IMPL(__imp__sub_83BFD69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD6A0"))) PPC_WEAK_FUNC(sub_83BFD6A0);
PPC_FUNC_IMPL(__imp__sub_83BFD6A0) {
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
	// addi r3,r11,29696
	ctx.r3.s64 = ctx.r11.s64 + 29696;
	// bl 0x8259af80
	ctx.lr = 0x83BFD6B8;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,5432
	ctx.r3.s64 = ctx.r10.s64 + 5432;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFD6C4;
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

__attribute__((alias("__imp__sub_83BFD6D4"))) PPC_WEAK_FUNC(sub_83BFD6D4);
PPC_FUNC_IMPL(__imp__sub_83BFD6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD6D8"))) PPC_WEAK_FUNC(sub_83BFD6D8);
PPC_FUNC_IMPL(__imp__sub_83BFD6D8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,29676
	ctx.r11.s64 = ctx.r8.s64 + 29676;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,18008(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18008);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,5424
	ctx.r3.s64 = ctx.r6.s64 + 5424;
	// stw r10,29676(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29676, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD708"))) PPC_WEAK_FUNC(sub_83BFD708);
PPC_FUNC_IMPL(__imp__sub_83BFD708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5440
	ctx.r3.s64 = ctx.r11.s64 + 5440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD714"))) PPC_WEAK_FUNC(sub_83BFD714);
PPC_FUNC_IMPL(__imp__sub_83BFD714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD718"))) PPC_WEAK_FUNC(sub_83BFD718);
PPC_FUNC_IMPL(__imp__sub_83BFD718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5448
	ctx.r3.s64 = ctx.r11.s64 + 5448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD724"))) PPC_WEAK_FUNC(sub_83BFD724);
PPC_FUNC_IMPL(__imp__sub_83BFD724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD728"))) PPC_WEAK_FUNC(sub_83BFD728);
PPC_FUNC_IMPL(__imp__sub_83BFD728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5456
	ctx.r3.s64 = ctx.r11.s64 + 5456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD734"))) PPC_WEAK_FUNC(sub_83BFD734);
PPC_FUNC_IMPL(__imp__sub_83BFD734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD738"))) PPC_WEAK_FUNC(sub_83BFD738);
PPC_FUNC_IMPL(__imp__sub_83BFD738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5464
	ctx.r3.s64 = ctx.r11.s64 + 5464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD744"))) PPC_WEAK_FUNC(sub_83BFD744);
PPC_FUNC_IMPL(__imp__sub_83BFD744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD748"))) PPC_WEAK_FUNC(sub_83BFD748);
PPC_FUNC_IMPL(__imp__sub_83BFD748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5472
	ctx.r3.s64 = ctx.r11.s64 + 5472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD754"))) PPC_WEAK_FUNC(sub_83BFD754);
PPC_FUNC_IMPL(__imp__sub_83BFD754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD758"))) PPC_WEAK_FUNC(sub_83BFD758);
PPC_FUNC_IMPL(__imp__sub_83BFD758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5480
	ctx.r3.s64 = ctx.r11.s64 + 5480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD764"))) PPC_WEAK_FUNC(sub_83BFD764);
PPC_FUNC_IMPL(__imp__sub_83BFD764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD768"))) PPC_WEAK_FUNC(sub_83BFD768);
PPC_FUNC_IMPL(__imp__sub_83BFD768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5488
	ctx.r3.s64 = ctx.r11.s64 + 5488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD774"))) PPC_WEAK_FUNC(sub_83BFD774);
PPC_FUNC_IMPL(__imp__sub_83BFD774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD778"))) PPC_WEAK_FUNC(sub_83BFD778);
PPC_FUNC_IMPL(__imp__sub_83BFD778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5496
	ctx.r3.s64 = ctx.r11.s64 + 5496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD784"))) PPC_WEAK_FUNC(sub_83BFD784);
PPC_FUNC_IMPL(__imp__sub_83BFD784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD788"))) PPC_WEAK_FUNC(sub_83BFD788);
PPC_FUNC_IMPL(__imp__sub_83BFD788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5504
	ctx.r3.s64 = ctx.r11.s64 + 5504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD794"))) PPC_WEAK_FUNC(sub_83BFD794);
PPC_FUNC_IMPL(__imp__sub_83BFD794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD798"))) PPC_WEAK_FUNC(sub_83BFD798);
PPC_FUNC_IMPL(__imp__sub_83BFD798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5512
	ctx.r3.s64 = ctx.r11.s64 + 5512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD7A4"))) PPC_WEAK_FUNC(sub_83BFD7A4);
PPC_FUNC_IMPL(__imp__sub_83BFD7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD7A8"))) PPC_WEAK_FUNC(sub_83BFD7A8);
PPC_FUNC_IMPL(__imp__sub_83BFD7A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5520
	ctx.r3.s64 = ctx.r11.s64 + 5520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD7B4"))) PPC_WEAK_FUNC(sub_83BFD7B4);
PPC_FUNC_IMPL(__imp__sub_83BFD7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD7B8"))) PPC_WEAK_FUNC(sub_83BFD7B8);
PPC_FUNC_IMPL(__imp__sub_83BFD7B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5528
	ctx.r3.s64 = ctx.r11.s64 + 5528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD7C4"))) PPC_WEAK_FUNC(sub_83BFD7C4);
PPC_FUNC_IMPL(__imp__sub_83BFD7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD7C8"))) PPC_WEAK_FUNC(sub_83BFD7C8);
PPC_FUNC_IMPL(__imp__sub_83BFD7C8) {
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
	// addi r3,r11,30040
	ctx.r3.s64 = ctx.r11.s64 + 30040;
	// bl 0x83523120
	ctx.lr = 0x83BFD7E0;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,5536
	ctx.r3.s64 = ctx.r10.s64 + 5536;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFD7EC;
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

__attribute__((alias("__imp__sub_83BFD7FC"))) PPC_WEAK_FUNC(sub_83BFD7FC);
PPC_FUNC_IMPL(__imp__sub_83BFD7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD800"))) PPC_WEAK_FUNC(sub_83BFD800);
PPC_FUNC_IMPL(__imp__sub_83BFD800) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,30056
	ctx.r7.s64 = ctx.r8.s64 + 30056;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,30056(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 30056);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,30056(r8)
	PPC_STORE_U32(ctx.r8.u32 + 30056, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFD828"))) PPC_WEAK_FUNC(sub_83BFD828);
PPC_FUNC_IMPL(__imp__sub_83BFD828) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,18200
	ctx.r6.s64 = ctx.r7.s64 + 18200;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,18128(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 18128);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,30056(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30056);
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
	// std r9,18200(r7)
	PPC_STORE_U64(ctx.r7.u32 + 18200, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFD870"))) PPC_WEAK_FUNC(sub_83BFD870);
PPC_FUNC_IMPL(__imp__sub_83BFD870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5552
	ctx.r3.s64 = ctx.r11.s64 + 5552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD87C"))) PPC_WEAK_FUNC(sub_83BFD87C);
PPC_FUNC_IMPL(__imp__sub_83BFD87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD880"))) PPC_WEAK_FUNC(sub_83BFD880);
PPC_FUNC_IMPL(__imp__sub_83BFD880) {
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
	// addi r3,r11,30064
	ctx.r3.s64 = ctx.r11.s64 + 30064;
	// bl 0x8259af80
	ctx.lr = 0x83BFD898;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,5568
	ctx.r3.s64 = ctx.r10.s64 + 5568;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFD8A4;
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

__attribute__((alias("__imp__sub_83BFD8B4"))) PPC_WEAK_FUNC(sub_83BFD8B4);
PPC_FUNC_IMPL(__imp__sub_83BFD8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD8B8"))) PPC_WEAK_FUNC(sub_83BFD8B8);
PPC_FUNC_IMPL(__imp__sub_83BFD8B8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,30044
	ctx.r11.s64 = ctx.r8.s64 + 30044;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,18176(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18176);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,5560
	ctx.r3.s64 = ctx.r6.s64 + 5560;
	// stw r10,30044(r8)
	PPC_STORE_U32(ctx.r8.u32 + 30044, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD8E8"))) PPC_WEAK_FUNC(sub_83BFD8E8);
PPC_FUNC_IMPL(__imp__sub_83BFD8E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5576
	ctx.r3.s64 = ctx.r11.s64 + 5576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD8F4"))) PPC_WEAK_FUNC(sub_83BFD8F4);
PPC_FUNC_IMPL(__imp__sub_83BFD8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD8F8"))) PPC_WEAK_FUNC(sub_83BFD8F8);
PPC_FUNC_IMPL(__imp__sub_83BFD8F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5584
	ctx.r3.s64 = ctx.r11.s64 + 5584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD904"))) PPC_WEAK_FUNC(sub_83BFD904);
PPC_FUNC_IMPL(__imp__sub_83BFD904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD908"))) PPC_WEAK_FUNC(sub_83BFD908);
PPC_FUNC_IMPL(__imp__sub_83BFD908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5592
	ctx.r3.s64 = ctx.r11.s64 + 5592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD914"))) PPC_WEAK_FUNC(sub_83BFD914);
PPC_FUNC_IMPL(__imp__sub_83BFD914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD918"))) PPC_WEAK_FUNC(sub_83BFD918);
PPC_FUNC_IMPL(__imp__sub_83BFD918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5600
	ctx.r3.s64 = ctx.r11.s64 + 5600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD924"))) PPC_WEAK_FUNC(sub_83BFD924);
PPC_FUNC_IMPL(__imp__sub_83BFD924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD928"))) PPC_WEAK_FUNC(sub_83BFD928);
PPC_FUNC_IMPL(__imp__sub_83BFD928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5608
	ctx.r3.s64 = ctx.r11.s64 + 5608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD934"))) PPC_WEAK_FUNC(sub_83BFD934);
PPC_FUNC_IMPL(__imp__sub_83BFD934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD938"))) PPC_WEAK_FUNC(sub_83BFD938);
PPC_FUNC_IMPL(__imp__sub_83BFD938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5616
	ctx.r3.s64 = ctx.r11.s64 + 5616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD944"))) PPC_WEAK_FUNC(sub_83BFD944);
PPC_FUNC_IMPL(__imp__sub_83BFD944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD948"))) PPC_WEAK_FUNC(sub_83BFD948);
PPC_FUNC_IMPL(__imp__sub_83BFD948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5624
	ctx.r3.s64 = ctx.r11.s64 + 5624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD954"))) PPC_WEAK_FUNC(sub_83BFD954);
PPC_FUNC_IMPL(__imp__sub_83BFD954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD958"))) PPC_WEAK_FUNC(sub_83BFD958);
PPC_FUNC_IMPL(__imp__sub_83BFD958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5632
	ctx.r3.s64 = ctx.r11.s64 + 5632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD964"))) PPC_WEAK_FUNC(sub_83BFD964);
PPC_FUNC_IMPL(__imp__sub_83BFD964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD968"))) PPC_WEAK_FUNC(sub_83BFD968);
PPC_FUNC_IMPL(__imp__sub_83BFD968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5640
	ctx.r3.s64 = ctx.r11.s64 + 5640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD974"))) PPC_WEAK_FUNC(sub_83BFD974);
PPC_FUNC_IMPL(__imp__sub_83BFD974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

