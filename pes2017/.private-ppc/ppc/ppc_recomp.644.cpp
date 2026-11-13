#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BCD6E8"))) PPC_WEAK_FUNC(sub_83BCD6E8);
PPC_FUNC_IMPL(__imp__sub_83BCD6E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12272
	ctx.r3.s64 = ctx.r11.s64 + 12272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD6F4"))) PPC_WEAK_FUNC(sub_83BCD6F4);
PPC_FUNC_IMPL(__imp__sub_83BCD6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD6F8"))) PPC_WEAK_FUNC(sub_83BCD6F8);
PPC_FUNC_IMPL(__imp__sub_83BCD6F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12280
	ctx.r3.s64 = ctx.r11.s64 + 12280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD704"))) PPC_WEAK_FUNC(sub_83BCD704);
PPC_FUNC_IMPL(__imp__sub_83BCD704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD708"))) PPC_WEAK_FUNC(sub_83BCD708);
PPC_FUNC_IMPL(__imp__sub_83BCD708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12288
	ctx.r3.s64 = ctx.r11.s64 + 12288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD714"))) PPC_WEAK_FUNC(sub_83BCD714);
PPC_FUNC_IMPL(__imp__sub_83BCD714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD718"))) PPC_WEAK_FUNC(sub_83BCD718);
PPC_FUNC_IMPL(__imp__sub_83BCD718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12296
	ctx.r3.s64 = ctx.r11.s64 + 12296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD724"))) PPC_WEAK_FUNC(sub_83BCD724);
PPC_FUNC_IMPL(__imp__sub_83BCD724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD728"))) PPC_WEAK_FUNC(sub_83BCD728);
PPC_FUNC_IMPL(__imp__sub_83BCD728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12304
	ctx.r3.s64 = ctx.r11.s64 + 12304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD734"))) PPC_WEAK_FUNC(sub_83BCD734);
PPC_FUNC_IMPL(__imp__sub_83BCD734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD738"))) PPC_WEAK_FUNC(sub_83BCD738);
PPC_FUNC_IMPL(__imp__sub_83BCD738) {
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
	// addi r3,r11,5664
	ctx.r3.s64 = ctx.r11.s64 + 5664;
	// bl 0x83523120
	ctx.lr = 0x83BCD750;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,12312
	ctx.r3.s64 = ctx.r10.s64 + 12312;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCD75C;
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

__attribute__((alias("__imp__sub_83BCD76C"))) PPC_WEAK_FUNC(sub_83BCD76C);
PPC_FUNC_IMPL(__imp__sub_83BCD76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD770"))) PPC_WEAK_FUNC(sub_83BCD770);
PPC_FUNC_IMPL(__imp__sub_83BCD770) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,5680
	ctx.r7.s64 = ctx.r8.s64 + 5680;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,5680(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5680);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,5680(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5680, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCD798"))) PPC_WEAK_FUNC(sub_83BCD798);
PPC_FUNC_IMPL(__imp__sub_83BCD798) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,16240
	ctx.r6.s64 = ctx.r7.s64 + 16240;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,16168(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 16168);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,5680(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5680);
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
	// std r9,16240(r7)
	PPC_STORE_U64(ctx.r7.u32 + 16240, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCD7E0"))) PPC_WEAK_FUNC(sub_83BCD7E0);
PPC_FUNC_IMPL(__imp__sub_83BCD7E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12328
	ctx.r3.s64 = ctx.r11.s64 + 12328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD7EC"))) PPC_WEAK_FUNC(sub_83BCD7EC);
PPC_FUNC_IMPL(__imp__sub_83BCD7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD7F0"))) PPC_WEAK_FUNC(sub_83BCD7F0);
PPC_FUNC_IMPL(__imp__sub_83BCD7F0) {
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
	// addi r3,r11,5688
	ctx.r3.s64 = ctx.r11.s64 + 5688;
	// bl 0x8259af80
	ctx.lr = 0x83BCD808;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,12344
	ctx.r3.s64 = ctx.r10.s64 + 12344;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCD814;
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

__attribute__((alias("__imp__sub_83BCD824"))) PPC_WEAK_FUNC(sub_83BCD824);
PPC_FUNC_IMPL(__imp__sub_83BCD824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD828"))) PPC_WEAK_FUNC(sub_83BCD828);
PPC_FUNC_IMPL(__imp__sub_83BCD828) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,5668
	ctx.r11.s64 = ctx.r8.s64 + 5668;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,16216(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16216);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,12336
	ctx.r3.s64 = ctx.r6.s64 + 12336;
	// stw r10,5668(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5668, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD858"))) PPC_WEAK_FUNC(sub_83BCD858);
PPC_FUNC_IMPL(__imp__sub_83BCD858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12352
	ctx.r3.s64 = ctx.r11.s64 + 12352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD864"))) PPC_WEAK_FUNC(sub_83BCD864);
PPC_FUNC_IMPL(__imp__sub_83BCD864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD868"))) PPC_WEAK_FUNC(sub_83BCD868);
PPC_FUNC_IMPL(__imp__sub_83BCD868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12360
	ctx.r3.s64 = ctx.r11.s64 + 12360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD874"))) PPC_WEAK_FUNC(sub_83BCD874);
PPC_FUNC_IMPL(__imp__sub_83BCD874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD878"))) PPC_WEAK_FUNC(sub_83BCD878);
PPC_FUNC_IMPL(__imp__sub_83BCD878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12368
	ctx.r3.s64 = ctx.r11.s64 + 12368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD884"))) PPC_WEAK_FUNC(sub_83BCD884);
PPC_FUNC_IMPL(__imp__sub_83BCD884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD888"))) PPC_WEAK_FUNC(sub_83BCD888);
PPC_FUNC_IMPL(__imp__sub_83BCD888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12376
	ctx.r3.s64 = ctx.r11.s64 + 12376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD894"))) PPC_WEAK_FUNC(sub_83BCD894);
PPC_FUNC_IMPL(__imp__sub_83BCD894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD898"))) PPC_WEAK_FUNC(sub_83BCD898);
PPC_FUNC_IMPL(__imp__sub_83BCD898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12384
	ctx.r3.s64 = ctx.r11.s64 + 12384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD8A4"))) PPC_WEAK_FUNC(sub_83BCD8A4);
PPC_FUNC_IMPL(__imp__sub_83BCD8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD8A8"))) PPC_WEAK_FUNC(sub_83BCD8A8);
PPC_FUNC_IMPL(__imp__sub_83BCD8A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12392
	ctx.r3.s64 = ctx.r11.s64 + 12392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD8B4"))) PPC_WEAK_FUNC(sub_83BCD8B4);
PPC_FUNC_IMPL(__imp__sub_83BCD8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD8B8"))) PPC_WEAK_FUNC(sub_83BCD8B8);
PPC_FUNC_IMPL(__imp__sub_83BCD8B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12400
	ctx.r3.s64 = ctx.r11.s64 + 12400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD8C4"))) PPC_WEAK_FUNC(sub_83BCD8C4);
PPC_FUNC_IMPL(__imp__sub_83BCD8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD8C8"))) PPC_WEAK_FUNC(sub_83BCD8C8);
PPC_FUNC_IMPL(__imp__sub_83BCD8C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12408
	ctx.r3.s64 = ctx.r11.s64 + 12408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD8D4"))) PPC_WEAK_FUNC(sub_83BCD8D4);
PPC_FUNC_IMPL(__imp__sub_83BCD8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD8D8"))) PPC_WEAK_FUNC(sub_83BCD8D8);
PPC_FUNC_IMPL(__imp__sub_83BCD8D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12416
	ctx.r3.s64 = ctx.r11.s64 + 12416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD8E4"))) PPC_WEAK_FUNC(sub_83BCD8E4);
PPC_FUNC_IMPL(__imp__sub_83BCD8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD8E8"))) PPC_WEAK_FUNC(sub_83BCD8E8);
PPC_FUNC_IMPL(__imp__sub_83BCD8E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12424
	ctx.r3.s64 = ctx.r11.s64 + 12424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD8F4"))) PPC_WEAK_FUNC(sub_83BCD8F4);
PPC_FUNC_IMPL(__imp__sub_83BCD8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD8F8"))) PPC_WEAK_FUNC(sub_83BCD8F8);
PPC_FUNC_IMPL(__imp__sub_83BCD8F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12432
	ctx.r3.s64 = ctx.r11.s64 + 12432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD904"))) PPC_WEAK_FUNC(sub_83BCD904);
PPC_FUNC_IMPL(__imp__sub_83BCD904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD908"))) PPC_WEAK_FUNC(sub_83BCD908);
PPC_FUNC_IMPL(__imp__sub_83BCD908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12440
	ctx.r3.s64 = ctx.r11.s64 + 12440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD914"))) PPC_WEAK_FUNC(sub_83BCD914);
PPC_FUNC_IMPL(__imp__sub_83BCD914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD918"))) PPC_WEAK_FUNC(sub_83BCD918);
PPC_FUNC_IMPL(__imp__sub_83BCD918) {
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
	// addi r3,r11,6032
	ctx.r3.s64 = ctx.r11.s64 + 6032;
	// bl 0x83523120
	ctx.lr = 0x83BCD930;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,12448
	ctx.r3.s64 = ctx.r10.s64 + 12448;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCD93C;
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

__attribute__((alias("__imp__sub_83BCD94C"))) PPC_WEAK_FUNC(sub_83BCD94C);
PPC_FUNC_IMPL(__imp__sub_83BCD94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD950"))) PPC_WEAK_FUNC(sub_83BCD950);
PPC_FUNC_IMPL(__imp__sub_83BCD950) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,6048
	ctx.r7.s64 = ctx.r8.s64 + 6048;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,6048(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6048);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,6048(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6048, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCD978"))) PPC_WEAK_FUNC(sub_83BCD978);
PPC_FUNC_IMPL(__imp__sub_83BCD978) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,17056
	ctx.r6.s64 = ctx.r7.s64 + 17056;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,16984(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 16984);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,6048(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6048);
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
	// std r9,17056(r7)
	PPC_STORE_U64(ctx.r7.u32 + 17056, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCD9C0"))) PPC_WEAK_FUNC(sub_83BCD9C0);
PPC_FUNC_IMPL(__imp__sub_83BCD9C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12464
	ctx.r3.s64 = ctx.r11.s64 + 12464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCD9CC"))) PPC_WEAK_FUNC(sub_83BCD9CC);
PPC_FUNC_IMPL(__imp__sub_83BCD9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCD9D0"))) PPC_WEAK_FUNC(sub_83BCD9D0);
PPC_FUNC_IMPL(__imp__sub_83BCD9D0) {
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
	// addi r3,r11,6056
	ctx.r3.s64 = ctx.r11.s64 + 6056;
	// bl 0x8259af80
	ctx.lr = 0x83BCD9E8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,12480
	ctx.r3.s64 = ctx.r10.s64 + 12480;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCD9F4;
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

__attribute__((alias("__imp__sub_83BCDA04"))) PPC_WEAK_FUNC(sub_83BCDA04);
PPC_FUNC_IMPL(__imp__sub_83BCDA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCDA08"))) PPC_WEAK_FUNC(sub_83BCDA08);
PPC_FUNC_IMPL(__imp__sub_83BCDA08) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,6036
	ctx.r11.s64 = ctx.r8.s64 + 6036;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,17032(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17032);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,12472
	ctx.r3.s64 = ctx.r6.s64 + 12472;
	// stw r10,6036(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6036, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCDA38"))) PPC_WEAK_FUNC(sub_83BCDA38);
PPC_FUNC_IMPL(__imp__sub_83BCDA38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12488
	ctx.r3.s64 = ctx.r11.s64 + 12488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCDA44"))) PPC_WEAK_FUNC(sub_83BCDA44);
PPC_FUNC_IMPL(__imp__sub_83BCDA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCDA48"))) PPC_WEAK_FUNC(sub_83BCDA48);
PPC_FUNC_IMPL(__imp__sub_83BCDA48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12496
	ctx.r3.s64 = ctx.r11.s64 + 12496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCDA54"))) PPC_WEAK_FUNC(sub_83BCDA54);
PPC_FUNC_IMPL(__imp__sub_83BCDA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCDA58"))) PPC_WEAK_FUNC(sub_83BCDA58);
PPC_FUNC_IMPL(__imp__sub_83BCDA58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12504
	ctx.r3.s64 = ctx.r11.s64 + 12504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCDA64"))) PPC_WEAK_FUNC(sub_83BCDA64);
PPC_FUNC_IMPL(__imp__sub_83BCDA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCDA68"))) PPC_WEAK_FUNC(sub_83BCDA68);
PPC_FUNC_IMPL(__imp__sub_83BCDA68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12512
	ctx.r3.s64 = ctx.r11.s64 + 12512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCDA74"))) PPC_WEAK_FUNC(sub_83BCDA74);
PPC_FUNC_IMPL(__imp__sub_83BCDA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCDA78"))) PPC_WEAK_FUNC(sub_83BCDA78);
PPC_FUNC_IMPL(__imp__sub_83BCDA78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12520
	ctx.r3.s64 = ctx.r11.s64 + 12520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCDA84"))) PPC_WEAK_FUNC(sub_83BCDA84);
PPC_FUNC_IMPL(__imp__sub_83BCDA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCDA88"))) PPC_WEAK_FUNC(sub_83BCDA88);
PPC_FUNC_IMPL(__imp__sub_83BCDA88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12528
	ctx.r3.s64 = ctx.r11.s64 + 12528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCDA94"))) PPC_WEAK_FUNC(sub_83BCDA94);
PPC_FUNC_IMPL(__imp__sub_83BCDA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCDA98"))) PPC_WEAK_FUNC(sub_83BCDA98);
PPC_FUNC_IMPL(__imp__sub_83BCDA98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12536
	ctx.r3.s64 = ctx.r11.s64 + 12536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCDAA4"))) PPC_WEAK_FUNC(sub_83BCDAA4);
PPC_FUNC_IMPL(__imp__sub_83BCDAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCDAA8"))) PPC_WEAK_FUNC(sub_83BCDAA8);
PPC_FUNC_IMPL(__imp__sub_83BCDAA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12544
	ctx.r3.s64 = ctx.r11.s64 + 12544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCDAB4"))) PPC_WEAK_FUNC(sub_83BCDAB4);
PPC_FUNC_IMPL(__imp__sub_83BCDAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCDAB8"))) PPC_WEAK_FUNC(sub_83BCDAB8);
PPC_FUNC_IMPL(__imp__sub_83BCDAB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12552
	ctx.r3.s64 = ctx.r11.s64 + 12552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCDAC4"))) PPC_WEAK_FUNC(sub_83BCDAC4);
PPC_FUNC_IMPL(__imp__sub_83BCDAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCDAC8"))) PPC_WEAK_FUNC(sub_83BCDAC8);
PPC_FUNC_IMPL(__imp__sub_83BCDAC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12560
	ctx.r3.s64 = ctx.r11.s64 + 12560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCDAD4"))) PPC_WEAK_FUNC(sub_83BCDAD4);
PPC_FUNC_IMPL(__imp__sub_83BCDAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCDAD8"))) PPC_WEAK_FUNC(sub_83BCDAD8);
PPC_FUNC_IMPL(__imp__sub_83BCDAD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12568
	ctx.r3.s64 = ctx.r11.s64 + 12568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCDAE4"))) PPC_WEAK_FUNC(sub_83BCDAE4);
PPC_FUNC_IMPL(__imp__sub_83BCDAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCDAE8"))) PPC_WEAK_FUNC(sub_83BCDAE8);
PPC_FUNC_IMPL(__imp__sub_83BCDAE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12576
	ctx.r3.s64 = ctx.r11.s64 + 12576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCDAF4"))) PPC_WEAK_FUNC(sub_83BCDAF4);
PPC_FUNC_IMPL(__imp__sub_83BCDAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCDAF8"))) PPC_WEAK_FUNC(sub_83BCDAF8);
PPC_FUNC_IMPL(__imp__sub_83BCDAF8) {
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
	// addi r3,r11,6400
	ctx.r3.s64 = ctx.r11.s64 + 6400;
	// bl 0x83523120
	ctx.lr = 0x83BCDB10;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,12584
	ctx.r3.s64 = ctx.r10.s64 + 12584;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCDB1C;
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

__attribute__((alias("__imp__sub_83BCDB2C"))) PPC_WEAK_FUNC(sub_83BCDB2C);
PPC_FUNC_IMPL(__imp__sub_83BCDB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCDB30"))) PPC_WEAK_FUNC(sub_83BCDB30);
PPC_FUNC_IMPL(__imp__sub_83BCDB30) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,6416
	ctx.r7.s64 = ctx.r8.s64 + 6416;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,6416(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6416);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,6416(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6416, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCDB58"))) PPC_WEAK_FUNC(sub_83BCDB58);
PPC_FUNC_IMPL(__imp__sub_83BCDB58) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,17292
	ctx.r6.s64 = ctx.r7.s64 + 17292;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,17220(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 17220);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,6416(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6416);
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
	// std r9,17292(r7)
	PPC_STORE_U64(ctx.r7.u32 + 17292, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCDBA0"))) PPC_WEAK_FUNC(sub_83BCDBA0);
PPC_FUNC_IMPL(__imp__sub_83BCDBA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12600
	ctx.r3.s64 = ctx.r11.s64 + 12600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCDBAC"))) PPC_WEAK_FUNC(sub_83BCDBAC);
PPC_FUNC_IMPL(__imp__sub_83BCDBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCDBB0"))) PPC_WEAK_FUNC(sub_83BCDBB0);
PPC_FUNC_IMPL(__imp__sub_83BCDBB0) {
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
	// addi r3,r11,6424
	ctx.r3.s64 = ctx.r11.s64 + 6424;
	// bl 0x8259af80
	ctx.lr = 0x83BCDBC8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,12616
	ctx.r3.s64 = ctx.r10.s64 + 12616;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCDBD4;
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

__attribute__((alias("__imp__sub_83BCDBE4"))) PPC_WEAK_FUNC(sub_83BCDBE4);
PPC_FUNC_IMPL(__imp__sub_83BCDBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCDBE8"))) PPC_WEAK_FUNC(sub_83BCDBE8);
PPC_FUNC_IMPL(__imp__sub_83BCDBE8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,6404
	ctx.r11.s64 = ctx.r8.s64 + 6404;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,17268(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17268);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,12608
	ctx.r3.s64 = ctx.r6.s64 + 12608;
	// stw r10,6404(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6404, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCDC18"))) PPC_WEAK_FUNC(sub_83BCDC18);
PPC_FUNC_IMPL(__imp__sub_83BCDC18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12624
	ctx.r3.s64 = ctx.r11.s64 + 12624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCDC24"))) PPC_WEAK_FUNC(sub_83BCDC24);
PPC_FUNC_IMPL(__imp__sub_83BCDC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCDC28"))) PPC_WEAK_FUNC(sub_83BCDC28);
PPC_FUNC_IMPL(__imp__sub_83BCDC28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12632
	ctx.r3.s64 = ctx.r11.s64 + 12632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCDC34"))) PPC_WEAK_FUNC(sub_83BCDC34);
PPC_FUNC_IMPL(__imp__sub_83BCDC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCDC38"))) PPC_WEAK_FUNC(sub_83BCDC38);
PPC_FUNC_IMPL(__imp__sub_83BCDC38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12640
	ctx.r3.s64 = ctx.r11.s64 + 12640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCDC44"))) PPC_WEAK_FUNC(sub_83BCDC44);
PPC_FUNC_IMPL(__imp__sub_83BCDC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCDC48"))) PPC_WEAK_FUNC(sub_83BCDC48);
PPC_FUNC_IMPL(__imp__sub_83BCDC48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12648
	ctx.r3.s64 = ctx.r11.s64 + 12648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCDC54"))) PPC_WEAK_FUNC(sub_83BCDC54);
PPC_FUNC_IMPL(__imp__sub_83BCDC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCDC58"))) PPC_WEAK_FUNC(sub_83BCDC58);
PPC_FUNC_IMPL(__imp__sub_83BCDC58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12656
	ctx.r3.s64 = ctx.r11.s64 + 12656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCDC64"))) PPC_WEAK_FUNC(sub_83BCDC64);
PPC_FUNC_IMPL(__imp__sub_83BCDC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCDC68"))) PPC_WEAK_FUNC(sub_83BCDC68);
PPC_FUNC_IMPL(__imp__sub_83BCDC68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12664
	ctx.r3.s64 = ctx.r11.s64 + 12664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCDC74"))) PPC_WEAK_FUNC(sub_83BCDC74);
PPC_FUNC_IMPL(__imp__sub_83BCDC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCDC78"))) PPC_WEAK_FUNC(sub_83BCDC78);
PPC_FUNC_IMPL(__imp__sub_83BCDC78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12672
	ctx.r3.s64 = ctx.r11.s64 + 12672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCDC84"))) PPC_WEAK_FUNC(sub_83BCDC84);
PPC_FUNC_IMPL(__imp__sub_83BCDC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCDC88"))) PPC_WEAK_FUNC(sub_83BCDC88);
PPC_FUNC_IMPL(__imp__sub_83BCDC88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12680
	ctx.r3.s64 = ctx.r11.s64 + 12680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCDC94"))) PPC_WEAK_FUNC(sub_83BCDC94);
PPC_FUNC_IMPL(__imp__sub_83BCDC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCDC98"))) PPC_WEAK_FUNC(sub_83BCDC98);
PPC_FUNC_IMPL(__imp__sub_83BCDC98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12688
	ctx.r3.s64 = ctx.r11.s64 + 12688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCDCA4"))) PPC_WEAK_FUNC(sub_83BCDCA4);
PPC_FUNC_IMPL(__imp__sub_83BCDCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCDCA8"))) PPC_WEAK_FUNC(sub_83BCDCA8);
PPC_FUNC_IMPL(__imp__sub_83BCDCA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12696
	ctx.r3.s64 = ctx.r11.s64 + 12696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCDCB4"))) PPC_WEAK_FUNC(sub_83BCDCB4);
PPC_FUNC_IMPL(__imp__sub_83BCDCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCDCB8"))) PPC_WEAK_FUNC(sub_83BCDCB8);
PPC_FUNC_IMPL(__imp__sub_83BCDCB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12704
	ctx.r3.s64 = ctx.r11.s64 + 12704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCDCC4"))) PPC_WEAK_FUNC(sub_83BCDCC4);
PPC_FUNC_IMPL(__imp__sub_83BCDCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCDCC8"))) PPC_WEAK_FUNC(sub_83BCDCC8);
PPC_FUNC_IMPL(__imp__sub_83BCDCC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12712
	ctx.r3.s64 = ctx.r11.s64 + 12712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCDCD4"))) PPC_WEAK_FUNC(sub_83BCDCD4);
PPC_FUNC_IMPL(__imp__sub_83BCDCD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCDCD8"))) PPC_WEAK_FUNC(sub_83BCDCD8);
PPC_FUNC_IMPL(__imp__sub_83BCDCD8) {
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
	// addi r3,r11,6768
	ctx.r3.s64 = ctx.r11.s64 + 6768;
	// bl 0x83523120
	ctx.lr = 0x83BCDCF0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,12720
	ctx.r3.s64 = ctx.r10.s64 + 12720;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCDCFC;
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

__attribute__((alias("__imp__sub_83BCDD0C"))) PPC_WEAK_FUNC(sub_83BCDD0C);
PPC_FUNC_IMPL(__imp__sub_83BCDD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCDD10"))) PPC_WEAK_FUNC(sub_83BCDD10);
PPC_FUNC_IMPL(__imp__sub_83BCDD10) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,6784
	ctx.r7.s64 = ctx.r8.s64 + 6784;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,6784(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6784);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,6784(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6784, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCDD38"))) PPC_WEAK_FUNC(sub_83BCDD38);
PPC_FUNC_IMPL(__imp__sub_83BCDD38) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,17520
	ctx.r6.s64 = ctx.r7.s64 + 17520;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,17448(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 17448);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,6784(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6784);
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
	// std r9,17520(r7)
	PPC_STORE_U64(ctx.r7.u32 + 17520, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCDD80"))) PPC_WEAK_FUNC(sub_83BCDD80);
PPC_FUNC_IMPL(__imp__sub_83BCDD80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12736
	ctx.r3.s64 = ctx.r11.s64 + 12736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCDD8C"))) PPC_WEAK_FUNC(sub_83BCDD8C);
PPC_FUNC_IMPL(__imp__sub_83BCDD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCDD90"))) PPC_WEAK_FUNC(sub_83BCDD90);
PPC_FUNC_IMPL(__imp__sub_83BCDD90) {
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
	// addi r3,r11,6792
	ctx.r3.s64 = ctx.r11.s64 + 6792;
	// bl 0x8259af80
	ctx.lr = 0x83BCDDA8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,12752
	ctx.r3.s64 = ctx.r10.s64 + 12752;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCDDB4;
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

__attribute__((alias("__imp__sub_83BCDDC4"))) PPC_WEAK_FUNC(sub_83BCDDC4);
PPC_FUNC_IMPL(__imp__sub_83BCDDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCDDC8"))) PPC_WEAK_FUNC(sub_83BCDDC8);
PPC_FUNC_IMPL(__imp__sub_83BCDDC8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,6772
	ctx.r11.s64 = ctx.r8.s64 + 6772;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,17496(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17496);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,12744
	ctx.r3.s64 = ctx.r6.s64 + 12744;
	// stw r10,6772(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6772, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCDDF8"))) PPC_WEAK_FUNC(sub_83BCDDF8);
PPC_FUNC_IMPL(__imp__sub_83BCDDF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12760
	ctx.r3.s64 = ctx.r11.s64 + 12760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCDE04"))) PPC_WEAK_FUNC(sub_83BCDE04);
PPC_FUNC_IMPL(__imp__sub_83BCDE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCDE08"))) PPC_WEAK_FUNC(sub_83BCDE08);
PPC_FUNC_IMPL(__imp__sub_83BCDE08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12768
	ctx.r3.s64 = ctx.r11.s64 + 12768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCDE14"))) PPC_WEAK_FUNC(sub_83BCDE14);
PPC_FUNC_IMPL(__imp__sub_83BCDE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCDE18"))) PPC_WEAK_FUNC(sub_83BCDE18);
PPC_FUNC_IMPL(__imp__sub_83BCDE18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12776
	ctx.r3.s64 = ctx.r11.s64 + 12776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCDE24"))) PPC_WEAK_FUNC(sub_83BCDE24);
PPC_FUNC_IMPL(__imp__sub_83BCDE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCDE28"))) PPC_WEAK_FUNC(sub_83BCDE28);
PPC_FUNC_IMPL(__imp__sub_83BCDE28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12784
	ctx.r3.s64 = ctx.r11.s64 + 12784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCDE34"))) PPC_WEAK_FUNC(sub_83BCDE34);
PPC_FUNC_IMPL(__imp__sub_83BCDE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCDE38"))) PPC_WEAK_FUNC(sub_83BCDE38);
PPC_FUNC_IMPL(__imp__sub_83BCDE38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12792
	ctx.r3.s64 = ctx.r11.s64 + 12792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCDE44"))) PPC_WEAK_FUNC(sub_83BCDE44);
PPC_FUNC_IMPL(__imp__sub_83BCDE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCDE48"))) PPC_WEAK_FUNC(sub_83BCDE48);
PPC_FUNC_IMPL(__imp__sub_83BCDE48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12800
	ctx.r3.s64 = ctx.r11.s64 + 12800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCDE54"))) PPC_WEAK_FUNC(sub_83BCDE54);
PPC_FUNC_IMPL(__imp__sub_83BCDE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCDE58"))) PPC_WEAK_FUNC(sub_83BCDE58);
PPC_FUNC_IMPL(__imp__sub_83BCDE58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12808
	ctx.r3.s64 = ctx.r11.s64 + 12808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCDE64"))) PPC_WEAK_FUNC(sub_83BCDE64);
PPC_FUNC_IMPL(__imp__sub_83BCDE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCDE68"))) PPC_WEAK_FUNC(sub_83BCDE68);
PPC_FUNC_IMPL(__imp__sub_83BCDE68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12816
	ctx.r3.s64 = ctx.r11.s64 + 12816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCDE74"))) PPC_WEAK_FUNC(sub_83BCDE74);
PPC_FUNC_IMPL(__imp__sub_83BCDE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCDE78"))) PPC_WEAK_FUNC(sub_83BCDE78);
PPC_FUNC_IMPL(__imp__sub_83BCDE78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12824
	ctx.r3.s64 = ctx.r11.s64 + 12824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCDE84"))) PPC_WEAK_FUNC(sub_83BCDE84);
PPC_FUNC_IMPL(__imp__sub_83BCDE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCDE88"))) PPC_WEAK_FUNC(sub_83BCDE88);
PPC_FUNC_IMPL(__imp__sub_83BCDE88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12832
	ctx.r3.s64 = ctx.r11.s64 + 12832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCDE94"))) PPC_WEAK_FUNC(sub_83BCDE94);
PPC_FUNC_IMPL(__imp__sub_83BCDE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCDE98"))) PPC_WEAK_FUNC(sub_83BCDE98);
PPC_FUNC_IMPL(__imp__sub_83BCDE98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12840
	ctx.r3.s64 = ctx.r11.s64 + 12840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCDEA4"))) PPC_WEAK_FUNC(sub_83BCDEA4);
PPC_FUNC_IMPL(__imp__sub_83BCDEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCDEA8"))) PPC_WEAK_FUNC(sub_83BCDEA8);
PPC_FUNC_IMPL(__imp__sub_83BCDEA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12848
	ctx.r3.s64 = ctx.r11.s64 + 12848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCDEB4"))) PPC_WEAK_FUNC(sub_83BCDEB4);
PPC_FUNC_IMPL(__imp__sub_83BCDEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCDEB8"))) PPC_WEAK_FUNC(sub_83BCDEB8);
PPC_FUNC_IMPL(__imp__sub_83BCDEB8) {
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
	// addi r3,r11,7136
	ctx.r3.s64 = ctx.r11.s64 + 7136;
	// bl 0x83523120
	ctx.lr = 0x83BCDED0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,12856
	ctx.r3.s64 = ctx.r10.s64 + 12856;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCDEDC;
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

__attribute__((alias("__imp__sub_83BCDEEC"))) PPC_WEAK_FUNC(sub_83BCDEEC);
PPC_FUNC_IMPL(__imp__sub_83BCDEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCDEF0"))) PPC_WEAK_FUNC(sub_83BCDEF0);
PPC_FUNC_IMPL(__imp__sub_83BCDEF0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,7152
	ctx.r7.s64 = ctx.r8.s64 + 7152;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,7152(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 7152);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,7152(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7152, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCDF18"))) PPC_WEAK_FUNC(sub_83BCDF18);
PPC_FUNC_IMPL(__imp__sub_83BCDF18) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,17648
	ctx.r6.s64 = ctx.r7.s64 + 17648;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,17576(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 17576);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,7152(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7152);
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
	// std r9,17648(r7)
	PPC_STORE_U64(ctx.r7.u32 + 17648, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCDF60"))) PPC_WEAK_FUNC(sub_83BCDF60);
PPC_FUNC_IMPL(__imp__sub_83BCDF60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12872
	ctx.r3.s64 = ctx.r11.s64 + 12872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCDF6C"))) PPC_WEAK_FUNC(sub_83BCDF6C);
PPC_FUNC_IMPL(__imp__sub_83BCDF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCDF70"))) PPC_WEAK_FUNC(sub_83BCDF70);
PPC_FUNC_IMPL(__imp__sub_83BCDF70) {
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
	// addi r3,r11,7160
	ctx.r3.s64 = ctx.r11.s64 + 7160;
	// bl 0x8259af80
	ctx.lr = 0x83BCDF88;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,12888
	ctx.r3.s64 = ctx.r10.s64 + 12888;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCDF94;
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

__attribute__((alias("__imp__sub_83BCDFA4"))) PPC_WEAK_FUNC(sub_83BCDFA4);
PPC_FUNC_IMPL(__imp__sub_83BCDFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCDFA8"))) PPC_WEAK_FUNC(sub_83BCDFA8);
PPC_FUNC_IMPL(__imp__sub_83BCDFA8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,7140
	ctx.r11.s64 = ctx.r8.s64 + 7140;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,17624(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17624);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,12880
	ctx.r3.s64 = ctx.r6.s64 + 12880;
	// stw r10,7140(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7140, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCDFD8"))) PPC_WEAK_FUNC(sub_83BCDFD8);
PPC_FUNC_IMPL(__imp__sub_83BCDFD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12896
	ctx.r3.s64 = ctx.r11.s64 + 12896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCDFE4"))) PPC_WEAK_FUNC(sub_83BCDFE4);
PPC_FUNC_IMPL(__imp__sub_83BCDFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCDFE8"))) PPC_WEAK_FUNC(sub_83BCDFE8);
PPC_FUNC_IMPL(__imp__sub_83BCDFE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12904
	ctx.r3.s64 = ctx.r11.s64 + 12904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCDFF4"))) PPC_WEAK_FUNC(sub_83BCDFF4);
PPC_FUNC_IMPL(__imp__sub_83BCDFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCDFF8"))) PPC_WEAK_FUNC(sub_83BCDFF8);
PPC_FUNC_IMPL(__imp__sub_83BCDFF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12912
	ctx.r3.s64 = ctx.r11.s64 + 12912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCE004"))) PPC_WEAK_FUNC(sub_83BCE004);
PPC_FUNC_IMPL(__imp__sub_83BCE004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCE008"))) PPC_WEAK_FUNC(sub_83BCE008);
PPC_FUNC_IMPL(__imp__sub_83BCE008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12920
	ctx.r3.s64 = ctx.r11.s64 + 12920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCE014"))) PPC_WEAK_FUNC(sub_83BCE014);
PPC_FUNC_IMPL(__imp__sub_83BCE014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCE018"))) PPC_WEAK_FUNC(sub_83BCE018);
PPC_FUNC_IMPL(__imp__sub_83BCE018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12928
	ctx.r3.s64 = ctx.r11.s64 + 12928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCE024"))) PPC_WEAK_FUNC(sub_83BCE024);
PPC_FUNC_IMPL(__imp__sub_83BCE024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCE028"))) PPC_WEAK_FUNC(sub_83BCE028);
PPC_FUNC_IMPL(__imp__sub_83BCE028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12936
	ctx.r3.s64 = ctx.r11.s64 + 12936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCE034"))) PPC_WEAK_FUNC(sub_83BCE034);
PPC_FUNC_IMPL(__imp__sub_83BCE034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCE038"))) PPC_WEAK_FUNC(sub_83BCE038);
PPC_FUNC_IMPL(__imp__sub_83BCE038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12944
	ctx.r3.s64 = ctx.r11.s64 + 12944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCE044"))) PPC_WEAK_FUNC(sub_83BCE044);
PPC_FUNC_IMPL(__imp__sub_83BCE044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCE048"))) PPC_WEAK_FUNC(sub_83BCE048);
PPC_FUNC_IMPL(__imp__sub_83BCE048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12952
	ctx.r3.s64 = ctx.r11.s64 + 12952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCE054"))) PPC_WEAK_FUNC(sub_83BCE054);
PPC_FUNC_IMPL(__imp__sub_83BCE054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCE058"))) PPC_WEAK_FUNC(sub_83BCE058);
PPC_FUNC_IMPL(__imp__sub_83BCE058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12960
	ctx.r3.s64 = ctx.r11.s64 + 12960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCE064"))) PPC_WEAK_FUNC(sub_83BCE064);
PPC_FUNC_IMPL(__imp__sub_83BCE064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCE068"))) PPC_WEAK_FUNC(sub_83BCE068);
PPC_FUNC_IMPL(__imp__sub_83BCE068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12968
	ctx.r3.s64 = ctx.r11.s64 + 12968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCE074"))) PPC_WEAK_FUNC(sub_83BCE074);
PPC_FUNC_IMPL(__imp__sub_83BCE074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCE078"))) PPC_WEAK_FUNC(sub_83BCE078);
PPC_FUNC_IMPL(__imp__sub_83BCE078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12976
	ctx.r3.s64 = ctx.r11.s64 + 12976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCE084"))) PPC_WEAK_FUNC(sub_83BCE084);
PPC_FUNC_IMPL(__imp__sub_83BCE084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCE088"))) PPC_WEAK_FUNC(sub_83BCE088);
PPC_FUNC_IMPL(__imp__sub_83BCE088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,12984
	ctx.r3.s64 = ctx.r11.s64 + 12984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCE094"))) PPC_WEAK_FUNC(sub_83BCE094);
PPC_FUNC_IMPL(__imp__sub_83BCE094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCE098"))) PPC_WEAK_FUNC(sub_83BCE098);
PPC_FUNC_IMPL(__imp__sub_83BCE098) {
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
	// addi r3,r11,7504
	ctx.r3.s64 = ctx.r11.s64 + 7504;
	// bl 0x83523120
	ctx.lr = 0x83BCE0B0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,12992
	ctx.r3.s64 = ctx.r10.s64 + 12992;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCE0BC;
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

__attribute__((alias("__imp__sub_83BCE0CC"))) PPC_WEAK_FUNC(sub_83BCE0CC);
PPC_FUNC_IMPL(__imp__sub_83BCE0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCE0D0"))) PPC_WEAK_FUNC(sub_83BCE0D0);
PPC_FUNC_IMPL(__imp__sub_83BCE0D0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,7520
	ctx.r7.s64 = ctx.r8.s64 + 7520;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,7520(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 7520);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,7520(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7520, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCE0F8"))) PPC_WEAK_FUNC(sub_83BCE0F8);
PPC_FUNC_IMPL(__imp__sub_83BCE0F8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,17804
	ctx.r6.s64 = ctx.r7.s64 + 17804;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,17732(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 17732);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,7520(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7520);
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
	// std r9,17804(r7)
	PPC_STORE_U64(ctx.r7.u32 + 17804, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCE140"))) PPC_WEAK_FUNC(sub_83BCE140);
PPC_FUNC_IMPL(__imp__sub_83BCE140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,13008
	ctx.r3.s64 = ctx.r11.s64 + 13008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCE14C"))) PPC_WEAK_FUNC(sub_83BCE14C);
PPC_FUNC_IMPL(__imp__sub_83BCE14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCE150"))) PPC_WEAK_FUNC(sub_83BCE150);
PPC_FUNC_IMPL(__imp__sub_83BCE150) {
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
	// addi r3,r11,7528
	ctx.r3.s64 = ctx.r11.s64 + 7528;
	// bl 0x8259af80
	ctx.lr = 0x83BCE168;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,13024
	ctx.r3.s64 = ctx.r10.s64 + 13024;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCE174;
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

__attribute__((alias("__imp__sub_83BCE184"))) PPC_WEAK_FUNC(sub_83BCE184);
PPC_FUNC_IMPL(__imp__sub_83BCE184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCE188"))) PPC_WEAK_FUNC(sub_83BCE188);
PPC_FUNC_IMPL(__imp__sub_83BCE188) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,7508
	ctx.r11.s64 = ctx.r8.s64 + 7508;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,17780(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17780);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,13016
	ctx.r3.s64 = ctx.r6.s64 + 13016;
	// stw r10,7508(r8)
	PPC_STORE_U32(ctx.r8.u32 + 7508, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCE1B8"))) PPC_WEAK_FUNC(sub_83BCE1B8);
PPC_FUNC_IMPL(__imp__sub_83BCE1B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,13032
	ctx.r3.s64 = ctx.r11.s64 + 13032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCE1C4"))) PPC_WEAK_FUNC(sub_83BCE1C4);
PPC_FUNC_IMPL(__imp__sub_83BCE1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCE1C8"))) PPC_WEAK_FUNC(sub_83BCE1C8);
PPC_FUNC_IMPL(__imp__sub_83BCE1C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,13040
	ctx.r3.s64 = ctx.r11.s64 + 13040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCE1D4"))) PPC_WEAK_FUNC(sub_83BCE1D4);
PPC_FUNC_IMPL(__imp__sub_83BCE1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCE1D8"))) PPC_WEAK_FUNC(sub_83BCE1D8);
PPC_FUNC_IMPL(__imp__sub_83BCE1D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,13048
	ctx.r3.s64 = ctx.r11.s64 + 13048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCE1E4"))) PPC_WEAK_FUNC(sub_83BCE1E4);
PPC_FUNC_IMPL(__imp__sub_83BCE1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCE1E8"))) PPC_WEAK_FUNC(sub_83BCE1E8);
PPC_FUNC_IMPL(__imp__sub_83BCE1E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,13056
	ctx.r3.s64 = ctx.r11.s64 + 13056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCE1F4"))) PPC_WEAK_FUNC(sub_83BCE1F4);
PPC_FUNC_IMPL(__imp__sub_83BCE1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCE1F8"))) PPC_WEAK_FUNC(sub_83BCE1F8);
PPC_FUNC_IMPL(__imp__sub_83BCE1F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,13064
	ctx.r3.s64 = ctx.r11.s64 + 13064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCE204"))) PPC_WEAK_FUNC(sub_83BCE204);
PPC_FUNC_IMPL(__imp__sub_83BCE204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCE208"))) PPC_WEAK_FUNC(sub_83BCE208);
PPC_FUNC_IMPL(__imp__sub_83BCE208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,13072
	ctx.r3.s64 = ctx.r11.s64 + 13072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCE214"))) PPC_WEAK_FUNC(sub_83BCE214);
PPC_FUNC_IMPL(__imp__sub_83BCE214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCE218"))) PPC_WEAK_FUNC(sub_83BCE218);
PPC_FUNC_IMPL(__imp__sub_83BCE218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,13080
	ctx.r3.s64 = ctx.r11.s64 + 13080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCE224"))) PPC_WEAK_FUNC(sub_83BCE224);
PPC_FUNC_IMPL(__imp__sub_83BCE224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCE228"))) PPC_WEAK_FUNC(sub_83BCE228);
PPC_FUNC_IMPL(__imp__sub_83BCE228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,13088
	ctx.r3.s64 = ctx.r11.s64 + 13088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCE234"))) PPC_WEAK_FUNC(sub_83BCE234);
PPC_FUNC_IMPL(__imp__sub_83BCE234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCE238"))) PPC_WEAK_FUNC(sub_83BCE238);
PPC_FUNC_IMPL(__imp__sub_83BCE238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,13096
	ctx.r3.s64 = ctx.r11.s64 + 13096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCE244"))) PPC_WEAK_FUNC(sub_83BCE244);
PPC_FUNC_IMPL(__imp__sub_83BCE244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCE248"))) PPC_WEAK_FUNC(sub_83BCE248);
PPC_FUNC_IMPL(__imp__sub_83BCE248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,13104
	ctx.r3.s64 = ctx.r11.s64 + 13104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCE254"))) PPC_WEAK_FUNC(sub_83BCE254);
PPC_FUNC_IMPL(__imp__sub_83BCE254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCE258"))) PPC_WEAK_FUNC(sub_83BCE258);
PPC_FUNC_IMPL(__imp__sub_83BCE258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,13112
	ctx.r3.s64 = ctx.r11.s64 + 13112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCE264"))) PPC_WEAK_FUNC(sub_83BCE264);
PPC_FUNC_IMPL(__imp__sub_83BCE264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCE268"))) PPC_WEAK_FUNC(sub_83BCE268);
PPC_FUNC_IMPL(__imp__sub_83BCE268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,13120
	ctx.r3.s64 = ctx.r11.s64 + 13120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCE274"))) PPC_WEAK_FUNC(sub_83BCE274);
PPC_FUNC_IMPL(__imp__sub_83BCE274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCE278"))) PPC_WEAK_FUNC(sub_83BCE278);
PPC_FUNC_IMPL(__imp__sub_83BCE278) {
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
	// addi r3,r11,10360
	ctx.r3.s64 = ctx.r11.s64 + 10360;
	// bl 0x83523120
	ctx.lr = 0x83BCE290;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,13128
	ctx.r3.s64 = ctx.r10.s64 + 13128;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCE29C;
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

__attribute__((alias("__imp__sub_83BCE2AC"))) PPC_WEAK_FUNC(sub_83BCE2AC);
PPC_FUNC_IMPL(__imp__sub_83BCE2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCE2B0"))) PPC_WEAK_FUNC(sub_83BCE2B0);
PPC_FUNC_IMPL(__imp__sub_83BCE2B0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,10376
	ctx.r7.s64 = ctx.r8.s64 + 10376;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,10376(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10376);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,10376(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10376, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCE2D8"))) PPC_WEAK_FUNC(sub_83BCE2D8);
PPC_FUNC_IMPL(__imp__sub_83BCE2D8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,18128
	ctx.r6.s64 = ctx.r7.s64 + 18128;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,18056(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 18056);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,10376(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10376);
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
	// std r9,18128(r7)
	PPC_STORE_U64(ctx.r7.u32 + 18128, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCE320"))) PPC_WEAK_FUNC(sub_83BCE320);
PPC_FUNC_IMPL(__imp__sub_83BCE320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,13144
	ctx.r3.s64 = ctx.r11.s64 + 13144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCE32C"))) PPC_WEAK_FUNC(sub_83BCE32C);
PPC_FUNC_IMPL(__imp__sub_83BCE32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCE330"))) PPC_WEAK_FUNC(sub_83BCE330);
PPC_FUNC_IMPL(__imp__sub_83BCE330) {
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
	// addi r3,r11,10384
	ctx.r3.s64 = ctx.r11.s64 + 10384;
	// bl 0x8259af80
	ctx.lr = 0x83BCE348;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,13160
	ctx.r3.s64 = ctx.r10.s64 + 13160;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCE354;
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

__attribute__((alias("__imp__sub_83BCE364"))) PPC_WEAK_FUNC(sub_83BCE364);
PPC_FUNC_IMPL(__imp__sub_83BCE364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCE368"))) PPC_WEAK_FUNC(sub_83BCE368);
PPC_FUNC_IMPL(__imp__sub_83BCE368) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,10364
	ctx.r11.s64 = ctx.r8.s64 + 10364;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,18104(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18104);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,13152
	ctx.r3.s64 = ctx.r6.s64 + 13152;
	// stw r10,10364(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10364, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCE398"))) PPC_WEAK_FUNC(sub_83BCE398);
PPC_FUNC_IMPL(__imp__sub_83BCE398) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// addi r4,r11,-8638
	ctx.r4.s64 = ctx.r11.s64 + -8638;
	// addi r3,r10,18152
	ctx.r3.s64 = ctx.r10.s64 + 18152;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8259cc28
	ctx.lr = 0x83BCE3BC;
	sub_8259CC28(ctx, base);
	// lis r9,-31791
	ctx.r9.s64 = -2083454976;
	// addi r3,r9,13168
	ctx.r3.s64 = ctx.r9.s64 + 13168;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCE3C8;
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

__attribute__((alias("__imp__sub_83BCE3D8"))) PPC_WEAK_FUNC(sub_83BCE3D8);
PPC_FUNC_IMPL(__imp__sub_83BCE3D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,13480
	ctx.r3.s64 = ctx.r11.s64 + 13480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCE3E4"))) PPC_WEAK_FUNC(sub_83BCE3E4);
PPC_FUNC_IMPL(__imp__sub_83BCE3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCE3E8"))) PPC_WEAK_FUNC(sub_83BCE3E8);
PPC_FUNC_IMPL(__imp__sub_83BCE3E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,13488
	ctx.r3.s64 = ctx.r11.s64 + 13488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCE3F4"))) PPC_WEAK_FUNC(sub_83BCE3F4);
PPC_FUNC_IMPL(__imp__sub_83BCE3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCE3F8"))) PPC_WEAK_FUNC(sub_83BCE3F8);
PPC_FUNC_IMPL(__imp__sub_83BCE3F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,13496
	ctx.r3.s64 = ctx.r11.s64 + 13496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCE404"))) PPC_WEAK_FUNC(sub_83BCE404);
PPC_FUNC_IMPL(__imp__sub_83BCE404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCE408"))) PPC_WEAK_FUNC(sub_83BCE408);
PPC_FUNC_IMPL(__imp__sub_83BCE408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,13504
	ctx.r3.s64 = ctx.r11.s64 + 13504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCE414"))) PPC_WEAK_FUNC(sub_83BCE414);
PPC_FUNC_IMPL(__imp__sub_83BCE414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCE418"))) PPC_WEAK_FUNC(sub_83BCE418);
PPC_FUNC_IMPL(__imp__sub_83BCE418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,13512
	ctx.r3.s64 = ctx.r11.s64 + 13512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCE424"))) PPC_WEAK_FUNC(sub_83BCE424);
PPC_FUNC_IMPL(__imp__sub_83BCE424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCE428"))) PPC_WEAK_FUNC(sub_83BCE428);
PPC_FUNC_IMPL(__imp__sub_83BCE428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,13520
	ctx.r3.s64 = ctx.r11.s64 + 13520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCE434"))) PPC_WEAK_FUNC(sub_83BCE434);
PPC_FUNC_IMPL(__imp__sub_83BCE434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCE438"))) PPC_WEAK_FUNC(sub_83BCE438);
PPC_FUNC_IMPL(__imp__sub_83BCE438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,13528
	ctx.r3.s64 = ctx.r11.s64 + 13528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCE444"))) PPC_WEAK_FUNC(sub_83BCE444);
PPC_FUNC_IMPL(__imp__sub_83BCE444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCE448"))) PPC_WEAK_FUNC(sub_83BCE448);
PPC_FUNC_IMPL(__imp__sub_83BCE448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,13536
	ctx.r3.s64 = ctx.r11.s64 + 13536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCE454"))) PPC_WEAK_FUNC(sub_83BCE454);
PPC_FUNC_IMPL(__imp__sub_83BCE454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCE458"))) PPC_WEAK_FUNC(sub_83BCE458);
PPC_FUNC_IMPL(__imp__sub_83BCE458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,13544
	ctx.r3.s64 = ctx.r11.s64 + 13544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCE464"))) PPC_WEAK_FUNC(sub_83BCE464);
PPC_FUNC_IMPL(__imp__sub_83BCE464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCE468"))) PPC_WEAK_FUNC(sub_83BCE468);
PPC_FUNC_IMPL(__imp__sub_83BCE468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,13552
	ctx.r3.s64 = ctx.r11.s64 + 13552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCE474"))) PPC_WEAK_FUNC(sub_83BCE474);
PPC_FUNC_IMPL(__imp__sub_83BCE474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCE478"))) PPC_WEAK_FUNC(sub_83BCE478);
PPC_FUNC_IMPL(__imp__sub_83BCE478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,13560
	ctx.r3.s64 = ctx.r11.s64 + 13560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCE484"))) PPC_WEAK_FUNC(sub_83BCE484);
PPC_FUNC_IMPL(__imp__sub_83BCE484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCE488"))) PPC_WEAK_FUNC(sub_83BCE488);
PPC_FUNC_IMPL(__imp__sub_83BCE488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,13568
	ctx.r3.s64 = ctx.r11.s64 + 13568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCE494"))) PPC_WEAK_FUNC(sub_83BCE494);
PPC_FUNC_IMPL(__imp__sub_83BCE494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCE498"))) PPC_WEAK_FUNC(sub_83BCE498);
PPC_FUNC_IMPL(__imp__sub_83BCE498) {
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
	// addi r3,r11,10728
	ctx.r3.s64 = ctx.r11.s64 + 10728;
	// bl 0x83523120
	ctx.lr = 0x83BCE4B0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,13576
	ctx.r3.s64 = ctx.r10.s64 + 13576;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCE4BC;
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

__attribute__((alias("__imp__sub_83BCE4CC"))) PPC_WEAK_FUNC(sub_83BCE4CC);
PPC_FUNC_IMPL(__imp__sub_83BCE4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCE4D0"))) PPC_WEAK_FUNC(sub_83BCE4D0);
PPC_FUNC_IMPL(__imp__sub_83BCE4D0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,10744
	ctx.r7.s64 = ctx.r8.s64 + 10744;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,10744(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10744);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,10744(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10744, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCE4F8"))) PPC_WEAK_FUNC(sub_83BCE4F8);
PPC_FUNC_IMPL(__imp__sub_83BCE4F8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// addi r6,r7,18404
	ctx.r6.s64 = ctx.r7.s64 + 18404;
	// lis r3,-31761
	ctx.r3.s64 = -2081488896;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,18332(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 18332);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,10744(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10744);
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
	// std r9,18404(r7)
	PPC_STORE_U64(ctx.r7.u32 + 18404, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BCE540"))) PPC_WEAK_FUNC(sub_83BCE540);
PPC_FUNC_IMPL(__imp__sub_83BCE540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,13592
	ctx.r3.s64 = ctx.r11.s64 + 13592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCE54C"))) PPC_WEAK_FUNC(sub_83BCE54C);
PPC_FUNC_IMPL(__imp__sub_83BCE54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCE550"))) PPC_WEAK_FUNC(sub_83BCE550);
PPC_FUNC_IMPL(__imp__sub_83BCE550) {
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
	// addi r3,r11,10752
	ctx.r3.s64 = ctx.r11.s64 + 10752;
	// bl 0x8259af80
	ctx.lr = 0x83BCE568;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,13608
	ctx.r3.s64 = ctx.r10.s64 + 13608;
	// bl 0x831cdcc8
	ctx.lr = 0x83BCE574;
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

__attribute__((alias("__imp__sub_83BCE584"))) PPC_WEAK_FUNC(sub_83BCE584);
PPC_FUNC_IMPL(__imp__sub_83BCE584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCE588"))) PPC_WEAK_FUNC(sub_83BCE588);
PPC_FUNC_IMPL(__imp__sub_83BCE588) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r8,-31761
	ctx.r8.s64 = -2081488896;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,10732
	ctx.r11.s64 = ctx.r8.s64 + 10732;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,18380(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18380);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,13600
	ctx.r3.s64 = ctx.r6.s64 + 13600;
	// stw r10,10732(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10732, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCE5B8"))) PPC_WEAK_FUNC(sub_83BCE5B8);
PPC_FUNC_IMPL(__imp__sub_83BCE5B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,13616
	ctx.r3.s64 = ctx.r11.s64 + 13616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCE5C4"))) PPC_WEAK_FUNC(sub_83BCE5C4);
PPC_FUNC_IMPL(__imp__sub_83BCE5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCE5C8"))) PPC_WEAK_FUNC(sub_83BCE5C8);
PPC_FUNC_IMPL(__imp__sub_83BCE5C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,13624
	ctx.r3.s64 = ctx.r11.s64 + 13624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BCE5D4"))) PPC_WEAK_FUNC(sub_83BCE5D4);
PPC_FUNC_IMPL(__imp__sub_83BCE5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BCE5D8"))) PPC_WEAK_FUNC(sub_83BCE5D8);
PPC_FUNC_IMPL(__imp__sub_83BCE5D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,13632
	ctx.r3.s64 = ctx.r11.s64 + 13632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

