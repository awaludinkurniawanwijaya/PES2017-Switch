#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BEB9B0"))) PPC_WEAK_FUNC(sub_83BEB9B0);
PPC_FUNC_IMPL(__imp__sub_83BEB9B0) {
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
	// addi r3,r11,32112
	ctx.r3.s64 = ctx.r11.s64 + 32112;
	// bl 0x8259af80
	ctx.lr = 0x83BEB9C8;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-17880
	ctx.r3.s64 = ctx.r10.s64 + -17880;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEB9D4;
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

__attribute__((alias("__imp__sub_83BEB9E4"))) PPC_WEAK_FUNC(sub_83BEB9E4);
PPC_FUNC_IMPL(__imp__sub_83BEB9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEB9E8"))) PPC_WEAK_FUNC(sub_83BEB9E8);
PPC_FUNC_IMPL(__imp__sub_83BEB9E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,32092
	ctx.r11.s64 = ctx.r8.s64 + 32092;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-9592(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9592);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-17888
	ctx.r3.s64 = ctx.r6.s64 + -17888;
	// stw r10,32092(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32092, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEBA18"))) PPC_WEAK_FUNC(sub_83BEBA18);
PPC_FUNC_IMPL(__imp__sub_83BEBA18) {
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
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// addi r4,r11,-3780
	ctx.r4.s64 = ctx.r11.s64 + -3780;
	// addi r3,r10,-9544
	ctx.r3.s64 = ctx.r10.s64 + -9544;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83BEBA3C;
	sub_8259CC28(ctx, base);
	// lis r9,-31790
	ctx.r9.s64 = -2083389440;
	// addi r3,r9,-17872
	ctx.r3.s64 = ctx.r9.s64 + -17872;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEBA48;
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

__attribute__((alias("__imp__sub_83BEBA58"))) PPC_WEAK_FUNC(sub_83BEBA58);
PPC_FUNC_IMPL(__imp__sub_83BEBA58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17768
	ctx.r3.s64 = ctx.r11.s64 + -17768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEBA64"))) PPC_WEAK_FUNC(sub_83BEBA64);
PPC_FUNC_IMPL(__imp__sub_83BEBA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEBA68"))) PPC_WEAK_FUNC(sub_83BEBA68);
PPC_FUNC_IMPL(__imp__sub_83BEBA68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17760
	ctx.r3.s64 = ctx.r11.s64 + -17760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEBA74"))) PPC_WEAK_FUNC(sub_83BEBA74);
PPC_FUNC_IMPL(__imp__sub_83BEBA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEBA78"))) PPC_WEAK_FUNC(sub_83BEBA78);
PPC_FUNC_IMPL(__imp__sub_83BEBA78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17752
	ctx.r3.s64 = ctx.r11.s64 + -17752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEBA84"))) PPC_WEAK_FUNC(sub_83BEBA84);
PPC_FUNC_IMPL(__imp__sub_83BEBA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEBA88"))) PPC_WEAK_FUNC(sub_83BEBA88);
PPC_FUNC_IMPL(__imp__sub_83BEBA88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17744
	ctx.r3.s64 = ctx.r11.s64 + -17744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEBA94"))) PPC_WEAK_FUNC(sub_83BEBA94);
PPC_FUNC_IMPL(__imp__sub_83BEBA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEBA98"))) PPC_WEAK_FUNC(sub_83BEBA98);
PPC_FUNC_IMPL(__imp__sub_83BEBA98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17736
	ctx.r3.s64 = ctx.r11.s64 + -17736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEBAA4"))) PPC_WEAK_FUNC(sub_83BEBAA4);
PPC_FUNC_IMPL(__imp__sub_83BEBAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEBAA8"))) PPC_WEAK_FUNC(sub_83BEBAA8);
PPC_FUNC_IMPL(__imp__sub_83BEBAA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17728
	ctx.r3.s64 = ctx.r11.s64 + -17728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEBAB4"))) PPC_WEAK_FUNC(sub_83BEBAB4);
PPC_FUNC_IMPL(__imp__sub_83BEBAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEBAB8"))) PPC_WEAK_FUNC(sub_83BEBAB8);
PPC_FUNC_IMPL(__imp__sub_83BEBAB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17720
	ctx.r3.s64 = ctx.r11.s64 + -17720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEBAC4"))) PPC_WEAK_FUNC(sub_83BEBAC4);
PPC_FUNC_IMPL(__imp__sub_83BEBAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEBAC8"))) PPC_WEAK_FUNC(sub_83BEBAC8);
PPC_FUNC_IMPL(__imp__sub_83BEBAC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17712
	ctx.r3.s64 = ctx.r11.s64 + -17712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEBAD4"))) PPC_WEAK_FUNC(sub_83BEBAD4);
PPC_FUNC_IMPL(__imp__sub_83BEBAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEBAD8"))) PPC_WEAK_FUNC(sub_83BEBAD8);
PPC_FUNC_IMPL(__imp__sub_83BEBAD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17704
	ctx.r3.s64 = ctx.r11.s64 + -17704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEBAE4"))) PPC_WEAK_FUNC(sub_83BEBAE4);
PPC_FUNC_IMPL(__imp__sub_83BEBAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEBAE8"))) PPC_WEAK_FUNC(sub_83BEBAE8);
PPC_FUNC_IMPL(__imp__sub_83BEBAE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17696
	ctx.r3.s64 = ctx.r11.s64 + -17696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEBAF4"))) PPC_WEAK_FUNC(sub_83BEBAF4);
PPC_FUNC_IMPL(__imp__sub_83BEBAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEBAF8"))) PPC_WEAK_FUNC(sub_83BEBAF8);
PPC_FUNC_IMPL(__imp__sub_83BEBAF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17688
	ctx.r3.s64 = ctx.r11.s64 + -17688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEBB04"))) PPC_WEAK_FUNC(sub_83BEBB04);
PPC_FUNC_IMPL(__imp__sub_83BEBB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEBB08"))) PPC_WEAK_FUNC(sub_83BEBB08);
PPC_FUNC_IMPL(__imp__sub_83BEBB08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17680
	ctx.r3.s64 = ctx.r11.s64 + -17680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEBB14"))) PPC_WEAK_FUNC(sub_83BEBB14);
PPC_FUNC_IMPL(__imp__sub_83BEBB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEBB18"))) PPC_WEAK_FUNC(sub_83BEBB18);
PPC_FUNC_IMPL(__imp__sub_83BEBB18) {
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
	// addi r3,r11,32456
	ctx.r3.s64 = ctx.r11.s64 + 32456;
	// bl 0x83523120
	ctx.lr = 0x83BEBB30;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-17672
	ctx.r3.s64 = ctx.r10.s64 + -17672;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEBB3C;
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

__attribute__((alias("__imp__sub_83BEBB4C"))) PPC_WEAK_FUNC(sub_83BEBB4C);
PPC_FUNC_IMPL(__imp__sub_83BEBB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEBB50"))) PPC_WEAK_FUNC(sub_83BEBB50);
PPC_FUNC_IMPL(__imp__sub_83BEBB50) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,32472
	ctx.r7.s64 = ctx.r8.s64 + 32472;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,32472(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32472);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,32472(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32472, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEBB78"))) PPC_WEAK_FUNC(sub_83BEBB78);
PPC_FUNC_IMPL(__imp__sub_83BEBB78) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-9412
	ctx.r6.s64 = ctx.r7.s64 + -9412;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-9484(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -9484);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,32472(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32472);
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
	// std r9,-9412(r7)
	PPC_STORE_U64(ctx.r7.u32 + -9412, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEBBC0"))) PPC_WEAK_FUNC(sub_83BEBBC0);
PPC_FUNC_IMPL(__imp__sub_83BEBBC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17656
	ctx.r3.s64 = ctx.r11.s64 + -17656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEBBCC"))) PPC_WEAK_FUNC(sub_83BEBBCC);
PPC_FUNC_IMPL(__imp__sub_83BEBBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEBBD0"))) PPC_WEAK_FUNC(sub_83BEBBD0);
PPC_FUNC_IMPL(__imp__sub_83BEBBD0) {
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
	// addi r3,r11,32480
	ctx.r3.s64 = ctx.r11.s64 + 32480;
	// bl 0x8259af80
	ctx.lr = 0x83BEBBE8;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-17640
	ctx.r3.s64 = ctx.r10.s64 + -17640;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEBBF4;
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

__attribute__((alias("__imp__sub_83BEBC04"))) PPC_WEAK_FUNC(sub_83BEBC04);
PPC_FUNC_IMPL(__imp__sub_83BEBC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEBC08"))) PPC_WEAK_FUNC(sub_83BEBC08);
PPC_FUNC_IMPL(__imp__sub_83BEBC08) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,32460
	ctx.r11.s64 = ctx.r8.s64 + 32460;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-9436(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9436);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-17648
	ctx.r3.s64 = ctx.r6.s64 + -17648;
	// stw r10,32460(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32460, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEBC38"))) PPC_WEAK_FUNC(sub_83BEBC38);
PPC_FUNC_IMPL(__imp__sub_83BEBC38) {
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
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// addi r4,r11,-1784
	ctx.r4.s64 = ctx.r11.s64 + -1784;
	// addi r3,r10,-9388
	ctx.r3.s64 = ctx.r10.s64 + -9388;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83BEBC5C;
	sub_8259CC28(ctx, base);
	// lis r9,-31790
	ctx.r9.s64 = -2083389440;
	// addi r3,r9,-17632
	ctx.r3.s64 = ctx.r9.s64 + -17632;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEBC68;
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

__attribute__((alias("__imp__sub_83BEBC78"))) PPC_WEAK_FUNC(sub_83BEBC78);
PPC_FUNC_IMPL(__imp__sub_83BEBC78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17528
	ctx.r3.s64 = ctx.r11.s64 + -17528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEBC84"))) PPC_WEAK_FUNC(sub_83BEBC84);
PPC_FUNC_IMPL(__imp__sub_83BEBC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEBC88"))) PPC_WEAK_FUNC(sub_83BEBC88);
PPC_FUNC_IMPL(__imp__sub_83BEBC88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17520
	ctx.r3.s64 = ctx.r11.s64 + -17520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEBC94"))) PPC_WEAK_FUNC(sub_83BEBC94);
PPC_FUNC_IMPL(__imp__sub_83BEBC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEBC98"))) PPC_WEAK_FUNC(sub_83BEBC98);
PPC_FUNC_IMPL(__imp__sub_83BEBC98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17512
	ctx.r3.s64 = ctx.r11.s64 + -17512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEBCA4"))) PPC_WEAK_FUNC(sub_83BEBCA4);
PPC_FUNC_IMPL(__imp__sub_83BEBCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEBCA8"))) PPC_WEAK_FUNC(sub_83BEBCA8);
PPC_FUNC_IMPL(__imp__sub_83BEBCA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17504
	ctx.r3.s64 = ctx.r11.s64 + -17504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEBCB4"))) PPC_WEAK_FUNC(sub_83BEBCB4);
PPC_FUNC_IMPL(__imp__sub_83BEBCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEBCB8"))) PPC_WEAK_FUNC(sub_83BEBCB8);
PPC_FUNC_IMPL(__imp__sub_83BEBCB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEBCC4"))) PPC_WEAK_FUNC(sub_83BEBCC4);
PPC_FUNC_IMPL(__imp__sub_83BEBCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEBCC8"))) PPC_WEAK_FUNC(sub_83BEBCC8);
PPC_FUNC_IMPL(__imp__sub_83BEBCC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17488
	ctx.r3.s64 = ctx.r11.s64 + -17488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEBCD4"))) PPC_WEAK_FUNC(sub_83BEBCD4);
PPC_FUNC_IMPL(__imp__sub_83BEBCD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEBCD8"))) PPC_WEAK_FUNC(sub_83BEBCD8);
PPC_FUNC_IMPL(__imp__sub_83BEBCD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEBCE4"))) PPC_WEAK_FUNC(sub_83BEBCE4);
PPC_FUNC_IMPL(__imp__sub_83BEBCE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEBCE8"))) PPC_WEAK_FUNC(sub_83BEBCE8);
PPC_FUNC_IMPL(__imp__sub_83BEBCE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17472
	ctx.r3.s64 = ctx.r11.s64 + -17472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEBCF4"))) PPC_WEAK_FUNC(sub_83BEBCF4);
PPC_FUNC_IMPL(__imp__sub_83BEBCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEBCF8"))) PPC_WEAK_FUNC(sub_83BEBCF8);
PPC_FUNC_IMPL(__imp__sub_83BEBCF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17464
	ctx.r3.s64 = ctx.r11.s64 + -17464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEBD04"))) PPC_WEAK_FUNC(sub_83BEBD04);
PPC_FUNC_IMPL(__imp__sub_83BEBD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEBD08"))) PPC_WEAK_FUNC(sub_83BEBD08);
PPC_FUNC_IMPL(__imp__sub_83BEBD08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17456
	ctx.r3.s64 = ctx.r11.s64 + -17456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEBD14"))) PPC_WEAK_FUNC(sub_83BEBD14);
PPC_FUNC_IMPL(__imp__sub_83BEBD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEBD18"))) PPC_WEAK_FUNC(sub_83BEBD18);
PPC_FUNC_IMPL(__imp__sub_83BEBD18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17448
	ctx.r3.s64 = ctx.r11.s64 + -17448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEBD24"))) PPC_WEAK_FUNC(sub_83BEBD24);
PPC_FUNC_IMPL(__imp__sub_83BEBD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEBD28"))) PPC_WEAK_FUNC(sub_83BEBD28);
PPC_FUNC_IMPL(__imp__sub_83BEBD28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17440
	ctx.r3.s64 = ctx.r11.s64 + -17440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEBD34"))) PPC_WEAK_FUNC(sub_83BEBD34);
PPC_FUNC_IMPL(__imp__sub_83BEBD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEBD38"))) PPC_WEAK_FUNC(sub_83BEBD38);
PPC_FUNC_IMPL(__imp__sub_83BEBD38) {
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
	// addi r3,r11,-32712
	ctx.r3.s64 = ctx.r11.s64 + -32712;
	// bl 0x83523120
	ctx.lr = 0x83BEBD50;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-17432
	ctx.r3.s64 = ctx.r10.s64 + -17432;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEBD5C;
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

__attribute__((alias("__imp__sub_83BEBD6C"))) PPC_WEAK_FUNC(sub_83BEBD6C);
PPC_FUNC_IMPL(__imp__sub_83BEBD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEBD70"))) PPC_WEAK_FUNC(sub_83BEBD70);
PPC_FUNC_IMPL(__imp__sub_83BEBD70) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-32696
	ctx.r7.s64 = ctx.r8.s64 + -32696;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-32696(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32696);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-32696(r8)
	PPC_STORE_U32(ctx.r8.u32 + -32696, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEBD98"))) PPC_WEAK_FUNC(sub_83BEBD98);
PPC_FUNC_IMPL(__imp__sub_83BEBD98) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-9256
	ctx.r6.s64 = ctx.r7.s64 + -9256;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-9328(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -9328);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-32696(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -32696);
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
	// std r9,-9256(r7)
	PPC_STORE_U64(ctx.r7.u32 + -9256, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEBDE0"))) PPC_WEAK_FUNC(sub_83BEBDE0);
PPC_FUNC_IMPL(__imp__sub_83BEBDE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17416
	ctx.r3.s64 = ctx.r11.s64 + -17416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEBDEC"))) PPC_WEAK_FUNC(sub_83BEBDEC);
PPC_FUNC_IMPL(__imp__sub_83BEBDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEBDF0"))) PPC_WEAK_FUNC(sub_83BEBDF0);
PPC_FUNC_IMPL(__imp__sub_83BEBDF0) {
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
	// addi r3,r11,-32688
	ctx.r3.s64 = ctx.r11.s64 + -32688;
	// bl 0x8259af80
	ctx.lr = 0x83BEBE08;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-17400
	ctx.r3.s64 = ctx.r10.s64 + -17400;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEBE14;
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

__attribute__((alias("__imp__sub_83BEBE24"))) PPC_WEAK_FUNC(sub_83BEBE24);
PPC_FUNC_IMPL(__imp__sub_83BEBE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEBE28"))) PPC_WEAK_FUNC(sub_83BEBE28);
PPC_FUNC_IMPL(__imp__sub_83BEBE28) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-32708
	ctx.r11.s64 = ctx.r8.s64 + -32708;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-9280(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9280);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-17408
	ctx.r3.s64 = ctx.r6.s64 + -17408;
	// stw r10,-32708(r8)
	PPC_STORE_U32(ctx.r8.u32 + -32708, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEBE58"))) PPC_WEAK_FUNC(sub_83BEBE58);
PPC_FUNC_IMPL(__imp__sub_83BEBE58) {
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
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// addi r4,r11,-1012
	ctx.r4.s64 = ctx.r11.s64 + -1012;
	// addi r3,r10,-9232
	ctx.r3.s64 = ctx.r10.s64 + -9232;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83BEBE7C;
	sub_8259CC28(ctx, base);
	// lis r9,-31790
	ctx.r9.s64 = -2083389440;
	// addi r3,r9,-17392
	ctx.r3.s64 = ctx.r9.s64 + -17392;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEBE88;
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

__attribute__((alias("__imp__sub_83BEBE98"))) PPC_WEAK_FUNC(sub_83BEBE98);
PPC_FUNC_IMPL(__imp__sub_83BEBE98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17288
	ctx.r3.s64 = ctx.r11.s64 + -17288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEBEA4"))) PPC_WEAK_FUNC(sub_83BEBEA4);
PPC_FUNC_IMPL(__imp__sub_83BEBEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEBEA8"))) PPC_WEAK_FUNC(sub_83BEBEA8);
PPC_FUNC_IMPL(__imp__sub_83BEBEA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17280
	ctx.r3.s64 = ctx.r11.s64 + -17280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEBEB4"))) PPC_WEAK_FUNC(sub_83BEBEB4);
PPC_FUNC_IMPL(__imp__sub_83BEBEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEBEB8"))) PPC_WEAK_FUNC(sub_83BEBEB8);
PPC_FUNC_IMPL(__imp__sub_83BEBEB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17272
	ctx.r3.s64 = ctx.r11.s64 + -17272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEBEC4"))) PPC_WEAK_FUNC(sub_83BEBEC4);
PPC_FUNC_IMPL(__imp__sub_83BEBEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEBEC8"))) PPC_WEAK_FUNC(sub_83BEBEC8);
PPC_FUNC_IMPL(__imp__sub_83BEBEC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17264
	ctx.r3.s64 = ctx.r11.s64 + -17264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEBED4"))) PPC_WEAK_FUNC(sub_83BEBED4);
PPC_FUNC_IMPL(__imp__sub_83BEBED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEBED8"))) PPC_WEAK_FUNC(sub_83BEBED8);
PPC_FUNC_IMPL(__imp__sub_83BEBED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17256
	ctx.r3.s64 = ctx.r11.s64 + -17256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEBEE4"))) PPC_WEAK_FUNC(sub_83BEBEE4);
PPC_FUNC_IMPL(__imp__sub_83BEBEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEBEE8"))) PPC_WEAK_FUNC(sub_83BEBEE8);
PPC_FUNC_IMPL(__imp__sub_83BEBEE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17248
	ctx.r3.s64 = ctx.r11.s64 + -17248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEBEF4"))) PPC_WEAK_FUNC(sub_83BEBEF4);
PPC_FUNC_IMPL(__imp__sub_83BEBEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEBEF8"))) PPC_WEAK_FUNC(sub_83BEBEF8);
PPC_FUNC_IMPL(__imp__sub_83BEBEF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17240
	ctx.r3.s64 = ctx.r11.s64 + -17240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEBF04"))) PPC_WEAK_FUNC(sub_83BEBF04);
PPC_FUNC_IMPL(__imp__sub_83BEBF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEBF08"))) PPC_WEAK_FUNC(sub_83BEBF08);
PPC_FUNC_IMPL(__imp__sub_83BEBF08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17232
	ctx.r3.s64 = ctx.r11.s64 + -17232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEBF14"))) PPC_WEAK_FUNC(sub_83BEBF14);
PPC_FUNC_IMPL(__imp__sub_83BEBF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEBF18"))) PPC_WEAK_FUNC(sub_83BEBF18);
PPC_FUNC_IMPL(__imp__sub_83BEBF18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17224
	ctx.r3.s64 = ctx.r11.s64 + -17224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEBF24"))) PPC_WEAK_FUNC(sub_83BEBF24);
PPC_FUNC_IMPL(__imp__sub_83BEBF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEBF28"))) PPC_WEAK_FUNC(sub_83BEBF28);
PPC_FUNC_IMPL(__imp__sub_83BEBF28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17216
	ctx.r3.s64 = ctx.r11.s64 + -17216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEBF34"))) PPC_WEAK_FUNC(sub_83BEBF34);
PPC_FUNC_IMPL(__imp__sub_83BEBF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEBF38"))) PPC_WEAK_FUNC(sub_83BEBF38);
PPC_FUNC_IMPL(__imp__sub_83BEBF38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17208
	ctx.r3.s64 = ctx.r11.s64 + -17208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEBF44"))) PPC_WEAK_FUNC(sub_83BEBF44);
PPC_FUNC_IMPL(__imp__sub_83BEBF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEBF48"))) PPC_WEAK_FUNC(sub_83BEBF48);
PPC_FUNC_IMPL(__imp__sub_83BEBF48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17200
	ctx.r3.s64 = ctx.r11.s64 + -17200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEBF54"))) PPC_WEAK_FUNC(sub_83BEBF54);
PPC_FUNC_IMPL(__imp__sub_83BEBF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEBF58"))) PPC_WEAK_FUNC(sub_83BEBF58);
PPC_FUNC_IMPL(__imp__sub_83BEBF58) {
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
	// addi r3,r11,-32344
	ctx.r3.s64 = ctx.r11.s64 + -32344;
	// bl 0x83523120
	ctx.lr = 0x83BEBF70;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-17192
	ctx.r3.s64 = ctx.r10.s64 + -17192;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEBF7C;
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

__attribute__((alias("__imp__sub_83BEBF8C"))) PPC_WEAK_FUNC(sub_83BEBF8C);
PPC_FUNC_IMPL(__imp__sub_83BEBF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEBF90"))) PPC_WEAK_FUNC(sub_83BEBF90);
PPC_FUNC_IMPL(__imp__sub_83BEBF90) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-32328
	ctx.r7.s64 = ctx.r8.s64 + -32328;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-32328(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32328);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-32328(r8)
	PPC_STORE_U32(ctx.r8.u32 + -32328, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEBFB8"))) PPC_WEAK_FUNC(sub_83BEBFB8);
PPC_FUNC_IMPL(__imp__sub_83BEBFB8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-9100
	ctx.r6.s64 = ctx.r7.s64 + -9100;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-9172(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -9172);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-32328(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -32328);
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
	// std r9,-9100(r7)
	PPC_STORE_U64(ctx.r7.u32 + -9100, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEC000"))) PPC_WEAK_FUNC(sub_83BEC000);
PPC_FUNC_IMPL(__imp__sub_83BEC000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17176
	ctx.r3.s64 = ctx.r11.s64 + -17176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC00C"))) PPC_WEAK_FUNC(sub_83BEC00C);
PPC_FUNC_IMPL(__imp__sub_83BEC00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC010"))) PPC_WEAK_FUNC(sub_83BEC010);
PPC_FUNC_IMPL(__imp__sub_83BEC010) {
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
	// addi r3,r11,-32320
	ctx.r3.s64 = ctx.r11.s64 + -32320;
	// bl 0x8259af80
	ctx.lr = 0x83BEC028;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-17160
	ctx.r3.s64 = ctx.r10.s64 + -17160;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEC034;
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

__attribute__((alias("__imp__sub_83BEC044"))) PPC_WEAK_FUNC(sub_83BEC044);
PPC_FUNC_IMPL(__imp__sub_83BEC044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC048"))) PPC_WEAK_FUNC(sub_83BEC048);
PPC_FUNC_IMPL(__imp__sub_83BEC048) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-32340
	ctx.r11.s64 = ctx.r8.s64 + -32340;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-9124(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9124);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-17168
	ctx.r3.s64 = ctx.r6.s64 + -17168;
	// stw r10,-32340(r8)
	PPC_STORE_U32(ctx.r8.u32 + -32340, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC078"))) PPC_WEAK_FUNC(sub_83BEC078);
PPC_FUNC_IMPL(__imp__sub_83BEC078) {
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
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// addi r4,r11,-68
	ctx.r4.s64 = ctx.r11.s64 + -68;
	// addi r3,r10,-9076
	ctx.r3.s64 = ctx.r10.s64 + -9076;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83BEC09C;
	sub_8259CC28(ctx, base);
	// lis r9,-31790
	ctx.r9.s64 = -2083389440;
	// addi r3,r9,-17152
	ctx.r3.s64 = ctx.r9.s64 + -17152;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEC0A8;
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

__attribute__((alias("__imp__sub_83BEC0B8"))) PPC_WEAK_FUNC(sub_83BEC0B8);
PPC_FUNC_IMPL(__imp__sub_83BEC0B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17048
	ctx.r3.s64 = ctx.r11.s64 + -17048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC0C4"))) PPC_WEAK_FUNC(sub_83BEC0C4);
PPC_FUNC_IMPL(__imp__sub_83BEC0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC0C8"))) PPC_WEAK_FUNC(sub_83BEC0C8);
PPC_FUNC_IMPL(__imp__sub_83BEC0C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17040
	ctx.r3.s64 = ctx.r11.s64 + -17040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC0D4"))) PPC_WEAK_FUNC(sub_83BEC0D4);
PPC_FUNC_IMPL(__imp__sub_83BEC0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC0D8"))) PPC_WEAK_FUNC(sub_83BEC0D8);
PPC_FUNC_IMPL(__imp__sub_83BEC0D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17032
	ctx.r3.s64 = ctx.r11.s64 + -17032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC0E4"))) PPC_WEAK_FUNC(sub_83BEC0E4);
PPC_FUNC_IMPL(__imp__sub_83BEC0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC0E8"))) PPC_WEAK_FUNC(sub_83BEC0E8);
PPC_FUNC_IMPL(__imp__sub_83BEC0E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17024
	ctx.r3.s64 = ctx.r11.s64 + -17024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC0F4"))) PPC_WEAK_FUNC(sub_83BEC0F4);
PPC_FUNC_IMPL(__imp__sub_83BEC0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC0F8"))) PPC_WEAK_FUNC(sub_83BEC0F8);
PPC_FUNC_IMPL(__imp__sub_83BEC0F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17016
	ctx.r3.s64 = ctx.r11.s64 + -17016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC104"))) PPC_WEAK_FUNC(sub_83BEC104);
PPC_FUNC_IMPL(__imp__sub_83BEC104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC108"))) PPC_WEAK_FUNC(sub_83BEC108);
PPC_FUNC_IMPL(__imp__sub_83BEC108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17008
	ctx.r3.s64 = ctx.r11.s64 + -17008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC114"))) PPC_WEAK_FUNC(sub_83BEC114);
PPC_FUNC_IMPL(__imp__sub_83BEC114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC118"))) PPC_WEAK_FUNC(sub_83BEC118);
PPC_FUNC_IMPL(__imp__sub_83BEC118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-17000
	ctx.r3.s64 = ctx.r11.s64 + -17000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC124"))) PPC_WEAK_FUNC(sub_83BEC124);
PPC_FUNC_IMPL(__imp__sub_83BEC124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC128"))) PPC_WEAK_FUNC(sub_83BEC128);
PPC_FUNC_IMPL(__imp__sub_83BEC128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16992
	ctx.r3.s64 = ctx.r11.s64 + -16992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC134"))) PPC_WEAK_FUNC(sub_83BEC134);
PPC_FUNC_IMPL(__imp__sub_83BEC134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC138"))) PPC_WEAK_FUNC(sub_83BEC138);
PPC_FUNC_IMPL(__imp__sub_83BEC138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16984
	ctx.r3.s64 = ctx.r11.s64 + -16984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC144"))) PPC_WEAK_FUNC(sub_83BEC144);
PPC_FUNC_IMPL(__imp__sub_83BEC144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC148"))) PPC_WEAK_FUNC(sub_83BEC148);
PPC_FUNC_IMPL(__imp__sub_83BEC148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16976
	ctx.r3.s64 = ctx.r11.s64 + -16976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC154"))) PPC_WEAK_FUNC(sub_83BEC154);
PPC_FUNC_IMPL(__imp__sub_83BEC154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC158"))) PPC_WEAK_FUNC(sub_83BEC158);
PPC_FUNC_IMPL(__imp__sub_83BEC158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16968
	ctx.r3.s64 = ctx.r11.s64 + -16968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC164"))) PPC_WEAK_FUNC(sub_83BEC164);
PPC_FUNC_IMPL(__imp__sub_83BEC164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC168"))) PPC_WEAK_FUNC(sub_83BEC168);
PPC_FUNC_IMPL(__imp__sub_83BEC168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16960
	ctx.r3.s64 = ctx.r11.s64 + -16960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC174"))) PPC_WEAK_FUNC(sub_83BEC174);
PPC_FUNC_IMPL(__imp__sub_83BEC174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC178"))) PPC_WEAK_FUNC(sub_83BEC178);
PPC_FUNC_IMPL(__imp__sub_83BEC178) {
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
	// addi r3,r11,-31976
	ctx.r3.s64 = ctx.r11.s64 + -31976;
	// bl 0x83523120
	ctx.lr = 0x83BEC190;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-16952
	ctx.r3.s64 = ctx.r10.s64 + -16952;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEC19C;
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

__attribute__((alias("__imp__sub_83BEC1AC"))) PPC_WEAK_FUNC(sub_83BEC1AC);
PPC_FUNC_IMPL(__imp__sub_83BEC1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC1B0"))) PPC_WEAK_FUNC(sub_83BEC1B0);
PPC_FUNC_IMPL(__imp__sub_83BEC1B0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-31960
	ctx.r7.s64 = ctx.r8.s64 + -31960;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-31960(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31960);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-31960(r8)
	PPC_STORE_U32(ctx.r8.u32 + -31960, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEC1D8"))) PPC_WEAK_FUNC(sub_83BEC1D8);
PPC_FUNC_IMPL(__imp__sub_83BEC1D8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-8944
	ctx.r6.s64 = ctx.r7.s64 + -8944;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-9016(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -9016);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-31960(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -31960);
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
	// std r9,-8944(r7)
	PPC_STORE_U64(ctx.r7.u32 + -8944, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEC220"))) PPC_WEAK_FUNC(sub_83BEC220);
PPC_FUNC_IMPL(__imp__sub_83BEC220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16936
	ctx.r3.s64 = ctx.r11.s64 + -16936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC22C"))) PPC_WEAK_FUNC(sub_83BEC22C);
PPC_FUNC_IMPL(__imp__sub_83BEC22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC230"))) PPC_WEAK_FUNC(sub_83BEC230);
PPC_FUNC_IMPL(__imp__sub_83BEC230) {
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
	// addi r3,r11,-31952
	ctx.r3.s64 = ctx.r11.s64 + -31952;
	// bl 0x8259af80
	ctx.lr = 0x83BEC248;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-16920
	ctx.r3.s64 = ctx.r10.s64 + -16920;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEC254;
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

__attribute__((alias("__imp__sub_83BEC264"))) PPC_WEAK_FUNC(sub_83BEC264);
PPC_FUNC_IMPL(__imp__sub_83BEC264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC268"))) PPC_WEAK_FUNC(sub_83BEC268);
PPC_FUNC_IMPL(__imp__sub_83BEC268) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-31972
	ctx.r11.s64 = ctx.r8.s64 + -31972;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-8968(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8968);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-16928
	ctx.r3.s64 = ctx.r6.s64 + -16928;
	// stw r10,-31972(r8)
	PPC_STORE_U32(ctx.r8.u32 + -31972, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC298"))) PPC_WEAK_FUNC(sub_83BEC298);
PPC_FUNC_IMPL(__imp__sub_83BEC298) {
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
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// addi r4,r11,764
	ctx.r4.s64 = ctx.r11.s64 + 764;
	// addi r3,r10,-8920
	ctx.r3.s64 = ctx.r10.s64 + -8920;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83BEC2BC;
	sub_8259CC28(ctx, base);
	// lis r9,-31790
	ctx.r9.s64 = -2083389440;
	// addi r3,r9,-16912
	ctx.r3.s64 = ctx.r9.s64 + -16912;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEC2C8;
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

__attribute__((alias("__imp__sub_83BEC2D8"))) PPC_WEAK_FUNC(sub_83BEC2D8);
PPC_FUNC_IMPL(__imp__sub_83BEC2D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16808
	ctx.r3.s64 = ctx.r11.s64 + -16808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC2E4"))) PPC_WEAK_FUNC(sub_83BEC2E4);
PPC_FUNC_IMPL(__imp__sub_83BEC2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC2E8"))) PPC_WEAK_FUNC(sub_83BEC2E8);
PPC_FUNC_IMPL(__imp__sub_83BEC2E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16800
	ctx.r3.s64 = ctx.r11.s64 + -16800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC2F4"))) PPC_WEAK_FUNC(sub_83BEC2F4);
PPC_FUNC_IMPL(__imp__sub_83BEC2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC2F8"))) PPC_WEAK_FUNC(sub_83BEC2F8);
PPC_FUNC_IMPL(__imp__sub_83BEC2F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16792
	ctx.r3.s64 = ctx.r11.s64 + -16792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC304"))) PPC_WEAK_FUNC(sub_83BEC304);
PPC_FUNC_IMPL(__imp__sub_83BEC304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC308"))) PPC_WEAK_FUNC(sub_83BEC308);
PPC_FUNC_IMPL(__imp__sub_83BEC308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16784
	ctx.r3.s64 = ctx.r11.s64 + -16784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC314"))) PPC_WEAK_FUNC(sub_83BEC314);
PPC_FUNC_IMPL(__imp__sub_83BEC314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC318"))) PPC_WEAK_FUNC(sub_83BEC318);
PPC_FUNC_IMPL(__imp__sub_83BEC318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16776
	ctx.r3.s64 = ctx.r11.s64 + -16776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC324"))) PPC_WEAK_FUNC(sub_83BEC324);
PPC_FUNC_IMPL(__imp__sub_83BEC324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC328"))) PPC_WEAK_FUNC(sub_83BEC328);
PPC_FUNC_IMPL(__imp__sub_83BEC328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16768
	ctx.r3.s64 = ctx.r11.s64 + -16768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC334"))) PPC_WEAK_FUNC(sub_83BEC334);
PPC_FUNC_IMPL(__imp__sub_83BEC334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC338"))) PPC_WEAK_FUNC(sub_83BEC338);
PPC_FUNC_IMPL(__imp__sub_83BEC338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16760
	ctx.r3.s64 = ctx.r11.s64 + -16760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC344"))) PPC_WEAK_FUNC(sub_83BEC344);
PPC_FUNC_IMPL(__imp__sub_83BEC344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC348"))) PPC_WEAK_FUNC(sub_83BEC348);
PPC_FUNC_IMPL(__imp__sub_83BEC348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16752
	ctx.r3.s64 = ctx.r11.s64 + -16752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC354"))) PPC_WEAK_FUNC(sub_83BEC354);
PPC_FUNC_IMPL(__imp__sub_83BEC354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC358"))) PPC_WEAK_FUNC(sub_83BEC358);
PPC_FUNC_IMPL(__imp__sub_83BEC358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16744
	ctx.r3.s64 = ctx.r11.s64 + -16744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC364"))) PPC_WEAK_FUNC(sub_83BEC364);
PPC_FUNC_IMPL(__imp__sub_83BEC364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC368"))) PPC_WEAK_FUNC(sub_83BEC368);
PPC_FUNC_IMPL(__imp__sub_83BEC368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16736
	ctx.r3.s64 = ctx.r11.s64 + -16736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC374"))) PPC_WEAK_FUNC(sub_83BEC374);
PPC_FUNC_IMPL(__imp__sub_83BEC374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC378"))) PPC_WEAK_FUNC(sub_83BEC378);
PPC_FUNC_IMPL(__imp__sub_83BEC378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16728
	ctx.r3.s64 = ctx.r11.s64 + -16728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC384"))) PPC_WEAK_FUNC(sub_83BEC384);
PPC_FUNC_IMPL(__imp__sub_83BEC384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC388"))) PPC_WEAK_FUNC(sub_83BEC388);
PPC_FUNC_IMPL(__imp__sub_83BEC388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16720
	ctx.r3.s64 = ctx.r11.s64 + -16720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC394"))) PPC_WEAK_FUNC(sub_83BEC394);
PPC_FUNC_IMPL(__imp__sub_83BEC394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC398"))) PPC_WEAK_FUNC(sub_83BEC398);
PPC_FUNC_IMPL(__imp__sub_83BEC398) {
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
	// addi r3,r11,-31608
	ctx.r3.s64 = ctx.r11.s64 + -31608;
	// bl 0x83523120
	ctx.lr = 0x83BEC3B0;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-16712
	ctx.r3.s64 = ctx.r10.s64 + -16712;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEC3BC;
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

__attribute__((alias("__imp__sub_83BEC3CC"))) PPC_WEAK_FUNC(sub_83BEC3CC);
PPC_FUNC_IMPL(__imp__sub_83BEC3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC3D0"))) PPC_WEAK_FUNC(sub_83BEC3D0);
PPC_FUNC_IMPL(__imp__sub_83BEC3D0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-31592
	ctx.r7.s64 = ctx.r8.s64 + -31592;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-31592(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31592);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-31592(r8)
	PPC_STORE_U32(ctx.r8.u32 + -31592, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEC3F8"))) PPC_WEAK_FUNC(sub_83BEC3F8);
PPC_FUNC_IMPL(__imp__sub_83BEC3F8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-8788
	ctx.r6.s64 = ctx.r7.s64 + -8788;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-8860(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -8860);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-31592(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -31592);
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
	// std r9,-8788(r7)
	PPC_STORE_U64(ctx.r7.u32 + -8788, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEC440"))) PPC_WEAK_FUNC(sub_83BEC440);
PPC_FUNC_IMPL(__imp__sub_83BEC440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16696
	ctx.r3.s64 = ctx.r11.s64 + -16696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC44C"))) PPC_WEAK_FUNC(sub_83BEC44C);
PPC_FUNC_IMPL(__imp__sub_83BEC44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC450"))) PPC_WEAK_FUNC(sub_83BEC450);
PPC_FUNC_IMPL(__imp__sub_83BEC450) {
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
	// addi r3,r11,-31584
	ctx.r3.s64 = ctx.r11.s64 + -31584;
	// bl 0x8259af80
	ctx.lr = 0x83BEC468;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-16680
	ctx.r3.s64 = ctx.r10.s64 + -16680;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEC474;
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

__attribute__((alias("__imp__sub_83BEC484"))) PPC_WEAK_FUNC(sub_83BEC484);
PPC_FUNC_IMPL(__imp__sub_83BEC484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC488"))) PPC_WEAK_FUNC(sub_83BEC488);
PPC_FUNC_IMPL(__imp__sub_83BEC488) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-31604
	ctx.r11.s64 = ctx.r8.s64 + -31604;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-8812(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8812);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-16688
	ctx.r3.s64 = ctx.r6.s64 + -16688;
	// stw r10,-31604(r8)
	PPC_STORE_U32(ctx.r8.u32 + -31604, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC4B8"))) PPC_WEAK_FUNC(sub_83BEC4B8);
PPC_FUNC_IMPL(__imp__sub_83BEC4B8) {
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
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// addi r4,r11,1460
	ctx.r4.s64 = ctx.r11.s64 + 1460;
	// addi r3,r10,-8764
	ctx.r3.s64 = ctx.r10.s64 + -8764;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83BEC4DC;
	sub_8259CC28(ctx, base);
	// lis r9,-31790
	ctx.r9.s64 = -2083389440;
	// addi r3,r9,-16672
	ctx.r3.s64 = ctx.r9.s64 + -16672;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEC4E8;
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

__attribute__((alias("__imp__sub_83BEC4F8"))) PPC_WEAK_FUNC(sub_83BEC4F8);
PPC_FUNC_IMPL(__imp__sub_83BEC4F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16568
	ctx.r3.s64 = ctx.r11.s64 + -16568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC504"))) PPC_WEAK_FUNC(sub_83BEC504);
PPC_FUNC_IMPL(__imp__sub_83BEC504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC508"))) PPC_WEAK_FUNC(sub_83BEC508);
PPC_FUNC_IMPL(__imp__sub_83BEC508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16560
	ctx.r3.s64 = ctx.r11.s64 + -16560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC514"))) PPC_WEAK_FUNC(sub_83BEC514);
PPC_FUNC_IMPL(__imp__sub_83BEC514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC518"))) PPC_WEAK_FUNC(sub_83BEC518);
PPC_FUNC_IMPL(__imp__sub_83BEC518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16552
	ctx.r3.s64 = ctx.r11.s64 + -16552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC524"))) PPC_WEAK_FUNC(sub_83BEC524);
PPC_FUNC_IMPL(__imp__sub_83BEC524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC528"))) PPC_WEAK_FUNC(sub_83BEC528);
PPC_FUNC_IMPL(__imp__sub_83BEC528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16544
	ctx.r3.s64 = ctx.r11.s64 + -16544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC534"))) PPC_WEAK_FUNC(sub_83BEC534);
PPC_FUNC_IMPL(__imp__sub_83BEC534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC538"))) PPC_WEAK_FUNC(sub_83BEC538);
PPC_FUNC_IMPL(__imp__sub_83BEC538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16536
	ctx.r3.s64 = ctx.r11.s64 + -16536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC544"))) PPC_WEAK_FUNC(sub_83BEC544);
PPC_FUNC_IMPL(__imp__sub_83BEC544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC548"))) PPC_WEAK_FUNC(sub_83BEC548);
PPC_FUNC_IMPL(__imp__sub_83BEC548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16528
	ctx.r3.s64 = ctx.r11.s64 + -16528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC554"))) PPC_WEAK_FUNC(sub_83BEC554);
PPC_FUNC_IMPL(__imp__sub_83BEC554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC558"))) PPC_WEAK_FUNC(sub_83BEC558);
PPC_FUNC_IMPL(__imp__sub_83BEC558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16520
	ctx.r3.s64 = ctx.r11.s64 + -16520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC564"))) PPC_WEAK_FUNC(sub_83BEC564);
PPC_FUNC_IMPL(__imp__sub_83BEC564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC568"))) PPC_WEAK_FUNC(sub_83BEC568);
PPC_FUNC_IMPL(__imp__sub_83BEC568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16512
	ctx.r3.s64 = ctx.r11.s64 + -16512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC574"))) PPC_WEAK_FUNC(sub_83BEC574);
PPC_FUNC_IMPL(__imp__sub_83BEC574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC578"))) PPC_WEAK_FUNC(sub_83BEC578);
PPC_FUNC_IMPL(__imp__sub_83BEC578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16504
	ctx.r3.s64 = ctx.r11.s64 + -16504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC584"))) PPC_WEAK_FUNC(sub_83BEC584);
PPC_FUNC_IMPL(__imp__sub_83BEC584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC588"))) PPC_WEAK_FUNC(sub_83BEC588);
PPC_FUNC_IMPL(__imp__sub_83BEC588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16496
	ctx.r3.s64 = ctx.r11.s64 + -16496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC594"))) PPC_WEAK_FUNC(sub_83BEC594);
PPC_FUNC_IMPL(__imp__sub_83BEC594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC598"))) PPC_WEAK_FUNC(sub_83BEC598);
PPC_FUNC_IMPL(__imp__sub_83BEC598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16488
	ctx.r3.s64 = ctx.r11.s64 + -16488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC5A4"))) PPC_WEAK_FUNC(sub_83BEC5A4);
PPC_FUNC_IMPL(__imp__sub_83BEC5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC5A8"))) PPC_WEAK_FUNC(sub_83BEC5A8);
PPC_FUNC_IMPL(__imp__sub_83BEC5A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16480
	ctx.r3.s64 = ctx.r11.s64 + -16480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC5B4"))) PPC_WEAK_FUNC(sub_83BEC5B4);
PPC_FUNC_IMPL(__imp__sub_83BEC5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC5B8"))) PPC_WEAK_FUNC(sub_83BEC5B8);
PPC_FUNC_IMPL(__imp__sub_83BEC5B8) {
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
	// addi r3,r11,-31240
	ctx.r3.s64 = ctx.r11.s64 + -31240;
	// bl 0x83523120
	ctx.lr = 0x83BEC5D0;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-16472
	ctx.r3.s64 = ctx.r10.s64 + -16472;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEC5DC;
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

__attribute__((alias("__imp__sub_83BEC5EC"))) PPC_WEAK_FUNC(sub_83BEC5EC);
PPC_FUNC_IMPL(__imp__sub_83BEC5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC5F0"))) PPC_WEAK_FUNC(sub_83BEC5F0);
PPC_FUNC_IMPL(__imp__sub_83BEC5F0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-31224
	ctx.r7.s64 = ctx.r8.s64 + -31224;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-31224(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31224);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-31224(r8)
	PPC_STORE_U32(ctx.r8.u32 + -31224, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEC618"))) PPC_WEAK_FUNC(sub_83BEC618);
PPC_FUNC_IMPL(__imp__sub_83BEC618) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-8632
	ctx.r6.s64 = ctx.r7.s64 + -8632;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-8704(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -8704);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-31224(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -31224);
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
	// std r9,-8632(r7)
	PPC_STORE_U64(ctx.r7.u32 + -8632, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEC660"))) PPC_WEAK_FUNC(sub_83BEC660);
PPC_FUNC_IMPL(__imp__sub_83BEC660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16456
	ctx.r3.s64 = ctx.r11.s64 + -16456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC66C"))) PPC_WEAK_FUNC(sub_83BEC66C);
PPC_FUNC_IMPL(__imp__sub_83BEC66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC670"))) PPC_WEAK_FUNC(sub_83BEC670);
PPC_FUNC_IMPL(__imp__sub_83BEC670) {
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
	// addi r3,r11,-31216
	ctx.r3.s64 = ctx.r11.s64 + -31216;
	// bl 0x8259af80
	ctx.lr = 0x83BEC688;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-16440
	ctx.r3.s64 = ctx.r10.s64 + -16440;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEC694;
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

__attribute__((alias("__imp__sub_83BEC6A4"))) PPC_WEAK_FUNC(sub_83BEC6A4);
PPC_FUNC_IMPL(__imp__sub_83BEC6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC6A8"))) PPC_WEAK_FUNC(sub_83BEC6A8);
PPC_FUNC_IMPL(__imp__sub_83BEC6A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-31236
	ctx.r11.s64 = ctx.r8.s64 + -31236;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-8656(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8656);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-16448
	ctx.r3.s64 = ctx.r6.s64 + -16448;
	// stw r10,-31236(r8)
	PPC_STORE_U32(ctx.r8.u32 + -31236, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC6D8"))) PPC_WEAK_FUNC(sub_83BEC6D8);
PPC_FUNC_IMPL(__imp__sub_83BEC6D8) {
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
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// addi r4,r11,2204
	ctx.r4.s64 = ctx.r11.s64 + 2204;
	// addi r3,r10,-8608
	ctx.r3.s64 = ctx.r10.s64 + -8608;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83BEC6FC;
	sub_8259CC28(ctx, base);
	// lis r9,-31790
	ctx.r9.s64 = -2083389440;
	// addi r3,r9,-16432
	ctx.r3.s64 = ctx.r9.s64 + -16432;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEC708;
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

__attribute__((alias("__imp__sub_83BEC718"))) PPC_WEAK_FUNC(sub_83BEC718);
PPC_FUNC_IMPL(__imp__sub_83BEC718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16328
	ctx.r3.s64 = ctx.r11.s64 + -16328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC724"))) PPC_WEAK_FUNC(sub_83BEC724);
PPC_FUNC_IMPL(__imp__sub_83BEC724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC728"))) PPC_WEAK_FUNC(sub_83BEC728);
PPC_FUNC_IMPL(__imp__sub_83BEC728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16320
	ctx.r3.s64 = ctx.r11.s64 + -16320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC734"))) PPC_WEAK_FUNC(sub_83BEC734);
PPC_FUNC_IMPL(__imp__sub_83BEC734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC738"))) PPC_WEAK_FUNC(sub_83BEC738);
PPC_FUNC_IMPL(__imp__sub_83BEC738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16312
	ctx.r3.s64 = ctx.r11.s64 + -16312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC744"))) PPC_WEAK_FUNC(sub_83BEC744);
PPC_FUNC_IMPL(__imp__sub_83BEC744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC748"))) PPC_WEAK_FUNC(sub_83BEC748);
PPC_FUNC_IMPL(__imp__sub_83BEC748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16304
	ctx.r3.s64 = ctx.r11.s64 + -16304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC754"))) PPC_WEAK_FUNC(sub_83BEC754);
PPC_FUNC_IMPL(__imp__sub_83BEC754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC758"))) PPC_WEAK_FUNC(sub_83BEC758);
PPC_FUNC_IMPL(__imp__sub_83BEC758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16296
	ctx.r3.s64 = ctx.r11.s64 + -16296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC764"))) PPC_WEAK_FUNC(sub_83BEC764);
PPC_FUNC_IMPL(__imp__sub_83BEC764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC768"))) PPC_WEAK_FUNC(sub_83BEC768);
PPC_FUNC_IMPL(__imp__sub_83BEC768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16288
	ctx.r3.s64 = ctx.r11.s64 + -16288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC774"))) PPC_WEAK_FUNC(sub_83BEC774);
PPC_FUNC_IMPL(__imp__sub_83BEC774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC778"))) PPC_WEAK_FUNC(sub_83BEC778);
PPC_FUNC_IMPL(__imp__sub_83BEC778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16280
	ctx.r3.s64 = ctx.r11.s64 + -16280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC784"))) PPC_WEAK_FUNC(sub_83BEC784);
PPC_FUNC_IMPL(__imp__sub_83BEC784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC788"))) PPC_WEAK_FUNC(sub_83BEC788);
PPC_FUNC_IMPL(__imp__sub_83BEC788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16272
	ctx.r3.s64 = ctx.r11.s64 + -16272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC794"))) PPC_WEAK_FUNC(sub_83BEC794);
PPC_FUNC_IMPL(__imp__sub_83BEC794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC798"))) PPC_WEAK_FUNC(sub_83BEC798);
PPC_FUNC_IMPL(__imp__sub_83BEC798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16264
	ctx.r3.s64 = ctx.r11.s64 + -16264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC7A4"))) PPC_WEAK_FUNC(sub_83BEC7A4);
PPC_FUNC_IMPL(__imp__sub_83BEC7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC7A8"))) PPC_WEAK_FUNC(sub_83BEC7A8);
PPC_FUNC_IMPL(__imp__sub_83BEC7A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16256
	ctx.r3.s64 = ctx.r11.s64 + -16256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC7B4"))) PPC_WEAK_FUNC(sub_83BEC7B4);
PPC_FUNC_IMPL(__imp__sub_83BEC7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC7B8"))) PPC_WEAK_FUNC(sub_83BEC7B8);
PPC_FUNC_IMPL(__imp__sub_83BEC7B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16248
	ctx.r3.s64 = ctx.r11.s64 + -16248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC7C4"))) PPC_WEAK_FUNC(sub_83BEC7C4);
PPC_FUNC_IMPL(__imp__sub_83BEC7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC7C8"))) PPC_WEAK_FUNC(sub_83BEC7C8);
PPC_FUNC_IMPL(__imp__sub_83BEC7C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16240
	ctx.r3.s64 = ctx.r11.s64 + -16240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC7D4"))) PPC_WEAK_FUNC(sub_83BEC7D4);
PPC_FUNC_IMPL(__imp__sub_83BEC7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC7D8"))) PPC_WEAK_FUNC(sub_83BEC7D8);
PPC_FUNC_IMPL(__imp__sub_83BEC7D8) {
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
	// addi r3,r11,-30872
	ctx.r3.s64 = ctx.r11.s64 + -30872;
	// bl 0x83523120
	ctx.lr = 0x83BEC7F0;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-16232
	ctx.r3.s64 = ctx.r10.s64 + -16232;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEC7FC;
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

__attribute__((alias("__imp__sub_83BEC80C"))) PPC_WEAK_FUNC(sub_83BEC80C);
PPC_FUNC_IMPL(__imp__sub_83BEC80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC810"))) PPC_WEAK_FUNC(sub_83BEC810);
PPC_FUNC_IMPL(__imp__sub_83BEC810) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-30856
	ctx.r7.s64 = ctx.r8.s64 + -30856;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-30856(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30856);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-30856(r8)
	PPC_STORE_U32(ctx.r8.u32 + -30856, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEC838"))) PPC_WEAK_FUNC(sub_83BEC838);
PPC_FUNC_IMPL(__imp__sub_83BEC838) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-8476
	ctx.r6.s64 = ctx.r7.s64 + -8476;
	// lis r3,-31759
	ctx.r3.s64 = -2081357824;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-8548(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -8548);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-30856(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -30856);
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
	// std r9,-8476(r7)
	PPC_STORE_U64(ctx.r7.u32 + -8476, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEC880"))) PPC_WEAK_FUNC(sub_83BEC880);
PPC_FUNC_IMPL(__imp__sub_83BEC880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16216
	ctx.r3.s64 = ctx.r11.s64 + -16216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC88C"))) PPC_WEAK_FUNC(sub_83BEC88C);
PPC_FUNC_IMPL(__imp__sub_83BEC88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC890"))) PPC_WEAK_FUNC(sub_83BEC890);
PPC_FUNC_IMPL(__imp__sub_83BEC890) {
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
	// addi r3,r11,-30848
	ctx.r3.s64 = ctx.r11.s64 + -30848;
	// bl 0x8259af80
	ctx.lr = 0x83BEC8A8;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-16200
	ctx.r3.s64 = ctx.r10.s64 + -16200;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEC8B4;
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

__attribute__((alias("__imp__sub_83BEC8C4"))) PPC_WEAK_FUNC(sub_83BEC8C4);
PPC_FUNC_IMPL(__imp__sub_83BEC8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC8C8"))) PPC_WEAK_FUNC(sub_83BEC8C8);
PPC_FUNC_IMPL(__imp__sub_83BEC8C8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31759
	ctx.r8.s64 = -2081357824;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-30868
	ctx.r11.s64 = ctx.r8.s64 + -30868;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-8500(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8500);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-16208
	ctx.r3.s64 = ctx.r6.s64 + -16208;
	// stw r10,-30868(r8)
	PPC_STORE_U32(ctx.r8.u32 + -30868, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC8F8"))) PPC_WEAK_FUNC(sub_83BEC8F8);
PPC_FUNC_IMPL(__imp__sub_83BEC8F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16192
	ctx.r3.s64 = ctx.r11.s64 + -16192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC904"))) PPC_WEAK_FUNC(sub_83BEC904);
PPC_FUNC_IMPL(__imp__sub_83BEC904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC908"))) PPC_WEAK_FUNC(sub_83BEC908);
PPC_FUNC_IMPL(__imp__sub_83BEC908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16184
	ctx.r3.s64 = ctx.r11.s64 + -16184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC914"))) PPC_WEAK_FUNC(sub_83BEC914);
PPC_FUNC_IMPL(__imp__sub_83BEC914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC918"))) PPC_WEAK_FUNC(sub_83BEC918);
PPC_FUNC_IMPL(__imp__sub_83BEC918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16176
	ctx.r3.s64 = ctx.r11.s64 + -16176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC924"))) PPC_WEAK_FUNC(sub_83BEC924);
PPC_FUNC_IMPL(__imp__sub_83BEC924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC928"))) PPC_WEAK_FUNC(sub_83BEC928);
PPC_FUNC_IMPL(__imp__sub_83BEC928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16168
	ctx.r3.s64 = ctx.r11.s64 + -16168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC934"))) PPC_WEAK_FUNC(sub_83BEC934);
PPC_FUNC_IMPL(__imp__sub_83BEC934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC938"))) PPC_WEAK_FUNC(sub_83BEC938);
PPC_FUNC_IMPL(__imp__sub_83BEC938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16160
	ctx.r3.s64 = ctx.r11.s64 + -16160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC944"))) PPC_WEAK_FUNC(sub_83BEC944);
PPC_FUNC_IMPL(__imp__sub_83BEC944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC948"))) PPC_WEAK_FUNC(sub_83BEC948);
PPC_FUNC_IMPL(__imp__sub_83BEC948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16152
	ctx.r3.s64 = ctx.r11.s64 + -16152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC954"))) PPC_WEAK_FUNC(sub_83BEC954);
PPC_FUNC_IMPL(__imp__sub_83BEC954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC958"))) PPC_WEAK_FUNC(sub_83BEC958);
PPC_FUNC_IMPL(__imp__sub_83BEC958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16144
	ctx.r3.s64 = ctx.r11.s64 + -16144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEC964"))) PPC_WEAK_FUNC(sub_83BEC964);
PPC_FUNC_IMPL(__imp__sub_83BEC964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEC968"))) PPC_WEAK_FUNC(sub_83BEC968);
PPC_FUNC_IMPL(__imp__sub_83BEC968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-16136
	ctx.r3.s64 = ctx.r11.s64 + -16136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

