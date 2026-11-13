#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BE2824"))) PPC_WEAK_FUNC(sub_83BE2824);
PPC_FUNC_IMPL(__imp__sub_83BE2824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2828"))) PPC_WEAK_FUNC(sub_83BE2828);
PPC_FUNC_IMPL(__imp__sub_83BE2828) {
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
	// addi r3,r11,10012
	ctx.r3.s64 = ctx.r11.s64 + 10012;
	// bl 0x83523120
	ctx.lr = 0x83BE2840;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-28592
	ctx.r3.s64 = ctx.r10.s64 + -28592;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE284C;
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

__attribute__((alias("__imp__sub_83BE285C"))) PPC_WEAK_FUNC(sub_83BE285C);
PPC_FUNC_IMPL(__imp__sub_83BE285C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2860"))) PPC_WEAK_FUNC(sub_83BE2860);
PPC_FUNC_IMPL(__imp__sub_83BE2860) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,10028
	ctx.r7.s64 = ctx.r8.s64 + 10028;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,10028(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10028);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,10028(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10028, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE2888"))) PPC_WEAK_FUNC(sub_83BE2888);
PPC_FUNC_IMPL(__imp__sub_83BE2888) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-16464
	ctx.r6.s64 = ctx.r7.s64 + -16464;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-16536(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -16536);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,10028(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10028);
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
	// std r9,-16464(r7)
	PPC_STORE_U64(ctx.r7.u32 + -16464, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE28D0"))) PPC_WEAK_FUNC(sub_83BE28D0);
PPC_FUNC_IMPL(__imp__sub_83BE28D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28576
	ctx.r3.s64 = ctx.r11.s64 + -28576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE28DC"))) PPC_WEAK_FUNC(sub_83BE28DC);
PPC_FUNC_IMPL(__imp__sub_83BE28DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE28E0"))) PPC_WEAK_FUNC(sub_83BE28E0);
PPC_FUNC_IMPL(__imp__sub_83BE28E0) {
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
	// addi r3,r11,10040
	ctx.r3.s64 = ctx.r11.s64 + 10040;
	// bl 0x8259af80
	ctx.lr = 0x83BE28F8;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-28560
	ctx.r3.s64 = ctx.r10.s64 + -28560;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE2904;
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

__attribute__((alias("__imp__sub_83BE2914"))) PPC_WEAK_FUNC(sub_83BE2914);
PPC_FUNC_IMPL(__imp__sub_83BE2914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2918"))) PPC_WEAK_FUNC(sub_83BE2918);
PPC_FUNC_IMPL(__imp__sub_83BE2918) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,10016
	ctx.r11.s64 = ctx.r8.s64 + 10016;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-16488(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16488);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-28568
	ctx.r3.s64 = ctx.r6.s64 + -28568;
	// stw r10,10016(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10016, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2948"))) PPC_WEAK_FUNC(sub_83BE2948);
PPC_FUNC_IMPL(__imp__sub_83BE2948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28552
	ctx.r3.s64 = ctx.r11.s64 + -28552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2954"))) PPC_WEAK_FUNC(sub_83BE2954);
PPC_FUNC_IMPL(__imp__sub_83BE2954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2958"))) PPC_WEAK_FUNC(sub_83BE2958);
PPC_FUNC_IMPL(__imp__sub_83BE2958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28544
	ctx.r3.s64 = ctx.r11.s64 + -28544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2964"))) PPC_WEAK_FUNC(sub_83BE2964);
PPC_FUNC_IMPL(__imp__sub_83BE2964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2968"))) PPC_WEAK_FUNC(sub_83BE2968);
PPC_FUNC_IMPL(__imp__sub_83BE2968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28536
	ctx.r3.s64 = ctx.r11.s64 + -28536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2974"))) PPC_WEAK_FUNC(sub_83BE2974);
PPC_FUNC_IMPL(__imp__sub_83BE2974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2978"))) PPC_WEAK_FUNC(sub_83BE2978);
PPC_FUNC_IMPL(__imp__sub_83BE2978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28528
	ctx.r3.s64 = ctx.r11.s64 + -28528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2984"))) PPC_WEAK_FUNC(sub_83BE2984);
PPC_FUNC_IMPL(__imp__sub_83BE2984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2988"))) PPC_WEAK_FUNC(sub_83BE2988);
PPC_FUNC_IMPL(__imp__sub_83BE2988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28520
	ctx.r3.s64 = ctx.r11.s64 + -28520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2994"))) PPC_WEAK_FUNC(sub_83BE2994);
PPC_FUNC_IMPL(__imp__sub_83BE2994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2998"))) PPC_WEAK_FUNC(sub_83BE2998);
PPC_FUNC_IMPL(__imp__sub_83BE2998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28512
	ctx.r3.s64 = ctx.r11.s64 + -28512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE29A4"))) PPC_WEAK_FUNC(sub_83BE29A4);
PPC_FUNC_IMPL(__imp__sub_83BE29A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE29A8"))) PPC_WEAK_FUNC(sub_83BE29A8);
PPC_FUNC_IMPL(__imp__sub_83BE29A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28504
	ctx.r3.s64 = ctx.r11.s64 + -28504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE29B4"))) PPC_WEAK_FUNC(sub_83BE29B4);
PPC_FUNC_IMPL(__imp__sub_83BE29B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE29B8"))) PPC_WEAK_FUNC(sub_83BE29B8);
PPC_FUNC_IMPL(__imp__sub_83BE29B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28496
	ctx.r3.s64 = ctx.r11.s64 + -28496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE29C4"))) PPC_WEAK_FUNC(sub_83BE29C4);
PPC_FUNC_IMPL(__imp__sub_83BE29C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE29C8"))) PPC_WEAK_FUNC(sub_83BE29C8);
PPC_FUNC_IMPL(__imp__sub_83BE29C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28488
	ctx.r3.s64 = ctx.r11.s64 + -28488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE29D4"))) PPC_WEAK_FUNC(sub_83BE29D4);
PPC_FUNC_IMPL(__imp__sub_83BE29D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE29D8"))) PPC_WEAK_FUNC(sub_83BE29D8);
PPC_FUNC_IMPL(__imp__sub_83BE29D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28480
	ctx.r3.s64 = ctx.r11.s64 + -28480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE29E4"))) PPC_WEAK_FUNC(sub_83BE29E4);
PPC_FUNC_IMPL(__imp__sub_83BE29E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE29E8"))) PPC_WEAK_FUNC(sub_83BE29E8);
PPC_FUNC_IMPL(__imp__sub_83BE29E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28472
	ctx.r3.s64 = ctx.r11.s64 + -28472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE29F4"))) PPC_WEAK_FUNC(sub_83BE29F4);
PPC_FUNC_IMPL(__imp__sub_83BE29F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE29F8"))) PPC_WEAK_FUNC(sub_83BE29F8);
PPC_FUNC_IMPL(__imp__sub_83BE29F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28464
	ctx.r3.s64 = ctx.r11.s64 + -28464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2A04"))) PPC_WEAK_FUNC(sub_83BE2A04);
PPC_FUNC_IMPL(__imp__sub_83BE2A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2A08"))) PPC_WEAK_FUNC(sub_83BE2A08);
PPC_FUNC_IMPL(__imp__sub_83BE2A08) {
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
	// addi r3,r11,10384
	ctx.r3.s64 = ctx.r11.s64 + 10384;
	// bl 0x83523120
	ctx.lr = 0x83BE2A20;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-28456
	ctx.r3.s64 = ctx.r10.s64 + -28456;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE2A2C;
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

__attribute__((alias("__imp__sub_83BE2A3C"))) PPC_WEAK_FUNC(sub_83BE2A3C);
PPC_FUNC_IMPL(__imp__sub_83BE2A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2A40"))) PPC_WEAK_FUNC(sub_83BE2A40);
PPC_FUNC_IMPL(__imp__sub_83BE2A40) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,10400
	ctx.r7.s64 = ctx.r8.s64 + 10400;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,10400(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10400);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,10400(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10400, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE2A68"))) PPC_WEAK_FUNC(sub_83BE2A68);
PPC_FUNC_IMPL(__imp__sub_83BE2A68) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-16320
	ctx.r6.s64 = ctx.r7.s64 + -16320;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-16392(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -16392);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,10400(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10400);
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
	// std r9,-16320(r7)
	PPC_STORE_U64(ctx.r7.u32 + -16320, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE2AB0"))) PPC_WEAK_FUNC(sub_83BE2AB0);
PPC_FUNC_IMPL(__imp__sub_83BE2AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28440
	ctx.r3.s64 = ctx.r11.s64 + -28440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2ABC"))) PPC_WEAK_FUNC(sub_83BE2ABC);
PPC_FUNC_IMPL(__imp__sub_83BE2ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2AC0"))) PPC_WEAK_FUNC(sub_83BE2AC0);
PPC_FUNC_IMPL(__imp__sub_83BE2AC0) {
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
	// addi r3,r11,10408
	ctx.r3.s64 = ctx.r11.s64 + 10408;
	// bl 0x8259af80
	ctx.lr = 0x83BE2AD8;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-28424
	ctx.r3.s64 = ctx.r10.s64 + -28424;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE2AE4;
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

__attribute__((alias("__imp__sub_83BE2AF4"))) PPC_WEAK_FUNC(sub_83BE2AF4);
PPC_FUNC_IMPL(__imp__sub_83BE2AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2AF8"))) PPC_WEAK_FUNC(sub_83BE2AF8);
PPC_FUNC_IMPL(__imp__sub_83BE2AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,10388
	ctx.r11.s64 = ctx.r8.s64 + 10388;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-16344(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16344);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-28432
	ctx.r3.s64 = ctx.r6.s64 + -28432;
	// stw r10,10388(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10388, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2B28"))) PPC_WEAK_FUNC(sub_83BE2B28);
PPC_FUNC_IMPL(__imp__sub_83BE2B28) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// addi r4,r11,17884
	ctx.r4.s64 = ctx.r11.s64 + 17884;
	// addi r3,r10,-16288
	ctx.r3.s64 = ctx.r10.s64 + -16288;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83BE2B4C;
	sub_8259CC28(ctx, base);
	// lis r9,-31790
	ctx.r9.s64 = -2083389440;
	// addi r3,r9,-28416
	ctx.r3.s64 = ctx.r9.s64 + -28416;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE2B58;
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

__attribute__((alias("__imp__sub_83BE2B68"))) PPC_WEAK_FUNC(sub_83BE2B68);
PPC_FUNC_IMPL(__imp__sub_83BE2B68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28312
	ctx.r3.s64 = ctx.r11.s64 + -28312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2B74"))) PPC_WEAK_FUNC(sub_83BE2B74);
PPC_FUNC_IMPL(__imp__sub_83BE2B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2B78"))) PPC_WEAK_FUNC(sub_83BE2B78);
PPC_FUNC_IMPL(__imp__sub_83BE2B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28304
	ctx.r3.s64 = ctx.r11.s64 + -28304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2B84"))) PPC_WEAK_FUNC(sub_83BE2B84);
PPC_FUNC_IMPL(__imp__sub_83BE2B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2B88"))) PPC_WEAK_FUNC(sub_83BE2B88);
PPC_FUNC_IMPL(__imp__sub_83BE2B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28296
	ctx.r3.s64 = ctx.r11.s64 + -28296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2B94"))) PPC_WEAK_FUNC(sub_83BE2B94);
PPC_FUNC_IMPL(__imp__sub_83BE2B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2B98"))) PPC_WEAK_FUNC(sub_83BE2B98);
PPC_FUNC_IMPL(__imp__sub_83BE2B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28288
	ctx.r3.s64 = ctx.r11.s64 + -28288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2BA4"))) PPC_WEAK_FUNC(sub_83BE2BA4);
PPC_FUNC_IMPL(__imp__sub_83BE2BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2BA8"))) PPC_WEAK_FUNC(sub_83BE2BA8);
PPC_FUNC_IMPL(__imp__sub_83BE2BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28280
	ctx.r3.s64 = ctx.r11.s64 + -28280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2BB4"))) PPC_WEAK_FUNC(sub_83BE2BB4);
PPC_FUNC_IMPL(__imp__sub_83BE2BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2BB8"))) PPC_WEAK_FUNC(sub_83BE2BB8);
PPC_FUNC_IMPL(__imp__sub_83BE2BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28272
	ctx.r3.s64 = ctx.r11.s64 + -28272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2BC4"))) PPC_WEAK_FUNC(sub_83BE2BC4);
PPC_FUNC_IMPL(__imp__sub_83BE2BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2BC8"))) PPC_WEAK_FUNC(sub_83BE2BC8);
PPC_FUNC_IMPL(__imp__sub_83BE2BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28264
	ctx.r3.s64 = ctx.r11.s64 + -28264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2BD4"))) PPC_WEAK_FUNC(sub_83BE2BD4);
PPC_FUNC_IMPL(__imp__sub_83BE2BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2BD8"))) PPC_WEAK_FUNC(sub_83BE2BD8);
PPC_FUNC_IMPL(__imp__sub_83BE2BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28256
	ctx.r3.s64 = ctx.r11.s64 + -28256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2BE4"))) PPC_WEAK_FUNC(sub_83BE2BE4);
PPC_FUNC_IMPL(__imp__sub_83BE2BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2BE8"))) PPC_WEAK_FUNC(sub_83BE2BE8);
PPC_FUNC_IMPL(__imp__sub_83BE2BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28248
	ctx.r3.s64 = ctx.r11.s64 + -28248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2BF4"))) PPC_WEAK_FUNC(sub_83BE2BF4);
PPC_FUNC_IMPL(__imp__sub_83BE2BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2BF8"))) PPC_WEAK_FUNC(sub_83BE2BF8);
PPC_FUNC_IMPL(__imp__sub_83BE2BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28240
	ctx.r3.s64 = ctx.r11.s64 + -28240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2C04"))) PPC_WEAK_FUNC(sub_83BE2C04);
PPC_FUNC_IMPL(__imp__sub_83BE2C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2C08"))) PPC_WEAK_FUNC(sub_83BE2C08);
PPC_FUNC_IMPL(__imp__sub_83BE2C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28232
	ctx.r3.s64 = ctx.r11.s64 + -28232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2C14"))) PPC_WEAK_FUNC(sub_83BE2C14);
PPC_FUNC_IMPL(__imp__sub_83BE2C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2C18"))) PPC_WEAK_FUNC(sub_83BE2C18);
PPC_FUNC_IMPL(__imp__sub_83BE2C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28224
	ctx.r3.s64 = ctx.r11.s64 + -28224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2C24"))) PPC_WEAK_FUNC(sub_83BE2C24);
PPC_FUNC_IMPL(__imp__sub_83BE2C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2C28"))) PPC_WEAK_FUNC(sub_83BE2C28);
PPC_FUNC_IMPL(__imp__sub_83BE2C28) {
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
	// addi r3,r11,10752
	ctx.r3.s64 = ctx.r11.s64 + 10752;
	// bl 0x83523120
	ctx.lr = 0x83BE2C40;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-28216
	ctx.r3.s64 = ctx.r10.s64 + -28216;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE2C4C;
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

__attribute__((alias("__imp__sub_83BE2C5C"))) PPC_WEAK_FUNC(sub_83BE2C5C);
PPC_FUNC_IMPL(__imp__sub_83BE2C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2C60"))) PPC_WEAK_FUNC(sub_83BE2C60);
PPC_FUNC_IMPL(__imp__sub_83BE2C60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,10768
	ctx.r7.s64 = ctx.r8.s64 + 10768;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,10768(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10768);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,10768(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10768, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE2C88"))) PPC_WEAK_FUNC(sub_83BE2C88);
PPC_FUNC_IMPL(__imp__sub_83BE2C88) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-16156
	ctx.r6.s64 = ctx.r7.s64 + -16156;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-16228(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -16228);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,10768(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10768);
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
	// std r9,-16156(r7)
	PPC_STORE_U64(ctx.r7.u32 + -16156, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE2CD0"))) PPC_WEAK_FUNC(sub_83BE2CD0);
PPC_FUNC_IMPL(__imp__sub_83BE2CD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28200
	ctx.r3.s64 = ctx.r11.s64 + -28200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2CDC"))) PPC_WEAK_FUNC(sub_83BE2CDC);
PPC_FUNC_IMPL(__imp__sub_83BE2CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2CE0"))) PPC_WEAK_FUNC(sub_83BE2CE0);
PPC_FUNC_IMPL(__imp__sub_83BE2CE0) {
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
	// addi r3,r11,10776
	ctx.r3.s64 = ctx.r11.s64 + 10776;
	// bl 0x8259af80
	ctx.lr = 0x83BE2CF8;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-28184
	ctx.r3.s64 = ctx.r10.s64 + -28184;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE2D04;
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

__attribute__((alias("__imp__sub_83BE2D14"))) PPC_WEAK_FUNC(sub_83BE2D14);
PPC_FUNC_IMPL(__imp__sub_83BE2D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2D18"))) PPC_WEAK_FUNC(sub_83BE2D18);
PPC_FUNC_IMPL(__imp__sub_83BE2D18) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,10756
	ctx.r11.s64 = ctx.r8.s64 + 10756;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-16180(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16180);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-28192
	ctx.r3.s64 = ctx.r6.s64 + -28192;
	// stw r10,10756(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10756, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2D48"))) PPC_WEAK_FUNC(sub_83BE2D48);
PPC_FUNC_IMPL(__imp__sub_83BE2D48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28176
	ctx.r3.s64 = ctx.r11.s64 + -28176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2D54"))) PPC_WEAK_FUNC(sub_83BE2D54);
PPC_FUNC_IMPL(__imp__sub_83BE2D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2D58"))) PPC_WEAK_FUNC(sub_83BE2D58);
PPC_FUNC_IMPL(__imp__sub_83BE2D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28168
	ctx.r3.s64 = ctx.r11.s64 + -28168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2D64"))) PPC_WEAK_FUNC(sub_83BE2D64);
PPC_FUNC_IMPL(__imp__sub_83BE2D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2D68"))) PPC_WEAK_FUNC(sub_83BE2D68);
PPC_FUNC_IMPL(__imp__sub_83BE2D68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28160
	ctx.r3.s64 = ctx.r11.s64 + -28160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2D74"))) PPC_WEAK_FUNC(sub_83BE2D74);
PPC_FUNC_IMPL(__imp__sub_83BE2D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2D78"))) PPC_WEAK_FUNC(sub_83BE2D78);
PPC_FUNC_IMPL(__imp__sub_83BE2D78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28152
	ctx.r3.s64 = ctx.r11.s64 + -28152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2D84"))) PPC_WEAK_FUNC(sub_83BE2D84);
PPC_FUNC_IMPL(__imp__sub_83BE2D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2D88"))) PPC_WEAK_FUNC(sub_83BE2D88);
PPC_FUNC_IMPL(__imp__sub_83BE2D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28144
	ctx.r3.s64 = ctx.r11.s64 + -28144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2D94"))) PPC_WEAK_FUNC(sub_83BE2D94);
PPC_FUNC_IMPL(__imp__sub_83BE2D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2D98"))) PPC_WEAK_FUNC(sub_83BE2D98);
PPC_FUNC_IMPL(__imp__sub_83BE2D98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28136
	ctx.r3.s64 = ctx.r11.s64 + -28136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2DA4"))) PPC_WEAK_FUNC(sub_83BE2DA4);
PPC_FUNC_IMPL(__imp__sub_83BE2DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2DA8"))) PPC_WEAK_FUNC(sub_83BE2DA8);
PPC_FUNC_IMPL(__imp__sub_83BE2DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28128
	ctx.r3.s64 = ctx.r11.s64 + -28128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2DB4"))) PPC_WEAK_FUNC(sub_83BE2DB4);
PPC_FUNC_IMPL(__imp__sub_83BE2DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2DB8"))) PPC_WEAK_FUNC(sub_83BE2DB8);
PPC_FUNC_IMPL(__imp__sub_83BE2DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28120
	ctx.r3.s64 = ctx.r11.s64 + -28120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2DC4"))) PPC_WEAK_FUNC(sub_83BE2DC4);
PPC_FUNC_IMPL(__imp__sub_83BE2DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2DC8"))) PPC_WEAK_FUNC(sub_83BE2DC8);
PPC_FUNC_IMPL(__imp__sub_83BE2DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28112
	ctx.r3.s64 = ctx.r11.s64 + -28112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2DD4"))) PPC_WEAK_FUNC(sub_83BE2DD4);
PPC_FUNC_IMPL(__imp__sub_83BE2DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2DD8"))) PPC_WEAK_FUNC(sub_83BE2DD8);
PPC_FUNC_IMPL(__imp__sub_83BE2DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28104
	ctx.r3.s64 = ctx.r11.s64 + -28104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2DE4"))) PPC_WEAK_FUNC(sub_83BE2DE4);
PPC_FUNC_IMPL(__imp__sub_83BE2DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2DE8"))) PPC_WEAK_FUNC(sub_83BE2DE8);
PPC_FUNC_IMPL(__imp__sub_83BE2DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28096
	ctx.r3.s64 = ctx.r11.s64 + -28096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2DF4"))) PPC_WEAK_FUNC(sub_83BE2DF4);
PPC_FUNC_IMPL(__imp__sub_83BE2DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2DF8"))) PPC_WEAK_FUNC(sub_83BE2DF8);
PPC_FUNC_IMPL(__imp__sub_83BE2DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28088
	ctx.r3.s64 = ctx.r11.s64 + -28088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2E04"))) PPC_WEAK_FUNC(sub_83BE2E04);
PPC_FUNC_IMPL(__imp__sub_83BE2E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2E08"))) PPC_WEAK_FUNC(sub_83BE2E08);
PPC_FUNC_IMPL(__imp__sub_83BE2E08) {
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
	// addi r3,r11,11120
	ctx.r3.s64 = ctx.r11.s64 + 11120;
	// bl 0x83523120
	ctx.lr = 0x83BE2E20;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-28080
	ctx.r3.s64 = ctx.r10.s64 + -28080;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE2E2C;
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

__attribute__((alias("__imp__sub_83BE2E3C"))) PPC_WEAK_FUNC(sub_83BE2E3C);
PPC_FUNC_IMPL(__imp__sub_83BE2E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2E40"))) PPC_WEAK_FUNC(sub_83BE2E40);
PPC_FUNC_IMPL(__imp__sub_83BE2E40) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,11136
	ctx.r7.s64 = ctx.r8.s64 + 11136;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,11136(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 11136);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,11136(r8)
	PPC_STORE_U32(ctx.r8.u32 + 11136, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE2E68"))) PPC_WEAK_FUNC(sub_83BE2E68);
PPC_FUNC_IMPL(__imp__sub_83BE2E68) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-16028
	ctx.r6.s64 = ctx.r7.s64 + -16028;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-16100(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -16100);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,11136(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11136);
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
	// std r9,-16028(r7)
	PPC_STORE_U64(ctx.r7.u32 + -16028, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE2EB0"))) PPC_WEAK_FUNC(sub_83BE2EB0);
PPC_FUNC_IMPL(__imp__sub_83BE2EB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28064
	ctx.r3.s64 = ctx.r11.s64 + -28064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2EBC"))) PPC_WEAK_FUNC(sub_83BE2EBC);
PPC_FUNC_IMPL(__imp__sub_83BE2EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2EC0"))) PPC_WEAK_FUNC(sub_83BE2EC0);
PPC_FUNC_IMPL(__imp__sub_83BE2EC0) {
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
	// addi r3,r11,11144
	ctx.r3.s64 = ctx.r11.s64 + 11144;
	// bl 0x8259af80
	ctx.lr = 0x83BE2ED8;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-28048
	ctx.r3.s64 = ctx.r10.s64 + -28048;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE2EE4;
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

__attribute__((alias("__imp__sub_83BE2EF4"))) PPC_WEAK_FUNC(sub_83BE2EF4);
PPC_FUNC_IMPL(__imp__sub_83BE2EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2EF8"))) PPC_WEAK_FUNC(sub_83BE2EF8);
PPC_FUNC_IMPL(__imp__sub_83BE2EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,11124
	ctx.r11.s64 = ctx.r8.s64 + 11124;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-16052(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16052);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-28056
	ctx.r3.s64 = ctx.r6.s64 + -28056;
	// stw r10,11124(r8)
	PPC_STORE_U32(ctx.r8.u32 + 11124, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2F28"))) PPC_WEAK_FUNC(sub_83BE2F28);
PPC_FUNC_IMPL(__imp__sub_83BE2F28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28040
	ctx.r3.s64 = ctx.r11.s64 + -28040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2F34"))) PPC_WEAK_FUNC(sub_83BE2F34);
PPC_FUNC_IMPL(__imp__sub_83BE2F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2F38"))) PPC_WEAK_FUNC(sub_83BE2F38);
PPC_FUNC_IMPL(__imp__sub_83BE2F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28032
	ctx.r3.s64 = ctx.r11.s64 + -28032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2F44"))) PPC_WEAK_FUNC(sub_83BE2F44);
PPC_FUNC_IMPL(__imp__sub_83BE2F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2F48"))) PPC_WEAK_FUNC(sub_83BE2F48);
PPC_FUNC_IMPL(__imp__sub_83BE2F48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28024
	ctx.r3.s64 = ctx.r11.s64 + -28024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2F54"))) PPC_WEAK_FUNC(sub_83BE2F54);
PPC_FUNC_IMPL(__imp__sub_83BE2F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2F58"))) PPC_WEAK_FUNC(sub_83BE2F58);
PPC_FUNC_IMPL(__imp__sub_83BE2F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28016
	ctx.r3.s64 = ctx.r11.s64 + -28016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2F64"))) PPC_WEAK_FUNC(sub_83BE2F64);
PPC_FUNC_IMPL(__imp__sub_83BE2F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2F68"))) PPC_WEAK_FUNC(sub_83BE2F68);
PPC_FUNC_IMPL(__imp__sub_83BE2F68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28008
	ctx.r3.s64 = ctx.r11.s64 + -28008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2F74"))) PPC_WEAK_FUNC(sub_83BE2F74);
PPC_FUNC_IMPL(__imp__sub_83BE2F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2F78"))) PPC_WEAK_FUNC(sub_83BE2F78);
PPC_FUNC_IMPL(__imp__sub_83BE2F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-28000
	ctx.r3.s64 = ctx.r11.s64 + -28000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2F84"))) PPC_WEAK_FUNC(sub_83BE2F84);
PPC_FUNC_IMPL(__imp__sub_83BE2F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2F88"))) PPC_WEAK_FUNC(sub_83BE2F88);
PPC_FUNC_IMPL(__imp__sub_83BE2F88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27992
	ctx.r3.s64 = ctx.r11.s64 + -27992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2F94"))) PPC_WEAK_FUNC(sub_83BE2F94);
PPC_FUNC_IMPL(__imp__sub_83BE2F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2F98"))) PPC_WEAK_FUNC(sub_83BE2F98);
PPC_FUNC_IMPL(__imp__sub_83BE2F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27984
	ctx.r3.s64 = ctx.r11.s64 + -27984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2FA4"))) PPC_WEAK_FUNC(sub_83BE2FA4);
PPC_FUNC_IMPL(__imp__sub_83BE2FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2FA8"))) PPC_WEAK_FUNC(sub_83BE2FA8);
PPC_FUNC_IMPL(__imp__sub_83BE2FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27976
	ctx.r3.s64 = ctx.r11.s64 + -27976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2FB4"))) PPC_WEAK_FUNC(sub_83BE2FB4);
PPC_FUNC_IMPL(__imp__sub_83BE2FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2FB8"))) PPC_WEAK_FUNC(sub_83BE2FB8);
PPC_FUNC_IMPL(__imp__sub_83BE2FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27968
	ctx.r3.s64 = ctx.r11.s64 + -27968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2FC4"))) PPC_WEAK_FUNC(sub_83BE2FC4);
PPC_FUNC_IMPL(__imp__sub_83BE2FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2FC8"))) PPC_WEAK_FUNC(sub_83BE2FC8);
PPC_FUNC_IMPL(__imp__sub_83BE2FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27960
	ctx.r3.s64 = ctx.r11.s64 + -27960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2FD4"))) PPC_WEAK_FUNC(sub_83BE2FD4);
PPC_FUNC_IMPL(__imp__sub_83BE2FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2FD8"))) PPC_WEAK_FUNC(sub_83BE2FD8);
PPC_FUNC_IMPL(__imp__sub_83BE2FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27952
	ctx.r3.s64 = ctx.r11.s64 + -27952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE2FE4"))) PPC_WEAK_FUNC(sub_83BE2FE4);
PPC_FUNC_IMPL(__imp__sub_83BE2FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE2FE8"))) PPC_WEAK_FUNC(sub_83BE2FE8);
PPC_FUNC_IMPL(__imp__sub_83BE2FE8) {
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
	// addi r3,r11,11488
	ctx.r3.s64 = ctx.r11.s64 + 11488;
	// bl 0x83523120
	ctx.lr = 0x83BE3000;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-27944
	ctx.r3.s64 = ctx.r10.s64 + -27944;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE300C;
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

__attribute__((alias("__imp__sub_83BE301C"))) PPC_WEAK_FUNC(sub_83BE301C);
PPC_FUNC_IMPL(__imp__sub_83BE301C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3020"))) PPC_WEAK_FUNC(sub_83BE3020);
PPC_FUNC_IMPL(__imp__sub_83BE3020) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,11504
	ctx.r7.s64 = ctx.r8.s64 + 11504;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,11504(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 11504);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,11504(r8)
	PPC_STORE_U32(ctx.r8.u32 + 11504, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE3048"))) PPC_WEAK_FUNC(sub_83BE3048);
PPC_FUNC_IMPL(__imp__sub_83BE3048) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-15800
	ctx.r6.s64 = ctx.r7.s64 + -15800;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-15872(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -15872);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,11504(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11504);
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
	// std r9,-15800(r7)
	PPC_STORE_U64(ctx.r7.u32 + -15800, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE3090"))) PPC_WEAK_FUNC(sub_83BE3090);
PPC_FUNC_IMPL(__imp__sub_83BE3090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27928
	ctx.r3.s64 = ctx.r11.s64 + -27928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE309C"))) PPC_WEAK_FUNC(sub_83BE309C);
PPC_FUNC_IMPL(__imp__sub_83BE309C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE30A0"))) PPC_WEAK_FUNC(sub_83BE30A0);
PPC_FUNC_IMPL(__imp__sub_83BE30A0) {
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
	// addi r3,r11,11512
	ctx.r3.s64 = ctx.r11.s64 + 11512;
	// bl 0x8259af80
	ctx.lr = 0x83BE30B8;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-27912
	ctx.r3.s64 = ctx.r10.s64 + -27912;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE30C4;
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

__attribute__((alias("__imp__sub_83BE30D4"))) PPC_WEAK_FUNC(sub_83BE30D4);
PPC_FUNC_IMPL(__imp__sub_83BE30D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE30D8"))) PPC_WEAK_FUNC(sub_83BE30D8);
PPC_FUNC_IMPL(__imp__sub_83BE30D8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,11492
	ctx.r11.s64 = ctx.r8.s64 + 11492;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-15824(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15824);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-27920
	ctx.r3.s64 = ctx.r6.s64 + -27920;
	// stw r10,11492(r8)
	PPC_STORE_U32(ctx.r8.u32 + 11492, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3108"))) PPC_WEAK_FUNC(sub_83BE3108);
PPC_FUNC_IMPL(__imp__sub_83BE3108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27904
	ctx.r3.s64 = ctx.r11.s64 + -27904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3114"))) PPC_WEAK_FUNC(sub_83BE3114);
PPC_FUNC_IMPL(__imp__sub_83BE3114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3118"))) PPC_WEAK_FUNC(sub_83BE3118);
PPC_FUNC_IMPL(__imp__sub_83BE3118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27896
	ctx.r3.s64 = ctx.r11.s64 + -27896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3124"))) PPC_WEAK_FUNC(sub_83BE3124);
PPC_FUNC_IMPL(__imp__sub_83BE3124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3128"))) PPC_WEAK_FUNC(sub_83BE3128);
PPC_FUNC_IMPL(__imp__sub_83BE3128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27888
	ctx.r3.s64 = ctx.r11.s64 + -27888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3134"))) PPC_WEAK_FUNC(sub_83BE3134);
PPC_FUNC_IMPL(__imp__sub_83BE3134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3138"))) PPC_WEAK_FUNC(sub_83BE3138);
PPC_FUNC_IMPL(__imp__sub_83BE3138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27880
	ctx.r3.s64 = ctx.r11.s64 + -27880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3144"))) PPC_WEAK_FUNC(sub_83BE3144);
PPC_FUNC_IMPL(__imp__sub_83BE3144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3148"))) PPC_WEAK_FUNC(sub_83BE3148);
PPC_FUNC_IMPL(__imp__sub_83BE3148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27872
	ctx.r3.s64 = ctx.r11.s64 + -27872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3154"))) PPC_WEAK_FUNC(sub_83BE3154);
PPC_FUNC_IMPL(__imp__sub_83BE3154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3158"))) PPC_WEAK_FUNC(sub_83BE3158);
PPC_FUNC_IMPL(__imp__sub_83BE3158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27864
	ctx.r3.s64 = ctx.r11.s64 + -27864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3164"))) PPC_WEAK_FUNC(sub_83BE3164);
PPC_FUNC_IMPL(__imp__sub_83BE3164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3168"))) PPC_WEAK_FUNC(sub_83BE3168);
PPC_FUNC_IMPL(__imp__sub_83BE3168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27856
	ctx.r3.s64 = ctx.r11.s64 + -27856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3174"))) PPC_WEAK_FUNC(sub_83BE3174);
PPC_FUNC_IMPL(__imp__sub_83BE3174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3178"))) PPC_WEAK_FUNC(sub_83BE3178);
PPC_FUNC_IMPL(__imp__sub_83BE3178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27848
	ctx.r3.s64 = ctx.r11.s64 + -27848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3184"))) PPC_WEAK_FUNC(sub_83BE3184);
PPC_FUNC_IMPL(__imp__sub_83BE3184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3188"))) PPC_WEAK_FUNC(sub_83BE3188);
PPC_FUNC_IMPL(__imp__sub_83BE3188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27840
	ctx.r3.s64 = ctx.r11.s64 + -27840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3194"))) PPC_WEAK_FUNC(sub_83BE3194);
PPC_FUNC_IMPL(__imp__sub_83BE3194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3198"))) PPC_WEAK_FUNC(sub_83BE3198);
PPC_FUNC_IMPL(__imp__sub_83BE3198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27832
	ctx.r3.s64 = ctx.r11.s64 + -27832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE31A4"))) PPC_WEAK_FUNC(sub_83BE31A4);
PPC_FUNC_IMPL(__imp__sub_83BE31A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE31A8"))) PPC_WEAK_FUNC(sub_83BE31A8);
PPC_FUNC_IMPL(__imp__sub_83BE31A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27824
	ctx.r3.s64 = ctx.r11.s64 + -27824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE31B4"))) PPC_WEAK_FUNC(sub_83BE31B4);
PPC_FUNC_IMPL(__imp__sub_83BE31B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE31B8"))) PPC_WEAK_FUNC(sub_83BE31B8);
PPC_FUNC_IMPL(__imp__sub_83BE31B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27816
	ctx.r3.s64 = ctx.r11.s64 + -27816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE31C4"))) PPC_WEAK_FUNC(sub_83BE31C4);
PPC_FUNC_IMPL(__imp__sub_83BE31C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE31C8"))) PPC_WEAK_FUNC(sub_83BE31C8);
PPC_FUNC_IMPL(__imp__sub_83BE31C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,11888
	ctx.r7.s64 = ctx.r8.s64 + 11888;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,11888(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 11888);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,11888(r8)
	PPC_STORE_U32(ctx.r8.u32 + 11888, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE31F0"))) PPC_WEAK_FUNC(sub_83BE31F0);
PPC_FUNC_IMPL(__imp__sub_83BE31F0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-15652
	ctx.r6.s64 = ctx.r7.s64 + -15652;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-15724(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -15724);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,11888(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11888);
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
	// std r9,-15652(r7)
	PPC_STORE_U64(ctx.r7.u32 + -15652, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE3238"))) PPC_WEAK_FUNC(sub_83BE3238);
PPC_FUNC_IMPL(__imp__sub_83BE3238) {
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
	// addi r3,r11,11872
	ctx.r3.s64 = ctx.r11.s64 + 11872;
	// bl 0x83523120
	ctx.lr = 0x83BE3250;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-27808
	ctx.r3.s64 = ctx.r10.s64 + -27808;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE325C;
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

__attribute__((alias("__imp__sub_83BE326C"))) PPC_WEAK_FUNC(sub_83BE326C);
PPC_FUNC_IMPL(__imp__sub_83BE326C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3270"))) PPC_WEAK_FUNC(sub_83BE3270);
PPC_FUNC_IMPL(__imp__sub_83BE3270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27792
	ctx.r3.s64 = ctx.r11.s64 + -27792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE327C"))) PPC_WEAK_FUNC(sub_83BE327C);
PPC_FUNC_IMPL(__imp__sub_83BE327C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3280"))) PPC_WEAK_FUNC(sub_83BE3280);
PPC_FUNC_IMPL(__imp__sub_83BE3280) {
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
	// addi r3,r11,11896
	ctx.r3.s64 = ctx.r11.s64 + 11896;
	// bl 0x8259af80
	ctx.lr = 0x83BE3298;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-27776
	ctx.r3.s64 = ctx.r10.s64 + -27776;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE32A4;
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

__attribute__((alias("__imp__sub_83BE32B4"))) PPC_WEAK_FUNC(sub_83BE32B4);
PPC_FUNC_IMPL(__imp__sub_83BE32B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE32B8"))) PPC_WEAK_FUNC(sub_83BE32B8);
PPC_FUNC_IMPL(__imp__sub_83BE32B8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,11876
	ctx.r11.s64 = ctx.r8.s64 + 11876;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-15676(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15676);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-27784
	ctx.r3.s64 = ctx.r6.s64 + -27784;
	// stw r10,11876(r8)
	PPC_STORE_U32(ctx.r8.u32 + 11876, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE32E8"))) PPC_WEAK_FUNC(sub_83BE32E8);
PPC_FUNC_IMPL(__imp__sub_83BE32E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27768
	ctx.r3.s64 = ctx.r11.s64 + -27768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE32F4"))) PPC_WEAK_FUNC(sub_83BE32F4);
PPC_FUNC_IMPL(__imp__sub_83BE32F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE32F8"))) PPC_WEAK_FUNC(sub_83BE32F8);
PPC_FUNC_IMPL(__imp__sub_83BE32F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27760
	ctx.r3.s64 = ctx.r11.s64 + -27760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3304"))) PPC_WEAK_FUNC(sub_83BE3304);
PPC_FUNC_IMPL(__imp__sub_83BE3304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3308"))) PPC_WEAK_FUNC(sub_83BE3308);
PPC_FUNC_IMPL(__imp__sub_83BE3308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27752
	ctx.r3.s64 = ctx.r11.s64 + -27752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3314"))) PPC_WEAK_FUNC(sub_83BE3314);
PPC_FUNC_IMPL(__imp__sub_83BE3314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3318"))) PPC_WEAK_FUNC(sub_83BE3318);
PPC_FUNC_IMPL(__imp__sub_83BE3318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27744
	ctx.r3.s64 = ctx.r11.s64 + -27744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3324"))) PPC_WEAK_FUNC(sub_83BE3324);
PPC_FUNC_IMPL(__imp__sub_83BE3324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3328"))) PPC_WEAK_FUNC(sub_83BE3328);
PPC_FUNC_IMPL(__imp__sub_83BE3328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27736
	ctx.r3.s64 = ctx.r11.s64 + -27736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3334"))) PPC_WEAK_FUNC(sub_83BE3334);
PPC_FUNC_IMPL(__imp__sub_83BE3334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3338"))) PPC_WEAK_FUNC(sub_83BE3338);
PPC_FUNC_IMPL(__imp__sub_83BE3338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27728
	ctx.r3.s64 = ctx.r11.s64 + -27728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3344"))) PPC_WEAK_FUNC(sub_83BE3344);
PPC_FUNC_IMPL(__imp__sub_83BE3344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3348"))) PPC_WEAK_FUNC(sub_83BE3348);
PPC_FUNC_IMPL(__imp__sub_83BE3348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27720
	ctx.r3.s64 = ctx.r11.s64 + -27720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3354"))) PPC_WEAK_FUNC(sub_83BE3354);
PPC_FUNC_IMPL(__imp__sub_83BE3354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3358"))) PPC_WEAK_FUNC(sub_83BE3358);
PPC_FUNC_IMPL(__imp__sub_83BE3358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27712
	ctx.r3.s64 = ctx.r11.s64 + -27712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3364"))) PPC_WEAK_FUNC(sub_83BE3364);
PPC_FUNC_IMPL(__imp__sub_83BE3364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3368"))) PPC_WEAK_FUNC(sub_83BE3368);
PPC_FUNC_IMPL(__imp__sub_83BE3368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27704
	ctx.r3.s64 = ctx.r11.s64 + -27704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3374"))) PPC_WEAK_FUNC(sub_83BE3374);
PPC_FUNC_IMPL(__imp__sub_83BE3374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3378"))) PPC_WEAK_FUNC(sub_83BE3378);
PPC_FUNC_IMPL(__imp__sub_83BE3378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27696
	ctx.r3.s64 = ctx.r11.s64 + -27696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3384"))) PPC_WEAK_FUNC(sub_83BE3384);
PPC_FUNC_IMPL(__imp__sub_83BE3384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3388"))) PPC_WEAK_FUNC(sub_83BE3388);
PPC_FUNC_IMPL(__imp__sub_83BE3388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27688
	ctx.r3.s64 = ctx.r11.s64 + -27688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3394"))) PPC_WEAK_FUNC(sub_83BE3394);
PPC_FUNC_IMPL(__imp__sub_83BE3394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3398"))) PPC_WEAK_FUNC(sub_83BE3398);
PPC_FUNC_IMPL(__imp__sub_83BE3398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27680
	ctx.r3.s64 = ctx.r11.s64 + -27680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE33A4"))) PPC_WEAK_FUNC(sub_83BE33A4);
PPC_FUNC_IMPL(__imp__sub_83BE33A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE33A8"))) PPC_WEAK_FUNC(sub_83BE33A8);
PPC_FUNC_IMPL(__imp__sub_83BE33A8) {
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
	// addi r3,r11,12240
	ctx.r3.s64 = ctx.r11.s64 + 12240;
	// bl 0x83523120
	ctx.lr = 0x83BE33C0;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-27672
	ctx.r3.s64 = ctx.r10.s64 + -27672;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE33CC;
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

__attribute__((alias("__imp__sub_83BE33DC"))) PPC_WEAK_FUNC(sub_83BE33DC);
PPC_FUNC_IMPL(__imp__sub_83BE33DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE33E0"))) PPC_WEAK_FUNC(sub_83BE33E0);
PPC_FUNC_IMPL(__imp__sub_83BE33E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,12256
	ctx.r7.s64 = ctx.r8.s64 + 12256;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,12256(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12256);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,12256(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12256, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE3408"))) PPC_WEAK_FUNC(sub_83BE3408);
PPC_FUNC_IMPL(__imp__sub_83BE3408) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-15484
	ctx.r6.s64 = ctx.r7.s64 + -15484;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-15556(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -15556);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,12256(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12256);
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
	// std r9,-15484(r7)
	PPC_STORE_U64(ctx.r7.u32 + -15484, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE3450"))) PPC_WEAK_FUNC(sub_83BE3450);
PPC_FUNC_IMPL(__imp__sub_83BE3450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27656
	ctx.r3.s64 = ctx.r11.s64 + -27656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE345C"))) PPC_WEAK_FUNC(sub_83BE345C);
PPC_FUNC_IMPL(__imp__sub_83BE345C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3460"))) PPC_WEAK_FUNC(sub_83BE3460);
PPC_FUNC_IMPL(__imp__sub_83BE3460) {
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
	// addi r3,r11,12264
	ctx.r3.s64 = ctx.r11.s64 + 12264;
	// bl 0x8259af80
	ctx.lr = 0x83BE3478;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-27640
	ctx.r3.s64 = ctx.r10.s64 + -27640;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE3484;
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

__attribute__((alias("__imp__sub_83BE3494"))) PPC_WEAK_FUNC(sub_83BE3494);
PPC_FUNC_IMPL(__imp__sub_83BE3494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3498"))) PPC_WEAK_FUNC(sub_83BE3498);
PPC_FUNC_IMPL(__imp__sub_83BE3498) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,12244
	ctx.r11.s64 = ctx.r8.s64 + 12244;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-15508(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15508);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-27648
	ctx.r3.s64 = ctx.r6.s64 + -27648;
	// stw r10,12244(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12244, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE34C8"))) PPC_WEAK_FUNC(sub_83BE34C8);
PPC_FUNC_IMPL(__imp__sub_83BE34C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27632
	ctx.r3.s64 = ctx.r11.s64 + -27632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE34D4"))) PPC_WEAK_FUNC(sub_83BE34D4);
PPC_FUNC_IMPL(__imp__sub_83BE34D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE34D8"))) PPC_WEAK_FUNC(sub_83BE34D8);
PPC_FUNC_IMPL(__imp__sub_83BE34D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27624
	ctx.r3.s64 = ctx.r11.s64 + -27624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE34E4"))) PPC_WEAK_FUNC(sub_83BE34E4);
PPC_FUNC_IMPL(__imp__sub_83BE34E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE34E8"))) PPC_WEAK_FUNC(sub_83BE34E8);
PPC_FUNC_IMPL(__imp__sub_83BE34E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27616
	ctx.r3.s64 = ctx.r11.s64 + -27616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE34F4"))) PPC_WEAK_FUNC(sub_83BE34F4);
PPC_FUNC_IMPL(__imp__sub_83BE34F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE34F8"))) PPC_WEAK_FUNC(sub_83BE34F8);
PPC_FUNC_IMPL(__imp__sub_83BE34F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27608
	ctx.r3.s64 = ctx.r11.s64 + -27608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3504"))) PPC_WEAK_FUNC(sub_83BE3504);
PPC_FUNC_IMPL(__imp__sub_83BE3504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3508"))) PPC_WEAK_FUNC(sub_83BE3508);
PPC_FUNC_IMPL(__imp__sub_83BE3508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27600
	ctx.r3.s64 = ctx.r11.s64 + -27600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3514"))) PPC_WEAK_FUNC(sub_83BE3514);
PPC_FUNC_IMPL(__imp__sub_83BE3514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3518"))) PPC_WEAK_FUNC(sub_83BE3518);
PPC_FUNC_IMPL(__imp__sub_83BE3518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27592
	ctx.r3.s64 = ctx.r11.s64 + -27592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3524"))) PPC_WEAK_FUNC(sub_83BE3524);
PPC_FUNC_IMPL(__imp__sub_83BE3524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3528"))) PPC_WEAK_FUNC(sub_83BE3528);
PPC_FUNC_IMPL(__imp__sub_83BE3528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27584
	ctx.r3.s64 = ctx.r11.s64 + -27584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3534"))) PPC_WEAK_FUNC(sub_83BE3534);
PPC_FUNC_IMPL(__imp__sub_83BE3534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3538"))) PPC_WEAK_FUNC(sub_83BE3538);
PPC_FUNC_IMPL(__imp__sub_83BE3538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27576
	ctx.r3.s64 = ctx.r11.s64 + -27576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3544"))) PPC_WEAK_FUNC(sub_83BE3544);
PPC_FUNC_IMPL(__imp__sub_83BE3544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3548"))) PPC_WEAK_FUNC(sub_83BE3548);
PPC_FUNC_IMPL(__imp__sub_83BE3548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27568
	ctx.r3.s64 = ctx.r11.s64 + -27568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3554"))) PPC_WEAK_FUNC(sub_83BE3554);
PPC_FUNC_IMPL(__imp__sub_83BE3554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3558"))) PPC_WEAK_FUNC(sub_83BE3558);
PPC_FUNC_IMPL(__imp__sub_83BE3558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27560
	ctx.r3.s64 = ctx.r11.s64 + -27560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3564"))) PPC_WEAK_FUNC(sub_83BE3564);
PPC_FUNC_IMPL(__imp__sub_83BE3564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3568"))) PPC_WEAK_FUNC(sub_83BE3568);
PPC_FUNC_IMPL(__imp__sub_83BE3568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27552
	ctx.r3.s64 = ctx.r11.s64 + -27552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3574"))) PPC_WEAK_FUNC(sub_83BE3574);
PPC_FUNC_IMPL(__imp__sub_83BE3574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3578"))) PPC_WEAK_FUNC(sub_83BE3578);
PPC_FUNC_IMPL(__imp__sub_83BE3578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27544
	ctx.r3.s64 = ctx.r11.s64 + -27544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3584"))) PPC_WEAK_FUNC(sub_83BE3584);
PPC_FUNC_IMPL(__imp__sub_83BE3584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3588"))) PPC_WEAK_FUNC(sub_83BE3588);
PPC_FUNC_IMPL(__imp__sub_83BE3588) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,12624
	ctx.r7.s64 = ctx.r8.s64 + 12624;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,12624(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12624);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,12624(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12624, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE35B0"))) PPC_WEAK_FUNC(sub_83BE35B0);
PPC_FUNC_IMPL(__imp__sub_83BE35B0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-15316
	ctx.r6.s64 = ctx.r7.s64 + -15316;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-15388(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -15388);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,12624(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12624);
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
	// std r9,-15316(r7)
	PPC_STORE_U64(ctx.r7.u32 + -15316, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE35F8"))) PPC_WEAK_FUNC(sub_83BE35F8);
PPC_FUNC_IMPL(__imp__sub_83BE35F8) {
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
	// addi r3,r11,12608
	ctx.r3.s64 = ctx.r11.s64 + 12608;
	// bl 0x83523120
	ctx.lr = 0x83BE3610;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-27536
	ctx.r3.s64 = ctx.r10.s64 + -27536;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE361C;
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

__attribute__((alias("__imp__sub_83BE362C"))) PPC_WEAK_FUNC(sub_83BE362C);
PPC_FUNC_IMPL(__imp__sub_83BE362C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3630"))) PPC_WEAK_FUNC(sub_83BE3630);
PPC_FUNC_IMPL(__imp__sub_83BE3630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27520
	ctx.r3.s64 = ctx.r11.s64 + -27520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE363C"))) PPC_WEAK_FUNC(sub_83BE363C);
PPC_FUNC_IMPL(__imp__sub_83BE363C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3640"))) PPC_WEAK_FUNC(sub_83BE3640);
PPC_FUNC_IMPL(__imp__sub_83BE3640) {
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
	// addi r3,r11,12632
	ctx.r3.s64 = ctx.r11.s64 + 12632;
	// bl 0x8259af80
	ctx.lr = 0x83BE3658;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-27504
	ctx.r3.s64 = ctx.r10.s64 + -27504;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE3664;
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

__attribute__((alias("__imp__sub_83BE3674"))) PPC_WEAK_FUNC(sub_83BE3674);
PPC_FUNC_IMPL(__imp__sub_83BE3674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3678"))) PPC_WEAK_FUNC(sub_83BE3678);
PPC_FUNC_IMPL(__imp__sub_83BE3678) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,12612
	ctx.r11.s64 = ctx.r8.s64 + 12612;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-15340(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15340);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-27512
	ctx.r3.s64 = ctx.r6.s64 + -27512;
	// stw r10,12612(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12612, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE36A8"))) PPC_WEAK_FUNC(sub_83BE36A8);
PPC_FUNC_IMPL(__imp__sub_83BE36A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27496
	ctx.r3.s64 = ctx.r11.s64 + -27496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE36B4"))) PPC_WEAK_FUNC(sub_83BE36B4);
PPC_FUNC_IMPL(__imp__sub_83BE36B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE36B8"))) PPC_WEAK_FUNC(sub_83BE36B8);
PPC_FUNC_IMPL(__imp__sub_83BE36B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27488
	ctx.r3.s64 = ctx.r11.s64 + -27488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE36C4"))) PPC_WEAK_FUNC(sub_83BE36C4);
PPC_FUNC_IMPL(__imp__sub_83BE36C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE36C8"))) PPC_WEAK_FUNC(sub_83BE36C8);
PPC_FUNC_IMPL(__imp__sub_83BE36C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27480
	ctx.r3.s64 = ctx.r11.s64 + -27480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE36D4"))) PPC_WEAK_FUNC(sub_83BE36D4);
PPC_FUNC_IMPL(__imp__sub_83BE36D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE36D8"))) PPC_WEAK_FUNC(sub_83BE36D8);
PPC_FUNC_IMPL(__imp__sub_83BE36D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27472
	ctx.r3.s64 = ctx.r11.s64 + -27472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE36E4"))) PPC_WEAK_FUNC(sub_83BE36E4);
PPC_FUNC_IMPL(__imp__sub_83BE36E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE36E8"))) PPC_WEAK_FUNC(sub_83BE36E8);
PPC_FUNC_IMPL(__imp__sub_83BE36E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27464
	ctx.r3.s64 = ctx.r11.s64 + -27464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE36F4"))) PPC_WEAK_FUNC(sub_83BE36F4);
PPC_FUNC_IMPL(__imp__sub_83BE36F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE36F8"))) PPC_WEAK_FUNC(sub_83BE36F8);
PPC_FUNC_IMPL(__imp__sub_83BE36F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27456
	ctx.r3.s64 = ctx.r11.s64 + -27456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3704"))) PPC_WEAK_FUNC(sub_83BE3704);
PPC_FUNC_IMPL(__imp__sub_83BE3704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3708"))) PPC_WEAK_FUNC(sub_83BE3708);
PPC_FUNC_IMPL(__imp__sub_83BE3708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27448
	ctx.r3.s64 = ctx.r11.s64 + -27448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3714"))) PPC_WEAK_FUNC(sub_83BE3714);
PPC_FUNC_IMPL(__imp__sub_83BE3714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

