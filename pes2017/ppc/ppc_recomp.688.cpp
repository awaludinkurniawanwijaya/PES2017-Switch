#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BFD978"))) PPC_WEAK_FUNC(sub_83BFD978);
PPC_FUNC_IMPL(__imp__sub_83BFD978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5648
	ctx.r3.s64 = ctx.r11.s64 + 5648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD984"))) PPC_WEAK_FUNC(sub_83BFD984);
PPC_FUNC_IMPL(__imp__sub_83BFD984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD988"))) PPC_WEAK_FUNC(sub_83BFD988);
PPC_FUNC_IMPL(__imp__sub_83BFD988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5656
	ctx.r3.s64 = ctx.r11.s64 + 5656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD994"))) PPC_WEAK_FUNC(sub_83BFD994);
PPC_FUNC_IMPL(__imp__sub_83BFD994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD998"))) PPC_WEAK_FUNC(sub_83BFD998);
PPC_FUNC_IMPL(__imp__sub_83BFD998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5664
	ctx.r3.s64 = ctx.r11.s64 + 5664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFD9A4"))) PPC_WEAK_FUNC(sub_83BFD9A4);
PPC_FUNC_IMPL(__imp__sub_83BFD9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD9A8"))) PPC_WEAK_FUNC(sub_83BFD9A8);
PPC_FUNC_IMPL(__imp__sub_83BFD9A8) {
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
	// addi r3,r11,30408
	ctx.r3.s64 = ctx.r11.s64 + 30408;
	// bl 0x83523120
	ctx.lr = 0x83BFD9C0;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,5672
	ctx.r3.s64 = ctx.r10.s64 + 5672;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFD9CC;
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

__attribute__((alias("__imp__sub_83BFD9DC"))) PPC_WEAK_FUNC(sub_83BFD9DC);
PPC_FUNC_IMPL(__imp__sub_83BFD9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFD9E0"))) PPC_WEAK_FUNC(sub_83BFD9E0);
PPC_FUNC_IMPL(__imp__sub_83BFD9E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,30424
	ctx.r7.s64 = ctx.r8.s64 + 30424;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,30424(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 30424);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,30424(r8)
	PPC_STORE_U32(ctx.r8.u32 + 30424, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFDA08"))) PPC_WEAK_FUNC(sub_83BFDA08);
PPC_FUNC_IMPL(__imp__sub_83BFDA08) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,18348
	ctx.r6.s64 = ctx.r7.s64 + 18348;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,18276(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 18276);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,30424(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30424);
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
	// std r9,18348(r7)
	PPC_STORE_U64(ctx.r7.u32 + 18348, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFDA50"))) PPC_WEAK_FUNC(sub_83BFDA50);
PPC_FUNC_IMPL(__imp__sub_83BFDA50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5688
	ctx.r3.s64 = ctx.r11.s64 + 5688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFDA5C"))) PPC_WEAK_FUNC(sub_83BFDA5C);
PPC_FUNC_IMPL(__imp__sub_83BFDA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFDA60"))) PPC_WEAK_FUNC(sub_83BFDA60);
PPC_FUNC_IMPL(__imp__sub_83BFDA60) {
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
	// addi r3,r11,30432
	ctx.r3.s64 = ctx.r11.s64 + 30432;
	// bl 0x8259af80
	ctx.lr = 0x83BFDA78;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,5704
	ctx.r3.s64 = ctx.r10.s64 + 5704;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFDA84;
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

__attribute__((alias("__imp__sub_83BFDA94"))) PPC_WEAK_FUNC(sub_83BFDA94);
PPC_FUNC_IMPL(__imp__sub_83BFDA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFDA98"))) PPC_WEAK_FUNC(sub_83BFDA98);
PPC_FUNC_IMPL(__imp__sub_83BFDA98) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,30412
	ctx.r11.s64 = ctx.r8.s64 + 30412;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,18324(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18324);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,5696
	ctx.r3.s64 = ctx.r6.s64 + 5696;
	// stw r10,30412(r8)
	PPC_STORE_U32(ctx.r8.u32 + 30412, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFDAC8"))) PPC_WEAK_FUNC(sub_83BFDAC8);
PPC_FUNC_IMPL(__imp__sub_83BFDAC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5712
	ctx.r3.s64 = ctx.r11.s64 + 5712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFDAD4"))) PPC_WEAK_FUNC(sub_83BFDAD4);
PPC_FUNC_IMPL(__imp__sub_83BFDAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFDAD8"))) PPC_WEAK_FUNC(sub_83BFDAD8);
PPC_FUNC_IMPL(__imp__sub_83BFDAD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5720
	ctx.r3.s64 = ctx.r11.s64 + 5720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFDAE4"))) PPC_WEAK_FUNC(sub_83BFDAE4);
PPC_FUNC_IMPL(__imp__sub_83BFDAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFDAE8"))) PPC_WEAK_FUNC(sub_83BFDAE8);
PPC_FUNC_IMPL(__imp__sub_83BFDAE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5728
	ctx.r3.s64 = ctx.r11.s64 + 5728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFDAF4"))) PPC_WEAK_FUNC(sub_83BFDAF4);
PPC_FUNC_IMPL(__imp__sub_83BFDAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFDAF8"))) PPC_WEAK_FUNC(sub_83BFDAF8);
PPC_FUNC_IMPL(__imp__sub_83BFDAF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5736
	ctx.r3.s64 = ctx.r11.s64 + 5736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFDB04"))) PPC_WEAK_FUNC(sub_83BFDB04);
PPC_FUNC_IMPL(__imp__sub_83BFDB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFDB08"))) PPC_WEAK_FUNC(sub_83BFDB08);
PPC_FUNC_IMPL(__imp__sub_83BFDB08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5744
	ctx.r3.s64 = ctx.r11.s64 + 5744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFDB14"))) PPC_WEAK_FUNC(sub_83BFDB14);
PPC_FUNC_IMPL(__imp__sub_83BFDB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFDB18"))) PPC_WEAK_FUNC(sub_83BFDB18);
PPC_FUNC_IMPL(__imp__sub_83BFDB18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5752
	ctx.r3.s64 = ctx.r11.s64 + 5752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFDB24"))) PPC_WEAK_FUNC(sub_83BFDB24);
PPC_FUNC_IMPL(__imp__sub_83BFDB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFDB28"))) PPC_WEAK_FUNC(sub_83BFDB28);
PPC_FUNC_IMPL(__imp__sub_83BFDB28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5760
	ctx.r3.s64 = ctx.r11.s64 + 5760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFDB34"))) PPC_WEAK_FUNC(sub_83BFDB34);
PPC_FUNC_IMPL(__imp__sub_83BFDB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFDB38"))) PPC_WEAK_FUNC(sub_83BFDB38);
PPC_FUNC_IMPL(__imp__sub_83BFDB38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5768
	ctx.r3.s64 = ctx.r11.s64 + 5768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFDB44"))) PPC_WEAK_FUNC(sub_83BFDB44);
PPC_FUNC_IMPL(__imp__sub_83BFDB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFDB48"))) PPC_WEAK_FUNC(sub_83BFDB48);
PPC_FUNC_IMPL(__imp__sub_83BFDB48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5776
	ctx.r3.s64 = ctx.r11.s64 + 5776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFDB54"))) PPC_WEAK_FUNC(sub_83BFDB54);
PPC_FUNC_IMPL(__imp__sub_83BFDB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFDB58"))) PPC_WEAK_FUNC(sub_83BFDB58);
PPC_FUNC_IMPL(__imp__sub_83BFDB58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5784
	ctx.r3.s64 = ctx.r11.s64 + 5784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFDB64"))) PPC_WEAK_FUNC(sub_83BFDB64);
PPC_FUNC_IMPL(__imp__sub_83BFDB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFDB68"))) PPC_WEAK_FUNC(sub_83BFDB68);
PPC_FUNC_IMPL(__imp__sub_83BFDB68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5792
	ctx.r3.s64 = ctx.r11.s64 + 5792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFDB74"))) PPC_WEAK_FUNC(sub_83BFDB74);
PPC_FUNC_IMPL(__imp__sub_83BFDB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFDB78"))) PPC_WEAK_FUNC(sub_83BFDB78);
PPC_FUNC_IMPL(__imp__sub_83BFDB78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5800
	ctx.r3.s64 = ctx.r11.s64 + 5800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFDB84"))) PPC_WEAK_FUNC(sub_83BFDB84);
PPC_FUNC_IMPL(__imp__sub_83BFDB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFDB88"))) PPC_WEAK_FUNC(sub_83BFDB88);
PPC_FUNC_IMPL(__imp__sub_83BFDB88) {
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
	// addi r3,r11,30776
	ctx.r3.s64 = ctx.r11.s64 + 30776;
	// bl 0x83523120
	ctx.lr = 0x83BFDBA0;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,5808
	ctx.r3.s64 = ctx.r10.s64 + 5808;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFDBAC;
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

__attribute__((alias("__imp__sub_83BFDBBC"))) PPC_WEAK_FUNC(sub_83BFDBBC);
PPC_FUNC_IMPL(__imp__sub_83BFDBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFDBC0"))) PPC_WEAK_FUNC(sub_83BFDBC0);
PPC_FUNC_IMPL(__imp__sub_83BFDBC0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,30800
	ctx.r7.s64 = ctx.r8.s64 + 30800;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,30800(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 30800);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,30800(r8)
	PPC_STORE_U32(ctx.r8.u32 + 30800, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFDBE8"))) PPC_WEAK_FUNC(sub_83BFDBE8);
PPC_FUNC_IMPL(__imp__sub_83BFDBE8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,18576
	ctx.r6.s64 = ctx.r7.s64 + 18576;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,18504(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 18504);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,30800(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30800);
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
	// std r9,18576(r7)
	PPC_STORE_U64(ctx.r7.u32 + 18576, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFDC30"))) PPC_WEAK_FUNC(sub_83BFDC30);
PPC_FUNC_IMPL(__imp__sub_83BFDC30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5824
	ctx.r3.s64 = ctx.r11.s64 + 5824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFDC3C"))) PPC_WEAK_FUNC(sub_83BFDC3C);
PPC_FUNC_IMPL(__imp__sub_83BFDC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFDC40"))) PPC_WEAK_FUNC(sub_83BFDC40);
PPC_FUNC_IMPL(__imp__sub_83BFDC40) {
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
	// addi r3,r11,30808
	ctx.r3.s64 = ctx.r11.s64 + 30808;
	// bl 0x8259af80
	ctx.lr = 0x83BFDC58;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,5840
	ctx.r3.s64 = ctx.r10.s64 + 5840;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFDC64;
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

__attribute__((alias("__imp__sub_83BFDC74"))) PPC_WEAK_FUNC(sub_83BFDC74);
PPC_FUNC_IMPL(__imp__sub_83BFDC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFDC78"))) PPC_WEAK_FUNC(sub_83BFDC78);
PPC_FUNC_IMPL(__imp__sub_83BFDC78) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,30788
	ctx.r11.s64 = ctx.r8.s64 + 30788;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,18552(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18552);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,5832
	ctx.r3.s64 = ctx.r6.s64 + 5832;
	// stw r10,30788(r8)
	PPC_STORE_U32(ctx.r8.u32 + 30788, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFDCA8"))) PPC_WEAK_FUNC(sub_83BFDCA8);
PPC_FUNC_IMPL(__imp__sub_83BFDCA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lis r10,-31759
	ctx.r10.s64 = -2081357824;
	// lwz r11,18396(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18396);
	// stw r11,31152(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31152, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFDCBC"))) PPC_WEAK_FUNC(sub_83BFDCBC);
PPC_FUNC_IMPL(__imp__sub_83BFDCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFDCC0"))) PPC_WEAK_FUNC(sub_83BFDCC0);
PPC_FUNC_IMPL(__imp__sub_83BFDCC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lis r10,-31759
	ctx.r10.s64 = -2081357824;
	// lwz r11,18408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18408);
	// stw r11,30784(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30784, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFDCD4"))) PPC_WEAK_FUNC(sub_83BFDCD4);
PPC_FUNC_IMPL(__imp__sub_83BFDCD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFDCD8"))) PPC_WEAK_FUNC(sub_83BFDCD8);
PPC_FUNC_IMPL(__imp__sub_83BFDCD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lis r10,-31759
	ctx.r10.s64 = -2081357824;
	// lwz r11,18400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18400);
	// stw r11,31156(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31156, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFDCEC"))) PPC_WEAK_FUNC(sub_83BFDCEC);
PPC_FUNC_IMPL(__imp__sub_83BFDCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFDCF0"))) PPC_WEAK_FUNC(sub_83BFDCF0);
PPC_FUNC_IMPL(__imp__sub_83BFDCF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lis r10,-31759
	ctx.r10.s64 = -2081357824;
	// lwz r11,18396(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18396);
	// stw r11,30780(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30780, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFDD04"))) PPC_WEAK_FUNC(sub_83BFDD04);
PPC_FUNC_IMPL(__imp__sub_83BFDD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFDD08"))) PPC_WEAK_FUNC(sub_83BFDD08);
PPC_FUNC_IMPL(__imp__sub_83BFDD08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5848
	ctx.r3.s64 = ctx.r11.s64 + 5848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFDD14"))) PPC_WEAK_FUNC(sub_83BFDD14);
PPC_FUNC_IMPL(__imp__sub_83BFDD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFDD18"))) PPC_WEAK_FUNC(sub_83BFDD18);
PPC_FUNC_IMPL(__imp__sub_83BFDD18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5856
	ctx.r3.s64 = ctx.r11.s64 + 5856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFDD24"))) PPC_WEAK_FUNC(sub_83BFDD24);
PPC_FUNC_IMPL(__imp__sub_83BFDD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFDD28"))) PPC_WEAK_FUNC(sub_83BFDD28);
PPC_FUNC_IMPL(__imp__sub_83BFDD28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5864
	ctx.r3.s64 = ctx.r11.s64 + 5864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFDD34"))) PPC_WEAK_FUNC(sub_83BFDD34);
PPC_FUNC_IMPL(__imp__sub_83BFDD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFDD38"))) PPC_WEAK_FUNC(sub_83BFDD38);
PPC_FUNC_IMPL(__imp__sub_83BFDD38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5872
	ctx.r3.s64 = ctx.r11.s64 + 5872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFDD44"))) PPC_WEAK_FUNC(sub_83BFDD44);
PPC_FUNC_IMPL(__imp__sub_83BFDD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFDD48"))) PPC_WEAK_FUNC(sub_83BFDD48);
PPC_FUNC_IMPL(__imp__sub_83BFDD48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5880
	ctx.r3.s64 = ctx.r11.s64 + 5880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFDD54"))) PPC_WEAK_FUNC(sub_83BFDD54);
PPC_FUNC_IMPL(__imp__sub_83BFDD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFDD58"))) PPC_WEAK_FUNC(sub_83BFDD58);
PPC_FUNC_IMPL(__imp__sub_83BFDD58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5888
	ctx.r3.s64 = ctx.r11.s64 + 5888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFDD64"))) PPC_WEAK_FUNC(sub_83BFDD64);
PPC_FUNC_IMPL(__imp__sub_83BFDD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFDD68"))) PPC_WEAK_FUNC(sub_83BFDD68);
PPC_FUNC_IMPL(__imp__sub_83BFDD68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5896
	ctx.r3.s64 = ctx.r11.s64 + 5896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFDD74"))) PPC_WEAK_FUNC(sub_83BFDD74);
PPC_FUNC_IMPL(__imp__sub_83BFDD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFDD78"))) PPC_WEAK_FUNC(sub_83BFDD78);
PPC_FUNC_IMPL(__imp__sub_83BFDD78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5904
	ctx.r3.s64 = ctx.r11.s64 + 5904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFDD84"))) PPC_WEAK_FUNC(sub_83BFDD84);
PPC_FUNC_IMPL(__imp__sub_83BFDD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFDD88"))) PPC_WEAK_FUNC(sub_83BFDD88);
PPC_FUNC_IMPL(__imp__sub_83BFDD88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5912
	ctx.r3.s64 = ctx.r11.s64 + 5912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFDD94"))) PPC_WEAK_FUNC(sub_83BFDD94);
PPC_FUNC_IMPL(__imp__sub_83BFDD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFDD98"))) PPC_WEAK_FUNC(sub_83BFDD98);
PPC_FUNC_IMPL(__imp__sub_83BFDD98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5920
	ctx.r3.s64 = ctx.r11.s64 + 5920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFDDA4"))) PPC_WEAK_FUNC(sub_83BFDDA4);
PPC_FUNC_IMPL(__imp__sub_83BFDDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFDDA8"))) PPC_WEAK_FUNC(sub_83BFDDA8);
PPC_FUNC_IMPL(__imp__sub_83BFDDA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5928
	ctx.r3.s64 = ctx.r11.s64 + 5928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFDDB4"))) PPC_WEAK_FUNC(sub_83BFDDB4);
PPC_FUNC_IMPL(__imp__sub_83BFDDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFDDB8"))) PPC_WEAK_FUNC(sub_83BFDDB8);
PPC_FUNC_IMPL(__imp__sub_83BFDDB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5936
	ctx.r3.s64 = ctx.r11.s64 + 5936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFDDC4"))) PPC_WEAK_FUNC(sub_83BFDDC4);
PPC_FUNC_IMPL(__imp__sub_83BFDDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFDDC8"))) PPC_WEAK_FUNC(sub_83BFDDC8);
PPC_FUNC_IMPL(__imp__sub_83BFDDC8) {
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
	// addi r3,r11,31160
	ctx.r3.s64 = ctx.r11.s64 + 31160;
	// bl 0x83523120
	ctx.lr = 0x83BFDDE0;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,5944
	ctx.r3.s64 = ctx.r10.s64 + 5944;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFDDEC;
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

__attribute__((alias("__imp__sub_83BFDDFC"))) PPC_WEAK_FUNC(sub_83BFDDFC);
PPC_FUNC_IMPL(__imp__sub_83BFDDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFDE00"))) PPC_WEAK_FUNC(sub_83BFDE00);
PPC_FUNC_IMPL(__imp__sub_83BFDE00) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,31176
	ctx.r7.s64 = ctx.r8.s64 + 31176;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,31176(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31176);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,31176(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31176, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFDE28"))) PPC_WEAK_FUNC(sub_83BFDE28);
PPC_FUNC_IMPL(__imp__sub_83BFDE28) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,18768
	ctx.r6.s64 = ctx.r7.s64 + 18768;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,18696(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 18696);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,31176(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31176);
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
	// std r9,18768(r7)
	PPC_STORE_U64(ctx.r7.u32 + 18768, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFDE70"))) PPC_WEAK_FUNC(sub_83BFDE70);
PPC_FUNC_IMPL(__imp__sub_83BFDE70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5960
	ctx.r3.s64 = ctx.r11.s64 + 5960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFDE7C"))) PPC_WEAK_FUNC(sub_83BFDE7C);
PPC_FUNC_IMPL(__imp__sub_83BFDE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFDE80"))) PPC_WEAK_FUNC(sub_83BFDE80);
PPC_FUNC_IMPL(__imp__sub_83BFDE80) {
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
	// addi r3,r11,31184
	ctx.r3.s64 = ctx.r11.s64 + 31184;
	// bl 0x8259af80
	ctx.lr = 0x83BFDE98;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,5976
	ctx.r3.s64 = ctx.r10.s64 + 5976;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFDEA4;
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

__attribute__((alias("__imp__sub_83BFDEB4"))) PPC_WEAK_FUNC(sub_83BFDEB4);
PPC_FUNC_IMPL(__imp__sub_83BFDEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFDEB8"))) PPC_WEAK_FUNC(sub_83BFDEB8);
PPC_FUNC_IMPL(__imp__sub_83BFDEB8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,31164
	ctx.r11.s64 = ctx.r8.s64 + 31164;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,18744(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18744);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,5968
	ctx.r3.s64 = ctx.r6.s64 + 5968;
	// stw r10,31164(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31164, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFDEE8"))) PPC_WEAK_FUNC(sub_83BFDEE8);
PPC_FUNC_IMPL(__imp__sub_83BFDEE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5984
	ctx.r3.s64 = ctx.r11.s64 + 5984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFDEF4"))) PPC_WEAK_FUNC(sub_83BFDEF4);
PPC_FUNC_IMPL(__imp__sub_83BFDEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFDEF8"))) PPC_WEAK_FUNC(sub_83BFDEF8);
PPC_FUNC_IMPL(__imp__sub_83BFDEF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,5992
	ctx.r3.s64 = ctx.r11.s64 + 5992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFDF04"))) PPC_WEAK_FUNC(sub_83BFDF04);
PPC_FUNC_IMPL(__imp__sub_83BFDF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFDF08"))) PPC_WEAK_FUNC(sub_83BFDF08);
PPC_FUNC_IMPL(__imp__sub_83BFDF08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6000
	ctx.r3.s64 = ctx.r11.s64 + 6000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFDF14"))) PPC_WEAK_FUNC(sub_83BFDF14);
PPC_FUNC_IMPL(__imp__sub_83BFDF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFDF18"))) PPC_WEAK_FUNC(sub_83BFDF18);
PPC_FUNC_IMPL(__imp__sub_83BFDF18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6008
	ctx.r3.s64 = ctx.r11.s64 + 6008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFDF24"))) PPC_WEAK_FUNC(sub_83BFDF24);
PPC_FUNC_IMPL(__imp__sub_83BFDF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFDF28"))) PPC_WEAK_FUNC(sub_83BFDF28);
PPC_FUNC_IMPL(__imp__sub_83BFDF28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6016
	ctx.r3.s64 = ctx.r11.s64 + 6016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFDF34"))) PPC_WEAK_FUNC(sub_83BFDF34);
PPC_FUNC_IMPL(__imp__sub_83BFDF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFDF38"))) PPC_WEAK_FUNC(sub_83BFDF38);
PPC_FUNC_IMPL(__imp__sub_83BFDF38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6024
	ctx.r3.s64 = ctx.r11.s64 + 6024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFDF44"))) PPC_WEAK_FUNC(sub_83BFDF44);
PPC_FUNC_IMPL(__imp__sub_83BFDF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFDF48"))) PPC_WEAK_FUNC(sub_83BFDF48);
PPC_FUNC_IMPL(__imp__sub_83BFDF48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6032
	ctx.r3.s64 = ctx.r11.s64 + 6032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFDF54"))) PPC_WEAK_FUNC(sub_83BFDF54);
PPC_FUNC_IMPL(__imp__sub_83BFDF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFDF58"))) PPC_WEAK_FUNC(sub_83BFDF58);
PPC_FUNC_IMPL(__imp__sub_83BFDF58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6040
	ctx.r3.s64 = ctx.r11.s64 + 6040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFDF64"))) PPC_WEAK_FUNC(sub_83BFDF64);
PPC_FUNC_IMPL(__imp__sub_83BFDF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFDF68"))) PPC_WEAK_FUNC(sub_83BFDF68);
PPC_FUNC_IMPL(__imp__sub_83BFDF68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6048
	ctx.r3.s64 = ctx.r11.s64 + 6048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFDF74"))) PPC_WEAK_FUNC(sub_83BFDF74);
PPC_FUNC_IMPL(__imp__sub_83BFDF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFDF78"))) PPC_WEAK_FUNC(sub_83BFDF78);
PPC_FUNC_IMPL(__imp__sub_83BFDF78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6056
	ctx.r3.s64 = ctx.r11.s64 + 6056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFDF84"))) PPC_WEAK_FUNC(sub_83BFDF84);
PPC_FUNC_IMPL(__imp__sub_83BFDF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFDF88"))) PPC_WEAK_FUNC(sub_83BFDF88);
PPC_FUNC_IMPL(__imp__sub_83BFDF88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6064
	ctx.r3.s64 = ctx.r11.s64 + 6064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFDF94"))) PPC_WEAK_FUNC(sub_83BFDF94);
PPC_FUNC_IMPL(__imp__sub_83BFDF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFDF98"))) PPC_WEAK_FUNC(sub_83BFDF98);
PPC_FUNC_IMPL(__imp__sub_83BFDF98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6072
	ctx.r3.s64 = ctx.r11.s64 + 6072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFDFA4"))) PPC_WEAK_FUNC(sub_83BFDFA4);
PPC_FUNC_IMPL(__imp__sub_83BFDFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFDFA8"))) PPC_WEAK_FUNC(sub_83BFDFA8);
PPC_FUNC_IMPL(__imp__sub_83BFDFA8) {
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
	// addi r3,r11,31528
	ctx.r3.s64 = ctx.r11.s64 + 31528;
	// bl 0x83523120
	ctx.lr = 0x83BFDFC0;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,6080
	ctx.r3.s64 = ctx.r10.s64 + 6080;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFDFCC;
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

__attribute__((alias("__imp__sub_83BFDFDC"))) PPC_WEAK_FUNC(sub_83BFDFDC);
PPC_FUNC_IMPL(__imp__sub_83BFDFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFDFE0"))) PPC_WEAK_FUNC(sub_83BFDFE0);
PPC_FUNC_IMPL(__imp__sub_83BFDFE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,31544
	ctx.r7.s64 = ctx.r8.s64 + 31544;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,31544(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31544);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,31544(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31544, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFE008"))) PPC_WEAK_FUNC(sub_83BFE008);
PPC_FUNC_IMPL(__imp__sub_83BFE008) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,18904
	ctx.r6.s64 = ctx.r7.s64 + 18904;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,18832(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 18832);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,31544(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31544);
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
	// std r9,18904(r7)
	PPC_STORE_U64(ctx.r7.u32 + 18904, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFE050"))) PPC_WEAK_FUNC(sub_83BFE050);
PPC_FUNC_IMPL(__imp__sub_83BFE050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6096
	ctx.r3.s64 = ctx.r11.s64 + 6096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE05C"))) PPC_WEAK_FUNC(sub_83BFE05C);
PPC_FUNC_IMPL(__imp__sub_83BFE05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE060"))) PPC_WEAK_FUNC(sub_83BFE060);
PPC_FUNC_IMPL(__imp__sub_83BFE060) {
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
	// addi r3,r11,31552
	ctx.r3.s64 = ctx.r11.s64 + 31552;
	// bl 0x8259af80
	ctx.lr = 0x83BFE078;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,6112
	ctx.r3.s64 = ctx.r10.s64 + 6112;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFE084;
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

__attribute__((alias("__imp__sub_83BFE094"))) PPC_WEAK_FUNC(sub_83BFE094);
PPC_FUNC_IMPL(__imp__sub_83BFE094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE098"))) PPC_WEAK_FUNC(sub_83BFE098);
PPC_FUNC_IMPL(__imp__sub_83BFE098) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,31532
	ctx.r11.s64 = ctx.r8.s64 + 31532;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,18880(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18880);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,6104
	ctx.r3.s64 = ctx.r6.s64 + 6104;
	// stw r10,31532(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31532, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE0C8"))) PPC_WEAK_FUNC(sub_83BFE0C8);
PPC_FUNC_IMPL(__imp__sub_83BFE0C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6120
	ctx.r3.s64 = ctx.r11.s64 + 6120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE0D4"))) PPC_WEAK_FUNC(sub_83BFE0D4);
PPC_FUNC_IMPL(__imp__sub_83BFE0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE0D8"))) PPC_WEAK_FUNC(sub_83BFE0D8);
PPC_FUNC_IMPL(__imp__sub_83BFE0D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6128
	ctx.r3.s64 = ctx.r11.s64 + 6128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE0E4"))) PPC_WEAK_FUNC(sub_83BFE0E4);
PPC_FUNC_IMPL(__imp__sub_83BFE0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE0E8"))) PPC_WEAK_FUNC(sub_83BFE0E8);
PPC_FUNC_IMPL(__imp__sub_83BFE0E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6136
	ctx.r3.s64 = ctx.r11.s64 + 6136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE0F4"))) PPC_WEAK_FUNC(sub_83BFE0F4);
PPC_FUNC_IMPL(__imp__sub_83BFE0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE0F8"))) PPC_WEAK_FUNC(sub_83BFE0F8);
PPC_FUNC_IMPL(__imp__sub_83BFE0F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6144
	ctx.r3.s64 = ctx.r11.s64 + 6144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE104"))) PPC_WEAK_FUNC(sub_83BFE104);
PPC_FUNC_IMPL(__imp__sub_83BFE104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE108"))) PPC_WEAK_FUNC(sub_83BFE108);
PPC_FUNC_IMPL(__imp__sub_83BFE108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6152
	ctx.r3.s64 = ctx.r11.s64 + 6152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE114"))) PPC_WEAK_FUNC(sub_83BFE114);
PPC_FUNC_IMPL(__imp__sub_83BFE114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE118"))) PPC_WEAK_FUNC(sub_83BFE118);
PPC_FUNC_IMPL(__imp__sub_83BFE118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6160
	ctx.r3.s64 = ctx.r11.s64 + 6160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE124"))) PPC_WEAK_FUNC(sub_83BFE124);
PPC_FUNC_IMPL(__imp__sub_83BFE124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE128"))) PPC_WEAK_FUNC(sub_83BFE128);
PPC_FUNC_IMPL(__imp__sub_83BFE128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6168
	ctx.r3.s64 = ctx.r11.s64 + 6168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE134"))) PPC_WEAK_FUNC(sub_83BFE134);
PPC_FUNC_IMPL(__imp__sub_83BFE134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE138"))) PPC_WEAK_FUNC(sub_83BFE138);
PPC_FUNC_IMPL(__imp__sub_83BFE138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6176
	ctx.r3.s64 = ctx.r11.s64 + 6176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE144"))) PPC_WEAK_FUNC(sub_83BFE144);
PPC_FUNC_IMPL(__imp__sub_83BFE144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE148"))) PPC_WEAK_FUNC(sub_83BFE148);
PPC_FUNC_IMPL(__imp__sub_83BFE148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6184
	ctx.r3.s64 = ctx.r11.s64 + 6184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE154"))) PPC_WEAK_FUNC(sub_83BFE154);
PPC_FUNC_IMPL(__imp__sub_83BFE154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE158"))) PPC_WEAK_FUNC(sub_83BFE158);
PPC_FUNC_IMPL(__imp__sub_83BFE158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6192
	ctx.r3.s64 = ctx.r11.s64 + 6192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE164"))) PPC_WEAK_FUNC(sub_83BFE164);
PPC_FUNC_IMPL(__imp__sub_83BFE164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE168"))) PPC_WEAK_FUNC(sub_83BFE168);
PPC_FUNC_IMPL(__imp__sub_83BFE168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6200
	ctx.r3.s64 = ctx.r11.s64 + 6200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE174"))) PPC_WEAK_FUNC(sub_83BFE174);
PPC_FUNC_IMPL(__imp__sub_83BFE174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE178"))) PPC_WEAK_FUNC(sub_83BFE178);
PPC_FUNC_IMPL(__imp__sub_83BFE178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6208
	ctx.r3.s64 = ctx.r11.s64 + 6208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE184"))) PPC_WEAK_FUNC(sub_83BFE184);
PPC_FUNC_IMPL(__imp__sub_83BFE184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE188"))) PPC_WEAK_FUNC(sub_83BFE188);
PPC_FUNC_IMPL(__imp__sub_83BFE188) {
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
	// addi r3,r11,31896
	ctx.r3.s64 = ctx.r11.s64 + 31896;
	// bl 0x83523120
	ctx.lr = 0x83BFE1A0;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,6216
	ctx.r3.s64 = ctx.r10.s64 + 6216;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFE1AC;
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

__attribute__((alias("__imp__sub_83BFE1BC"))) PPC_WEAK_FUNC(sub_83BFE1BC);
PPC_FUNC_IMPL(__imp__sub_83BFE1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE1C0"))) PPC_WEAK_FUNC(sub_83BFE1C0);
PPC_FUNC_IMPL(__imp__sub_83BFE1C0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,31912
	ctx.r7.s64 = ctx.r8.s64 + 31912;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,31912(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31912);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,31912(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31912, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFE1E8"))) PPC_WEAK_FUNC(sub_83BFE1E8);
PPC_FUNC_IMPL(__imp__sub_83BFE1E8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,19040
	ctx.r6.s64 = ctx.r7.s64 + 19040;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,18968(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 18968);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,31912(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31912);
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
	// std r9,19040(r7)
	PPC_STORE_U64(ctx.r7.u32 + 19040, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFE230"))) PPC_WEAK_FUNC(sub_83BFE230);
PPC_FUNC_IMPL(__imp__sub_83BFE230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6232
	ctx.r3.s64 = ctx.r11.s64 + 6232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE23C"))) PPC_WEAK_FUNC(sub_83BFE23C);
PPC_FUNC_IMPL(__imp__sub_83BFE23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE240"))) PPC_WEAK_FUNC(sub_83BFE240);
PPC_FUNC_IMPL(__imp__sub_83BFE240) {
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
	// addi r3,r11,31920
	ctx.r3.s64 = ctx.r11.s64 + 31920;
	// bl 0x8259af80
	ctx.lr = 0x83BFE258;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,6248
	ctx.r3.s64 = ctx.r10.s64 + 6248;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFE264;
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

__attribute__((alias("__imp__sub_83BFE274"))) PPC_WEAK_FUNC(sub_83BFE274);
PPC_FUNC_IMPL(__imp__sub_83BFE274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE278"))) PPC_WEAK_FUNC(sub_83BFE278);
PPC_FUNC_IMPL(__imp__sub_83BFE278) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,31900
	ctx.r11.s64 = ctx.r8.s64 + 31900;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,19016(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19016);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,6240
	ctx.r3.s64 = ctx.r6.s64 + 6240;
	// stw r10,31900(r8)
	PPC_STORE_U32(ctx.r8.u32 + 31900, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE2A8"))) PPC_WEAK_FUNC(sub_83BFE2A8);
PPC_FUNC_IMPL(__imp__sub_83BFE2A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6256
	ctx.r3.s64 = ctx.r11.s64 + 6256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE2B4"))) PPC_WEAK_FUNC(sub_83BFE2B4);
PPC_FUNC_IMPL(__imp__sub_83BFE2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE2B8"))) PPC_WEAK_FUNC(sub_83BFE2B8);
PPC_FUNC_IMPL(__imp__sub_83BFE2B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6264
	ctx.r3.s64 = ctx.r11.s64 + 6264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE2C4"))) PPC_WEAK_FUNC(sub_83BFE2C4);
PPC_FUNC_IMPL(__imp__sub_83BFE2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE2C8"))) PPC_WEAK_FUNC(sub_83BFE2C8);
PPC_FUNC_IMPL(__imp__sub_83BFE2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6272
	ctx.r3.s64 = ctx.r11.s64 + 6272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE2D4"))) PPC_WEAK_FUNC(sub_83BFE2D4);
PPC_FUNC_IMPL(__imp__sub_83BFE2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE2D8"))) PPC_WEAK_FUNC(sub_83BFE2D8);
PPC_FUNC_IMPL(__imp__sub_83BFE2D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6280
	ctx.r3.s64 = ctx.r11.s64 + 6280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE2E4"))) PPC_WEAK_FUNC(sub_83BFE2E4);
PPC_FUNC_IMPL(__imp__sub_83BFE2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE2E8"))) PPC_WEAK_FUNC(sub_83BFE2E8);
PPC_FUNC_IMPL(__imp__sub_83BFE2E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6288
	ctx.r3.s64 = ctx.r11.s64 + 6288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE2F4"))) PPC_WEAK_FUNC(sub_83BFE2F4);
PPC_FUNC_IMPL(__imp__sub_83BFE2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE2F8"))) PPC_WEAK_FUNC(sub_83BFE2F8);
PPC_FUNC_IMPL(__imp__sub_83BFE2F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6296
	ctx.r3.s64 = ctx.r11.s64 + 6296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE304"))) PPC_WEAK_FUNC(sub_83BFE304);
PPC_FUNC_IMPL(__imp__sub_83BFE304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE308"))) PPC_WEAK_FUNC(sub_83BFE308);
PPC_FUNC_IMPL(__imp__sub_83BFE308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6304
	ctx.r3.s64 = ctx.r11.s64 + 6304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE314"))) PPC_WEAK_FUNC(sub_83BFE314);
PPC_FUNC_IMPL(__imp__sub_83BFE314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE318"))) PPC_WEAK_FUNC(sub_83BFE318);
PPC_FUNC_IMPL(__imp__sub_83BFE318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6312
	ctx.r3.s64 = ctx.r11.s64 + 6312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE324"))) PPC_WEAK_FUNC(sub_83BFE324);
PPC_FUNC_IMPL(__imp__sub_83BFE324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE328"))) PPC_WEAK_FUNC(sub_83BFE328);
PPC_FUNC_IMPL(__imp__sub_83BFE328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6320
	ctx.r3.s64 = ctx.r11.s64 + 6320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE334"))) PPC_WEAK_FUNC(sub_83BFE334);
PPC_FUNC_IMPL(__imp__sub_83BFE334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE338"))) PPC_WEAK_FUNC(sub_83BFE338);
PPC_FUNC_IMPL(__imp__sub_83BFE338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6328
	ctx.r3.s64 = ctx.r11.s64 + 6328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE344"))) PPC_WEAK_FUNC(sub_83BFE344);
PPC_FUNC_IMPL(__imp__sub_83BFE344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE348"))) PPC_WEAK_FUNC(sub_83BFE348);
PPC_FUNC_IMPL(__imp__sub_83BFE348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6336
	ctx.r3.s64 = ctx.r11.s64 + 6336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE354"))) PPC_WEAK_FUNC(sub_83BFE354);
PPC_FUNC_IMPL(__imp__sub_83BFE354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE358"))) PPC_WEAK_FUNC(sub_83BFE358);
PPC_FUNC_IMPL(__imp__sub_83BFE358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6344
	ctx.r3.s64 = ctx.r11.s64 + 6344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE364"))) PPC_WEAK_FUNC(sub_83BFE364);
PPC_FUNC_IMPL(__imp__sub_83BFE364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE368"))) PPC_WEAK_FUNC(sub_83BFE368);
PPC_FUNC_IMPL(__imp__sub_83BFE368) {
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
	// addi r3,r11,32264
	ctx.r3.s64 = ctx.r11.s64 + 32264;
	// bl 0x83523120
	ctx.lr = 0x83BFE380;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,6352
	ctx.r3.s64 = ctx.r10.s64 + 6352;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFE38C;
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

__attribute__((alias("__imp__sub_83BFE39C"))) PPC_WEAK_FUNC(sub_83BFE39C);
PPC_FUNC_IMPL(__imp__sub_83BFE39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE3A0"))) PPC_WEAK_FUNC(sub_83BFE3A0);
PPC_FUNC_IMPL(__imp__sub_83BFE3A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,32280
	ctx.r7.s64 = ctx.r8.s64 + 32280;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,32280(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32280);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,32280(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32280, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFE3C8"))) PPC_WEAK_FUNC(sub_83BFE3C8);
PPC_FUNC_IMPL(__imp__sub_83BFE3C8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,19176
	ctx.r6.s64 = ctx.r7.s64 + 19176;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,19104(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 19104);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,32280(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32280);
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
	// std r9,19176(r7)
	PPC_STORE_U64(ctx.r7.u32 + 19176, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFE410"))) PPC_WEAK_FUNC(sub_83BFE410);
PPC_FUNC_IMPL(__imp__sub_83BFE410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6368
	ctx.r3.s64 = ctx.r11.s64 + 6368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE41C"))) PPC_WEAK_FUNC(sub_83BFE41C);
PPC_FUNC_IMPL(__imp__sub_83BFE41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE420"))) PPC_WEAK_FUNC(sub_83BFE420);
PPC_FUNC_IMPL(__imp__sub_83BFE420) {
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
	// addi r3,r11,32288
	ctx.r3.s64 = ctx.r11.s64 + 32288;
	// bl 0x8259af80
	ctx.lr = 0x83BFE438;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,6384
	ctx.r3.s64 = ctx.r10.s64 + 6384;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFE444;
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

__attribute__((alias("__imp__sub_83BFE454"))) PPC_WEAK_FUNC(sub_83BFE454);
PPC_FUNC_IMPL(__imp__sub_83BFE454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE458"))) PPC_WEAK_FUNC(sub_83BFE458);
PPC_FUNC_IMPL(__imp__sub_83BFE458) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,32268
	ctx.r11.s64 = ctx.r8.s64 + 32268;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,19152(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19152);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,6376
	ctx.r3.s64 = ctx.r6.s64 + 6376;
	// stw r10,32268(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32268, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE488"))) PPC_WEAK_FUNC(sub_83BFE488);
PPC_FUNC_IMPL(__imp__sub_83BFE488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6392
	ctx.r3.s64 = ctx.r11.s64 + 6392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE494"))) PPC_WEAK_FUNC(sub_83BFE494);
PPC_FUNC_IMPL(__imp__sub_83BFE494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE498"))) PPC_WEAK_FUNC(sub_83BFE498);
PPC_FUNC_IMPL(__imp__sub_83BFE498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6400
	ctx.r3.s64 = ctx.r11.s64 + 6400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE4A4"))) PPC_WEAK_FUNC(sub_83BFE4A4);
PPC_FUNC_IMPL(__imp__sub_83BFE4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE4A8"))) PPC_WEAK_FUNC(sub_83BFE4A8);
PPC_FUNC_IMPL(__imp__sub_83BFE4A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6408
	ctx.r3.s64 = ctx.r11.s64 + 6408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE4B4"))) PPC_WEAK_FUNC(sub_83BFE4B4);
PPC_FUNC_IMPL(__imp__sub_83BFE4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE4B8"))) PPC_WEAK_FUNC(sub_83BFE4B8);
PPC_FUNC_IMPL(__imp__sub_83BFE4B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6416
	ctx.r3.s64 = ctx.r11.s64 + 6416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE4C4"))) PPC_WEAK_FUNC(sub_83BFE4C4);
PPC_FUNC_IMPL(__imp__sub_83BFE4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE4C8"))) PPC_WEAK_FUNC(sub_83BFE4C8);
PPC_FUNC_IMPL(__imp__sub_83BFE4C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6424
	ctx.r3.s64 = ctx.r11.s64 + 6424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE4D4"))) PPC_WEAK_FUNC(sub_83BFE4D4);
PPC_FUNC_IMPL(__imp__sub_83BFE4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE4D8"))) PPC_WEAK_FUNC(sub_83BFE4D8);
PPC_FUNC_IMPL(__imp__sub_83BFE4D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6432
	ctx.r3.s64 = ctx.r11.s64 + 6432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE4E4"))) PPC_WEAK_FUNC(sub_83BFE4E4);
PPC_FUNC_IMPL(__imp__sub_83BFE4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE4E8"))) PPC_WEAK_FUNC(sub_83BFE4E8);
PPC_FUNC_IMPL(__imp__sub_83BFE4E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6440
	ctx.r3.s64 = ctx.r11.s64 + 6440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE4F4"))) PPC_WEAK_FUNC(sub_83BFE4F4);
PPC_FUNC_IMPL(__imp__sub_83BFE4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE4F8"))) PPC_WEAK_FUNC(sub_83BFE4F8);
PPC_FUNC_IMPL(__imp__sub_83BFE4F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6448
	ctx.r3.s64 = ctx.r11.s64 + 6448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE504"))) PPC_WEAK_FUNC(sub_83BFE504);
PPC_FUNC_IMPL(__imp__sub_83BFE504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE508"))) PPC_WEAK_FUNC(sub_83BFE508);
PPC_FUNC_IMPL(__imp__sub_83BFE508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6456
	ctx.r3.s64 = ctx.r11.s64 + 6456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE514"))) PPC_WEAK_FUNC(sub_83BFE514);
PPC_FUNC_IMPL(__imp__sub_83BFE514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE518"))) PPC_WEAK_FUNC(sub_83BFE518);
PPC_FUNC_IMPL(__imp__sub_83BFE518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6464
	ctx.r3.s64 = ctx.r11.s64 + 6464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE524"))) PPC_WEAK_FUNC(sub_83BFE524);
PPC_FUNC_IMPL(__imp__sub_83BFE524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE528"))) PPC_WEAK_FUNC(sub_83BFE528);
PPC_FUNC_IMPL(__imp__sub_83BFE528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6472
	ctx.r3.s64 = ctx.r11.s64 + 6472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE534"))) PPC_WEAK_FUNC(sub_83BFE534);
PPC_FUNC_IMPL(__imp__sub_83BFE534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE538"))) PPC_WEAK_FUNC(sub_83BFE538);
PPC_FUNC_IMPL(__imp__sub_83BFE538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6480
	ctx.r3.s64 = ctx.r11.s64 + 6480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE544"))) PPC_WEAK_FUNC(sub_83BFE544);
PPC_FUNC_IMPL(__imp__sub_83BFE544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE548"))) PPC_WEAK_FUNC(sub_83BFE548);
PPC_FUNC_IMPL(__imp__sub_83BFE548) {
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
	// addi r3,r11,32632
	ctx.r3.s64 = ctx.r11.s64 + 32632;
	// bl 0x83523120
	ctx.lr = 0x83BFE560;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,6488
	ctx.r3.s64 = ctx.r10.s64 + 6488;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFE56C;
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

__attribute__((alias("__imp__sub_83BFE57C"))) PPC_WEAK_FUNC(sub_83BFE57C);
PPC_FUNC_IMPL(__imp__sub_83BFE57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE580"))) PPC_WEAK_FUNC(sub_83BFE580);
PPC_FUNC_IMPL(__imp__sub_83BFE580) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,32648
	ctx.r7.s64 = ctx.r8.s64 + 32648;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,32648(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32648);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,32648(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32648, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFE5A8"))) PPC_WEAK_FUNC(sub_83BFE5A8);
PPC_FUNC_IMPL(__imp__sub_83BFE5A8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,19312
	ctx.r6.s64 = ctx.r7.s64 + 19312;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,19240(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 19240);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,32648(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32648);
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
	// std r9,19312(r7)
	PPC_STORE_U64(ctx.r7.u32 + 19312, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFE5F0"))) PPC_WEAK_FUNC(sub_83BFE5F0);
PPC_FUNC_IMPL(__imp__sub_83BFE5F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6504
	ctx.r3.s64 = ctx.r11.s64 + 6504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE5FC"))) PPC_WEAK_FUNC(sub_83BFE5FC);
PPC_FUNC_IMPL(__imp__sub_83BFE5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE600"))) PPC_WEAK_FUNC(sub_83BFE600);
PPC_FUNC_IMPL(__imp__sub_83BFE600) {
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
	// addi r3,r11,32656
	ctx.r3.s64 = ctx.r11.s64 + 32656;
	// bl 0x8259af80
	ctx.lr = 0x83BFE618;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,6520
	ctx.r3.s64 = ctx.r10.s64 + 6520;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFE624;
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

__attribute__((alias("__imp__sub_83BFE634"))) PPC_WEAK_FUNC(sub_83BFE634);
PPC_FUNC_IMPL(__imp__sub_83BFE634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE638"))) PPC_WEAK_FUNC(sub_83BFE638);
PPC_FUNC_IMPL(__imp__sub_83BFE638) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,32636
	ctx.r11.s64 = ctx.r8.s64 + 32636;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,19288(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19288);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,6512
	ctx.r3.s64 = ctx.r6.s64 + 6512;
	// stw r10,32636(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32636, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE668"))) PPC_WEAK_FUNC(sub_83BFE668);
PPC_FUNC_IMPL(__imp__sub_83BFE668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6528
	ctx.r3.s64 = ctx.r11.s64 + 6528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE674"))) PPC_WEAK_FUNC(sub_83BFE674);
PPC_FUNC_IMPL(__imp__sub_83BFE674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE678"))) PPC_WEAK_FUNC(sub_83BFE678);
PPC_FUNC_IMPL(__imp__sub_83BFE678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6536
	ctx.r3.s64 = ctx.r11.s64 + 6536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE684"))) PPC_WEAK_FUNC(sub_83BFE684);
PPC_FUNC_IMPL(__imp__sub_83BFE684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE688"))) PPC_WEAK_FUNC(sub_83BFE688);
PPC_FUNC_IMPL(__imp__sub_83BFE688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6544
	ctx.r3.s64 = ctx.r11.s64 + 6544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE694"))) PPC_WEAK_FUNC(sub_83BFE694);
PPC_FUNC_IMPL(__imp__sub_83BFE694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE698"))) PPC_WEAK_FUNC(sub_83BFE698);
PPC_FUNC_IMPL(__imp__sub_83BFE698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6552
	ctx.r3.s64 = ctx.r11.s64 + 6552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE6A4"))) PPC_WEAK_FUNC(sub_83BFE6A4);
PPC_FUNC_IMPL(__imp__sub_83BFE6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE6A8"))) PPC_WEAK_FUNC(sub_83BFE6A8);
PPC_FUNC_IMPL(__imp__sub_83BFE6A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6560
	ctx.r3.s64 = ctx.r11.s64 + 6560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE6B4"))) PPC_WEAK_FUNC(sub_83BFE6B4);
PPC_FUNC_IMPL(__imp__sub_83BFE6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE6B8"))) PPC_WEAK_FUNC(sub_83BFE6B8);
PPC_FUNC_IMPL(__imp__sub_83BFE6B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6568
	ctx.r3.s64 = ctx.r11.s64 + 6568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE6C4"))) PPC_WEAK_FUNC(sub_83BFE6C4);
PPC_FUNC_IMPL(__imp__sub_83BFE6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE6C8"))) PPC_WEAK_FUNC(sub_83BFE6C8);
PPC_FUNC_IMPL(__imp__sub_83BFE6C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6576
	ctx.r3.s64 = ctx.r11.s64 + 6576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE6D4"))) PPC_WEAK_FUNC(sub_83BFE6D4);
PPC_FUNC_IMPL(__imp__sub_83BFE6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE6D8"))) PPC_WEAK_FUNC(sub_83BFE6D8);
PPC_FUNC_IMPL(__imp__sub_83BFE6D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6584
	ctx.r3.s64 = ctx.r11.s64 + 6584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE6E4"))) PPC_WEAK_FUNC(sub_83BFE6E4);
PPC_FUNC_IMPL(__imp__sub_83BFE6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE6E8"))) PPC_WEAK_FUNC(sub_83BFE6E8);
PPC_FUNC_IMPL(__imp__sub_83BFE6E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6592
	ctx.r3.s64 = ctx.r11.s64 + 6592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE6F4"))) PPC_WEAK_FUNC(sub_83BFE6F4);
PPC_FUNC_IMPL(__imp__sub_83BFE6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE6F8"))) PPC_WEAK_FUNC(sub_83BFE6F8);
PPC_FUNC_IMPL(__imp__sub_83BFE6F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6600
	ctx.r3.s64 = ctx.r11.s64 + 6600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE704"))) PPC_WEAK_FUNC(sub_83BFE704);
PPC_FUNC_IMPL(__imp__sub_83BFE704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE708"))) PPC_WEAK_FUNC(sub_83BFE708);
PPC_FUNC_IMPL(__imp__sub_83BFE708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6608
	ctx.r3.s64 = ctx.r11.s64 + 6608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE714"))) PPC_WEAK_FUNC(sub_83BFE714);
PPC_FUNC_IMPL(__imp__sub_83BFE714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE718"))) PPC_WEAK_FUNC(sub_83BFE718);
PPC_FUNC_IMPL(__imp__sub_83BFE718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6616
	ctx.r3.s64 = ctx.r11.s64 + 6616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE724"))) PPC_WEAK_FUNC(sub_83BFE724);
PPC_FUNC_IMPL(__imp__sub_83BFE724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE728"))) PPC_WEAK_FUNC(sub_83BFE728);
PPC_FUNC_IMPL(__imp__sub_83BFE728) {
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
	// addi r3,r11,-32536
	ctx.r3.s64 = ctx.r11.s64 + -32536;
	// bl 0x83523120
	ctx.lr = 0x83BFE740;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,6624
	ctx.r3.s64 = ctx.r10.s64 + 6624;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFE74C;
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

__attribute__((alias("__imp__sub_83BFE75C"))) PPC_WEAK_FUNC(sub_83BFE75C);
PPC_FUNC_IMPL(__imp__sub_83BFE75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE760"))) PPC_WEAK_FUNC(sub_83BFE760);
PPC_FUNC_IMPL(__imp__sub_83BFE760) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-32520
	ctx.r7.s64 = ctx.r8.s64 + -32520;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-32520(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32520);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-32520(r8)
	PPC_STORE_U32(ctx.r8.u32 + -32520, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFE788"))) PPC_WEAK_FUNC(sub_83BFE788);
PPC_FUNC_IMPL(__imp__sub_83BFE788) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,19440
	ctx.r6.s64 = ctx.r7.s64 + 19440;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,19368(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 19368);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-32520(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -32520);
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
	// std r9,19440(r7)
	PPC_STORE_U64(ctx.r7.u32 + 19440, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFE7D0"))) PPC_WEAK_FUNC(sub_83BFE7D0);
PPC_FUNC_IMPL(__imp__sub_83BFE7D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6640
	ctx.r3.s64 = ctx.r11.s64 + 6640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE7DC"))) PPC_WEAK_FUNC(sub_83BFE7DC);
PPC_FUNC_IMPL(__imp__sub_83BFE7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE7E0"))) PPC_WEAK_FUNC(sub_83BFE7E0);
PPC_FUNC_IMPL(__imp__sub_83BFE7E0) {
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
	// addi r3,r11,-32512
	ctx.r3.s64 = ctx.r11.s64 + -32512;
	// bl 0x8259af80
	ctx.lr = 0x83BFE7F8;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,6656
	ctx.r3.s64 = ctx.r10.s64 + 6656;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFE804;
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

__attribute__((alias("__imp__sub_83BFE814"))) PPC_WEAK_FUNC(sub_83BFE814);
PPC_FUNC_IMPL(__imp__sub_83BFE814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFE818"))) PPC_WEAK_FUNC(sub_83BFE818);
PPC_FUNC_IMPL(__imp__sub_83BFE818) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-32532
	ctx.r11.s64 = ctx.r8.s64 + -32532;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,19416(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19416);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,6648
	ctx.r3.s64 = ctx.r6.s64 + 6648;
	// stw r10,-32532(r8)
	PPC_STORE_U32(ctx.r8.u32 + -32532, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE848"))) PPC_WEAK_FUNC(sub_83BFE848);
PPC_FUNC_IMPL(__imp__sub_83BFE848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,6664
	ctx.r3.s64 = ctx.r11.s64 + 6664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFE854"))) PPC_WEAK_FUNC(sub_83BFE854);
PPC_FUNC_IMPL(__imp__sub_83BFE854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

