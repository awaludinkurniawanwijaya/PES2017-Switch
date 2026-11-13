#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83B8A05C"))) PPC_WEAK_FUNC(sub_83B8A05C);
PPC_FUNC_IMPL(__imp__sub_83B8A05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A060"))) PPC_WEAK_FUNC(sub_83B8A060);
PPC_FUNC_IMPL(__imp__sub_83B8A060) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-10320
	ctx.r7.s64 = ctx.r8.s64 + -10320;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-10320(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10320);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-10320(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10320, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B8A088"))) PPC_WEAK_FUNC(sub_83B8A088);
PPC_FUNC_IMPL(__imp__sub_83B8A088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12752
	ctx.r3.s64 = ctx.r11.s64 + -12752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A094"))) PPC_WEAK_FUNC(sub_83B8A094);
PPC_FUNC_IMPL(__imp__sub_83B8A094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A098"))) PPC_WEAK_FUNC(sub_83B8A098);
PPC_FUNC_IMPL(__imp__sub_83B8A098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12744
	ctx.r3.s64 = ctx.r11.s64 + -12744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A0A4"))) PPC_WEAK_FUNC(sub_83B8A0A4);
PPC_FUNC_IMPL(__imp__sub_83B8A0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A0A8"))) PPC_WEAK_FUNC(sub_83B8A0A8);
PPC_FUNC_IMPL(__imp__sub_83B8A0A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12736
	ctx.r3.s64 = ctx.r11.s64 + -12736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A0B4"))) PPC_WEAK_FUNC(sub_83B8A0B4);
PPC_FUNC_IMPL(__imp__sub_83B8A0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A0B8"))) PPC_WEAK_FUNC(sub_83B8A0B8);
PPC_FUNC_IMPL(__imp__sub_83B8A0B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12728
	ctx.r3.s64 = ctx.r11.s64 + -12728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A0C4"))) PPC_WEAK_FUNC(sub_83B8A0C4);
PPC_FUNC_IMPL(__imp__sub_83B8A0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A0C8"))) PPC_WEAK_FUNC(sub_83B8A0C8);
PPC_FUNC_IMPL(__imp__sub_83B8A0C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12720
	ctx.r3.s64 = ctx.r11.s64 + -12720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A0D4"))) PPC_WEAK_FUNC(sub_83B8A0D4);
PPC_FUNC_IMPL(__imp__sub_83B8A0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A0D8"))) PPC_WEAK_FUNC(sub_83B8A0D8);
PPC_FUNC_IMPL(__imp__sub_83B8A0D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12712
	ctx.r3.s64 = ctx.r11.s64 + -12712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A0E4"))) PPC_WEAK_FUNC(sub_83B8A0E4);
PPC_FUNC_IMPL(__imp__sub_83B8A0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A0E8"))) PPC_WEAK_FUNC(sub_83B8A0E8);
PPC_FUNC_IMPL(__imp__sub_83B8A0E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12704
	ctx.r3.s64 = ctx.r11.s64 + -12704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A0F4"))) PPC_WEAK_FUNC(sub_83B8A0F4);
PPC_FUNC_IMPL(__imp__sub_83B8A0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A0F8"))) PPC_WEAK_FUNC(sub_83B8A0F8);
PPC_FUNC_IMPL(__imp__sub_83B8A0F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12696
	ctx.r3.s64 = ctx.r11.s64 + -12696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A104"))) PPC_WEAK_FUNC(sub_83B8A104);
PPC_FUNC_IMPL(__imp__sub_83B8A104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A108"))) PPC_WEAK_FUNC(sub_83B8A108);
PPC_FUNC_IMPL(__imp__sub_83B8A108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12688
	ctx.r3.s64 = ctx.r11.s64 + -12688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A114"))) PPC_WEAK_FUNC(sub_83B8A114);
PPC_FUNC_IMPL(__imp__sub_83B8A114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A118"))) PPC_WEAK_FUNC(sub_83B8A118);
PPC_FUNC_IMPL(__imp__sub_83B8A118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12680
	ctx.r3.s64 = ctx.r11.s64 + -12680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A124"))) PPC_WEAK_FUNC(sub_83B8A124);
PPC_FUNC_IMPL(__imp__sub_83B8A124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A128"))) PPC_WEAK_FUNC(sub_83B8A128);
PPC_FUNC_IMPL(__imp__sub_83B8A128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12672
	ctx.r3.s64 = ctx.r11.s64 + -12672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A134"))) PPC_WEAK_FUNC(sub_83B8A134);
PPC_FUNC_IMPL(__imp__sub_83B8A134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A138"))) PPC_WEAK_FUNC(sub_83B8A138);
PPC_FUNC_IMPL(__imp__sub_83B8A138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12664
	ctx.r3.s64 = ctx.r11.s64 + -12664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A144"))) PPC_WEAK_FUNC(sub_83B8A144);
PPC_FUNC_IMPL(__imp__sub_83B8A144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A148"))) PPC_WEAK_FUNC(sub_83B8A148);
PPC_FUNC_IMPL(__imp__sub_83B8A148) {
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
	// addi r3,r11,-10312
	ctx.r3.s64 = ctx.r11.s64 + -10312;
	// bl 0x83523120
	ctx.lr = 0x83B8A160;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-12656
	ctx.r3.s64 = ctx.r10.s64 + -12656;
	// bl 0x831cdcc8
	ctx.lr = 0x83B8A16C;
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

__attribute__((alias("__imp__sub_83B8A17C"))) PPC_WEAK_FUNC(sub_83B8A17C);
PPC_FUNC_IMPL(__imp__sub_83B8A17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A180"))) PPC_WEAK_FUNC(sub_83B8A180);
PPC_FUNC_IMPL(__imp__sub_83B8A180) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-10308
	ctx.r7.s64 = ctx.r8.s64 + -10308;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-10308(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10308);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-10308(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10308, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B8A1A8"))) PPC_WEAK_FUNC(sub_83B8A1A8);
PPC_FUNC_IMPL(__imp__sub_83B8A1A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12640
	ctx.r3.s64 = ctx.r11.s64 + -12640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A1B4"))) PPC_WEAK_FUNC(sub_83B8A1B4);
PPC_FUNC_IMPL(__imp__sub_83B8A1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A1B8"))) PPC_WEAK_FUNC(sub_83B8A1B8);
PPC_FUNC_IMPL(__imp__sub_83B8A1B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12632
	ctx.r3.s64 = ctx.r11.s64 + -12632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A1C4"))) PPC_WEAK_FUNC(sub_83B8A1C4);
PPC_FUNC_IMPL(__imp__sub_83B8A1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A1C8"))) PPC_WEAK_FUNC(sub_83B8A1C8);
PPC_FUNC_IMPL(__imp__sub_83B8A1C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12624
	ctx.r3.s64 = ctx.r11.s64 + -12624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A1D4"))) PPC_WEAK_FUNC(sub_83B8A1D4);
PPC_FUNC_IMPL(__imp__sub_83B8A1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A1D8"))) PPC_WEAK_FUNC(sub_83B8A1D8);
PPC_FUNC_IMPL(__imp__sub_83B8A1D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12616
	ctx.r3.s64 = ctx.r11.s64 + -12616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A1E4"))) PPC_WEAK_FUNC(sub_83B8A1E4);
PPC_FUNC_IMPL(__imp__sub_83B8A1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A1E8"))) PPC_WEAK_FUNC(sub_83B8A1E8);
PPC_FUNC_IMPL(__imp__sub_83B8A1E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12608
	ctx.r3.s64 = ctx.r11.s64 + -12608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A1F4"))) PPC_WEAK_FUNC(sub_83B8A1F4);
PPC_FUNC_IMPL(__imp__sub_83B8A1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A1F8"))) PPC_WEAK_FUNC(sub_83B8A1F8);
PPC_FUNC_IMPL(__imp__sub_83B8A1F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12600
	ctx.r3.s64 = ctx.r11.s64 + -12600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A204"))) PPC_WEAK_FUNC(sub_83B8A204);
PPC_FUNC_IMPL(__imp__sub_83B8A204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A208"))) PPC_WEAK_FUNC(sub_83B8A208);
PPC_FUNC_IMPL(__imp__sub_83B8A208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12592
	ctx.r3.s64 = ctx.r11.s64 + -12592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A214"))) PPC_WEAK_FUNC(sub_83B8A214);
PPC_FUNC_IMPL(__imp__sub_83B8A214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A218"))) PPC_WEAK_FUNC(sub_83B8A218);
PPC_FUNC_IMPL(__imp__sub_83B8A218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12584
	ctx.r3.s64 = ctx.r11.s64 + -12584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A224"))) PPC_WEAK_FUNC(sub_83B8A224);
PPC_FUNC_IMPL(__imp__sub_83B8A224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A228"))) PPC_WEAK_FUNC(sub_83B8A228);
PPC_FUNC_IMPL(__imp__sub_83B8A228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12576
	ctx.r3.s64 = ctx.r11.s64 + -12576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A234"))) PPC_WEAK_FUNC(sub_83B8A234);
PPC_FUNC_IMPL(__imp__sub_83B8A234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A238"))) PPC_WEAK_FUNC(sub_83B8A238);
PPC_FUNC_IMPL(__imp__sub_83B8A238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12568
	ctx.r3.s64 = ctx.r11.s64 + -12568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A244"))) PPC_WEAK_FUNC(sub_83B8A244);
PPC_FUNC_IMPL(__imp__sub_83B8A244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A248"))) PPC_WEAK_FUNC(sub_83B8A248);
PPC_FUNC_IMPL(__imp__sub_83B8A248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12560
	ctx.r3.s64 = ctx.r11.s64 + -12560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A254"))) PPC_WEAK_FUNC(sub_83B8A254);
PPC_FUNC_IMPL(__imp__sub_83B8A254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A258"))) PPC_WEAK_FUNC(sub_83B8A258);
PPC_FUNC_IMPL(__imp__sub_83B8A258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12552
	ctx.r3.s64 = ctx.r11.s64 + -12552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A264"))) PPC_WEAK_FUNC(sub_83B8A264);
PPC_FUNC_IMPL(__imp__sub_83B8A264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A268"))) PPC_WEAK_FUNC(sub_83B8A268);
PPC_FUNC_IMPL(__imp__sub_83B8A268) {
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
	// addi r3,r11,-10300
	ctx.r3.s64 = ctx.r11.s64 + -10300;
	// bl 0x83523120
	ctx.lr = 0x83B8A280;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-12544
	ctx.r3.s64 = ctx.r10.s64 + -12544;
	// bl 0x831cdcc8
	ctx.lr = 0x83B8A28C;
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

__attribute__((alias("__imp__sub_83B8A29C"))) PPC_WEAK_FUNC(sub_83B8A29C);
PPC_FUNC_IMPL(__imp__sub_83B8A29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A2A0"))) PPC_WEAK_FUNC(sub_83B8A2A0);
PPC_FUNC_IMPL(__imp__sub_83B8A2A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-10296
	ctx.r7.s64 = ctx.r8.s64 + -10296;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-10296(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10296);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-10296(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10296, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B8A2C8"))) PPC_WEAK_FUNC(sub_83B8A2C8);
PPC_FUNC_IMPL(__imp__sub_83B8A2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12528
	ctx.r3.s64 = ctx.r11.s64 + -12528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A2D4"))) PPC_WEAK_FUNC(sub_83B8A2D4);
PPC_FUNC_IMPL(__imp__sub_83B8A2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A2D8"))) PPC_WEAK_FUNC(sub_83B8A2D8);
PPC_FUNC_IMPL(__imp__sub_83B8A2D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12520
	ctx.r3.s64 = ctx.r11.s64 + -12520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A2E4"))) PPC_WEAK_FUNC(sub_83B8A2E4);
PPC_FUNC_IMPL(__imp__sub_83B8A2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A2E8"))) PPC_WEAK_FUNC(sub_83B8A2E8);
PPC_FUNC_IMPL(__imp__sub_83B8A2E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12512
	ctx.r3.s64 = ctx.r11.s64 + -12512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A2F4"))) PPC_WEAK_FUNC(sub_83B8A2F4);
PPC_FUNC_IMPL(__imp__sub_83B8A2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A2F8"))) PPC_WEAK_FUNC(sub_83B8A2F8);
PPC_FUNC_IMPL(__imp__sub_83B8A2F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12504
	ctx.r3.s64 = ctx.r11.s64 + -12504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A304"))) PPC_WEAK_FUNC(sub_83B8A304);
PPC_FUNC_IMPL(__imp__sub_83B8A304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A308"))) PPC_WEAK_FUNC(sub_83B8A308);
PPC_FUNC_IMPL(__imp__sub_83B8A308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12496
	ctx.r3.s64 = ctx.r11.s64 + -12496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A314"))) PPC_WEAK_FUNC(sub_83B8A314);
PPC_FUNC_IMPL(__imp__sub_83B8A314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A318"))) PPC_WEAK_FUNC(sub_83B8A318);
PPC_FUNC_IMPL(__imp__sub_83B8A318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12488
	ctx.r3.s64 = ctx.r11.s64 + -12488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A324"))) PPC_WEAK_FUNC(sub_83B8A324);
PPC_FUNC_IMPL(__imp__sub_83B8A324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A328"))) PPC_WEAK_FUNC(sub_83B8A328);
PPC_FUNC_IMPL(__imp__sub_83B8A328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12480
	ctx.r3.s64 = ctx.r11.s64 + -12480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A334"))) PPC_WEAK_FUNC(sub_83B8A334);
PPC_FUNC_IMPL(__imp__sub_83B8A334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A338"))) PPC_WEAK_FUNC(sub_83B8A338);
PPC_FUNC_IMPL(__imp__sub_83B8A338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12472
	ctx.r3.s64 = ctx.r11.s64 + -12472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A344"))) PPC_WEAK_FUNC(sub_83B8A344);
PPC_FUNC_IMPL(__imp__sub_83B8A344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A348"))) PPC_WEAK_FUNC(sub_83B8A348);
PPC_FUNC_IMPL(__imp__sub_83B8A348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12464
	ctx.r3.s64 = ctx.r11.s64 + -12464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A354"))) PPC_WEAK_FUNC(sub_83B8A354);
PPC_FUNC_IMPL(__imp__sub_83B8A354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A358"))) PPC_WEAK_FUNC(sub_83B8A358);
PPC_FUNC_IMPL(__imp__sub_83B8A358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12456
	ctx.r3.s64 = ctx.r11.s64 + -12456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A364"))) PPC_WEAK_FUNC(sub_83B8A364);
PPC_FUNC_IMPL(__imp__sub_83B8A364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A368"))) PPC_WEAK_FUNC(sub_83B8A368);
PPC_FUNC_IMPL(__imp__sub_83B8A368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12448
	ctx.r3.s64 = ctx.r11.s64 + -12448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A374"))) PPC_WEAK_FUNC(sub_83B8A374);
PPC_FUNC_IMPL(__imp__sub_83B8A374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A378"))) PPC_WEAK_FUNC(sub_83B8A378);
PPC_FUNC_IMPL(__imp__sub_83B8A378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12440
	ctx.r3.s64 = ctx.r11.s64 + -12440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A384"))) PPC_WEAK_FUNC(sub_83B8A384);
PPC_FUNC_IMPL(__imp__sub_83B8A384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A388"))) PPC_WEAK_FUNC(sub_83B8A388);
PPC_FUNC_IMPL(__imp__sub_83B8A388) {
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
	// addi r3,r11,-10288
	ctx.r3.s64 = ctx.r11.s64 + -10288;
	// bl 0x83523120
	ctx.lr = 0x83B8A3A0;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-12432
	ctx.r3.s64 = ctx.r10.s64 + -12432;
	// bl 0x831cdcc8
	ctx.lr = 0x83B8A3AC;
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

__attribute__((alias("__imp__sub_83B8A3BC"))) PPC_WEAK_FUNC(sub_83B8A3BC);
PPC_FUNC_IMPL(__imp__sub_83B8A3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A3C0"))) PPC_WEAK_FUNC(sub_83B8A3C0);
PPC_FUNC_IMPL(__imp__sub_83B8A3C0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-10284
	ctx.r7.s64 = ctx.r8.s64 + -10284;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-10284(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10284);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-10284(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10284, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B8A3E8"))) PPC_WEAK_FUNC(sub_83B8A3E8);
PPC_FUNC_IMPL(__imp__sub_83B8A3E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12416
	ctx.r3.s64 = ctx.r11.s64 + -12416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A3F4"))) PPC_WEAK_FUNC(sub_83B8A3F4);
PPC_FUNC_IMPL(__imp__sub_83B8A3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A3F8"))) PPC_WEAK_FUNC(sub_83B8A3F8);
PPC_FUNC_IMPL(__imp__sub_83B8A3F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12408
	ctx.r3.s64 = ctx.r11.s64 + -12408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A404"))) PPC_WEAK_FUNC(sub_83B8A404);
PPC_FUNC_IMPL(__imp__sub_83B8A404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A408"))) PPC_WEAK_FUNC(sub_83B8A408);
PPC_FUNC_IMPL(__imp__sub_83B8A408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12400
	ctx.r3.s64 = ctx.r11.s64 + -12400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A414"))) PPC_WEAK_FUNC(sub_83B8A414);
PPC_FUNC_IMPL(__imp__sub_83B8A414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A418"))) PPC_WEAK_FUNC(sub_83B8A418);
PPC_FUNC_IMPL(__imp__sub_83B8A418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12392
	ctx.r3.s64 = ctx.r11.s64 + -12392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A424"))) PPC_WEAK_FUNC(sub_83B8A424);
PPC_FUNC_IMPL(__imp__sub_83B8A424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A428"))) PPC_WEAK_FUNC(sub_83B8A428);
PPC_FUNC_IMPL(__imp__sub_83B8A428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12384
	ctx.r3.s64 = ctx.r11.s64 + -12384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A434"))) PPC_WEAK_FUNC(sub_83B8A434);
PPC_FUNC_IMPL(__imp__sub_83B8A434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A438"))) PPC_WEAK_FUNC(sub_83B8A438);
PPC_FUNC_IMPL(__imp__sub_83B8A438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12376
	ctx.r3.s64 = ctx.r11.s64 + -12376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A444"))) PPC_WEAK_FUNC(sub_83B8A444);
PPC_FUNC_IMPL(__imp__sub_83B8A444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A448"))) PPC_WEAK_FUNC(sub_83B8A448);
PPC_FUNC_IMPL(__imp__sub_83B8A448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12368
	ctx.r3.s64 = ctx.r11.s64 + -12368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A454"))) PPC_WEAK_FUNC(sub_83B8A454);
PPC_FUNC_IMPL(__imp__sub_83B8A454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A458"))) PPC_WEAK_FUNC(sub_83B8A458);
PPC_FUNC_IMPL(__imp__sub_83B8A458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12360
	ctx.r3.s64 = ctx.r11.s64 + -12360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A464"))) PPC_WEAK_FUNC(sub_83B8A464);
PPC_FUNC_IMPL(__imp__sub_83B8A464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A468"))) PPC_WEAK_FUNC(sub_83B8A468);
PPC_FUNC_IMPL(__imp__sub_83B8A468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12352
	ctx.r3.s64 = ctx.r11.s64 + -12352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A474"))) PPC_WEAK_FUNC(sub_83B8A474);
PPC_FUNC_IMPL(__imp__sub_83B8A474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A478"))) PPC_WEAK_FUNC(sub_83B8A478);
PPC_FUNC_IMPL(__imp__sub_83B8A478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12344
	ctx.r3.s64 = ctx.r11.s64 + -12344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A484"))) PPC_WEAK_FUNC(sub_83B8A484);
PPC_FUNC_IMPL(__imp__sub_83B8A484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A488"))) PPC_WEAK_FUNC(sub_83B8A488);
PPC_FUNC_IMPL(__imp__sub_83B8A488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12336
	ctx.r3.s64 = ctx.r11.s64 + -12336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A494"))) PPC_WEAK_FUNC(sub_83B8A494);
PPC_FUNC_IMPL(__imp__sub_83B8A494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A498"))) PPC_WEAK_FUNC(sub_83B8A498);
PPC_FUNC_IMPL(__imp__sub_83B8A498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12328
	ctx.r3.s64 = ctx.r11.s64 + -12328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A4A4"))) PPC_WEAK_FUNC(sub_83B8A4A4);
PPC_FUNC_IMPL(__imp__sub_83B8A4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A4A8"))) PPC_WEAK_FUNC(sub_83B8A4A8);
PPC_FUNC_IMPL(__imp__sub_83B8A4A8) {
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
	// addi r3,r11,-10276
	ctx.r3.s64 = ctx.r11.s64 + -10276;
	// bl 0x83523120
	ctx.lr = 0x83B8A4C0;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-12320
	ctx.r3.s64 = ctx.r10.s64 + -12320;
	// bl 0x831cdcc8
	ctx.lr = 0x83B8A4CC;
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

__attribute__((alias("__imp__sub_83B8A4DC"))) PPC_WEAK_FUNC(sub_83B8A4DC);
PPC_FUNC_IMPL(__imp__sub_83B8A4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A4E0"))) PPC_WEAK_FUNC(sub_83B8A4E0);
PPC_FUNC_IMPL(__imp__sub_83B8A4E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-10272
	ctx.r7.s64 = ctx.r8.s64 + -10272;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-10272(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10272);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-10272(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10272, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B8A508"))) PPC_WEAK_FUNC(sub_83B8A508);
PPC_FUNC_IMPL(__imp__sub_83B8A508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12304
	ctx.r3.s64 = ctx.r11.s64 + -12304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A514"))) PPC_WEAK_FUNC(sub_83B8A514);
PPC_FUNC_IMPL(__imp__sub_83B8A514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A518"))) PPC_WEAK_FUNC(sub_83B8A518);
PPC_FUNC_IMPL(__imp__sub_83B8A518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12296
	ctx.r3.s64 = ctx.r11.s64 + -12296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A524"))) PPC_WEAK_FUNC(sub_83B8A524);
PPC_FUNC_IMPL(__imp__sub_83B8A524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A528"))) PPC_WEAK_FUNC(sub_83B8A528);
PPC_FUNC_IMPL(__imp__sub_83B8A528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12288
	ctx.r3.s64 = ctx.r11.s64 + -12288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A534"))) PPC_WEAK_FUNC(sub_83B8A534);
PPC_FUNC_IMPL(__imp__sub_83B8A534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A538"))) PPC_WEAK_FUNC(sub_83B8A538);
PPC_FUNC_IMPL(__imp__sub_83B8A538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12280
	ctx.r3.s64 = ctx.r11.s64 + -12280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A544"))) PPC_WEAK_FUNC(sub_83B8A544);
PPC_FUNC_IMPL(__imp__sub_83B8A544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A548"))) PPC_WEAK_FUNC(sub_83B8A548);
PPC_FUNC_IMPL(__imp__sub_83B8A548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12272
	ctx.r3.s64 = ctx.r11.s64 + -12272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A554"))) PPC_WEAK_FUNC(sub_83B8A554);
PPC_FUNC_IMPL(__imp__sub_83B8A554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A558"))) PPC_WEAK_FUNC(sub_83B8A558);
PPC_FUNC_IMPL(__imp__sub_83B8A558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12264
	ctx.r3.s64 = ctx.r11.s64 + -12264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A564"))) PPC_WEAK_FUNC(sub_83B8A564);
PPC_FUNC_IMPL(__imp__sub_83B8A564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A568"))) PPC_WEAK_FUNC(sub_83B8A568);
PPC_FUNC_IMPL(__imp__sub_83B8A568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12256
	ctx.r3.s64 = ctx.r11.s64 + -12256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A574"))) PPC_WEAK_FUNC(sub_83B8A574);
PPC_FUNC_IMPL(__imp__sub_83B8A574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A578"))) PPC_WEAK_FUNC(sub_83B8A578);
PPC_FUNC_IMPL(__imp__sub_83B8A578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12248
	ctx.r3.s64 = ctx.r11.s64 + -12248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A584"))) PPC_WEAK_FUNC(sub_83B8A584);
PPC_FUNC_IMPL(__imp__sub_83B8A584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A588"))) PPC_WEAK_FUNC(sub_83B8A588);
PPC_FUNC_IMPL(__imp__sub_83B8A588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12240
	ctx.r3.s64 = ctx.r11.s64 + -12240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A594"))) PPC_WEAK_FUNC(sub_83B8A594);
PPC_FUNC_IMPL(__imp__sub_83B8A594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A598"))) PPC_WEAK_FUNC(sub_83B8A598);
PPC_FUNC_IMPL(__imp__sub_83B8A598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12232
	ctx.r3.s64 = ctx.r11.s64 + -12232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A5A4"))) PPC_WEAK_FUNC(sub_83B8A5A4);
PPC_FUNC_IMPL(__imp__sub_83B8A5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A5A8"))) PPC_WEAK_FUNC(sub_83B8A5A8);
PPC_FUNC_IMPL(__imp__sub_83B8A5A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12224
	ctx.r3.s64 = ctx.r11.s64 + -12224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A5B4"))) PPC_WEAK_FUNC(sub_83B8A5B4);
PPC_FUNC_IMPL(__imp__sub_83B8A5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A5B8"))) PPC_WEAK_FUNC(sub_83B8A5B8);
PPC_FUNC_IMPL(__imp__sub_83B8A5B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12216
	ctx.r3.s64 = ctx.r11.s64 + -12216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A5C4"))) PPC_WEAK_FUNC(sub_83B8A5C4);
PPC_FUNC_IMPL(__imp__sub_83B8A5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A5C8"))) PPC_WEAK_FUNC(sub_83B8A5C8);
PPC_FUNC_IMPL(__imp__sub_83B8A5C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-10200
	ctx.r7.s64 = ctx.r8.s64 + -10200;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-10200(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10200);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-10200(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10200, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B8A5F0"))) PPC_WEAK_FUNC(sub_83B8A5F0);
PPC_FUNC_IMPL(__imp__sub_83B8A5F0) {
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
	// addi r3,r11,-10204
	ctx.r3.s64 = ctx.r11.s64 + -10204;
	// bl 0x83523120
	ctx.lr = 0x83B8A608;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-12208
	ctx.r3.s64 = ctx.r10.s64 + -12208;
	// bl 0x831cdcc8
	ctx.lr = 0x83B8A614;
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

__attribute__((alias("__imp__sub_83B8A624"))) PPC_WEAK_FUNC(sub_83B8A624);
PPC_FUNC_IMPL(__imp__sub_83B8A624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A628"))) PPC_WEAK_FUNC(sub_83B8A628);
PPC_FUNC_IMPL(__imp__sub_83B8A628) {
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
	// addi r3,r11,-10192
	ctx.r3.s64 = ctx.r11.s64 + -10192;
	// bl 0x82a5c280
	ctx.lr = 0x83B8A640;
	sub_82A5C280(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-12192
	ctx.r3.s64 = ctx.r10.s64 + -12192;
	// bl 0x831cdcc8
	ctx.lr = 0x83B8A64C;
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

__attribute__((alias("__imp__sub_83B8A65C"))) PPC_WEAK_FUNC(sub_83B8A65C);
PPC_FUNC_IMPL(__imp__sub_83B8A65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A660"))) PPC_WEAK_FUNC(sub_83B8A660);
PPC_FUNC_IMPL(__imp__sub_83B8A660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	uint32_t ea{};
	// li r10,55
	ctx.r10.s64 = 55;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r11,r11,-10160
	ctx.r11.s64 = ctx.r11.s64 + -10160;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
loc_83B8A67C:
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfsu f0,12(r11)
	ea = 12 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83b8a67c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83B8A67C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B8A690"))) PPC_WEAK_FUNC(sub_83B8A690);
PPC_FUNC_IMPL(__imp__sub_83B8A690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12176
	ctx.r3.s64 = ctx.r11.s64 + -12176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A69C"))) PPC_WEAK_FUNC(sub_83B8A69C);
PPC_FUNC_IMPL(__imp__sub_83B8A69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A6A0"))) PPC_WEAK_FUNC(sub_83B8A6A0);
PPC_FUNC_IMPL(__imp__sub_83B8A6A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12168
	ctx.r3.s64 = ctx.r11.s64 + -12168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A6AC"))) PPC_WEAK_FUNC(sub_83B8A6AC);
PPC_FUNC_IMPL(__imp__sub_83B8A6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A6B0"))) PPC_WEAK_FUNC(sub_83B8A6B0);
PPC_FUNC_IMPL(__imp__sub_83B8A6B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12160
	ctx.r3.s64 = ctx.r11.s64 + -12160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A6BC"))) PPC_WEAK_FUNC(sub_83B8A6BC);
PPC_FUNC_IMPL(__imp__sub_83B8A6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A6C0"))) PPC_WEAK_FUNC(sub_83B8A6C0);
PPC_FUNC_IMPL(__imp__sub_83B8A6C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12152
	ctx.r3.s64 = ctx.r11.s64 + -12152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A6CC"))) PPC_WEAK_FUNC(sub_83B8A6CC);
PPC_FUNC_IMPL(__imp__sub_83B8A6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A6D0"))) PPC_WEAK_FUNC(sub_83B8A6D0);
PPC_FUNC_IMPL(__imp__sub_83B8A6D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12144
	ctx.r3.s64 = ctx.r11.s64 + -12144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A6DC"))) PPC_WEAK_FUNC(sub_83B8A6DC);
PPC_FUNC_IMPL(__imp__sub_83B8A6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A6E0"))) PPC_WEAK_FUNC(sub_83B8A6E0);
PPC_FUNC_IMPL(__imp__sub_83B8A6E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12136
	ctx.r3.s64 = ctx.r11.s64 + -12136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A6EC"))) PPC_WEAK_FUNC(sub_83B8A6EC);
PPC_FUNC_IMPL(__imp__sub_83B8A6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A6F0"))) PPC_WEAK_FUNC(sub_83B8A6F0);
PPC_FUNC_IMPL(__imp__sub_83B8A6F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12128
	ctx.r3.s64 = ctx.r11.s64 + -12128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A6FC"))) PPC_WEAK_FUNC(sub_83B8A6FC);
PPC_FUNC_IMPL(__imp__sub_83B8A6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A700"))) PPC_WEAK_FUNC(sub_83B8A700);
PPC_FUNC_IMPL(__imp__sub_83B8A700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12120
	ctx.r3.s64 = ctx.r11.s64 + -12120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A70C"))) PPC_WEAK_FUNC(sub_83B8A70C);
PPC_FUNC_IMPL(__imp__sub_83B8A70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A710"))) PPC_WEAK_FUNC(sub_83B8A710);
PPC_FUNC_IMPL(__imp__sub_83B8A710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12112
	ctx.r3.s64 = ctx.r11.s64 + -12112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A71C"))) PPC_WEAK_FUNC(sub_83B8A71C);
PPC_FUNC_IMPL(__imp__sub_83B8A71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A720"))) PPC_WEAK_FUNC(sub_83B8A720);
PPC_FUNC_IMPL(__imp__sub_83B8A720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12104
	ctx.r3.s64 = ctx.r11.s64 + -12104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A72C"))) PPC_WEAK_FUNC(sub_83B8A72C);
PPC_FUNC_IMPL(__imp__sub_83B8A72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A730"))) PPC_WEAK_FUNC(sub_83B8A730);
PPC_FUNC_IMPL(__imp__sub_83B8A730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12096
	ctx.r3.s64 = ctx.r11.s64 + -12096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A73C"))) PPC_WEAK_FUNC(sub_83B8A73C);
PPC_FUNC_IMPL(__imp__sub_83B8A73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A740"))) PPC_WEAK_FUNC(sub_83B8A740);
PPC_FUNC_IMPL(__imp__sub_83B8A740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12088
	ctx.r3.s64 = ctx.r11.s64 + -12088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A74C"))) PPC_WEAK_FUNC(sub_83B8A74C);
PPC_FUNC_IMPL(__imp__sub_83B8A74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A750"))) PPC_WEAK_FUNC(sub_83B8A750);
PPC_FUNC_IMPL(__imp__sub_83B8A750) {
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
	// addi r3,r11,-9500
	ctx.r3.s64 = ctx.r11.s64 + -9500;
	// bl 0x83523120
	ctx.lr = 0x83B8A768;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-12080
	ctx.r3.s64 = ctx.r10.s64 + -12080;
	// bl 0x831cdcc8
	ctx.lr = 0x83B8A774;
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

__attribute__((alias("__imp__sub_83B8A784"))) PPC_WEAK_FUNC(sub_83B8A784);
PPC_FUNC_IMPL(__imp__sub_83B8A784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A788"))) PPC_WEAK_FUNC(sub_83B8A788);
PPC_FUNC_IMPL(__imp__sub_83B8A788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12064
	ctx.r3.s64 = ctx.r11.s64 + -12064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A794"))) PPC_WEAK_FUNC(sub_83B8A794);
PPC_FUNC_IMPL(__imp__sub_83B8A794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A798"))) PPC_WEAK_FUNC(sub_83B8A798);
PPC_FUNC_IMPL(__imp__sub_83B8A798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12056
	ctx.r3.s64 = ctx.r11.s64 + -12056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A7A4"))) PPC_WEAK_FUNC(sub_83B8A7A4);
PPC_FUNC_IMPL(__imp__sub_83B8A7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A7A8"))) PPC_WEAK_FUNC(sub_83B8A7A8);
PPC_FUNC_IMPL(__imp__sub_83B8A7A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12048
	ctx.r3.s64 = ctx.r11.s64 + -12048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A7B4"))) PPC_WEAK_FUNC(sub_83B8A7B4);
PPC_FUNC_IMPL(__imp__sub_83B8A7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A7B8"))) PPC_WEAK_FUNC(sub_83B8A7B8);
PPC_FUNC_IMPL(__imp__sub_83B8A7B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12040
	ctx.r3.s64 = ctx.r11.s64 + -12040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A7C4"))) PPC_WEAK_FUNC(sub_83B8A7C4);
PPC_FUNC_IMPL(__imp__sub_83B8A7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A7C8"))) PPC_WEAK_FUNC(sub_83B8A7C8);
PPC_FUNC_IMPL(__imp__sub_83B8A7C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12032
	ctx.r3.s64 = ctx.r11.s64 + -12032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A7D4"))) PPC_WEAK_FUNC(sub_83B8A7D4);
PPC_FUNC_IMPL(__imp__sub_83B8A7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A7D8"))) PPC_WEAK_FUNC(sub_83B8A7D8);
PPC_FUNC_IMPL(__imp__sub_83B8A7D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12024
	ctx.r3.s64 = ctx.r11.s64 + -12024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A7E4"))) PPC_WEAK_FUNC(sub_83B8A7E4);
PPC_FUNC_IMPL(__imp__sub_83B8A7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A7E8"))) PPC_WEAK_FUNC(sub_83B8A7E8);
PPC_FUNC_IMPL(__imp__sub_83B8A7E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12016
	ctx.r3.s64 = ctx.r11.s64 + -12016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A7F4"))) PPC_WEAK_FUNC(sub_83B8A7F4);
PPC_FUNC_IMPL(__imp__sub_83B8A7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A7F8"))) PPC_WEAK_FUNC(sub_83B8A7F8);
PPC_FUNC_IMPL(__imp__sub_83B8A7F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12008
	ctx.r3.s64 = ctx.r11.s64 + -12008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A804"))) PPC_WEAK_FUNC(sub_83B8A804);
PPC_FUNC_IMPL(__imp__sub_83B8A804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A808"))) PPC_WEAK_FUNC(sub_83B8A808);
PPC_FUNC_IMPL(__imp__sub_83B8A808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-12000
	ctx.r3.s64 = ctx.r11.s64 + -12000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A814"))) PPC_WEAK_FUNC(sub_83B8A814);
PPC_FUNC_IMPL(__imp__sub_83B8A814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A818"))) PPC_WEAK_FUNC(sub_83B8A818);
PPC_FUNC_IMPL(__imp__sub_83B8A818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11992
	ctx.r3.s64 = ctx.r11.s64 + -11992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A824"))) PPC_WEAK_FUNC(sub_83B8A824);
PPC_FUNC_IMPL(__imp__sub_83B8A824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A828"))) PPC_WEAK_FUNC(sub_83B8A828);
PPC_FUNC_IMPL(__imp__sub_83B8A828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11984
	ctx.r3.s64 = ctx.r11.s64 + -11984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A834"))) PPC_WEAK_FUNC(sub_83B8A834);
PPC_FUNC_IMPL(__imp__sub_83B8A834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A838"))) PPC_WEAK_FUNC(sub_83B8A838);
PPC_FUNC_IMPL(__imp__sub_83B8A838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11976
	ctx.r3.s64 = ctx.r11.s64 + -11976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A844"))) PPC_WEAK_FUNC(sub_83B8A844);
PPC_FUNC_IMPL(__imp__sub_83B8A844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A848"))) PPC_WEAK_FUNC(sub_83B8A848);
PPC_FUNC_IMPL(__imp__sub_83B8A848) {
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
	// addi r3,r11,-9488
	ctx.r3.s64 = ctx.r11.s64 + -9488;
	// bl 0x83523120
	ctx.lr = 0x83B8A860;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-11968
	ctx.r3.s64 = ctx.r10.s64 + -11968;
	// bl 0x831cdcc8
	ctx.lr = 0x83B8A86C;
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

__attribute__((alias("__imp__sub_83B8A87C"))) PPC_WEAK_FUNC(sub_83B8A87C);
PPC_FUNC_IMPL(__imp__sub_83B8A87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A880"))) PPC_WEAK_FUNC(sub_83B8A880);
PPC_FUNC_IMPL(__imp__sub_83B8A880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31778
	ctx.r11.s64 = -2082603008;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-31604
	ctx.r31.s64 = ctx.r11.s64 + -31604;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x828f7960
	ctx.lr = 0x83B8A8A8;
	sub_828F7960(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stb r9,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r9.u8);
	// bl 0x828fab88
	ctx.lr = 0x83B8A8D8;
	sub_828FAB88(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-11952
	ctx.r3.s64 = ctx.r10.s64 + -11952;
	// bl 0x831cdcc8
	ctx.lr = 0x83B8A8E4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B8A8F8"))) PPC_WEAK_FUNC(sub_83B8A8F8);
PPC_FUNC_IMPL(__imp__sub_83B8A8F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11936
	ctx.r3.s64 = ctx.r11.s64 + -11936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A904"))) PPC_WEAK_FUNC(sub_83B8A904);
PPC_FUNC_IMPL(__imp__sub_83B8A904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A908"))) PPC_WEAK_FUNC(sub_83B8A908);
PPC_FUNC_IMPL(__imp__sub_83B8A908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11928
	ctx.r3.s64 = ctx.r11.s64 + -11928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A914"))) PPC_WEAK_FUNC(sub_83B8A914);
PPC_FUNC_IMPL(__imp__sub_83B8A914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A918"))) PPC_WEAK_FUNC(sub_83B8A918);
PPC_FUNC_IMPL(__imp__sub_83B8A918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11920
	ctx.r3.s64 = ctx.r11.s64 + -11920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A924"))) PPC_WEAK_FUNC(sub_83B8A924);
PPC_FUNC_IMPL(__imp__sub_83B8A924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A928"))) PPC_WEAK_FUNC(sub_83B8A928);
PPC_FUNC_IMPL(__imp__sub_83B8A928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11912
	ctx.r3.s64 = ctx.r11.s64 + -11912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A934"))) PPC_WEAK_FUNC(sub_83B8A934);
PPC_FUNC_IMPL(__imp__sub_83B8A934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A938"))) PPC_WEAK_FUNC(sub_83B8A938);
PPC_FUNC_IMPL(__imp__sub_83B8A938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11904
	ctx.r3.s64 = ctx.r11.s64 + -11904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A944"))) PPC_WEAK_FUNC(sub_83B8A944);
PPC_FUNC_IMPL(__imp__sub_83B8A944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A948"))) PPC_WEAK_FUNC(sub_83B8A948);
PPC_FUNC_IMPL(__imp__sub_83B8A948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11896
	ctx.r3.s64 = ctx.r11.s64 + -11896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A954"))) PPC_WEAK_FUNC(sub_83B8A954);
PPC_FUNC_IMPL(__imp__sub_83B8A954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A958"))) PPC_WEAK_FUNC(sub_83B8A958);
PPC_FUNC_IMPL(__imp__sub_83B8A958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11888
	ctx.r3.s64 = ctx.r11.s64 + -11888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A964"))) PPC_WEAK_FUNC(sub_83B8A964);
PPC_FUNC_IMPL(__imp__sub_83B8A964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A968"))) PPC_WEAK_FUNC(sub_83B8A968);
PPC_FUNC_IMPL(__imp__sub_83B8A968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11880
	ctx.r3.s64 = ctx.r11.s64 + -11880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A974"))) PPC_WEAK_FUNC(sub_83B8A974);
PPC_FUNC_IMPL(__imp__sub_83B8A974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A978"))) PPC_WEAK_FUNC(sub_83B8A978);
PPC_FUNC_IMPL(__imp__sub_83B8A978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11872
	ctx.r3.s64 = ctx.r11.s64 + -11872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A984"))) PPC_WEAK_FUNC(sub_83B8A984);
PPC_FUNC_IMPL(__imp__sub_83B8A984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A988"))) PPC_WEAK_FUNC(sub_83B8A988);
PPC_FUNC_IMPL(__imp__sub_83B8A988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11864
	ctx.r3.s64 = ctx.r11.s64 + -11864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A994"))) PPC_WEAK_FUNC(sub_83B8A994);
PPC_FUNC_IMPL(__imp__sub_83B8A994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A998"))) PPC_WEAK_FUNC(sub_83B8A998);
PPC_FUNC_IMPL(__imp__sub_83B8A998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11856
	ctx.r3.s64 = ctx.r11.s64 + -11856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A9A4"))) PPC_WEAK_FUNC(sub_83B8A9A4);
PPC_FUNC_IMPL(__imp__sub_83B8A9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A9A8"))) PPC_WEAK_FUNC(sub_83B8A9A8);
PPC_FUNC_IMPL(__imp__sub_83B8A9A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11848
	ctx.r3.s64 = ctx.r11.s64 + -11848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A9B4"))) PPC_WEAK_FUNC(sub_83B8A9B4);
PPC_FUNC_IMPL(__imp__sub_83B8A9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A9B8"))) PPC_WEAK_FUNC(sub_83B8A9B8);
PPC_FUNC_IMPL(__imp__sub_83B8A9B8) {
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
	// addi r3,r11,-9480
	ctx.r3.s64 = ctx.r11.s64 + -9480;
	// bl 0x83523120
	ctx.lr = 0x83B8A9D0;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-11840
	ctx.r3.s64 = ctx.r10.s64 + -11840;
	// bl 0x831cdcc8
	ctx.lr = 0x83B8A9DC;
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

__attribute__((alias("__imp__sub_83B8A9EC"))) PPC_WEAK_FUNC(sub_83B8A9EC);
PPC_FUNC_IMPL(__imp__sub_83B8A9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8A9F0"))) PPC_WEAK_FUNC(sub_83B8A9F0);
PPC_FUNC_IMPL(__imp__sub_83B8A9F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11824
	ctx.r3.s64 = ctx.r11.s64 + -11824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8A9FC"))) PPC_WEAK_FUNC(sub_83B8A9FC);
PPC_FUNC_IMPL(__imp__sub_83B8A9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AA00"))) PPC_WEAK_FUNC(sub_83B8AA00);
PPC_FUNC_IMPL(__imp__sub_83B8AA00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11816
	ctx.r3.s64 = ctx.r11.s64 + -11816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8AA0C"))) PPC_WEAK_FUNC(sub_83B8AA0C);
PPC_FUNC_IMPL(__imp__sub_83B8AA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AA10"))) PPC_WEAK_FUNC(sub_83B8AA10);
PPC_FUNC_IMPL(__imp__sub_83B8AA10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11808
	ctx.r3.s64 = ctx.r11.s64 + -11808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8AA1C"))) PPC_WEAK_FUNC(sub_83B8AA1C);
PPC_FUNC_IMPL(__imp__sub_83B8AA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AA20"))) PPC_WEAK_FUNC(sub_83B8AA20);
PPC_FUNC_IMPL(__imp__sub_83B8AA20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11800
	ctx.r3.s64 = ctx.r11.s64 + -11800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8AA2C"))) PPC_WEAK_FUNC(sub_83B8AA2C);
PPC_FUNC_IMPL(__imp__sub_83B8AA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AA30"))) PPC_WEAK_FUNC(sub_83B8AA30);
PPC_FUNC_IMPL(__imp__sub_83B8AA30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11792
	ctx.r3.s64 = ctx.r11.s64 + -11792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8AA3C"))) PPC_WEAK_FUNC(sub_83B8AA3C);
PPC_FUNC_IMPL(__imp__sub_83B8AA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AA40"))) PPC_WEAK_FUNC(sub_83B8AA40);
PPC_FUNC_IMPL(__imp__sub_83B8AA40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11784
	ctx.r3.s64 = ctx.r11.s64 + -11784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8AA4C"))) PPC_WEAK_FUNC(sub_83B8AA4C);
PPC_FUNC_IMPL(__imp__sub_83B8AA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AA50"))) PPC_WEAK_FUNC(sub_83B8AA50);
PPC_FUNC_IMPL(__imp__sub_83B8AA50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11776
	ctx.r3.s64 = ctx.r11.s64 + -11776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8AA5C"))) PPC_WEAK_FUNC(sub_83B8AA5C);
PPC_FUNC_IMPL(__imp__sub_83B8AA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AA60"))) PPC_WEAK_FUNC(sub_83B8AA60);
PPC_FUNC_IMPL(__imp__sub_83B8AA60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11768
	ctx.r3.s64 = ctx.r11.s64 + -11768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8AA6C"))) PPC_WEAK_FUNC(sub_83B8AA6C);
PPC_FUNC_IMPL(__imp__sub_83B8AA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AA70"))) PPC_WEAK_FUNC(sub_83B8AA70);
PPC_FUNC_IMPL(__imp__sub_83B8AA70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11760
	ctx.r3.s64 = ctx.r11.s64 + -11760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8AA7C"))) PPC_WEAK_FUNC(sub_83B8AA7C);
PPC_FUNC_IMPL(__imp__sub_83B8AA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AA80"))) PPC_WEAK_FUNC(sub_83B8AA80);
PPC_FUNC_IMPL(__imp__sub_83B8AA80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11752
	ctx.r3.s64 = ctx.r11.s64 + -11752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8AA8C"))) PPC_WEAK_FUNC(sub_83B8AA8C);
PPC_FUNC_IMPL(__imp__sub_83B8AA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AA90"))) PPC_WEAK_FUNC(sub_83B8AA90);
PPC_FUNC_IMPL(__imp__sub_83B8AA90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11744
	ctx.r3.s64 = ctx.r11.s64 + -11744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8AA9C"))) PPC_WEAK_FUNC(sub_83B8AA9C);
PPC_FUNC_IMPL(__imp__sub_83B8AA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AAA0"))) PPC_WEAK_FUNC(sub_83B8AAA0);
PPC_FUNC_IMPL(__imp__sub_83B8AAA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11736
	ctx.r3.s64 = ctx.r11.s64 + -11736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8AAAC"))) PPC_WEAK_FUNC(sub_83B8AAAC);
PPC_FUNC_IMPL(__imp__sub_83B8AAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AAB0"))) PPC_WEAK_FUNC(sub_83B8AAB0);
PPC_FUNC_IMPL(__imp__sub_83B8AAB0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-9464
	ctx.r7.s64 = ctx.r8.s64 + -9464;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-9464(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9464);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-9464(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9464, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B8AAD8"))) PPC_WEAK_FUNC(sub_83B8AAD8);
PPC_FUNC_IMPL(__imp__sub_83B8AAD8) {
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
	// addi r3,r11,-9468
	ctx.r3.s64 = ctx.r11.s64 + -9468;
	// bl 0x83523120
	ctx.lr = 0x83B8AAF0;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-11728
	ctx.r3.s64 = ctx.r10.s64 + -11728;
	// bl 0x831cdcc8
	ctx.lr = 0x83B8AAFC;
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

__attribute__((alias("__imp__sub_83B8AB0C"))) PPC_WEAK_FUNC(sub_83B8AB0C);
PPC_FUNC_IMPL(__imp__sub_83B8AB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AB10"))) PPC_WEAK_FUNC(sub_83B8AB10);
PPC_FUNC_IMPL(__imp__sub_83B8AB10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11712
	ctx.r3.s64 = ctx.r11.s64 + -11712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8AB1C"))) PPC_WEAK_FUNC(sub_83B8AB1C);
PPC_FUNC_IMPL(__imp__sub_83B8AB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AB20"))) PPC_WEAK_FUNC(sub_83B8AB20);
PPC_FUNC_IMPL(__imp__sub_83B8AB20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11704
	ctx.r3.s64 = ctx.r11.s64 + -11704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8AB2C"))) PPC_WEAK_FUNC(sub_83B8AB2C);
PPC_FUNC_IMPL(__imp__sub_83B8AB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AB30"))) PPC_WEAK_FUNC(sub_83B8AB30);
PPC_FUNC_IMPL(__imp__sub_83B8AB30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11696
	ctx.r3.s64 = ctx.r11.s64 + -11696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8AB3C"))) PPC_WEAK_FUNC(sub_83B8AB3C);
PPC_FUNC_IMPL(__imp__sub_83B8AB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AB40"))) PPC_WEAK_FUNC(sub_83B8AB40);
PPC_FUNC_IMPL(__imp__sub_83B8AB40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11688
	ctx.r3.s64 = ctx.r11.s64 + -11688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8AB4C"))) PPC_WEAK_FUNC(sub_83B8AB4C);
PPC_FUNC_IMPL(__imp__sub_83B8AB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8AB50"))) PPC_WEAK_FUNC(sub_83B8AB50);
PPC_FUNC_IMPL(__imp__sub_83B8AB50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-11680
	ctx.r3.s64 = ctx.r11.s64 + -11680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8AB5C"))) PPC_WEAK_FUNC(sub_83B8AB5C);
PPC_FUNC_IMPL(__imp__sub_83B8AB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

