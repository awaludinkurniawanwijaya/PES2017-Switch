#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BA6A18"))) PPC_WEAK_FUNC(sub_83BA6A18);
PPC_FUNC_IMPL(__imp__sub_83BA6A18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30472
	ctx.r3.s64 = ctx.r11.s64 + 30472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6A24"))) PPC_WEAK_FUNC(sub_83BA6A24);
PPC_FUNC_IMPL(__imp__sub_83BA6A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6A28"))) PPC_WEAK_FUNC(sub_83BA6A28);
PPC_FUNC_IMPL(__imp__sub_83BA6A28) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,17128
	ctx.r3.s64 = ctx.r11.s64 + 17128;
	// bl 0x83523120
	ctx.lr = 0x83BA6A40;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,30480
	ctx.r3.s64 = ctx.r10.s64 + 30480;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA6A4C;
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

__attribute__((alias("__imp__sub_83BA6A5C"))) PPC_WEAK_FUNC(sub_83BA6A5C);
PPC_FUNC_IMPL(__imp__sub_83BA6A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6A60"))) PPC_WEAK_FUNC(sub_83BA6A60);
PPC_FUNC_IMPL(__imp__sub_83BA6A60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,17144
	ctx.r7.s64 = ctx.r8.s64 + 17144;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,17144(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17144);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,17144(r8)
	PPC_STORE_U32(ctx.r8.u32 + 17144, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA6A88"))) PPC_WEAK_FUNC(sub_83BA6A88);
PPC_FUNC_IMPL(__imp__sub_83BA6A88) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,27184
	ctx.r6.s64 = ctx.r7.s64 + 27184;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,27112(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 27112);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,17144(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 17144);
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
	// std r9,27184(r7)
	PPC_STORE_U64(ctx.r7.u32 + 27184, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA6AD0"))) PPC_WEAK_FUNC(sub_83BA6AD0);
PPC_FUNC_IMPL(__imp__sub_83BA6AD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30496
	ctx.r3.s64 = ctx.r11.s64 + 30496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6ADC"))) PPC_WEAK_FUNC(sub_83BA6ADC);
PPC_FUNC_IMPL(__imp__sub_83BA6ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6AE0"))) PPC_WEAK_FUNC(sub_83BA6AE0);
PPC_FUNC_IMPL(__imp__sub_83BA6AE0) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,17152
	ctx.r3.s64 = ctx.r11.s64 + 17152;
	// bl 0x8259af80
	ctx.lr = 0x83BA6AF8;
	sub_8259AF80(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,30512
	ctx.r3.s64 = ctx.r10.s64 + 30512;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA6B04;
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

__attribute__((alias("__imp__sub_83BA6B14"))) PPC_WEAK_FUNC(sub_83BA6B14);
PPC_FUNC_IMPL(__imp__sub_83BA6B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6B18"))) PPC_WEAK_FUNC(sub_83BA6B18);
PPC_FUNC_IMPL(__imp__sub_83BA6B18) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,17132
	ctx.r11.s64 = ctx.r8.s64 + 17132;
	// lis r6,-31792
	ctx.r6.s64 = -2083520512;
	// lwz r10,27160(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27160);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,30504
	ctx.r3.s64 = ctx.r6.s64 + 30504;
	// stw r10,17132(r8)
	PPC_STORE_U32(ctx.r8.u32 + 17132, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6B48"))) PPC_WEAK_FUNC(sub_83BA6B48);
PPC_FUNC_IMPL(__imp__sub_83BA6B48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30520
	ctx.r3.s64 = ctx.r11.s64 + 30520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6B54"))) PPC_WEAK_FUNC(sub_83BA6B54);
PPC_FUNC_IMPL(__imp__sub_83BA6B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6B58"))) PPC_WEAK_FUNC(sub_83BA6B58);
PPC_FUNC_IMPL(__imp__sub_83BA6B58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30528
	ctx.r3.s64 = ctx.r11.s64 + 30528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6B64"))) PPC_WEAK_FUNC(sub_83BA6B64);
PPC_FUNC_IMPL(__imp__sub_83BA6B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6B68"))) PPC_WEAK_FUNC(sub_83BA6B68);
PPC_FUNC_IMPL(__imp__sub_83BA6B68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30536
	ctx.r3.s64 = ctx.r11.s64 + 30536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6B74"))) PPC_WEAK_FUNC(sub_83BA6B74);
PPC_FUNC_IMPL(__imp__sub_83BA6B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6B78"))) PPC_WEAK_FUNC(sub_83BA6B78);
PPC_FUNC_IMPL(__imp__sub_83BA6B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30544
	ctx.r3.s64 = ctx.r11.s64 + 30544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6B84"))) PPC_WEAK_FUNC(sub_83BA6B84);
PPC_FUNC_IMPL(__imp__sub_83BA6B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6B88"))) PPC_WEAK_FUNC(sub_83BA6B88);
PPC_FUNC_IMPL(__imp__sub_83BA6B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30552
	ctx.r3.s64 = ctx.r11.s64 + 30552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6B94"))) PPC_WEAK_FUNC(sub_83BA6B94);
PPC_FUNC_IMPL(__imp__sub_83BA6B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6B98"))) PPC_WEAK_FUNC(sub_83BA6B98);
PPC_FUNC_IMPL(__imp__sub_83BA6B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30560
	ctx.r3.s64 = ctx.r11.s64 + 30560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6BA4"))) PPC_WEAK_FUNC(sub_83BA6BA4);
PPC_FUNC_IMPL(__imp__sub_83BA6BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6BA8"))) PPC_WEAK_FUNC(sub_83BA6BA8);
PPC_FUNC_IMPL(__imp__sub_83BA6BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30568
	ctx.r3.s64 = ctx.r11.s64 + 30568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6BB4"))) PPC_WEAK_FUNC(sub_83BA6BB4);
PPC_FUNC_IMPL(__imp__sub_83BA6BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6BB8"))) PPC_WEAK_FUNC(sub_83BA6BB8);
PPC_FUNC_IMPL(__imp__sub_83BA6BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30576
	ctx.r3.s64 = ctx.r11.s64 + 30576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6BC4"))) PPC_WEAK_FUNC(sub_83BA6BC4);
PPC_FUNC_IMPL(__imp__sub_83BA6BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6BC8"))) PPC_WEAK_FUNC(sub_83BA6BC8);
PPC_FUNC_IMPL(__imp__sub_83BA6BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30584
	ctx.r3.s64 = ctx.r11.s64 + 30584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6BD4"))) PPC_WEAK_FUNC(sub_83BA6BD4);
PPC_FUNC_IMPL(__imp__sub_83BA6BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6BD8"))) PPC_WEAK_FUNC(sub_83BA6BD8);
PPC_FUNC_IMPL(__imp__sub_83BA6BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30592
	ctx.r3.s64 = ctx.r11.s64 + 30592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6BE4"))) PPC_WEAK_FUNC(sub_83BA6BE4);
PPC_FUNC_IMPL(__imp__sub_83BA6BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6BE8"))) PPC_WEAK_FUNC(sub_83BA6BE8);
PPC_FUNC_IMPL(__imp__sub_83BA6BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30600
	ctx.r3.s64 = ctx.r11.s64 + 30600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6BF4"))) PPC_WEAK_FUNC(sub_83BA6BF4);
PPC_FUNC_IMPL(__imp__sub_83BA6BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6BF8"))) PPC_WEAK_FUNC(sub_83BA6BF8);
PPC_FUNC_IMPL(__imp__sub_83BA6BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30608
	ctx.r3.s64 = ctx.r11.s64 + 30608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6C04"))) PPC_WEAK_FUNC(sub_83BA6C04);
PPC_FUNC_IMPL(__imp__sub_83BA6C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6C08"))) PPC_WEAK_FUNC(sub_83BA6C08);
PPC_FUNC_IMPL(__imp__sub_83BA6C08) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,17496
	ctx.r3.s64 = ctx.r11.s64 + 17496;
	// bl 0x83523120
	ctx.lr = 0x83BA6C20;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,30616
	ctx.r3.s64 = ctx.r10.s64 + 30616;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA6C2C;
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

__attribute__((alias("__imp__sub_83BA6C3C"))) PPC_WEAK_FUNC(sub_83BA6C3C);
PPC_FUNC_IMPL(__imp__sub_83BA6C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6C40"))) PPC_WEAK_FUNC(sub_83BA6C40);
PPC_FUNC_IMPL(__imp__sub_83BA6C40) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,17512
	ctx.r7.s64 = ctx.r8.s64 + 17512;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,17512(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17512);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,17512(r8)
	PPC_STORE_U32(ctx.r8.u32 + 17512, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA6C68"))) PPC_WEAK_FUNC(sub_83BA6C68);
PPC_FUNC_IMPL(__imp__sub_83BA6C68) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,27312
	ctx.r6.s64 = ctx.r7.s64 + 27312;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,27240(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 27240);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,17512(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 17512);
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
	// std r9,27312(r7)
	PPC_STORE_U64(ctx.r7.u32 + 27312, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA6CB0"))) PPC_WEAK_FUNC(sub_83BA6CB0);
PPC_FUNC_IMPL(__imp__sub_83BA6CB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30632
	ctx.r3.s64 = ctx.r11.s64 + 30632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6CBC"))) PPC_WEAK_FUNC(sub_83BA6CBC);
PPC_FUNC_IMPL(__imp__sub_83BA6CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6CC0"))) PPC_WEAK_FUNC(sub_83BA6CC0);
PPC_FUNC_IMPL(__imp__sub_83BA6CC0) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,17520
	ctx.r3.s64 = ctx.r11.s64 + 17520;
	// bl 0x8259af80
	ctx.lr = 0x83BA6CD8;
	sub_8259AF80(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,30648
	ctx.r3.s64 = ctx.r10.s64 + 30648;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA6CE4;
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

__attribute__((alias("__imp__sub_83BA6CF4"))) PPC_WEAK_FUNC(sub_83BA6CF4);
PPC_FUNC_IMPL(__imp__sub_83BA6CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6CF8"))) PPC_WEAK_FUNC(sub_83BA6CF8);
PPC_FUNC_IMPL(__imp__sub_83BA6CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,17500
	ctx.r11.s64 = ctx.r8.s64 + 17500;
	// lis r6,-31792
	ctx.r6.s64 = -2083520512;
	// lwz r10,27288(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27288);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,30640
	ctx.r3.s64 = ctx.r6.s64 + 30640;
	// stw r10,17500(r8)
	PPC_STORE_U32(ctx.r8.u32 + 17500, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6D28"))) PPC_WEAK_FUNC(sub_83BA6D28);
PPC_FUNC_IMPL(__imp__sub_83BA6D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30656
	ctx.r3.s64 = ctx.r11.s64 + 30656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6D34"))) PPC_WEAK_FUNC(sub_83BA6D34);
PPC_FUNC_IMPL(__imp__sub_83BA6D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6D38"))) PPC_WEAK_FUNC(sub_83BA6D38);
PPC_FUNC_IMPL(__imp__sub_83BA6D38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30664
	ctx.r3.s64 = ctx.r11.s64 + 30664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6D44"))) PPC_WEAK_FUNC(sub_83BA6D44);
PPC_FUNC_IMPL(__imp__sub_83BA6D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6D48"))) PPC_WEAK_FUNC(sub_83BA6D48);
PPC_FUNC_IMPL(__imp__sub_83BA6D48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30672
	ctx.r3.s64 = ctx.r11.s64 + 30672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6D54"))) PPC_WEAK_FUNC(sub_83BA6D54);
PPC_FUNC_IMPL(__imp__sub_83BA6D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6D58"))) PPC_WEAK_FUNC(sub_83BA6D58);
PPC_FUNC_IMPL(__imp__sub_83BA6D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30680
	ctx.r3.s64 = ctx.r11.s64 + 30680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6D64"))) PPC_WEAK_FUNC(sub_83BA6D64);
PPC_FUNC_IMPL(__imp__sub_83BA6D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6D68"))) PPC_WEAK_FUNC(sub_83BA6D68);
PPC_FUNC_IMPL(__imp__sub_83BA6D68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30688
	ctx.r3.s64 = ctx.r11.s64 + 30688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6D74"))) PPC_WEAK_FUNC(sub_83BA6D74);
PPC_FUNC_IMPL(__imp__sub_83BA6D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6D78"))) PPC_WEAK_FUNC(sub_83BA6D78);
PPC_FUNC_IMPL(__imp__sub_83BA6D78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30696
	ctx.r3.s64 = ctx.r11.s64 + 30696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6D84"))) PPC_WEAK_FUNC(sub_83BA6D84);
PPC_FUNC_IMPL(__imp__sub_83BA6D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6D88"))) PPC_WEAK_FUNC(sub_83BA6D88);
PPC_FUNC_IMPL(__imp__sub_83BA6D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30704
	ctx.r3.s64 = ctx.r11.s64 + 30704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6D94"))) PPC_WEAK_FUNC(sub_83BA6D94);
PPC_FUNC_IMPL(__imp__sub_83BA6D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6D98"))) PPC_WEAK_FUNC(sub_83BA6D98);
PPC_FUNC_IMPL(__imp__sub_83BA6D98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30712
	ctx.r3.s64 = ctx.r11.s64 + 30712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6DA4"))) PPC_WEAK_FUNC(sub_83BA6DA4);
PPC_FUNC_IMPL(__imp__sub_83BA6DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6DA8"))) PPC_WEAK_FUNC(sub_83BA6DA8);
PPC_FUNC_IMPL(__imp__sub_83BA6DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30720
	ctx.r3.s64 = ctx.r11.s64 + 30720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6DB4"))) PPC_WEAK_FUNC(sub_83BA6DB4);
PPC_FUNC_IMPL(__imp__sub_83BA6DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6DB8"))) PPC_WEAK_FUNC(sub_83BA6DB8);
PPC_FUNC_IMPL(__imp__sub_83BA6DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30728
	ctx.r3.s64 = ctx.r11.s64 + 30728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6DC4"))) PPC_WEAK_FUNC(sub_83BA6DC4);
PPC_FUNC_IMPL(__imp__sub_83BA6DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6DC8"))) PPC_WEAK_FUNC(sub_83BA6DC8);
PPC_FUNC_IMPL(__imp__sub_83BA6DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30736
	ctx.r3.s64 = ctx.r11.s64 + 30736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6DD4"))) PPC_WEAK_FUNC(sub_83BA6DD4);
PPC_FUNC_IMPL(__imp__sub_83BA6DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6DD8"))) PPC_WEAK_FUNC(sub_83BA6DD8);
PPC_FUNC_IMPL(__imp__sub_83BA6DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30744
	ctx.r3.s64 = ctx.r11.s64 + 30744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6DE4"))) PPC_WEAK_FUNC(sub_83BA6DE4);
PPC_FUNC_IMPL(__imp__sub_83BA6DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6DE8"))) PPC_WEAK_FUNC(sub_83BA6DE8);
PPC_FUNC_IMPL(__imp__sub_83BA6DE8) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,17864
	ctx.r3.s64 = ctx.r11.s64 + 17864;
	// bl 0x83523120
	ctx.lr = 0x83BA6E00;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,30752
	ctx.r3.s64 = ctx.r10.s64 + 30752;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA6E0C;
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

__attribute__((alias("__imp__sub_83BA6E1C"))) PPC_WEAK_FUNC(sub_83BA6E1C);
PPC_FUNC_IMPL(__imp__sub_83BA6E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6E20"))) PPC_WEAK_FUNC(sub_83BA6E20);
PPC_FUNC_IMPL(__imp__sub_83BA6E20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,17880
	ctx.r7.s64 = ctx.r8.s64 + 17880;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,17880(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17880);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,17880(r8)
	PPC_STORE_U32(ctx.r8.u32 + 17880, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA6E48"))) PPC_WEAK_FUNC(sub_83BA6E48);
PPC_FUNC_IMPL(__imp__sub_83BA6E48) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,27448
	ctx.r6.s64 = ctx.r7.s64 + 27448;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,27376(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 27376);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,17880(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 17880);
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
	// std r9,27448(r7)
	PPC_STORE_U64(ctx.r7.u32 + 27448, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA6E90"))) PPC_WEAK_FUNC(sub_83BA6E90);
PPC_FUNC_IMPL(__imp__sub_83BA6E90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30768
	ctx.r3.s64 = ctx.r11.s64 + 30768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6E9C"))) PPC_WEAK_FUNC(sub_83BA6E9C);
PPC_FUNC_IMPL(__imp__sub_83BA6E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6EA0"))) PPC_WEAK_FUNC(sub_83BA6EA0);
PPC_FUNC_IMPL(__imp__sub_83BA6EA0) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,17888
	ctx.r3.s64 = ctx.r11.s64 + 17888;
	// bl 0x8259af80
	ctx.lr = 0x83BA6EB8;
	sub_8259AF80(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,30784
	ctx.r3.s64 = ctx.r10.s64 + 30784;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA6EC4;
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

__attribute__((alias("__imp__sub_83BA6ED4"))) PPC_WEAK_FUNC(sub_83BA6ED4);
PPC_FUNC_IMPL(__imp__sub_83BA6ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6ED8"))) PPC_WEAK_FUNC(sub_83BA6ED8);
PPC_FUNC_IMPL(__imp__sub_83BA6ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,17868
	ctx.r11.s64 = ctx.r8.s64 + 17868;
	// lis r6,-31792
	ctx.r6.s64 = -2083520512;
	// lwz r10,27424(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27424);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,30776
	ctx.r3.s64 = ctx.r6.s64 + 30776;
	// stw r10,17868(r8)
	PPC_STORE_U32(ctx.r8.u32 + 17868, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6F08"))) PPC_WEAK_FUNC(sub_83BA6F08);
PPC_FUNC_IMPL(__imp__sub_83BA6F08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30792
	ctx.r3.s64 = ctx.r11.s64 + 30792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6F14"))) PPC_WEAK_FUNC(sub_83BA6F14);
PPC_FUNC_IMPL(__imp__sub_83BA6F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6F18"))) PPC_WEAK_FUNC(sub_83BA6F18);
PPC_FUNC_IMPL(__imp__sub_83BA6F18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30800
	ctx.r3.s64 = ctx.r11.s64 + 30800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6F24"))) PPC_WEAK_FUNC(sub_83BA6F24);
PPC_FUNC_IMPL(__imp__sub_83BA6F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6F28"))) PPC_WEAK_FUNC(sub_83BA6F28);
PPC_FUNC_IMPL(__imp__sub_83BA6F28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30808
	ctx.r3.s64 = ctx.r11.s64 + 30808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6F34"))) PPC_WEAK_FUNC(sub_83BA6F34);
PPC_FUNC_IMPL(__imp__sub_83BA6F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6F38"))) PPC_WEAK_FUNC(sub_83BA6F38);
PPC_FUNC_IMPL(__imp__sub_83BA6F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30816
	ctx.r3.s64 = ctx.r11.s64 + 30816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6F44"))) PPC_WEAK_FUNC(sub_83BA6F44);
PPC_FUNC_IMPL(__imp__sub_83BA6F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6F48"))) PPC_WEAK_FUNC(sub_83BA6F48);
PPC_FUNC_IMPL(__imp__sub_83BA6F48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30824
	ctx.r3.s64 = ctx.r11.s64 + 30824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6F54"))) PPC_WEAK_FUNC(sub_83BA6F54);
PPC_FUNC_IMPL(__imp__sub_83BA6F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6F58"))) PPC_WEAK_FUNC(sub_83BA6F58);
PPC_FUNC_IMPL(__imp__sub_83BA6F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30832
	ctx.r3.s64 = ctx.r11.s64 + 30832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6F64"))) PPC_WEAK_FUNC(sub_83BA6F64);
PPC_FUNC_IMPL(__imp__sub_83BA6F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6F68"))) PPC_WEAK_FUNC(sub_83BA6F68);
PPC_FUNC_IMPL(__imp__sub_83BA6F68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30840
	ctx.r3.s64 = ctx.r11.s64 + 30840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6F74"))) PPC_WEAK_FUNC(sub_83BA6F74);
PPC_FUNC_IMPL(__imp__sub_83BA6F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6F78"))) PPC_WEAK_FUNC(sub_83BA6F78);
PPC_FUNC_IMPL(__imp__sub_83BA6F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30848
	ctx.r3.s64 = ctx.r11.s64 + 30848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6F84"))) PPC_WEAK_FUNC(sub_83BA6F84);
PPC_FUNC_IMPL(__imp__sub_83BA6F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6F88"))) PPC_WEAK_FUNC(sub_83BA6F88);
PPC_FUNC_IMPL(__imp__sub_83BA6F88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30856
	ctx.r3.s64 = ctx.r11.s64 + 30856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6F94"))) PPC_WEAK_FUNC(sub_83BA6F94);
PPC_FUNC_IMPL(__imp__sub_83BA6F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6F98"))) PPC_WEAK_FUNC(sub_83BA6F98);
PPC_FUNC_IMPL(__imp__sub_83BA6F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30864
	ctx.r3.s64 = ctx.r11.s64 + 30864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6FA4"))) PPC_WEAK_FUNC(sub_83BA6FA4);
PPC_FUNC_IMPL(__imp__sub_83BA6FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6FA8"))) PPC_WEAK_FUNC(sub_83BA6FA8);
PPC_FUNC_IMPL(__imp__sub_83BA6FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30872
	ctx.r3.s64 = ctx.r11.s64 + 30872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6FB4"))) PPC_WEAK_FUNC(sub_83BA6FB4);
PPC_FUNC_IMPL(__imp__sub_83BA6FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6FB8"))) PPC_WEAK_FUNC(sub_83BA6FB8);
PPC_FUNC_IMPL(__imp__sub_83BA6FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30880
	ctx.r3.s64 = ctx.r11.s64 + 30880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA6FC4"))) PPC_WEAK_FUNC(sub_83BA6FC4);
PPC_FUNC_IMPL(__imp__sub_83BA6FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA6FC8"))) PPC_WEAK_FUNC(sub_83BA6FC8);
PPC_FUNC_IMPL(__imp__sub_83BA6FC8) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,18232
	ctx.r3.s64 = ctx.r11.s64 + 18232;
	// bl 0x83523120
	ctx.lr = 0x83BA6FE0;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,30888
	ctx.r3.s64 = ctx.r10.s64 + 30888;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA6FEC;
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

__attribute__((alias("__imp__sub_83BA6FFC"))) PPC_WEAK_FUNC(sub_83BA6FFC);
PPC_FUNC_IMPL(__imp__sub_83BA6FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7000"))) PPC_WEAK_FUNC(sub_83BA7000);
PPC_FUNC_IMPL(__imp__sub_83BA7000) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,18248
	ctx.r7.s64 = ctx.r8.s64 + 18248;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,18248(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18248);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,18248(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18248, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA7028"))) PPC_WEAK_FUNC(sub_83BA7028);
PPC_FUNC_IMPL(__imp__sub_83BA7028) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,27608
	ctx.r6.s64 = ctx.r7.s64 + 27608;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,27536(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 27536);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,18248(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18248);
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
	// std r9,27608(r7)
	PPC_STORE_U64(ctx.r7.u32 + 27608, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA7070"))) PPC_WEAK_FUNC(sub_83BA7070);
PPC_FUNC_IMPL(__imp__sub_83BA7070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30904
	ctx.r3.s64 = ctx.r11.s64 + 30904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA707C"))) PPC_WEAK_FUNC(sub_83BA707C);
PPC_FUNC_IMPL(__imp__sub_83BA707C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7080"))) PPC_WEAK_FUNC(sub_83BA7080);
PPC_FUNC_IMPL(__imp__sub_83BA7080) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,18256
	ctx.r3.s64 = ctx.r11.s64 + 18256;
	// bl 0x8259af80
	ctx.lr = 0x83BA7098;
	sub_8259AF80(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,30920
	ctx.r3.s64 = ctx.r10.s64 + 30920;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA70A4;
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

__attribute__((alias("__imp__sub_83BA70B4"))) PPC_WEAK_FUNC(sub_83BA70B4);
PPC_FUNC_IMPL(__imp__sub_83BA70B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA70B8"))) PPC_WEAK_FUNC(sub_83BA70B8);
PPC_FUNC_IMPL(__imp__sub_83BA70B8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,18236
	ctx.r11.s64 = ctx.r8.s64 + 18236;
	// lis r6,-31792
	ctx.r6.s64 = -2083520512;
	// lwz r10,27584(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27584);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,30912
	ctx.r3.s64 = ctx.r6.s64 + 30912;
	// stw r10,18236(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18236, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA70E8"))) PPC_WEAK_FUNC(sub_83BA70E8);
PPC_FUNC_IMPL(__imp__sub_83BA70E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30928
	ctx.r3.s64 = ctx.r11.s64 + 30928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA70F4"))) PPC_WEAK_FUNC(sub_83BA70F4);
PPC_FUNC_IMPL(__imp__sub_83BA70F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA70F8"))) PPC_WEAK_FUNC(sub_83BA70F8);
PPC_FUNC_IMPL(__imp__sub_83BA70F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30936
	ctx.r3.s64 = ctx.r11.s64 + 30936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7104"))) PPC_WEAK_FUNC(sub_83BA7104);
PPC_FUNC_IMPL(__imp__sub_83BA7104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7108"))) PPC_WEAK_FUNC(sub_83BA7108);
PPC_FUNC_IMPL(__imp__sub_83BA7108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30944
	ctx.r3.s64 = ctx.r11.s64 + 30944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7114"))) PPC_WEAK_FUNC(sub_83BA7114);
PPC_FUNC_IMPL(__imp__sub_83BA7114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7118"))) PPC_WEAK_FUNC(sub_83BA7118);
PPC_FUNC_IMPL(__imp__sub_83BA7118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30952
	ctx.r3.s64 = ctx.r11.s64 + 30952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7124"))) PPC_WEAK_FUNC(sub_83BA7124);
PPC_FUNC_IMPL(__imp__sub_83BA7124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7128"))) PPC_WEAK_FUNC(sub_83BA7128);
PPC_FUNC_IMPL(__imp__sub_83BA7128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30960
	ctx.r3.s64 = ctx.r11.s64 + 30960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7134"))) PPC_WEAK_FUNC(sub_83BA7134);
PPC_FUNC_IMPL(__imp__sub_83BA7134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7138"))) PPC_WEAK_FUNC(sub_83BA7138);
PPC_FUNC_IMPL(__imp__sub_83BA7138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30968
	ctx.r3.s64 = ctx.r11.s64 + 30968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7144"))) PPC_WEAK_FUNC(sub_83BA7144);
PPC_FUNC_IMPL(__imp__sub_83BA7144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7148"))) PPC_WEAK_FUNC(sub_83BA7148);
PPC_FUNC_IMPL(__imp__sub_83BA7148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30976
	ctx.r3.s64 = ctx.r11.s64 + 30976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7154"))) PPC_WEAK_FUNC(sub_83BA7154);
PPC_FUNC_IMPL(__imp__sub_83BA7154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7158"))) PPC_WEAK_FUNC(sub_83BA7158);
PPC_FUNC_IMPL(__imp__sub_83BA7158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30984
	ctx.r3.s64 = ctx.r11.s64 + 30984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7164"))) PPC_WEAK_FUNC(sub_83BA7164);
PPC_FUNC_IMPL(__imp__sub_83BA7164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7168"))) PPC_WEAK_FUNC(sub_83BA7168);
PPC_FUNC_IMPL(__imp__sub_83BA7168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,30992
	ctx.r3.s64 = ctx.r11.s64 + 30992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7174"))) PPC_WEAK_FUNC(sub_83BA7174);
PPC_FUNC_IMPL(__imp__sub_83BA7174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7178"))) PPC_WEAK_FUNC(sub_83BA7178);
PPC_FUNC_IMPL(__imp__sub_83BA7178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31000
	ctx.r3.s64 = ctx.r11.s64 + 31000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7184"))) PPC_WEAK_FUNC(sub_83BA7184);
PPC_FUNC_IMPL(__imp__sub_83BA7184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7188"))) PPC_WEAK_FUNC(sub_83BA7188);
PPC_FUNC_IMPL(__imp__sub_83BA7188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31008
	ctx.r3.s64 = ctx.r11.s64 + 31008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7194"))) PPC_WEAK_FUNC(sub_83BA7194);
PPC_FUNC_IMPL(__imp__sub_83BA7194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7198"))) PPC_WEAK_FUNC(sub_83BA7198);
PPC_FUNC_IMPL(__imp__sub_83BA7198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31016
	ctx.r3.s64 = ctx.r11.s64 + 31016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA71A4"))) PPC_WEAK_FUNC(sub_83BA71A4);
PPC_FUNC_IMPL(__imp__sub_83BA71A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA71A8"))) PPC_WEAK_FUNC(sub_83BA71A8);
PPC_FUNC_IMPL(__imp__sub_83BA71A8) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,18600
	ctx.r3.s64 = ctx.r11.s64 + 18600;
	// bl 0x83523120
	ctx.lr = 0x83BA71C0;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,31024
	ctx.r3.s64 = ctx.r10.s64 + 31024;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA71CC;
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

__attribute__((alias("__imp__sub_83BA71DC"))) PPC_WEAK_FUNC(sub_83BA71DC);
PPC_FUNC_IMPL(__imp__sub_83BA71DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA71E0"))) PPC_WEAK_FUNC(sub_83BA71E0);
PPC_FUNC_IMPL(__imp__sub_83BA71E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,18616
	ctx.r7.s64 = ctx.r8.s64 + 18616;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,18616(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18616);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,18616(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18616, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA7208"))) PPC_WEAK_FUNC(sub_83BA7208);
PPC_FUNC_IMPL(__imp__sub_83BA7208) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,27744
	ctx.r6.s64 = ctx.r7.s64 + 27744;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,27672(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 27672);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,18616(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18616);
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
	// std r9,27744(r7)
	PPC_STORE_U64(ctx.r7.u32 + 27744, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA7250"))) PPC_WEAK_FUNC(sub_83BA7250);
PPC_FUNC_IMPL(__imp__sub_83BA7250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31040
	ctx.r3.s64 = ctx.r11.s64 + 31040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA725C"))) PPC_WEAK_FUNC(sub_83BA725C);
PPC_FUNC_IMPL(__imp__sub_83BA725C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7260"))) PPC_WEAK_FUNC(sub_83BA7260);
PPC_FUNC_IMPL(__imp__sub_83BA7260) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,18624
	ctx.r3.s64 = ctx.r11.s64 + 18624;
	// bl 0x8259af80
	ctx.lr = 0x83BA7278;
	sub_8259AF80(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,31056
	ctx.r3.s64 = ctx.r10.s64 + 31056;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA7284;
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

__attribute__((alias("__imp__sub_83BA7294"))) PPC_WEAK_FUNC(sub_83BA7294);
PPC_FUNC_IMPL(__imp__sub_83BA7294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7298"))) PPC_WEAK_FUNC(sub_83BA7298);
PPC_FUNC_IMPL(__imp__sub_83BA7298) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,18604
	ctx.r11.s64 = ctx.r8.s64 + 18604;
	// lis r6,-31792
	ctx.r6.s64 = -2083520512;
	// lwz r10,27720(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27720);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,31048
	ctx.r3.s64 = ctx.r6.s64 + 31048;
	// stw r10,18604(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18604, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA72C8"))) PPC_WEAK_FUNC(sub_83BA72C8);
PPC_FUNC_IMPL(__imp__sub_83BA72C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31064
	ctx.r3.s64 = ctx.r11.s64 + 31064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA72D4"))) PPC_WEAK_FUNC(sub_83BA72D4);
PPC_FUNC_IMPL(__imp__sub_83BA72D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA72D8"))) PPC_WEAK_FUNC(sub_83BA72D8);
PPC_FUNC_IMPL(__imp__sub_83BA72D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31072
	ctx.r3.s64 = ctx.r11.s64 + 31072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA72E4"))) PPC_WEAK_FUNC(sub_83BA72E4);
PPC_FUNC_IMPL(__imp__sub_83BA72E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA72E8"))) PPC_WEAK_FUNC(sub_83BA72E8);
PPC_FUNC_IMPL(__imp__sub_83BA72E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31080
	ctx.r3.s64 = ctx.r11.s64 + 31080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA72F4"))) PPC_WEAK_FUNC(sub_83BA72F4);
PPC_FUNC_IMPL(__imp__sub_83BA72F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA72F8"))) PPC_WEAK_FUNC(sub_83BA72F8);
PPC_FUNC_IMPL(__imp__sub_83BA72F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31088
	ctx.r3.s64 = ctx.r11.s64 + 31088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7304"))) PPC_WEAK_FUNC(sub_83BA7304);
PPC_FUNC_IMPL(__imp__sub_83BA7304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7308"))) PPC_WEAK_FUNC(sub_83BA7308);
PPC_FUNC_IMPL(__imp__sub_83BA7308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31096
	ctx.r3.s64 = ctx.r11.s64 + 31096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7314"))) PPC_WEAK_FUNC(sub_83BA7314);
PPC_FUNC_IMPL(__imp__sub_83BA7314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7318"))) PPC_WEAK_FUNC(sub_83BA7318);
PPC_FUNC_IMPL(__imp__sub_83BA7318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31104
	ctx.r3.s64 = ctx.r11.s64 + 31104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7324"))) PPC_WEAK_FUNC(sub_83BA7324);
PPC_FUNC_IMPL(__imp__sub_83BA7324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7328"))) PPC_WEAK_FUNC(sub_83BA7328);
PPC_FUNC_IMPL(__imp__sub_83BA7328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31112
	ctx.r3.s64 = ctx.r11.s64 + 31112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7334"))) PPC_WEAK_FUNC(sub_83BA7334);
PPC_FUNC_IMPL(__imp__sub_83BA7334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7338"))) PPC_WEAK_FUNC(sub_83BA7338);
PPC_FUNC_IMPL(__imp__sub_83BA7338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31120
	ctx.r3.s64 = ctx.r11.s64 + 31120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7344"))) PPC_WEAK_FUNC(sub_83BA7344);
PPC_FUNC_IMPL(__imp__sub_83BA7344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7348"))) PPC_WEAK_FUNC(sub_83BA7348);
PPC_FUNC_IMPL(__imp__sub_83BA7348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31128
	ctx.r3.s64 = ctx.r11.s64 + 31128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7354"))) PPC_WEAK_FUNC(sub_83BA7354);
PPC_FUNC_IMPL(__imp__sub_83BA7354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7358"))) PPC_WEAK_FUNC(sub_83BA7358);
PPC_FUNC_IMPL(__imp__sub_83BA7358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31136
	ctx.r3.s64 = ctx.r11.s64 + 31136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7364"))) PPC_WEAK_FUNC(sub_83BA7364);
PPC_FUNC_IMPL(__imp__sub_83BA7364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7368"))) PPC_WEAK_FUNC(sub_83BA7368);
PPC_FUNC_IMPL(__imp__sub_83BA7368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31144
	ctx.r3.s64 = ctx.r11.s64 + 31144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7374"))) PPC_WEAK_FUNC(sub_83BA7374);
PPC_FUNC_IMPL(__imp__sub_83BA7374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7378"))) PPC_WEAK_FUNC(sub_83BA7378);
PPC_FUNC_IMPL(__imp__sub_83BA7378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31152
	ctx.r3.s64 = ctx.r11.s64 + 31152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7384"))) PPC_WEAK_FUNC(sub_83BA7384);
PPC_FUNC_IMPL(__imp__sub_83BA7384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7388"))) PPC_WEAK_FUNC(sub_83BA7388);
PPC_FUNC_IMPL(__imp__sub_83BA7388) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,18968
	ctx.r3.s64 = ctx.r11.s64 + 18968;
	// bl 0x83523120
	ctx.lr = 0x83BA73A0;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,31160
	ctx.r3.s64 = ctx.r10.s64 + 31160;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA73AC;
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

__attribute__((alias("__imp__sub_83BA73BC"))) PPC_WEAK_FUNC(sub_83BA73BC);
PPC_FUNC_IMPL(__imp__sub_83BA73BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA73C0"))) PPC_WEAK_FUNC(sub_83BA73C0);
PPC_FUNC_IMPL(__imp__sub_83BA73C0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,18984
	ctx.r7.s64 = ctx.r8.s64 + 18984;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,18984(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18984);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,18984(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18984, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA73E8"))) PPC_WEAK_FUNC(sub_83BA73E8);
PPC_FUNC_IMPL(__imp__sub_83BA73E8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,27896
	ctx.r6.s64 = ctx.r7.s64 + 27896;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,27824(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 27824);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,18984(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18984);
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
	// std r9,27896(r7)
	PPC_STORE_U64(ctx.r7.u32 + 27896, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA7430"))) PPC_WEAK_FUNC(sub_83BA7430);
PPC_FUNC_IMPL(__imp__sub_83BA7430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31176
	ctx.r3.s64 = ctx.r11.s64 + 31176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA743C"))) PPC_WEAK_FUNC(sub_83BA743C);
PPC_FUNC_IMPL(__imp__sub_83BA743C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7440"))) PPC_WEAK_FUNC(sub_83BA7440);
PPC_FUNC_IMPL(__imp__sub_83BA7440) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,18992
	ctx.r3.s64 = ctx.r11.s64 + 18992;
	// bl 0x8259af80
	ctx.lr = 0x83BA7458;
	sub_8259AF80(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,31192
	ctx.r3.s64 = ctx.r10.s64 + 31192;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA7464;
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

__attribute__((alias("__imp__sub_83BA7474"))) PPC_WEAK_FUNC(sub_83BA7474);
PPC_FUNC_IMPL(__imp__sub_83BA7474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7478"))) PPC_WEAK_FUNC(sub_83BA7478);
PPC_FUNC_IMPL(__imp__sub_83BA7478) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,18972
	ctx.r11.s64 = ctx.r8.s64 + 18972;
	// lis r6,-31792
	ctx.r6.s64 = -2083520512;
	// lwz r10,27872(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27872);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,31184
	ctx.r3.s64 = ctx.r6.s64 + 31184;
	// stw r10,18972(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18972, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA74A8"))) PPC_WEAK_FUNC(sub_83BA74A8);
PPC_FUNC_IMPL(__imp__sub_83BA74A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31200
	ctx.r3.s64 = ctx.r11.s64 + 31200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA74B4"))) PPC_WEAK_FUNC(sub_83BA74B4);
PPC_FUNC_IMPL(__imp__sub_83BA74B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA74B8"))) PPC_WEAK_FUNC(sub_83BA74B8);
PPC_FUNC_IMPL(__imp__sub_83BA74B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31208
	ctx.r3.s64 = ctx.r11.s64 + 31208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA74C4"))) PPC_WEAK_FUNC(sub_83BA74C4);
PPC_FUNC_IMPL(__imp__sub_83BA74C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA74C8"))) PPC_WEAK_FUNC(sub_83BA74C8);
PPC_FUNC_IMPL(__imp__sub_83BA74C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31216
	ctx.r3.s64 = ctx.r11.s64 + 31216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA74D4"))) PPC_WEAK_FUNC(sub_83BA74D4);
PPC_FUNC_IMPL(__imp__sub_83BA74D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA74D8"))) PPC_WEAK_FUNC(sub_83BA74D8);
PPC_FUNC_IMPL(__imp__sub_83BA74D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31224
	ctx.r3.s64 = ctx.r11.s64 + 31224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA74E4"))) PPC_WEAK_FUNC(sub_83BA74E4);
PPC_FUNC_IMPL(__imp__sub_83BA74E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA74E8"))) PPC_WEAK_FUNC(sub_83BA74E8);
PPC_FUNC_IMPL(__imp__sub_83BA74E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31232
	ctx.r3.s64 = ctx.r11.s64 + 31232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA74F4"))) PPC_WEAK_FUNC(sub_83BA74F4);
PPC_FUNC_IMPL(__imp__sub_83BA74F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA74F8"))) PPC_WEAK_FUNC(sub_83BA74F8);
PPC_FUNC_IMPL(__imp__sub_83BA74F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31240
	ctx.r3.s64 = ctx.r11.s64 + 31240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7504"))) PPC_WEAK_FUNC(sub_83BA7504);
PPC_FUNC_IMPL(__imp__sub_83BA7504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7508"))) PPC_WEAK_FUNC(sub_83BA7508);
PPC_FUNC_IMPL(__imp__sub_83BA7508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31248
	ctx.r3.s64 = ctx.r11.s64 + 31248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7514"))) PPC_WEAK_FUNC(sub_83BA7514);
PPC_FUNC_IMPL(__imp__sub_83BA7514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7518"))) PPC_WEAK_FUNC(sub_83BA7518);
PPC_FUNC_IMPL(__imp__sub_83BA7518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31256
	ctx.r3.s64 = ctx.r11.s64 + 31256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7524"))) PPC_WEAK_FUNC(sub_83BA7524);
PPC_FUNC_IMPL(__imp__sub_83BA7524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7528"))) PPC_WEAK_FUNC(sub_83BA7528);
PPC_FUNC_IMPL(__imp__sub_83BA7528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31264
	ctx.r3.s64 = ctx.r11.s64 + 31264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7534"))) PPC_WEAK_FUNC(sub_83BA7534);
PPC_FUNC_IMPL(__imp__sub_83BA7534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7538"))) PPC_WEAK_FUNC(sub_83BA7538);
PPC_FUNC_IMPL(__imp__sub_83BA7538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31272
	ctx.r3.s64 = ctx.r11.s64 + 31272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7544"))) PPC_WEAK_FUNC(sub_83BA7544);
PPC_FUNC_IMPL(__imp__sub_83BA7544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7548"))) PPC_WEAK_FUNC(sub_83BA7548);
PPC_FUNC_IMPL(__imp__sub_83BA7548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31280
	ctx.r3.s64 = ctx.r11.s64 + 31280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7554"))) PPC_WEAK_FUNC(sub_83BA7554);
PPC_FUNC_IMPL(__imp__sub_83BA7554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7558"))) PPC_WEAK_FUNC(sub_83BA7558);
PPC_FUNC_IMPL(__imp__sub_83BA7558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31288
	ctx.r3.s64 = ctx.r11.s64 + 31288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7564"))) PPC_WEAK_FUNC(sub_83BA7564);
PPC_FUNC_IMPL(__imp__sub_83BA7564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7568"))) PPC_WEAK_FUNC(sub_83BA7568);
PPC_FUNC_IMPL(__imp__sub_83BA7568) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,19336
	ctx.r3.s64 = ctx.r11.s64 + 19336;
	// bl 0x83523120
	ctx.lr = 0x83BA7580;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,31296
	ctx.r3.s64 = ctx.r10.s64 + 31296;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA758C;
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

__attribute__((alias("__imp__sub_83BA759C"))) PPC_WEAK_FUNC(sub_83BA759C);
PPC_FUNC_IMPL(__imp__sub_83BA759C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA75A0"))) PPC_WEAK_FUNC(sub_83BA75A0);
PPC_FUNC_IMPL(__imp__sub_83BA75A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,19352
	ctx.r7.s64 = ctx.r8.s64 + 19352;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,19352(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19352);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,19352(r8)
	PPC_STORE_U32(ctx.r8.u32 + 19352, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA75C8"))) PPC_WEAK_FUNC(sub_83BA75C8);
PPC_FUNC_IMPL(__imp__sub_83BA75C8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,28032
	ctx.r6.s64 = ctx.r7.s64 + 28032;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,27960(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 27960);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,19352(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19352);
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
	// std r9,28032(r7)
	PPC_STORE_U64(ctx.r7.u32 + 28032, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA7610"))) PPC_WEAK_FUNC(sub_83BA7610);
PPC_FUNC_IMPL(__imp__sub_83BA7610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31312
	ctx.r3.s64 = ctx.r11.s64 + 31312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA761C"))) PPC_WEAK_FUNC(sub_83BA761C);
PPC_FUNC_IMPL(__imp__sub_83BA761C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7620"))) PPC_WEAK_FUNC(sub_83BA7620);
PPC_FUNC_IMPL(__imp__sub_83BA7620) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,19360
	ctx.r3.s64 = ctx.r11.s64 + 19360;
	// bl 0x8259af80
	ctx.lr = 0x83BA7638;
	sub_8259AF80(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,31328
	ctx.r3.s64 = ctx.r10.s64 + 31328;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA7644;
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

__attribute__((alias("__imp__sub_83BA7654"))) PPC_WEAK_FUNC(sub_83BA7654);
PPC_FUNC_IMPL(__imp__sub_83BA7654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7658"))) PPC_WEAK_FUNC(sub_83BA7658);
PPC_FUNC_IMPL(__imp__sub_83BA7658) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,19340
	ctx.r11.s64 = ctx.r8.s64 + 19340;
	// lis r6,-31792
	ctx.r6.s64 = -2083520512;
	// lwz r10,28008(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28008);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,31320
	ctx.r3.s64 = ctx.r6.s64 + 31320;
	// stw r10,19340(r8)
	PPC_STORE_U32(ctx.r8.u32 + 19340, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7688"))) PPC_WEAK_FUNC(sub_83BA7688);
PPC_FUNC_IMPL(__imp__sub_83BA7688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31336
	ctx.r3.s64 = ctx.r11.s64 + 31336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7694"))) PPC_WEAK_FUNC(sub_83BA7694);
PPC_FUNC_IMPL(__imp__sub_83BA7694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7698"))) PPC_WEAK_FUNC(sub_83BA7698);
PPC_FUNC_IMPL(__imp__sub_83BA7698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31344
	ctx.r3.s64 = ctx.r11.s64 + 31344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA76A4"))) PPC_WEAK_FUNC(sub_83BA76A4);
PPC_FUNC_IMPL(__imp__sub_83BA76A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA76A8"))) PPC_WEAK_FUNC(sub_83BA76A8);
PPC_FUNC_IMPL(__imp__sub_83BA76A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31352
	ctx.r3.s64 = ctx.r11.s64 + 31352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA76B4"))) PPC_WEAK_FUNC(sub_83BA76B4);
PPC_FUNC_IMPL(__imp__sub_83BA76B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA76B8"))) PPC_WEAK_FUNC(sub_83BA76B8);
PPC_FUNC_IMPL(__imp__sub_83BA76B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31360
	ctx.r3.s64 = ctx.r11.s64 + 31360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA76C4"))) PPC_WEAK_FUNC(sub_83BA76C4);
PPC_FUNC_IMPL(__imp__sub_83BA76C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA76C8"))) PPC_WEAK_FUNC(sub_83BA76C8);
PPC_FUNC_IMPL(__imp__sub_83BA76C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31368
	ctx.r3.s64 = ctx.r11.s64 + 31368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA76D4"))) PPC_WEAK_FUNC(sub_83BA76D4);
PPC_FUNC_IMPL(__imp__sub_83BA76D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA76D8"))) PPC_WEAK_FUNC(sub_83BA76D8);
PPC_FUNC_IMPL(__imp__sub_83BA76D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31376
	ctx.r3.s64 = ctx.r11.s64 + 31376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA76E4"))) PPC_WEAK_FUNC(sub_83BA76E4);
PPC_FUNC_IMPL(__imp__sub_83BA76E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA76E8"))) PPC_WEAK_FUNC(sub_83BA76E8);
PPC_FUNC_IMPL(__imp__sub_83BA76E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31384
	ctx.r3.s64 = ctx.r11.s64 + 31384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA76F4"))) PPC_WEAK_FUNC(sub_83BA76F4);
PPC_FUNC_IMPL(__imp__sub_83BA76F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA76F8"))) PPC_WEAK_FUNC(sub_83BA76F8);
PPC_FUNC_IMPL(__imp__sub_83BA76F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31392
	ctx.r3.s64 = ctx.r11.s64 + 31392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7704"))) PPC_WEAK_FUNC(sub_83BA7704);
PPC_FUNC_IMPL(__imp__sub_83BA7704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7708"))) PPC_WEAK_FUNC(sub_83BA7708);
PPC_FUNC_IMPL(__imp__sub_83BA7708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31400
	ctx.r3.s64 = ctx.r11.s64 + 31400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7714"))) PPC_WEAK_FUNC(sub_83BA7714);
PPC_FUNC_IMPL(__imp__sub_83BA7714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7718"))) PPC_WEAK_FUNC(sub_83BA7718);
PPC_FUNC_IMPL(__imp__sub_83BA7718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31408
	ctx.r3.s64 = ctx.r11.s64 + 31408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7724"))) PPC_WEAK_FUNC(sub_83BA7724);
PPC_FUNC_IMPL(__imp__sub_83BA7724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7728"))) PPC_WEAK_FUNC(sub_83BA7728);
PPC_FUNC_IMPL(__imp__sub_83BA7728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31416
	ctx.r3.s64 = ctx.r11.s64 + 31416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7734"))) PPC_WEAK_FUNC(sub_83BA7734);
PPC_FUNC_IMPL(__imp__sub_83BA7734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7738"))) PPC_WEAK_FUNC(sub_83BA7738);
PPC_FUNC_IMPL(__imp__sub_83BA7738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31424
	ctx.r3.s64 = ctx.r11.s64 + 31424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7744"))) PPC_WEAK_FUNC(sub_83BA7744);
PPC_FUNC_IMPL(__imp__sub_83BA7744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7748"))) PPC_WEAK_FUNC(sub_83BA7748);
PPC_FUNC_IMPL(__imp__sub_83BA7748) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,19704
	ctx.r3.s64 = ctx.r11.s64 + 19704;
	// bl 0x83523120
	ctx.lr = 0x83BA7760;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,31432
	ctx.r3.s64 = ctx.r10.s64 + 31432;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA776C;
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

__attribute__((alias("__imp__sub_83BA777C"))) PPC_WEAK_FUNC(sub_83BA777C);
PPC_FUNC_IMPL(__imp__sub_83BA777C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7780"))) PPC_WEAK_FUNC(sub_83BA7780);
PPC_FUNC_IMPL(__imp__sub_83BA7780) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,19720
	ctx.r7.s64 = ctx.r8.s64 + 19720;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,19720(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19720);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,19720(r8)
	PPC_STORE_U32(ctx.r8.u32 + 19720, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA77A8"))) PPC_WEAK_FUNC(sub_83BA77A8);
PPC_FUNC_IMPL(__imp__sub_83BA77A8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,28168
	ctx.r6.s64 = ctx.r7.s64 + 28168;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,28096(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 28096);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,19720(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19720);
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
	// std r9,28168(r7)
	PPC_STORE_U64(ctx.r7.u32 + 28168, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA77F0"))) PPC_WEAK_FUNC(sub_83BA77F0);
PPC_FUNC_IMPL(__imp__sub_83BA77F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31448
	ctx.r3.s64 = ctx.r11.s64 + 31448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA77FC"))) PPC_WEAK_FUNC(sub_83BA77FC);
PPC_FUNC_IMPL(__imp__sub_83BA77FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7800"))) PPC_WEAK_FUNC(sub_83BA7800);
PPC_FUNC_IMPL(__imp__sub_83BA7800) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,19728
	ctx.r3.s64 = ctx.r11.s64 + 19728;
	// bl 0x8259af80
	ctx.lr = 0x83BA7818;
	sub_8259AF80(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,31464
	ctx.r3.s64 = ctx.r10.s64 + 31464;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA7824;
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

__attribute__((alias("__imp__sub_83BA7834"))) PPC_WEAK_FUNC(sub_83BA7834);
PPC_FUNC_IMPL(__imp__sub_83BA7834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7838"))) PPC_WEAK_FUNC(sub_83BA7838);
PPC_FUNC_IMPL(__imp__sub_83BA7838) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,19708
	ctx.r11.s64 = ctx.r8.s64 + 19708;
	// lis r6,-31792
	ctx.r6.s64 = -2083520512;
	// lwz r10,28144(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28144);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,31456
	ctx.r3.s64 = ctx.r6.s64 + 31456;
	// stw r10,19708(r8)
	PPC_STORE_U32(ctx.r8.u32 + 19708, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7868"))) PPC_WEAK_FUNC(sub_83BA7868);
PPC_FUNC_IMPL(__imp__sub_83BA7868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31472
	ctx.r3.s64 = ctx.r11.s64 + 31472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7874"))) PPC_WEAK_FUNC(sub_83BA7874);
PPC_FUNC_IMPL(__imp__sub_83BA7874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7878"))) PPC_WEAK_FUNC(sub_83BA7878);
PPC_FUNC_IMPL(__imp__sub_83BA7878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31480
	ctx.r3.s64 = ctx.r11.s64 + 31480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7884"))) PPC_WEAK_FUNC(sub_83BA7884);
PPC_FUNC_IMPL(__imp__sub_83BA7884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7888"))) PPC_WEAK_FUNC(sub_83BA7888);
PPC_FUNC_IMPL(__imp__sub_83BA7888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31488
	ctx.r3.s64 = ctx.r11.s64 + 31488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA7894"))) PPC_WEAK_FUNC(sub_83BA7894);
PPC_FUNC_IMPL(__imp__sub_83BA7894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA7898"))) PPC_WEAK_FUNC(sub_83BA7898);
PPC_FUNC_IMPL(__imp__sub_83BA7898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31496
	ctx.r3.s64 = ctx.r11.s64 + 31496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA78A4"))) PPC_WEAK_FUNC(sub_83BA78A4);
PPC_FUNC_IMPL(__imp__sub_83BA78A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA78A8"))) PPC_WEAK_FUNC(sub_83BA78A8);
PPC_FUNC_IMPL(__imp__sub_83BA78A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31504
	ctx.r3.s64 = ctx.r11.s64 + 31504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA78B4"))) PPC_WEAK_FUNC(sub_83BA78B4);
PPC_FUNC_IMPL(__imp__sub_83BA78B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA78B8"))) PPC_WEAK_FUNC(sub_83BA78B8);
PPC_FUNC_IMPL(__imp__sub_83BA78B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31512
	ctx.r3.s64 = ctx.r11.s64 + 31512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA78C4"))) PPC_WEAK_FUNC(sub_83BA78C4);
PPC_FUNC_IMPL(__imp__sub_83BA78C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA78C8"))) PPC_WEAK_FUNC(sub_83BA78C8);
PPC_FUNC_IMPL(__imp__sub_83BA78C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,31520
	ctx.r3.s64 = ctx.r11.s64 + 31520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA78D4"))) PPC_WEAK_FUNC(sub_83BA78D4);
PPC_FUNC_IMPL(__imp__sub_83BA78D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

