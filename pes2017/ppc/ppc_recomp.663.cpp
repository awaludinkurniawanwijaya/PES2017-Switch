#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BE19A0"))) PPC_WEAK_FUNC(sub_83BE19A0);
PPC_FUNC_IMPL(__imp__sub_83BE19A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,7060
	ctx.r11.s64 = ctx.r8.s64 + 7060;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-17660(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17660);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-29744
	ctx.r3.s64 = ctx.r6.s64 + -29744;
	// stw r10,7060(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7060, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE19D0"))) PPC_WEAK_FUNC(sub_83BE19D0);
PPC_FUNC_IMPL(__imp__sub_83BE19D0) {
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
	// li r11,2
	ctx.r11.s64 = 2;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83BE19F4;
	sub_82595718(ctx, base);
	// lis r10,-31760
	ctx.r10.s64 = -2081423360;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,7044
	ctx.r9.s64 = ctx.r10.s64 + 7044;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r8,-31790
	ctx.r8.s64 = -2083389440;
	// addi r3,r8,-29728
	ctx.r3.s64 = ctx.r8.s64 + -29728;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r10,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r10.u8);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r10,45(r11)
	PPC_STORE_U8(ctx.r11.u32 + 45, ctx.r10.u8);
	// bl 0x831cdcc8
	ctx.lr = 0x83BE1A38;
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

__attribute__((alias("__imp__sub_83BE1A48"))) PPC_WEAK_FUNC(sub_83BE1A48);
PPC_FUNC_IMPL(__imp__sub_83BE1A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29640
	ctx.r3.s64 = ctx.r11.s64 + -29640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE1A54"))) PPC_WEAK_FUNC(sub_83BE1A54);
PPC_FUNC_IMPL(__imp__sub_83BE1A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE1A58"))) PPC_WEAK_FUNC(sub_83BE1A58);
PPC_FUNC_IMPL(__imp__sub_83BE1A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29632
	ctx.r3.s64 = ctx.r11.s64 + -29632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE1A64"))) PPC_WEAK_FUNC(sub_83BE1A64);
PPC_FUNC_IMPL(__imp__sub_83BE1A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE1A68"))) PPC_WEAK_FUNC(sub_83BE1A68);
PPC_FUNC_IMPL(__imp__sub_83BE1A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29624
	ctx.r3.s64 = ctx.r11.s64 + -29624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE1A74"))) PPC_WEAK_FUNC(sub_83BE1A74);
PPC_FUNC_IMPL(__imp__sub_83BE1A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE1A78"))) PPC_WEAK_FUNC(sub_83BE1A78);
PPC_FUNC_IMPL(__imp__sub_83BE1A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29616
	ctx.r3.s64 = ctx.r11.s64 + -29616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE1A84"))) PPC_WEAK_FUNC(sub_83BE1A84);
PPC_FUNC_IMPL(__imp__sub_83BE1A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE1A88"))) PPC_WEAK_FUNC(sub_83BE1A88);
PPC_FUNC_IMPL(__imp__sub_83BE1A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29608
	ctx.r3.s64 = ctx.r11.s64 + -29608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE1A94"))) PPC_WEAK_FUNC(sub_83BE1A94);
PPC_FUNC_IMPL(__imp__sub_83BE1A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE1A98"))) PPC_WEAK_FUNC(sub_83BE1A98);
PPC_FUNC_IMPL(__imp__sub_83BE1A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29600
	ctx.r3.s64 = ctx.r11.s64 + -29600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE1AA4"))) PPC_WEAK_FUNC(sub_83BE1AA4);
PPC_FUNC_IMPL(__imp__sub_83BE1AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE1AA8"))) PPC_WEAK_FUNC(sub_83BE1AA8);
PPC_FUNC_IMPL(__imp__sub_83BE1AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29592
	ctx.r3.s64 = ctx.r11.s64 + -29592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE1AB4"))) PPC_WEAK_FUNC(sub_83BE1AB4);
PPC_FUNC_IMPL(__imp__sub_83BE1AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE1AB8"))) PPC_WEAK_FUNC(sub_83BE1AB8);
PPC_FUNC_IMPL(__imp__sub_83BE1AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29584
	ctx.r3.s64 = ctx.r11.s64 + -29584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE1AC4"))) PPC_WEAK_FUNC(sub_83BE1AC4);
PPC_FUNC_IMPL(__imp__sub_83BE1AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE1AC8"))) PPC_WEAK_FUNC(sub_83BE1AC8);
PPC_FUNC_IMPL(__imp__sub_83BE1AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29576
	ctx.r3.s64 = ctx.r11.s64 + -29576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE1AD4"))) PPC_WEAK_FUNC(sub_83BE1AD4);
PPC_FUNC_IMPL(__imp__sub_83BE1AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE1AD8"))) PPC_WEAK_FUNC(sub_83BE1AD8);
PPC_FUNC_IMPL(__imp__sub_83BE1AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29568
	ctx.r3.s64 = ctx.r11.s64 + -29568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE1AE4"))) PPC_WEAK_FUNC(sub_83BE1AE4);
PPC_FUNC_IMPL(__imp__sub_83BE1AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE1AE8"))) PPC_WEAK_FUNC(sub_83BE1AE8);
PPC_FUNC_IMPL(__imp__sub_83BE1AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29560
	ctx.r3.s64 = ctx.r11.s64 + -29560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE1AF4"))) PPC_WEAK_FUNC(sub_83BE1AF4);
PPC_FUNC_IMPL(__imp__sub_83BE1AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE1AF8"))) PPC_WEAK_FUNC(sub_83BE1AF8);
PPC_FUNC_IMPL(__imp__sub_83BE1AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29552
	ctx.r3.s64 = ctx.r11.s64 + -29552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE1B04"))) PPC_WEAK_FUNC(sub_83BE1B04);
PPC_FUNC_IMPL(__imp__sub_83BE1B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE1B08"))) PPC_WEAK_FUNC(sub_83BE1B08);
PPC_FUNC_IMPL(__imp__sub_83BE1B08) {
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
	// addi r3,r11,7424
	ctx.r3.s64 = ctx.r11.s64 + 7424;
	// bl 0x83523120
	ctx.lr = 0x83BE1B20;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-29544
	ctx.r3.s64 = ctx.r10.s64 + -29544;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE1B2C;
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

__attribute__((alias("__imp__sub_83BE1B3C"))) PPC_WEAK_FUNC(sub_83BE1B3C);
PPC_FUNC_IMPL(__imp__sub_83BE1B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE1B40"))) PPC_WEAK_FUNC(sub_83BE1B40);
PPC_FUNC_IMPL(__imp__sub_83BE1B40) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,7440
	ctx.r7.s64 = ctx.r8.s64 + 7440;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,7440(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 7440);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,7440(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7440, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE1B68"))) PPC_WEAK_FUNC(sub_83BE1B68);
PPC_FUNC_IMPL(__imp__sub_83BE1B68) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-17496
	ctx.r6.s64 = ctx.r7.s64 + -17496;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-17568(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -17568);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,7440(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7440);
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
	// std r9,-17496(r7)
	PPC_STORE_U64(ctx.r7.u32 + -17496, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE1BB0"))) PPC_WEAK_FUNC(sub_83BE1BB0);
PPC_FUNC_IMPL(__imp__sub_83BE1BB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29528
	ctx.r3.s64 = ctx.r11.s64 + -29528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE1BBC"))) PPC_WEAK_FUNC(sub_83BE1BBC);
PPC_FUNC_IMPL(__imp__sub_83BE1BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE1BC0"))) PPC_WEAK_FUNC(sub_83BE1BC0);
PPC_FUNC_IMPL(__imp__sub_83BE1BC0) {
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
	// addi r3,r11,7448
	ctx.r3.s64 = ctx.r11.s64 + 7448;
	// bl 0x8259af80
	ctx.lr = 0x83BE1BD8;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-29512
	ctx.r3.s64 = ctx.r10.s64 + -29512;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE1BE4;
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

__attribute__((alias("__imp__sub_83BE1BF4"))) PPC_WEAK_FUNC(sub_83BE1BF4);
PPC_FUNC_IMPL(__imp__sub_83BE1BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE1BF8"))) PPC_WEAK_FUNC(sub_83BE1BF8);
PPC_FUNC_IMPL(__imp__sub_83BE1BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,7428
	ctx.r11.s64 = ctx.r8.s64 + 7428;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-17520(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17520);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-29520
	ctx.r3.s64 = ctx.r6.s64 + -29520;
	// stw r10,7428(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7428, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE1C28"))) PPC_WEAK_FUNC(sub_83BE1C28);
PPC_FUNC_IMPL(__imp__sub_83BE1C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29504
	ctx.r3.s64 = ctx.r11.s64 + -29504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE1C34"))) PPC_WEAK_FUNC(sub_83BE1C34);
PPC_FUNC_IMPL(__imp__sub_83BE1C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE1C38"))) PPC_WEAK_FUNC(sub_83BE1C38);
PPC_FUNC_IMPL(__imp__sub_83BE1C38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29496
	ctx.r3.s64 = ctx.r11.s64 + -29496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE1C44"))) PPC_WEAK_FUNC(sub_83BE1C44);
PPC_FUNC_IMPL(__imp__sub_83BE1C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE1C48"))) PPC_WEAK_FUNC(sub_83BE1C48);
PPC_FUNC_IMPL(__imp__sub_83BE1C48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29488
	ctx.r3.s64 = ctx.r11.s64 + -29488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE1C54"))) PPC_WEAK_FUNC(sub_83BE1C54);
PPC_FUNC_IMPL(__imp__sub_83BE1C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE1C58"))) PPC_WEAK_FUNC(sub_83BE1C58);
PPC_FUNC_IMPL(__imp__sub_83BE1C58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29480
	ctx.r3.s64 = ctx.r11.s64 + -29480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE1C64"))) PPC_WEAK_FUNC(sub_83BE1C64);
PPC_FUNC_IMPL(__imp__sub_83BE1C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE1C68"))) PPC_WEAK_FUNC(sub_83BE1C68);
PPC_FUNC_IMPL(__imp__sub_83BE1C68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29472
	ctx.r3.s64 = ctx.r11.s64 + -29472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE1C74"))) PPC_WEAK_FUNC(sub_83BE1C74);
PPC_FUNC_IMPL(__imp__sub_83BE1C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE1C78"))) PPC_WEAK_FUNC(sub_83BE1C78);
PPC_FUNC_IMPL(__imp__sub_83BE1C78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29464
	ctx.r3.s64 = ctx.r11.s64 + -29464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE1C84"))) PPC_WEAK_FUNC(sub_83BE1C84);
PPC_FUNC_IMPL(__imp__sub_83BE1C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE1C88"))) PPC_WEAK_FUNC(sub_83BE1C88);
PPC_FUNC_IMPL(__imp__sub_83BE1C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29456
	ctx.r3.s64 = ctx.r11.s64 + -29456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE1C94"))) PPC_WEAK_FUNC(sub_83BE1C94);
PPC_FUNC_IMPL(__imp__sub_83BE1C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE1C98"))) PPC_WEAK_FUNC(sub_83BE1C98);
PPC_FUNC_IMPL(__imp__sub_83BE1C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29448
	ctx.r3.s64 = ctx.r11.s64 + -29448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE1CA4"))) PPC_WEAK_FUNC(sub_83BE1CA4);
PPC_FUNC_IMPL(__imp__sub_83BE1CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE1CA8"))) PPC_WEAK_FUNC(sub_83BE1CA8);
PPC_FUNC_IMPL(__imp__sub_83BE1CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29440
	ctx.r3.s64 = ctx.r11.s64 + -29440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE1CB4"))) PPC_WEAK_FUNC(sub_83BE1CB4);
PPC_FUNC_IMPL(__imp__sub_83BE1CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE1CB8"))) PPC_WEAK_FUNC(sub_83BE1CB8);
PPC_FUNC_IMPL(__imp__sub_83BE1CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29432
	ctx.r3.s64 = ctx.r11.s64 + -29432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE1CC4"))) PPC_WEAK_FUNC(sub_83BE1CC4);
PPC_FUNC_IMPL(__imp__sub_83BE1CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE1CC8"))) PPC_WEAK_FUNC(sub_83BE1CC8);
PPC_FUNC_IMPL(__imp__sub_83BE1CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29424
	ctx.r3.s64 = ctx.r11.s64 + -29424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE1CD4"))) PPC_WEAK_FUNC(sub_83BE1CD4);
PPC_FUNC_IMPL(__imp__sub_83BE1CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE1CD8"))) PPC_WEAK_FUNC(sub_83BE1CD8);
PPC_FUNC_IMPL(__imp__sub_83BE1CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29416
	ctx.r3.s64 = ctx.r11.s64 + -29416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE1CE4"))) PPC_WEAK_FUNC(sub_83BE1CE4);
PPC_FUNC_IMPL(__imp__sub_83BE1CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE1CE8"))) PPC_WEAK_FUNC(sub_83BE1CE8);
PPC_FUNC_IMPL(__imp__sub_83BE1CE8) {
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
	// addi r3,r11,7792
	ctx.r3.s64 = ctx.r11.s64 + 7792;
	// bl 0x83523120
	ctx.lr = 0x83BE1D00;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-29408
	ctx.r3.s64 = ctx.r10.s64 + -29408;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE1D0C;
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

__attribute__((alias("__imp__sub_83BE1D1C"))) PPC_WEAK_FUNC(sub_83BE1D1C);
PPC_FUNC_IMPL(__imp__sub_83BE1D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE1D20"))) PPC_WEAK_FUNC(sub_83BE1D20);
PPC_FUNC_IMPL(__imp__sub_83BE1D20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,7808
	ctx.r7.s64 = ctx.r8.s64 + 7808;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,7808(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 7808);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,7808(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7808, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE1D48"))) PPC_WEAK_FUNC(sub_83BE1D48);
PPC_FUNC_IMPL(__imp__sub_83BE1D48) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-17356
	ctx.r6.s64 = ctx.r7.s64 + -17356;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-17428(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -17428);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,7808(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7808);
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
	// std r9,-17356(r7)
	PPC_STORE_U64(ctx.r7.u32 + -17356, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE1D90"))) PPC_WEAK_FUNC(sub_83BE1D90);
PPC_FUNC_IMPL(__imp__sub_83BE1D90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29392
	ctx.r3.s64 = ctx.r11.s64 + -29392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE1D9C"))) PPC_WEAK_FUNC(sub_83BE1D9C);
PPC_FUNC_IMPL(__imp__sub_83BE1D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE1DA0"))) PPC_WEAK_FUNC(sub_83BE1DA0);
PPC_FUNC_IMPL(__imp__sub_83BE1DA0) {
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
	// addi r3,r11,7816
	ctx.r3.s64 = ctx.r11.s64 + 7816;
	// bl 0x8259af80
	ctx.lr = 0x83BE1DB8;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-29376
	ctx.r3.s64 = ctx.r10.s64 + -29376;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE1DC4;
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

__attribute__((alias("__imp__sub_83BE1DD4"))) PPC_WEAK_FUNC(sub_83BE1DD4);
PPC_FUNC_IMPL(__imp__sub_83BE1DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE1DD8"))) PPC_WEAK_FUNC(sub_83BE1DD8);
PPC_FUNC_IMPL(__imp__sub_83BE1DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,7796
	ctx.r11.s64 = ctx.r8.s64 + 7796;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-17380(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17380);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-29384
	ctx.r3.s64 = ctx.r6.s64 + -29384;
	// stw r10,7796(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7796, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE1E08"))) PPC_WEAK_FUNC(sub_83BE1E08);
PPC_FUNC_IMPL(__imp__sub_83BE1E08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29368
	ctx.r3.s64 = ctx.r11.s64 + -29368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE1E14"))) PPC_WEAK_FUNC(sub_83BE1E14);
PPC_FUNC_IMPL(__imp__sub_83BE1E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE1E18"))) PPC_WEAK_FUNC(sub_83BE1E18);
PPC_FUNC_IMPL(__imp__sub_83BE1E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29360
	ctx.r3.s64 = ctx.r11.s64 + -29360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE1E24"))) PPC_WEAK_FUNC(sub_83BE1E24);
PPC_FUNC_IMPL(__imp__sub_83BE1E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE1E28"))) PPC_WEAK_FUNC(sub_83BE1E28);
PPC_FUNC_IMPL(__imp__sub_83BE1E28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29352
	ctx.r3.s64 = ctx.r11.s64 + -29352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE1E34"))) PPC_WEAK_FUNC(sub_83BE1E34);
PPC_FUNC_IMPL(__imp__sub_83BE1E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE1E38"))) PPC_WEAK_FUNC(sub_83BE1E38);
PPC_FUNC_IMPL(__imp__sub_83BE1E38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29344
	ctx.r3.s64 = ctx.r11.s64 + -29344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE1E44"))) PPC_WEAK_FUNC(sub_83BE1E44);
PPC_FUNC_IMPL(__imp__sub_83BE1E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE1E48"))) PPC_WEAK_FUNC(sub_83BE1E48);
PPC_FUNC_IMPL(__imp__sub_83BE1E48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29336
	ctx.r3.s64 = ctx.r11.s64 + -29336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE1E54"))) PPC_WEAK_FUNC(sub_83BE1E54);
PPC_FUNC_IMPL(__imp__sub_83BE1E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE1E58"))) PPC_WEAK_FUNC(sub_83BE1E58);
PPC_FUNC_IMPL(__imp__sub_83BE1E58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29328
	ctx.r3.s64 = ctx.r11.s64 + -29328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE1E64"))) PPC_WEAK_FUNC(sub_83BE1E64);
PPC_FUNC_IMPL(__imp__sub_83BE1E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE1E68"))) PPC_WEAK_FUNC(sub_83BE1E68);
PPC_FUNC_IMPL(__imp__sub_83BE1E68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29320
	ctx.r3.s64 = ctx.r11.s64 + -29320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE1E74"))) PPC_WEAK_FUNC(sub_83BE1E74);
PPC_FUNC_IMPL(__imp__sub_83BE1E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE1E78"))) PPC_WEAK_FUNC(sub_83BE1E78);
PPC_FUNC_IMPL(__imp__sub_83BE1E78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29312
	ctx.r3.s64 = ctx.r11.s64 + -29312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE1E84"))) PPC_WEAK_FUNC(sub_83BE1E84);
PPC_FUNC_IMPL(__imp__sub_83BE1E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE1E88"))) PPC_WEAK_FUNC(sub_83BE1E88);
PPC_FUNC_IMPL(__imp__sub_83BE1E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29304
	ctx.r3.s64 = ctx.r11.s64 + -29304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE1E94"))) PPC_WEAK_FUNC(sub_83BE1E94);
PPC_FUNC_IMPL(__imp__sub_83BE1E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE1E98"))) PPC_WEAK_FUNC(sub_83BE1E98);
PPC_FUNC_IMPL(__imp__sub_83BE1E98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29296
	ctx.r3.s64 = ctx.r11.s64 + -29296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE1EA4"))) PPC_WEAK_FUNC(sub_83BE1EA4);
PPC_FUNC_IMPL(__imp__sub_83BE1EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE1EA8"))) PPC_WEAK_FUNC(sub_83BE1EA8);
PPC_FUNC_IMPL(__imp__sub_83BE1EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29288
	ctx.r3.s64 = ctx.r11.s64 + -29288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE1EB4"))) PPC_WEAK_FUNC(sub_83BE1EB4);
PPC_FUNC_IMPL(__imp__sub_83BE1EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE1EB8"))) PPC_WEAK_FUNC(sub_83BE1EB8);
PPC_FUNC_IMPL(__imp__sub_83BE1EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29280
	ctx.r3.s64 = ctx.r11.s64 + -29280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE1EC4"))) PPC_WEAK_FUNC(sub_83BE1EC4);
PPC_FUNC_IMPL(__imp__sub_83BE1EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE1EC8"))) PPC_WEAK_FUNC(sub_83BE1EC8);
PPC_FUNC_IMPL(__imp__sub_83BE1EC8) {
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
	// addi r3,r11,8160
	ctx.r3.s64 = ctx.r11.s64 + 8160;
	// bl 0x83523120
	ctx.lr = 0x83BE1EE0;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-29272
	ctx.r3.s64 = ctx.r10.s64 + -29272;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE1EEC;
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

__attribute__((alias("__imp__sub_83BE1EFC"))) PPC_WEAK_FUNC(sub_83BE1EFC);
PPC_FUNC_IMPL(__imp__sub_83BE1EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE1F00"))) PPC_WEAK_FUNC(sub_83BE1F00);
PPC_FUNC_IMPL(__imp__sub_83BE1F00) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,8176
	ctx.r7.s64 = ctx.r8.s64 + 8176;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,8176(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8176);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,8176(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8176, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE1F28"))) PPC_WEAK_FUNC(sub_83BE1F28);
PPC_FUNC_IMPL(__imp__sub_83BE1F28) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-17180
	ctx.r6.s64 = ctx.r7.s64 + -17180;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-17252(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -17252);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,8176(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8176);
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
	// std r9,-17180(r7)
	PPC_STORE_U64(ctx.r7.u32 + -17180, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE1F70"))) PPC_WEAK_FUNC(sub_83BE1F70);
PPC_FUNC_IMPL(__imp__sub_83BE1F70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29256
	ctx.r3.s64 = ctx.r11.s64 + -29256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE1F7C"))) PPC_WEAK_FUNC(sub_83BE1F7C);
PPC_FUNC_IMPL(__imp__sub_83BE1F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE1F80"))) PPC_WEAK_FUNC(sub_83BE1F80);
PPC_FUNC_IMPL(__imp__sub_83BE1F80) {
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
	// addi r3,r11,8184
	ctx.r3.s64 = ctx.r11.s64 + 8184;
	// bl 0x8259af80
	ctx.lr = 0x83BE1F98;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-29240
	ctx.r3.s64 = ctx.r10.s64 + -29240;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE1FA4;
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

__attribute__((alias("__imp__sub_83BE1FB4"))) PPC_WEAK_FUNC(sub_83BE1FB4);
PPC_FUNC_IMPL(__imp__sub_83BE1FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE1FB8"))) PPC_WEAK_FUNC(sub_83BE1FB8);
PPC_FUNC_IMPL(__imp__sub_83BE1FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,8164
	ctx.r11.s64 = ctx.r8.s64 + 8164;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-17204(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17204);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-29248
	ctx.r3.s64 = ctx.r6.s64 + -29248;
	// stw r10,8164(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8164, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE1FE8"))) PPC_WEAK_FUNC(sub_83BE1FE8);
PPC_FUNC_IMPL(__imp__sub_83BE1FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29232
	ctx.r3.s64 = ctx.r11.s64 + -29232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE1FF4"))) PPC_WEAK_FUNC(sub_83BE1FF4);
PPC_FUNC_IMPL(__imp__sub_83BE1FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE1FF8"))) PPC_WEAK_FUNC(sub_83BE1FF8);
PPC_FUNC_IMPL(__imp__sub_83BE1FF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29224
	ctx.r3.s64 = ctx.r11.s64 + -29224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2004"))) PPC_WEAK_FUNC(sub_83BE2004);
PPC_FUNC_IMPL(__imp__sub_83BE2004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2008"))) PPC_WEAK_FUNC(sub_83BE2008);
PPC_FUNC_IMPL(__imp__sub_83BE2008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29216
	ctx.r3.s64 = ctx.r11.s64 + -29216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2014"))) PPC_WEAK_FUNC(sub_83BE2014);
PPC_FUNC_IMPL(__imp__sub_83BE2014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2018"))) PPC_WEAK_FUNC(sub_83BE2018);
PPC_FUNC_IMPL(__imp__sub_83BE2018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29208
	ctx.r3.s64 = ctx.r11.s64 + -29208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2024"))) PPC_WEAK_FUNC(sub_83BE2024);
PPC_FUNC_IMPL(__imp__sub_83BE2024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2028"))) PPC_WEAK_FUNC(sub_83BE2028);
PPC_FUNC_IMPL(__imp__sub_83BE2028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29200
	ctx.r3.s64 = ctx.r11.s64 + -29200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2034"))) PPC_WEAK_FUNC(sub_83BE2034);
PPC_FUNC_IMPL(__imp__sub_83BE2034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2038"))) PPC_WEAK_FUNC(sub_83BE2038);
PPC_FUNC_IMPL(__imp__sub_83BE2038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29192
	ctx.r3.s64 = ctx.r11.s64 + -29192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2044"))) PPC_WEAK_FUNC(sub_83BE2044);
PPC_FUNC_IMPL(__imp__sub_83BE2044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2048"))) PPC_WEAK_FUNC(sub_83BE2048);
PPC_FUNC_IMPL(__imp__sub_83BE2048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29184
	ctx.r3.s64 = ctx.r11.s64 + -29184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2054"))) PPC_WEAK_FUNC(sub_83BE2054);
PPC_FUNC_IMPL(__imp__sub_83BE2054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2058"))) PPC_WEAK_FUNC(sub_83BE2058);
PPC_FUNC_IMPL(__imp__sub_83BE2058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29176
	ctx.r3.s64 = ctx.r11.s64 + -29176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2064"))) PPC_WEAK_FUNC(sub_83BE2064);
PPC_FUNC_IMPL(__imp__sub_83BE2064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2068"))) PPC_WEAK_FUNC(sub_83BE2068);
PPC_FUNC_IMPL(__imp__sub_83BE2068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29168
	ctx.r3.s64 = ctx.r11.s64 + -29168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2074"))) PPC_WEAK_FUNC(sub_83BE2074);
PPC_FUNC_IMPL(__imp__sub_83BE2074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2078"))) PPC_WEAK_FUNC(sub_83BE2078);
PPC_FUNC_IMPL(__imp__sub_83BE2078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29160
	ctx.r3.s64 = ctx.r11.s64 + -29160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2084"))) PPC_WEAK_FUNC(sub_83BE2084);
PPC_FUNC_IMPL(__imp__sub_83BE2084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2088"))) PPC_WEAK_FUNC(sub_83BE2088);
PPC_FUNC_IMPL(__imp__sub_83BE2088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29152
	ctx.r3.s64 = ctx.r11.s64 + -29152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2094"))) PPC_WEAK_FUNC(sub_83BE2094);
PPC_FUNC_IMPL(__imp__sub_83BE2094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2098"))) PPC_WEAK_FUNC(sub_83BE2098);
PPC_FUNC_IMPL(__imp__sub_83BE2098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29144
	ctx.r3.s64 = ctx.r11.s64 + -29144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE20A4"))) PPC_WEAK_FUNC(sub_83BE20A4);
PPC_FUNC_IMPL(__imp__sub_83BE20A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE20A8"))) PPC_WEAK_FUNC(sub_83BE20A8);
PPC_FUNC_IMPL(__imp__sub_83BE20A8) {
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
	// addi r3,r11,8528
	ctx.r3.s64 = ctx.r11.s64 + 8528;
	// bl 0x83523120
	ctx.lr = 0x83BE20C0;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-29136
	ctx.r3.s64 = ctx.r10.s64 + -29136;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE20CC;
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

__attribute__((alias("__imp__sub_83BE20DC"))) PPC_WEAK_FUNC(sub_83BE20DC);
PPC_FUNC_IMPL(__imp__sub_83BE20DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE20E0"))) PPC_WEAK_FUNC(sub_83BE20E0);
PPC_FUNC_IMPL(__imp__sub_83BE20E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,8544
	ctx.r7.s64 = ctx.r8.s64 + 8544;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,8544(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8544);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,8544(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8544, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE2108"))) PPC_WEAK_FUNC(sub_83BE2108);
PPC_FUNC_IMPL(__imp__sub_83BE2108) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-17024
	ctx.r6.s64 = ctx.r7.s64 + -17024;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-17096(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -17096);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,8544(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8544);
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
	// std r9,-17024(r7)
	PPC_STORE_U64(ctx.r7.u32 + -17024, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE2150"))) PPC_WEAK_FUNC(sub_83BE2150);
PPC_FUNC_IMPL(__imp__sub_83BE2150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29120
	ctx.r3.s64 = ctx.r11.s64 + -29120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE215C"))) PPC_WEAK_FUNC(sub_83BE215C);
PPC_FUNC_IMPL(__imp__sub_83BE215C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2160"))) PPC_WEAK_FUNC(sub_83BE2160);
PPC_FUNC_IMPL(__imp__sub_83BE2160) {
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
	// addi r3,r11,8552
	ctx.r3.s64 = ctx.r11.s64 + 8552;
	// bl 0x8259af80
	ctx.lr = 0x83BE2178;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-29104
	ctx.r3.s64 = ctx.r10.s64 + -29104;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE2184;
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

__attribute__((alias("__imp__sub_83BE2194"))) PPC_WEAK_FUNC(sub_83BE2194);
PPC_FUNC_IMPL(__imp__sub_83BE2194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2198"))) PPC_WEAK_FUNC(sub_83BE2198);
PPC_FUNC_IMPL(__imp__sub_83BE2198) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,8532
	ctx.r11.s64 = ctx.r8.s64 + 8532;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-17048(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17048);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-29112
	ctx.r3.s64 = ctx.r6.s64 + -29112;
	// stw r10,8532(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8532, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE21C8"))) PPC_WEAK_FUNC(sub_83BE21C8);
PPC_FUNC_IMPL(__imp__sub_83BE21C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29096
	ctx.r3.s64 = ctx.r11.s64 + -29096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE21D4"))) PPC_WEAK_FUNC(sub_83BE21D4);
PPC_FUNC_IMPL(__imp__sub_83BE21D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE21D8"))) PPC_WEAK_FUNC(sub_83BE21D8);
PPC_FUNC_IMPL(__imp__sub_83BE21D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29088
	ctx.r3.s64 = ctx.r11.s64 + -29088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE21E4"))) PPC_WEAK_FUNC(sub_83BE21E4);
PPC_FUNC_IMPL(__imp__sub_83BE21E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE21E8"))) PPC_WEAK_FUNC(sub_83BE21E8);
PPC_FUNC_IMPL(__imp__sub_83BE21E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29080
	ctx.r3.s64 = ctx.r11.s64 + -29080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE21F4"))) PPC_WEAK_FUNC(sub_83BE21F4);
PPC_FUNC_IMPL(__imp__sub_83BE21F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE21F8"))) PPC_WEAK_FUNC(sub_83BE21F8);
PPC_FUNC_IMPL(__imp__sub_83BE21F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29072
	ctx.r3.s64 = ctx.r11.s64 + -29072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2204"))) PPC_WEAK_FUNC(sub_83BE2204);
PPC_FUNC_IMPL(__imp__sub_83BE2204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2208"))) PPC_WEAK_FUNC(sub_83BE2208);
PPC_FUNC_IMPL(__imp__sub_83BE2208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29064
	ctx.r3.s64 = ctx.r11.s64 + -29064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2214"))) PPC_WEAK_FUNC(sub_83BE2214);
PPC_FUNC_IMPL(__imp__sub_83BE2214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2218"))) PPC_WEAK_FUNC(sub_83BE2218);
PPC_FUNC_IMPL(__imp__sub_83BE2218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29056
	ctx.r3.s64 = ctx.r11.s64 + -29056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2224"))) PPC_WEAK_FUNC(sub_83BE2224);
PPC_FUNC_IMPL(__imp__sub_83BE2224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2228"))) PPC_WEAK_FUNC(sub_83BE2228);
PPC_FUNC_IMPL(__imp__sub_83BE2228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29048
	ctx.r3.s64 = ctx.r11.s64 + -29048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2234"))) PPC_WEAK_FUNC(sub_83BE2234);
PPC_FUNC_IMPL(__imp__sub_83BE2234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2238"))) PPC_WEAK_FUNC(sub_83BE2238);
PPC_FUNC_IMPL(__imp__sub_83BE2238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29040
	ctx.r3.s64 = ctx.r11.s64 + -29040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2244"))) PPC_WEAK_FUNC(sub_83BE2244);
PPC_FUNC_IMPL(__imp__sub_83BE2244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2248"))) PPC_WEAK_FUNC(sub_83BE2248);
PPC_FUNC_IMPL(__imp__sub_83BE2248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29032
	ctx.r3.s64 = ctx.r11.s64 + -29032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2254"))) PPC_WEAK_FUNC(sub_83BE2254);
PPC_FUNC_IMPL(__imp__sub_83BE2254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2258"))) PPC_WEAK_FUNC(sub_83BE2258);
PPC_FUNC_IMPL(__imp__sub_83BE2258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29024
	ctx.r3.s64 = ctx.r11.s64 + -29024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2264"))) PPC_WEAK_FUNC(sub_83BE2264);
PPC_FUNC_IMPL(__imp__sub_83BE2264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2268"))) PPC_WEAK_FUNC(sub_83BE2268);
PPC_FUNC_IMPL(__imp__sub_83BE2268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29016
	ctx.r3.s64 = ctx.r11.s64 + -29016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2274"))) PPC_WEAK_FUNC(sub_83BE2274);
PPC_FUNC_IMPL(__imp__sub_83BE2274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2278"))) PPC_WEAK_FUNC(sub_83BE2278);
PPC_FUNC_IMPL(__imp__sub_83BE2278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-29008
	ctx.r3.s64 = ctx.r11.s64 + -29008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2284"))) PPC_WEAK_FUNC(sub_83BE2284);
PPC_FUNC_IMPL(__imp__sub_83BE2284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2288"))) PPC_WEAK_FUNC(sub_83BE2288);
PPC_FUNC_IMPL(__imp__sub_83BE2288) {
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
	// addi r3,r11,8896
	ctx.r3.s64 = ctx.r11.s64 + 8896;
	// bl 0x83523120
	ctx.lr = 0x83BE22A0;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-29000
	ctx.r3.s64 = ctx.r10.s64 + -29000;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE22AC;
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

__attribute__((alias("__imp__sub_83BE22BC"))) PPC_WEAK_FUNC(sub_83BE22BC);
PPC_FUNC_IMPL(__imp__sub_83BE22BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE22C0"))) PPC_WEAK_FUNC(sub_83BE22C0);
PPC_FUNC_IMPL(__imp__sub_83BE22C0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,8912
	ctx.r7.s64 = ctx.r8.s64 + 8912;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,8912(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8912);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,8912(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8912, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE22E8"))) PPC_WEAK_FUNC(sub_83BE22E8);
PPC_FUNC_IMPL(__imp__sub_83BE22E8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-16884
	ctx.r6.s64 = ctx.r7.s64 + -16884;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-16956(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -16956);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,8912(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8912);
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
	// std r9,-16884(r7)
	PPC_STORE_U64(ctx.r7.u32 + -16884, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE2330"))) PPC_WEAK_FUNC(sub_83BE2330);
PPC_FUNC_IMPL(__imp__sub_83BE2330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28984
	ctx.r3.s64 = ctx.r11.s64 + -28984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE233C"))) PPC_WEAK_FUNC(sub_83BE233C);
PPC_FUNC_IMPL(__imp__sub_83BE233C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2340"))) PPC_WEAK_FUNC(sub_83BE2340);
PPC_FUNC_IMPL(__imp__sub_83BE2340) {
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
	// addi r3,r11,8920
	ctx.r3.s64 = ctx.r11.s64 + 8920;
	// bl 0x8259af80
	ctx.lr = 0x83BE2358;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-28968
	ctx.r3.s64 = ctx.r10.s64 + -28968;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE2364;
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

__attribute__((alias("__imp__sub_83BE2374"))) PPC_WEAK_FUNC(sub_83BE2374);
PPC_FUNC_IMPL(__imp__sub_83BE2374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2378"))) PPC_WEAK_FUNC(sub_83BE2378);
PPC_FUNC_IMPL(__imp__sub_83BE2378) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,8900
	ctx.r11.s64 = ctx.r8.s64 + 8900;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-16908(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16908);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-28976
	ctx.r3.s64 = ctx.r6.s64 + -28976;
	// stw r10,8900(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8900, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE23A8"))) PPC_WEAK_FUNC(sub_83BE23A8);
PPC_FUNC_IMPL(__imp__sub_83BE23A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28960
	ctx.r3.s64 = ctx.r11.s64 + -28960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE23B4"))) PPC_WEAK_FUNC(sub_83BE23B4);
PPC_FUNC_IMPL(__imp__sub_83BE23B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE23B8"))) PPC_WEAK_FUNC(sub_83BE23B8);
PPC_FUNC_IMPL(__imp__sub_83BE23B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28952
	ctx.r3.s64 = ctx.r11.s64 + -28952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE23C4"))) PPC_WEAK_FUNC(sub_83BE23C4);
PPC_FUNC_IMPL(__imp__sub_83BE23C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE23C8"))) PPC_WEAK_FUNC(sub_83BE23C8);
PPC_FUNC_IMPL(__imp__sub_83BE23C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28944
	ctx.r3.s64 = ctx.r11.s64 + -28944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE23D4"))) PPC_WEAK_FUNC(sub_83BE23D4);
PPC_FUNC_IMPL(__imp__sub_83BE23D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE23D8"))) PPC_WEAK_FUNC(sub_83BE23D8);
PPC_FUNC_IMPL(__imp__sub_83BE23D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28936
	ctx.r3.s64 = ctx.r11.s64 + -28936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE23E4"))) PPC_WEAK_FUNC(sub_83BE23E4);
PPC_FUNC_IMPL(__imp__sub_83BE23E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE23E8"))) PPC_WEAK_FUNC(sub_83BE23E8);
PPC_FUNC_IMPL(__imp__sub_83BE23E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28928
	ctx.r3.s64 = ctx.r11.s64 + -28928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE23F4"))) PPC_WEAK_FUNC(sub_83BE23F4);
PPC_FUNC_IMPL(__imp__sub_83BE23F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE23F8"))) PPC_WEAK_FUNC(sub_83BE23F8);
PPC_FUNC_IMPL(__imp__sub_83BE23F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28920
	ctx.r3.s64 = ctx.r11.s64 + -28920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2404"))) PPC_WEAK_FUNC(sub_83BE2404);
PPC_FUNC_IMPL(__imp__sub_83BE2404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2408"))) PPC_WEAK_FUNC(sub_83BE2408);
PPC_FUNC_IMPL(__imp__sub_83BE2408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28912
	ctx.r3.s64 = ctx.r11.s64 + -28912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2414"))) PPC_WEAK_FUNC(sub_83BE2414);
PPC_FUNC_IMPL(__imp__sub_83BE2414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2418"))) PPC_WEAK_FUNC(sub_83BE2418);
PPC_FUNC_IMPL(__imp__sub_83BE2418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28904
	ctx.r3.s64 = ctx.r11.s64 + -28904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2424"))) PPC_WEAK_FUNC(sub_83BE2424);
PPC_FUNC_IMPL(__imp__sub_83BE2424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2428"))) PPC_WEAK_FUNC(sub_83BE2428);
PPC_FUNC_IMPL(__imp__sub_83BE2428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28896
	ctx.r3.s64 = ctx.r11.s64 + -28896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2434"))) PPC_WEAK_FUNC(sub_83BE2434);
PPC_FUNC_IMPL(__imp__sub_83BE2434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2438"))) PPC_WEAK_FUNC(sub_83BE2438);
PPC_FUNC_IMPL(__imp__sub_83BE2438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28888
	ctx.r3.s64 = ctx.r11.s64 + -28888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2444"))) PPC_WEAK_FUNC(sub_83BE2444);
PPC_FUNC_IMPL(__imp__sub_83BE2444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2448"))) PPC_WEAK_FUNC(sub_83BE2448);
PPC_FUNC_IMPL(__imp__sub_83BE2448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28880
	ctx.r3.s64 = ctx.r11.s64 + -28880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2454"))) PPC_WEAK_FUNC(sub_83BE2454);
PPC_FUNC_IMPL(__imp__sub_83BE2454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2458"))) PPC_WEAK_FUNC(sub_83BE2458);
PPC_FUNC_IMPL(__imp__sub_83BE2458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28872
	ctx.r3.s64 = ctx.r11.s64 + -28872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2464"))) PPC_WEAK_FUNC(sub_83BE2464);
PPC_FUNC_IMPL(__imp__sub_83BE2464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2468"))) PPC_WEAK_FUNC(sub_83BE2468);
PPC_FUNC_IMPL(__imp__sub_83BE2468) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,9284
	ctx.r7.s64 = ctx.r8.s64 + 9284;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,9284(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 9284);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,9284(r8)
	PPC_STORE_U32(ctx.r8.u32 + 9284, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE2490"))) PPC_WEAK_FUNC(sub_83BE2490);
PPC_FUNC_IMPL(__imp__sub_83BE2490) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-16756
	ctx.r6.s64 = ctx.r7.s64 + -16756;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-16828(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -16828);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,9284(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 9284);
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
	// std r9,-16756(r7)
	PPC_STORE_U64(ctx.r7.u32 + -16756, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE24D8"))) PPC_WEAK_FUNC(sub_83BE24D8);
PPC_FUNC_IMPL(__imp__sub_83BE24D8) {
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
	// addi r3,r11,9268
	ctx.r3.s64 = ctx.r11.s64 + 9268;
	// bl 0x83523120
	ctx.lr = 0x83BE24F0;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-28864
	ctx.r3.s64 = ctx.r10.s64 + -28864;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE24FC;
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

__attribute__((alias("__imp__sub_83BE250C"))) PPC_WEAK_FUNC(sub_83BE250C);
PPC_FUNC_IMPL(__imp__sub_83BE250C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2510"))) PPC_WEAK_FUNC(sub_83BE2510);
PPC_FUNC_IMPL(__imp__sub_83BE2510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28848
	ctx.r3.s64 = ctx.r11.s64 + -28848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE251C"))) PPC_WEAK_FUNC(sub_83BE251C);
PPC_FUNC_IMPL(__imp__sub_83BE251C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2520"))) PPC_WEAK_FUNC(sub_83BE2520);
PPC_FUNC_IMPL(__imp__sub_83BE2520) {
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
	// addi r3,r11,9296
	ctx.r3.s64 = ctx.r11.s64 + 9296;
	// bl 0x8259af80
	ctx.lr = 0x83BE2538;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-28832
	ctx.r3.s64 = ctx.r10.s64 + -28832;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE2544;
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

__attribute__((alias("__imp__sub_83BE2554"))) PPC_WEAK_FUNC(sub_83BE2554);
PPC_FUNC_IMPL(__imp__sub_83BE2554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2558"))) PPC_WEAK_FUNC(sub_83BE2558);
PPC_FUNC_IMPL(__imp__sub_83BE2558) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,9272
	ctx.r11.s64 = ctx.r8.s64 + 9272;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-16780(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16780);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-28840
	ctx.r3.s64 = ctx.r6.s64 + -28840;
	// stw r10,9272(r8)
	PPC_STORE_U32(ctx.r8.u32 + 9272, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2588"))) PPC_WEAK_FUNC(sub_83BE2588);
PPC_FUNC_IMPL(__imp__sub_83BE2588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28824
	ctx.r3.s64 = ctx.r11.s64 + -28824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2594"))) PPC_WEAK_FUNC(sub_83BE2594);
PPC_FUNC_IMPL(__imp__sub_83BE2594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2598"))) PPC_WEAK_FUNC(sub_83BE2598);
PPC_FUNC_IMPL(__imp__sub_83BE2598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28816
	ctx.r3.s64 = ctx.r11.s64 + -28816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE25A4"))) PPC_WEAK_FUNC(sub_83BE25A4);
PPC_FUNC_IMPL(__imp__sub_83BE25A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE25A8"))) PPC_WEAK_FUNC(sub_83BE25A8);
PPC_FUNC_IMPL(__imp__sub_83BE25A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28808
	ctx.r3.s64 = ctx.r11.s64 + -28808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE25B4"))) PPC_WEAK_FUNC(sub_83BE25B4);
PPC_FUNC_IMPL(__imp__sub_83BE25B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE25B8"))) PPC_WEAK_FUNC(sub_83BE25B8);
PPC_FUNC_IMPL(__imp__sub_83BE25B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28800
	ctx.r3.s64 = ctx.r11.s64 + -28800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE25C4"))) PPC_WEAK_FUNC(sub_83BE25C4);
PPC_FUNC_IMPL(__imp__sub_83BE25C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE25C8"))) PPC_WEAK_FUNC(sub_83BE25C8);
PPC_FUNC_IMPL(__imp__sub_83BE25C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28792
	ctx.r3.s64 = ctx.r11.s64 + -28792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE25D4"))) PPC_WEAK_FUNC(sub_83BE25D4);
PPC_FUNC_IMPL(__imp__sub_83BE25D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE25D8"))) PPC_WEAK_FUNC(sub_83BE25D8);
PPC_FUNC_IMPL(__imp__sub_83BE25D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28784
	ctx.r3.s64 = ctx.r11.s64 + -28784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE25E4"))) PPC_WEAK_FUNC(sub_83BE25E4);
PPC_FUNC_IMPL(__imp__sub_83BE25E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE25E8"))) PPC_WEAK_FUNC(sub_83BE25E8);
PPC_FUNC_IMPL(__imp__sub_83BE25E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28776
	ctx.r3.s64 = ctx.r11.s64 + -28776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE25F4"))) PPC_WEAK_FUNC(sub_83BE25F4);
PPC_FUNC_IMPL(__imp__sub_83BE25F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE25F8"))) PPC_WEAK_FUNC(sub_83BE25F8);
PPC_FUNC_IMPL(__imp__sub_83BE25F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28768
	ctx.r3.s64 = ctx.r11.s64 + -28768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2604"))) PPC_WEAK_FUNC(sub_83BE2604);
PPC_FUNC_IMPL(__imp__sub_83BE2604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2608"))) PPC_WEAK_FUNC(sub_83BE2608);
PPC_FUNC_IMPL(__imp__sub_83BE2608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28760
	ctx.r3.s64 = ctx.r11.s64 + -28760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2614"))) PPC_WEAK_FUNC(sub_83BE2614);
PPC_FUNC_IMPL(__imp__sub_83BE2614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2618"))) PPC_WEAK_FUNC(sub_83BE2618);
PPC_FUNC_IMPL(__imp__sub_83BE2618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28752
	ctx.r3.s64 = ctx.r11.s64 + -28752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2624"))) PPC_WEAK_FUNC(sub_83BE2624);
PPC_FUNC_IMPL(__imp__sub_83BE2624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2628"))) PPC_WEAK_FUNC(sub_83BE2628);
PPC_FUNC_IMPL(__imp__sub_83BE2628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28744
	ctx.r3.s64 = ctx.r11.s64 + -28744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2634"))) PPC_WEAK_FUNC(sub_83BE2634);
PPC_FUNC_IMPL(__imp__sub_83BE2634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2638"))) PPC_WEAK_FUNC(sub_83BE2638);
PPC_FUNC_IMPL(__imp__sub_83BE2638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2644"))) PPC_WEAK_FUNC(sub_83BE2644);
PPC_FUNC_IMPL(__imp__sub_83BE2644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2648"))) PPC_WEAK_FUNC(sub_83BE2648);
PPC_FUNC_IMPL(__imp__sub_83BE2648) {
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
	// addi r3,r11,9640
	ctx.r3.s64 = ctx.r11.s64 + 9640;
	// bl 0x83523120
	ctx.lr = 0x83BE2660;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-28728
	ctx.r3.s64 = ctx.r10.s64 + -28728;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE266C;
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

__attribute__((alias("__imp__sub_83BE267C"))) PPC_WEAK_FUNC(sub_83BE267C);
PPC_FUNC_IMPL(__imp__sub_83BE267C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2680"))) PPC_WEAK_FUNC(sub_83BE2680);
PPC_FUNC_IMPL(__imp__sub_83BE2680) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,9656
	ctx.r7.s64 = ctx.r8.s64 + 9656;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,9656(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 9656);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,9656(r8)
	PPC_STORE_U32(ctx.r8.u32 + 9656, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE26A8"))) PPC_WEAK_FUNC(sub_83BE26A8);
PPC_FUNC_IMPL(__imp__sub_83BE26A8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-16616
	ctx.r6.s64 = ctx.r7.s64 + -16616;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-16688(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -16688);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,9656(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 9656);
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
	// std r9,-16616(r7)
	PPC_STORE_U64(ctx.r7.u32 + -16616, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE26F0"))) PPC_WEAK_FUNC(sub_83BE26F0);
PPC_FUNC_IMPL(__imp__sub_83BE26F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28712
	ctx.r3.s64 = ctx.r11.s64 + -28712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE26FC"))) PPC_WEAK_FUNC(sub_83BE26FC);
PPC_FUNC_IMPL(__imp__sub_83BE26FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2700"))) PPC_WEAK_FUNC(sub_83BE2700);
PPC_FUNC_IMPL(__imp__sub_83BE2700) {
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
	// addi r3,r11,9664
	ctx.r3.s64 = ctx.r11.s64 + 9664;
	// bl 0x8259af80
	ctx.lr = 0x83BE2718;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-28696
	ctx.r3.s64 = ctx.r10.s64 + -28696;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE2724;
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

__attribute__((alias("__imp__sub_83BE2734"))) PPC_WEAK_FUNC(sub_83BE2734);
PPC_FUNC_IMPL(__imp__sub_83BE2734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2738"))) PPC_WEAK_FUNC(sub_83BE2738);
PPC_FUNC_IMPL(__imp__sub_83BE2738) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,9644
	ctx.r11.s64 = ctx.r8.s64 + 9644;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-16640(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16640);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-28704
	ctx.r3.s64 = ctx.r6.s64 + -28704;
	// stw r10,9644(r8)
	PPC_STORE_U32(ctx.r8.u32 + 9644, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2768"))) PPC_WEAK_FUNC(sub_83BE2768);
PPC_FUNC_IMPL(__imp__sub_83BE2768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28688
	ctx.r3.s64 = ctx.r11.s64 + -28688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2774"))) PPC_WEAK_FUNC(sub_83BE2774);
PPC_FUNC_IMPL(__imp__sub_83BE2774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2778"))) PPC_WEAK_FUNC(sub_83BE2778);
PPC_FUNC_IMPL(__imp__sub_83BE2778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28680
	ctx.r3.s64 = ctx.r11.s64 + -28680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2784"))) PPC_WEAK_FUNC(sub_83BE2784);
PPC_FUNC_IMPL(__imp__sub_83BE2784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2788"))) PPC_WEAK_FUNC(sub_83BE2788);
PPC_FUNC_IMPL(__imp__sub_83BE2788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28672
	ctx.r3.s64 = ctx.r11.s64 + -28672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2794"))) PPC_WEAK_FUNC(sub_83BE2794);
PPC_FUNC_IMPL(__imp__sub_83BE2794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2798"))) PPC_WEAK_FUNC(sub_83BE2798);
PPC_FUNC_IMPL(__imp__sub_83BE2798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28664
	ctx.r3.s64 = ctx.r11.s64 + -28664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE27A4"))) PPC_WEAK_FUNC(sub_83BE27A4);
PPC_FUNC_IMPL(__imp__sub_83BE27A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE27A8"))) PPC_WEAK_FUNC(sub_83BE27A8);
PPC_FUNC_IMPL(__imp__sub_83BE27A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28656
	ctx.r3.s64 = ctx.r11.s64 + -28656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE27B4"))) PPC_WEAK_FUNC(sub_83BE27B4);
PPC_FUNC_IMPL(__imp__sub_83BE27B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE27B8"))) PPC_WEAK_FUNC(sub_83BE27B8);
PPC_FUNC_IMPL(__imp__sub_83BE27B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28648
	ctx.r3.s64 = ctx.r11.s64 + -28648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE27C4"))) PPC_WEAK_FUNC(sub_83BE27C4);
PPC_FUNC_IMPL(__imp__sub_83BE27C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE27C8"))) PPC_WEAK_FUNC(sub_83BE27C8);
PPC_FUNC_IMPL(__imp__sub_83BE27C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28640
	ctx.r3.s64 = ctx.r11.s64 + -28640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE27D4"))) PPC_WEAK_FUNC(sub_83BE27D4);
PPC_FUNC_IMPL(__imp__sub_83BE27D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE27D8"))) PPC_WEAK_FUNC(sub_83BE27D8);
PPC_FUNC_IMPL(__imp__sub_83BE27D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28632
	ctx.r3.s64 = ctx.r11.s64 + -28632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE27E4"))) PPC_WEAK_FUNC(sub_83BE27E4);
PPC_FUNC_IMPL(__imp__sub_83BE27E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE27E8"))) PPC_WEAK_FUNC(sub_83BE27E8);
PPC_FUNC_IMPL(__imp__sub_83BE27E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28624
	ctx.r3.s64 = ctx.r11.s64 + -28624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE27F4"))) PPC_WEAK_FUNC(sub_83BE27F4);
PPC_FUNC_IMPL(__imp__sub_83BE27F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE27F8"))) PPC_WEAK_FUNC(sub_83BE27F8);
PPC_FUNC_IMPL(__imp__sub_83BE27F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28616
	ctx.r3.s64 = ctx.r11.s64 + -28616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2804"))) PPC_WEAK_FUNC(sub_83BE2804);
PPC_FUNC_IMPL(__imp__sub_83BE2804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2808"))) PPC_WEAK_FUNC(sub_83BE2808);
PPC_FUNC_IMPL(__imp__sub_83BE2808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28608
	ctx.r3.s64 = ctx.r11.s64 + -28608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2814"))) PPC_WEAK_FUNC(sub_83BE2814);
PPC_FUNC_IMPL(__imp__sub_83BE2814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2818"))) PPC_WEAK_FUNC(sub_83BE2818);
PPC_FUNC_IMPL(__imp__sub_83BE2818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28600
	ctx.r3.s64 = ctx.r11.s64 + -28600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

