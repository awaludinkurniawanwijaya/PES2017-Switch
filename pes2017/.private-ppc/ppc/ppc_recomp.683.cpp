#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BF89D0"))) PPC_WEAK_FUNC(sub_83BF89D0);
PPC_FUNC_IMPL(__imp__sub_83BF89D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1728
	ctx.r3.s64 = ctx.r11.s64 + -1728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF89DC"))) PPC_WEAK_FUNC(sub_83BF89DC);
PPC_FUNC_IMPL(__imp__sub_83BF89DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF89E0"))) PPC_WEAK_FUNC(sub_83BF89E0);
PPC_FUNC_IMPL(__imp__sub_83BF89E0) {
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
	// addi r3,r11,7736
	ctx.r3.s64 = ctx.r11.s64 + 7736;
	// bl 0x8259af80
	ctx.lr = 0x83BF89F8;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-1712
	ctx.r3.s64 = ctx.r10.s64 + -1712;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF8A04;
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

__attribute__((alias("__imp__sub_83BF8A14"))) PPC_WEAK_FUNC(sub_83BF8A14);
PPC_FUNC_IMPL(__imp__sub_83BF8A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF8A18"))) PPC_WEAK_FUNC(sub_83BF8A18);
PPC_FUNC_IMPL(__imp__sub_83BF8A18) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,7716
	ctx.r11.s64 = ctx.r8.s64 + 7716;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,10272(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10272);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-1720
	ctx.r3.s64 = ctx.r6.s64 + -1720;
	// stw r10,7716(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7716, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF8A48"))) PPC_WEAK_FUNC(sub_83BF8A48);
PPC_FUNC_IMPL(__imp__sub_83BF8A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1704
	ctx.r3.s64 = ctx.r11.s64 + -1704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF8A54"))) PPC_WEAK_FUNC(sub_83BF8A54);
PPC_FUNC_IMPL(__imp__sub_83BF8A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF8A58"))) PPC_WEAK_FUNC(sub_83BF8A58);
PPC_FUNC_IMPL(__imp__sub_83BF8A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1696
	ctx.r3.s64 = ctx.r11.s64 + -1696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF8A64"))) PPC_WEAK_FUNC(sub_83BF8A64);
PPC_FUNC_IMPL(__imp__sub_83BF8A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF8A68"))) PPC_WEAK_FUNC(sub_83BF8A68);
PPC_FUNC_IMPL(__imp__sub_83BF8A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1688
	ctx.r3.s64 = ctx.r11.s64 + -1688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF8A74"))) PPC_WEAK_FUNC(sub_83BF8A74);
PPC_FUNC_IMPL(__imp__sub_83BF8A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF8A78"))) PPC_WEAK_FUNC(sub_83BF8A78);
PPC_FUNC_IMPL(__imp__sub_83BF8A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1680
	ctx.r3.s64 = ctx.r11.s64 + -1680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF8A84"))) PPC_WEAK_FUNC(sub_83BF8A84);
PPC_FUNC_IMPL(__imp__sub_83BF8A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF8A88"))) PPC_WEAK_FUNC(sub_83BF8A88);
PPC_FUNC_IMPL(__imp__sub_83BF8A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1672
	ctx.r3.s64 = ctx.r11.s64 + -1672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF8A94"))) PPC_WEAK_FUNC(sub_83BF8A94);
PPC_FUNC_IMPL(__imp__sub_83BF8A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF8A98"))) PPC_WEAK_FUNC(sub_83BF8A98);
PPC_FUNC_IMPL(__imp__sub_83BF8A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1664
	ctx.r3.s64 = ctx.r11.s64 + -1664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF8AA4"))) PPC_WEAK_FUNC(sub_83BF8AA4);
PPC_FUNC_IMPL(__imp__sub_83BF8AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF8AA8"))) PPC_WEAK_FUNC(sub_83BF8AA8);
PPC_FUNC_IMPL(__imp__sub_83BF8AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1656
	ctx.r3.s64 = ctx.r11.s64 + -1656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF8AB4"))) PPC_WEAK_FUNC(sub_83BF8AB4);
PPC_FUNC_IMPL(__imp__sub_83BF8AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF8AB8"))) PPC_WEAK_FUNC(sub_83BF8AB8);
PPC_FUNC_IMPL(__imp__sub_83BF8AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1648
	ctx.r3.s64 = ctx.r11.s64 + -1648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF8AC4"))) PPC_WEAK_FUNC(sub_83BF8AC4);
PPC_FUNC_IMPL(__imp__sub_83BF8AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF8AC8"))) PPC_WEAK_FUNC(sub_83BF8AC8);
PPC_FUNC_IMPL(__imp__sub_83BF8AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1640
	ctx.r3.s64 = ctx.r11.s64 + -1640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF8AD4"))) PPC_WEAK_FUNC(sub_83BF8AD4);
PPC_FUNC_IMPL(__imp__sub_83BF8AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF8AD8"))) PPC_WEAK_FUNC(sub_83BF8AD8);
PPC_FUNC_IMPL(__imp__sub_83BF8AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1632
	ctx.r3.s64 = ctx.r11.s64 + -1632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF8AE4"))) PPC_WEAK_FUNC(sub_83BF8AE4);
PPC_FUNC_IMPL(__imp__sub_83BF8AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF8AE8"))) PPC_WEAK_FUNC(sub_83BF8AE8);
PPC_FUNC_IMPL(__imp__sub_83BF8AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1624
	ctx.r3.s64 = ctx.r11.s64 + -1624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF8AF4"))) PPC_WEAK_FUNC(sub_83BF8AF4);
PPC_FUNC_IMPL(__imp__sub_83BF8AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF8AF8"))) PPC_WEAK_FUNC(sub_83BF8AF8);
PPC_FUNC_IMPL(__imp__sub_83BF8AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1616
	ctx.r3.s64 = ctx.r11.s64 + -1616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF8B04"))) PPC_WEAK_FUNC(sub_83BF8B04);
PPC_FUNC_IMPL(__imp__sub_83BF8B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF8B08"))) PPC_WEAK_FUNC(sub_83BF8B08);
PPC_FUNC_IMPL(__imp__sub_83BF8B08) {
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
	// addi r3,r11,8080
	ctx.r3.s64 = ctx.r11.s64 + 8080;
	// bl 0x83523120
	ctx.lr = 0x83BF8B20;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-1608
	ctx.r3.s64 = ctx.r10.s64 + -1608;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF8B2C;
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

__attribute__((alias("__imp__sub_83BF8B3C"))) PPC_WEAK_FUNC(sub_83BF8B3C);
PPC_FUNC_IMPL(__imp__sub_83BF8B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF8B40"))) PPC_WEAK_FUNC(sub_83BF8B40);
PPC_FUNC_IMPL(__imp__sub_83BF8B40) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,8096
	ctx.r7.s64 = ctx.r8.s64 + 8096;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,8096(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8096);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,8096(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8096, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF8B68"))) PPC_WEAK_FUNC(sub_83BF8B68);
PPC_FUNC_IMPL(__imp__sub_83BF8B68) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,10424
	ctx.r6.s64 = ctx.r7.s64 + 10424;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,10352(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 10352);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,8096(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8096);
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
	// std r9,10424(r7)
	PPC_STORE_U64(ctx.r7.u32 + 10424, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF8BB0"))) PPC_WEAK_FUNC(sub_83BF8BB0);
PPC_FUNC_IMPL(__imp__sub_83BF8BB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1592
	ctx.r3.s64 = ctx.r11.s64 + -1592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF8BBC"))) PPC_WEAK_FUNC(sub_83BF8BBC);
PPC_FUNC_IMPL(__imp__sub_83BF8BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF8BC0"))) PPC_WEAK_FUNC(sub_83BF8BC0);
PPC_FUNC_IMPL(__imp__sub_83BF8BC0) {
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
	// addi r3,r11,8104
	ctx.r3.s64 = ctx.r11.s64 + 8104;
	// bl 0x8259af80
	ctx.lr = 0x83BF8BD8;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-1576
	ctx.r3.s64 = ctx.r10.s64 + -1576;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF8BE4;
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

__attribute__((alias("__imp__sub_83BF8BF4"))) PPC_WEAK_FUNC(sub_83BF8BF4);
PPC_FUNC_IMPL(__imp__sub_83BF8BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF8BF8"))) PPC_WEAK_FUNC(sub_83BF8BF8);
PPC_FUNC_IMPL(__imp__sub_83BF8BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,8084
	ctx.r11.s64 = ctx.r8.s64 + 8084;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,10400(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10400);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-1584
	ctx.r3.s64 = ctx.r6.s64 + -1584;
	// stw r10,8084(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8084, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF8C28"))) PPC_WEAK_FUNC(sub_83BF8C28);
PPC_FUNC_IMPL(__imp__sub_83BF8C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1568
	ctx.r3.s64 = ctx.r11.s64 + -1568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF8C34"))) PPC_WEAK_FUNC(sub_83BF8C34);
PPC_FUNC_IMPL(__imp__sub_83BF8C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF8C38"))) PPC_WEAK_FUNC(sub_83BF8C38);
PPC_FUNC_IMPL(__imp__sub_83BF8C38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1560
	ctx.r3.s64 = ctx.r11.s64 + -1560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF8C44"))) PPC_WEAK_FUNC(sub_83BF8C44);
PPC_FUNC_IMPL(__imp__sub_83BF8C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF8C48"))) PPC_WEAK_FUNC(sub_83BF8C48);
PPC_FUNC_IMPL(__imp__sub_83BF8C48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1552
	ctx.r3.s64 = ctx.r11.s64 + -1552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF8C54"))) PPC_WEAK_FUNC(sub_83BF8C54);
PPC_FUNC_IMPL(__imp__sub_83BF8C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF8C58"))) PPC_WEAK_FUNC(sub_83BF8C58);
PPC_FUNC_IMPL(__imp__sub_83BF8C58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1544
	ctx.r3.s64 = ctx.r11.s64 + -1544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF8C64"))) PPC_WEAK_FUNC(sub_83BF8C64);
PPC_FUNC_IMPL(__imp__sub_83BF8C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF8C68"))) PPC_WEAK_FUNC(sub_83BF8C68);
PPC_FUNC_IMPL(__imp__sub_83BF8C68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1536
	ctx.r3.s64 = ctx.r11.s64 + -1536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF8C74"))) PPC_WEAK_FUNC(sub_83BF8C74);
PPC_FUNC_IMPL(__imp__sub_83BF8C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF8C78"))) PPC_WEAK_FUNC(sub_83BF8C78);
PPC_FUNC_IMPL(__imp__sub_83BF8C78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1528
	ctx.r3.s64 = ctx.r11.s64 + -1528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF8C84"))) PPC_WEAK_FUNC(sub_83BF8C84);
PPC_FUNC_IMPL(__imp__sub_83BF8C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF8C88"))) PPC_WEAK_FUNC(sub_83BF8C88);
PPC_FUNC_IMPL(__imp__sub_83BF8C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1520
	ctx.r3.s64 = ctx.r11.s64 + -1520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF8C94"))) PPC_WEAK_FUNC(sub_83BF8C94);
PPC_FUNC_IMPL(__imp__sub_83BF8C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF8C98"))) PPC_WEAK_FUNC(sub_83BF8C98);
PPC_FUNC_IMPL(__imp__sub_83BF8C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1512
	ctx.r3.s64 = ctx.r11.s64 + -1512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF8CA4"))) PPC_WEAK_FUNC(sub_83BF8CA4);
PPC_FUNC_IMPL(__imp__sub_83BF8CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF8CA8"))) PPC_WEAK_FUNC(sub_83BF8CA8);
PPC_FUNC_IMPL(__imp__sub_83BF8CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1504
	ctx.r3.s64 = ctx.r11.s64 + -1504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF8CB4"))) PPC_WEAK_FUNC(sub_83BF8CB4);
PPC_FUNC_IMPL(__imp__sub_83BF8CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF8CB8"))) PPC_WEAK_FUNC(sub_83BF8CB8);
PPC_FUNC_IMPL(__imp__sub_83BF8CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1496
	ctx.r3.s64 = ctx.r11.s64 + -1496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF8CC4"))) PPC_WEAK_FUNC(sub_83BF8CC4);
PPC_FUNC_IMPL(__imp__sub_83BF8CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF8CC8"))) PPC_WEAK_FUNC(sub_83BF8CC8);
PPC_FUNC_IMPL(__imp__sub_83BF8CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1488
	ctx.r3.s64 = ctx.r11.s64 + -1488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF8CD4"))) PPC_WEAK_FUNC(sub_83BF8CD4);
PPC_FUNC_IMPL(__imp__sub_83BF8CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF8CD8"))) PPC_WEAK_FUNC(sub_83BF8CD8);
PPC_FUNC_IMPL(__imp__sub_83BF8CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1480
	ctx.r3.s64 = ctx.r11.s64 + -1480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF8CE4"))) PPC_WEAK_FUNC(sub_83BF8CE4);
PPC_FUNC_IMPL(__imp__sub_83BF8CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF8CE8"))) PPC_WEAK_FUNC(sub_83BF8CE8);
PPC_FUNC_IMPL(__imp__sub_83BF8CE8) {
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
	// addi r3,r11,8448
	ctx.r3.s64 = ctx.r11.s64 + 8448;
	// bl 0x83523120
	ctx.lr = 0x83BF8D00;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-1472
	ctx.r3.s64 = ctx.r10.s64 + -1472;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF8D0C;
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

__attribute__((alias("__imp__sub_83BF8D1C"))) PPC_WEAK_FUNC(sub_83BF8D1C);
PPC_FUNC_IMPL(__imp__sub_83BF8D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF8D20"))) PPC_WEAK_FUNC(sub_83BF8D20);
PPC_FUNC_IMPL(__imp__sub_83BF8D20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,8464
	ctx.r7.s64 = ctx.r8.s64 + 8464;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,8464(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8464);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,8464(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8464, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF8D48"))) PPC_WEAK_FUNC(sub_83BF8D48);
PPC_FUNC_IMPL(__imp__sub_83BF8D48) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,10564
	ctx.r6.s64 = ctx.r7.s64 + 10564;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,10492(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 10492);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,8464(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8464);
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
	// std r9,10564(r7)
	PPC_STORE_U64(ctx.r7.u32 + 10564, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF8D90"))) PPC_WEAK_FUNC(sub_83BF8D90);
PPC_FUNC_IMPL(__imp__sub_83BF8D90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1456
	ctx.r3.s64 = ctx.r11.s64 + -1456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF8D9C"))) PPC_WEAK_FUNC(sub_83BF8D9C);
PPC_FUNC_IMPL(__imp__sub_83BF8D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF8DA0"))) PPC_WEAK_FUNC(sub_83BF8DA0);
PPC_FUNC_IMPL(__imp__sub_83BF8DA0) {
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
	// addi r3,r11,8472
	ctx.r3.s64 = ctx.r11.s64 + 8472;
	// bl 0x8259af80
	ctx.lr = 0x83BF8DB8;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-1440
	ctx.r3.s64 = ctx.r10.s64 + -1440;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF8DC4;
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

__attribute__((alias("__imp__sub_83BF8DD4"))) PPC_WEAK_FUNC(sub_83BF8DD4);
PPC_FUNC_IMPL(__imp__sub_83BF8DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF8DD8"))) PPC_WEAK_FUNC(sub_83BF8DD8);
PPC_FUNC_IMPL(__imp__sub_83BF8DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,8452
	ctx.r11.s64 = ctx.r8.s64 + 8452;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,10540(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10540);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-1448
	ctx.r3.s64 = ctx.r6.s64 + -1448;
	// stw r10,8452(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8452, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF8E08"))) PPC_WEAK_FUNC(sub_83BF8E08);
PPC_FUNC_IMPL(__imp__sub_83BF8E08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1432
	ctx.r3.s64 = ctx.r11.s64 + -1432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF8E14"))) PPC_WEAK_FUNC(sub_83BF8E14);
PPC_FUNC_IMPL(__imp__sub_83BF8E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF8E18"))) PPC_WEAK_FUNC(sub_83BF8E18);
PPC_FUNC_IMPL(__imp__sub_83BF8E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1424
	ctx.r3.s64 = ctx.r11.s64 + -1424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF8E24"))) PPC_WEAK_FUNC(sub_83BF8E24);
PPC_FUNC_IMPL(__imp__sub_83BF8E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF8E28"))) PPC_WEAK_FUNC(sub_83BF8E28);
PPC_FUNC_IMPL(__imp__sub_83BF8E28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1416
	ctx.r3.s64 = ctx.r11.s64 + -1416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF8E34"))) PPC_WEAK_FUNC(sub_83BF8E34);
PPC_FUNC_IMPL(__imp__sub_83BF8E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF8E38"))) PPC_WEAK_FUNC(sub_83BF8E38);
PPC_FUNC_IMPL(__imp__sub_83BF8E38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1408
	ctx.r3.s64 = ctx.r11.s64 + -1408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF8E44"))) PPC_WEAK_FUNC(sub_83BF8E44);
PPC_FUNC_IMPL(__imp__sub_83BF8E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF8E48"))) PPC_WEAK_FUNC(sub_83BF8E48);
PPC_FUNC_IMPL(__imp__sub_83BF8E48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1400
	ctx.r3.s64 = ctx.r11.s64 + -1400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF8E54"))) PPC_WEAK_FUNC(sub_83BF8E54);
PPC_FUNC_IMPL(__imp__sub_83BF8E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF8E58"))) PPC_WEAK_FUNC(sub_83BF8E58);
PPC_FUNC_IMPL(__imp__sub_83BF8E58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1392
	ctx.r3.s64 = ctx.r11.s64 + -1392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF8E64"))) PPC_WEAK_FUNC(sub_83BF8E64);
PPC_FUNC_IMPL(__imp__sub_83BF8E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF8E68"))) PPC_WEAK_FUNC(sub_83BF8E68);
PPC_FUNC_IMPL(__imp__sub_83BF8E68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1384
	ctx.r3.s64 = ctx.r11.s64 + -1384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF8E74"))) PPC_WEAK_FUNC(sub_83BF8E74);
PPC_FUNC_IMPL(__imp__sub_83BF8E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF8E78"))) PPC_WEAK_FUNC(sub_83BF8E78);
PPC_FUNC_IMPL(__imp__sub_83BF8E78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1376
	ctx.r3.s64 = ctx.r11.s64 + -1376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF8E84"))) PPC_WEAK_FUNC(sub_83BF8E84);
PPC_FUNC_IMPL(__imp__sub_83BF8E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF8E88"))) PPC_WEAK_FUNC(sub_83BF8E88);
PPC_FUNC_IMPL(__imp__sub_83BF8E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1368
	ctx.r3.s64 = ctx.r11.s64 + -1368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF8E94"))) PPC_WEAK_FUNC(sub_83BF8E94);
PPC_FUNC_IMPL(__imp__sub_83BF8E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF8E98"))) PPC_WEAK_FUNC(sub_83BF8E98);
PPC_FUNC_IMPL(__imp__sub_83BF8E98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1360
	ctx.r3.s64 = ctx.r11.s64 + -1360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF8EA4"))) PPC_WEAK_FUNC(sub_83BF8EA4);
PPC_FUNC_IMPL(__imp__sub_83BF8EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF8EA8"))) PPC_WEAK_FUNC(sub_83BF8EA8);
PPC_FUNC_IMPL(__imp__sub_83BF8EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1352
	ctx.r3.s64 = ctx.r11.s64 + -1352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF8EB4"))) PPC_WEAK_FUNC(sub_83BF8EB4);
PPC_FUNC_IMPL(__imp__sub_83BF8EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF8EB8"))) PPC_WEAK_FUNC(sub_83BF8EB8);
PPC_FUNC_IMPL(__imp__sub_83BF8EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1344
	ctx.r3.s64 = ctx.r11.s64 + -1344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF8EC4"))) PPC_WEAK_FUNC(sub_83BF8EC4);
PPC_FUNC_IMPL(__imp__sub_83BF8EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF8EC8"))) PPC_WEAK_FUNC(sub_83BF8EC8);
PPC_FUNC_IMPL(__imp__sub_83BF8EC8) {
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
	// addi r3,r11,8816
	ctx.r3.s64 = ctx.r11.s64 + 8816;
	// bl 0x83523120
	ctx.lr = 0x83BF8EE0;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-1336
	ctx.r3.s64 = ctx.r10.s64 + -1336;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF8EEC;
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

__attribute__((alias("__imp__sub_83BF8EFC"))) PPC_WEAK_FUNC(sub_83BF8EFC);
PPC_FUNC_IMPL(__imp__sub_83BF8EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF8F00"))) PPC_WEAK_FUNC(sub_83BF8F00);
PPC_FUNC_IMPL(__imp__sub_83BF8F00) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,8832
	ctx.r7.s64 = ctx.r8.s64 + 8832;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,8832(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8832);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,8832(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8832, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF8F28"))) PPC_WEAK_FUNC(sub_83BF8F28);
PPC_FUNC_IMPL(__imp__sub_83BF8F28) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,10700
	ctx.r6.s64 = ctx.r7.s64 + 10700;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,10628(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 10628);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,8832(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8832);
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
	// std r9,10700(r7)
	PPC_STORE_U64(ctx.r7.u32 + 10700, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF8F70"))) PPC_WEAK_FUNC(sub_83BF8F70);
PPC_FUNC_IMPL(__imp__sub_83BF8F70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1320
	ctx.r3.s64 = ctx.r11.s64 + -1320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF8F7C"))) PPC_WEAK_FUNC(sub_83BF8F7C);
PPC_FUNC_IMPL(__imp__sub_83BF8F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF8F80"))) PPC_WEAK_FUNC(sub_83BF8F80);
PPC_FUNC_IMPL(__imp__sub_83BF8F80) {
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
	// addi r3,r11,8840
	ctx.r3.s64 = ctx.r11.s64 + 8840;
	// bl 0x8259af80
	ctx.lr = 0x83BF8F98;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-1304
	ctx.r3.s64 = ctx.r10.s64 + -1304;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF8FA4;
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

__attribute__((alias("__imp__sub_83BF8FB4"))) PPC_WEAK_FUNC(sub_83BF8FB4);
PPC_FUNC_IMPL(__imp__sub_83BF8FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF8FB8"))) PPC_WEAK_FUNC(sub_83BF8FB8);
PPC_FUNC_IMPL(__imp__sub_83BF8FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,8820
	ctx.r11.s64 = ctx.r8.s64 + 8820;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,10676(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10676);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-1312
	ctx.r3.s64 = ctx.r6.s64 + -1312;
	// stw r10,8820(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8820, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF8FE8"))) PPC_WEAK_FUNC(sub_83BF8FE8);
PPC_FUNC_IMPL(__imp__sub_83BF8FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1296
	ctx.r3.s64 = ctx.r11.s64 + -1296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF8FF4"))) PPC_WEAK_FUNC(sub_83BF8FF4);
PPC_FUNC_IMPL(__imp__sub_83BF8FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF8FF8"))) PPC_WEAK_FUNC(sub_83BF8FF8);
PPC_FUNC_IMPL(__imp__sub_83BF8FF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1288
	ctx.r3.s64 = ctx.r11.s64 + -1288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9004"))) PPC_WEAK_FUNC(sub_83BF9004);
PPC_FUNC_IMPL(__imp__sub_83BF9004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9008"))) PPC_WEAK_FUNC(sub_83BF9008);
PPC_FUNC_IMPL(__imp__sub_83BF9008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1280
	ctx.r3.s64 = ctx.r11.s64 + -1280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9014"))) PPC_WEAK_FUNC(sub_83BF9014);
PPC_FUNC_IMPL(__imp__sub_83BF9014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9018"))) PPC_WEAK_FUNC(sub_83BF9018);
PPC_FUNC_IMPL(__imp__sub_83BF9018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1272
	ctx.r3.s64 = ctx.r11.s64 + -1272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9024"))) PPC_WEAK_FUNC(sub_83BF9024);
PPC_FUNC_IMPL(__imp__sub_83BF9024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9028"))) PPC_WEAK_FUNC(sub_83BF9028);
PPC_FUNC_IMPL(__imp__sub_83BF9028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1264
	ctx.r3.s64 = ctx.r11.s64 + -1264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9034"))) PPC_WEAK_FUNC(sub_83BF9034);
PPC_FUNC_IMPL(__imp__sub_83BF9034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9038"))) PPC_WEAK_FUNC(sub_83BF9038);
PPC_FUNC_IMPL(__imp__sub_83BF9038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1256
	ctx.r3.s64 = ctx.r11.s64 + -1256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9044"))) PPC_WEAK_FUNC(sub_83BF9044);
PPC_FUNC_IMPL(__imp__sub_83BF9044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9048"))) PPC_WEAK_FUNC(sub_83BF9048);
PPC_FUNC_IMPL(__imp__sub_83BF9048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1248
	ctx.r3.s64 = ctx.r11.s64 + -1248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9054"))) PPC_WEAK_FUNC(sub_83BF9054);
PPC_FUNC_IMPL(__imp__sub_83BF9054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9058"))) PPC_WEAK_FUNC(sub_83BF9058);
PPC_FUNC_IMPL(__imp__sub_83BF9058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1240
	ctx.r3.s64 = ctx.r11.s64 + -1240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9064"))) PPC_WEAK_FUNC(sub_83BF9064);
PPC_FUNC_IMPL(__imp__sub_83BF9064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9068"))) PPC_WEAK_FUNC(sub_83BF9068);
PPC_FUNC_IMPL(__imp__sub_83BF9068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1232
	ctx.r3.s64 = ctx.r11.s64 + -1232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9074"))) PPC_WEAK_FUNC(sub_83BF9074);
PPC_FUNC_IMPL(__imp__sub_83BF9074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9078"))) PPC_WEAK_FUNC(sub_83BF9078);
PPC_FUNC_IMPL(__imp__sub_83BF9078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1224
	ctx.r3.s64 = ctx.r11.s64 + -1224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9084"))) PPC_WEAK_FUNC(sub_83BF9084);
PPC_FUNC_IMPL(__imp__sub_83BF9084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9088"))) PPC_WEAK_FUNC(sub_83BF9088);
PPC_FUNC_IMPL(__imp__sub_83BF9088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1216
	ctx.r3.s64 = ctx.r11.s64 + -1216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9094"))) PPC_WEAK_FUNC(sub_83BF9094);
PPC_FUNC_IMPL(__imp__sub_83BF9094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9098"))) PPC_WEAK_FUNC(sub_83BF9098);
PPC_FUNC_IMPL(__imp__sub_83BF9098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1208
	ctx.r3.s64 = ctx.r11.s64 + -1208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF90A4"))) PPC_WEAK_FUNC(sub_83BF90A4);
PPC_FUNC_IMPL(__imp__sub_83BF90A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF90A8"))) PPC_WEAK_FUNC(sub_83BF90A8);
PPC_FUNC_IMPL(__imp__sub_83BF90A8) {
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
	// addi r3,r11,9184
	ctx.r3.s64 = ctx.r11.s64 + 9184;
	// bl 0x83523120
	ctx.lr = 0x83BF90C0;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-1200
	ctx.r3.s64 = ctx.r10.s64 + -1200;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF90CC;
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

__attribute__((alias("__imp__sub_83BF90DC"))) PPC_WEAK_FUNC(sub_83BF90DC);
PPC_FUNC_IMPL(__imp__sub_83BF90DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF90E0"))) PPC_WEAK_FUNC(sub_83BF90E0);
PPC_FUNC_IMPL(__imp__sub_83BF90E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,9200
	ctx.r7.s64 = ctx.r8.s64 + 9200;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,9200(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 9200);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,9200(r8)
	PPC_STORE_U32(ctx.r8.u32 + 9200, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF9108"))) PPC_WEAK_FUNC(sub_83BF9108);
PPC_FUNC_IMPL(__imp__sub_83BF9108) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,11136
	ctx.r6.s64 = ctx.r7.s64 + 11136;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,11064(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 11064);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,9200(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 9200);
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
	// std r9,11136(r7)
	PPC_STORE_U64(ctx.r7.u32 + 11136, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF9150"))) PPC_WEAK_FUNC(sub_83BF9150);
PPC_FUNC_IMPL(__imp__sub_83BF9150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1184
	ctx.r3.s64 = ctx.r11.s64 + -1184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF915C"))) PPC_WEAK_FUNC(sub_83BF915C);
PPC_FUNC_IMPL(__imp__sub_83BF915C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9160"))) PPC_WEAK_FUNC(sub_83BF9160);
PPC_FUNC_IMPL(__imp__sub_83BF9160) {
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
	// addi r3,r11,9208
	ctx.r3.s64 = ctx.r11.s64 + 9208;
	// bl 0x8259af80
	ctx.lr = 0x83BF9178;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-1168
	ctx.r3.s64 = ctx.r10.s64 + -1168;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF9184;
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

__attribute__((alias("__imp__sub_83BF9194"))) PPC_WEAK_FUNC(sub_83BF9194);
PPC_FUNC_IMPL(__imp__sub_83BF9194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9198"))) PPC_WEAK_FUNC(sub_83BF9198);
PPC_FUNC_IMPL(__imp__sub_83BF9198) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,9188
	ctx.r11.s64 = ctx.r8.s64 + 9188;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,11112(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11112);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-1176
	ctx.r3.s64 = ctx.r6.s64 + -1176;
	// stw r10,9188(r8)
	PPC_STORE_U32(ctx.r8.u32 + 9188, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF91C8"))) PPC_WEAK_FUNC(sub_83BF91C8);
PPC_FUNC_IMPL(__imp__sub_83BF91C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1160
	ctx.r3.s64 = ctx.r11.s64 + -1160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF91D4"))) PPC_WEAK_FUNC(sub_83BF91D4);
PPC_FUNC_IMPL(__imp__sub_83BF91D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF91D8"))) PPC_WEAK_FUNC(sub_83BF91D8);
PPC_FUNC_IMPL(__imp__sub_83BF91D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1152
	ctx.r3.s64 = ctx.r11.s64 + -1152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF91E4"))) PPC_WEAK_FUNC(sub_83BF91E4);
PPC_FUNC_IMPL(__imp__sub_83BF91E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF91E8"))) PPC_WEAK_FUNC(sub_83BF91E8);
PPC_FUNC_IMPL(__imp__sub_83BF91E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1144
	ctx.r3.s64 = ctx.r11.s64 + -1144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF91F4"))) PPC_WEAK_FUNC(sub_83BF91F4);
PPC_FUNC_IMPL(__imp__sub_83BF91F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF91F8"))) PPC_WEAK_FUNC(sub_83BF91F8);
PPC_FUNC_IMPL(__imp__sub_83BF91F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1136
	ctx.r3.s64 = ctx.r11.s64 + -1136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9204"))) PPC_WEAK_FUNC(sub_83BF9204);
PPC_FUNC_IMPL(__imp__sub_83BF9204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9208"))) PPC_WEAK_FUNC(sub_83BF9208);
PPC_FUNC_IMPL(__imp__sub_83BF9208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1128
	ctx.r3.s64 = ctx.r11.s64 + -1128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9214"))) PPC_WEAK_FUNC(sub_83BF9214);
PPC_FUNC_IMPL(__imp__sub_83BF9214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9218"))) PPC_WEAK_FUNC(sub_83BF9218);
PPC_FUNC_IMPL(__imp__sub_83BF9218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1120
	ctx.r3.s64 = ctx.r11.s64 + -1120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9224"))) PPC_WEAK_FUNC(sub_83BF9224);
PPC_FUNC_IMPL(__imp__sub_83BF9224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9228"))) PPC_WEAK_FUNC(sub_83BF9228);
PPC_FUNC_IMPL(__imp__sub_83BF9228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1112
	ctx.r3.s64 = ctx.r11.s64 + -1112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9234"))) PPC_WEAK_FUNC(sub_83BF9234);
PPC_FUNC_IMPL(__imp__sub_83BF9234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9238"))) PPC_WEAK_FUNC(sub_83BF9238);
PPC_FUNC_IMPL(__imp__sub_83BF9238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1104
	ctx.r3.s64 = ctx.r11.s64 + -1104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9244"))) PPC_WEAK_FUNC(sub_83BF9244);
PPC_FUNC_IMPL(__imp__sub_83BF9244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9248"))) PPC_WEAK_FUNC(sub_83BF9248);
PPC_FUNC_IMPL(__imp__sub_83BF9248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1096
	ctx.r3.s64 = ctx.r11.s64 + -1096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9254"))) PPC_WEAK_FUNC(sub_83BF9254);
PPC_FUNC_IMPL(__imp__sub_83BF9254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9258"))) PPC_WEAK_FUNC(sub_83BF9258);
PPC_FUNC_IMPL(__imp__sub_83BF9258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1088
	ctx.r3.s64 = ctx.r11.s64 + -1088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9264"))) PPC_WEAK_FUNC(sub_83BF9264);
PPC_FUNC_IMPL(__imp__sub_83BF9264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9268"))) PPC_WEAK_FUNC(sub_83BF9268);
PPC_FUNC_IMPL(__imp__sub_83BF9268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1080
	ctx.r3.s64 = ctx.r11.s64 + -1080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9274"))) PPC_WEAK_FUNC(sub_83BF9274);
PPC_FUNC_IMPL(__imp__sub_83BF9274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9278"))) PPC_WEAK_FUNC(sub_83BF9278);
PPC_FUNC_IMPL(__imp__sub_83BF9278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1072
	ctx.r3.s64 = ctx.r11.s64 + -1072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9284"))) PPC_WEAK_FUNC(sub_83BF9284);
PPC_FUNC_IMPL(__imp__sub_83BF9284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9288"))) PPC_WEAK_FUNC(sub_83BF9288);
PPC_FUNC_IMPL(__imp__sub_83BF9288) {
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
	// addi r3,r11,9552
	ctx.r3.s64 = ctx.r11.s64 + 9552;
	// bl 0x83523120
	ctx.lr = 0x83BF92A0;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-1064
	ctx.r3.s64 = ctx.r10.s64 + -1064;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF92AC;
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

__attribute__((alias("__imp__sub_83BF92BC"))) PPC_WEAK_FUNC(sub_83BF92BC);
PPC_FUNC_IMPL(__imp__sub_83BF92BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF92C0"))) PPC_WEAK_FUNC(sub_83BF92C0);
PPC_FUNC_IMPL(__imp__sub_83BF92C0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,9568
	ctx.r7.s64 = ctx.r8.s64 + 9568;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,9568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 9568);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,9568(r8)
	PPC_STORE_U32(ctx.r8.u32 + 9568, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF92E8"))) PPC_WEAK_FUNC(sub_83BF92E8);
PPC_FUNC_IMPL(__imp__sub_83BF92E8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,11264
	ctx.r6.s64 = ctx.r7.s64 + 11264;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,11192(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 11192);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,9568(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 9568);
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
	// std r9,11264(r7)
	PPC_STORE_U64(ctx.r7.u32 + 11264, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF9330"))) PPC_WEAK_FUNC(sub_83BF9330);
PPC_FUNC_IMPL(__imp__sub_83BF9330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1048
	ctx.r3.s64 = ctx.r11.s64 + -1048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF933C"))) PPC_WEAK_FUNC(sub_83BF933C);
PPC_FUNC_IMPL(__imp__sub_83BF933C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9340"))) PPC_WEAK_FUNC(sub_83BF9340);
PPC_FUNC_IMPL(__imp__sub_83BF9340) {
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
	// addi r3,r11,9576
	ctx.r3.s64 = ctx.r11.s64 + 9576;
	// bl 0x8259af80
	ctx.lr = 0x83BF9358;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-1032
	ctx.r3.s64 = ctx.r10.s64 + -1032;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF9364;
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

__attribute__((alias("__imp__sub_83BF9374"))) PPC_WEAK_FUNC(sub_83BF9374);
PPC_FUNC_IMPL(__imp__sub_83BF9374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9378"))) PPC_WEAK_FUNC(sub_83BF9378);
PPC_FUNC_IMPL(__imp__sub_83BF9378) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,9556
	ctx.r11.s64 = ctx.r8.s64 + 9556;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,11240(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11240);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-1040
	ctx.r3.s64 = ctx.r6.s64 + -1040;
	// stw r10,9556(r8)
	PPC_STORE_U32(ctx.r8.u32 + 9556, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF93A8"))) PPC_WEAK_FUNC(sub_83BF93A8);
PPC_FUNC_IMPL(__imp__sub_83BF93A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1024
	ctx.r3.s64 = ctx.r11.s64 + -1024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF93B4"))) PPC_WEAK_FUNC(sub_83BF93B4);
PPC_FUNC_IMPL(__imp__sub_83BF93B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF93B8"))) PPC_WEAK_FUNC(sub_83BF93B8);
PPC_FUNC_IMPL(__imp__sub_83BF93B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1016
	ctx.r3.s64 = ctx.r11.s64 + -1016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF93C4"))) PPC_WEAK_FUNC(sub_83BF93C4);
PPC_FUNC_IMPL(__imp__sub_83BF93C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF93C8"))) PPC_WEAK_FUNC(sub_83BF93C8);
PPC_FUNC_IMPL(__imp__sub_83BF93C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1008
	ctx.r3.s64 = ctx.r11.s64 + -1008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF93D4"))) PPC_WEAK_FUNC(sub_83BF93D4);
PPC_FUNC_IMPL(__imp__sub_83BF93D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF93D8"))) PPC_WEAK_FUNC(sub_83BF93D8);
PPC_FUNC_IMPL(__imp__sub_83BF93D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-1000
	ctx.r3.s64 = ctx.r11.s64 + -1000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF93E4"))) PPC_WEAK_FUNC(sub_83BF93E4);
PPC_FUNC_IMPL(__imp__sub_83BF93E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF93E8"))) PPC_WEAK_FUNC(sub_83BF93E8);
PPC_FUNC_IMPL(__imp__sub_83BF93E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-992
	ctx.r3.s64 = ctx.r11.s64 + -992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF93F4"))) PPC_WEAK_FUNC(sub_83BF93F4);
PPC_FUNC_IMPL(__imp__sub_83BF93F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF93F8"))) PPC_WEAK_FUNC(sub_83BF93F8);
PPC_FUNC_IMPL(__imp__sub_83BF93F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-984
	ctx.r3.s64 = ctx.r11.s64 + -984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9404"))) PPC_WEAK_FUNC(sub_83BF9404);
PPC_FUNC_IMPL(__imp__sub_83BF9404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9408"))) PPC_WEAK_FUNC(sub_83BF9408);
PPC_FUNC_IMPL(__imp__sub_83BF9408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-976
	ctx.r3.s64 = ctx.r11.s64 + -976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9414"))) PPC_WEAK_FUNC(sub_83BF9414);
PPC_FUNC_IMPL(__imp__sub_83BF9414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9418"))) PPC_WEAK_FUNC(sub_83BF9418);
PPC_FUNC_IMPL(__imp__sub_83BF9418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-968
	ctx.r3.s64 = ctx.r11.s64 + -968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9424"))) PPC_WEAK_FUNC(sub_83BF9424);
PPC_FUNC_IMPL(__imp__sub_83BF9424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9428"))) PPC_WEAK_FUNC(sub_83BF9428);
PPC_FUNC_IMPL(__imp__sub_83BF9428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-960
	ctx.r3.s64 = ctx.r11.s64 + -960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9434"))) PPC_WEAK_FUNC(sub_83BF9434);
PPC_FUNC_IMPL(__imp__sub_83BF9434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9438"))) PPC_WEAK_FUNC(sub_83BF9438);
PPC_FUNC_IMPL(__imp__sub_83BF9438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-952
	ctx.r3.s64 = ctx.r11.s64 + -952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9444"))) PPC_WEAK_FUNC(sub_83BF9444);
PPC_FUNC_IMPL(__imp__sub_83BF9444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9448"))) PPC_WEAK_FUNC(sub_83BF9448);
PPC_FUNC_IMPL(__imp__sub_83BF9448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-944
	ctx.r3.s64 = ctx.r11.s64 + -944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9454"))) PPC_WEAK_FUNC(sub_83BF9454);
PPC_FUNC_IMPL(__imp__sub_83BF9454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9458"))) PPC_WEAK_FUNC(sub_83BF9458);
PPC_FUNC_IMPL(__imp__sub_83BF9458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-936
	ctx.r3.s64 = ctx.r11.s64 + -936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9464"))) PPC_WEAK_FUNC(sub_83BF9464);
PPC_FUNC_IMPL(__imp__sub_83BF9464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9468"))) PPC_WEAK_FUNC(sub_83BF9468);
PPC_FUNC_IMPL(__imp__sub_83BF9468) {
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
	// addi r3,r11,9920
	ctx.r3.s64 = ctx.r11.s64 + 9920;
	// bl 0x83523120
	ctx.lr = 0x83BF9480;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-928
	ctx.r3.s64 = ctx.r10.s64 + -928;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF948C;
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

__attribute__((alias("__imp__sub_83BF949C"))) PPC_WEAK_FUNC(sub_83BF949C);
PPC_FUNC_IMPL(__imp__sub_83BF949C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF94A0"))) PPC_WEAK_FUNC(sub_83BF94A0);
PPC_FUNC_IMPL(__imp__sub_83BF94A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,9936
	ctx.r7.s64 = ctx.r8.s64 + 9936;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,9936(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 9936);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,9936(r8)
	PPC_STORE_U32(ctx.r8.u32 + 9936, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF94C8"))) PPC_WEAK_FUNC(sub_83BF94C8);
PPC_FUNC_IMPL(__imp__sub_83BF94C8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,11480
	ctx.r6.s64 = ctx.r7.s64 + 11480;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,11408(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 11408);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,9936(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 9936);
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
	// std r9,11480(r7)
	PPC_STORE_U64(ctx.r7.u32 + 11480, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF9510"))) PPC_WEAK_FUNC(sub_83BF9510);
PPC_FUNC_IMPL(__imp__sub_83BF9510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-912
	ctx.r3.s64 = ctx.r11.s64 + -912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF951C"))) PPC_WEAK_FUNC(sub_83BF951C);
PPC_FUNC_IMPL(__imp__sub_83BF951C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9520"))) PPC_WEAK_FUNC(sub_83BF9520);
PPC_FUNC_IMPL(__imp__sub_83BF9520) {
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
	// addi r3,r11,9944
	ctx.r3.s64 = ctx.r11.s64 + 9944;
	// bl 0x8259af80
	ctx.lr = 0x83BF9538;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-896
	ctx.r3.s64 = ctx.r10.s64 + -896;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF9544;
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

__attribute__((alias("__imp__sub_83BF9554"))) PPC_WEAK_FUNC(sub_83BF9554);
PPC_FUNC_IMPL(__imp__sub_83BF9554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9558"))) PPC_WEAK_FUNC(sub_83BF9558);
PPC_FUNC_IMPL(__imp__sub_83BF9558) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,9924
	ctx.r11.s64 = ctx.r8.s64 + 9924;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,11456(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11456);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-904
	ctx.r3.s64 = ctx.r6.s64 + -904;
	// stw r10,9924(r8)
	PPC_STORE_U32(ctx.r8.u32 + 9924, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9588"))) PPC_WEAK_FUNC(sub_83BF9588);
PPC_FUNC_IMPL(__imp__sub_83BF9588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-888
	ctx.r3.s64 = ctx.r11.s64 + -888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9594"))) PPC_WEAK_FUNC(sub_83BF9594);
PPC_FUNC_IMPL(__imp__sub_83BF9594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9598"))) PPC_WEAK_FUNC(sub_83BF9598);
PPC_FUNC_IMPL(__imp__sub_83BF9598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-880
	ctx.r3.s64 = ctx.r11.s64 + -880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF95A4"))) PPC_WEAK_FUNC(sub_83BF95A4);
PPC_FUNC_IMPL(__imp__sub_83BF95A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF95A8"))) PPC_WEAK_FUNC(sub_83BF95A8);
PPC_FUNC_IMPL(__imp__sub_83BF95A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-872
	ctx.r3.s64 = ctx.r11.s64 + -872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF95B4"))) PPC_WEAK_FUNC(sub_83BF95B4);
PPC_FUNC_IMPL(__imp__sub_83BF95B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF95B8"))) PPC_WEAK_FUNC(sub_83BF95B8);
PPC_FUNC_IMPL(__imp__sub_83BF95B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-864
	ctx.r3.s64 = ctx.r11.s64 + -864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF95C4"))) PPC_WEAK_FUNC(sub_83BF95C4);
PPC_FUNC_IMPL(__imp__sub_83BF95C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF95C8"))) PPC_WEAK_FUNC(sub_83BF95C8);
PPC_FUNC_IMPL(__imp__sub_83BF95C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-856
	ctx.r3.s64 = ctx.r11.s64 + -856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF95D4"))) PPC_WEAK_FUNC(sub_83BF95D4);
PPC_FUNC_IMPL(__imp__sub_83BF95D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF95D8"))) PPC_WEAK_FUNC(sub_83BF95D8);
PPC_FUNC_IMPL(__imp__sub_83BF95D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-848
	ctx.r3.s64 = ctx.r11.s64 + -848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF95E4"))) PPC_WEAK_FUNC(sub_83BF95E4);
PPC_FUNC_IMPL(__imp__sub_83BF95E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF95E8"))) PPC_WEAK_FUNC(sub_83BF95E8);
PPC_FUNC_IMPL(__imp__sub_83BF95E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-840
	ctx.r3.s64 = ctx.r11.s64 + -840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF95F4"))) PPC_WEAK_FUNC(sub_83BF95F4);
PPC_FUNC_IMPL(__imp__sub_83BF95F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF95F8"))) PPC_WEAK_FUNC(sub_83BF95F8);
PPC_FUNC_IMPL(__imp__sub_83BF95F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-832
	ctx.r3.s64 = ctx.r11.s64 + -832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9604"))) PPC_WEAK_FUNC(sub_83BF9604);
PPC_FUNC_IMPL(__imp__sub_83BF9604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9608"))) PPC_WEAK_FUNC(sub_83BF9608);
PPC_FUNC_IMPL(__imp__sub_83BF9608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-824
	ctx.r3.s64 = ctx.r11.s64 + -824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9614"))) PPC_WEAK_FUNC(sub_83BF9614);
PPC_FUNC_IMPL(__imp__sub_83BF9614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9618"))) PPC_WEAK_FUNC(sub_83BF9618);
PPC_FUNC_IMPL(__imp__sub_83BF9618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-816
	ctx.r3.s64 = ctx.r11.s64 + -816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9624"))) PPC_WEAK_FUNC(sub_83BF9624);
PPC_FUNC_IMPL(__imp__sub_83BF9624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9628"))) PPC_WEAK_FUNC(sub_83BF9628);
PPC_FUNC_IMPL(__imp__sub_83BF9628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-808
	ctx.r3.s64 = ctx.r11.s64 + -808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9634"))) PPC_WEAK_FUNC(sub_83BF9634);
PPC_FUNC_IMPL(__imp__sub_83BF9634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9638"))) PPC_WEAK_FUNC(sub_83BF9638);
PPC_FUNC_IMPL(__imp__sub_83BF9638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-800
	ctx.r3.s64 = ctx.r11.s64 + -800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9644"))) PPC_WEAK_FUNC(sub_83BF9644);
PPC_FUNC_IMPL(__imp__sub_83BF9644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9648"))) PPC_WEAK_FUNC(sub_83BF9648);
PPC_FUNC_IMPL(__imp__sub_83BF9648) {
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
	// addi r3,r11,10288
	ctx.r3.s64 = ctx.r11.s64 + 10288;
	// bl 0x83523120
	ctx.lr = 0x83BF9660;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-792
	ctx.r3.s64 = ctx.r10.s64 + -792;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF966C;
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

__attribute__((alias("__imp__sub_83BF967C"))) PPC_WEAK_FUNC(sub_83BF967C);
PPC_FUNC_IMPL(__imp__sub_83BF967C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9680"))) PPC_WEAK_FUNC(sub_83BF9680);
PPC_FUNC_IMPL(__imp__sub_83BF9680) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,10304
	ctx.r7.s64 = ctx.r8.s64 + 10304;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,10304(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10304);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,10304(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10304, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF96A8"))) PPC_WEAK_FUNC(sub_83BF96A8);
PPC_FUNC_IMPL(__imp__sub_83BF96A8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,11608
	ctx.r6.s64 = ctx.r7.s64 + 11608;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,11536(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 11536);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,10304(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10304);
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
	// std r9,11608(r7)
	PPC_STORE_U64(ctx.r7.u32 + 11608, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BF96F0"))) PPC_WEAK_FUNC(sub_83BF96F0);
PPC_FUNC_IMPL(__imp__sub_83BF96F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-776
	ctx.r3.s64 = ctx.r11.s64 + -776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF96FC"))) PPC_WEAK_FUNC(sub_83BF96FC);
PPC_FUNC_IMPL(__imp__sub_83BF96FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9700"))) PPC_WEAK_FUNC(sub_83BF9700);
PPC_FUNC_IMPL(__imp__sub_83BF9700) {
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
	// addi r3,r11,10312
	ctx.r3.s64 = ctx.r11.s64 + 10312;
	// bl 0x8259af80
	ctx.lr = 0x83BF9718;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-760
	ctx.r3.s64 = ctx.r10.s64 + -760;
	// bl 0x831cdcc8
	ctx.lr = 0x83BF9724;
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

__attribute__((alias("__imp__sub_83BF9734"))) PPC_WEAK_FUNC(sub_83BF9734);
PPC_FUNC_IMPL(__imp__sub_83BF9734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9738"))) PPC_WEAK_FUNC(sub_83BF9738);
PPC_FUNC_IMPL(__imp__sub_83BF9738) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,10292
	ctx.r11.s64 = ctx.r8.s64 + 10292;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,11584(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11584);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-768
	ctx.r3.s64 = ctx.r6.s64 + -768;
	// stw r10,10292(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10292, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9768"))) PPC_WEAK_FUNC(sub_83BF9768);
PPC_FUNC_IMPL(__imp__sub_83BF9768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-752
	ctx.r3.s64 = ctx.r11.s64 + -752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9774"))) PPC_WEAK_FUNC(sub_83BF9774);
PPC_FUNC_IMPL(__imp__sub_83BF9774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9778"))) PPC_WEAK_FUNC(sub_83BF9778);
PPC_FUNC_IMPL(__imp__sub_83BF9778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-744
	ctx.r3.s64 = ctx.r11.s64 + -744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9784"))) PPC_WEAK_FUNC(sub_83BF9784);
PPC_FUNC_IMPL(__imp__sub_83BF9784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9788"))) PPC_WEAK_FUNC(sub_83BF9788);
PPC_FUNC_IMPL(__imp__sub_83BF9788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-736
	ctx.r3.s64 = ctx.r11.s64 + -736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9794"))) PPC_WEAK_FUNC(sub_83BF9794);
PPC_FUNC_IMPL(__imp__sub_83BF9794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF9798"))) PPC_WEAK_FUNC(sub_83BF9798);
PPC_FUNC_IMPL(__imp__sub_83BF9798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-728
	ctx.r3.s64 = ctx.r11.s64 + -728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF97A4"))) PPC_WEAK_FUNC(sub_83BF97A4);
PPC_FUNC_IMPL(__imp__sub_83BF97A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF97A8"))) PPC_WEAK_FUNC(sub_83BF97A8);
PPC_FUNC_IMPL(__imp__sub_83BF97A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-720
	ctx.r3.s64 = ctx.r11.s64 + -720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF97B4"))) PPC_WEAK_FUNC(sub_83BF97B4);
PPC_FUNC_IMPL(__imp__sub_83BF97B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF97B8"))) PPC_WEAK_FUNC(sub_83BF97B8);
PPC_FUNC_IMPL(__imp__sub_83BF97B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-712
	ctx.r3.s64 = ctx.r11.s64 + -712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF97C4"))) PPC_WEAK_FUNC(sub_83BF97C4);
PPC_FUNC_IMPL(__imp__sub_83BF97C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF97C8"))) PPC_WEAK_FUNC(sub_83BF97C8);
PPC_FUNC_IMPL(__imp__sub_83BF97C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-704
	ctx.r3.s64 = ctx.r11.s64 + -704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF97D4"))) PPC_WEAK_FUNC(sub_83BF97D4);
PPC_FUNC_IMPL(__imp__sub_83BF97D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF97D8"))) PPC_WEAK_FUNC(sub_83BF97D8);
PPC_FUNC_IMPL(__imp__sub_83BF97D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-696
	ctx.r3.s64 = ctx.r11.s64 + -696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF97E4"))) PPC_WEAK_FUNC(sub_83BF97E4);
PPC_FUNC_IMPL(__imp__sub_83BF97E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF97E8"))) PPC_WEAK_FUNC(sub_83BF97E8);
PPC_FUNC_IMPL(__imp__sub_83BF97E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-688
	ctx.r3.s64 = ctx.r11.s64 + -688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF97F4"))) PPC_WEAK_FUNC(sub_83BF97F4);
PPC_FUNC_IMPL(__imp__sub_83BF97F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BF97F8"))) PPC_WEAK_FUNC(sub_83BF97F8);
PPC_FUNC_IMPL(__imp__sub_83BF97F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-680
	ctx.r3.s64 = ctx.r11.s64 + -680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BF9804"))) PPC_WEAK_FUNC(sub_83BF9804);
PPC_FUNC_IMPL(__imp__sub_83BF9804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

