#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BFA704"))) PPC_WEAK_FUNC(sub_83BFA704);
PPC_FUNC_IMPL(__imp__sub_83BFA704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA708"))) PPC_WEAK_FUNC(sub_83BFA708);
PPC_FUNC_IMPL(__imp__sub_83BFA708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,488
	ctx.r3.s64 = ctx.r11.s64 + 488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA714"))) PPC_WEAK_FUNC(sub_83BFA714);
PPC_FUNC_IMPL(__imp__sub_83BFA714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA718"))) PPC_WEAK_FUNC(sub_83BFA718);
PPC_FUNC_IMPL(__imp__sub_83BFA718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,496
	ctx.r3.s64 = ctx.r11.s64 + 496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA724"))) PPC_WEAK_FUNC(sub_83BFA724);
PPC_FUNC_IMPL(__imp__sub_83BFA724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA728"))) PPC_WEAK_FUNC(sub_83BFA728);
PPC_FUNC_IMPL(__imp__sub_83BFA728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,504
	ctx.r3.s64 = ctx.r11.s64 + 504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA734"))) PPC_WEAK_FUNC(sub_83BFA734);
PPC_FUNC_IMPL(__imp__sub_83BFA734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA738"))) PPC_WEAK_FUNC(sub_83BFA738);
PPC_FUNC_IMPL(__imp__sub_83BFA738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,512
	ctx.r3.s64 = ctx.r11.s64 + 512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA744"))) PPC_WEAK_FUNC(sub_83BFA744);
PPC_FUNC_IMPL(__imp__sub_83BFA744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA748"))) PPC_WEAK_FUNC(sub_83BFA748);
PPC_FUNC_IMPL(__imp__sub_83BFA748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,520
	ctx.r3.s64 = ctx.r11.s64 + 520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA754"))) PPC_WEAK_FUNC(sub_83BFA754);
PPC_FUNC_IMPL(__imp__sub_83BFA754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA758"))) PPC_WEAK_FUNC(sub_83BFA758);
PPC_FUNC_IMPL(__imp__sub_83BFA758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,528
	ctx.r3.s64 = ctx.r11.s64 + 528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA764"))) PPC_WEAK_FUNC(sub_83BFA764);
PPC_FUNC_IMPL(__imp__sub_83BFA764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA768"))) PPC_WEAK_FUNC(sub_83BFA768);
PPC_FUNC_IMPL(__imp__sub_83BFA768) {
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
	// addi r3,r11,13600
	ctx.r3.s64 = ctx.r11.s64 + 13600;
	// bl 0x83523120
	ctx.lr = 0x83BFA780;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,536
	ctx.r3.s64 = ctx.r10.s64 + 536;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFA78C;
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

__attribute__((alias("__imp__sub_83BFA79C"))) PPC_WEAK_FUNC(sub_83BFA79C);
PPC_FUNC_IMPL(__imp__sub_83BFA79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA7A0"))) PPC_WEAK_FUNC(sub_83BFA7A0);
PPC_FUNC_IMPL(__imp__sub_83BFA7A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,13616
	ctx.r7.s64 = ctx.r8.s64 + 13616;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,13616(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13616);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,13616(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13616, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFA7C8"))) PPC_WEAK_FUNC(sub_83BFA7C8);
PPC_FUNC_IMPL(__imp__sub_83BFA7C8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,13116
	ctx.r6.s64 = ctx.r7.s64 + 13116;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,13044(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 13044);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,13616(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13616);
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
	// std r9,13116(r7)
	PPC_STORE_U64(ctx.r7.u32 + 13116, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFA810"))) PPC_WEAK_FUNC(sub_83BFA810);
PPC_FUNC_IMPL(__imp__sub_83BFA810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,552
	ctx.r3.s64 = ctx.r11.s64 + 552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA81C"))) PPC_WEAK_FUNC(sub_83BFA81C);
PPC_FUNC_IMPL(__imp__sub_83BFA81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA820"))) PPC_WEAK_FUNC(sub_83BFA820);
PPC_FUNC_IMPL(__imp__sub_83BFA820) {
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
	// addi r3,r11,13624
	ctx.r3.s64 = ctx.r11.s64 + 13624;
	// bl 0x8259af80
	ctx.lr = 0x83BFA838;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,568
	ctx.r3.s64 = ctx.r10.s64 + 568;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFA844;
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

__attribute__((alias("__imp__sub_83BFA854"))) PPC_WEAK_FUNC(sub_83BFA854);
PPC_FUNC_IMPL(__imp__sub_83BFA854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA858"))) PPC_WEAK_FUNC(sub_83BFA858);
PPC_FUNC_IMPL(__imp__sub_83BFA858) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,13604
	ctx.r11.s64 = ctx.r8.s64 + 13604;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,13092(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13092);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,560
	ctx.r3.s64 = ctx.r6.s64 + 560;
	// stw r10,13604(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13604, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA888"))) PPC_WEAK_FUNC(sub_83BFA888);
PPC_FUNC_IMPL(__imp__sub_83BFA888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,576
	ctx.r3.s64 = ctx.r11.s64 + 576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA894"))) PPC_WEAK_FUNC(sub_83BFA894);
PPC_FUNC_IMPL(__imp__sub_83BFA894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA898"))) PPC_WEAK_FUNC(sub_83BFA898);
PPC_FUNC_IMPL(__imp__sub_83BFA898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,584
	ctx.r3.s64 = ctx.r11.s64 + 584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA8A4"))) PPC_WEAK_FUNC(sub_83BFA8A4);
PPC_FUNC_IMPL(__imp__sub_83BFA8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA8A8"))) PPC_WEAK_FUNC(sub_83BFA8A8);
PPC_FUNC_IMPL(__imp__sub_83BFA8A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,592
	ctx.r3.s64 = ctx.r11.s64 + 592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA8B4"))) PPC_WEAK_FUNC(sub_83BFA8B4);
PPC_FUNC_IMPL(__imp__sub_83BFA8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA8B8"))) PPC_WEAK_FUNC(sub_83BFA8B8);
PPC_FUNC_IMPL(__imp__sub_83BFA8B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,600
	ctx.r3.s64 = ctx.r11.s64 + 600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA8C4"))) PPC_WEAK_FUNC(sub_83BFA8C4);
PPC_FUNC_IMPL(__imp__sub_83BFA8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA8C8"))) PPC_WEAK_FUNC(sub_83BFA8C8);
PPC_FUNC_IMPL(__imp__sub_83BFA8C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,608
	ctx.r3.s64 = ctx.r11.s64 + 608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA8D4"))) PPC_WEAK_FUNC(sub_83BFA8D4);
PPC_FUNC_IMPL(__imp__sub_83BFA8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA8D8"))) PPC_WEAK_FUNC(sub_83BFA8D8);
PPC_FUNC_IMPL(__imp__sub_83BFA8D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,616
	ctx.r3.s64 = ctx.r11.s64 + 616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA8E4"))) PPC_WEAK_FUNC(sub_83BFA8E4);
PPC_FUNC_IMPL(__imp__sub_83BFA8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA8E8"))) PPC_WEAK_FUNC(sub_83BFA8E8);
PPC_FUNC_IMPL(__imp__sub_83BFA8E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,624
	ctx.r3.s64 = ctx.r11.s64 + 624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA8F4"))) PPC_WEAK_FUNC(sub_83BFA8F4);
PPC_FUNC_IMPL(__imp__sub_83BFA8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA8F8"))) PPC_WEAK_FUNC(sub_83BFA8F8);
PPC_FUNC_IMPL(__imp__sub_83BFA8F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,632
	ctx.r3.s64 = ctx.r11.s64 + 632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA904"))) PPC_WEAK_FUNC(sub_83BFA904);
PPC_FUNC_IMPL(__imp__sub_83BFA904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA908"))) PPC_WEAK_FUNC(sub_83BFA908);
PPC_FUNC_IMPL(__imp__sub_83BFA908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,640
	ctx.r3.s64 = ctx.r11.s64 + 640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA914"))) PPC_WEAK_FUNC(sub_83BFA914);
PPC_FUNC_IMPL(__imp__sub_83BFA914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA918"))) PPC_WEAK_FUNC(sub_83BFA918);
PPC_FUNC_IMPL(__imp__sub_83BFA918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,648
	ctx.r3.s64 = ctx.r11.s64 + 648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA924"))) PPC_WEAK_FUNC(sub_83BFA924);
PPC_FUNC_IMPL(__imp__sub_83BFA924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA928"))) PPC_WEAK_FUNC(sub_83BFA928);
PPC_FUNC_IMPL(__imp__sub_83BFA928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,656
	ctx.r3.s64 = ctx.r11.s64 + 656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA934"))) PPC_WEAK_FUNC(sub_83BFA934);
PPC_FUNC_IMPL(__imp__sub_83BFA934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA938"))) PPC_WEAK_FUNC(sub_83BFA938);
PPC_FUNC_IMPL(__imp__sub_83BFA938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,664
	ctx.r3.s64 = ctx.r11.s64 + 664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA944"))) PPC_WEAK_FUNC(sub_83BFA944);
PPC_FUNC_IMPL(__imp__sub_83BFA944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA948"))) PPC_WEAK_FUNC(sub_83BFA948);
PPC_FUNC_IMPL(__imp__sub_83BFA948) {
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
	// addi r3,r11,13968
	ctx.r3.s64 = ctx.r11.s64 + 13968;
	// bl 0x83523120
	ctx.lr = 0x83BFA960;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,672
	ctx.r3.s64 = ctx.r10.s64 + 672;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFA96C;
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

__attribute__((alias("__imp__sub_83BFA97C"))) PPC_WEAK_FUNC(sub_83BFA97C);
PPC_FUNC_IMPL(__imp__sub_83BFA97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFA980"))) PPC_WEAK_FUNC(sub_83BFA980);
PPC_FUNC_IMPL(__imp__sub_83BFA980) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,13984
	ctx.r7.s64 = ctx.r8.s64 + 13984;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,13984(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13984);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,13984(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13984, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFA9A8"))) PPC_WEAK_FUNC(sub_83BFA9A8);
PPC_FUNC_IMPL(__imp__sub_83BFA9A8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,13244
	ctx.r6.s64 = ctx.r7.s64 + 13244;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,13172(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 13172);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,13984(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13984);
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
	// std r9,13244(r7)
	PPC_STORE_U64(ctx.r7.u32 + 13244, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFA9F0"))) PPC_WEAK_FUNC(sub_83BFA9F0);
PPC_FUNC_IMPL(__imp__sub_83BFA9F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,688
	ctx.r3.s64 = ctx.r11.s64 + 688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFA9FC"))) PPC_WEAK_FUNC(sub_83BFA9FC);
PPC_FUNC_IMPL(__imp__sub_83BFA9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFAA00"))) PPC_WEAK_FUNC(sub_83BFAA00);
PPC_FUNC_IMPL(__imp__sub_83BFAA00) {
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
	// addi r3,r11,13992
	ctx.r3.s64 = ctx.r11.s64 + 13992;
	// bl 0x8259af80
	ctx.lr = 0x83BFAA18;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,704
	ctx.r3.s64 = ctx.r10.s64 + 704;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFAA24;
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

__attribute__((alias("__imp__sub_83BFAA34"))) PPC_WEAK_FUNC(sub_83BFAA34);
PPC_FUNC_IMPL(__imp__sub_83BFAA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFAA38"))) PPC_WEAK_FUNC(sub_83BFAA38);
PPC_FUNC_IMPL(__imp__sub_83BFAA38) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,13972
	ctx.r11.s64 = ctx.r8.s64 + 13972;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,13220(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13220);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,696
	ctx.r3.s64 = ctx.r6.s64 + 696;
	// stw r10,13972(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13972, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFAA68"))) PPC_WEAK_FUNC(sub_83BFAA68);
PPC_FUNC_IMPL(__imp__sub_83BFAA68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,712
	ctx.r3.s64 = ctx.r11.s64 + 712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFAA74"))) PPC_WEAK_FUNC(sub_83BFAA74);
PPC_FUNC_IMPL(__imp__sub_83BFAA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFAA78"))) PPC_WEAK_FUNC(sub_83BFAA78);
PPC_FUNC_IMPL(__imp__sub_83BFAA78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,720
	ctx.r3.s64 = ctx.r11.s64 + 720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFAA84"))) PPC_WEAK_FUNC(sub_83BFAA84);
PPC_FUNC_IMPL(__imp__sub_83BFAA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFAA88"))) PPC_WEAK_FUNC(sub_83BFAA88);
PPC_FUNC_IMPL(__imp__sub_83BFAA88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,728
	ctx.r3.s64 = ctx.r11.s64 + 728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFAA94"))) PPC_WEAK_FUNC(sub_83BFAA94);
PPC_FUNC_IMPL(__imp__sub_83BFAA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFAA98"))) PPC_WEAK_FUNC(sub_83BFAA98);
PPC_FUNC_IMPL(__imp__sub_83BFAA98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,736
	ctx.r3.s64 = ctx.r11.s64 + 736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFAAA4"))) PPC_WEAK_FUNC(sub_83BFAAA4);
PPC_FUNC_IMPL(__imp__sub_83BFAAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFAAA8"))) PPC_WEAK_FUNC(sub_83BFAAA8);
PPC_FUNC_IMPL(__imp__sub_83BFAAA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,744
	ctx.r3.s64 = ctx.r11.s64 + 744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFAAB4"))) PPC_WEAK_FUNC(sub_83BFAAB4);
PPC_FUNC_IMPL(__imp__sub_83BFAAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFAAB8"))) PPC_WEAK_FUNC(sub_83BFAAB8);
PPC_FUNC_IMPL(__imp__sub_83BFAAB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,752
	ctx.r3.s64 = ctx.r11.s64 + 752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFAAC4"))) PPC_WEAK_FUNC(sub_83BFAAC4);
PPC_FUNC_IMPL(__imp__sub_83BFAAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFAAC8"))) PPC_WEAK_FUNC(sub_83BFAAC8);
PPC_FUNC_IMPL(__imp__sub_83BFAAC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,760
	ctx.r3.s64 = ctx.r11.s64 + 760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFAAD4"))) PPC_WEAK_FUNC(sub_83BFAAD4);
PPC_FUNC_IMPL(__imp__sub_83BFAAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFAAD8"))) PPC_WEAK_FUNC(sub_83BFAAD8);
PPC_FUNC_IMPL(__imp__sub_83BFAAD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,768
	ctx.r3.s64 = ctx.r11.s64 + 768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFAAE4"))) PPC_WEAK_FUNC(sub_83BFAAE4);
PPC_FUNC_IMPL(__imp__sub_83BFAAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFAAE8"))) PPC_WEAK_FUNC(sub_83BFAAE8);
PPC_FUNC_IMPL(__imp__sub_83BFAAE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,776
	ctx.r3.s64 = ctx.r11.s64 + 776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFAAF4"))) PPC_WEAK_FUNC(sub_83BFAAF4);
PPC_FUNC_IMPL(__imp__sub_83BFAAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFAAF8"))) PPC_WEAK_FUNC(sub_83BFAAF8);
PPC_FUNC_IMPL(__imp__sub_83BFAAF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,784
	ctx.r3.s64 = ctx.r11.s64 + 784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFAB04"))) PPC_WEAK_FUNC(sub_83BFAB04);
PPC_FUNC_IMPL(__imp__sub_83BFAB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFAB08"))) PPC_WEAK_FUNC(sub_83BFAB08);
PPC_FUNC_IMPL(__imp__sub_83BFAB08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,792
	ctx.r3.s64 = ctx.r11.s64 + 792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFAB14"))) PPC_WEAK_FUNC(sub_83BFAB14);
PPC_FUNC_IMPL(__imp__sub_83BFAB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFAB18"))) PPC_WEAK_FUNC(sub_83BFAB18);
PPC_FUNC_IMPL(__imp__sub_83BFAB18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,800
	ctx.r3.s64 = ctx.r11.s64 + 800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFAB24"))) PPC_WEAK_FUNC(sub_83BFAB24);
PPC_FUNC_IMPL(__imp__sub_83BFAB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFAB28"))) PPC_WEAK_FUNC(sub_83BFAB28);
PPC_FUNC_IMPL(__imp__sub_83BFAB28) {
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
	// addi r3,r11,14336
	ctx.r3.s64 = ctx.r11.s64 + 14336;
	// bl 0x83523120
	ctx.lr = 0x83BFAB40;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,808
	ctx.r3.s64 = ctx.r10.s64 + 808;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFAB4C;
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

__attribute__((alias("__imp__sub_83BFAB5C"))) PPC_WEAK_FUNC(sub_83BFAB5C);
PPC_FUNC_IMPL(__imp__sub_83BFAB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFAB60"))) PPC_WEAK_FUNC(sub_83BFAB60);
PPC_FUNC_IMPL(__imp__sub_83BFAB60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,14352
	ctx.r7.s64 = ctx.r8.s64 + 14352;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,14352(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 14352);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,14352(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14352, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFAB88"))) PPC_WEAK_FUNC(sub_83BFAB88);
PPC_FUNC_IMPL(__imp__sub_83BFAB88) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,13372
	ctx.r6.s64 = ctx.r7.s64 + 13372;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,13300(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 13300);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,14352(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14352);
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
	// std r9,13372(r7)
	PPC_STORE_U64(ctx.r7.u32 + 13372, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFABD0"))) PPC_WEAK_FUNC(sub_83BFABD0);
PPC_FUNC_IMPL(__imp__sub_83BFABD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,824
	ctx.r3.s64 = ctx.r11.s64 + 824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFABDC"))) PPC_WEAK_FUNC(sub_83BFABDC);
PPC_FUNC_IMPL(__imp__sub_83BFABDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFABE0"))) PPC_WEAK_FUNC(sub_83BFABE0);
PPC_FUNC_IMPL(__imp__sub_83BFABE0) {
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
	// addi r3,r11,14360
	ctx.r3.s64 = ctx.r11.s64 + 14360;
	// bl 0x8259af80
	ctx.lr = 0x83BFABF8;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,840
	ctx.r3.s64 = ctx.r10.s64 + 840;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFAC04;
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

__attribute__((alias("__imp__sub_83BFAC14"))) PPC_WEAK_FUNC(sub_83BFAC14);
PPC_FUNC_IMPL(__imp__sub_83BFAC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFAC18"))) PPC_WEAK_FUNC(sub_83BFAC18);
PPC_FUNC_IMPL(__imp__sub_83BFAC18) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,14340
	ctx.r11.s64 = ctx.r8.s64 + 14340;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,13348(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13348);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,832
	ctx.r3.s64 = ctx.r6.s64 + 832;
	// stw r10,14340(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14340, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFAC48"))) PPC_WEAK_FUNC(sub_83BFAC48);
PPC_FUNC_IMPL(__imp__sub_83BFAC48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,848
	ctx.r3.s64 = ctx.r11.s64 + 848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFAC54"))) PPC_WEAK_FUNC(sub_83BFAC54);
PPC_FUNC_IMPL(__imp__sub_83BFAC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFAC58"))) PPC_WEAK_FUNC(sub_83BFAC58);
PPC_FUNC_IMPL(__imp__sub_83BFAC58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,856
	ctx.r3.s64 = ctx.r11.s64 + 856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFAC64"))) PPC_WEAK_FUNC(sub_83BFAC64);
PPC_FUNC_IMPL(__imp__sub_83BFAC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFAC68"))) PPC_WEAK_FUNC(sub_83BFAC68);
PPC_FUNC_IMPL(__imp__sub_83BFAC68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,864
	ctx.r3.s64 = ctx.r11.s64 + 864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFAC74"))) PPC_WEAK_FUNC(sub_83BFAC74);
PPC_FUNC_IMPL(__imp__sub_83BFAC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFAC78"))) PPC_WEAK_FUNC(sub_83BFAC78);
PPC_FUNC_IMPL(__imp__sub_83BFAC78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,872
	ctx.r3.s64 = ctx.r11.s64 + 872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFAC84"))) PPC_WEAK_FUNC(sub_83BFAC84);
PPC_FUNC_IMPL(__imp__sub_83BFAC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFAC88"))) PPC_WEAK_FUNC(sub_83BFAC88);
PPC_FUNC_IMPL(__imp__sub_83BFAC88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,880
	ctx.r3.s64 = ctx.r11.s64 + 880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFAC94"))) PPC_WEAK_FUNC(sub_83BFAC94);
PPC_FUNC_IMPL(__imp__sub_83BFAC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFAC98"))) PPC_WEAK_FUNC(sub_83BFAC98);
PPC_FUNC_IMPL(__imp__sub_83BFAC98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,888
	ctx.r3.s64 = ctx.r11.s64 + 888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFACA4"))) PPC_WEAK_FUNC(sub_83BFACA4);
PPC_FUNC_IMPL(__imp__sub_83BFACA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFACA8"))) PPC_WEAK_FUNC(sub_83BFACA8);
PPC_FUNC_IMPL(__imp__sub_83BFACA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,896
	ctx.r3.s64 = ctx.r11.s64 + 896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFACB4"))) PPC_WEAK_FUNC(sub_83BFACB4);
PPC_FUNC_IMPL(__imp__sub_83BFACB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFACB8"))) PPC_WEAK_FUNC(sub_83BFACB8);
PPC_FUNC_IMPL(__imp__sub_83BFACB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,904
	ctx.r3.s64 = ctx.r11.s64 + 904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFACC4"))) PPC_WEAK_FUNC(sub_83BFACC4);
PPC_FUNC_IMPL(__imp__sub_83BFACC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFACC8"))) PPC_WEAK_FUNC(sub_83BFACC8);
PPC_FUNC_IMPL(__imp__sub_83BFACC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,912
	ctx.r3.s64 = ctx.r11.s64 + 912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFACD4"))) PPC_WEAK_FUNC(sub_83BFACD4);
PPC_FUNC_IMPL(__imp__sub_83BFACD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFACD8"))) PPC_WEAK_FUNC(sub_83BFACD8);
PPC_FUNC_IMPL(__imp__sub_83BFACD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,920
	ctx.r3.s64 = ctx.r11.s64 + 920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFACE4"))) PPC_WEAK_FUNC(sub_83BFACE4);
PPC_FUNC_IMPL(__imp__sub_83BFACE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFACE8"))) PPC_WEAK_FUNC(sub_83BFACE8);
PPC_FUNC_IMPL(__imp__sub_83BFACE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,928
	ctx.r3.s64 = ctx.r11.s64 + 928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFACF4"))) PPC_WEAK_FUNC(sub_83BFACF4);
PPC_FUNC_IMPL(__imp__sub_83BFACF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFACF8"))) PPC_WEAK_FUNC(sub_83BFACF8);
PPC_FUNC_IMPL(__imp__sub_83BFACF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,936
	ctx.r3.s64 = ctx.r11.s64 + 936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFAD04"))) PPC_WEAK_FUNC(sub_83BFAD04);
PPC_FUNC_IMPL(__imp__sub_83BFAD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFAD08"))) PPC_WEAK_FUNC(sub_83BFAD08);
PPC_FUNC_IMPL(__imp__sub_83BFAD08) {
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
	// addi r3,r11,15184
	ctx.r3.s64 = ctx.r11.s64 + 15184;
	// bl 0x83523120
	ctx.lr = 0x83BFAD20;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,944
	ctx.r3.s64 = ctx.r10.s64 + 944;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFAD2C;
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

__attribute__((alias("__imp__sub_83BFAD3C"))) PPC_WEAK_FUNC(sub_83BFAD3C);
PPC_FUNC_IMPL(__imp__sub_83BFAD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFAD40"))) PPC_WEAK_FUNC(sub_83BFAD40);
PPC_FUNC_IMPL(__imp__sub_83BFAD40) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,15200
	ctx.r7.s64 = ctx.r8.s64 + 15200;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,15200(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 15200);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,15200(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15200, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFAD68"))) PPC_WEAK_FUNC(sub_83BFAD68);
PPC_FUNC_IMPL(__imp__sub_83BFAD68) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,13500
	ctx.r6.s64 = ctx.r7.s64 + 13500;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,13428(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 13428);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,15200(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15200);
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
	// std r9,13500(r7)
	PPC_STORE_U64(ctx.r7.u32 + 13500, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFADB0"))) PPC_WEAK_FUNC(sub_83BFADB0);
PPC_FUNC_IMPL(__imp__sub_83BFADB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,960
	ctx.r3.s64 = ctx.r11.s64 + 960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFADBC"))) PPC_WEAK_FUNC(sub_83BFADBC);
PPC_FUNC_IMPL(__imp__sub_83BFADBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFADC0"))) PPC_WEAK_FUNC(sub_83BFADC0);
PPC_FUNC_IMPL(__imp__sub_83BFADC0) {
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
	// addi r3,r11,15208
	ctx.r3.s64 = ctx.r11.s64 + 15208;
	// bl 0x8259af80
	ctx.lr = 0x83BFADD8;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,976
	ctx.r3.s64 = ctx.r10.s64 + 976;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFADE4;
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

__attribute__((alias("__imp__sub_83BFADF4"))) PPC_WEAK_FUNC(sub_83BFADF4);
PPC_FUNC_IMPL(__imp__sub_83BFADF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFADF8"))) PPC_WEAK_FUNC(sub_83BFADF8);
PPC_FUNC_IMPL(__imp__sub_83BFADF8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,15188
	ctx.r11.s64 = ctx.r8.s64 + 15188;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,13476(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13476);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,968
	ctx.r3.s64 = ctx.r6.s64 + 968;
	// stw r10,15188(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15188, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFAE28"))) PPC_WEAK_FUNC(sub_83BFAE28);
PPC_FUNC_IMPL(__imp__sub_83BFAE28) {
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
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// addi r4,r11,8916
	ctx.r4.s64 = ctx.r11.s64 + 8916;
	// addi r3,r10,13524
	ctx.r3.s64 = ctx.r10.s64 + 13524;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83BFAE4C;
	sub_8259CC28(ctx, base);
	// lis r9,-31790
	ctx.r9.s64 = -2083389440;
	// addi r3,r9,984
	ctx.r3.s64 = ctx.r9.s64 + 984;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFAE58;
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

__attribute__((alias("__imp__sub_83BFAE68"))) PPC_WEAK_FUNC(sub_83BFAE68);
PPC_FUNC_IMPL(__imp__sub_83BFAE68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,1224
	ctx.r3.s64 = ctx.r11.s64 + 1224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFAE74"))) PPC_WEAK_FUNC(sub_83BFAE74);
PPC_FUNC_IMPL(__imp__sub_83BFAE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFAE78"))) PPC_WEAK_FUNC(sub_83BFAE78);
PPC_FUNC_IMPL(__imp__sub_83BFAE78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,1232
	ctx.r3.s64 = ctx.r11.s64 + 1232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFAE84"))) PPC_WEAK_FUNC(sub_83BFAE84);
PPC_FUNC_IMPL(__imp__sub_83BFAE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFAE88"))) PPC_WEAK_FUNC(sub_83BFAE88);
PPC_FUNC_IMPL(__imp__sub_83BFAE88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,1240
	ctx.r3.s64 = ctx.r11.s64 + 1240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFAE94"))) PPC_WEAK_FUNC(sub_83BFAE94);
PPC_FUNC_IMPL(__imp__sub_83BFAE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFAE98"))) PPC_WEAK_FUNC(sub_83BFAE98);
PPC_FUNC_IMPL(__imp__sub_83BFAE98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,1248
	ctx.r3.s64 = ctx.r11.s64 + 1248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFAEA4"))) PPC_WEAK_FUNC(sub_83BFAEA4);
PPC_FUNC_IMPL(__imp__sub_83BFAEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFAEA8"))) PPC_WEAK_FUNC(sub_83BFAEA8);
PPC_FUNC_IMPL(__imp__sub_83BFAEA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,1256
	ctx.r3.s64 = ctx.r11.s64 + 1256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFAEB4"))) PPC_WEAK_FUNC(sub_83BFAEB4);
PPC_FUNC_IMPL(__imp__sub_83BFAEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFAEB8"))) PPC_WEAK_FUNC(sub_83BFAEB8);
PPC_FUNC_IMPL(__imp__sub_83BFAEB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,1264
	ctx.r3.s64 = ctx.r11.s64 + 1264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFAEC4"))) PPC_WEAK_FUNC(sub_83BFAEC4);
PPC_FUNC_IMPL(__imp__sub_83BFAEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFAEC8"))) PPC_WEAK_FUNC(sub_83BFAEC8);
PPC_FUNC_IMPL(__imp__sub_83BFAEC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,1272
	ctx.r3.s64 = ctx.r11.s64 + 1272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFAED4"))) PPC_WEAK_FUNC(sub_83BFAED4);
PPC_FUNC_IMPL(__imp__sub_83BFAED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFAED8"))) PPC_WEAK_FUNC(sub_83BFAED8);
PPC_FUNC_IMPL(__imp__sub_83BFAED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,1280
	ctx.r3.s64 = ctx.r11.s64 + 1280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFAEE4"))) PPC_WEAK_FUNC(sub_83BFAEE4);
PPC_FUNC_IMPL(__imp__sub_83BFAEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFAEE8"))) PPC_WEAK_FUNC(sub_83BFAEE8);
PPC_FUNC_IMPL(__imp__sub_83BFAEE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,1288
	ctx.r3.s64 = ctx.r11.s64 + 1288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFAEF4"))) PPC_WEAK_FUNC(sub_83BFAEF4);
PPC_FUNC_IMPL(__imp__sub_83BFAEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFAEF8"))) PPC_WEAK_FUNC(sub_83BFAEF8);
PPC_FUNC_IMPL(__imp__sub_83BFAEF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,1296
	ctx.r3.s64 = ctx.r11.s64 + 1296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFAF04"))) PPC_WEAK_FUNC(sub_83BFAF04);
PPC_FUNC_IMPL(__imp__sub_83BFAF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFAF08"))) PPC_WEAK_FUNC(sub_83BFAF08);
PPC_FUNC_IMPL(__imp__sub_83BFAF08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,1304
	ctx.r3.s64 = ctx.r11.s64 + 1304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFAF14"))) PPC_WEAK_FUNC(sub_83BFAF14);
PPC_FUNC_IMPL(__imp__sub_83BFAF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFAF18"))) PPC_WEAK_FUNC(sub_83BFAF18);
PPC_FUNC_IMPL(__imp__sub_83BFAF18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,1312
	ctx.r3.s64 = ctx.r11.s64 + 1312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFAF24"))) PPC_WEAK_FUNC(sub_83BFAF24);
PPC_FUNC_IMPL(__imp__sub_83BFAF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFAF28"))) PPC_WEAK_FUNC(sub_83BFAF28);
PPC_FUNC_IMPL(__imp__sub_83BFAF28) {
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
	// addi r3,r11,15552
	ctx.r3.s64 = ctx.r11.s64 + 15552;
	// bl 0x83523120
	ctx.lr = 0x83BFAF40;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,1320
	ctx.r3.s64 = ctx.r10.s64 + 1320;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFAF4C;
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

__attribute__((alias("__imp__sub_83BFAF5C"))) PPC_WEAK_FUNC(sub_83BFAF5C);
PPC_FUNC_IMPL(__imp__sub_83BFAF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFAF60"))) PPC_WEAK_FUNC(sub_83BFAF60);
PPC_FUNC_IMPL(__imp__sub_83BFAF60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,15568
	ctx.r7.s64 = ctx.r8.s64 + 15568;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,15568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 15568);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,15568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15568, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFAF88"))) PPC_WEAK_FUNC(sub_83BFAF88);
PPC_FUNC_IMPL(__imp__sub_83BFAF88) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,13664
	ctx.r6.s64 = ctx.r7.s64 + 13664;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,13592(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 13592);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,15568(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15568);
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
	// std r9,13664(r7)
	PPC_STORE_U64(ctx.r7.u32 + 13664, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFAFD0"))) PPC_WEAK_FUNC(sub_83BFAFD0);
PPC_FUNC_IMPL(__imp__sub_83BFAFD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,1336
	ctx.r3.s64 = ctx.r11.s64 + 1336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFAFDC"))) PPC_WEAK_FUNC(sub_83BFAFDC);
PPC_FUNC_IMPL(__imp__sub_83BFAFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFAFE0"))) PPC_WEAK_FUNC(sub_83BFAFE0);
PPC_FUNC_IMPL(__imp__sub_83BFAFE0) {
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
	// addi r3,r11,15576
	ctx.r3.s64 = ctx.r11.s64 + 15576;
	// bl 0x8259af80
	ctx.lr = 0x83BFAFF8;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,1352
	ctx.r3.s64 = ctx.r10.s64 + 1352;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFB004;
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

__attribute__((alias("__imp__sub_83BFB014"))) PPC_WEAK_FUNC(sub_83BFB014);
PPC_FUNC_IMPL(__imp__sub_83BFB014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFB018"))) PPC_WEAK_FUNC(sub_83BFB018);
PPC_FUNC_IMPL(__imp__sub_83BFB018) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,15556
	ctx.r11.s64 = ctx.r8.s64 + 15556;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,13640(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13640);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,1344
	ctx.r3.s64 = ctx.r6.s64 + 1344;
	// stw r10,15556(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15556, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFB048"))) PPC_WEAK_FUNC(sub_83BFB048);
PPC_FUNC_IMPL(__imp__sub_83BFB048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,1360
	ctx.r3.s64 = ctx.r11.s64 + 1360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFB054"))) PPC_WEAK_FUNC(sub_83BFB054);
PPC_FUNC_IMPL(__imp__sub_83BFB054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFB058"))) PPC_WEAK_FUNC(sub_83BFB058);
PPC_FUNC_IMPL(__imp__sub_83BFB058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,1368
	ctx.r3.s64 = ctx.r11.s64 + 1368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFB064"))) PPC_WEAK_FUNC(sub_83BFB064);
PPC_FUNC_IMPL(__imp__sub_83BFB064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFB068"))) PPC_WEAK_FUNC(sub_83BFB068);
PPC_FUNC_IMPL(__imp__sub_83BFB068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,1376
	ctx.r3.s64 = ctx.r11.s64 + 1376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFB074"))) PPC_WEAK_FUNC(sub_83BFB074);
PPC_FUNC_IMPL(__imp__sub_83BFB074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFB078"))) PPC_WEAK_FUNC(sub_83BFB078);
PPC_FUNC_IMPL(__imp__sub_83BFB078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,1384
	ctx.r3.s64 = ctx.r11.s64 + 1384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFB084"))) PPC_WEAK_FUNC(sub_83BFB084);
PPC_FUNC_IMPL(__imp__sub_83BFB084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFB088"))) PPC_WEAK_FUNC(sub_83BFB088);
PPC_FUNC_IMPL(__imp__sub_83BFB088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,1392
	ctx.r3.s64 = ctx.r11.s64 + 1392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFB094"))) PPC_WEAK_FUNC(sub_83BFB094);
PPC_FUNC_IMPL(__imp__sub_83BFB094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFB098"))) PPC_WEAK_FUNC(sub_83BFB098);
PPC_FUNC_IMPL(__imp__sub_83BFB098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,1400
	ctx.r3.s64 = ctx.r11.s64 + 1400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFB0A4"))) PPC_WEAK_FUNC(sub_83BFB0A4);
PPC_FUNC_IMPL(__imp__sub_83BFB0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFB0A8"))) PPC_WEAK_FUNC(sub_83BFB0A8);
PPC_FUNC_IMPL(__imp__sub_83BFB0A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,1408
	ctx.r3.s64 = ctx.r11.s64 + 1408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFB0B4"))) PPC_WEAK_FUNC(sub_83BFB0B4);
PPC_FUNC_IMPL(__imp__sub_83BFB0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFB0B8"))) PPC_WEAK_FUNC(sub_83BFB0B8);
PPC_FUNC_IMPL(__imp__sub_83BFB0B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,1416
	ctx.r3.s64 = ctx.r11.s64 + 1416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFB0C4"))) PPC_WEAK_FUNC(sub_83BFB0C4);
PPC_FUNC_IMPL(__imp__sub_83BFB0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFB0C8"))) PPC_WEAK_FUNC(sub_83BFB0C8);
PPC_FUNC_IMPL(__imp__sub_83BFB0C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,1424
	ctx.r3.s64 = ctx.r11.s64 + 1424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFB0D4"))) PPC_WEAK_FUNC(sub_83BFB0D4);
PPC_FUNC_IMPL(__imp__sub_83BFB0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFB0D8"))) PPC_WEAK_FUNC(sub_83BFB0D8);
PPC_FUNC_IMPL(__imp__sub_83BFB0D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,1432
	ctx.r3.s64 = ctx.r11.s64 + 1432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFB0E4"))) PPC_WEAK_FUNC(sub_83BFB0E4);
PPC_FUNC_IMPL(__imp__sub_83BFB0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFB0E8"))) PPC_WEAK_FUNC(sub_83BFB0E8);
PPC_FUNC_IMPL(__imp__sub_83BFB0E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,1440
	ctx.r3.s64 = ctx.r11.s64 + 1440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFB0F4"))) PPC_WEAK_FUNC(sub_83BFB0F4);
PPC_FUNC_IMPL(__imp__sub_83BFB0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFB0F8"))) PPC_WEAK_FUNC(sub_83BFB0F8);
PPC_FUNC_IMPL(__imp__sub_83BFB0F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,1448
	ctx.r3.s64 = ctx.r11.s64 + 1448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFB104"))) PPC_WEAK_FUNC(sub_83BFB104);
PPC_FUNC_IMPL(__imp__sub_83BFB104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFB108"))) PPC_WEAK_FUNC(sub_83BFB108);
PPC_FUNC_IMPL(__imp__sub_83BFB108) {
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
	// addi r3,r11,15920
	ctx.r3.s64 = ctx.r11.s64 + 15920;
	// bl 0x83523120
	ctx.lr = 0x83BFB120;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,1456
	ctx.r3.s64 = ctx.r10.s64 + 1456;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFB12C;
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

__attribute__((alias("__imp__sub_83BFB13C"))) PPC_WEAK_FUNC(sub_83BFB13C);
PPC_FUNC_IMPL(__imp__sub_83BFB13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFB140"))) PPC_WEAK_FUNC(sub_83BFB140);
PPC_FUNC_IMPL(__imp__sub_83BFB140) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,15936
	ctx.r7.s64 = ctx.r8.s64 + 15936;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,15936(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 15936);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,15936(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15936, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFB168"))) PPC_WEAK_FUNC(sub_83BFB168);
PPC_FUNC_IMPL(__imp__sub_83BFB168) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,13792
	ctx.r6.s64 = ctx.r7.s64 + 13792;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,13720(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 13720);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,15936(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15936);
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
	// std r9,13792(r7)
	PPC_STORE_U64(ctx.r7.u32 + 13792, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFB1B0"))) PPC_WEAK_FUNC(sub_83BFB1B0);
PPC_FUNC_IMPL(__imp__sub_83BFB1B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,1472
	ctx.r3.s64 = ctx.r11.s64 + 1472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFB1BC"))) PPC_WEAK_FUNC(sub_83BFB1BC);
PPC_FUNC_IMPL(__imp__sub_83BFB1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFB1C0"))) PPC_WEAK_FUNC(sub_83BFB1C0);
PPC_FUNC_IMPL(__imp__sub_83BFB1C0) {
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
	// addi r3,r11,15944
	ctx.r3.s64 = ctx.r11.s64 + 15944;
	// bl 0x8259af80
	ctx.lr = 0x83BFB1D8;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,1488
	ctx.r3.s64 = ctx.r10.s64 + 1488;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFB1E4;
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

__attribute__((alias("__imp__sub_83BFB1F4"))) PPC_WEAK_FUNC(sub_83BFB1F4);
PPC_FUNC_IMPL(__imp__sub_83BFB1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFB1F8"))) PPC_WEAK_FUNC(sub_83BFB1F8);
PPC_FUNC_IMPL(__imp__sub_83BFB1F8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,15924
	ctx.r11.s64 = ctx.r8.s64 + 15924;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,13768(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13768);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,1480
	ctx.r3.s64 = ctx.r6.s64 + 1480;
	// stw r10,15924(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15924, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFB228"))) PPC_WEAK_FUNC(sub_83BFB228);
PPC_FUNC_IMPL(__imp__sub_83BFB228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,1496
	ctx.r3.s64 = ctx.r11.s64 + 1496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFB234"))) PPC_WEAK_FUNC(sub_83BFB234);
PPC_FUNC_IMPL(__imp__sub_83BFB234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFB238"))) PPC_WEAK_FUNC(sub_83BFB238);
PPC_FUNC_IMPL(__imp__sub_83BFB238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,1504
	ctx.r3.s64 = ctx.r11.s64 + 1504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFB244"))) PPC_WEAK_FUNC(sub_83BFB244);
PPC_FUNC_IMPL(__imp__sub_83BFB244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFB248"))) PPC_WEAK_FUNC(sub_83BFB248);
PPC_FUNC_IMPL(__imp__sub_83BFB248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,1512
	ctx.r3.s64 = ctx.r11.s64 + 1512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFB254"))) PPC_WEAK_FUNC(sub_83BFB254);
PPC_FUNC_IMPL(__imp__sub_83BFB254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFB258"))) PPC_WEAK_FUNC(sub_83BFB258);
PPC_FUNC_IMPL(__imp__sub_83BFB258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,1520
	ctx.r3.s64 = ctx.r11.s64 + 1520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFB264"))) PPC_WEAK_FUNC(sub_83BFB264);
PPC_FUNC_IMPL(__imp__sub_83BFB264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFB268"))) PPC_WEAK_FUNC(sub_83BFB268);
PPC_FUNC_IMPL(__imp__sub_83BFB268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,1528
	ctx.r3.s64 = ctx.r11.s64 + 1528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFB274"))) PPC_WEAK_FUNC(sub_83BFB274);
PPC_FUNC_IMPL(__imp__sub_83BFB274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFB278"))) PPC_WEAK_FUNC(sub_83BFB278);
PPC_FUNC_IMPL(__imp__sub_83BFB278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,1536
	ctx.r3.s64 = ctx.r11.s64 + 1536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFB284"))) PPC_WEAK_FUNC(sub_83BFB284);
PPC_FUNC_IMPL(__imp__sub_83BFB284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFB288"))) PPC_WEAK_FUNC(sub_83BFB288);
PPC_FUNC_IMPL(__imp__sub_83BFB288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,1544
	ctx.r3.s64 = ctx.r11.s64 + 1544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFB294"))) PPC_WEAK_FUNC(sub_83BFB294);
PPC_FUNC_IMPL(__imp__sub_83BFB294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFB298"))) PPC_WEAK_FUNC(sub_83BFB298);
PPC_FUNC_IMPL(__imp__sub_83BFB298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,1552
	ctx.r3.s64 = ctx.r11.s64 + 1552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFB2A4"))) PPC_WEAK_FUNC(sub_83BFB2A4);
PPC_FUNC_IMPL(__imp__sub_83BFB2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFB2A8"))) PPC_WEAK_FUNC(sub_83BFB2A8);
PPC_FUNC_IMPL(__imp__sub_83BFB2A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,1560
	ctx.r3.s64 = ctx.r11.s64 + 1560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFB2B4"))) PPC_WEAK_FUNC(sub_83BFB2B4);
PPC_FUNC_IMPL(__imp__sub_83BFB2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFB2B8"))) PPC_WEAK_FUNC(sub_83BFB2B8);
PPC_FUNC_IMPL(__imp__sub_83BFB2B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,1568
	ctx.r3.s64 = ctx.r11.s64 + 1568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFB2C4"))) PPC_WEAK_FUNC(sub_83BFB2C4);
PPC_FUNC_IMPL(__imp__sub_83BFB2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFB2C8"))) PPC_WEAK_FUNC(sub_83BFB2C8);
PPC_FUNC_IMPL(__imp__sub_83BFB2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,1576
	ctx.r3.s64 = ctx.r11.s64 + 1576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFB2D4"))) PPC_WEAK_FUNC(sub_83BFB2D4);
PPC_FUNC_IMPL(__imp__sub_83BFB2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFB2D8"))) PPC_WEAK_FUNC(sub_83BFB2D8);
PPC_FUNC_IMPL(__imp__sub_83BFB2D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,1584
	ctx.r3.s64 = ctx.r11.s64 + 1584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFB2E4"))) PPC_WEAK_FUNC(sub_83BFB2E4);
PPC_FUNC_IMPL(__imp__sub_83BFB2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFB2E8"))) PPC_WEAK_FUNC(sub_83BFB2E8);
PPC_FUNC_IMPL(__imp__sub_83BFB2E8) {
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
	// addi r3,r11,16288
	ctx.r3.s64 = ctx.r11.s64 + 16288;
	// bl 0x83523120
	ctx.lr = 0x83BFB300;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,1592
	ctx.r3.s64 = ctx.r10.s64 + 1592;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFB30C;
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

__attribute__((alias("__imp__sub_83BFB31C"))) PPC_WEAK_FUNC(sub_83BFB31C);
PPC_FUNC_IMPL(__imp__sub_83BFB31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFB320"))) PPC_WEAK_FUNC(sub_83BFB320);
PPC_FUNC_IMPL(__imp__sub_83BFB320) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,16304
	ctx.r7.s64 = ctx.r8.s64 + 16304;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,16304(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16304);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,16304(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16304, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFB348"))) PPC_WEAK_FUNC(sub_83BFB348);
PPC_FUNC_IMPL(__imp__sub_83BFB348) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,13928
	ctx.r6.s64 = ctx.r7.s64 + 13928;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,13856(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 13856);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,16304(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16304);
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
	// std r9,13928(r7)
	PPC_STORE_U64(ctx.r7.u32 + 13928, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFB390"))) PPC_WEAK_FUNC(sub_83BFB390);
PPC_FUNC_IMPL(__imp__sub_83BFB390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,1608
	ctx.r3.s64 = ctx.r11.s64 + 1608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFB39C"))) PPC_WEAK_FUNC(sub_83BFB39C);
PPC_FUNC_IMPL(__imp__sub_83BFB39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFB3A0"))) PPC_WEAK_FUNC(sub_83BFB3A0);
PPC_FUNC_IMPL(__imp__sub_83BFB3A0) {
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
	// addi r3,r11,16312
	ctx.r3.s64 = ctx.r11.s64 + 16312;
	// bl 0x8259af80
	ctx.lr = 0x83BFB3B8;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,1624
	ctx.r3.s64 = ctx.r10.s64 + 1624;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFB3C4;
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

__attribute__((alias("__imp__sub_83BFB3D4"))) PPC_WEAK_FUNC(sub_83BFB3D4);
PPC_FUNC_IMPL(__imp__sub_83BFB3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFB3D8"))) PPC_WEAK_FUNC(sub_83BFB3D8);
PPC_FUNC_IMPL(__imp__sub_83BFB3D8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,16292
	ctx.r11.s64 = ctx.r8.s64 + 16292;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,13904(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13904);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,1616
	ctx.r3.s64 = ctx.r6.s64 + 1616;
	// stw r10,16292(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16292, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFB408"))) PPC_WEAK_FUNC(sub_83BFB408);
PPC_FUNC_IMPL(__imp__sub_83BFB408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,1632
	ctx.r3.s64 = ctx.r11.s64 + 1632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFB414"))) PPC_WEAK_FUNC(sub_83BFB414);
PPC_FUNC_IMPL(__imp__sub_83BFB414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFB418"))) PPC_WEAK_FUNC(sub_83BFB418);
PPC_FUNC_IMPL(__imp__sub_83BFB418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,1640
	ctx.r3.s64 = ctx.r11.s64 + 1640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFB424"))) PPC_WEAK_FUNC(sub_83BFB424);
PPC_FUNC_IMPL(__imp__sub_83BFB424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFB428"))) PPC_WEAK_FUNC(sub_83BFB428);
PPC_FUNC_IMPL(__imp__sub_83BFB428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,1648
	ctx.r3.s64 = ctx.r11.s64 + 1648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFB434"))) PPC_WEAK_FUNC(sub_83BFB434);
PPC_FUNC_IMPL(__imp__sub_83BFB434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFB438"))) PPC_WEAK_FUNC(sub_83BFB438);
PPC_FUNC_IMPL(__imp__sub_83BFB438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,1656
	ctx.r3.s64 = ctx.r11.s64 + 1656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFB444"))) PPC_WEAK_FUNC(sub_83BFB444);
PPC_FUNC_IMPL(__imp__sub_83BFB444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFB448"))) PPC_WEAK_FUNC(sub_83BFB448);
PPC_FUNC_IMPL(__imp__sub_83BFB448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,1664
	ctx.r3.s64 = ctx.r11.s64 + 1664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFB454"))) PPC_WEAK_FUNC(sub_83BFB454);
PPC_FUNC_IMPL(__imp__sub_83BFB454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFB458"))) PPC_WEAK_FUNC(sub_83BFB458);
PPC_FUNC_IMPL(__imp__sub_83BFB458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,1672
	ctx.r3.s64 = ctx.r11.s64 + 1672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFB464"))) PPC_WEAK_FUNC(sub_83BFB464);
PPC_FUNC_IMPL(__imp__sub_83BFB464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFB468"))) PPC_WEAK_FUNC(sub_83BFB468);
PPC_FUNC_IMPL(__imp__sub_83BFB468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,1680
	ctx.r3.s64 = ctx.r11.s64 + 1680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFB474"))) PPC_WEAK_FUNC(sub_83BFB474);
PPC_FUNC_IMPL(__imp__sub_83BFB474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFB478"))) PPC_WEAK_FUNC(sub_83BFB478);
PPC_FUNC_IMPL(__imp__sub_83BFB478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,1688
	ctx.r3.s64 = ctx.r11.s64 + 1688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFB484"))) PPC_WEAK_FUNC(sub_83BFB484);
PPC_FUNC_IMPL(__imp__sub_83BFB484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFB488"))) PPC_WEAK_FUNC(sub_83BFB488);
PPC_FUNC_IMPL(__imp__sub_83BFB488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,1696
	ctx.r3.s64 = ctx.r11.s64 + 1696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFB494"))) PPC_WEAK_FUNC(sub_83BFB494);
PPC_FUNC_IMPL(__imp__sub_83BFB494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFB498"))) PPC_WEAK_FUNC(sub_83BFB498);
PPC_FUNC_IMPL(__imp__sub_83BFB498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,1704
	ctx.r3.s64 = ctx.r11.s64 + 1704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFB4A4"))) PPC_WEAK_FUNC(sub_83BFB4A4);
PPC_FUNC_IMPL(__imp__sub_83BFB4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFB4A8"))) PPC_WEAK_FUNC(sub_83BFB4A8);
PPC_FUNC_IMPL(__imp__sub_83BFB4A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,1712
	ctx.r3.s64 = ctx.r11.s64 + 1712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFB4B4"))) PPC_WEAK_FUNC(sub_83BFB4B4);
PPC_FUNC_IMPL(__imp__sub_83BFB4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFB4B8"))) PPC_WEAK_FUNC(sub_83BFB4B8);
PPC_FUNC_IMPL(__imp__sub_83BFB4B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,1720
	ctx.r3.s64 = ctx.r11.s64 + 1720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFB4C4"))) PPC_WEAK_FUNC(sub_83BFB4C4);
PPC_FUNC_IMPL(__imp__sub_83BFB4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFB4C8"))) PPC_WEAK_FUNC(sub_83BFB4C8);
PPC_FUNC_IMPL(__imp__sub_83BFB4C8) {
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
	// addi r3,r11,16656
	ctx.r3.s64 = ctx.r11.s64 + 16656;
	// bl 0x83523120
	ctx.lr = 0x83BFB4E0;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,1728
	ctx.r3.s64 = ctx.r10.s64 + 1728;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFB4EC;
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

__attribute__((alias("__imp__sub_83BFB4FC"))) PPC_WEAK_FUNC(sub_83BFB4FC);
PPC_FUNC_IMPL(__imp__sub_83BFB4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFB500"))) PPC_WEAK_FUNC(sub_83BFB500);
PPC_FUNC_IMPL(__imp__sub_83BFB500) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,16672
	ctx.r7.s64 = ctx.r8.s64 + 16672;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,16672(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16672);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,16672(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16672, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFB528"))) PPC_WEAK_FUNC(sub_83BFB528);
PPC_FUNC_IMPL(__imp__sub_83BFB528) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,14236
	ctx.r6.s64 = ctx.r7.s64 + 14236;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,14164(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 14164);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,16672(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16672);
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
	// std r9,14236(r7)
	PPC_STORE_U64(ctx.r7.u32 + 14236, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BFB570"))) PPC_WEAK_FUNC(sub_83BFB570);
PPC_FUNC_IMPL(__imp__sub_83BFB570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,1744
	ctx.r3.s64 = ctx.r11.s64 + 1744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFB57C"))) PPC_WEAK_FUNC(sub_83BFB57C);
PPC_FUNC_IMPL(__imp__sub_83BFB57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFB580"))) PPC_WEAK_FUNC(sub_83BFB580);
PPC_FUNC_IMPL(__imp__sub_83BFB580) {
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
	// addi r3,r11,16680
	ctx.r3.s64 = ctx.r11.s64 + 16680;
	// bl 0x8259af80
	ctx.lr = 0x83BFB598;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,1760
	ctx.r3.s64 = ctx.r10.s64 + 1760;
	// bl 0x831cdcc8
	ctx.lr = 0x83BFB5A4;
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

__attribute__((alias("__imp__sub_83BFB5B4"))) PPC_WEAK_FUNC(sub_83BFB5B4);
PPC_FUNC_IMPL(__imp__sub_83BFB5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BFB5B8"))) PPC_WEAK_FUNC(sub_83BFB5B8);
PPC_FUNC_IMPL(__imp__sub_83BFB5B8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,16660
	ctx.r11.s64 = ctx.r8.s64 + 16660;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,14212(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14212);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,1752
	ctx.r3.s64 = ctx.r6.s64 + 1752;
	// stw r10,16660(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16660, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFB5E8"))) PPC_WEAK_FUNC(sub_83BFB5E8);
PPC_FUNC_IMPL(__imp__sub_83BFB5E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,1768
	ctx.r3.s64 = ctx.r11.s64 + 1768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BFB5F4"))) PPC_WEAK_FUNC(sub_83BFB5F4);
PPC_FUNC_IMPL(__imp__sub_83BFB5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

