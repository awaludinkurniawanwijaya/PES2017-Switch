#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BD78A4"))) PPC_WEAK_FUNC(sub_83BD78A4);
PPC_FUNC_IMPL(__imp__sub_83BD78A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD78A8"))) PPC_WEAK_FUNC(sub_83BD78A8);
PPC_FUNC_IMPL(__imp__sub_83BD78A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22512
	ctx.r3.s64 = ctx.r11.s64 + 22512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD78B4"))) PPC_WEAK_FUNC(sub_83BD78B4);
PPC_FUNC_IMPL(__imp__sub_83BD78B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD78B8"))) PPC_WEAK_FUNC(sub_83BD78B8);
PPC_FUNC_IMPL(__imp__sub_83BD78B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22520
	ctx.r3.s64 = ctx.r11.s64 + 22520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD78C4"))) PPC_WEAK_FUNC(sub_83BD78C4);
PPC_FUNC_IMPL(__imp__sub_83BD78C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD78C8"))) PPC_WEAK_FUNC(sub_83BD78C8);
PPC_FUNC_IMPL(__imp__sub_83BD78C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22528
	ctx.r3.s64 = ctx.r11.s64 + 22528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD78D4"))) PPC_WEAK_FUNC(sub_83BD78D4);
PPC_FUNC_IMPL(__imp__sub_83BD78D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD78D8"))) PPC_WEAK_FUNC(sub_83BD78D8);
PPC_FUNC_IMPL(__imp__sub_83BD78D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22536
	ctx.r3.s64 = ctx.r11.s64 + 22536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD78E4"))) PPC_WEAK_FUNC(sub_83BD78E4);
PPC_FUNC_IMPL(__imp__sub_83BD78E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD78E8"))) PPC_WEAK_FUNC(sub_83BD78E8);
PPC_FUNC_IMPL(__imp__sub_83BD78E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22544
	ctx.r3.s64 = ctx.r11.s64 + 22544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD78F4"))) PPC_WEAK_FUNC(sub_83BD78F4);
PPC_FUNC_IMPL(__imp__sub_83BD78F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD78F8"))) PPC_WEAK_FUNC(sub_83BD78F8);
PPC_FUNC_IMPL(__imp__sub_83BD78F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22552
	ctx.r3.s64 = ctx.r11.s64 + 22552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7904"))) PPC_WEAK_FUNC(sub_83BD7904);
PPC_FUNC_IMPL(__imp__sub_83BD7904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7908"))) PPC_WEAK_FUNC(sub_83BD7908);
PPC_FUNC_IMPL(__imp__sub_83BD7908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22560
	ctx.r3.s64 = ctx.r11.s64 + 22560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7914"))) PPC_WEAK_FUNC(sub_83BD7914);
PPC_FUNC_IMPL(__imp__sub_83BD7914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7918"))) PPC_WEAK_FUNC(sub_83BD7918);
PPC_FUNC_IMPL(__imp__sub_83BD7918) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,32384
	ctx.r3.s64 = ctx.r11.s64 + 32384;
	// bl 0x83523120
	ctx.lr = 0x83BD7930;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,22568
	ctx.r3.s64 = ctx.r10.s64 + 22568;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD793C;
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

__attribute__((alias("__imp__sub_83BD794C"))) PPC_WEAK_FUNC(sub_83BD794C);
PPC_FUNC_IMPL(__imp__sub_83BD794C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7950"))) PPC_WEAK_FUNC(sub_83BD7950);
PPC_FUNC_IMPL(__imp__sub_83BD7950) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,32400
	ctx.r7.s64 = ctx.r8.s64 + 32400;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,32400(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32400);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,32400(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32400, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD7978"))) PPC_WEAK_FUNC(sub_83BD7978);
PPC_FUNC_IMPL(__imp__sub_83BD7978) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-32560
	ctx.r6.s64 = ctx.r7.s64 + -32560;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-32632(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -32632);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,32400(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32400);
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
	// std r9,-32560(r7)
	PPC_STORE_U64(ctx.r7.u32 + -32560, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD79C0"))) PPC_WEAK_FUNC(sub_83BD79C0);
PPC_FUNC_IMPL(__imp__sub_83BD79C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22584
	ctx.r3.s64 = ctx.r11.s64 + 22584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD79CC"))) PPC_WEAK_FUNC(sub_83BD79CC);
PPC_FUNC_IMPL(__imp__sub_83BD79CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD79D0"))) PPC_WEAK_FUNC(sub_83BD79D0);
PPC_FUNC_IMPL(__imp__sub_83BD79D0) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,32408
	ctx.r3.s64 = ctx.r11.s64 + 32408;
	// bl 0x8259af80
	ctx.lr = 0x83BD79E8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,22600
	ctx.r3.s64 = ctx.r10.s64 + 22600;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD79F4;
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

__attribute__((alias("__imp__sub_83BD7A04"))) PPC_WEAK_FUNC(sub_83BD7A04);
PPC_FUNC_IMPL(__imp__sub_83BD7A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7A08"))) PPC_WEAK_FUNC(sub_83BD7A08);
PPC_FUNC_IMPL(__imp__sub_83BD7A08) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,32388
	ctx.r11.s64 = ctx.r8.s64 + 32388;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-32584(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32584);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,22592
	ctx.r3.s64 = ctx.r6.s64 + 22592;
	// stw r10,32388(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32388, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7A38"))) PPC_WEAK_FUNC(sub_83BD7A38);
PPC_FUNC_IMPL(__imp__sub_83BD7A38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22608
	ctx.r3.s64 = ctx.r11.s64 + 22608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7A44"))) PPC_WEAK_FUNC(sub_83BD7A44);
PPC_FUNC_IMPL(__imp__sub_83BD7A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7A48"))) PPC_WEAK_FUNC(sub_83BD7A48);
PPC_FUNC_IMPL(__imp__sub_83BD7A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22616
	ctx.r3.s64 = ctx.r11.s64 + 22616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7A54"))) PPC_WEAK_FUNC(sub_83BD7A54);
PPC_FUNC_IMPL(__imp__sub_83BD7A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7A58"))) PPC_WEAK_FUNC(sub_83BD7A58);
PPC_FUNC_IMPL(__imp__sub_83BD7A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22624
	ctx.r3.s64 = ctx.r11.s64 + 22624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7A64"))) PPC_WEAK_FUNC(sub_83BD7A64);
PPC_FUNC_IMPL(__imp__sub_83BD7A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7A68"))) PPC_WEAK_FUNC(sub_83BD7A68);
PPC_FUNC_IMPL(__imp__sub_83BD7A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22632
	ctx.r3.s64 = ctx.r11.s64 + 22632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7A74"))) PPC_WEAK_FUNC(sub_83BD7A74);
PPC_FUNC_IMPL(__imp__sub_83BD7A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7A78"))) PPC_WEAK_FUNC(sub_83BD7A78);
PPC_FUNC_IMPL(__imp__sub_83BD7A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22640
	ctx.r3.s64 = ctx.r11.s64 + 22640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7A84"))) PPC_WEAK_FUNC(sub_83BD7A84);
PPC_FUNC_IMPL(__imp__sub_83BD7A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7A88"))) PPC_WEAK_FUNC(sub_83BD7A88);
PPC_FUNC_IMPL(__imp__sub_83BD7A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22648
	ctx.r3.s64 = ctx.r11.s64 + 22648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7A94"))) PPC_WEAK_FUNC(sub_83BD7A94);
PPC_FUNC_IMPL(__imp__sub_83BD7A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7A98"))) PPC_WEAK_FUNC(sub_83BD7A98);
PPC_FUNC_IMPL(__imp__sub_83BD7A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22656
	ctx.r3.s64 = ctx.r11.s64 + 22656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7AA4"))) PPC_WEAK_FUNC(sub_83BD7AA4);
PPC_FUNC_IMPL(__imp__sub_83BD7AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7AA8"))) PPC_WEAK_FUNC(sub_83BD7AA8);
PPC_FUNC_IMPL(__imp__sub_83BD7AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22664
	ctx.r3.s64 = ctx.r11.s64 + 22664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7AB4"))) PPC_WEAK_FUNC(sub_83BD7AB4);
PPC_FUNC_IMPL(__imp__sub_83BD7AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7AB8"))) PPC_WEAK_FUNC(sub_83BD7AB8);
PPC_FUNC_IMPL(__imp__sub_83BD7AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22672
	ctx.r3.s64 = ctx.r11.s64 + 22672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7AC4"))) PPC_WEAK_FUNC(sub_83BD7AC4);
PPC_FUNC_IMPL(__imp__sub_83BD7AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7AC8"))) PPC_WEAK_FUNC(sub_83BD7AC8);
PPC_FUNC_IMPL(__imp__sub_83BD7AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22680
	ctx.r3.s64 = ctx.r11.s64 + 22680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7AD4"))) PPC_WEAK_FUNC(sub_83BD7AD4);
PPC_FUNC_IMPL(__imp__sub_83BD7AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7AD8"))) PPC_WEAK_FUNC(sub_83BD7AD8);
PPC_FUNC_IMPL(__imp__sub_83BD7AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22688
	ctx.r3.s64 = ctx.r11.s64 + 22688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7AE4"))) PPC_WEAK_FUNC(sub_83BD7AE4);
PPC_FUNC_IMPL(__imp__sub_83BD7AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7AE8"))) PPC_WEAK_FUNC(sub_83BD7AE8);
PPC_FUNC_IMPL(__imp__sub_83BD7AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22696
	ctx.r3.s64 = ctx.r11.s64 + 22696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7AF4"))) PPC_WEAK_FUNC(sub_83BD7AF4);
PPC_FUNC_IMPL(__imp__sub_83BD7AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7AF8"))) PPC_WEAK_FUNC(sub_83BD7AF8);
PPC_FUNC_IMPL(__imp__sub_83BD7AF8) {
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
	// lis r11,-31761
	ctx.r11.s64 = -2081488896;
	// addi r3,r11,32752
	ctx.r3.s64 = ctx.r11.s64 + 32752;
	// bl 0x83523120
	ctx.lr = 0x83BD7B10;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,22704
	ctx.r3.s64 = ctx.r10.s64 + 22704;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD7B1C;
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

__attribute__((alias("__imp__sub_83BD7B2C"))) PPC_WEAK_FUNC(sub_83BD7B2C);
PPC_FUNC_IMPL(__imp__sub_83BD7B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7B30"))) PPC_WEAK_FUNC(sub_83BD7B30);
PPC_FUNC_IMPL(__imp__sub_83BD7B30) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-32768
	ctx.r7.s64 = ctx.r8.s64 + -32768;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-32768(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32768);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-32768(r8)
	PPC_STORE_U32(ctx.r8.u32 + -32768, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD7B58"))) PPC_WEAK_FUNC(sub_83BD7B58);
PPC_FUNC_IMPL(__imp__sub_83BD7B58) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-32432
	ctx.r6.s64 = ctx.r7.s64 + -32432;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-32504(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -32504);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-32768(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -32768);
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
	// std r9,-32432(r7)
	PPC_STORE_U64(ctx.r7.u32 + -32432, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD7BA0"))) PPC_WEAK_FUNC(sub_83BD7BA0);
PPC_FUNC_IMPL(__imp__sub_83BD7BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22720
	ctx.r3.s64 = ctx.r11.s64 + 22720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7BAC"))) PPC_WEAK_FUNC(sub_83BD7BAC);
PPC_FUNC_IMPL(__imp__sub_83BD7BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7BB0"))) PPC_WEAK_FUNC(sub_83BD7BB0);
PPC_FUNC_IMPL(__imp__sub_83BD7BB0) {
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
	// addi r3,r11,-32760
	ctx.r3.s64 = ctx.r11.s64 + -32760;
	// bl 0x8259af80
	ctx.lr = 0x83BD7BC8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,22736
	ctx.r3.s64 = ctx.r10.s64 + 22736;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD7BD4;
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

__attribute__((alias("__imp__sub_83BD7BE4"))) PPC_WEAK_FUNC(sub_83BD7BE4);
PPC_FUNC_IMPL(__imp__sub_83BD7BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7BE8"))) PPC_WEAK_FUNC(sub_83BD7BE8);
PPC_FUNC_IMPL(__imp__sub_83BD7BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,32756
	ctx.r11.s64 = ctx.r8.s64 + 32756;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-32456(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32456);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,22728
	ctx.r3.s64 = ctx.r6.s64 + 22728;
	// stw r10,32756(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32756, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7C18"))) PPC_WEAK_FUNC(sub_83BD7C18);
PPC_FUNC_IMPL(__imp__sub_83BD7C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22744
	ctx.r3.s64 = ctx.r11.s64 + 22744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7C24"))) PPC_WEAK_FUNC(sub_83BD7C24);
PPC_FUNC_IMPL(__imp__sub_83BD7C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7C28"))) PPC_WEAK_FUNC(sub_83BD7C28);
PPC_FUNC_IMPL(__imp__sub_83BD7C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22752
	ctx.r3.s64 = ctx.r11.s64 + 22752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7C34"))) PPC_WEAK_FUNC(sub_83BD7C34);
PPC_FUNC_IMPL(__imp__sub_83BD7C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7C38"))) PPC_WEAK_FUNC(sub_83BD7C38);
PPC_FUNC_IMPL(__imp__sub_83BD7C38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22760
	ctx.r3.s64 = ctx.r11.s64 + 22760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7C44"))) PPC_WEAK_FUNC(sub_83BD7C44);
PPC_FUNC_IMPL(__imp__sub_83BD7C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7C48"))) PPC_WEAK_FUNC(sub_83BD7C48);
PPC_FUNC_IMPL(__imp__sub_83BD7C48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22768
	ctx.r3.s64 = ctx.r11.s64 + 22768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7C54"))) PPC_WEAK_FUNC(sub_83BD7C54);
PPC_FUNC_IMPL(__imp__sub_83BD7C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7C58"))) PPC_WEAK_FUNC(sub_83BD7C58);
PPC_FUNC_IMPL(__imp__sub_83BD7C58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22776
	ctx.r3.s64 = ctx.r11.s64 + 22776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7C64"))) PPC_WEAK_FUNC(sub_83BD7C64);
PPC_FUNC_IMPL(__imp__sub_83BD7C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7C68"))) PPC_WEAK_FUNC(sub_83BD7C68);
PPC_FUNC_IMPL(__imp__sub_83BD7C68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22784
	ctx.r3.s64 = ctx.r11.s64 + 22784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7C74"))) PPC_WEAK_FUNC(sub_83BD7C74);
PPC_FUNC_IMPL(__imp__sub_83BD7C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7C78"))) PPC_WEAK_FUNC(sub_83BD7C78);
PPC_FUNC_IMPL(__imp__sub_83BD7C78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22792
	ctx.r3.s64 = ctx.r11.s64 + 22792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7C84"))) PPC_WEAK_FUNC(sub_83BD7C84);
PPC_FUNC_IMPL(__imp__sub_83BD7C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7C88"))) PPC_WEAK_FUNC(sub_83BD7C88);
PPC_FUNC_IMPL(__imp__sub_83BD7C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22800
	ctx.r3.s64 = ctx.r11.s64 + 22800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7C94"))) PPC_WEAK_FUNC(sub_83BD7C94);
PPC_FUNC_IMPL(__imp__sub_83BD7C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7C98"))) PPC_WEAK_FUNC(sub_83BD7C98);
PPC_FUNC_IMPL(__imp__sub_83BD7C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22808
	ctx.r3.s64 = ctx.r11.s64 + 22808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7CA4"))) PPC_WEAK_FUNC(sub_83BD7CA4);
PPC_FUNC_IMPL(__imp__sub_83BD7CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7CA8"))) PPC_WEAK_FUNC(sub_83BD7CA8);
PPC_FUNC_IMPL(__imp__sub_83BD7CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22816
	ctx.r3.s64 = ctx.r11.s64 + 22816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7CB4"))) PPC_WEAK_FUNC(sub_83BD7CB4);
PPC_FUNC_IMPL(__imp__sub_83BD7CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7CB8"))) PPC_WEAK_FUNC(sub_83BD7CB8);
PPC_FUNC_IMPL(__imp__sub_83BD7CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22824
	ctx.r3.s64 = ctx.r11.s64 + 22824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7CC4"))) PPC_WEAK_FUNC(sub_83BD7CC4);
PPC_FUNC_IMPL(__imp__sub_83BD7CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7CC8"))) PPC_WEAK_FUNC(sub_83BD7CC8);
PPC_FUNC_IMPL(__imp__sub_83BD7CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22832
	ctx.r3.s64 = ctx.r11.s64 + 22832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7CD4"))) PPC_WEAK_FUNC(sub_83BD7CD4);
PPC_FUNC_IMPL(__imp__sub_83BD7CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7CD8"))) PPC_WEAK_FUNC(sub_83BD7CD8);
PPC_FUNC_IMPL(__imp__sub_83BD7CD8) {
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
	// addi r3,r11,-32412
	ctx.r3.s64 = ctx.r11.s64 + -32412;
	// bl 0x83523120
	ctx.lr = 0x83BD7CF0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,22840
	ctx.r3.s64 = ctx.r10.s64 + 22840;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD7CFC;
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

__attribute__((alias("__imp__sub_83BD7D0C"))) PPC_WEAK_FUNC(sub_83BD7D0C);
PPC_FUNC_IMPL(__imp__sub_83BD7D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7D10"))) PPC_WEAK_FUNC(sub_83BD7D10);
PPC_FUNC_IMPL(__imp__sub_83BD7D10) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-32396
	ctx.r7.s64 = ctx.r8.s64 + -32396;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-32396(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -32396);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-32396(r8)
	PPC_STORE_U32(ctx.r8.u32 + -32396, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD7D38"))) PPC_WEAK_FUNC(sub_83BD7D38);
PPC_FUNC_IMPL(__imp__sub_83BD7D38) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-32236
	ctx.r6.s64 = ctx.r7.s64 + -32236;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-32316(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -32316);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-32396(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -32396);
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
	// std r9,-32236(r7)
	PPC_STORE_U64(ctx.r7.u32 + -32236, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD7D80"))) PPC_WEAK_FUNC(sub_83BD7D80);
PPC_FUNC_IMPL(__imp__sub_83BD7D80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22856
	ctx.r3.s64 = ctx.r11.s64 + 22856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7D8C"))) PPC_WEAK_FUNC(sub_83BD7D8C);
PPC_FUNC_IMPL(__imp__sub_83BD7D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7D90"))) PPC_WEAK_FUNC(sub_83BD7D90);
PPC_FUNC_IMPL(__imp__sub_83BD7D90) {
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
	// addi r3,r11,-32384
	ctx.r3.s64 = ctx.r11.s64 + -32384;
	// bl 0x8259af80
	ctx.lr = 0x83BD7DA8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,22888
	ctx.r3.s64 = ctx.r10.s64 + 22888;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD7DB4;
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

__attribute__((alias("__imp__sub_83BD7DC4"))) PPC_WEAK_FUNC(sub_83BD7DC4);
PPC_FUNC_IMPL(__imp__sub_83BD7DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7DC8"))) PPC_WEAK_FUNC(sub_83BD7DC8);
PPC_FUNC_IMPL(__imp__sub_83BD7DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-32408
	ctx.r11.s64 = ctx.r8.s64 + -32408;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-32268(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32268);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,22864
	ctx.r3.s64 = ctx.r6.s64 + 22864;
	// stw r10,-32408(r8)
	PPC_STORE_U32(ctx.r8.u32 + -32408, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7DF8"))) PPC_WEAK_FUNC(sub_83BD7DF8);
PPC_FUNC_IMPL(__imp__sub_83BD7DF8) {
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
	// addi r3,r11,-32040
	ctx.r3.s64 = ctx.r11.s64 + -32040;
	// bl 0x82596fa8
	ctx.lr = 0x83BD7E10;
	sub_82596FA8(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,22872
	ctx.r3.s64 = ctx.r10.s64 + 22872;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD7E1C;
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

__attribute__((alias("__imp__sub_83BD7E2C"))) PPC_WEAK_FUNC(sub_83BD7E2C);
PPC_FUNC_IMPL(__imp__sub_83BD7E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7E30"))) PPC_WEAK_FUNC(sub_83BD7E30);
PPC_FUNC_IMPL(__imp__sub_83BD7E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22896
	ctx.r3.s64 = ctx.r11.s64 + 22896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7E3C"))) PPC_WEAK_FUNC(sub_83BD7E3C);
PPC_FUNC_IMPL(__imp__sub_83BD7E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7E40"))) PPC_WEAK_FUNC(sub_83BD7E40);
PPC_FUNC_IMPL(__imp__sub_83BD7E40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22904
	ctx.r3.s64 = ctx.r11.s64 + 22904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7E4C"))) PPC_WEAK_FUNC(sub_83BD7E4C);
PPC_FUNC_IMPL(__imp__sub_83BD7E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7E50"))) PPC_WEAK_FUNC(sub_83BD7E50);
PPC_FUNC_IMPL(__imp__sub_83BD7E50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22912
	ctx.r3.s64 = ctx.r11.s64 + 22912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7E5C"))) PPC_WEAK_FUNC(sub_83BD7E5C);
PPC_FUNC_IMPL(__imp__sub_83BD7E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7E60"))) PPC_WEAK_FUNC(sub_83BD7E60);
PPC_FUNC_IMPL(__imp__sub_83BD7E60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22920
	ctx.r3.s64 = ctx.r11.s64 + 22920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7E6C"))) PPC_WEAK_FUNC(sub_83BD7E6C);
PPC_FUNC_IMPL(__imp__sub_83BD7E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7E70"))) PPC_WEAK_FUNC(sub_83BD7E70);
PPC_FUNC_IMPL(__imp__sub_83BD7E70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22928
	ctx.r3.s64 = ctx.r11.s64 + 22928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7E7C"))) PPC_WEAK_FUNC(sub_83BD7E7C);
PPC_FUNC_IMPL(__imp__sub_83BD7E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7E80"))) PPC_WEAK_FUNC(sub_83BD7E80);
PPC_FUNC_IMPL(__imp__sub_83BD7E80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22936
	ctx.r3.s64 = ctx.r11.s64 + 22936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7E8C"))) PPC_WEAK_FUNC(sub_83BD7E8C);
PPC_FUNC_IMPL(__imp__sub_83BD7E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7E90"))) PPC_WEAK_FUNC(sub_83BD7E90);
PPC_FUNC_IMPL(__imp__sub_83BD7E90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22944
	ctx.r3.s64 = ctx.r11.s64 + 22944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7E9C"))) PPC_WEAK_FUNC(sub_83BD7E9C);
PPC_FUNC_IMPL(__imp__sub_83BD7E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7EA0"))) PPC_WEAK_FUNC(sub_83BD7EA0);
PPC_FUNC_IMPL(__imp__sub_83BD7EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22952
	ctx.r3.s64 = ctx.r11.s64 + 22952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7EAC"))) PPC_WEAK_FUNC(sub_83BD7EAC);
PPC_FUNC_IMPL(__imp__sub_83BD7EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7EB0"))) PPC_WEAK_FUNC(sub_83BD7EB0);
PPC_FUNC_IMPL(__imp__sub_83BD7EB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22960
	ctx.r3.s64 = ctx.r11.s64 + 22960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7EBC"))) PPC_WEAK_FUNC(sub_83BD7EBC);
PPC_FUNC_IMPL(__imp__sub_83BD7EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7EC0"))) PPC_WEAK_FUNC(sub_83BD7EC0);
PPC_FUNC_IMPL(__imp__sub_83BD7EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22968
	ctx.r3.s64 = ctx.r11.s64 + 22968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7ECC"))) PPC_WEAK_FUNC(sub_83BD7ECC);
PPC_FUNC_IMPL(__imp__sub_83BD7ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7ED0"))) PPC_WEAK_FUNC(sub_83BD7ED0);
PPC_FUNC_IMPL(__imp__sub_83BD7ED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22976
	ctx.r3.s64 = ctx.r11.s64 + 22976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7EDC"))) PPC_WEAK_FUNC(sub_83BD7EDC);
PPC_FUNC_IMPL(__imp__sub_83BD7EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7EE0"))) PPC_WEAK_FUNC(sub_83BD7EE0);
PPC_FUNC_IMPL(__imp__sub_83BD7EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,22984
	ctx.r3.s64 = ctx.r11.s64 + 22984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7EEC"))) PPC_WEAK_FUNC(sub_83BD7EEC);
PPC_FUNC_IMPL(__imp__sub_83BD7EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7EF0"))) PPC_WEAK_FUNC(sub_83BD7EF0);
PPC_FUNC_IMPL(__imp__sub_83BD7EF0) {
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
	// addi r3,r11,-32008
	ctx.r3.s64 = ctx.r11.s64 + -32008;
	// bl 0x83523120
	ctx.lr = 0x83BD7F08;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,22992
	ctx.r3.s64 = ctx.r10.s64 + 22992;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD7F14;
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

__attribute__((alias("__imp__sub_83BD7F24"))) PPC_WEAK_FUNC(sub_83BD7F24);
PPC_FUNC_IMPL(__imp__sub_83BD7F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7F28"))) PPC_WEAK_FUNC(sub_83BD7F28);
PPC_FUNC_IMPL(__imp__sub_83BD7F28) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-31992
	ctx.r7.s64 = ctx.r8.s64 + -31992;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-31992(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31992);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-31992(r8)
	PPC_STORE_U32(ctx.r8.u32 + -31992, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD7F50"))) PPC_WEAK_FUNC(sub_83BD7F50);
PPC_FUNC_IMPL(__imp__sub_83BD7F50) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-31964
	ctx.r6.s64 = ctx.r7.s64 + -31964;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-32036(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -32036);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-31992(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -31992);
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
	// std r9,-31964(r7)
	PPC_STORE_U64(ctx.r7.u32 + -31964, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD7F98"))) PPC_WEAK_FUNC(sub_83BD7F98);
PPC_FUNC_IMPL(__imp__sub_83BD7F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23008
	ctx.r3.s64 = ctx.r11.s64 + 23008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD7FA4"))) PPC_WEAK_FUNC(sub_83BD7FA4);
PPC_FUNC_IMPL(__imp__sub_83BD7FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7FA8"))) PPC_WEAK_FUNC(sub_83BD7FA8);
PPC_FUNC_IMPL(__imp__sub_83BD7FA8) {
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
	// addi r3,r11,-31984
	ctx.r3.s64 = ctx.r11.s64 + -31984;
	// bl 0x8259af80
	ctx.lr = 0x83BD7FC0;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,23024
	ctx.r3.s64 = ctx.r10.s64 + 23024;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD7FCC;
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

__attribute__((alias("__imp__sub_83BD7FDC"))) PPC_WEAK_FUNC(sub_83BD7FDC);
PPC_FUNC_IMPL(__imp__sub_83BD7FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD7FE0"))) PPC_WEAK_FUNC(sub_83BD7FE0);
PPC_FUNC_IMPL(__imp__sub_83BD7FE0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-32004
	ctx.r11.s64 = ctx.r8.s64 + -32004;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-31988(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31988);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,23016
	ctx.r3.s64 = ctx.r6.s64 + 23016;
	// stw r10,-32004(r8)
	PPC_STORE_U32(ctx.r8.u32 + -32004, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD8010"))) PPC_WEAK_FUNC(sub_83BD8010);
PPC_FUNC_IMPL(__imp__sub_83BD8010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23032
	ctx.r3.s64 = ctx.r11.s64 + 23032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD801C"))) PPC_WEAK_FUNC(sub_83BD801C);
PPC_FUNC_IMPL(__imp__sub_83BD801C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8020"))) PPC_WEAK_FUNC(sub_83BD8020);
PPC_FUNC_IMPL(__imp__sub_83BD8020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23040
	ctx.r3.s64 = ctx.r11.s64 + 23040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD802C"))) PPC_WEAK_FUNC(sub_83BD802C);
PPC_FUNC_IMPL(__imp__sub_83BD802C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8030"))) PPC_WEAK_FUNC(sub_83BD8030);
PPC_FUNC_IMPL(__imp__sub_83BD8030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23048
	ctx.r3.s64 = ctx.r11.s64 + 23048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD803C"))) PPC_WEAK_FUNC(sub_83BD803C);
PPC_FUNC_IMPL(__imp__sub_83BD803C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8040"))) PPC_WEAK_FUNC(sub_83BD8040);
PPC_FUNC_IMPL(__imp__sub_83BD8040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23056
	ctx.r3.s64 = ctx.r11.s64 + 23056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD804C"))) PPC_WEAK_FUNC(sub_83BD804C);
PPC_FUNC_IMPL(__imp__sub_83BD804C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8050"))) PPC_WEAK_FUNC(sub_83BD8050);
PPC_FUNC_IMPL(__imp__sub_83BD8050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23064
	ctx.r3.s64 = ctx.r11.s64 + 23064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD805C"))) PPC_WEAK_FUNC(sub_83BD805C);
PPC_FUNC_IMPL(__imp__sub_83BD805C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8060"))) PPC_WEAK_FUNC(sub_83BD8060);
PPC_FUNC_IMPL(__imp__sub_83BD8060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23072
	ctx.r3.s64 = ctx.r11.s64 + 23072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD806C"))) PPC_WEAK_FUNC(sub_83BD806C);
PPC_FUNC_IMPL(__imp__sub_83BD806C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8070"))) PPC_WEAK_FUNC(sub_83BD8070);
PPC_FUNC_IMPL(__imp__sub_83BD8070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23080
	ctx.r3.s64 = ctx.r11.s64 + 23080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD807C"))) PPC_WEAK_FUNC(sub_83BD807C);
PPC_FUNC_IMPL(__imp__sub_83BD807C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8080"))) PPC_WEAK_FUNC(sub_83BD8080);
PPC_FUNC_IMPL(__imp__sub_83BD8080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23088
	ctx.r3.s64 = ctx.r11.s64 + 23088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD808C"))) PPC_WEAK_FUNC(sub_83BD808C);
PPC_FUNC_IMPL(__imp__sub_83BD808C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8090"))) PPC_WEAK_FUNC(sub_83BD8090);
PPC_FUNC_IMPL(__imp__sub_83BD8090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23096
	ctx.r3.s64 = ctx.r11.s64 + 23096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD809C"))) PPC_WEAK_FUNC(sub_83BD809C);
PPC_FUNC_IMPL(__imp__sub_83BD809C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD80A0"))) PPC_WEAK_FUNC(sub_83BD80A0);
PPC_FUNC_IMPL(__imp__sub_83BD80A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23104
	ctx.r3.s64 = ctx.r11.s64 + 23104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD80AC"))) PPC_WEAK_FUNC(sub_83BD80AC);
PPC_FUNC_IMPL(__imp__sub_83BD80AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD80B0"))) PPC_WEAK_FUNC(sub_83BD80B0);
PPC_FUNC_IMPL(__imp__sub_83BD80B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23112
	ctx.r3.s64 = ctx.r11.s64 + 23112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD80BC"))) PPC_WEAK_FUNC(sub_83BD80BC);
PPC_FUNC_IMPL(__imp__sub_83BD80BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD80C0"))) PPC_WEAK_FUNC(sub_83BD80C0);
PPC_FUNC_IMPL(__imp__sub_83BD80C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23120
	ctx.r3.s64 = ctx.r11.s64 + 23120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD80CC"))) PPC_WEAK_FUNC(sub_83BD80CC);
PPC_FUNC_IMPL(__imp__sub_83BD80CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD80D0"))) PPC_WEAK_FUNC(sub_83BD80D0);
PPC_FUNC_IMPL(__imp__sub_83BD80D0) {
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
	// addi r3,r11,-31640
	ctx.r3.s64 = ctx.r11.s64 + -31640;
	// bl 0x83523120
	ctx.lr = 0x83BD80E8;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,23128
	ctx.r3.s64 = ctx.r10.s64 + 23128;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD80F4;
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

__attribute__((alias("__imp__sub_83BD8104"))) PPC_WEAK_FUNC(sub_83BD8104);
PPC_FUNC_IMPL(__imp__sub_83BD8104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8108"))) PPC_WEAK_FUNC(sub_83BD8108);
PPC_FUNC_IMPL(__imp__sub_83BD8108) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-31624
	ctx.r7.s64 = ctx.r8.s64 + -31624;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-31624(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31624);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-31624(r8)
	PPC_STORE_U32(ctx.r8.u32 + -31624, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD8130"))) PPC_WEAK_FUNC(sub_83BD8130);
PPC_FUNC_IMPL(__imp__sub_83BD8130) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-31820
	ctx.r6.s64 = ctx.r7.s64 + -31820;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-31900(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -31900);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-31624(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -31624);
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
	// std r9,-31820(r7)
	PPC_STORE_U64(ctx.r7.u32 + -31820, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD8178"))) PPC_WEAK_FUNC(sub_83BD8178);
PPC_FUNC_IMPL(__imp__sub_83BD8178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23144
	ctx.r3.s64 = ctx.r11.s64 + 23144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD8184"))) PPC_WEAK_FUNC(sub_83BD8184);
PPC_FUNC_IMPL(__imp__sub_83BD8184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8188"))) PPC_WEAK_FUNC(sub_83BD8188);
PPC_FUNC_IMPL(__imp__sub_83BD8188) {
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
	// addi r3,r11,-31616
	ctx.r3.s64 = ctx.r11.s64 + -31616;
	// bl 0x8259af80
	ctx.lr = 0x83BD81A0;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,23160
	ctx.r3.s64 = ctx.r10.s64 + 23160;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD81AC;
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

__attribute__((alias("__imp__sub_83BD81BC"))) PPC_WEAK_FUNC(sub_83BD81BC);
PPC_FUNC_IMPL(__imp__sub_83BD81BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD81C0"))) PPC_WEAK_FUNC(sub_83BD81C0);
PPC_FUNC_IMPL(__imp__sub_83BD81C0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-31636
	ctx.r11.s64 = ctx.r8.s64 + -31636;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-31852(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31852);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,23152
	ctx.r3.s64 = ctx.r6.s64 + 23152;
	// stw r10,-31636(r8)
	PPC_STORE_U32(ctx.r8.u32 + -31636, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD81F0"))) PPC_WEAK_FUNC(sub_83BD81F0);
PPC_FUNC_IMPL(__imp__sub_83BD81F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23168
	ctx.r3.s64 = ctx.r11.s64 + 23168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD81FC"))) PPC_WEAK_FUNC(sub_83BD81FC);
PPC_FUNC_IMPL(__imp__sub_83BD81FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8200"))) PPC_WEAK_FUNC(sub_83BD8200);
PPC_FUNC_IMPL(__imp__sub_83BD8200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23176
	ctx.r3.s64 = ctx.r11.s64 + 23176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD820C"))) PPC_WEAK_FUNC(sub_83BD820C);
PPC_FUNC_IMPL(__imp__sub_83BD820C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8210"))) PPC_WEAK_FUNC(sub_83BD8210);
PPC_FUNC_IMPL(__imp__sub_83BD8210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23184
	ctx.r3.s64 = ctx.r11.s64 + 23184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD821C"))) PPC_WEAK_FUNC(sub_83BD821C);
PPC_FUNC_IMPL(__imp__sub_83BD821C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8220"))) PPC_WEAK_FUNC(sub_83BD8220);
PPC_FUNC_IMPL(__imp__sub_83BD8220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23192
	ctx.r3.s64 = ctx.r11.s64 + 23192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD822C"))) PPC_WEAK_FUNC(sub_83BD822C);
PPC_FUNC_IMPL(__imp__sub_83BD822C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8230"))) PPC_WEAK_FUNC(sub_83BD8230);
PPC_FUNC_IMPL(__imp__sub_83BD8230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23200
	ctx.r3.s64 = ctx.r11.s64 + 23200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD823C"))) PPC_WEAK_FUNC(sub_83BD823C);
PPC_FUNC_IMPL(__imp__sub_83BD823C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8240"))) PPC_WEAK_FUNC(sub_83BD8240);
PPC_FUNC_IMPL(__imp__sub_83BD8240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23208
	ctx.r3.s64 = ctx.r11.s64 + 23208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD824C"))) PPC_WEAK_FUNC(sub_83BD824C);
PPC_FUNC_IMPL(__imp__sub_83BD824C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8250"))) PPC_WEAK_FUNC(sub_83BD8250);
PPC_FUNC_IMPL(__imp__sub_83BD8250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23216
	ctx.r3.s64 = ctx.r11.s64 + 23216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD825C"))) PPC_WEAK_FUNC(sub_83BD825C);
PPC_FUNC_IMPL(__imp__sub_83BD825C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8260"))) PPC_WEAK_FUNC(sub_83BD8260);
PPC_FUNC_IMPL(__imp__sub_83BD8260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23224
	ctx.r3.s64 = ctx.r11.s64 + 23224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD826C"))) PPC_WEAK_FUNC(sub_83BD826C);
PPC_FUNC_IMPL(__imp__sub_83BD826C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8270"))) PPC_WEAK_FUNC(sub_83BD8270);
PPC_FUNC_IMPL(__imp__sub_83BD8270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23232
	ctx.r3.s64 = ctx.r11.s64 + 23232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD827C"))) PPC_WEAK_FUNC(sub_83BD827C);
PPC_FUNC_IMPL(__imp__sub_83BD827C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8280"))) PPC_WEAK_FUNC(sub_83BD8280);
PPC_FUNC_IMPL(__imp__sub_83BD8280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23240
	ctx.r3.s64 = ctx.r11.s64 + 23240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD828C"))) PPC_WEAK_FUNC(sub_83BD828C);
PPC_FUNC_IMPL(__imp__sub_83BD828C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8290"))) PPC_WEAK_FUNC(sub_83BD8290);
PPC_FUNC_IMPL(__imp__sub_83BD8290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23248
	ctx.r3.s64 = ctx.r11.s64 + 23248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD829C"))) PPC_WEAK_FUNC(sub_83BD829C);
PPC_FUNC_IMPL(__imp__sub_83BD829C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD82A0"))) PPC_WEAK_FUNC(sub_83BD82A0);
PPC_FUNC_IMPL(__imp__sub_83BD82A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23256
	ctx.r3.s64 = ctx.r11.s64 + 23256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD82AC"))) PPC_WEAK_FUNC(sub_83BD82AC);
PPC_FUNC_IMPL(__imp__sub_83BD82AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD82B0"))) PPC_WEAK_FUNC(sub_83BD82B0);
PPC_FUNC_IMPL(__imp__sub_83BD82B0) {
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
	// addi r3,r11,-31272
	ctx.r3.s64 = ctx.r11.s64 + -31272;
	// bl 0x83523120
	ctx.lr = 0x83BD82C8;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,23264
	ctx.r3.s64 = ctx.r10.s64 + 23264;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD82D4;
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

__attribute__((alias("__imp__sub_83BD82E4"))) PPC_WEAK_FUNC(sub_83BD82E4);
PPC_FUNC_IMPL(__imp__sub_83BD82E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD82E8"))) PPC_WEAK_FUNC(sub_83BD82E8);
PPC_FUNC_IMPL(__imp__sub_83BD82E8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-31256
	ctx.r7.s64 = ctx.r8.s64 + -31256;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-31256(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -31256);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-31256(r8)
	PPC_STORE_U32(ctx.r8.u32 + -31256, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD8310"))) PPC_WEAK_FUNC(sub_83BD8310);
PPC_FUNC_IMPL(__imp__sub_83BD8310) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-31680
	ctx.r6.s64 = ctx.r7.s64 + -31680;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-31752(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -31752);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-31256(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -31256);
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
	// std r9,-31680(r7)
	PPC_STORE_U64(ctx.r7.u32 + -31680, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD8358"))) PPC_WEAK_FUNC(sub_83BD8358);
PPC_FUNC_IMPL(__imp__sub_83BD8358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23280
	ctx.r3.s64 = ctx.r11.s64 + 23280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD8364"))) PPC_WEAK_FUNC(sub_83BD8364);
PPC_FUNC_IMPL(__imp__sub_83BD8364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8368"))) PPC_WEAK_FUNC(sub_83BD8368);
PPC_FUNC_IMPL(__imp__sub_83BD8368) {
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
	// addi r3,r11,-31248
	ctx.r3.s64 = ctx.r11.s64 + -31248;
	// bl 0x8259af80
	ctx.lr = 0x83BD8380;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,23296
	ctx.r3.s64 = ctx.r10.s64 + 23296;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD838C;
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

__attribute__((alias("__imp__sub_83BD839C"))) PPC_WEAK_FUNC(sub_83BD839C);
PPC_FUNC_IMPL(__imp__sub_83BD839C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD83A0"))) PPC_WEAK_FUNC(sub_83BD83A0);
PPC_FUNC_IMPL(__imp__sub_83BD83A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-31268
	ctx.r11.s64 = ctx.r8.s64 + -31268;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-31704(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31704);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,23288
	ctx.r3.s64 = ctx.r6.s64 + 23288;
	// stw r10,-31268(r8)
	PPC_STORE_U32(ctx.r8.u32 + -31268, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD83D0"))) PPC_WEAK_FUNC(sub_83BD83D0);
PPC_FUNC_IMPL(__imp__sub_83BD83D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23304
	ctx.r3.s64 = ctx.r11.s64 + 23304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD83DC"))) PPC_WEAK_FUNC(sub_83BD83DC);
PPC_FUNC_IMPL(__imp__sub_83BD83DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD83E0"))) PPC_WEAK_FUNC(sub_83BD83E0);
PPC_FUNC_IMPL(__imp__sub_83BD83E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23312
	ctx.r3.s64 = ctx.r11.s64 + 23312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD83EC"))) PPC_WEAK_FUNC(sub_83BD83EC);
PPC_FUNC_IMPL(__imp__sub_83BD83EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD83F0"))) PPC_WEAK_FUNC(sub_83BD83F0);
PPC_FUNC_IMPL(__imp__sub_83BD83F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23320
	ctx.r3.s64 = ctx.r11.s64 + 23320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD83FC"))) PPC_WEAK_FUNC(sub_83BD83FC);
PPC_FUNC_IMPL(__imp__sub_83BD83FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8400"))) PPC_WEAK_FUNC(sub_83BD8400);
PPC_FUNC_IMPL(__imp__sub_83BD8400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23328
	ctx.r3.s64 = ctx.r11.s64 + 23328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD840C"))) PPC_WEAK_FUNC(sub_83BD840C);
PPC_FUNC_IMPL(__imp__sub_83BD840C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8410"))) PPC_WEAK_FUNC(sub_83BD8410);
PPC_FUNC_IMPL(__imp__sub_83BD8410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23336
	ctx.r3.s64 = ctx.r11.s64 + 23336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD841C"))) PPC_WEAK_FUNC(sub_83BD841C);
PPC_FUNC_IMPL(__imp__sub_83BD841C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8420"))) PPC_WEAK_FUNC(sub_83BD8420);
PPC_FUNC_IMPL(__imp__sub_83BD8420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23344
	ctx.r3.s64 = ctx.r11.s64 + 23344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD842C"))) PPC_WEAK_FUNC(sub_83BD842C);
PPC_FUNC_IMPL(__imp__sub_83BD842C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8430"))) PPC_WEAK_FUNC(sub_83BD8430);
PPC_FUNC_IMPL(__imp__sub_83BD8430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23352
	ctx.r3.s64 = ctx.r11.s64 + 23352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD843C"))) PPC_WEAK_FUNC(sub_83BD843C);
PPC_FUNC_IMPL(__imp__sub_83BD843C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8440"))) PPC_WEAK_FUNC(sub_83BD8440);
PPC_FUNC_IMPL(__imp__sub_83BD8440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23360
	ctx.r3.s64 = ctx.r11.s64 + 23360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD844C"))) PPC_WEAK_FUNC(sub_83BD844C);
PPC_FUNC_IMPL(__imp__sub_83BD844C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8450"))) PPC_WEAK_FUNC(sub_83BD8450);
PPC_FUNC_IMPL(__imp__sub_83BD8450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23368
	ctx.r3.s64 = ctx.r11.s64 + 23368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD845C"))) PPC_WEAK_FUNC(sub_83BD845C);
PPC_FUNC_IMPL(__imp__sub_83BD845C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8460"))) PPC_WEAK_FUNC(sub_83BD8460);
PPC_FUNC_IMPL(__imp__sub_83BD8460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23376
	ctx.r3.s64 = ctx.r11.s64 + 23376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD846C"))) PPC_WEAK_FUNC(sub_83BD846C);
PPC_FUNC_IMPL(__imp__sub_83BD846C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8470"))) PPC_WEAK_FUNC(sub_83BD8470);
PPC_FUNC_IMPL(__imp__sub_83BD8470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23384
	ctx.r3.s64 = ctx.r11.s64 + 23384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD847C"))) PPC_WEAK_FUNC(sub_83BD847C);
PPC_FUNC_IMPL(__imp__sub_83BD847C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8480"))) PPC_WEAK_FUNC(sub_83BD8480);
PPC_FUNC_IMPL(__imp__sub_83BD8480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23392
	ctx.r3.s64 = ctx.r11.s64 + 23392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD848C"))) PPC_WEAK_FUNC(sub_83BD848C);
PPC_FUNC_IMPL(__imp__sub_83BD848C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8490"))) PPC_WEAK_FUNC(sub_83BD8490);
PPC_FUNC_IMPL(__imp__sub_83BD8490) {
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
	// addi r3,r11,-30904
	ctx.r3.s64 = ctx.r11.s64 + -30904;
	// bl 0x83523120
	ctx.lr = 0x83BD84A8;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,23400
	ctx.r3.s64 = ctx.r10.s64 + 23400;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD84B4;
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

__attribute__((alias("__imp__sub_83BD84C4"))) PPC_WEAK_FUNC(sub_83BD84C4);
PPC_FUNC_IMPL(__imp__sub_83BD84C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD84C8"))) PPC_WEAK_FUNC(sub_83BD84C8);
PPC_FUNC_IMPL(__imp__sub_83BD84C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-30888
	ctx.r7.s64 = ctx.r8.s64 + -30888;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-30888(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30888);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-30888(r8)
	PPC_STORE_U32(ctx.r8.u32 + -30888, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD84F0"))) PPC_WEAK_FUNC(sub_83BD84F0);
PPC_FUNC_IMPL(__imp__sub_83BD84F0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-31504
	ctx.r6.s64 = ctx.r7.s64 + -31504;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-31576(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -31576);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-30888(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -30888);
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
	// std r9,-31504(r7)
	PPC_STORE_U64(ctx.r7.u32 + -31504, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD8538"))) PPC_WEAK_FUNC(sub_83BD8538);
PPC_FUNC_IMPL(__imp__sub_83BD8538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23416
	ctx.r3.s64 = ctx.r11.s64 + 23416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD8544"))) PPC_WEAK_FUNC(sub_83BD8544);
PPC_FUNC_IMPL(__imp__sub_83BD8544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8548"))) PPC_WEAK_FUNC(sub_83BD8548);
PPC_FUNC_IMPL(__imp__sub_83BD8548) {
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
	// addi r3,r11,-30880
	ctx.r3.s64 = ctx.r11.s64 + -30880;
	// bl 0x8259af80
	ctx.lr = 0x83BD8560;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,23432
	ctx.r3.s64 = ctx.r10.s64 + 23432;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD856C;
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

__attribute__((alias("__imp__sub_83BD857C"))) PPC_WEAK_FUNC(sub_83BD857C);
PPC_FUNC_IMPL(__imp__sub_83BD857C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8580"))) PPC_WEAK_FUNC(sub_83BD8580);
PPC_FUNC_IMPL(__imp__sub_83BD8580) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-30900
	ctx.r11.s64 = ctx.r8.s64 + -30900;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,-31528(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31528);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,23424
	ctx.r3.s64 = ctx.r6.s64 + 23424;
	// stw r10,-30900(r8)
	PPC_STORE_U32(ctx.r8.u32 + -30900, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD85B0"))) PPC_WEAK_FUNC(sub_83BD85B0);
PPC_FUNC_IMPL(__imp__sub_83BD85B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23440
	ctx.r3.s64 = ctx.r11.s64 + 23440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD85BC"))) PPC_WEAK_FUNC(sub_83BD85BC);
PPC_FUNC_IMPL(__imp__sub_83BD85BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD85C0"))) PPC_WEAK_FUNC(sub_83BD85C0);
PPC_FUNC_IMPL(__imp__sub_83BD85C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23448
	ctx.r3.s64 = ctx.r11.s64 + 23448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD85CC"))) PPC_WEAK_FUNC(sub_83BD85CC);
PPC_FUNC_IMPL(__imp__sub_83BD85CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD85D0"))) PPC_WEAK_FUNC(sub_83BD85D0);
PPC_FUNC_IMPL(__imp__sub_83BD85D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23456
	ctx.r3.s64 = ctx.r11.s64 + 23456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD85DC"))) PPC_WEAK_FUNC(sub_83BD85DC);
PPC_FUNC_IMPL(__imp__sub_83BD85DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD85E0"))) PPC_WEAK_FUNC(sub_83BD85E0);
PPC_FUNC_IMPL(__imp__sub_83BD85E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23464
	ctx.r3.s64 = ctx.r11.s64 + 23464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD85EC"))) PPC_WEAK_FUNC(sub_83BD85EC);
PPC_FUNC_IMPL(__imp__sub_83BD85EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD85F0"))) PPC_WEAK_FUNC(sub_83BD85F0);
PPC_FUNC_IMPL(__imp__sub_83BD85F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23472
	ctx.r3.s64 = ctx.r11.s64 + 23472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD85FC"))) PPC_WEAK_FUNC(sub_83BD85FC);
PPC_FUNC_IMPL(__imp__sub_83BD85FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8600"))) PPC_WEAK_FUNC(sub_83BD8600);
PPC_FUNC_IMPL(__imp__sub_83BD8600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23480
	ctx.r3.s64 = ctx.r11.s64 + 23480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD860C"))) PPC_WEAK_FUNC(sub_83BD860C);
PPC_FUNC_IMPL(__imp__sub_83BD860C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8610"))) PPC_WEAK_FUNC(sub_83BD8610);
PPC_FUNC_IMPL(__imp__sub_83BD8610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23488
	ctx.r3.s64 = ctx.r11.s64 + 23488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD861C"))) PPC_WEAK_FUNC(sub_83BD861C);
PPC_FUNC_IMPL(__imp__sub_83BD861C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8620"))) PPC_WEAK_FUNC(sub_83BD8620);
PPC_FUNC_IMPL(__imp__sub_83BD8620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23496
	ctx.r3.s64 = ctx.r11.s64 + 23496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD862C"))) PPC_WEAK_FUNC(sub_83BD862C);
PPC_FUNC_IMPL(__imp__sub_83BD862C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8630"))) PPC_WEAK_FUNC(sub_83BD8630);
PPC_FUNC_IMPL(__imp__sub_83BD8630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD863C"))) PPC_WEAK_FUNC(sub_83BD863C);
PPC_FUNC_IMPL(__imp__sub_83BD863C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8640"))) PPC_WEAK_FUNC(sub_83BD8640);
PPC_FUNC_IMPL(__imp__sub_83BD8640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23512
	ctx.r3.s64 = ctx.r11.s64 + 23512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD864C"))) PPC_WEAK_FUNC(sub_83BD864C);
PPC_FUNC_IMPL(__imp__sub_83BD864C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8650"))) PPC_WEAK_FUNC(sub_83BD8650);
PPC_FUNC_IMPL(__imp__sub_83BD8650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23520
	ctx.r3.s64 = ctx.r11.s64 + 23520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD865C"))) PPC_WEAK_FUNC(sub_83BD865C);
PPC_FUNC_IMPL(__imp__sub_83BD865C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8660"))) PPC_WEAK_FUNC(sub_83BD8660);
PPC_FUNC_IMPL(__imp__sub_83BD8660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23528
	ctx.r3.s64 = ctx.r11.s64 + 23528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD866C"))) PPC_WEAK_FUNC(sub_83BD866C);
PPC_FUNC_IMPL(__imp__sub_83BD866C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8670"))) PPC_WEAK_FUNC(sub_83BD8670);
PPC_FUNC_IMPL(__imp__sub_83BD8670) {
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
	// addi r3,r11,-30532
	ctx.r3.s64 = ctx.r11.s64 + -30532;
	// bl 0x83523120
	ctx.lr = 0x83BD8688;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,23536
	ctx.r3.s64 = ctx.r10.s64 + 23536;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD8694;
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

__attribute__((alias("__imp__sub_83BD86A4"))) PPC_WEAK_FUNC(sub_83BD86A4);
PPC_FUNC_IMPL(__imp__sub_83BD86A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD86A8"))) PPC_WEAK_FUNC(sub_83BD86A8);
PPC_FUNC_IMPL(__imp__sub_83BD86A8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-30516
	ctx.r7.s64 = ctx.r8.s64 + -30516;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-30516(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30516);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-30516(r8)
	PPC_STORE_U32(ctx.r8.u32 + -30516, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD86D0"))) PPC_WEAK_FUNC(sub_83BD86D0);
PPC_FUNC_IMPL(__imp__sub_83BD86D0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-31368
	ctx.r6.s64 = ctx.r7.s64 + -31368;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-31448(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -31448);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-30516(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -30516);
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
	// std r9,-31368(r7)
	PPC_STORE_U64(ctx.r7.u32 + -31368, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BD8718"))) PPC_WEAK_FUNC(sub_83BD8718);
PPC_FUNC_IMPL(__imp__sub_83BD8718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,23552
	ctx.r3.s64 = ctx.r11.s64 + 23552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BD8724"))) PPC_WEAK_FUNC(sub_83BD8724);
PPC_FUNC_IMPL(__imp__sub_83BD8724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BD8728"))) PPC_WEAK_FUNC(sub_83BD8728);
PPC_FUNC_IMPL(__imp__sub_83BD8728) {
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
	// addi r3,r11,-30504
	ctx.r3.s64 = ctx.r11.s64 + -30504;
	// bl 0x8259af80
	ctx.lr = 0x83BD8740;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,23568
	ctx.r3.s64 = ctx.r10.s64 + 23568;
	// bl 0x831cdcc8
	ctx.lr = 0x83BD874C;
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

__attribute__((alias("__imp__sub_83BD875C"))) PPC_WEAK_FUNC(sub_83BD875C);
PPC_FUNC_IMPL(__imp__sub_83BD875C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

