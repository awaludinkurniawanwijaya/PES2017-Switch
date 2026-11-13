#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BA3E84"))) PPC_WEAK_FUNC(sub_83BA3E84);
PPC_FUNC_IMPL(__imp__sub_83BA3E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3E88"))) PPC_WEAK_FUNC(sub_83BA3E88);
PPC_FUNC_IMPL(__imp__sub_83BA3E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27312
	ctx.r3.s64 = ctx.r11.s64 + 27312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3E94"))) PPC_WEAK_FUNC(sub_83BA3E94);
PPC_FUNC_IMPL(__imp__sub_83BA3E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3E98"))) PPC_WEAK_FUNC(sub_83BA3E98);
PPC_FUNC_IMPL(__imp__sub_83BA3E98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27320
	ctx.r3.s64 = ctx.r11.s64 + 27320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3EA4"))) PPC_WEAK_FUNC(sub_83BA3EA4);
PPC_FUNC_IMPL(__imp__sub_83BA3EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3EA8"))) PPC_WEAK_FUNC(sub_83BA3EA8);
PPC_FUNC_IMPL(__imp__sub_83BA3EA8) {
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
	// addi r3,r11,8592
	ctx.r3.s64 = ctx.r11.s64 + 8592;
	// bl 0x83523120
	ctx.lr = 0x83BA3EC0;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,27328
	ctx.r3.s64 = ctx.r10.s64 + 27328;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA3ECC;
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

__attribute__((alias("__imp__sub_83BA3EDC"))) PPC_WEAK_FUNC(sub_83BA3EDC);
PPC_FUNC_IMPL(__imp__sub_83BA3EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3EE0"))) PPC_WEAK_FUNC(sub_83BA3EE0);
PPC_FUNC_IMPL(__imp__sub_83BA3EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,8612
	ctx.r7.s64 = ctx.r8.s64 + 8612;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,8612(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8612);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,8612(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8612, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA3F08"))) PPC_WEAK_FUNC(sub_83BA3F08);
PPC_FUNC_IMPL(__imp__sub_83BA3F08) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,23704
	ctx.r6.s64 = ctx.r7.s64 + 23704;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,23632(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 23632);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,8612(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8612);
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
	// std r9,23704(r7)
	PPC_STORE_U64(ctx.r7.u32 + 23704, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA3F50"))) PPC_WEAK_FUNC(sub_83BA3F50);
PPC_FUNC_IMPL(__imp__sub_83BA3F50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27344
	ctx.r3.s64 = ctx.r11.s64 + 27344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3F5C"))) PPC_WEAK_FUNC(sub_83BA3F5C);
PPC_FUNC_IMPL(__imp__sub_83BA3F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3F60"))) PPC_WEAK_FUNC(sub_83BA3F60);
PPC_FUNC_IMPL(__imp__sub_83BA3F60) {
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
	// addi r3,r11,8624
	ctx.r3.s64 = ctx.r11.s64 + 8624;
	// bl 0x8259af80
	ctx.lr = 0x83BA3F78;
	sub_8259AF80(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,27360
	ctx.r3.s64 = ctx.r10.s64 + 27360;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA3F84;
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

__attribute__((alias("__imp__sub_83BA3F94"))) PPC_WEAK_FUNC(sub_83BA3F94);
PPC_FUNC_IMPL(__imp__sub_83BA3F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3F98"))) PPC_WEAK_FUNC(sub_83BA3F98);
PPC_FUNC_IMPL(__imp__sub_83BA3F98) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,8600
	ctx.r11.s64 = ctx.r8.s64 + 8600;
	// lis r6,-31792
	ctx.r6.s64 = -2083520512;
	// lwz r10,23680(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23680);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,27352
	ctx.r3.s64 = ctx.r6.s64 + 27352;
	// stw r10,8600(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8600, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3FC8"))) PPC_WEAK_FUNC(sub_83BA3FC8);
PPC_FUNC_IMPL(__imp__sub_83BA3FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// lwz r11,23564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23564);
	// stw r11,8596(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8596, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA3FDC"))) PPC_WEAK_FUNC(sub_83BA3FDC);
PPC_FUNC_IMPL(__imp__sub_83BA3FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3FE0"))) PPC_WEAK_FUNC(sub_83BA3FE0);
PPC_FUNC_IMPL(__imp__sub_83BA3FE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27368
	ctx.r3.s64 = ctx.r11.s64 + 27368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3FEC"))) PPC_WEAK_FUNC(sub_83BA3FEC);
PPC_FUNC_IMPL(__imp__sub_83BA3FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA3FF0"))) PPC_WEAK_FUNC(sub_83BA3FF0);
PPC_FUNC_IMPL(__imp__sub_83BA3FF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27376
	ctx.r3.s64 = ctx.r11.s64 + 27376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA3FFC"))) PPC_WEAK_FUNC(sub_83BA3FFC);
PPC_FUNC_IMPL(__imp__sub_83BA3FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4000"))) PPC_WEAK_FUNC(sub_83BA4000);
PPC_FUNC_IMPL(__imp__sub_83BA4000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27384
	ctx.r3.s64 = ctx.r11.s64 + 27384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA400C"))) PPC_WEAK_FUNC(sub_83BA400C);
PPC_FUNC_IMPL(__imp__sub_83BA400C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4010"))) PPC_WEAK_FUNC(sub_83BA4010);
PPC_FUNC_IMPL(__imp__sub_83BA4010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27392
	ctx.r3.s64 = ctx.r11.s64 + 27392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA401C"))) PPC_WEAK_FUNC(sub_83BA401C);
PPC_FUNC_IMPL(__imp__sub_83BA401C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4020"))) PPC_WEAK_FUNC(sub_83BA4020);
PPC_FUNC_IMPL(__imp__sub_83BA4020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27400
	ctx.r3.s64 = ctx.r11.s64 + 27400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA402C"))) PPC_WEAK_FUNC(sub_83BA402C);
PPC_FUNC_IMPL(__imp__sub_83BA402C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4030"))) PPC_WEAK_FUNC(sub_83BA4030);
PPC_FUNC_IMPL(__imp__sub_83BA4030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27408
	ctx.r3.s64 = ctx.r11.s64 + 27408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA403C"))) PPC_WEAK_FUNC(sub_83BA403C);
PPC_FUNC_IMPL(__imp__sub_83BA403C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4040"))) PPC_WEAK_FUNC(sub_83BA4040);
PPC_FUNC_IMPL(__imp__sub_83BA4040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27416
	ctx.r3.s64 = ctx.r11.s64 + 27416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA404C"))) PPC_WEAK_FUNC(sub_83BA404C);
PPC_FUNC_IMPL(__imp__sub_83BA404C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4050"))) PPC_WEAK_FUNC(sub_83BA4050);
PPC_FUNC_IMPL(__imp__sub_83BA4050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27424
	ctx.r3.s64 = ctx.r11.s64 + 27424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA405C"))) PPC_WEAK_FUNC(sub_83BA405C);
PPC_FUNC_IMPL(__imp__sub_83BA405C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4060"))) PPC_WEAK_FUNC(sub_83BA4060);
PPC_FUNC_IMPL(__imp__sub_83BA4060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27432
	ctx.r3.s64 = ctx.r11.s64 + 27432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA406C"))) PPC_WEAK_FUNC(sub_83BA406C);
PPC_FUNC_IMPL(__imp__sub_83BA406C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4070"))) PPC_WEAK_FUNC(sub_83BA4070);
PPC_FUNC_IMPL(__imp__sub_83BA4070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27440
	ctx.r3.s64 = ctx.r11.s64 + 27440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA407C"))) PPC_WEAK_FUNC(sub_83BA407C);
PPC_FUNC_IMPL(__imp__sub_83BA407C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4080"))) PPC_WEAK_FUNC(sub_83BA4080);
PPC_FUNC_IMPL(__imp__sub_83BA4080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27448
	ctx.r3.s64 = ctx.r11.s64 + 27448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA408C"))) PPC_WEAK_FUNC(sub_83BA408C);
PPC_FUNC_IMPL(__imp__sub_83BA408C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4090"))) PPC_WEAK_FUNC(sub_83BA4090);
PPC_FUNC_IMPL(__imp__sub_83BA4090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27456
	ctx.r3.s64 = ctx.r11.s64 + 27456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA409C"))) PPC_WEAK_FUNC(sub_83BA409C);
PPC_FUNC_IMPL(__imp__sub_83BA409C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA40A0"))) PPC_WEAK_FUNC(sub_83BA40A0);
PPC_FUNC_IMPL(__imp__sub_83BA40A0) {
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
	// addi r3,r11,8976
	ctx.r3.s64 = ctx.r11.s64 + 8976;
	// bl 0x83523120
	ctx.lr = 0x83BA40B8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,27464
	ctx.r3.s64 = ctx.r10.s64 + 27464;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA40C4;
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

__attribute__((alias("__imp__sub_83BA40D4"))) PPC_WEAK_FUNC(sub_83BA40D4);
PPC_FUNC_IMPL(__imp__sub_83BA40D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA40D8"))) PPC_WEAK_FUNC(sub_83BA40D8);
PPC_FUNC_IMPL(__imp__sub_83BA40D8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,9044
	ctx.r7.s64 = ctx.r8.s64 + 9044;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,9044(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 9044);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,9044(r8)
	PPC_STORE_U32(ctx.r8.u32 + 9044, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA4100"))) PPC_WEAK_FUNC(sub_83BA4100);
PPC_FUNC_IMPL(__imp__sub_83BA4100) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,23848
	ctx.r6.s64 = ctx.r7.s64 + 23848;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,23776(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 23776);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,9044(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 9044);
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
	// std r9,23848(r7)
	PPC_STORE_U64(ctx.r7.u32 + 23848, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA4148"))) PPC_WEAK_FUNC(sub_83BA4148);
PPC_FUNC_IMPL(__imp__sub_83BA4148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27480
	ctx.r3.s64 = ctx.r11.s64 + 27480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4154"))) PPC_WEAK_FUNC(sub_83BA4154);
PPC_FUNC_IMPL(__imp__sub_83BA4154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4158"))) PPC_WEAK_FUNC(sub_83BA4158);
PPC_FUNC_IMPL(__imp__sub_83BA4158) {
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
	// addi r3,r11,9056
	ctx.r3.s64 = ctx.r11.s64 + 9056;
	// bl 0x8259af80
	ctx.lr = 0x83BA4170;
	sub_8259AF80(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,27512
	ctx.r3.s64 = ctx.r10.s64 + 27512;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA417C;
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

__attribute__((alias("__imp__sub_83BA418C"))) PPC_WEAK_FUNC(sub_83BA418C);
PPC_FUNC_IMPL(__imp__sub_83BA418C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4190"))) PPC_WEAK_FUNC(sub_83BA4190);
PPC_FUNC_IMPL(__imp__sub_83BA4190) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,9032
	ctx.r11.s64 = ctx.r8.s64 + 9032;
	// lis r6,-31792
	ctx.r6.s64 = -2083520512;
	// lwz r10,23824(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23824);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,27488
	ctx.r3.s64 = ctx.r6.s64 + 27488;
	// stw r10,9032(r8)
	PPC_STORE_U32(ctx.r8.u32 + 9032, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA41C0"))) PPC_WEAK_FUNC(sub_83BA41C0);
PPC_FUNC_IMPL(__imp__sub_83BA41C0) {
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
	// addi r3,r11,8984
	ctx.r3.s64 = ctx.r11.s64 + 8984;
	// bl 0x8257fa88
	ctx.lr = 0x83BA41D8;
	sub_8257FA88(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,27496
	ctx.r3.s64 = ctx.r10.s64 + 27496;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA41E4;
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

__attribute__((alias("__imp__sub_83BA41F4"))) PPC_WEAK_FUNC(sub_83BA41F4);
PPC_FUNC_IMPL(__imp__sub_83BA41F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA41F8"))) PPC_WEAK_FUNC(sub_83BA41F8);
PPC_FUNC_IMPL(__imp__sub_83BA41F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27520
	ctx.r3.s64 = ctx.r11.s64 + 27520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4204"))) PPC_WEAK_FUNC(sub_83BA4204);
PPC_FUNC_IMPL(__imp__sub_83BA4204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4208"))) PPC_WEAK_FUNC(sub_83BA4208);
PPC_FUNC_IMPL(__imp__sub_83BA4208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27528
	ctx.r3.s64 = ctx.r11.s64 + 27528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4214"))) PPC_WEAK_FUNC(sub_83BA4214);
PPC_FUNC_IMPL(__imp__sub_83BA4214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4218"))) PPC_WEAK_FUNC(sub_83BA4218);
PPC_FUNC_IMPL(__imp__sub_83BA4218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27536
	ctx.r3.s64 = ctx.r11.s64 + 27536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4224"))) PPC_WEAK_FUNC(sub_83BA4224);
PPC_FUNC_IMPL(__imp__sub_83BA4224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4228"))) PPC_WEAK_FUNC(sub_83BA4228);
PPC_FUNC_IMPL(__imp__sub_83BA4228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27544
	ctx.r3.s64 = ctx.r11.s64 + 27544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4234"))) PPC_WEAK_FUNC(sub_83BA4234);
PPC_FUNC_IMPL(__imp__sub_83BA4234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4238"))) PPC_WEAK_FUNC(sub_83BA4238);
PPC_FUNC_IMPL(__imp__sub_83BA4238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27552
	ctx.r3.s64 = ctx.r11.s64 + 27552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4244"))) PPC_WEAK_FUNC(sub_83BA4244);
PPC_FUNC_IMPL(__imp__sub_83BA4244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4248"))) PPC_WEAK_FUNC(sub_83BA4248);
PPC_FUNC_IMPL(__imp__sub_83BA4248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27560
	ctx.r3.s64 = ctx.r11.s64 + 27560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4254"))) PPC_WEAK_FUNC(sub_83BA4254);
PPC_FUNC_IMPL(__imp__sub_83BA4254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4258"))) PPC_WEAK_FUNC(sub_83BA4258);
PPC_FUNC_IMPL(__imp__sub_83BA4258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27568
	ctx.r3.s64 = ctx.r11.s64 + 27568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4264"))) PPC_WEAK_FUNC(sub_83BA4264);
PPC_FUNC_IMPL(__imp__sub_83BA4264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4268"))) PPC_WEAK_FUNC(sub_83BA4268);
PPC_FUNC_IMPL(__imp__sub_83BA4268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27576
	ctx.r3.s64 = ctx.r11.s64 + 27576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4274"))) PPC_WEAK_FUNC(sub_83BA4274);
PPC_FUNC_IMPL(__imp__sub_83BA4274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4278"))) PPC_WEAK_FUNC(sub_83BA4278);
PPC_FUNC_IMPL(__imp__sub_83BA4278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27584
	ctx.r3.s64 = ctx.r11.s64 + 27584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4284"))) PPC_WEAK_FUNC(sub_83BA4284);
PPC_FUNC_IMPL(__imp__sub_83BA4284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4288"))) PPC_WEAK_FUNC(sub_83BA4288);
PPC_FUNC_IMPL(__imp__sub_83BA4288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27592
	ctx.r3.s64 = ctx.r11.s64 + 27592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4294"))) PPC_WEAK_FUNC(sub_83BA4294);
PPC_FUNC_IMPL(__imp__sub_83BA4294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4298"))) PPC_WEAK_FUNC(sub_83BA4298);
PPC_FUNC_IMPL(__imp__sub_83BA4298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27600
	ctx.r3.s64 = ctx.r11.s64 + 27600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA42A4"))) PPC_WEAK_FUNC(sub_83BA42A4);
PPC_FUNC_IMPL(__imp__sub_83BA42A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA42A8"))) PPC_WEAK_FUNC(sub_83BA42A8);
PPC_FUNC_IMPL(__imp__sub_83BA42A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27608
	ctx.r3.s64 = ctx.r11.s64 + 27608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA42B4"))) PPC_WEAK_FUNC(sub_83BA42B4);
PPC_FUNC_IMPL(__imp__sub_83BA42B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA42B8"))) PPC_WEAK_FUNC(sub_83BA42B8);
PPC_FUNC_IMPL(__imp__sub_83BA42B8) {
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
	// addi r3,r11,9400
	ctx.r3.s64 = ctx.r11.s64 + 9400;
	// bl 0x83523120
	ctx.lr = 0x83BA42D0;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,27616
	ctx.r3.s64 = ctx.r10.s64 + 27616;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA42DC;
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

__attribute__((alias("__imp__sub_83BA42EC"))) PPC_WEAK_FUNC(sub_83BA42EC);
PPC_FUNC_IMPL(__imp__sub_83BA42EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA42F0"))) PPC_WEAK_FUNC(sub_83BA42F0);
PPC_FUNC_IMPL(__imp__sub_83BA42F0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,9416
	ctx.r7.s64 = ctx.r8.s64 + 9416;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,9416(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 9416);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,9416(r8)
	PPC_STORE_U32(ctx.r8.u32 + 9416, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA4318"))) PPC_WEAK_FUNC(sub_83BA4318);
PPC_FUNC_IMPL(__imp__sub_83BA4318) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,24132
	ctx.r6.s64 = ctx.r7.s64 + 24132;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,24060(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 24060);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,9416(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 9416);
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
	// std r9,24132(r7)
	PPC_STORE_U64(ctx.r7.u32 + 24132, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA4360"))) PPC_WEAK_FUNC(sub_83BA4360);
PPC_FUNC_IMPL(__imp__sub_83BA4360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27632
	ctx.r3.s64 = ctx.r11.s64 + 27632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA436C"))) PPC_WEAK_FUNC(sub_83BA436C);
PPC_FUNC_IMPL(__imp__sub_83BA436C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4370"))) PPC_WEAK_FUNC(sub_83BA4370);
PPC_FUNC_IMPL(__imp__sub_83BA4370) {
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
	// addi r3,r11,9424
	ctx.r3.s64 = ctx.r11.s64 + 9424;
	// bl 0x8259af80
	ctx.lr = 0x83BA4388;
	sub_8259AF80(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,27648
	ctx.r3.s64 = ctx.r10.s64 + 27648;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA4394;
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

__attribute__((alias("__imp__sub_83BA43A4"))) PPC_WEAK_FUNC(sub_83BA43A4);
PPC_FUNC_IMPL(__imp__sub_83BA43A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA43A8"))) PPC_WEAK_FUNC(sub_83BA43A8);
PPC_FUNC_IMPL(__imp__sub_83BA43A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,9404
	ctx.r11.s64 = ctx.r8.s64 + 9404;
	// lis r6,-31792
	ctx.r6.s64 = -2083520512;
	// lwz r10,24108(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24108);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,27640
	ctx.r3.s64 = ctx.r6.s64 + 27640;
	// stw r10,9404(r8)
	PPC_STORE_U32(ctx.r8.u32 + 9404, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA43D8"))) PPC_WEAK_FUNC(sub_83BA43D8);
PPC_FUNC_IMPL(__imp__sub_83BA43D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27656
	ctx.r3.s64 = ctx.r11.s64 + 27656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA43E4"))) PPC_WEAK_FUNC(sub_83BA43E4);
PPC_FUNC_IMPL(__imp__sub_83BA43E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA43E8"))) PPC_WEAK_FUNC(sub_83BA43E8);
PPC_FUNC_IMPL(__imp__sub_83BA43E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27664
	ctx.r3.s64 = ctx.r11.s64 + 27664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA43F4"))) PPC_WEAK_FUNC(sub_83BA43F4);
PPC_FUNC_IMPL(__imp__sub_83BA43F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA43F8"))) PPC_WEAK_FUNC(sub_83BA43F8);
PPC_FUNC_IMPL(__imp__sub_83BA43F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27672
	ctx.r3.s64 = ctx.r11.s64 + 27672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4404"))) PPC_WEAK_FUNC(sub_83BA4404);
PPC_FUNC_IMPL(__imp__sub_83BA4404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4408"))) PPC_WEAK_FUNC(sub_83BA4408);
PPC_FUNC_IMPL(__imp__sub_83BA4408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27680
	ctx.r3.s64 = ctx.r11.s64 + 27680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4414"))) PPC_WEAK_FUNC(sub_83BA4414);
PPC_FUNC_IMPL(__imp__sub_83BA4414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4418"))) PPC_WEAK_FUNC(sub_83BA4418);
PPC_FUNC_IMPL(__imp__sub_83BA4418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27688
	ctx.r3.s64 = ctx.r11.s64 + 27688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4424"))) PPC_WEAK_FUNC(sub_83BA4424);
PPC_FUNC_IMPL(__imp__sub_83BA4424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4428"))) PPC_WEAK_FUNC(sub_83BA4428);
PPC_FUNC_IMPL(__imp__sub_83BA4428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27696
	ctx.r3.s64 = ctx.r11.s64 + 27696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4434"))) PPC_WEAK_FUNC(sub_83BA4434);
PPC_FUNC_IMPL(__imp__sub_83BA4434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4438"))) PPC_WEAK_FUNC(sub_83BA4438);
PPC_FUNC_IMPL(__imp__sub_83BA4438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27704
	ctx.r3.s64 = ctx.r11.s64 + 27704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4444"))) PPC_WEAK_FUNC(sub_83BA4444);
PPC_FUNC_IMPL(__imp__sub_83BA4444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4448"))) PPC_WEAK_FUNC(sub_83BA4448);
PPC_FUNC_IMPL(__imp__sub_83BA4448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27712
	ctx.r3.s64 = ctx.r11.s64 + 27712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4454"))) PPC_WEAK_FUNC(sub_83BA4454);
PPC_FUNC_IMPL(__imp__sub_83BA4454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4458"))) PPC_WEAK_FUNC(sub_83BA4458);
PPC_FUNC_IMPL(__imp__sub_83BA4458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27720
	ctx.r3.s64 = ctx.r11.s64 + 27720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4464"))) PPC_WEAK_FUNC(sub_83BA4464);
PPC_FUNC_IMPL(__imp__sub_83BA4464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4468"))) PPC_WEAK_FUNC(sub_83BA4468);
PPC_FUNC_IMPL(__imp__sub_83BA4468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27728
	ctx.r3.s64 = ctx.r11.s64 + 27728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4474"))) PPC_WEAK_FUNC(sub_83BA4474);
PPC_FUNC_IMPL(__imp__sub_83BA4474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4478"))) PPC_WEAK_FUNC(sub_83BA4478);
PPC_FUNC_IMPL(__imp__sub_83BA4478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27736
	ctx.r3.s64 = ctx.r11.s64 + 27736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4484"))) PPC_WEAK_FUNC(sub_83BA4484);
PPC_FUNC_IMPL(__imp__sub_83BA4484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4488"))) PPC_WEAK_FUNC(sub_83BA4488);
PPC_FUNC_IMPL(__imp__sub_83BA4488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27744
	ctx.r3.s64 = ctx.r11.s64 + 27744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4494"))) PPC_WEAK_FUNC(sub_83BA4494);
PPC_FUNC_IMPL(__imp__sub_83BA4494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4498"))) PPC_WEAK_FUNC(sub_83BA4498);
PPC_FUNC_IMPL(__imp__sub_83BA4498) {
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
	// addi r3,r11,9768
	ctx.r3.s64 = ctx.r11.s64 + 9768;
	// bl 0x83523120
	ctx.lr = 0x83BA44B0;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,27752
	ctx.r3.s64 = ctx.r10.s64 + 27752;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA44BC;
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

__attribute__((alias("__imp__sub_83BA44CC"))) PPC_WEAK_FUNC(sub_83BA44CC);
PPC_FUNC_IMPL(__imp__sub_83BA44CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA44D0"))) PPC_WEAK_FUNC(sub_83BA44D0);
PPC_FUNC_IMPL(__imp__sub_83BA44D0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,9784
	ctx.r7.s64 = ctx.r8.s64 + 9784;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,9784(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 9784);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,9784(r8)
	PPC_STORE_U32(ctx.r8.u32 + 9784, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA44F8"))) PPC_WEAK_FUNC(sub_83BA44F8);
PPC_FUNC_IMPL(__imp__sub_83BA44F8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,24260
	ctx.r6.s64 = ctx.r7.s64 + 24260;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,24188(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 24188);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,9784(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 9784);
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
	// std r9,24260(r7)
	PPC_STORE_U64(ctx.r7.u32 + 24260, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA4540"))) PPC_WEAK_FUNC(sub_83BA4540);
PPC_FUNC_IMPL(__imp__sub_83BA4540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27768
	ctx.r3.s64 = ctx.r11.s64 + 27768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA454C"))) PPC_WEAK_FUNC(sub_83BA454C);
PPC_FUNC_IMPL(__imp__sub_83BA454C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4550"))) PPC_WEAK_FUNC(sub_83BA4550);
PPC_FUNC_IMPL(__imp__sub_83BA4550) {
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
	// addi r3,r11,9792
	ctx.r3.s64 = ctx.r11.s64 + 9792;
	// bl 0x8259af80
	ctx.lr = 0x83BA4568;
	sub_8259AF80(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,27784
	ctx.r3.s64 = ctx.r10.s64 + 27784;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA4574;
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

__attribute__((alias("__imp__sub_83BA4584"))) PPC_WEAK_FUNC(sub_83BA4584);
PPC_FUNC_IMPL(__imp__sub_83BA4584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4588"))) PPC_WEAK_FUNC(sub_83BA4588);
PPC_FUNC_IMPL(__imp__sub_83BA4588) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,9772
	ctx.r11.s64 = ctx.r8.s64 + 9772;
	// lis r6,-31792
	ctx.r6.s64 = -2083520512;
	// lwz r10,24236(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24236);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,27776
	ctx.r3.s64 = ctx.r6.s64 + 27776;
	// stw r10,9772(r8)
	PPC_STORE_U32(ctx.r8.u32 + 9772, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA45B8"))) PPC_WEAK_FUNC(sub_83BA45B8);
PPC_FUNC_IMPL(__imp__sub_83BA45B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27792
	ctx.r3.s64 = ctx.r11.s64 + 27792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA45C4"))) PPC_WEAK_FUNC(sub_83BA45C4);
PPC_FUNC_IMPL(__imp__sub_83BA45C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA45C8"))) PPC_WEAK_FUNC(sub_83BA45C8);
PPC_FUNC_IMPL(__imp__sub_83BA45C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27800
	ctx.r3.s64 = ctx.r11.s64 + 27800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA45D4"))) PPC_WEAK_FUNC(sub_83BA45D4);
PPC_FUNC_IMPL(__imp__sub_83BA45D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA45D8"))) PPC_WEAK_FUNC(sub_83BA45D8);
PPC_FUNC_IMPL(__imp__sub_83BA45D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27808
	ctx.r3.s64 = ctx.r11.s64 + 27808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA45E4"))) PPC_WEAK_FUNC(sub_83BA45E4);
PPC_FUNC_IMPL(__imp__sub_83BA45E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA45E8"))) PPC_WEAK_FUNC(sub_83BA45E8);
PPC_FUNC_IMPL(__imp__sub_83BA45E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27816
	ctx.r3.s64 = ctx.r11.s64 + 27816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA45F4"))) PPC_WEAK_FUNC(sub_83BA45F4);
PPC_FUNC_IMPL(__imp__sub_83BA45F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA45F8"))) PPC_WEAK_FUNC(sub_83BA45F8);
PPC_FUNC_IMPL(__imp__sub_83BA45F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27824
	ctx.r3.s64 = ctx.r11.s64 + 27824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4604"))) PPC_WEAK_FUNC(sub_83BA4604);
PPC_FUNC_IMPL(__imp__sub_83BA4604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4608"))) PPC_WEAK_FUNC(sub_83BA4608);
PPC_FUNC_IMPL(__imp__sub_83BA4608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27832
	ctx.r3.s64 = ctx.r11.s64 + 27832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4614"))) PPC_WEAK_FUNC(sub_83BA4614);
PPC_FUNC_IMPL(__imp__sub_83BA4614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4618"))) PPC_WEAK_FUNC(sub_83BA4618);
PPC_FUNC_IMPL(__imp__sub_83BA4618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27840
	ctx.r3.s64 = ctx.r11.s64 + 27840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4624"))) PPC_WEAK_FUNC(sub_83BA4624);
PPC_FUNC_IMPL(__imp__sub_83BA4624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4628"))) PPC_WEAK_FUNC(sub_83BA4628);
PPC_FUNC_IMPL(__imp__sub_83BA4628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27848
	ctx.r3.s64 = ctx.r11.s64 + 27848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4634"))) PPC_WEAK_FUNC(sub_83BA4634);
PPC_FUNC_IMPL(__imp__sub_83BA4634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4638"))) PPC_WEAK_FUNC(sub_83BA4638);
PPC_FUNC_IMPL(__imp__sub_83BA4638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27856
	ctx.r3.s64 = ctx.r11.s64 + 27856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4644"))) PPC_WEAK_FUNC(sub_83BA4644);
PPC_FUNC_IMPL(__imp__sub_83BA4644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4648"))) PPC_WEAK_FUNC(sub_83BA4648);
PPC_FUNC_IMPL(__imp__sub_83BA4648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27864
	ctx.r3.s64 = ctx.r11.s64 + 27864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4654"))) PPC_WEAK_FUNC(sub_83BA4654);
PPC_FUNC_IMPL(__imp__sub_83BA4654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4658"))) PPC_WEAK_FUNC(sub_83BA4658);
PPC_FUNC_IMPL(__imp__sub_83BA4658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27872
	ctx.r3.s64 = ctx.r11.s64 + 27872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4664"))) PPC_WEAK_FUNC(sub_83BA4664);
PPC_FUNC_IMPL(__imp__sub_83BA4664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4668"))) PPC_WEAK_FUNC(sub_83BA4668);
PPC_FUNC_IMPL(__imp__sub_83BA4668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27880
	ctx.r3.s64 = ctx.r11.s64 + 27880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4674"))) PPC_WEAK_FUNC(sub_83BA4674);
PPC_FUNC_IMPL(__imp__sub_83BA4674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4678"))) PPC_WEAK_FUNC(sub_83BA4678);
PPC_FUNC_IMPL(__imp__sub_83BA4678) {
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
	// addi r3,r11,10136
	ctx.r3.s64 = ctx.r11.s64 + 10136;
	// bl 0x83523120
	ctx.lr = 0x83BA4690;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,27888
	ctx.r3.s64 = ctx.r10.s64 + 27888;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA469C;
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

__attribute__((alias("__imp__sub_83BA46AC"))) PPC_WEAK_FUNC(sub_83BA46AC);
PPC_FUNC_IMPL(__imp__sub_83BA46AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA46B0"))) PPC_WEAK_FUNC(sub_83BA46B0);
PPC_FUNC_IMPL(__imp__sub_83BA46B0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,10152
	ctx.r7.s64 = ctx.r8.s64 + 10152;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,10152(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10152);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,10152(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10152, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA46D8"))) PPC_WEAK_FUNC(sub_83BA46D8);
PPC_FUNC_IMPL(__imp__sub_83BA46D8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,24420
	ctx.r6.s64 = ctx.r7.s64 + 24420;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,24348(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 24348);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,10152(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10152);
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
	// std r9,24420(r7)
	PPC_STORE_U64(ctx.r7.u32 + 24420, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA4720"))) PPC_WEAK_FUNC(sub_83BA4720);
PPC_FUNC_IMPL(__imp__sub_83BA4720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27904
	ctx.r3.s64 = ctx.r11.s64 + 27904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA472C"))) PPC_WEAK_FUNC(sub_83BA472C);
PPC_FUNC_IMPL(__imp__sub_83BA472C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4730"))) PPC_WEAK_FUNC(sub_83BA4730);
PPC_FUNC_IMPL(__imp__sub_83BA4730) {
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
	// addi r3,r11,10160
	ctx.r3.s64 = ctx.r11.s64 + 10160;
	// bl 0x8259af80
	ctx.lr = 0x83BA4748;
	sub_8259AF80(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,27928
	ctx.r3.s64 = ctx.r10.s64 + 27928;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA4754;
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

__attribute__((alias("__imp__sub_83BA4764"))) PPC_WEAK_FUNC(sub_83BA4764);
PPC_FUNC_IMPL(__imp__sub_83BA4764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4768"))) PPC_WEAK_FUNC(sub_83BA4768);
PPC_FUNC_IMPL(__imp__sub_83BA4768) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,10140
	ctx.r11.s64 = ctx.r8.s64 + 10140;
	// lis r6,-31792
	ctx.r6.s64 = -2083520512;
	// lwz r10,24396(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24396);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,27912
	ctx.r3.s64 = ctx.r6.s64 + 27912;
	// stw r10,10140(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10140, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4798"))) PPC_WEAK_FUNC(sub_83BA4798);
PPC_FUNC_IMPL(__imp__sub_83BA4798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27920
	ctx.r3.s64 = ctx.r11.s64 + 27920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA47A4"))) PPC_WEAK_FUNC(sub_83BA47A4);
PPC_FUNC_IMPL(__imp__sub_83BA47A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA47A8"))) PPC_WEAK_FUNC(sub_83BA47A8);
PPC_FUNC_IMPL(__imp__sub_83BA47A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27936
	ctx.r3.s64 = ctx.r11.s64 + 27936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA47B4"))) PPC_WEAK_FUNC(sub_83BA47B4);
PPC_FUNC_IMPL(__imp__sub_83BA47B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA47B8"))) PPC_WEAK_FUNC(sub_83BA47B8);
PPC_FUNC_IMPL(__imp__sub_83BA47B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27944
	ctx.r3.s64 = ctx.r11.s64 + 27944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA47C4"))) PPC_WEAK_FUNC(sub_83BA47C4);
PPC_FUNC_IMPL(__imp__sub_83BA47C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA47C8"))) PPC_WEAK_FUNC(sub_83BA47C8);
PPC_FUNC_IMPL(__imp__sub_83BA47C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27952
	ctx.r3.s64 = ctx.r11.s64 + 27952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA47D4"))) PPC_WEAK_FUNC(sub_83BA47D4);
PPC_FUNC_IMPL(__imp__sub_83BA47D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA47D8"))) PPC_WEAK_FUNC(sub_83BA47D8);
PPC_FUNC_IMPL(__imp__sub_83BA47D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27960
	ctx.r3.s64 = ctx.r11.s64 + 27960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA47E4"))) PPC_WEAK_FUNC(sub_83BA47E4);
PPC_FUNC_IMPL(__imp__sub_83BA47E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA47E8"))) PPC_WEAK_FUNC(sub_83BA47E8);
PPC_FUNC_IMPL(__imp__sub_83BA47E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27968
	ctx.r3.s64 = ctx.r11.s64 + 27968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA47F4"))) PPC_WEAK_FUNC(sub_83BA47F4);
PPC_FUNC_IMPL(__imp__sub_83BA47F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA47F8"))) PPC_WEAK_FUNC(sub_83BA47F8);
PPC_FUNC_IMPL(__imp__sub_83BA47F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27976
	ctx.r3.s64 = ctx.r11.s64 + 27976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4804"))) PPC_WEAK_FUNC(sub_83BA4804);
PPC_FUNC_IMPL(__imp__sub_83BA4804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4808"))) PPC_WEAK_FUNC(sub_83BA4808);
PPC_FUNC_IMPL(__imp__sub_83BA4808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27984
	ctx.r3.s64 = ctx.r11.s64 + 27984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4814"))) PPC_WEAK_FUNC(sub_83BA4814);
PPC_FUNC_IMPL(__imp__sub_83BA4814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4818"))) PPC_WEAK_FUNC(sub_83BA4818);
PPC_FUNC_IMPL(__imp__sub_83BA4818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,27992
	ctx.r3.s64 = ctx.r11.s64 + 27992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4824"))) PPC_WEAK_FUNC(sub_83BA4824);
PPC_FUNC_IMPL(__imp__sub_83BA4824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4828"))) PPC_WEAK_FUNC(sub_83BA4828);
PPC_FUNC_IMPL(__imp__sub_83BA4828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,28000
	ctx.r3.s64 = ctx.r11.s64 + 28000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4834"))) PPC_WEAK_FUNC(sub_83BA4834);
PPC_FUNC_IMPL(__imp__sub_83BA4834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4838"))) PPC_WEAK_FUNC(sub_83BA4838);
PPC_FUNC_IMPL(__imp__sub_83BA4838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,28008
	ctx.r3.s64 = ctx.r11.s64 + 28008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4844"))) PPC_WEAK_FUNC(sub_83BA4844);
PPC_FUNC_IMPL(__imp__sub_83BA4844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4848"))) PPC_WEAK_FUNC(sub_83BA4848);
PPC_FUNC_IMPL(__imp__sub_83BA4848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,28016
	ctx.r3.s64 = ctx.r11.s64 + 28016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4854"))) PPC_WEAK_FUNC(sub_83BA4854);
PPC_FUNC_IMPL(__imp__sub_83BA4854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4858"))) PPC_WEAK_FUNC(sub_83BA4858);
PPC_FUNC_IMPL(__imp__sub_83BA4858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,28024
	ctx.r3.s64 = ctx.r11.s64 + 28024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4864"))) PPC_WEAK_FUNC(sub_83BA4864);
PPC_FUNC_IMPL(__imp__sub_83BA4864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4868"))) PPC_WEAK_FUNC(sub_83BA4868);
PPC_FUNC_IMPL(__imp__sub_83BA4868) {
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
	// addi r3,r11,10504
	ctx.r3.s64 = ctx.r11.s64 + 10504;
	// bl 0x83523120
	ctx.lr = 0x83BA4880;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,28032
	ctx.r3.s64 = ctx.r10.s64 + 28032;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA488C;
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

__attribute__((alias("__imp__sub_83BA489C"))) PPC_WEAK_FUNC(sub_83BA489C);
PPC_FUNC_IMPL(__imp__sub_83BA489C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA48A0"))) PPC_WEAK_FUNC(sub_83BA48A0);
PPC_FUNC_IMPL(__imp__sub_83BA48A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,10520
	ctx.r7.s64 = ctx.r8.s64 + 10520;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,10520(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10520);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,10520(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10520, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA48C8"))) PPC_WEAK_FUNC(sub_83BA48C8);
PPC_FUNC_IMPL(__imp__sub_83BA48C8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,24584
	ctx.r6.s64 = ctx.r7.s64 + 24584;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,24512(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 24512);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,10520(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10520);
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
	// std r9,24584(r7)
	PPC_STORE_U64(ctx.r7.u32 + 24584, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA4910"))) PPC_WEAK_FUNC(sub_83BA4910);
PPC_FUNC_IMPL(__imp__sub_83BA4910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,28048
	ctx.r3.s64 = ctx.r11.s64 + 28048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA491C"))) PPC_WEAK_FUNC(sub_83BA491C);
PPC_FUNC_IMPL(__imp__sub_83BA491C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4920"))) PPC_WEAK_FUNC(sub_83BA4920);
PPC_FUNC_IMPL(__imp__sub_83BA4920) {
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
	// addi r3,r11,10528
	ctx.r3.s64 = ctx.r11.s64 + 10528;
	// bl 0x8259af80
	ctx.lr = 0x83BA4938;
	sub_8259AF80(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,28064
	ctx.r3.s64 = ctx.r10.s64 + 28064;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA4944;
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

__attribute__((alias("__imp__sub_83BA4954"))) PPC_WEAK_FUNC(sub_83BA4954);
PPC_FUNC_IMPL(__imp__sub_83BA4954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4958"))) PPC_WEAK_FUNC(sub_83BA4958);
PPC_FUNC_IMPL(__imp__sub_83BA4958) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,10508
	ctx.r11.s64 = ctx.r8.s64 + 10508;
	// lis r6,-31792
	ctx.r6.s64 = -2083520512;
	// lwz r10,24560(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24560);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,28056
	ctx.r3.s64 = ctx.r6.s64 + 28056;
	// stw r10,10508(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10508, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4988"))) PPC_WEAK_FUNC(sub_83BA4988);
PPC_FUNC_IMPL(__imp__sub_83BA4988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,28072
	ctx.r3.s64 = ctx.r11.s64 + 28072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4994"))) PPC_WEAK_FUNC(sub_83BA4994);
PPC_FUNC_IMPL(__imp__sub_83BA4994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4998"))) PPC_WEAK_FUNC(sub_83BA4998);
PPC_FUNC_IMPL(__imp__sub_83BA4998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,28080
	ctx.r3.s64 = ctx.r11.s64 + 28080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA49A4"))) PPC_WEAK_FUNC(sub_83BA49A4);
PPC_FUNC_IMPL(__imp__sub_83BA49A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA49A8"))) PPC_WEAK_FUNC(sub_83BA49A8);
PPC_FUNC_IMPL(__imp__sub_83BA49A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,28088
	ctx.r3.s64 = ctx.r11.s64 + 28088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA49B4"))) PPC_WEAK_FUNC(sub_83BA49B4);
PPC_FUNC_IMPL(__imp__sub_83BA49B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA49B8"))) PPC_WEAK_FUNC(sub_83BA49B8);
PPC_FUNC_IMPL(__imp__sub_83BA49B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,28096
	ctx.r3.s64 = ctx.r11.s64 + 28096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA49C4"))) PPC_WEAK_FUNC(sub_83BA49C4);
PPC_FUNC_IMPL(__imp__sub_83BA49C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA49C8"))) PPC_WEAK_FUNC(sub_83BA49C8);
PPC_FUNC_IMPL(__imp__sub_83BA49C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,28104
	ctx.r3.s64 = ctx.r11.s64 + 28104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA49D4"))) PPC_WEAK_FUNC(sub_83BA49D4);
PPC_FUNC_IMPL(__imp__sub_83BA49D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA49D8"))) PPC_WEAK_FUNC(sub_83BA49D8);
PPC_FUNC_IMPL(__imp__sub_83BA49D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,28112
	ctx.r3.s64 = ctx.r11.s64 + 28112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA49E4"))) PPC_WEAK_FUNC(sub_83BA49E4);
PPC_FUNC_IMPL(__imp__sub_83BA49E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA49E8"))) PPC_WEAK_FUNC(sub_83BA49E8);
PPC_FUNC_IMPL(__imp__sub_83BA49E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,28120
	ctx.r3.s64 = ctx.r11.s64 + 28120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA49F4"))) PPC_WEAK_FUNC(sub_83BA49F4);
PPC_FUNC_IMPL(__imp__sub_83BA49F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA49F8"))) PPC_WEAK_FUNC(sub_83BA49F8);
PPC_FUNC_IMPL(__imp__sub_83BA49F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,28128
	ctx.r3.s64 = ctx.r11.s64 + 28128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4A04"))) PPC_WEAK_FUNC(sub_83BA4A04);
PPC_FUNC_IMPL(__imp__sub_83BA4A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4A08"))) PPC_WEAK_FUNC(sub_83BA4A08);
PPC_FUNC_IMPL(__imp__sub_83BA4A08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,28136
	ctx.r3.s64 = ctx.r11.s64 + 28136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4A14"))) PPC_WEAK_FUNC(sub_83BA4A14);
PPC_FUNC_IMPL(__imp__sub_83BA4A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4A18"))) PPC_WEAK_FUNC(sub_83BA4A18);
PPC_FUNC_IMPL(__imp__sub_83BA4A18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,28144
	ctx.r3.s64 = ctx.r11.s64 + 28144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4A24"))) PPC_WEAK_FUNC(sub_83BA4A24);
PPC_FUNC_IMPL(__imp__sub_83BA4A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4A28"))) PPC_WEAK_FUNC(sub_83BA4A28);
PPC_FUNC_IMPL(__imp__sub_83BA4A28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,28152
	ctx.r3.s64 = ctx.r11.s64 + 28152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4A34"))) PPC_WEAK_FUNC(sub_83BA4A34);
PPC_FUNC_IMPL(__imp__sub_83BA4A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4A38"))) PPC_WEAK_FUNC(sub_83BA4A38);
PPC_FUNC_IMPL(__imp__sub_83BA4A38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,28160
	ctx.r3.s64 = ctx.r11.s64 + 28160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4A44"))) PPC_WEAK_FUNC(sub_83BA4A44);
PPC_FUNC_IMPL(__imp__sub_83BA4A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4A48"))) PPC_WEAK_FUNC(sub_83BA4A48);
PPC_FUNC_IMPL(__imp__sub_83BA4A48) {
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
	// addi r3,r11,10872
	ctx.r3.s64 = ctx.r11.s64 + 10872;
	// bl 0x83523120
	ctx.lr = 0x83BA4A60;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,28168
	ctx.r3.s64 = ctx.r10.s64 + 28168;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA4A6C;
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

__attribute__((alias("__imp__sub_83BA4A7C"))) PPC_WEAK_FUNC(sub_83BA4A7C);
PPC_FUNC_IMPL(__imp__sub_83BA4A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4A80"))) PPC_WEAK_FUNC(sub_83BA4A80);
PPC_FUNC_IMPL(__imp__sub_83BA4A80) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,10888
	ctx.r7.s64 = ctx.r8.s64 + 10888;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,10888(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10888);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,10888(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10888, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA4AA8"))) PPC_WEAK_FUNC(sub_83BA4AA8);
PPC_FUNC_IMPL(__imp__sub_83BA4AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,24728
	ctx.r6.s64 = ctx.r7.s64 + 24728;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,24656(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 24656);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,10888(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10888);
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
	// std r9,24728(r7)
	PPC_STORE_U64(ctx.r7.u32 + 24728, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA4AF0"))) PPC_WEAK_FUNC(sub_83BA4AF0);
PPC_FUNC_IMPL(__imp__sub_83BA4AF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,28184
	ctx.r3.s64 = ctx.r11.s64 + 28184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4AFC"))) PPC_WEAK_FUNC(sub_83BA4AFC);
PPC_FUNC_IMPL(__imp__sub_83BA4AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4B00"))) PPC_WEAK_FUNC(sub_83BA4B00);
PPC_FUNC_IMPL(__imp__sub_83BA4B00) {
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
	// addi r3,r11,10896
	ctx.r3.s64 = ctx.r11.s64 + 10896;
	// bl 0x8259af80
	ctx.lr = 0x83BA4B18;
	sub_8259AF80(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,28200
	ctx.r3.s64 = ctx.r10.s64 + 28200;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA4B24;
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

__attribute__((alias("__imp__sub_83BA4B34"))) PPC_WEAK_FUNC(sub_83BA4B34);
PPC_FUNC_IMPL(__imp__sub_83BA4B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4B38"))) PPC_WEAK_FUNC(sub_83BA4B38);
PPC_FUNC_IMPL(__imp__sub_83BA4B38) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,10876
	ctx.r11.s64 = ctx.r8.s64 + 10876;
	// lis r6,-31792
	ctx.r6.s64 = -2083520512;
	// lwz r10,24704(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24704);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,28192
	ctx.r3.s64 = ctx.r6.s64 + 28192;
	// stw r10,10876(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10876, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4B68"))) PPC_WEAK_FUNC(sub_83BA4B68);
PPC_FUNC_IMPL(__imp__sub_83BA4B68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,28208
	ctx.r3.s64 = ctx.r11.s64 + 28208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4B74"))) PPC_WEAK_FUNC(sub_83BA4B74);
PPC_FUNC_IMPL(__imp__sub_83BA4B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4B78"))) PPC_WEAK_FUNC(sub_83BA4B78);
PPC_FUNC_IMPL(__imp__sub_83BA4B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,28216
	ctx.r3.s64 = ctx.r11.s64 + 28216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4B84"))) PPC_WEAK_FUNC(sub_83BA4B84);
PPC_FUNC_IMPL(__imp__sub_83BA4B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4B88"))) PPC_WEAK_FUNC(sub_83BA4B88);
PPC_FUNC_IMPL(__imp__sub_83BA4B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,28224
	ctx.r3.s64 = ctx.r11.s64 + 28224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4B94"))) PPC_WEAK_FUNC(sub_83BA4B94);
PPC_FUNC_IMPL(__imp__sub_83BA4B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4B98"))) PPC_WEAK_FUNC(sub_83BA4B98);
PPC_FUNC_IMPL(__imp__sub_83BA4B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,28232
	ctx.r3.s64 = ctx.r11.s64 + 28232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4BA4"))) PPC_WEAK_FUNC(sub_83BA4BA4);
PPC_FUNC_IMPL(__imp__sub_83BA4BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4BA8"))) PPC_WEAK_FUNC(sub_83BA4BA8);
PPC_FUNC_IMPL(__imp__sub_83BA4BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,28240
	ctx.r3.s64 = ctx.r11.s64 + 28240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4BB4"))) PPC_WEAK_FUNC(sub_83BA4BB4);
PPC_FUNC_IMPL(__imp__sub_83BA4BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4BB8"))) PPC_WEAK_FUNC(sub_83BA4BB8);
PPC_FUNC_IMPL(__imp__sub_83BA4BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,28248
	ctx.r3.s64 = ctx.r11.s64 + 28248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4BC4"))) PPC_WEAK_FUNC(sub_83BA4BC4);
PPC_FUNC_IMPL(__imp__sub_83BA4BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4BC8"))) PPC_WEAK_FUNC(sub_83BA4BC8);
PPC_FUNC_IMPL(__imp__sub_83BA4BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,28256
	ctx.r3.s64 = ctx.r11.s64 + 28256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4BD4"))) PPC_WEAK_FUNC(sub_83BA4BD4);
PPC_FUNC_IMPL(__imp__sub_83BA4BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4BD8"))) PPC_WEAK_FUNC(sub_83BA4BD8);
PPC_FUNC_IMPL(__imp__sub_83BA4BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,28264
	ctx.r3.s64 = ctx.r11.s64 + 28264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4BE4"))) PPC_WEAK_FUNC(sub_83BA4BE4);
PPC_FUNC_IMPL(__imp__sub_83BA4BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4BE8"))) PPC_WEAK_FUNC(sub_83BA4BE8);
PPC_FUNC_IMPL(__imp__sub_83BA4BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,28272
	ctx.r3.s64 = ctx.r11.s64 + 28272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4BF4"))) PPC_WEAK_FUNC(sub_83BA4BF4);
PPC_FUNC_IMPL(__imp__sub_83BA4BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4BF8"))) PPC_WEAK_FUNC(sub_83BA4BF8);
PPC_FUNC_IMPL(__imp__sub_83BA4BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,28280
	ctx.r3.s64 = ctx.r11.s64 + 28280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4C04"))) PPC_WEAK_FUNC(sub_83BA4C04);
PPC_FUNC_IMPL(__imp__sub_83BA4C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4C08"))) PPC_WEAK_FUNC(sub_83BA4C08);
PPC_FUNC_IMPL(__imp__sub_83BA4C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,28288
	ctx.r3.s64 = ctx.r11.s64 + 28288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4C14"))) PPC_WEAK_FUNC(sub_83BA4C14);
PPC_FUNC_IMPL(__imp__sub_83BA4C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4C18"))) PPC_WEAK_FUNC(sub_83BA4C18);
PPC_FUNC_IMPL(__imp__sub_83BA4C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,28296
	ctx.r3.s64 = ctx.r11.s64 + 28296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4C24"))) PPC_WEAK_FUNC(sub_83BA4C24);
PPC_FUNC_IMPL(__imp__sub_83BA4C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4C28"))) PPC_WEAK_FUNC(sub_83BA4C28);
PPC_FUNC_IMPL(__imp__sub_83BA4C28) {
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
	// addi r3,r11,11240
	ctx.r3.s64 = ctx.r11.s64 + 11240;
	// bl 0x83523120
	ctx.lr = 0x83BA4C40;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,28304
	ctx.r3.s64 = ctx.r10.s64 + 28304;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA4C4C;
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

__attribute__((alias("__imp__sub_83BA4C5C"))) PPC_WEAK_FUNC(sub_83BA4C5C);
PPC_FUNC_IMPL(__imp__sub_83BA4C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4C60"))) PPC_WEAK_FUNC(sub_83BA4C60);
PPC_FUNC_IMPL(__imp__sub_83BA4C60) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,11256
	ctx.r7.s64 = ctx.r8.s64 + 11256;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,11256(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 11256);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,11256(r8)
	PPC_STORE_U32(ctx.r8.u32 + 11256, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA4C88"))) PPC_WEAK_FUNC(sub_83BA4C88);
PPC_FUNC_IMPL(__imp__sub_83BA4C88) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,24888
	ctx.r6.s64 = ctx.r7.s64 + 24888;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,24816(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 24816);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,11256(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11256);
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
	// std r9,24888(r7)
	PPC_STORE_U64(ctx.r7.u32 + 24888, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA4CD0"))) PPC_WEAK_FUNC(sub_83BA4CD0);
PPC_FUNC_IMPL(__imp__sub_83BA4CD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,28320
	ctx.r3.s64 = ctx.r11.s64 + 28320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4CDC"))) PPC_WEAK_FUNC(sub_83BA4CDC);
PPC_FUNC_IMPL(__imp__sub_83BA4CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4CE0"))) PPC_WEAK_FUNC(sub_83BA4CE0);
PPC_FUNC_IMPL(__imp__sub_83BA4CE0) {
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
	// addi r3,r11,11264
	ctx.r3.s64 = ctx.r11.s64 + 11264;
	// bl 0x8259af80
	ctx.lr = 0x83BA4CF8;
	sub_8259AF80(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,28336
	ctx.r3.s64 = ctx.r10.s64 + 28336;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA4D04;
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

__attribute__((alias("__imp__sub_83BA4D14"))) PPC_WEAK_FUNC(sub_83BA4D14);
PPC_FUNC_IMPL(__imp__sub_83BA4D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4D18"))) PPC_WEAK_FUNC(sub_83BA4D18);
PPC_FUNC_IMPL(__imp__sub_83BA4D18) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,11244
	ctx.r11.s64 = ctx.r8.s64 + 11244;
	// lis r6,-31792
	ctx.r6.s64 = -2083520512;
	// lwz r10,24864(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24864);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,28328
	ctx.r3.s64 = ctx.r6.s64 + 28328;
	// stw r10,11244(r8)
	PPC_STORE_U32(ctx.r8.u32 + 11244, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4D48"))) PPC_WEAK_FUNC(sub_83BA4D48);
PPC_FUNC_IMPL(__imp__sub_83BA4D48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,28344
	ctx.r3.s64 = ctx.r11.s64 + 28344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4D54"))) PPC_WEAK_FUNC(sub_83BA4D54);
PPC_FUNC_IMPL(__imp__sub_83BA4D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4D58"))) PPC_WEAK_FUNC(sub_83BA4D58);
PPC_FUNC_IMPL(__imp__sub_83BA4D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,28352
	ctx.r3.s64 = ctx.r11.s64 + 28352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA4D64"))) PPC_WEAK_FUNC(sub_83BA4D64);
PPC_FUNC_IMPL(__imp__sub_83BA4D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA4D68"))) PPC_WEAK_FUNC(sub_83BA4D68);
PPC_FUNC_IMPL(__imp__sub_83BA4D68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,28360
	ctx.r3.s64 = ctx.r11.s64 + 28360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

