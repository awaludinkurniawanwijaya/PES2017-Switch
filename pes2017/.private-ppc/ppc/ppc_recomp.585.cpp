#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83B99F60"))) PPC_WEAK_FUNC(sub_83B99F60);
PPC_FUNC_IMPL(__imp__sub_83B99F60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,11512
	ctx.r3.s64 = ctx.r11.s64 + 11512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B99F6C"))) PPC_WEAK_FUNC(sub_83B99F6C);
PPC_FUNC_IMPL(__imp__sub_83B99F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B99F70"))) PPC_WEAK_FUNC(sub_83B99F70);
PPC_FUNC_IMPL(__imp__sub_83B99F70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,11520
	ctx.r3.s64 = ctx.r11.s64 + 11520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B99F7C"))) PPC_WEAK_FUNC(sub_83B99F7C);
PPC_FUNC_IMPL(__imp__sub_83B99F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B99F80"))) PPC_WEAK_FUNC(sub_83B99F80);
PPC_FUNC_IMPL(__imp__sub_83B99F80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,11528
	ctx.r3.s64 = ctx.r11.s64 + 11528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B99F8C"))) PPC_WEAK_FUNC(sub_83B99F8C);
PPC_FUNC_IMPL(__imp__sub_83B99F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B99F90"))) PPC_WEAK_FUNC(sub_83B99F90);
PPC_FUNC_IMPL(__imp__sub_83B99F90) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-4492
	ctx.r7.s64 = ctx.r8.s64 + -4492;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-4492(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4492);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-4492(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4492, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B99FB8"))) PPC_WEAK_FUNC(sub_83B99FB8);
PPC_FUNC_IMPL(__imp__sub_83B99FB8) {
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
	// addi r3,r11,-4496
	ctx.r3.s64 = ctx.r11.s64 + -4496;
	// bl 0x83523120
	ctx.lr = 0x83B99FD0;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,11536
	ctx.r3.s64 = ctx.r10.s64 + 11536;
	// bl 0x831cdcc8
	ctx.lr = 0x83B99FDC;
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

__attribute__((alias("__imp__sub_83B99FEC"))) PPC_WEAK_FUNC(sub_83B99FEC);
PPC_FUNC_IMPL(__imp__sub_83B99FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B99FF0"))) PPC_WEAK_FUNC(sub_83B99FF0);
PPC_FUNC_IMPL(__imp__sub_83B99FF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,11552
	ctx.r3.s64 = ctx.r11.s64 + 11552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B99FFC"))) PPC_WEAK_FUNC(sub_83B99FFC);
PPC_FUNC_IMPL(__imp__sub_83B99FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A000"))) PPC_WEAK_FUNC(sub_83B9A000);
PPC_FUNC_IMPL(__imp__sub_83B9A000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,11560
	ctx.r3.s64 = ctx.r11.s64 + 11560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A00C"))) PPC_WEAK_FUNC(sub_83B9A00C);
PPC_FUNC_IMPL(__imp__sub_83B9A00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A010"))) PPC_WEAK_FUNC(sub_83B9A010);
PPC_FUNC_IMPL(__imp__sub_83B9A010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,11568
	ctx.r3.s64 = ctx.r11.s64 + 11568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A01C"))) PPC_WEAK_FUNC(sub_83B9A01C);
PPC_FUNC_IMPL(__imp__sub_83B9A01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A020"))) PPC_WEAK_FUNC(sub_83B9A020);
PPC_FUNC_IMPL(__imp__sub_83B9A020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,11576
	ctx.r3.s64 = ctx.r11.s64 + 11576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A02C"))) PPC_WEAK_FUNC(sub_83B9A02C);
PPC_FUNC_IMPL(__imp__sub_83B9A02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A030"))) PPC_WEAK_FUNC(sub_83B9A030);
PPC_FUNC_IMPL(__imp__sub_83B9A030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,11584
	ctx.r3.s64 = ctx.r11.s64 + 11584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A03C"))) PPC_WEAK_FUNC(sub_83B9A03C);
PPC_FUNC_IMPL(__imp__sub_83B9A03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A040"))) PPC_WEAK_FUNC(sub_83B9A040);
PPC_FUNC_IMPL(__imp__sub_83B9A040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,11592
	ctx.r3.s64 = ctx.r11.s64 + 11592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A04C"))) PPC_WEAK_FUNC(sub_83B9A04C);
PPC_FUNC_IMPL(__imp__sub_83B9A04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A050"))) PPC_WEAK_FUNC(sub_83B9A050);
PPC_FUNC_IMPL(__imp__sub_83B9A050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,11600
	ctx.r3.s64 = ctx.r11.s64 + 11600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A05C"))) PPC_WEAK_FUNC(sub_83B9A05C);
PPC_FUNC_IMPL(__imp__sub_83B9A05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A060"))) PPC_WEAK_FUNC(sub_83B9A060);
PPC_FUNC_IMPL(__imp__sub_83B9A060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,11608
	ctx.r3.s64 = ctx.r11.s64 + 11608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A06C"))) PPC_WEAK_FUNC(sub_83B9A06C);
PPC_FUNC_IMPL(__imp__sub_83B9A06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A070"))) PPC_WEAK_FUNC(sub_83B9A070);
PPC_FUNC_IMPL(__imp__sub_83B9A070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,11616
	ctx.r3.s64 = ctx.r11.s64 + 11616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A07C"))) PPC_WEAK_FUNC(sub_83B9A07C);
PPC_FUNC_IMPL(__imp__sub_83B9A07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A080"))) PPC_WEAK_FUNC(sub_83B9A080);
PPC_FUNC_IMPL(__imp__sub_83B9A080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,11624
	ctx.r3.s64 = ctx.r11.s64 + 11624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A08C"))) PPC_WEAK_FUNC(sub_83B9A08C);
PPC_FUNC_IMPL(__imp__sub_83B9A08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A090"))) PPC_WEAK_FUNC(sub_83B9A090);
PPC_FUNC_IMPL(__imp__sub_83B9A090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,11632
	ctx.r3.s64 = ctx.r11.s64 + 11632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A09C"))) PPC_WEAK_FUNC(sub_83B9A09C);
PPC_FUNC_IMPL(__imp__sub_83B9A09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A0A0"))) PPC_WEAK_FUNC(sub_83B9A0A0);
PPC_FUNC_IMPL(__imp__sub_83B9A0A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,11640
	ctx.r3.s64 = ctx.r11.s64 + 11640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A0AC"))) PPC_WEAK_FUNC(sub_83B9A0AC);
PPC_FUNC_IMPL(__imp__sub_83B9A0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A0B0"))) PPC_WEAK_FUNC(sub_83B9A0B0);
PPC_FUNC_IMPL(__imp__sub_83B9A0B0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-4480
	ctx.r7.s64 = ctx.r8.s64 + -4480;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-4480(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4480);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-4480(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4480, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B9A0D8"))) PPC_WEAK_FUNC(sub_83B9A0D8);
PPC_FUNC_IMPL(__imp__sub_83B9A0D8) {
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
	// addi r3,r11,-4484
	ctx.r3.s64 = ctx.r11.s64 + -4484;
	// bl 0x83523120
	ctx.lr = 0x83B9A0F0;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,11648
	ctx.r3.s64 = ctx.r10.s64 + 11648;
	// bl 0x831cdcc8
	ctx.lr = 0x83B9A0FC;
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

__attribute__((alias("__imp__sub_83B9A10C"))) PPC_WEAK_FUNC(sub_83B9A10C);
PPC_FUNC_IMPL(__imp__sub_83B9A10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A110"))) PPC_WEAK_FUNC(sub_83B9A110);
PPC_FUNC_IMPL(__imp__sub_83B9A110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,11664
	ctx.r3.s64 = ctx.r11.s64 + 11664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A11C"))) PPC_WEAK_FUNC(sub_83B9A11C);
PPC_FUNC_IMPL(__imp__sub_83B9A11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A120"))) PPC_WEAK_FUNC(sub_83B9A120);
PPC_FUNC_IMPL(__imp__sub_83B9A120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,11672
	ctx.r3.s64 = ctx.r11.s64 + 11672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A12C"))) PPC_WEAK_FUNC(sub_83B9A12C);
PPC_FUNC_IMPL(__imp__sub_83B9A12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A130"))) PPC_WEAK_FUNC(sub_83B9A130);
PPC_FUNC_IMPL(__imp__sub_83B9A130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,11680
	ctx.r3.s64 = ctx.r11.s64 + 11680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A13C"))) PPC_WEAK_FUNC(sub_83B9A13C);
PPC_FUNC_IMPL(__imp__sub_83B9A13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A140"))) PPC_WEAK_FUNC(sub_83B9A140);
PPC_FUNC_IMPL(__imp__sub_83B9A140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,11688
	ctx.r3.s64 = ctx.r11.s64 + 11688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A14C"))) PPC_WEAK_FUNC(sub_83B9A14C);
PPC_FUNC_IMPL(__imp__sub_83B9A14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A150"))) PPC_WEAK_FUNC(sub_83B9A150);
PPC_FUNC_IMPL(__imp__sub_83B9A150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,11696
	ctx.r3.s64 = ctx.r11.s64 + 11696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A15C"))) PPC_WEAK_FUNC(sub_83B9A15C);
PPC_FUNC_IMPL(__imp__sub_83B9A15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A160"))) PPC_WEAK_FUNC(sub_83B9A160);
PPC_FUNC_IMPL(__imp__sub_83B9A160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,11704
	ctx.r3.s64 = ctx.r11.s64 + 11704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A16C"))) PPC_WEAK_FUNC(sub_83B9A16C);
PPC_FUNC_IMPL(__imp__sub_83B9A16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A170"))) PPC_WEAK_FUNC(sub_83B9A170);
PPC_FUNC_IMPL(__imp__sub_83B9A170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,11712
	ctx.r3.s64 = ctx.r11.s64 + 11712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A17C"))) PPC_WEAK_FUNC(sub_83B9A17C);
PPC_FUNC_IMPL(__imp__sub_83B9A17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A180"))) PPC_WEAK_FUNC(sub_83B9A180);
PPC_FUNC_IMPL(__imp__sub_83B9A180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,11720
	ctx.r3.s64 = ctx.r11.s64 + 11720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A18C"))) PPC_WEAK_FUNC(sub_83B9A18C);
PPC_FUNC_IMPL(__imp__sub_83B9A18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A190"))) PPC_WEAK_FUNC(sub_83B9A190);
PPC_FUNC_IMPL(__imp__sub_83B9A190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,11728
	ctx.r3.s64 = ctx.r11.s64 + 11728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A19C"))) PPC_WEAK_FUNC(sub_83B9A19C);
PPC_FUNC_IMPL(__imp__sub_83B9A19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A1A0"))) PPC_WEAK_FUNC(sub_83B9A1A0);
PPC_FUNC_IMPL(__imp__sub_83B9A1A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,11736
	ctx.r3.s64 = ctx.r11.s64 + 11736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A1AC"))) PPC_WEAK_FUNC(sub_83B9A1AC);
PPC_FUNC_IMPL(__imp__sub_83B9A1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A1B0"))) PPC_WEAK_FUNC(sub_83B9A1B0);
PPC_FUNC_IMPL(__imp__sub_83B9A1B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,11744
	ctx.r3.s64 = ctx.r11.s64 + 11744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A1BC"))) PPC_WEAK_FUNC(sub_83B9A1BC);
PPC_FUNC_IMPL(__imp__sub_83B9A1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A1C0"))) PPC_WEAK_FUNC(sub_83B9A1C0);
PPC_FUNC_IMPL(__imp__sub_83B9A1C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,11752
	ctx.r3.s64 = ctx.r11.s64 + 11752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A1CC"))) PPC_WEAK_FUNC(sub_83B9A1CC);
PPC_FUNC_IMPL(__imp__sub_83B9A1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A1D0"))) PPC_WEAK_FUNC(sub_83B9A1D0);
PPC_FUNC_IMPL(__imp__sub_83B9A1D0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-4456
	ctx.r7.s64 = ctx.r8.s64 + -4456;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-4456(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4456);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-4456(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4456, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B9A1F8"))) PPC_WEAK_FUNC(sub_83B9A1F8);
PPC_FUNC_IMPL(__imp__sub_83B9A1F8) {
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
	// addi r3,r11,-4472
	ctx.r3.s64 = ctx.r11.s64 + -4472;
	// bl 0x83523120
	ctx.lr = 0x83B9A210;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,11760
	ctx.r3.s64 = ctx.r10.s64 + 11760;
	// bl 0x831cdcc8
	ctx.lr = 0x83B9A21C;
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

__attribute__((alias("__imp__sub_83B9A22C"))) PPC_WEAK_FUNC(sub_83B9A22C);
PPC_FUNC_IMPL(__imp__sub_83B9A22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A230"))) PPC_WEAK_FUNC(sub_83B9A230);
PPC_FUNC_IMPL(__imp__sub_83B9A230) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,456
	ctx.r6.s64 = ctx.r7.s64 + 456;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,372(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 372);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-4456(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4456);
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
	// std r9,456(r7)
	PPC_STORE_U64(ctx.r7.u32 + 456, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B9A278"))) PPC_WEAK_FUNC(sub_83B9A278);
PPC_FUNC_IMPL(__imp__sub_83B9A278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,11776
	ctx.r3.s64 = ctx.r11.s64 + 11776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A284"))) PPC_WEAK_FUNC(sub_83B9A284);
PPC_FUNC_IMPL(__imp__sub_83B9A284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A288"))) PPC_WEAK_FUNC(sub_83B9A288);
PPC_FUNC_IMPL(__imp__sub_83B9A288) {
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
	// addi r3,r11,-4448
	ctx.r3.s64 = ctx.r11.s64 + -4448;
	// bl 0x8259af80
	ctx.lr = 0x83B9A2A0;
	sub_8259AF80(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,11792
	ctx.r3.s64 = ctx.r10.s64 + 11792;
	// bl 0x831cdcc8
	ctx.lr = 0x83B9A2AC;
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

__attribute__((alias("__imp__sub_83B9A2BC"))) PPC_WEAK_FUNC(sub_83B9A2BC);
PPC_FUNC_IMPL(__imp__sub_83B9A2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A2C0"))) PPC_WEAK_FUNC(sub_83B9A2C0);
PPC_FUNC_IMPL(__imp__sub_83B9A2C0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-4468
	ctx.r11.s64 = ctx.r8.s64 + -4468;
	// lis r6,-31792
	ctx.r6.s64 = -2083520512;
	// lwz r10,420(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 420);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,11784
	ctx.r3.s64 = ctx.r6.s64 + 11784;
	// stw r10,-4468(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4468, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A2F0"))) PPC_WEAK_FUNC(sub_83B9A2F0);
PPC_FUNC_IMPL(__imp__sub_83B9A2F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,11800
	ctx.r3.s64 = ctx.r11.s64 + 11800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A2FC"))) PPC_WEAK_FUNC(sub_83B9A2FC);
PPC_FUNC_IMPL(__imp__sub_83B9A2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A300"))) PPC_WEAK_FUNC(sub_83B9A300);
PPC_FUNC_IMPL(__imp__sub_83B9A300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,11808
	ctx.r3.s64 = ctx.r11.s64 + 11808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A30C"))) PPC_WEAK_FUNC(sub_83B9A30C);
PPC_FUNC_IMPL(__imp__sub_83B9A30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A310"))) PPC_WEAK_FUNC(sub_83B9A310);
PPC_FUNC_IMPL(__imp__sub_83B9A310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,11816
	ctx.r3.s64 = ctx.r11.s64 + 11816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A31C"))) PPC_WEAK_FUNC(sub_83B9A31C);
PPC_FUNC_IMPL(__imp__sub_83B9A31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A320"))) PPC_WEAK_FUNC(sub_83B9A320);
PPC_FUNC_IMPL(__imp__sub_83B9A320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,11824
	ctx.r3.s64 = ctx.r11.s64 + 11824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A32C"))) PPC_WEAK_FUNC(sub_83B9A32C);
PPC_FUNC_IMPL(__imp__sub_83B9A32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A330"))) PPC_WEAK_FUNC(sub_83B9A330);
PPC_FUNC_IMPL(__imp__sub_83B9A330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,11832
	ctx.r3.s64 = ctx.r11.s64 + 11832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A33C"))) PPC_WEAK_FUNC(sub_83B9A33C);
PPC_FUNC_IMPL(__imp__sub_83B9A33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A340"))) PPC_WEAK_FUNC(sub_83B9A340);
PPC_FUNC_IMPL(__imp__sub_83B9A340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,11840
	ctx.r3.s64 = ctx.r11.s64 + 11840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A34C"))) PPC_WEAK_FUNC(sub_83B9A34C);
PPC_FUNC_IMPL(__imp__sub_83B9A34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A350"))) PPC_WEAK_FUNC(sub_83B9A350);
PPC_FUNC_IMPL(__imp__sub_83B9A350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,11848
	ctx.r3.s64 = ctx.r11.s64 + 11848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A35C"))) PPC_WEAK_FUNC(sub_83B9A35C);
PPC_FUNC_IMPL(__imp__sub_83B9A35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A360"))) PPC_WEAK_FUNC(sub_83B9A360);
PPC_FUNC_IMPL(__imp__sub_83B9A360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,11856
	ctx.r3.s64 = ctx.r11.s64 + 11856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A36C"))) PPC_WEAK_FUNC(sub_83B9A36C);
PPC_FUNC_IMPL(__imp__sub_83B9A36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A370"))) PPC_WEAK_FUNC(sub_83B9A370);
PPC_FUNC_IMPL(__imp__sub_83B9A370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,11864
	ctx.r3.s64 = ctx.r11.s64 + 11864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A37C"))) PPC_WEAK_FUNC(sub_83B9A37C);
PPC_FUNC_IMPL(__imp__sub_83B9A37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A380"))) PPC_WEAK_FUNC(sub_83B9A380);
PPC_FUNC_IMPL(__imp__sub_83B9A380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,11872
	ctx.r3.s64 = ctx.r11.s64 + 11872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A38C"))) PPC_WEAK_FUNC(sub_83B9A38C);
PPC_FUNC_IMPL(__imp__sub_83B9A38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A390"))) PPC_WEAK_FUNC(sub_83B9A390);
PPC_FUNC_IMPL(__imp__sub_83B9A390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,11880
	ctx.r3.s64 = ctx.r11.s64 + 11880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A39C"))) PPC_WEAK_FUNC(sub_83B9A39C);
PPC_FUNC_IMPL(__imp__sub_83B9A39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A3A0"))) PPC_WEAK_FUNC(sub_83B9A3A0);
PPC_FUNC_IMPL(__imp__sub_83B9A3A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,11888
	ctx.r3.s64 = ctx.r11.s64 + 11888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A3AC"))) PPC_WEAK_FUNC(sub_83B9A3AC);
PPC_FUNC_IMPL(__imp__sub_83B9A3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A3B0"))) PPC_WEAK_FUNC(sub_83B9A3B0);
PPC_FUNC_IMPL(__imp__sub_83B9A3B0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-4100
	ctx.r7.s64 = ctx.r8.s64 + -4100;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-4100(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4100);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-4100(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4100, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B9A3D8"))) PPC_WEAK_FUNC(sub_83B9A3D8);
PPC_FUNC_IMPL(__imp__sub_83B9A3D8) {
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
	// addi r3,r11,-4104
	ctx.r3.s64 = ctx.r11.s64 + -4104;
	// bl 0x83523120
	ctx.lr = 0x83B9A3F0;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,11896
	ctx.r3.s64 = ctx.r10.s64 + 11896;
	// bl 0x831cdcc8
	ctx.lr = 0x83B9A3FC;
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

__attribute__((alias("__imp__sub_83B9A40C"))) PPC_WEAK_FUNC(sub_83B9A40C);
PPC_FUNC_IMPL(__imp__sub_83B9A40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A410"))) PPC_WEAK_FUNC(sub_83B9A410);
PPC_FUNC_IMPL(__imp__sub_83B9A410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,11912
	ctx.r3.s64 = ctx.r11.s64 + 11912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A41C"))) PPC_WEAK_FUNC(sub_83B9A41C);
PPC_FUNC_IMPL(__imp__sub_83B9A41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A420"))) PPC_WEAK_FUNC(sub_83B9A420);
PPC_FUNC_IMPL(__imp__sub_83B9A420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,11920
	ctx.r3.s64 = ctx.r11.s64 + 11920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A42C"))) PPC_WEAK_FUNC(sub_83B9A42C);
PPC_FUNC_IMPL(__imp__sub_83B9A42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A430"))) PPC_WEAK_FUNC(sub_83B9A430);
PPC_FUNC_IMPL(__imp__sub_83B9A430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,11928
	ctx.r3.s64 = ctx.r11.s64 + 11928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A43C"))) PPC_WEAK_FUNC(sub_83B9A43C);
PPC_FUNC_IMPL(__imp__sub_83B9A43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A440"))) PPC_WEAK_FUNC(sub_83B9A440);
PPC_FUNC_IMPL(__imp__sub_83B9A440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,11936
	ctx.r3.s64 = ctx.r11.s64 + 11936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A44C"))) PPC_WEAK_FUNC(sub_83B9A44C);
PPC_FUNC_IMPL(__imp__sub_83B9A44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A450"))) PPC_WEAK_FUNC(sub_83B9A450);
PPC_FUNC_IMPL(__imp__sub_83B9A450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,11944
	ctx.r3.s64 = ctx.r11.s64 + 11944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A45C"))) PPC_WEAK_FUNC(sub_83B9A45C);
PPC_FUNC_IMPL(__imp__sub_83B9A45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A460"))) PPC_WEAK_FUNC(sub_83B9A460);
PPC_FUNC_IMPL(__imp__sub_83B9A460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,11952
	ctx.r3.s64 = ctx.r11.s64 + 11952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A46C"))) PPC_WEAK_FUNC(sub_83B9A46C);
PPC_FUNC_IMPL(__imp__sub_83B9A46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A470"))) PPC_WEAK_FUNC(sub_83B9A470);
PPC_FUNC_IMPL(__imp__sub_83B9A470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,11960
	ctx.r3.s64 = ctx.r11.s64 + 11960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A47C"))) PPC_WEAK_FUNC(sub_83B9A47C);
PPC_FUNC_IMPL(__imp__sub_83B9A47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A480"))) PPC_WEAK_FUNC(sub_83B9A480);
PPC_FUNC_IMPL(__imp__sub_83B9A480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,11968
	ctx.r3.s64 = ctx.r11.s64 + 11968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A48C"))) PPC_WEAK_FUNC(sub_83B9A48C);
PPC_FUNC_IMPL(__imp__sub_83B9A48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A490"))) PPC_WEAK_FUNC(sub_83B9A490);
PPC_FUNC_IMPL(__imp__sub_83B9A490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,11976
	ctx.r3.s64 = ctx.r11.s64 + 11976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A49C"))) PPC_WEAK_FUNC(sub_83B9A49C);
PPC_FUNC_IMPL(__imp__sub_83B9A49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A4A0"))) PPC_WEAK_FUNC(sub_83B9A4A0);
PPC_FUNC_IMPL(__imp__sub_83B9A4A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,11984
	ctx.r3.s64 = ctx.r11.s64 + 11984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A4AC"))) PPC_WEAK_FUNC(sub_83B9A4AC);
PPC_FUNC_IMPL(__imp__sub_83B9A4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A4B0"))) PPC_WEAK_FUNC(sub_83B9A4B0);
PPC_FUNC_IMPL(__imp__sub_83B9A4B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,11992
	ctx.r3.s64 = ctx.r11.s64 + 11992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A4BC"))) PPC_WEAK_FUNC(sub_83B9A4BC);
PPC_FUNC_IMPL(__imp__sub_83B9A4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A4C0"))) PPC_WEAK_FUNC(sub_83B9A4C0);
PPC_FUNC_IMPL(__imp__sub_83B9A4C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12000
	ctx.r3.s64 = ctx.r11.s64 + 12000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A4CC"))) PPC_WEAK_FUNC(sub_83B9A4CC);
PPC_FUNC_IMPL(__imp__sub_83B9A4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A4D0"))) PPC_WEAK_FUNC(sub_83B9A4D0);
PPC_FUNC_IMPL(__imp__sub_83B9A4D0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-4088
	ctx.r7.s64 = ctx.r8.s64 + -4088;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-4088(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4088);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-4088(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4088, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B9A4F8"))) PPC_WEAK_FUNC(sub_83B9A4F8);
PPC_FUNC_IMPL(__imp__sub_83B9A4F8) {
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
	// addi r3,r11,-4092
	ctx.r3.s64 = ctx.r11.s64 + -4092;
	// bl 0x83523120
	ctx.lr = 0x83B9A510;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,12008
	ctx.r3.s64 = ctx.r10.s64 + 12008;
	// bl 0x831cdcc8
	ctx.lr = 0x83B9A51C;
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

__attribute__((alias("__imp__sub_83B9A52C"))) PPC_WEAK_FUNC(sub_83B9A52C);
PPC_FUNC_IMPL(__imp__sub_83B9A52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A530"))) PPC_WEAK_FUNC(sub_83B9A530);
PPC_FUNC_IMPL(__imp__sub_83B9A530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12024
	ctx.r3.s64 = ctx.r11.s64 + 12024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A53C"))) PPC_WEAK_FUNC(sub_83B9A53C);
PPC_FUNC_IMPL(__imp__sub_83B9A53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A540"))) PPC_WEAK_FUNC(sub_83B9A540);
PPC_FUNC_IMPL(__imp__sub_83B9A540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12032
	ctx.r3.s64 = ctx.r11.s64 + 12032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A54C"))) PPC_WEAK_FUNC(sub_83B9A54C);
PPC_FUNC_IMPL(__imp__sub_83B9A54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A550"))) PPC_WEAK_FUNC(sub_83B9A550);
PPC_FUNC_IMPL(__imp__sub_83B9A550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12040
	ctx.r3.s64 = ctx.r11.s64 + 12040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A55C"))) PPC_WEAK_FUNC(sub_83B9A55C);
PPC_FUNC_IMPL(__imp__sub_83B9A55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A560"))) PPC_WEAK_FUNC(sub_83B9A560);
PPC_FUNC_IMPL(__imp__sub_83B9A560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12048
	ctx.r3.s64 = ctx.r11.s64 + 12048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A56C"))) PPC_WEAK_FUNC(sub_83B9A56C);
PPC_FUNC_IMPL(__imp__sub_83B9A56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A570"))) PPC_WEAK_FUNC(sub_83B9A570);
PPC_FUNC_IMPL(__imp__sub_83B9A570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A57C"))) PPC_WEAK_FUNC(sub_83B9A57C);
PPC_FUNC_IMPL(__imp__sub_83B9A57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A580"))) PPC_WEAK_FUNC(sub_83B9A580);
PPC_FUNC_IMPL(__imp__sub_83B9A580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12064
	ctx.r3.s64 = ctx.r11.s64 + 12064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A58C"))) PPC_WEAK_FUNC(sub_83B9A58C);
PPC_FUNC_IMPL(__imp__sub_83B9A58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A590"))) PPC_WEAK_FUNC(sub_83B9A590);
PPC_FUNC_IMPL(__imp__sub_83B9A590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12072
	ctx.r3.s64 = ctx.r11.s64 + 12072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A59C"))) PPC_WEAK_FUNC(sub_83B9A59C);
PPC_FUNC_IMPL(__imp__sub_83B9A59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A5A0"))) PPC_WEAK_FUNC(sub_83B9A5A0);
PPC_FUNC_IMPL(__imp__sub_83B9A5A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12080
	ctx.r3.s64 = ctx.r11.s64 + 12080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A5AC"))) PPC_WEAK_FUNC(sub_83B9A5AC);
PPC_FUNC_IMPL(__imp__sub_83B9A5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A5B0"))) PPC_WEAK_FUNC(sub_83B9A5B0);
PPC_FUNC_IMPL(__imp__sub_83B9A5B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12088
	ctx.r3.s64 = ctx.r11.s64 + 12088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A5BC"))) PPC_WEAK_FUNC(sub_83B9A5BC);
PPC_FUNC_IMPL(__imp__sub_83B9A5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A5C0"))) PPC_WEAK_FUNC(sub_83B9A5C0);
PPC_FUNC_IMPL(__imp__sub_83B9A5C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12096
	ctx.r3.s64 = ctx.r11.s64 + 12096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A5CC"))) PPC_WEAK_FUNC(sub_83B9A5CC);
PPC_FUNC_IMPL(__imp__sub_83B9A5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A5D0"))) PPC_WEAK_FUNC(sub_83B9A5D0);
PPC_FUNC_IMPL(__imp__sub_83B9A5D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12104
	ctx.r3.s64 = ctx.r11.s64 + 12104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A5DC"))) PPC_WEAK_FUNC(sub_83B9A5DC);
PPC_FUNC_IMPL(__imp__sub_83B9A5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A5E0"))) PPC_WEAK_FUNC(sub_83B9A5E0);
PPC_FUNC_IMPL(__imp__sub_83B9A5E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12112
	ctx.r3.s64 = ctx.r11.s64 + 12112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A5EC"))) PPC_WEAK_FUNC(sub_83B9A5EC);
PPC_FUNC_IMPL(__imp__sub_83B9A5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A5F0"))) PPC_WEAK_FUNC(sub_83B9A5F0);
PPC_FUNC_IMPL(__imp__sub_83B9A5F0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-4076
	ctx.r7.s64 = ctx.r8.s64 + -4076;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-4076(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4076);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-4076(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4076, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B9A618"))) PPC_WEAK_FUNC(sub_83B9A618);
PPC_FUNC_IMPL(__imp__sub_83B9A618) {
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
	// addi r3,r11,-4080
	ctx.r3.s64 = ctx.r11.s64 + -4080;
	// bl 0x83523120
	ctx.lr = 0x83B9A630;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,12120
	ctx.r3.s64 = ctx.r10.s64 + 12120;
	// bl 0x831cdcc8
	ctx.lr = 0x83B9A63C;
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

__attribute__((alias("__imp__sub_83B9A64C"))) PPC_WEAK_FUNC(sub_83B9A64C);
PPC_FUNC_IMPL(__imp__sub_83B9A64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A650"))) PPC_WEAK_FUNC(sub_83B9A650);
PPC_FUNC_IMPL(__imp__sub_83B9A650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12136
	ctx.r3.s64 = ctx.r11.s64 + 12136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A65C"))) PPC_WEAK_FUNC(sub_83B9A65C);
PPC_FUNC_IMPL(__imp__sub_83B9A65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A660"))) PPC_WEAK_FUNC(sub_83B9A660);
PPC_FUNC_IMPL(__imp__sub_83B9A660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12144
	ctx.r3.s64 = ctx.r11.s64 + 12144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A66C"))) PPC_WEAK_FUNC(sub_83B9A66C);
PPC_FUNC_IMPL(__imp__sub_83B9A66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A670"))) PPC_WEAK_FUNC(sub_83B9A670);
PPC_FUNC_IMPL(__imp__sub_83B9A670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12152
	ctx.r3.s64 = ctx.r11.s64 + 12152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A67C"))) PPC_WEAK_FUNC(sub_83B9A67C);
PPC_FUNC_IMPL(__imp__sub_83B9A67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A680"))) PPC_WEAK_FUNC(sub_83B9A680);
PPC_FUNC_IMPL(__imp__sub_83B9A680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12160
	ctx.r3.s64 = ctx.r11.s64 + 12160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A68C"))) PPC_WEAK_FUNC(sub_83B9A68C);
PPC_FUNC_IMPL(__imp__sub_83B9A68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A690"))) PPC_WEAK_FUNC(sub_83B9A690);
PPC_FUNC_IMPL(__imp__sub_83B9A690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12168
	ctx.r3.s64 = ctx.r11.s64 + 12168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A69C"))) PPC_WEAK_FUNC(sub_83B9A69C);
PPC_FUNC_IMPL(__imp__sub_83B9A69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A6A0"))) PPC_WEAK_FUNC(sub_83B9A6A0);
PPC_FUNC_IMPL(__imp__sub_83B9A6A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12176
	ctx.r3.s64 = ctx.r11.s64 + 12176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A6AC"))) PPC_WEAK_FUNC(sub_83B9A6AC);
PPC_FUNC_IMPL(__imp__sub_83B9A6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A6B0"))) PPC_WEAK_FUNC(sub_83B9A6B0);
PPC_FUNC_IMPL(__imp__sub_83B9A6B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12184
	ctx.r3.s64 = ctx.r11.s64 + 12184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A6BC"))) PPC_WEAK_FUNC(sub_83B9A6BC);
PPC_FUNC_IMPL(__imp__sub_83B9A6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A6C0"))) PPC_WEAK_FUNC(sub_83B9A6C0);
PPC_FUNC_IMPL(__imp__sub_83B9A6C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12192
	ctx.r3.s64 = ctx.r11.s64 + 12192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A6CC"))) PPC_WEAK_FUNC(sub_83B9A6CC);
PPC_FUNC_IMPL(__imp__sub_83B9A6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A6D0"))) PPC_WEAK_FUNC(sub_83B9A6D0);
PPC_FUNC_IMPL(__imp__sub_83B9A6D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12200
	ctx.r3.s64 = ctx.r11.s64 + 12200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A6DC"))) PPC_WEAK_FUNC(sub_83B9A6DC);
PPC_FUNC_IMPL(__imp__sub_83B9A6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A6E0"))) PPC_WEAK_FUNC(sub_83B9A6E0);
PPC_FUNC_IMPL(__imp__sub_83B9A6E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12208
	ctx.r3.s64 = ctx.r11.s64 + 12208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A6EC"))) PPC_WEAK_FUNC(sub_83B9A6EC);
PPC_FUNC_IMPL(__imp__sub_83B9A6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A6F0"))) PPC_WEAK_FUNC(sub_83B9A6F0);
PPC_FUNC_IMPL(__imp__sub_83B9A6F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12216
	ctx.r3.s64 = ctx.r11.s64 + 12216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A6FC"))) PPC_WEAK_FUNC(sub_83B9A6FC);
PPC_FUNC_IMPL(__imp__sub_83B9A6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A700"))) PPC_WEAK_FUNC(sub_83B9A700);
PPC_FUNC_IMPL(__imp__sub_83B9A700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12224
	ctx.r3.s64 = ctx.r11.s64 + 12224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A70C"))) PPC_WEAK_FUNC(sub_83B9A70C);
PPC_FUNC_IMPL(__imp__sub_83B9A70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A710"))) PPC_WEAK_FUNC(sub_83B9A710);
PPC_FUNC_IMPL(__imp__sub_83B9A710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12232
	ctx.r3.s64 = ctx.r11.s64 + 12232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A71C"))) PPC_WEAK_FUNC(sub_83B9A71C);
PPC_FUNC_IMPL(__imp__sub_83B9A71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A720"))) PPC_WEAK_FUNC(sub_83B9A720);
PPC_FUNC_IMPL(__imp__sub_83B9A720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12240
	ctx.r3.s64 = ctx.r11.s64 + 12240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A72C"))) PPC_WEAK_FUNC(sub_83B9A72C);
PPC_FUNC_IMPL(__imp__sub_83B9A72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A730"))) PPC_WEAK_FUNC(sub_83B9A730);
PPC_FUNC_IMPL(__imp__sub_83B9A730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12248
	ctx.r3.s64 = ctx.r11.s64 + 12248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A73C"))) PPC_WEAK_FUNC(sub_83B9A73C);
PPC_FUNC_IMPL(__imp__sub_83B9A73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A740"))) PPC_WEAK_FUNC(sub_83B9A740);
PPC_FUNC_IMPL(__imp__sub_83B9A740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12256
	ctx.r3.s64 = ctx.r11.s64 + 12256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A74C"))) PPC_WEAK_FUNC(sub_83B9A74C);
PPC_FUNC_IMPL(__imp__sub_83B9A74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A750"))) PPC_WEAK_FUNC(sub_83B9A750);
PPC_FUNC_IMPL(__imp__sub_83B9A750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12264
	ctx.r3.s64 = ctx.r11.s64 + 12264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A75C"))) PPC_WEAK_FUNC(sub_83B9A75C);
PPC_FUNC_IMPL(__imp__sub_83B9A75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A760"))) PPC_WEAK_FUNC(sub_83B9A760);
PPC_FUNC_IMPL(__imp__sub_83B9A760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12272
	ctx.r3.s64 = ctx.r11.s64 + 12272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A76C"))) PPC_WEAK_FUNC(sub_83B9A76C);
PPC_FUNC_IMPL(__imp__sub_83B9A76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A770"))) PPC_WEAK_FUNC(sub_83B9A770);
PPC_FUNC_IMPL(__imp__sub_83B9A770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12280
	ctx.r3.s64 = ctx.r11.s64 + 12280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A77C"))) PPC_WEAK_FUNC(sub_83B9A77C);
PPC_FUNC_IMPL(__imp__sub_83B9A77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A780"))) PPC_WEAK_FUNC(sub_83B9A780);
PPC_FUNC_IMPL(__imp__sub_83B9A780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12288
	ctx.r3.s64 = ctx.r11.s64 + 12288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A78C"))) PPC_WEAK_FUNC(sub_83B9A78C);
PPC_FUNC_IMPL(__imp__sub_83B9A78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A790"))) PPC_WEAK_FUNC(sub_83B9A790);
PPC_FUNC_IMPL(__imp__sub_83B9A790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12296
	ctx.r3.s64 = ctx.r11.s64 + 12296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A79C"))) PPC_WEAK_FUNC(sub_83B9A79C);
PPC_FUNC_IMPL(__imp__sub_83B9A79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A7A0"))) PPC_WEAK_FUNC(sub_83B9A7A0);
PPC_FUNC_IMPL(__imp__sub_83B9A7A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12304
	ctx.r3.s64 = ctx.r11.s64 + 12304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A7AC"))) PPC_WEAK_FUNC(sub_83B9A7AC);
PPC_FUNC_IMPL(__imp__sub_83B9A7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A7B0"))) PPC_WEAK_FUNC(sub_83B9A7B0);
PPC_FUNC_IMPL(__imp__sub_83B9A7B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12312
	ctx.r3.s64 = ctx.r11.s64 + 12312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A7BC"))) PPC_WEAK_FUNC(sub_83B9A7BC);
PPC_FUNC_IMPL(__imp__sub_83B9A7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A7C0"))) PPC_WEAK_FUNC(sub_83B9A7C0);
PPC_FUNC_IMPL(__imp__sub_83B9A7C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12320
	ctx.r3.s64 = ctx.r11.s64 + 12320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A7CC"))) PPC_WEAK_FUNC(sub_83B9A7CC);
PPC_FUNC_IMPL(__imp__sub_83B9A7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A7D0"))) PPC_WEAK_FUNC(sub_83B9A7D0);
PPC_FUNC_IMPL(__imp__sub_83B9A7D0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-4060
	ctx.r7.s64 = ctx.r8.s64 + -4060;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-4060(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4060);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-4060(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4060, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B9A7F8"))) PPC_WEAK_FUNC(sub_83B9A7F8);
PPC_FUNC_IMPL(__imp__sub_83B9A7F8) {
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
	// addi r3,r11,-4064
	ctx.r3.s64 = ctx.r11.s64 + -4064;
	// bl 0x83523120
	ctx.lr = 0x83B9A810;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,12328
	ctx.r3.s64 = ctx.r10.s64 + 12328;
	// bl 0x831cdcc8
	ctx.lr = 0x83B9A81C;
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

__attribute__((alias("__imp__sub_83B9A82C"))) PPC_WEAK_FUNC(sub_83B9A82C);
PPC_FUNC_IMPL(__imp__sub_83B9A82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A830"))) PPC_WEAK_FUNC(sub_83B9A830);
PPC_FUNC_IMPL(__imp__sub_83B9A830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12344
	ctx.r3.s64 = ctx.r11.s64 + 12344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A83C"))) PPC_WEAK_FUNC(sub_83B9A83C);
PPC_FUNC_IMPL(__imp__sub_83B9A83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A840"))) PPC_WEAK_FUNC(sub_83B9A840);
PPC_FUNC_IMPL(__imp__sub_83B9A840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12352
	ctx.r3.s64 = ctx.r11.s64 + 12352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A84C"))) PPC_WEAK_FUNC(sub_83B9A84C);
PPC_FUNC_IMPL(__imp__sub_83B9A84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A850"))) PPC_WEAK_FUNC(sub_83B9A850);
PPC_FUNC_IMPL(__imp__sub_83B9A850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12360
	ctx.r3.s64 = ctx.r11.s64 + 12360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A85C"))) PPC_WEAK_FUNC(sub_83B9A85C);
PPC_FUNC_IMPL(__imp__sub_83B9A85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A860"))) PPC_WEAK_FUNC(sub_83B9A860);
PPC_FUNC_IMPL(__imp__sub_83B9A860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12368
	ctx.r3.s64 = ctx.r11.s64 + 12368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A86C"))) PPC_WEAK_FUNC(sub_83B9A86C);
PPC_FUNC_IMPL(__imp__sub_83B9A86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A870"))) PPC_WEAK_FUNC(sub_83B9A870);
PPC_FUNC_IMPL(__imp__sub_83B9A870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12376
	ctx.r3.s64 = ctx.r11.s64 + 12376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A87C"))) PPC_WEAK_FUNC(sub_83B9A87C);
PPC_FUNC_IMPL(__imp__sub_83B9A87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A880"))) PPC_WEAK_FUNC(sub_83B9A880);
PPC_FUNC_IMPL(__imp__sub_83B9A880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12384
	ctx.r3.s64 = ctx.r11.s64 + 12384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A88C"))) PPC_WEAK_FUNC(sub_83B9A88C);
PPC_FUNC_IMPL(__imp__sub_83B9A88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A890"))) PPC_WEAK_FUNC(sub_83B9A890);
PPC_FUNC_IMPL(__imp__sub_83B9A890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12392
	ctx.r3.s64 = ctx.r11.s64 + 12392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A89C"))) PPC_WEAK_FUNC(sub_83B9A89C);
PPC_FUNC_IMPL(__imp__sub_83B9A89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A8A0"))) PPC_WEAK_FUNC(sub_83B9A8A0);
PPC_FUNC_IMPL(__imp__sub_83B9A8A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12400
	ctx.r3.s64 = ctx.r11.s64 + 12400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A8AC"))) PPC_WEAK_FUNC(sub_83B9A8AC);
PPC_FUNC_IMPL(__imp__sub_83B9A8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A8B0"))) PPC_WEAK_FUNC(sub_83B9A8B0);
PPC_FUNC_IMPL(__imp__sub_83B9A8B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12408
	ctx.r3.s64 = ctx.r11.s64 + 12408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A8BC"))) PPC_WEAK_FUNC(sub_83B9A8BC);
PPC_FUNC_IMPL(__imp__sub_83B9A8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A8C0"))) PPC_WEAK_FUNC(sub_83B9A8C0);
PPC_FUNC_IMPL(__imp__sub_83B9A8C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12416
	ctx.r3.s64 = ctx.r11.s64 + 12416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A8CC"))) PPC_WEAK_FUNC(sub_83B9A8CC);
PPC_FUNC_IMPL(__imp__sub_83B9A8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A8D0"))) PPC_WEAK_FUNC(sub_83B9A8D0);
PPC_FUNC_IMPL(__imp__sub_83B9A8D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12424
	ctx.r3.s64 = ctx.r11.s64 + 12424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A8DC"))) PPC_WEAK_FUNC(sub_83B9A8DC);
PPC_FUNC_IMPL(__imp__sub_83B9A8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A8E0"))) PPC_WEAK_FUNC(sub_83B9A8E0);
PPC_FUNC_IMPL(__imp__sub_83B9A8E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12432
	ctx.r3.s64 = ctx.r11.s64 + 12432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A8EC"))) PPC_WEAK_FUNC(sub_83B9A8EC);
PPC_FUNC_IMPL(__imp__sub_83B9A8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A8F0"))) PPC_WEAK_FUNC(sub_83B9A8F0);
PPC_FUNC_IMPL(__imp__sub_83B9A8F0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-4032
	ctx.r7.s64 = ctx.r8.s64 + -4032;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-4032(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4032);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-4032(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4032, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B9A918"))) PPC_WEAK_FUNC(sub_83B9A918);
PPC_FUNC_IMPL(__imp__sub_83B9A918) {
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
	// addi r3,r11,-4048
	ctx.r3.s64 = ctx.r11.s64 + -4048;
	// bl 0x83523120
	ctx.lr = 0x83B9A930;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,12440
	ctx.r3.s64 = ctx.r10.s64 + 12440;
	// bl 0x831cdcc8
	ctx.lr = 0x83B9A93C;
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

__attribute__((alias("__imp__sub_83B9A94C"))) PPC_WEAK_FUNC(sub_83B9A94C);
PPC_FUNC_IMPL(__imp__sub_83B9A94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A950"))) PPC_WEAK_FUNC(sub_83B9A950);
PPC_FUNC_IMPL(__imp__sub_83B9A950) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,1164
	ctx.r6.s64 = ctx.r7.s64 + 1164;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,1080(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 1080);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-4032(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4032);
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
	// std r9,1164(r7)
	PPC_STORE_U64(ctx.r7.u32 + 1164, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B9A998"))) PPC_WEAK_FUNC(sub_83B9A998);
PPC_FUNC_IMPL(__imp__sub_83B9A998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12456
	ctx.r3.s64 = ctx.r11.s64 + 12456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9A9A4"))) PPC_WEAK_FUNC(sub_83B9A9A4);
PPC_FUNC_IMPL(__imp__sub_83B9A9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A9A8"))) PPC_WEAK_FUNC(sub_83B9A9A8);
PPC_FUNC_IMPL(__imp__sub_83B9A9A8) {
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
	// addi r3,r11,-4024
	ctx.r3.s64 = ctx.r11.s64 + -4024;
	// bl 0x8259af80
	ctx.lr = 0x83B9A9C0;
	sub_8259AF80(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,12472
	ctx.r3.s64 = ctx.r10.s64 + 12472;
	// bl 0x831cdcc8
	ctx.lr = 0x83B9A9CC;
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

__attribute__((alias("__imp__sub_83B9A9DC"))) PPC_WEAK_FUNC(sub_83B9A9DC);
PPC_FUNC_IMPL(__imp__sub_83B9A9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9A9E0"))) PPC_WEAK_FUNC(sub_83B9A9E0);
PPC_FUNC_IMPL(__imp__sub_83B9A9E0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-4044
	ctx.r11.s64 = ctx.r8.s64 + -4044;
	// lis r6,-31792
	ctx.r6.s64 = -2083520512;
	// lwz r10,1128(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1128);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,12464
	ctx.r3.s64 = ctx.r6.s64 + 12464;
	// stw r10,-4044(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4044, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9AA10"))) PPC_WEAK_FUNC(sub_83B9AA10);
PPC_FUNC_IMPL(__imp__sub_83B9AA10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12480
	ctx.r3.s64 = ctx.r11.s64 + 12480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9AA1C"))) PPC_WEAK_FUNC(sub_83B9AA1C);
PPC_FUNC_IMPL(__imp__sub_83B9AA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9AA20"))) PPC_WEAK_FUNC(sub_83B9AA20);
PPC_FUNC_IMPL(__imp__sub_83B9AA20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12488
	ctx.r3.s64 = ctx.r11.s64 + 12488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9AA2C"))) PPC_WEAK_FUNC(sub_83B9AA2C);
PPC_FUNC_IMPL(__imp__sub_83B9AA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9AA30"))) PPC_WEAK_FUNC(sub_83B9AA30);
PPC_FUNC_IMPL(__imp__sub_83B9AA30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12496
	ctx.r3.s64 = ctx.r11.s64 + 12496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9AA3C"))) PPC_WEAK_FUNC(sub_83B9AA3C);
PPC_FUNC_IMPL(__imp__sub_83B9AA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9AA40"))) PPC_WEAK_FUNC(sub_83B9AA40);
PPC_FUNC_IMPL(__imp__sub_83B9AA40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12504
	ctx.r3.s64 = ctx.r11.s64 + 12504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9AA4C"))) PPC_WEAK_FUNC(sub_83B9AA4C);
PPC_FUNC_IMPL(__imp__sub_83B9AA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9AA50"))) PPC_WEAK_FUNC(sub_83B9AA50);
PPC_FUNC_IMPL(__imp__sub_83B9AA50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12512
	ctx.r3.s64 = ctx.r11.s64 + 12512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9AA5C"))) PPC_WEAK_FUNC(sub_83B9AA5C);
PPC_FUNC_IMPL(__imp__sub_83B9AA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9AA60"))) PPC_WEAK_FUNC(sub_83B9AA60);
PPC_FUNC_IMPL(__imp__sub_83B9AA60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12520
	ctx.r3.s64 = ctx.r11.s64 + 12520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9AA6C"))) PPC_WEAK_FUNC(sub_83B9AA6C);
PPC_FUNC_IMPL(__imp__sub_83B9AA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9AA70"))) PPC_WEAK_FUNC(sub_83B9AA70);
PPC_FUNC_IMPL(__imp__sub_83B9AA70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12528
	ctx.r3.s64 = ctx.r11.s64 + 12528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9AA7C"))) PPC_WEAK_FUNC(sub_83B9AA7C);
PPC_FUNC_IMPL(__imp__sub_83B9AA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9AA80"))) PPC_WEAK_FUNC(sub_83B9AA80);
PPC_FUNC_IMPL(__imp__sub_83B9AA80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12536
	ctx.r3.s64 = ctx.r11.s64 + 12536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9AA8C"))) PPC_WEAK_FUNC(sub_83B9AA8C);
PPC_FUNC_IMPL(__imp__sub_83B9AA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9AA90"))) PPC_WEAK_FUNC(sub_83B9AA90);
PPC_FUNC_IMPL(__imp__sub_83B9AA90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12544
	ctx.r3.s64 = ctx.r11.s64 + 12544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9AA9C"))) PPC_WEAK_FUNC(sub_83B9AA9C);
PPC_FUNC_IMPL(__imp__sub_83B9AA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9AAA0"))) PPC_WEAK_FUNC(sub_83B9AAA0);
PPC_FUNC_IMPL(__imp__sub_83B9AAA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12552
	ctx.r3.s64 = ctx.r11.s64 + 12552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9AAAC"))) PPC_WEAK_FUNC(sub_83B9AAAC);
PPC_FUNC_IMPL(__imp__sub_83B9AAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B9AAB0"))) PPC_WEAK_FUNC(sub_83B9AAB0);
PPC_FUNC_IMPL(__imp__sub_83B9AAB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,12560
	ctx.r3.s64 = ctx.r11.s64 + 12560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B9AABC"))) PPC_WEAK_FUNC(sub_83B9AABC);
PPC_FUNC_IMPL(__imp__sub_83B9AABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

