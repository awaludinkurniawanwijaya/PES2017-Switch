#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C7F054"))) PPC_WEAK_FUNC(sub_83C7F054);
PPC_FUNC_IMPL(__imp__sub_83C7F054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F058"))) PPC_WEAK_FUNC(sub_83C7F058);
PPC_FUNC_IMPL(__imp__sub_83C7F058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11624
	ctx.r3.s64 = ctx.r11.s64 + -11624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F064"))) PPC_WEAK_FUNC(sub_83C7F064);
PPC_FUNC_IMPL(__imp__sub_83C7F064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F068"))) PPC_WEAK_FUNC(sub_83C7F068);
PPC_FUNC_IMPL(__imp__sub_83C7F068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11616
	ctx.r3.s64 = ctx.r11.s64 + -11616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F074"))) PPC_WEAK_FUNC(sub_83C7F074);
PPC_FUNC_IMPL(__imp__sub_83C7F074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F078"))) PPC_WEAK_FUNC(sub_83C7F078);
PPC_FUNC_IMPL(__imp__sub_83C7F078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11608
	ctx.r3.s64 = ctx.r11.s64 + -11608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F084"))) PPC_WEAK_FUNC(sub_83C7F084);
PPC_FUNC_IMPL(__imp__sub_83C7F084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F088"))) PPC_WEAK_FUNC(sub_83C7F088);
PPC_FUNC_IMPL(__imp__sub_83C7F088) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,17136
	ctx.r3.s64 = ctx.r11.s64 + 17136;
	// bl 0x83523120
	ctx.lr = 0x83C7F0A0;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-11600
	ctx.r3.s64 = ctx.r10.s64 + -11600;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7F0AC;
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

__attribute__((alias("__imp__sub_83C7F0BC"))) PPC_WEAK_FUNC(sub_83C7F0BC);
PPC_FUNC_IMPL(__imp__sub_83C7F0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F0C0"))) PPC_WEAK_FUNC(sub_83C7F0C0);
PPC_FUNC_IMPL(__imp__sub_83C7F0C0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,17152
	ctx.r7.s64 = ctx.r8.s64 + 17152;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,17152(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17152);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,17152(r8)
	PPC_STORE_U32(ctx.r8.u32 + 17152, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C7F0E8"))) PPC_WEAK_FUNC(sub_83C7F0E8);
PPC_FUNC_IMPL(__imp__sub_83C7F0E8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,8440
	ctx.r6.s64 = ctx.r7.s64 + 8440;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,8368(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8368);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,17152(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 17152);
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
	// std r9,8440(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8440, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C7F130"))) PPC_WEAK_FUNC(sub_83C7F130);
PPC_FUNC_IMPL(__imp__sub_83C7F130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11584
	ctx.r3.s64 = ctx.r11.s64 + -11584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F13C"))) PPC_WEAK_FUNC(sub_83C7F13C);
PPC_FUNC_IMPL(__imp__sub_83C7F13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F140"))) PPC_WEAK_FUNC(sub_83C7F140);
PPC_FUNC_IMPL(__imp__sub_83C7F140) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,17160
	ctx.r3.s64 = ctx.r11.s64 + 17160;
	// bl 0x8259af80
	ctx.lr = 0x83C7F158;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-11568
	ctx.r3.s64 = ctx.r10.s64 + -11568;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7F164;
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

__attribute__((alias("__imp__sub_83C7F174"))) PPC_WEAK_FUNC(sub_83C7F174);
PPC_FUNC_IMPL(__imp__sub_83C7F174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F178"))) PPC_WEAK_FUNC(sub_83C7F178);
PPC_FUNC_IMPL(__imp__sub_83C7F178) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,17140
	ctx.r11.s64 = ctx.r8.s64 + 17140;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,8416(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8416);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-11576
	ctx.r3.s64 = ctx.r6.s64 + -11576;
	// stw r10,17140(r8)
	PPC_STORE_U32(ctx.r8.u32 + 17140, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F1A8"))) PPC_WEAK_FUNC(sub_83C7F1A8);
PPC_FUNC_IMPL(__imp__sub_83C7F1A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11560
	ctx.r3.s64 = ctx.r11.s64 + -11560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F1B4"))) PPC_WEAK_FUNC(sub_83C7F1B4);
PPC_FUNC_IMPL(__imp__sub_83C7F1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F1B8"))) PPC_WEAK_FUNC(sub_83C7F1B8);
PPC_FUNC_IMPL(__imp__sub_83C7F1B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11552
	ctx.r3.s64 = ctx.r11.s64 + -11552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F1C4"))) PPC_WEAK_FUNC(sub_83C7F1C4);
PPC_FUNC_IMPL(__imp__sub_83C7F1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F1C8"))) PPC_WEAK_FUNC(sub_83C7F1C8);
PPC_FUNC_IMPL(__imp__sub_83C7F1C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11544
	ctx.r3.s64 = ctx.r11.s64 + -11544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F1D4"))) PPC_WEAK_FUNC(sub_83C7F1D4);
PPC_FUNC_IMPL(__imp__sub_83C7F1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F1D8"))) PPC_WEAK_FUNC(sub_83C7F1D8);
PPC_FUNC_IMPL(__imp__sub_83C7F1D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11536
	ctx.r3.s64 = ctx.r11.s64 + -11536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F1E4"))) PPC_WEAK_FUNC(sub_83C7F1E4);
PPC_FUNC_IMPL(__imp__sub_83C7F1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F1E8"))) PPC_WEAK_FUNC(sub_83C7F1E8);
PPC_FUNC_IMPL(__imp__sub_83C7F1E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11528
	ctx.r3.s64 = ctx.r11.s64 + -11528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F1F4"))) PPC_WEAK_FUNC(sub_83C7F1F4);
PPC_FUNC_IMPL(__imp__sub_83C7F1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F1F8"))) PPC_WEAK_FUNC(sub_83C7F1F8);
PPC_FUNC_IMPL(__imp__sub_83C7F1F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11520
	ctx.r3.s64 = ctx.r11.s64 + -11520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F204"))) PPC_WEAK_FUNC(sub_83C7F204);
PPC_FUNC_IMPL(__imp__sub_83C7F204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F208"))) PPC_WEAK_FUNC(sub_83C7F208);
PPC_FUNC_IMPL(__imp__sub_83C7F208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11512
	ctx.r3.s64 = ctx.r11.s64 + -11512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F214"))) PPC_WEAK_FUNC(sub_83C7F214);
PPC_FUNC_IMPL(__imp__sub_83C7F214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F218"))) PPC_WEAK_FUNC(sub_83C7F218);
PPC_FUNC_IMPL(__imp__sub_83C7F218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11504
	ctx.r3.s64 = ctx.r11.s64 + -11504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F224"))) PPC_WEAK_FUNC(sub_83C7F224);
PPC_FUNC_IMPL(__imp__sub_83C7F224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F228"))) PPC_WEAK_FUNC(sub_83C7F228);
PPC_FUNC_IMPL(__imp__sub_83C7F228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11496
	ctx.r3.s64 = ctx.r11.s64 + -11496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F234"))) PPC_WEAK_FUNC(sub_83C7F234);
PPC_FUNC_IMPL(__imp__sub_83C7F234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F238"))) PPC_WEAK_FUNC(sub_83C7F238);
PPC_FUNC_IMPL(__imp__sub_83C7F238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11488
	ctx.r3.s64 = ctx.r11.s64 + -11488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F244"))) PPC_WEAK_FUNC(sub_83C7F244);
PPC_FUNC_IMPL(__imp__sub_83C7F244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F248"))) PPC_WEAK_FUNC(sub_83C7F248);
PPC_FUNC_IMPL(__imp__sub_83C7F248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11480
	ctx.r3.s64 = ctx.r11.s64 + -11480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F254"))) PPC_WEAK_FUNC(sub_83C7F254);
PPC_FUNC_IMPL(__imp__sub_83C7F254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F258"))) PPC_WEAK_FUNC(sub_83C7F258);
PPC_FUNC_IMPL(__imp__sub_83C7F258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11472
	ctx.r3.s64 = ctx.r11.s64 + -11472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F264"))) PPC_WEAK_FUNC(sub_83C7F264);
PPC_FUNC_IMPL(__imp__sub_83C7F264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F268"))) PPC_WEAK_FUNC(sub_83C7F268);
PPC_FUNC_IMPL(__imp__sub_83C7F268) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,17504
	ctx.r3.s64 = ctx.r11.s64 + 17504;
	// bl 0x83523120
	ctx.lr = 0x83C7F280;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-11464
	ctx.r3.s64 = ctx.r10.s64 + -11464;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7F28C;
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

__attribute__((alias("__imp__sub_83C7F29C"))) PPC_WEAK_FUNC(sub_83C7F29C);
PPC_FUNC_IMPL(__imp__sub_83C7F29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F2A0"))) PPC_WEAK_FUNC(sub_83C7F2A0);
PPC_FUNC_IMPL(__imp__sub_83C7F2A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,17520
	ctx.r7.s64 = ctx.r8.s64 + 17520;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,17520(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17520);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,17520(r8)
	PPC_STORE_U32(ctx.r8.u32 + 17520, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C7F2C8"))) PPC_WEAK_FUNC(sub_83C7F2C8);
PPC_FUNC_IMPL(__imp__sub_83C7F2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,8568
	ctx.r6.s64 = ctx.r7.s64 + 8568;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,8496(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8496);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,17520(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 17520);
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
	// std r9,8568(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8568, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C7F310"))) PPC_WEAK_FUNC(sub_83C7F310);
PPC_FUNC_IMPL(__imp__sub_83C7F310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11448
	ctx.r3.s64 = ctx.r11.s64 + -11448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F31C"))) PPC_WEAK_FUNC(sub_83C7F31C);
PPC_FUNC_IMPL(__imp__sub_83C7F31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F320"))) PPC_WEAK_FUNC(sub_83C7F320);
PPC_FUNC_IMPL(__imp__sub_83C7F320) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,17528
	ctx.r3.s64 = ctx.r11.s64 + 17528;
	// bl 0x8259af80
	ctx.lr = 0x83C7F338;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-11432
	ctx.r3.s64 = ctx.r10.s64 + -11432;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7F344;
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

__attribute__((alias("__imp__sub_83C7F354"))) PPC_WEAK_FUNC(sub_83C7F354);
PPC_FUNC_IMPL(__imp__sub_83C7F354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F358"))) PPC_WEAK_FUNC(sub_83C7F358);
PPC_FUNC_IMPL(__imp__sub_83C7F358) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,17508
	ctx.r11.s64 = ctx.r8.s64 + 17508;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,8544(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8544);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-11440
	ctx.r3.s64 = ctx.r6.s64 + -11440;
	// stw r10,17508(r8)
	PPC_STORE_U32(ctx.r8.u32 + 17508, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F388"))) PPC_WEAK_FUNC(sub_83C7F388);
PPC_FUNC_IMPL(__imp__sub_83C7F388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11424
	ctx.r3.s64 = ctx.r11.s64 + -11424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F394"))) PPC_WEAK_FUNC(sub_83C7F394);
PPC_FUNC_IMPL(__imp__sub_83C7F394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F398"))) PPC_WEAK_FUNC(sub_83C7F398);
PPC_FUNC_IMPL(__imp__sub_83C7F398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11416
	ctx.r3.s64 = ctx.r11.s64 + -11416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F3A4"))) PPC_WEAK_FUNC(sub_83C7F3A4);
PPC_FUNC_IMPL(__imp__sub_83C7F3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F3A8"))) PPC_WEAK_FUNC(sub_83C7F3A8);
PPC_FUNC_IMPL(__imp__sub_83C7F3A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11408
	ctx.r3.s64 = ctx.r11.s64 + -11408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F3B4"))) PPC_WEAK_FUNC(sub_83C7F3B4);
PPC_FUNC_IMPL(__imp__sub_83C7F3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F3B8"))) PPC_WEAK_FUNC(sub_83C7F3B8);
PPC_FUNC_IMPL(__imp__sub_83C7F3B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11400
	ctx.r3.s64 = ctx.r11.s64 + -11400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F3C4"))) PPC_WEAK_FUNC(sub_83C7F3C4);
PPC_FUNC_IMPL(__imp__sub_83C7F3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F3C8"))) PPC_WEAK_FUNC(sub_83C7F3C8);
PPC_FUNC_IMPL(__imp__sub_83C7F3C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11392
	ctx.r3.s64 = ctx.r11.s64 + -11392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F3D4"))) PPC_WEAK_FUNC(sub_83C7F3D4);
PPC_FUNC_IMPL(__imp__sub_83C7F3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F3D8"))) PPC_WEAK_FUNC(sub_83C7F3D8);
PPC_FUNC_IMPL(__imp__sub_83C7F3D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11384
	ctx.r3.s64 = ctx.r11.s64 + -11384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F3E4"))) PPC_WEAK_FUNC(sub_83C7F3E4);
PPC_FUNC_IMPL(__imp__sub_83C7F3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F3E8"))) PPC_WEAK_FUNC(sub_83C7F3E8);
PPC_FUNC_IMPL(__imp__sub_83C7F3E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11376
	ctx.r3.s64 = ctx.r11.s64 + -11376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F3F4"))) PPC_WEAK_FUNC(sub_83C7F3F4);
PPC_FUNC_IMPL(__imp__sub_83C7F3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F3F8"))) PPC_WEAK_FUNC(sub_83C7F3F8);
PPC_FUNC_IMPL(__imp__sub_83C7F3F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11368
	ctx.r3.s64 = ctx.r11.s64 + -11368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F404"))) PPC_WEAK_FUNC(sub_83C7F404);
PPC_FUNC_IMPL(__imp__sub_83C7F404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F408"))) PPC_WEAK_FUNC(sub_83C7F408);
PPC_FUNC_IMPL(__imp__sub_83C7F408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11360
	ctx.r3.s64 = ctx.r11.s64 + -11360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F414"))) PPC_WEAK_FUNC(sub_83C7F414);
PPC_FUNC_IMPL(__imp__sub_83C7F414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F418"))) PPC_WEAK_FUNC(sub_83C7F418);
PPC_FUNC_IMPL(__imp__sub_83C7F418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11352
	ctx.r3.s64 = ctx.r11.s64 + -11352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F424"))) PPC_WEAK_FUNC(sub_83C7F424);
PPC_FUNC_IMPL(__imp__sub_83C7F424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F428"))) PPC_WEAK_FUNC(sub_83C7F428);
PPC_FUNC_IMPL(__imp__sub_83C7F428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11344
	ctx.r3.s64 = ctx.r11.s64 + -11344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F434"))) PPC_WEAK_FUNC(sub_83C7F434);
PPC_FUNC_IMPL(__imp__sub_83C7F434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F438"))) PPC_WEAK_FUNC(sub_83C7F438);
PPC_FUNC_IMPL(__imp__sub_83C7F438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11336
	ctx.r3.s64 = ctx.r11.s64 + -11336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F444"))) PPC_WEAK_FUNC(sub_83C7F444);
PPC_FUNC_IMPL(__imp__sub_83C7F444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F448"))) PPC_WEAK_FUNC(sub_83C7F448);
PPC_FUNC_IMPL(__imp__sub_83C7F448) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,17872
	ctx.r3.s64 = ctx.r11.s64 + 17872;
	// bl 0x83523120
	ctx.lr = 0x83C7F460;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-11328
	ctx.r3.s64 = ctx.r10.s64 + -11328;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7F46C;
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

__attribute__((alias("__imp__sub_83C7F47C"))) PPC_WEAK_FUNC(sub_83C7F47C);
PPC_FUNC_IMPL(__imp__sub_83C7F47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F480"))) PPC_WEAK_FUNC(sub_83C7F480);
PPC_FUNC_IMPL(__imp__sub_83C7F480) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,17888
	ctx.r7.s64 = ctx.r8.s64 + 17888;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,17888(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17888);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,17888(r8)
	PPC_STORE_U32(ctx.r8.u32 + 17888, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C7F4A8"))) PPC_WEAK_FUNC(sub_83C7F4A8);
PPC_FUNC_IMPL(__imp__sub_83C7F4A8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,8696
	ctx.r6.s64 = ctx.r7.s64 + 8696;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,8624(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8624);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,17888(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 17888);
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
	// std r9,8696(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8696, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C7F4F0"))) PPC_WEAK_FUNC(sub_83C7F4F0);
PPC_FUNC_IMPL(__imp__sub_83C7F4F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11312
	ctx.r3.s64 = ctx.r11.s64 + -11312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F4FC"))) PPC_WEAK_FUNC(sub_83C7F4FC);
PPC_FUNC_IMPL(__imp__sub_83C7F4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F500"))) PPC_WEAK_FUNC(sub_83C7F500);
PPC_FUNC_IMPL(__imp__sub_83C7F500) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,17896
	ctx.r3.s64 = ctx.r11.s64 + 17896;
	// bl 0x8259af80
	ctx.lr = 0x83C7F518;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-11296
	ctx.r3.s64 = ctx.r10.s64 + -11296;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7F524;
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

__attribute__((alias("__imp__sub_83C7F534"))) PPC_WEAK_FUNC(sub_83C7F534);
PPC_FUNC_IMPL(__imp__sub_83C7F534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F538"))) PPC_WEAK_FUNC(sub_83C7F538);
PPC_FUNC_IMPL(__imp__sub_83C7F538) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,17876
	ctx.r11.s64 = ctx.r8.s64 + 17876;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,8672(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8672);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-11304
	ctx.r3.s64 = ctx.r6.s64 + -11304;
	// stw r10,17876(r8)
	PPC_STORE_U32(ctx.r8.u32 + 17876, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F568"))) PPC_WEAK_FUNC(sub_83C7F568);
PPC_FUNC_IMPL(__imp__sub_83C7F568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11288
	ctx.r3.s64 = ctx.r11.s64 + -11288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F574"))) PPC_WEAK_FUNC(sub_83C7F574);
PPC_FUNC_IMPL(__imp__sub_83C7F574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F578"))) PPC_WEAK_FUNC(sub_83C7F578);
PPC_FUNC_IMPL(__imp__sub_83C7F578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11280
	ctx.r3.s64 = ctx.r11.s64 + -11280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F584"))) PPC_WEAK_FUNC(sub_83C7F584);
PPC_FUNC_IMPL(__imp__sub_83C7F584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F588"))) PPC_WEAK_FUNC(sub_83C7F588);
PPC_FUNC_IMPL(__imp__sub_83C7F588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11272
	ctx.r3.s64 = ctx.r11.s64 + -11272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F594"))) PPC_WEAK_FUNC(sub_83C7F594);
PPC_FUNC_IMPL(__imp__sub_83C7F594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F598"))) PPC_WEAK_FUNC(sub_83C7F598);
PPC_FUNC_IMPL(__imp__sub_83C7F598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11264
	ctx.r3.s64 = ctx.r11.s64 + -11264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F5A4"))) PPC_WEAK_FUNC(sub_83C7F5A4);
PPC_FUNC_IMPL(__imp__sub_83C7F5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F5A8"))) PPC_WEAK_FUNC(sub_83C7F5A8);
PPC_FUNC_IMPL(__imp__sub_83C7F5A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11256
	ctx.r3.s64 = ctx.r11.s64 + -11256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F5B4"))) PPC_WEAK_FUNC(sub_83C7F5B4);
PPC_FUNC_IMPL(__imp__sub_83C7F5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F5B8"))) PPC_WEAK_FUNC(sub_83C7F5B8);
PPC_FUNC_IMPL(__imp__sub_83C7F5B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11248
	ctx.r3.s64 = ctx.r11.s64 + -11248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F5C4"))) PPC_WEAK_FUNC(sub_83C7F5C4);
PPC_FUNC_IMPL(__imp__sub_83C7F5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F5C8"))) PPC_WEAK_FUNC(sub_83C7F5C8);
PPC_FUNC_IMPL(__imp__sub_83C7F5C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11240
	ctx.r3.s64 = ctx.r11.s64 + -11240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F5D4"))) PPC_WEAK_FUNC(sub_83C7F5D4);
PPC_FUNC_IMPL(__imp__sub_83C7F5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F5D8"))) PPC_WEAK_FUNC(sub_83C7F5D8);
PPC_FUNC_IMPL(__imp__sub_83C7F5D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11232
	ctx.r3.s64 = ctx.r11.s64 + -11232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F5E4"))) PPC_WEAK_FUNC(sub_83C7F5E4);
PPC_FUNC_IMPL(__imp__sub_83C7F5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F5E8"))) PPC_WEAK_FUNC(sub_83C7F5E8);
PPC_FUNC_IMPL(__imp__sub_83C7F5E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11224
	ctx.r3.s64 = ctx.r11.s64 + -11224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F5F4"))) PPC_WEAK_FUNC(sub_83C7F5F4);
PPC_FUNC_IMPL(__imp__sub_83C7F5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F5F8"))) PPC_WEAK_FUNC(sub_83C7F5F8);
PPC_FUNC_IMPL(__imp__sub_83C7F5F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11216
	ctx.r3.s64 = ctx.r11.s64 + -11216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F604"))) PPC_WEAK_FUNC(sub_83C7F604);
PPC_FUNC_IMPL(__imp__sub_83C7F604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F608"))) PPC_WEAK_FUNC(sub_83C7F608);
PPC_FUNC_IMPL(__imp__sub_83C7F608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11208
	ctx.r3.s64 = ctx.r11.s64 + -11208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F614"))) PPC_WEAK_FUNC(sub_83C7F614);
PPC_FUNC_IMPL(__imp__sub_83C7F614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F618"))) PPC_WEAK_FUNC(sub_83C7F618);
PPC_FUNC_IMPL(__imp__sub_83C7F618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11200
	ctx.r3.s64 = ctx.r11.s64 + -11200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F624"))) PPC_WEAK_FUNC(sub_83C7F624);
PPC_FUNC_IMPL(__imp__sub_83C7F624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F628"))) PPC_WEAK_FUNC(sub_83C7F628);
PPC_FUNC_IMPL(__imp__sub_83C7F628) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,18256
	ctx.r7.s64 = ctx.r8.s64 + 18256;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,18256(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18256);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,18256(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18256, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C7F650"))) PPC_WEAK_FUNC(sub_83C7F650);
PPC_FUNC_IMPL(__imp__sub_83C7F650) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,8824
	ctx.r6.s64 = ctx.r7.s64 + 8824;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,8752(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8752);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,18256(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18256);
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
	// std r9,8824(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8824, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C7F698"))) PPC_WEAK_FUNC(sub_83C7F698);
PPC_FUNC_IMPL(__imp__sub_83C7F698) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,18240
	ctx.r3.s64 = ctx.r11.s64 + 18240;
	// bl 0x83523120
	ctx.lr = 0x83C7F6B0;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-11192
	ctx.r3.s64 = ctx.r10.s64 + -11192;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7F6BC;
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

__attribute__((alias("__imp__sub_83C7F6CC"))) PPC_WEAK_FUNC(sub_83C7F6CC);
PPC_FUNC_IMPL(__imp__sub_83C7F6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F6D0"))) PPC_WEAK_FUNC(sub_83C7F6D0);
PPC_FUNC_IMPL(__imp__sub_83C7F6D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11176
	ctx.r3.s64 = ctx.r11.s64 + -11176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F6DC"))) PPC_WEAK_FUNC(sub_83C7F6DC);
PPC_FUNC_IMPL(__imp__sub_83C7F6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F6E0"))) PPC_WEAK_FUNC(sub_83C7F6E0);
PPC_FUNC_IMPL(__imp__sub_83C7F6E0) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,18264
	ctx.r3.s64 = ctx.r11.s64 + 18264;
	// bl 0x8259af80
	ctx.lr = 0x83C7F6F8;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-11160
	ctx.r3.s64 = ctx.r10.s64 + -11160;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7F704;
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

__attribute__((alias("__imp__sub_83C7F714"))) PPC_WEAK_FUNC(sub_83C7F714);
PPC_FUNC_IMPL(__imp__sub_83C7F714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F718"))) PPC_WEAK_FUNC(sub_83C7F718);
PPC_FUNC_IMPL(__imp__sub_83C7F718) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,18244
	ctx.r11.s64 = ctx.r8.s64 + 18244;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,8800(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8800);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-11168
	ctx.r3.s64 = ctx.r6.s64 + -11168;
	// stw r10,18244(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18244, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F748"))) PPC_WEAK_FUNC(sub_83C7F748);
PPC_FUNC_IMPL(__imp__sub_83C7F748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11152
	ctx.r3.s64 = ctx.r11.s64 + -11152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F754"))) PPC_WEAK_FUNC(sub_83C7F754);
PPC_FUNC_IMPL(__imp__sub_83C7F754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F758"))) PPC_WEAK_FUNC(sub_83C7F758);
PPC_FUNC_IMPL(__imp__sub_83C7F758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11144
	ctx.r3.s64 = ctx.r11.s64 + -11144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F764"))) PPC_WEAK_FUNC(sub_83C7F764);
PPC_FUNC_IMPL(__imp__sub_83C7F764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F768"))) PPC_WEAK_FUNC(sub_83C7F768);
PPC_FUNC_IMPL(__imp__sub_83C7F768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11136
	ctx.r3.s64 = ctx.r11.s64 + -11136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F774"))) PPC_WEAK_FUNC(sub_83C7F774);
PPC_FUNC_IMPL(__imp__sub_83C7F774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F778"))) PPC_WEAK_FUNC(sub_83C7F778);
PPC_FUNC_IMPL(__imp__sub_83C7F778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11128
	ctx.r3.s64 = ctx.r11.s64 + -11128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F784"))) PPC_WEAK_FUNC(sub_83C7F784);
PPC_FUNC_IMPL(__imp__sub_83C7F784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F788"))) PPC_WEAK_FUNC(sub_83C7F788);
PPC_FUNC_IMPL(__imp__sub_83C7F788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11120
	ctx.r3.s64 = ctx.r11.s64 + -11120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F794"))) PPC_WEAK_FUNC(sub_83C7F794);
PPC_FUNC_IMPL(__imp__sub_83C7F794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F798"))) PPC_WEAK_FUNC(sub_83C7F798);
PPC_FUNC_IMPL(__imp__sub_83C7F798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11112
	ctx.r3.s64 = ctx.r11.s64 + -11112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F7A4"))) PPC_WEAK_FUNC(sub_83C7F7A4);
PPC_FUNC_IMPL(__imp__sub_83C7F7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F7A8"))) PPC_WEAK_FUNC(sub_83C7F7A8);
PPC_FUNC_IMPL(__imp__sub_83C7F7A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11104
	ctx.r3.s64 = ctx.r11.s64 + -11104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F7B4"))) PPC_WEAK_FUNC(sub_83C7F7B4);
PPC_FUNC_IMPL(__imp__sub_83C7F7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F7B8"))) PPC_WEAK_FUNC(sub_83C7F7B8);
PPC_FUNC_IMPL(__imp__sub_83C7F7B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11096
	ctx.r3.s64 = ctx.r11.s64 + -11096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F7C4"))) PPC_WEAK_FUNC(sub_83C7F7C4);
PPC_FUNC_IMPL(__imp__sub_83C7F7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F7C8"))) PPC_WEAK_FUNC(sub_83C7F7C8);
PPC_FUNC_IMPL(__imp__sub_83C7F7C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11088
	ctx.r3.s64 = ctx.r11.s64 + -11088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F7D4"))) PPC_WEAK_FUNC(sub_83C7F7D4);
PPC_FUNC_IMPL(__imp__sub_83C7F7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F7D8"))) PPC_WEAK_FUNC(sub_83C7F7D8);
PPC_FUNC_IMPL(__imp__sub_83C7F7D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11080
	ctx.r3.s64 = ctx.r11.s64 + -11080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F7E4"))) PPC_WEAK_FUNC(sub_83C7F7E4);
PPC_FUNC_IMPL(__imp__sub_83C7F7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F7E8"))) PPC_WEAK_FUNC(sub_83C7F7E8);
PPC_FUNC_IMPL(__imp__sub_83C7F7E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11072
	ctx.r3.s64 = ctx.r11.s64 + -11072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F7F4"))) PPC_WEAK_FUNC(sub_83C7F7F4);
PPC_FUNC_IMPL(__imp__sub_83C7F7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F7F8"))) PPC_WEAK_FUNC(sub_83C7F7F8);
PPC_FUNC_IMPL(__imp__sub_83C7F7F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11064
	ctx.r3.s64 = ctx.r11.s64 + -11064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F804"))) PPC_WEAK_FUNC(sub_83C7F804);
PPC_FUNC_IMPL(__imp__sub_83C7F804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F808"))) PPC_WEAK_FUNC(sub_83C7F808);
PPC_FUNC_IMPL(__imp__sub_83C7F808) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,18608
	ctx.r3.s64 = ctx.r11.s64 + 18608;
	// bl 0x83523120
	ctx.lr = 0x83C7F820;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-11056
	ctx.r3.s64 = ctx.r10.s64 + -11056;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7F82C;
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

__attribute__((alias("__imp__sub_83C7F83C"))) PPC_WEAK_FUNC(sub_83C7F83C);
PPC_FUNC_IMPL(__imp__sub_83C7F83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F840"))) PPC_WEAK_FUNC(sub_83C7F840);
PPC_FUNC_IMPL(__imp__sub_83C7F840) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,18624
	ctx.r7.s64 = ctx.r8.s64 + 18624;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,18624(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18624);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,18624(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18624, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C7F868"))) PPC_WEAK_FUNC(sub_83C7F868);
PPC_FUNC_IMPL(__imp__sub_83C7F868) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,8952
	ctx.r6.s64 = ctx.r7.s64 + 8952;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,8880(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8880);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,18624(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18624);
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
	// std r9,8952(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8952, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C7F8B0"))) PPC_WEAK_FUNC(sub_83C7F8B0);
PPC_FUNC_IMPL(__imp__sub_83C7F8B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11040
	ctx.r3.s64 = ctx.r11.s64 + -11040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F8BC"))) PPC_WEAK_FUNC(sub_83C7F8BC);
PPC_FUNC_IMPL(__imp__sub_83C7F8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F8C0"))) PPC_WEAK_FUNC(sub_83C7F8C0);
PPC_FUNC_IMPL(__imp__sub_83C7F8C0) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,18632
	ctx.r3.s64 = ctx.r11.s64 + 18632;
	// bl 0x8259af80
	ctx.lr = 0x83C7F8D8;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-11024
	ctx.r3.s64 = ctx.r10.s64 + -11024;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7F8E4;
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

__attribute__((alias("__imp__sub_83C7F8F4"))) PPC_WEAK_FUNC(sub_83C7F8F4);
PPC_FUNC_IMPL(__imp__sub_83C7F8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F8F8"))) PPC_WEAK_FUNC(sub_83C7F8F8);
PPC_FUNC_IMPL(__imp__sub_83C7F8F8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,18612
	ctx.r11.s64 = ctx.r8.s64 + 18612;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,8928(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8928);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-11032
	ctx.r3.s64 = ctx.r6.s64 + -11032;
	// stw r10,18612(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18612, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F928"))) PPC_WEAK_FUNC(sub_83C7F928);
PPC_FUNC_IMPL(__imp__sub_83C7F928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11016
	ctx.r3.s64 = ctx.r11.s64 + -11016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F934"))) PPC_WEAK_FUNC(sub_83C7F934);
PPC_FUNC_IMPL(__imp__sub_83C7F934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F938"))) PPC_WEAK_FUNC(sub_83C7F938);
PPC_FUNC_IMPL(__imp__sub_83C7F938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11008
	ctx.r3.s64 = ctx.r11.s64 + -11008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F944"))) PPC_WEAK_FUNC(sub_83C7F944);
PPC_FUNC_IMPL(__imp__sub_83C7F944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F948"))) PPC_WEAK_FUNC(sub_83C7F948);
PPC_FUNC_IMPL(__imp__sub_83C7F948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-11000
	ctx.r3.s64 = ctx.r11.s64 + -11000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F954"))) PPC_WEAK_FUNC(sub_83C7F954);
PPC_FUNC_IMPL(__imp__sub_83C7F954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F958"))) PPC_WEAK_FUNC(sub_83C7F958);
PPC_FUNC_IMPL(__imp__sub_83C7F958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10992
	ctx.r3.s64 = ctx.r11.s64 + -10992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F964"))) PPC_WEAK_FUNC(sub_83C7F964);
PPC_FUNC_IMPL(__imp__sub_83C7F964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F968"))) PPC_WEAK_FUNC(sub_83C7F968);
PPC_FUNC_IMPL(__imp__sub_83C7F968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10984
	ctx.r3.s64 = ctx.r11.s64 + -10984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F974"))) PPC_WEAK_FUNC(sub_83C7F974);
PPC_FUNC_IMPL(__imp__sub_83C7F974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F978"))) PPC_WEAK_FUNC(sub_83C7F978);
PPC_FUNC_IMPL(__imp__sub_83C7F978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10976
	ctx.r3.s64 = ctx.r11.s64 + -10976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F984"))) PPC_WEAK_FUNC(sub_83C7F984);
PPC_FUNC_IMPL(__imp__sub_83C7F984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F988"))) PPC_WEAK_FUNC(sub_83C7F988);
PPC_FUNC_IMPL(__imp__sub_83C7F988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10968
	ctx.r3.s64 = ctx.r11.s64 + -10968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F994"))) PPC_WEAK_FUNC(sub_83C7F994);
PPC_FUNC_IMPL(__imp__sub_83C7F994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F998"))) PPC_WEAK_FUNC(sub_83C7F998);
PPC_FUNC_IMPL(__imp__sub_83C7F998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10960
	ctx.r3.s64 = ctx.r11.s64 + -10960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F9A4"))) PPC_WEAK_FUNC(sub_83C7F9A4);
PPC_FUNC_IMPL(__imp__sub_83C7F9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F9A8"))) PPC_WEAK_FUNC(sub_83C7F9A8);
PPC_FUNC_IMPL(__imp__sub_83C7F9A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10952
	ctx.r3.s64 = ctx.r11.s64 + -10952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F9B4"))) PPC_WEAK_FUNC(sub_83C7F9B4);
PPC_FUNC_IMPL(__imp__sub_83C7F9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F9B8"))) PPC_WEAK_FUNC(sub_83C7F9B8);
PPC_FUNC_IMPL(__imp__sub_83C7F9B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10944
	ctx.r3.s64 = ctx.r11.s64 + -10944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F9C4"))) PPC_WEAK_FUNC(sub_83C7F9C4);
PPC_FUNC_IMPL(__imp__sub_83C7F9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F9C8"))) PPC_WEAK_FUNC(sub_83C7F9C8);
PPC_FUNC_IMPL(__imp__sub_83C7F9C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10936
	ctx.r3.s64 = ctx.r11.s64 + -10936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F9D4"))) PPC_WEAK_FUNC(sub_83C7F9D4);
PPC_FUNC_IMPL(__imp__sub_83C7F9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F9D8"))) PPC_WEAK_FUNC(sub_83C7F9D8);
PPC_FUNC_IMPL(__imp__sub_83C7F9D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10928
	ctx.r3.s64 = ctx.r11.s64 + -10928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7F9E4"))) PPC_WEAK_FUNC(sub_83C7F9E4);
PPC_FUNC_IMPL(__imp__sub_83C7F9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7F9E8"))) PPC_WEAK_FUNC(sub_83C7F9E8);
PPC_FUNC_IMPL(__imp__sub_83C7F9E8) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,18976
	ctx.r3.s64 = ctx.r11.s64 + 18976;
	// bl 0x83523120
	ctx.lr = 0x83C7FA00;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-10920
	ctx.r3.s64 = ctx.r10.s64 + -10920;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7FA0C;
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

__attribute__((alias("__imp__sub_83C7FA1C"))) PPC_WEAK_FUNC(sub_83C7FA1C);
PPC_FUNC_IMPL(__imp__sub_83C7FA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7FA20"))) PPC_WEAK_FUNC(sub_83C7FA20);
PPC_FUNC_IMPL(__imp__sub_83C7FA20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,18992
	ctx.r7.s64 = ctx.r8.s64 + 18992;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,18992(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18992);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,18992(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18992, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C7FA48"))) PPC_WEAK_FUNC(sub_83C7FA48);
PPC_FUNC_IMPL(__imp__sub_83C7FA48) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,9080
	ctx.r6.s64 = ctx.r7.s64 + 9080;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,9008(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 9008);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,18992(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 18992);
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
	// std r9,9080(r7)
	PPC_STORE_U64(ctx.r7.u32 + 9080, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C7FA90"))) PPC_WEAK_FUNC(sub_83C7FA90);
PPC_FUNC_IMPL(__imp__sub_83C7FA90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10904
	ctx.r3.s64 = ctx.r11.s64 + -10904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7FA9C"))) PPC_WEAK_FUNC(sub_83C7FA9C);
PPC_FUNC_IMPL(__imp__sub_83C7FA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7FAA0"))) PPC_WEAK_FUNC(sub_83C7FAA0);
PPC_FUNC_IMPL(__imp__sub_83C7FAA0) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,19000
	ctx.r3.s64 = ctx.r11.s64 + 19000;
	// bl 0x8259af80
	ctx.lr = 0x83C7FAB8;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-10888
	ctx.r3.s64 = ctx.r10.s64 + -10888;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7FAC4;
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

__attribute__((alias("__imp__sub_83C7FAD4"))) PPC_WEAK_FUNC(sub_83C7FAD4);
PPC_FUNC_IMPL(__imp__sub_83C7FAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7FAD8"))) PPC_WEAK_FUNC(sub_83C7FAD8);
PPC_FUNC_IMPL(__imp__sub_83C7FAD8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,18980
	ctx.r11.s64 = ctx.r8.s64 + 18980;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,9056(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9056);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-10896
	ctx.r3.s64 = ctx.r6.s64 + -10896;
	// stw r10,18980(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18980, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7FB08"))) PPC_WEAK_FUNC(sub_83C7FB08);
PPC_FUNC_IMPL(__imp__sub_83C7FB08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10880
	ctx.r3.s64 = ctx.r11.s64 + -10880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7FB14"))) PPC_WEAK_FUNC(sub_83C7FB14);
PPC_FUNC_IMPL(__imp__sub_83C7FB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7FB18"))) PPC_WEAK_FUNC(sub_83C7FB18);
PPC_FUNC_IMPL(__imp__sub_83C7FB18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10872
	ctx.r3.s64 = ctx.r11.s64 + -10872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7FB24"))) PPC_WEAK_FUNC(sub_83C7FB24);
PPC_FUNC_IMPL(__imp__sub_83C7FB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7FB28"))) PPC_WEAK_FUNC(sub_83C7FB28);
PPC_FUNC_IMPL(__imp__sub_83C7FB28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10864
	ctx.r3.s64 = ctx.r11.s64 + -10864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7FB34"))) PPC_WEAK_FUNC(sub_83C7FB34);
PPC_FUNC_IMPL(__imp__sub_83C7FB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7FB38"))) PPC_WEAK_FUNC(sub_83C7FB38);
PPC_FUNC_IMPL(__imp__sub_83C7FB38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10856
	ctx.r3.s64 = ctx.r11.s64 + -10856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7FB44"))) PPC_WEAK_FUNC(sub_83C7FB44);
PPC_FUNC_IMPL(__imp__sub_83C7FB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7FB48"))) PPC_WEAK_FUNC(sub_83C7FB48);
PPC_FUNC_IMPL(__imp__sub_83C7FB48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10848
	ctx.r3.s64 = ctx.r11.s64 + -10848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7FB54"))) PPC_WEAK_FUNC(sub_83C7FB54);
PPC_FUNC_IMPL(__imp__sub_83C7FB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7FB58"))) PPC_WEAK_FUNC(sub_83C7FB58);
PPC_FUNC_IMPL(__imp__sub_83C7FB58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10840
	ctx.r3.s64 = ctx.r11.s64 + -10840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7FB64"))) PPC_WEAK_FUNC(sub_83C7FB64);
PPC_FUNC_IMPL(__imp__sub_83C7FB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7FB68"))) PPC_WEAK_FUNC(sub_83C7FB68);
PPC_FUNC_IMPL(__imp__sub_83C7FB68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10832
	ctx.r3.s64 = ctx.r11.s64 + -10832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7FB74"))) PPC_WEAK_FUNC(sub_83C7FB74);
PPC_FUNC_IMPL(__imp__sub_83C7FB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7FB78"))) PPC_WEAK_FUNC(sub_83C7FB78);
PPC_FUNC_IMPL(__imp__sub_83C7FB78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10824
	ctx.r3.s64 = ctx.r11.s64 + -10824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7FB84"))) PPC_WEAK_FUNC(sub_83C7FB84);
PPC_FUNC_IMPL(__imp__sub_83C7FB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7FB88"))) PPC_WEAK_FUNC(sub_83C7FB88);
PPC_FUNC_IMPL(__imp__sub_83C7FB88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10816
	ctx.r3.s64 = ctx.r11.s64 + -10816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7FB94"))) PPC_WEAK_FUNC(sub_83C7FB94);
PPC_FUNC_IMPL(__imp__sub_83C7FB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7FB98"))) PPC_WEAK_FUNC(sub_83C7FB98);
PPC_FUNC_IMPL(__imp__sub_83C7FB98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10808
	ctx.r3.s64 = ctx.r11.s64 + -10808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7FBA4"))) PPC_WEAK_FUNC(sub_83C7FBA4);
PPC_FUNC_IMPL(__imp__sub_83C7FBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7FBA8"))) PPC_WEAK_FUNC(sub_83C7FBA8);
PPC_FUNC_IMPL(__imp__sub_83C7FBA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10800
	ctx.r3.s64 = ctx.r11.s64 + -10800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7FBB4"))) PPC_WEAK_FUNC(sub_83C7FBB4);
PPC_FUNC_IMPL(__imp__sub_83C7FBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7FBB8"))) PPC_WEAK_FUNC(sub_83C7FBB8);
PPC_FUNC_IMPL(__imp__sub_83C7FBB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10792
	ctx.r3.s64 = ctx.r11.s64 + -10792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7FBC4"))) PPC_WEAK_FUNC(sub_83C7FBC4);
PPC_FUNC_IMPL(__imp__sub_83C7FBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7FBC8"))) PPC_WEAK_FUNC(sub_83C7FBC8);
PPC_FUNC_IMPL(__imp__sub_83C7FBC8) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,19344
	ctx.r3.s64 = ctx.r11.s64 + 19344;
	// bl 0x83523120
	ctx.lr = 0x83C7FBE0;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-10784
	ctx.r3.s64 = ctx.r10.s64 + -10784;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7FBEC;
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

__attribute__((alias("__imp__sub_83C7FBFC"))) PPC_WEAK_FUNC(sub_83C7FBFC);
PPC_FUNC_IMPL(__imp__sub_83C7FBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7FC00"))) PPC_WEAK_FUNC(sub_83C7FC00);
PPC_FUNC_IMPL(__imp__sub_83C7FC00) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,19360
	ctx.r7.s64 = ctx.r8.s64 + 19360;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,19360(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19360);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,19360(r8)
	PPC_STORE_U32(ctx.r8.u32 + 19360, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C7FC28"))) PPC_WEAK_FUNC(sub_83C7FC28);
PPC_FUNC_IMPL(__imp__sub_83C7FC28) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,9248
	ctx.r6.s64 = ctx.r7.s64 + 9248;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,9176(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 9176);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,19360(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19360);
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
	// std r9,9248(r7)
	PPC_STORE_U64(ctx.r7.u32 + 9248, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C7FC70"))) PPC_WEAK_FUNC(sub_83C7FC70);
PPC_FUNC_IMPL(__imp__sub_83C7FC70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10768
	ctx.r3.s64 = ctx.r11.s64 + -10768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7FC7C"))) PPC_WEAK_FUNC(sub_83C7FC7C);
PPC_FUNC_IMPL(__imp__sub_83C7FC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7FC80"))) PPC_WEAK_FUNC(sub_83C7FC80);
PPC_FUNC_IMPL(__imp__sub_83C7FC80) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,19368
	ctx.r3.s64 = ctx.r11.s64 + 19368;
	// bl 0x8259af80
	ctx.lr = 0x83C7FC98;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-10752
	ctx.r3.s64 = ctx.r10.s64 + -10752;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7FCA4;
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

__attribute__((alias("__imp__sub_83C7FCB4"))) PPC_WEAK_FUNC(sub_83C7FCB4);
PPC_FUNC_IMPL(__imp__sub_83C7FCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7FCB8"))) PPC_WEAK_FUNC(sub_83C7FCB8);
PPC_FUNC_IMPL(__imp__sub_83C7FCB8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,19348
	ctx.r11.s64 = ctx.r8.s64 + 19348;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,9224(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9224);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-10760
	ctx.r3.s64 = ctx.r6.s64 + -10760;
	// stw r10,19348(r8)
	PPC_STORE_U32(ctx.r8.u32 + 19348, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7FCE8"))) PPC_WEAK_FUNC(sub_83C7FCE8);
PPC_FUNC_IMPL(__imp__sub_83C7FCE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10744
	ctx.r3.s64 = ctx.r11.s64 + -10744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7FCF4"))) PPC_WEAK_FUNC(sub_83C7FCF4);
PPC_FUNC_IMPL(__imp__sub_83C7FCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7FCF8"))) PPC_WEAK_FUNC(sub_83C7FCF8);
PPC_FUNC_IMPL(__imp__sub_83C7FCF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10736
	ctx.r3.s64 = ctx.r11.s64 + -10736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7FD04"))) PPC_WEAK_FUNC(sub_83C7FD04);
PPC_FUNC_IMPL(__imp__sub_83C7FD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7FD08"))) PPC_WEAK_FUNC(sub_83C7FD08);
PPC_FUNC_IMPL(__imp__sub_83C7FD08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10728
	ctx.r3.s64 = ctx.r11.s64 + -10728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7FD14"))) PPC_WEAK_FUNC(sub_83C7FD14);
PPC_FUNC_IMPL(__imp__sub_83C7FD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7FD18"))) PPC_WEAK_FUNC(sub_83C7FD18);
PPC_FUNC_IMPL(__imp__sub_83C7FD18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10720
	ctx.r3.s64 = ctx.r11.s64 + -10720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7FD24"))) PPC_WEAK_FUNC(sub_83C7FD24);
PPC_FUNC_IMPL(__imp__sub_83C7FD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7FD28"))) PPC_WEAK_FUNC(sub_83C7FD28);
PPC_FUNC_IMPL(__imp__sub_83C7FD28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10712
	ctx.r3.s64 = ctx.r11.s64 + -10712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7FD34"))) PPC_WEAK_FUNC(sub_83C7FD34);
PPC_FUNC_IMPL(__imp__sub_83C7FD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7FD38"))) PPC_WEAK_FUNC(sub_83C7FD38);
PPC_FUNC_IMPL(__imp__sub_83C7FD38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10704
	ctx.r3.s64 = ctx.r11.s64 + -10704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7FD44"))) PPC_WEAK_FUNC(sub_83C7FD44);
PPC_FUNC_IMPL(__imp__sub_83C7FD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7FD48"))) PPC_WEAK_FUNC(sub_83C7FD48);
PPC_FUNC_IMPL(__imp__sub_83C7FD48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10696
	ctx.r3.s64 = ctx.r11.s64 + -10696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7FD54"))) PPC_WEAK_FUNC(sub_83C7FD54);
PPC_FUNC_IMPL(__imp__sub_83C7FD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7FD58"))) PPC_WEAK_FUNC(sub_83C7FD58);
PPC_FUNC_IMPL(__imp__sub_83C7FD58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10688
	ctx.r3.s64 = ctx.r11.s64 + -10688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7FD64"))) PPC_WEAK_FUNC(sub_83C7FD64);
PPC_FUNC_IMPL(__imp__sub_83C7FD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7FD68"))) PPC_WEAK_FUNC(sub_83C7FD68);
PPC_FUNC_IMPL(__imp__sub_83C7FD68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10680
	ctx.r3.s64 = ctx.r11.s64 + -10680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7FD74"))) PPC_WEAK_FUNC(sub_83C7FD74);
PPC_FUNC_IMPL(__imp__sub_83C7FD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7FD78"))) PPC_WEAK_FUNC(sub_83C7FD78);
PPC_FUNC_IMPL(__imp__sub_83C7FD78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10672
	ctx.r3.s64 = ctx.r11.s64 + -10672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7FD84"))) PPC_WEAK_FUNC(sub_83C7FD84);
PPC_FUNC_IMPL(__imp__sub_83C7FD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7FD88"))) PPC_WEAK_FUNC(sub_83C7FD88);
PPC_FUNC_IMPL(__imp__sub_83C7FD88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10664
	ctx.r3.s64 = ctx.r11.s64 + -10664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7FD94"))) PPC_WEAK_FUNC(sub_83C7FD94);
PPC_FUNC_IMPL(__imp__sub_83C7FD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7FD98"))) PPC_WEAK_FUNC(sub_83C7FD98);
PPC_FUNC_IMPL(__imp__sub_83C7FD98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10656
	ctx.r3.s64 = ctx.r11.s64 + -10656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7FDA4"))) PPC_WEAK_FUNC(sub_83C7FDA4);
PPC_FUNC_IMPL(__imp__sub_83C7FDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7FDA8"))) PPC_WEAK_FUNC(sub_83C7FDA8);
PPC_FUNC_IMPL(__imp__sub_83C7FDA8) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,19712
	ctx.r3.s64 = ctx.r11.s64 + 19712;
	// bl 0x83523120
	ctx.lr = 0x83C7FDC0;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-10648
	ctx.r3.s64 = ctx.r10.s64 + -10648;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7FDCC;
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

__attribute__((alias("__imp__sub_83C7FDDC"))) PPC_WEAK_FUNC(sub_83C7FDDC);
PPC_FUNC_IMPL(__imp__sub_83C7FDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7FDE0"))) PPC_WEAK_FUNC(sub_83C7FDE0);
PPC_FUNC_IMPL(__imp__sub_83C7FDE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,19728
	ctx.r7.s64 = ctx.r8.s64 + 19728;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,19728(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19728);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,19728(r8)
	PPC_STORE_U32(ctx.r8.u32 + 19728, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C7FE08"))) PPC_WEAK_FUNC(sub_83C7FE08);
PPC_FUNC_IMPL(__imp__sub_83C7FE08) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,9376
	ctx.r6.s64 = ctx.r7.s64 + 9376;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,9304(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 9304);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,19728(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19728);
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
	// std r9,9376(r7)
	PPC_STORE_U64(ctx.r7.u32 + 9376, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C7FE50"))) PPC_WEAK_FUNC(sub_83C7FE50);
PPC_FUNC_IMPL(__imp__sub_83C7FE50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10632
	ctx.r3.s64 = ctx.r11.s64 + -10632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7FE5C"))) PPC_WEAK_FUNC(sub_83C7FE5C);
PPC_FUNC_IMPL(__imp__sub_83C7FE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7FE60"))) PPC_WEAK_FUNC(sub_83C7FE60);
PPC_FUNC_IMPL(__imp__sub_83C7FE60) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,19736
	ctx.r3.s64 = ctx.r11.s64 + 19736;
	// bl 0x8259af80
	ctx.lr = 0x83C7FE78;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-10616
	ctx.r3.s64 = ctx.r10.s64 + -10616;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7FE84;
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

__attribute__((alias("__imp__sub_83C7FE94"))) PPC_WEAK_FUNC(sub_83C7FE94);
PPC_FUNC_IMPL(__imp__sub_83C7FE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7FE98"))) PPC_WEAK_FUNC(sub_83C7FE98);
PPC_FUNC_IMPL(__imp__sub_83C7FE98) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,19716
	ctx.r11.s64 = ctx.r8.s64 + 19716;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,9352(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9352);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-10624
	ctx.r3.s64 = ctx.r6.s64 + -10624;
	// stw r10,19716(r8)
	PPC_STORE_U32(ctx.r8.u32 + 19716, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7FEC8"))) PPC_WEAK_FUNC(sub_83C7FEC8);
PPC_FUNC_IMPL(__imp__sub_83C7FEC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10608
	ctx.r3.s64 = ctx.r11.s64 + -10608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7FED4"))) PPC_WEAK_FUNC(sub_83C7FED4);
PPC_FUNC_IMPL(__imp__sub_83C7FED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7FED8"))) PPC_WEAK_FUNC(sub_83C7FED8);
PPC_FUNC_IMPL(__imp__sub_83C7FED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10600
	ctx.r3.s64 = ctx.r11.s64 + -10600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7FEE4"))) PPC_WEAK_FUNC(sub_83C7FEE4);
PPC_FUNC_IMPL(__imp__sub_83C7FEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7FEE8"))) PPC_WEAK_FUNC(sub_83C7FEE8);
PPC_FUNC_IMPL(__imp__sub_83C7FEE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10592
	ctx.r3.s64 = ctx.r11.s64 + -10592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7FEF4"))) PPC_WEAK_FUNC(sub_83C7FEF4);
PPC_FUNC_IMPL(__imp__sub_83C7FEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7FEF8"))) PPC_WEAK_FUNC(sub_83C7FEF8);
PPC_FUNC_IMPL(__imp__sub_83C7FEF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10584
	ctx.r3.s64 = ctx.r11.s64 + -10584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7FF04"))) PPC_WEAK_FUNC(sub_83C7FF04);
PPC_FUNC_IMPL(__imp__sub_83C7FF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7FF08"))) PPC_WEAK_FUNC(sub_83C7FF08);
PPC_FUNC_IMPL(__imp__sub_83C7FF08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-10576
	ctx.r3.s64 = ctx.r11.s64 + -10576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

