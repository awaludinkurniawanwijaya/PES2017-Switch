#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83CF00B4"))) PPC_WEAK_FUNC(sub_83CF00B4);
PPC_FUNC_IMPL(__imp__sub_83CF00B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF00B8"))) PPC_WEAK_FUNC(sub_83CF00B8);
PPC_FUNC_IMPL(__imp__sub_83CF00B8) {
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
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// addi r3,r11,-516
	ctx.r3.s64 = ctx.r11.s64 + -516;
	// bl 0x83523120
	ctx.lr = 0x83CF00D0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,19632
	ctx.r3.s64 = ctx.r10.s64 + 19632;
	// bl 0x831cdcc8
	ctx.lr = 0x83CF00DC;
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

__attribute__((alias("__imp__sub_83CF00EC"))) PPC_WEAK_FUNC(sub_83CF00EC);
PPC_FUNC_IMPL(__imp__sub_83CF00EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF00F0"))) PPC_WEAK_FUNC(sub_83CF00F0);
PPC_FUNC_IMPL(__imp__sub_83CF00F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,19648
	ctx.r3.s64 = ctx.r11.s64 + 19648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF00FC"))) PPC_WEAK_FUNC(sub_83CF00FC);
PPC_FUNC_IMPL(__imp__sub_83CF00FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0100"))) PPC_WEAK_FUNC(sub_83CF0100);
PPC_FUNC_IMPL(__imp__sub_83CF0100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,19656
	ctx.r3.s64 = ctx.r11.s64 + 19656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF010C"))) PPC_WEAK_FUNC(sub_83CF010C);
PPC_FUNC_IMPL(__imp__sub_83CF010C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0110"))) PPC_WEAK_FUNC(sub_83CF0110);
PPC_FUNC_IMPL(__imp__sub_83CF0110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,19664
	ctx.r3.s64 = ctx.r11.s64 + 19664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF011C"))) PPC_WEAK_FUNC(sub_83CF011C);
PPC_FUNC_IMPL(__imp__sub_83CF011C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0120"))) PPC_WEAK_FUNC(sub_83CF0120);
PPC_FUNC_IMPL(__imp__sub_83CF0120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,19672
	ctx.r3.s64 = ctx.r11.s64 + 19672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF012C"))) PPC_WEAK_FUNC(sub_83CF012C);
PPC_FUNC_IMPL(__imp__sub_83CF012C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0130"))) PPC_WEAK_FUNC(sub_83CF0130);
PPC_FUNC_IMPL(__imp__sub_83CF0130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,19680
	ctx.r3.s64 = ctx.r11.s64 + 19680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF013C"))) PPC_WEAK_FUNC(sub_83CF013C);
PPC_FUNC_IMPL(__imp__sub_83CF013C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0140"))) PPC_WEAK_FUNC(sub_83CF0140);
PPC_FUNC_IMPL(__imp__sub_83CF0140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,19688
	ctx.r3.s64 = ctx.r11.s64 + 19688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF014C"))) PPC_WEAK_FUNC(sub_83CF014C);
PPC_FUNC_IMPL(__imp__sub_83CF014C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0150"))) PPC_WEAK_FUNC(sub_83CF0150);
PPC_FUNC_IMPL(__imp__sub_83CF0150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,19696
	ctx.r3.s64 = ctx.r11.s64 + 19696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF015C"))) PPC_WEAK_FUNC(sub_83CF015C);
PPC_FUNC_IMPL(__imp__sub_83CF015C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0160"))) PPC_WEAK_FUNC(sub_83CF0160);
PPC_FUNC_IMPL(__imp__sub_83CF0160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,19704
	ctx.r3.s64 = ctx.r11.s64 + 19704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF016C"))) PPC_WEAK_FUNC(sub_83CF016C);
PPC_FUNC_IMPL(__imp__sub_83CF016C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0170"))) PPC_WEAK_FUNC(sub_83CF0170);
PPC_FUNC_IMPL(__imp__sub_83CF0170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,19712
	ctx.r3.s64 = ctx.r11.s64 + 19712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF017C"))) PPC_WEAK_FUNC(sub_83CF017C);
PPC_FUNC_IMPL(__imp__sub_83CF017C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0180"))) PPC_WEAK_FUNC(sub_83CF0180);
PPC_FUNC_IMPL(__imp__sub_83CF0180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,19720
	ctx.r3.s64 = ctx.r11.s64 + 19720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF018C"))) PPC_WEAK_FUNC(sub_83CF018C);
PPC_FUNC_IMPL(__imp__sub_83CF018C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0190"))) PPC_WEAK_FUNC(sub_83CF0190);
PPC_FUNC_IMPL(__imp__sub_83CF0190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,19728
	ctx.r3.s64 = ctx.r11.s64 + 19728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF019C"))) PPC_WEAK_FUNC(sub_83CF019C);
PPC_FUNC_IMPL(__imp__sub_83CF019C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF01A0"))) PPC_WEAK_FUNC(sub_83CF01A0);
PPC_FUNC_IMPL(__imp__sub_83CF01A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,19736
	ctx.r3.s64 = ctx.r11.s64 + 19736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF01AC"))) PPC_WEAK_FUNC(sub_83CF01AC);
PPC_FUNC_IMPL(__imp__sub_83CF01AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF01B0"))) PPC_WEAK_FUNC(sub_83CF01B0);
PPC_FUNC_IMPL(__imp__sub_83CF01B0) {
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
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// addi r3,r11,-508
	ctx.r3.s64 = ctx.r11.s64 + -508;
	// bl 0x83523120
	ctx.lr = 0x83CF01C8;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,19744
	ctx.r3.s64 = ctx.r10.s64 + 19744;
	// bl 0x831cdcc8
	ctx.lr = 0x83CF01D4;
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

__attribute__((alias("__imp__sub_83CF01E4"))) PPC_WEAK_FUNC(sub_83CF01E4);
PPC_FUNC_IMPL(__imp__sub_83CF01E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF01E8"))) PPC_WEAK_FUNC(sub_83CF01E8);
PPC_FUNC_IMPL(__imp__sub_83CF01E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,19760
	ctx.r3.s64 = ctx.r11.s64 + 19760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF01F4"))) PPC_WEAK_FUNC(sub_83CF01F4);
PPC_FUNC_IMPL(__imp__sub_83CF01F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF01F8"))) PPC_WEAK_FUNC(sub_83CF01F8);
PPC_FUNC_IMPL(__imp__sub_83CF01F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,19768
	ctx.r3.s64 = ctx.r11.s64 + 19768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0204"))) PPC_WEAK_FUNC(sub_83CF0204);
PPC_FUNC_IMPL(__imp__sub_83CF0204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0208"))) PPC_WEAK_FUNC(sub_83CF0208);
PPC_FUNC_IMPL(__imp__sub_83CF0208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,19776
	ctx.r3.s64 = ctx.r11.s64 + 19776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0214"))) PPC_WEAK_FUNC(sub_83CF0214);
PPC_FUNC_IMPL(__imp__sub_83CF0214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0218"))) PPC_WEAK_FUNC(sub_83CF0218);
PPC_FUNC_IMPL(__imp__sub_83CF0218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,19784
	ctx.r3.s64 = ctx.r11.s64 + 19784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0224"))) PPC_WEAK_FUNC(sub_83CF0224);
PPC_FUNC_IMPL(__imp__sub_83CF0224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0228"))) PPC_WEAK_FUNC(sub_83CF0228);
PPC_FUNC_IMPL(__imp__sub_83CF0228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,19792
	ctx.r3.s64 = ctx.r11.s64 + 19792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0234"))) PPC_WEAK_FUNC(sub_83CF0234);
PPC_FUNC_IMPL(__imp__sub_83CF0234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0238"))) PPC_WEAK_FUNC(sub_83CF0238);
PPC_FUNC_IMPL(__imp__sub_83CF0238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,19800
	ctx.r3.s64 = ctx.r11.s64 + 19800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0244"))) PPC_WEAK_FUNC(sub_83CF0244);
PPC_FUNC_IMPL(__imp__sub_83CF0244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0248"))) PPC_WEAK_FUNC(sub_83CF0248);
PPC_FUNC_IMPL(__imp__sub_83CF0248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,19808
	ctx.r3.s64 = ctx.r11.s64 + 19808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0254"))) PPC_WEAK_FUNC(sub_83CF0254);
PPC_FUNC_IMPL(__imp__sub_83CF0254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0258"))) PPC_WEAK_FUNC(sub_83CF0258);
PPC_FUNC_IMPL(__imp__sub_83CF0258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,19816
	ctx.r3.s64 = ctx.r11.s64 + 19816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0264"))) PPC_WEAK_FUNC(sub_83CF0264);
PPC_FUNC_IMPL(__imp__sub_83CF0264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0268"))) PPC_WEAK_FUNC(sub_83CF0268);
PPC_FUNC_IMPL(__imp__sub_83CF0268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,19824
	ctx.r3.s64 = ctx.r11.s64 + 19824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0274"))) PPC_WEAK_FUNC(sub_83CF0274);
PPC_FUNC_IMPL(__imp__sub_83CF0274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0278"))) PPC_WEAK_FUNC(sub_83CF0278);
PPC_FUNC_IMPL(__imp__sub_83CF0278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,19832
	ctx.r3.s64 = ctx.r11.s64 + 19832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0284"))) PPC_WEAK_FUNC(sub_83CF0284);
PPC_FUNC_IMPL(__imp__sub_83CF0284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0288"))) PPC_WEAK_FUNC(sub_83CF0288);
PPC_FUNC_IMPL(__imp__sub_83CF0288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,19840
	ctx.r3.s64 = ctx.r11.s64 + 19840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0294"))) PPC_WEAK_FUNC(sub_83CF0294);
PPC_FUNC_IMPL(__imp__sub_83CF0294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0298"))) PPC_WEAK_FUNC(sub_83CF0298);
PPC_FUNC_IMPL(__imp__sub_83CF0298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,19848
	ctx.r3.s64 = ctx.r11.s64 + 19848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF02A4"))) PPC_WEAK_FUNC(sub_83CF02A4);
PPC_FUNC_IMPL(__imp__sub_83CF02A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF02A8"))) PPC_WEAK_FUNC(sub_83CF02A8);
PPC_FUNC_IMPL(__imp__sub_83CF02A8) {
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
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// addi r3,r11,-500
	ctx.r3.s64 = ctx.r11.s64 + -500;
	// bl 0x83523120
	ctx.lr = 0x83CF02C0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,19856
	ctx.r3.s64 = ctx.r10.s64 + 19856;
	// bl 0x831cdcc8
	ctx.lr = 0x83CF02CC;
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

__attribute__((alias("__imp__sub_83CF02DC"))) PPC_WEAK_FUNC(sub_83CF02DC);
PPC_FUNC_IMPL(__imp__sub_83CF02DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF02E0"))) PPC_WEAK_FUNC(sub_83CF02E0);
PPC_FUNC_IMPL(__imp__sub_83CF02E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,19872
	ctx.r3.s64 = ctx.r11.s64 + 19872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF02EC"))) PPC_WEAK_FUNC(sub_83CF02EC);
PPC_FUNC_IMPL(__imp__sub_83CF02EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF02F0"))) PPC_WEAK_FUNC(sub_83CF02F0);
PPC_FUNC_IMPL(__imp__sub_83CF02F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,19880
	ctx.r3.s64 = ctx.r11.s64 + 19880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF02FC"))) PPC_WEAK_FUNC(sub_83CF02FC);
PPC_FUNC_IMPL(__imp__sub_83CF02FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0300"))) PPC_WEAK_FUNC(sub_83CF0300);
PPC_FUNC_IMPL(__imp__sub_83CF0300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,19888
	ctx.r3.s64 = ctx.r11.s64 + 19888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF030C"))) PPC_WEAK_FUNC(sub_83CF030C);
PPC_FUNC_IMPL(__imp__sub_83CF030C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0310"))) PPC_WEAK_FUNC(sub_83CF0310);
PPC_FUNC_IMPL(__imp__sub_83CF0310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,19896
	ctx.r3.s64 = ctx.r11.s64 + 19896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF031C"))) PPC_WEAK_FUNC(sub_83CF031C);
PPC_FUNC_IMPL(__imp__sub_83CF031C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0320"))) PPC_WEAK_FUNC(sub_83CF0320);
PPC_FUNC_IMPL(__imp__sub_83CF0320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,19904
	ctx.r3.s64 = ctx.r11.s64 + 19904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF032C"))) PPC_WEAK_FUNC(sub_83CF032C);
PPC_FUNC_IMPL(__imp__sub_83CF032C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0330"))) PPC_WEAK_FUNC(sub_83CF0330);
PPC_FUNC_IMPL(__imp__sub_83CF0330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,19912
	ctx.r3.s64 = ctx.r11.s64 + 19912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF033C"))) PPC_WEAK_FUNC(sub_83CF033C);
PPC_FUNC_IMPL(__imp__sub_83CF033C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0340"))) PPC_WEAK_FUNC(sub_83CF0340);
PPC_FUNC_IMPL(__imp__sub_83CF0340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,19920
	ctx.r3.s64 = ctx.r11.s64 + 19920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF034C"))) PPC_WEAK_FUNC(sub_83CF034C);
PPC_FUNC_IMPL(__imp__sub_83CF034C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0350"))) PPC_WEAK_FUNC(sub_83CF0350);
PPC_FUNC_IMPL(__imp__sub_83CF0350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,19928
	ctx.r3.s64 = ctx.r11.s64 + 19928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF035C"))) PPC_WEAK_FUNC(sub_83CF035C);
PPC_FUNC_IMPL(__imp__sub_83CF035C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0360"))) PPC_WEAK_FUNC(sub_83CF0360);
PPC_FUNC_IMPL(__imp__sub_83CF0360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,19936
	ctx.r3.s64 = ctx.r11.s64 + 19936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF036C"))) PPC_WEAK_FUNC(sub_83CF036C);
PPC_FUNC_IMPL(__imp__sub_83CF036C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0370"))) PPC_WEAK_FUNC(sub_83CF0370);
PPC_FUNC_IMPL(__imp__sub_83CF0370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,19944
	ctx.r3.s64 = ctx.r11.s64 + 19944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF037C"))) PPC_WEAK_FUNC(sub_83CF037C);
PPC_FUNC_IMPL(__imp__sub_83CF037C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0380"))) PPC_WEAK_FUNC(sub_83CF0380);
PPC_FUNC_IMPL(__imp__sub_83CF0380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,19952
	ctx.r3.s64 = ctx.r11.s64 + 19952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF038C"))) PPC_WEAK_FUNC(sub_83CF038C);
PPC_FUNC_IMPL(__imp__sub_83CF038C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0390"))) PPC_WEAK_FUNC(sub_83CF0390);
PPC_FUNC_IMPL(__imp__sub_83CF0390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,19960
	ctx.r3.s64 = ctx.r11.s64 + 19960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF039C"))) PPC_WEAK_FUNC(sub_83CF039C);
PPC_FUNC_IMPL(__imp__sub_83CF039C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF03A0"))) PPC_WEAK_FUNC(sub_83CF03A0);
PPC_FUNC_IMPL(__imp__sub_83CF03A0) {
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
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// addi r3,r11,-492
	ctx.r3.s64 = ctx.r11.s64 + -492;
	// bl 0x83523120
	ctx.lr = 0x83CF03B8;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,19968
	ctx.r3.s64 = ctx.r10.s64 + 19968;
	// bl 0x831cdcc8
	ctx.lr = 0x83CF03C4;
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

__attribute__((alias("__imp__sub_83CF03D4"))) PPC_WEAK_FUNC(sub_83CF03D4);
PPC_FUNC_IMPL(__imp__sub_83CF03D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF03D8"))) PPC_WEAK_FUNC(sub_83CF03D8);
PPC_FUNC_IMPL(__imp__sub_83CF03D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,19984
	ctx.r3.s64 = ctx.r11.s64 + 19984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF03E4"))) PPC_WEAK_FUNC(sub_83CF03E4);
PPC_FUNC_IMPL(__imp__sub_83CF03E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF03E8"))) PPC_WEAK_FUNC(sub_83CF03E8);
PPC_FUNC_IMPL(__imp__sub_83CF03E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,19992
	ctx.r3.s64 = ctx.r11.s64 + 19992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF03F4"))) PPC_WEAK_FUNC(sub_83CF03F4);
PPC_FUNC_IMPL(__imp__sub_83CF03F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF03F8"))) PPC_WEAK_FUNC(sub_83CF03F8);
PPC_FUNC_IMPL(__imp__sub_83CF03F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20000
	ctx.r3.s64 = ctx.r11.s64 + 20000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0404"))) PPC_WEAK_FUNC(sub_83CF0404);
PPC_FUNC_IMPL(__imp__sub_83CF0404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0408"))) PPC_WEAK_FUNC(sub_83CF0408);
PPC_FUNC_IMPL(__imp__sub_83CF0408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20008
	ctx.r3.s64 = ctx.r11.s64 + 20008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0414"))) PPC_WEAK_FUNC(sub_83CF0414);
PPC_FUNC_IMPL(__imp__sub_83CF0414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0418"))) PPC_WEAK_FUNC(sub_83CF0418);
PPC_FUNC_IMPL(__imp__sub_83CF0418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20016
	ctx.r3.s64 = ctx.r11.s64 + 20016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0424"))) PPC_WEAK_FUNC(sub_83CF0424);
PPC_FUNC_IMPL(__imp__sub_83CF0424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0428"))) PPC_WEAK_FUNC(sub_83CF0428);
PPC_FUNC_IMPL(__imp__sub_83CF0428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20024
	ctx.r3.s64 = ctx.r11.s64 + 20024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0434"))) PPC_WEAK_FUNC(sub_83CF0434);
PPC_FUNC_IMPL(__imp__sub_83CF0434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0438"))) PPC_WEAK_FUNC(sub_83CF0438);
PPC_FUNC_IMPL(__imp__sub_83CF0438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20032
	ctx.r3.s64 = ctx.r11.s64 + 20032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0444"))) PPC_WEAK_FUNC(sub_83CF0444);
PPC_FUNC_IMPL(__imp__sub_83CF0444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0448"))) PPC_WEAK_FUNC(sub_83CF0448);
PPC_FUNC_IMPL(__imp__sub_83CF0448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20040
	ctx.r3.s64 = ctx.r11.s64 + 20040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0454"))) PPC_WEAK_FUNC(sub_83CF0454);
PPC_FUNC_IMPL(__imp__sub_83CF0454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0458"))) PPC_WEAK_FUNC(sub_83CF0458);
PPC_FUNC_IMPL(__imp__sub_83CF0458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20048
	ctx.r3.s64 = ctx.r11.s64 + 20048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0464"))) PPC_WEAK_FUNC(sub_83CF0464);
PPC_FUNC_IMPL(__imp__sub_83CF0464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0468"))) PPC_WEAK_FUNC(sub_83CF0468);
PPC_FUNC_IMPL(__imp__sub_83CF0468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20056
	ctx.r3.s64 = ctx.r11.s64 + 20056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0474"))) PPC_WEAK_FUNC(sub_83CF0474);
PPC_FUNC_IMPL(__imp__sub_83CF0474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0478"))) PPC_WEAK_FUNC(sub_83CF0478);
PPC_FUNC_IMPL(__imp__sub_83CF0478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20064
	ctx.r3.s64 = ctx.r11.s64 + 20064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0484"))) PPC_WEAK_FUNC(sub_83CF0484);
PPC_FUNC_IMPL(__imp__sub_83CF0484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0488"))) PPC_WEAK_FUNC(sub_83CF0488);
PPC_FUNC_IMPL(__imp__sub_83CF0488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20072
	ctx.r3.s64 = ctx.r11.s64 + 20072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0494"))) PPC_WEAK_FUNC(sub_83CF0494);
PPC_FUNC_IMPL(__imp__sub_83CF0494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0498"))) PPC_WEAK_FUNC(sub_83CF0498);
PPC_FUNC_IMPL(__imp__sub_83CF0498) {
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
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// addi r3,r11,-484
	ctx.r3.s64 = ctx.r11.s64 + -484;
	// bl 0x83523120
	ctx.lr = 0x83CF04B0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,20080
	ctx.r3.s64 = ctx.r10.s64 + 20080;
	// bl 0x831cdcc8
	ctx.lr = 0x83CF04BC;
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

__attribute__((alias("__imp__sub_83CF04CC"))) PPC_WEAK_FUNC(sub_83CF04CC);
PPC_FUNC_IMPL(__imp__sub_83CF04CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF04D0"))) PPC_WEAK_FUNC(sub_83CF04D0);
PPC_FUNC_IMPL(__imp__sub_83CF04D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20096
	ctx.r3.s64 = ctx.r11.s64 + 20096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF04DC"))) PPC_WEAK_FUNC(sub_83CF04DC);
PPC_FUNC_IMPL(__imp__sub_83CF04DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF04E0"))) PPC_WEAK_FUNC(sub_83CF04E0);
PPC_FUNC_IMPL(__imp__sub_83CF04E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20104
	ctx.r3.s64 = ctx.r11.s64 + 20104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF04EC"))) PPC_WEAK_FUNC(sub_83CF04EC);
PPC_FUNC_IMPL(__imp__sub_83CF04EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF04F0"))) PPC_WEAK_FUNC(sub_83CF04F0);
PPC_FUNC_IMPL(__imp__sub_83CF04F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20112
	ctx.r3.s64 = ctx.r11.s64 + 20112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF04FC"))) PPC_WEAK_FUNC(sub_83CF04FC);
PPC_FUNC_IMPL(__imp__sub_83CF04FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0500"))) PPC_WEAK_FUNC(sub_83CF0500);
PPC_FUNC_IMPL(__imp__sub_83CF0500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20120
	ctx.r3.s64 = ctx.r11.s64 + 20120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF050C"))) PPC_WEAK_FUNC(sub_83CF050C);
PPC_FUNC_IMPL(__imp__sub_83CF050C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0510"))) PPC_WEAK_FUNC(sub_83CF0510);
PPC_FUNC_IMPL(__imp__sub_83CF0510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20128
	ctx.r3.s64 = ctx.r11.s64 + 20128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF051C"))) PPC_WEAK_FUNC(sub_83CF051C);
PPC_FUNC_IMPL(__imp__sub_83CF051C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0520"))) PPC_WEAK_FUNC(sub_83CF0520);
PPC_FUNC_IMPL(__imp__sub_83CF0520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20136
	ctx.r3.s64 = ctx.r11.s64 + 20136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF052C"))) PPC_WEAK_FUNC(sub_83CF052C);
PPC_FUNC_IMPL(__imp__sub_83CF052C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0530"))) PPC_WEAK_FUNC(sub_83CF0530);
PPC_FUNC_IMPL(__imp__sub_83CF0530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20144
	ctx.r3.s64 = ctx.r11.s64 + 20144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF053C"))) PPC_WEAK_FUNC(sub_83CF053C);
PPC_FUNC_IMPL(__imp__sub_83CF053C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0540"))) PPC_WEAK_FUNC(sub_83CF0540);
PPC_FUNC_IMPL(__imp__sub_83CF0540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20152
	ctx.r3.s64 = ctx.r11.s64 + 20152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF054C"))) PPC_WEAK_FUNC(sub_83CF054C);
PPC_FUNC_IMPL(__imp__sub_83CF054C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0550"))) PPC_WEAK_FUNC(sub_83CF0550);
PPC_FUNC_IMPL(__imp__sub_83CF0550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20160
	ctx.r3.s64 = ctx.r11.s64 + 20160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF055C"))) PPC_WEAK_FUNC(sub_83CF055C);
PPC_FUNC_IMPL(__imp__sub_83CF055C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0560"))) PPC_WEAK_FUNC(sub_83CF0560);
PPC_FUNC_IMPL(__imp__sub_83CF0560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20168
	ctx.r3.s64 = ctx.r11.s64 + 20168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF056C"))) PPC_WEAK_FUNC(sub_83CF056C);
PPC_FUNC_IMPL(__imp__sub_83CF056C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0570"))) PPC_WEAK_FUNC(sub_83CF0570);
PPC_FUNC_IMPL(__imp__sub_83CF0570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20176
	ctx.r3.s64 = ctx.r11.s64 + 20176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF057C"))) PPC_WEAK_FUNC(sub_83CF057C);
PPC_FUNC_IMPL(__imp__sub_83CF057C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0580"))) PPC_WEAK_FUNC(sub_83CF0580);
PPC_FUNC_IMPL(__imp__sub_83CF0580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20184
	ctx.r3.s64 = ctx.r11.s64 + 20184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF058C"))) PPC_WEAK_FUNC(sub_83CF058C);
PPC_FUNC_IMPL(__imp__sub_83CF058C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0590"))) PPC_WEAK_FUNC(sub_83CF0590);
PPC_FUNC_IMPL(__imp__sub_83CF0590) {
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
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// addi r3,r11,-476
	ctx.r3.s64 = ctx.r11.s64 + -476;
	// bl 0x83523120
	ctx.lr = 0x83CF05A8;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,20192
	ctx.r3.s64 = ctx.r10.s64 + 20192;
	// bl 0x831cdcc8
	ctx.lr = 0x83CF05B4;
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

__attribute__((alias("__imp__sub_83CF05C4"))) PPC_WEAK_FUNC(sub_83CF05C4);
PPC_FUNC_IMPL(__imp__sub_83CF05C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF05C8"))) PPC_WEAK_FUNC(sub_83CF05C8);
PPC_FUNC_IMPL(__imp__sub_83CF05C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20208
	ctx.r3.s64 = ctx.r11.s64 + 20208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF05D4"))) PPC_WEAK_FUNC(sub_83CF05D4);
PPC_FUNC_IMPL(__imp__sub_83CF05D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF05D8"))) PPC_WEAK_FUNC(sub_83CF05D8);
PPC_FUNC_IMPL(__imp__sub_83CF05D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20216
	ctx.r3.s64 = ctx.r11.s64 + 20216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF05E4"))) PPC_WEAK_FUNC(sub_83CF05E4);
PPC_FUNC_IMPL(__imp__sub_83CF05E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF05E8"))) PPC_WEAK_FUNC(sub_83CF05E8);
PPC_FUNC_IMPL(__imp__sub_83CF05E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20224
	ctx.r3.s64 = ctx.r11.s64 + 20224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF05F4"))) PPC_WEAK_FUNC(sub_83CF05F4);
PPC_FUNC_IMPL(__imp__sub_83CF05F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF05F8"))) PPC_WEAK_FUNC(sub_83CF05F8);
PPC_FUNC_IMPL(__imp__sub_83CF05F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20232
	ctx.r3.s64 = ctx.r11.s64 + 20232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0604"))) PPC_WEAK_FUNC(sub_83CF0604);
PPC_FUNC_IMPL(__imp__sub_83CF0604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0608"))) PPC_WEAK_FUNC(sub_83CF0608);
PPC_FUNC_IMPL(__imp__sub_83CF0608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20240
	ctx.r3.s64 = ctx.r11.s64 + 20240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0614"))) PPC_WEAK_FUNC(sub_83CF0614);
PPC_FUNC_IMPL(__imp__sub_83CF0614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0618"))) PPC_WEAK_FUNC(sub_83CF0618);
PPC_FUNC_IMPL(__imp__sub_83CF0618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20248
	ctx.r3.s64 = ctx.r11.s64 + 20248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0624"))) PPC_WEAK_FUNC(sub_83CF0624);
PPC_FUNC_IMPL(__imp__sub_83CF0624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0628"))) PPC_WEAK_FUNC(sub_83CF0628);
PPC_FUNC_IMPL(__imp__sub_83CF0628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20256
	ctx.r3.s64 = ctx.r11.s64 + 20256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0634"))) PPC_WEAK_FUNC(sub_83CF0634);
PPC_FUNC_IMPL(__imp__sub_83CF0634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0638"))) PPC_WEAK_FUNC(sub_83CF0638);
PPC_FUNC_IMPL(__imp__sub_83CF0638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20264
	ctx.r3.s64 = ctx.r11.s64 + 20264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0644"))) PPC_WEAK_FUNC(sub_83CF0644);
PPC_FUNC_IMPL(__imp__sub_83CF0644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0648"))) PPC_WEAK_FUNC(sub_83CF0648);
PPC_FUNC_IMPL(__imp__sub_83CF0648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20272
	ctx.r3.s64 = ctx.r11.s64 + 20272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0654"))) PPC_WEAK_FUNC(sub_83CF0654);
PPC_FUNC_IMPL(__imp__sub_83CF0654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0658"))) PPC_WEAK_FUNC(sub_83CF0658);
PPC_FUNC_IMPL(__imp__sub_83CF0658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20280
	ctx.r3.s64 = ctx.r11.s64 + 20280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0664"))) PPC_WEAK_FUNC(sub_83CF0664);
PPC_FUNC_IMPL(__imp__sub_83CF0664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0668"))) PPC_WEAK_FUNC(sub_83CF0668);
PPC_FUNC_IMPL(__imp__sub_83CF0668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20288
	ctx.r3.s64 = ctx.r11.s64 + 20288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0674"))) PPC_WEAK_FUNC(sub_83CF0674);
PPC_FUNC_IMPL(__imp__sub_83CF0674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0678"))) PPC_WEAK_FUNC(sub_83CF0678);
PPC_FUNC_IMPL(__imp__sub_83CF0678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20296
	ctx.r3.s64 = ctx.r11.s64 + 20296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0684"))) PPC_WEAK_FUNC(sub_83CF0684);
PPC_FUNC_IMPL(__imp__sub_83CF0684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0688"))) PPC_WEAK_FUNC(sub_83CF0688);
PPC_FUNC_IMPL(__imp__sub_83CF0688) {
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
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// addi r3,r11,-468
	ctx.r3.s64 = ctx.r11.s64 + -468;
	// bl 0x83523120
	ctx.lr = 0x83CF06A0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,20304
	ctx.r3.s64 = ctx.r10.s64 + 20304;
	// bl 0x831cdcc8
	ctx.lr = 0x83CF06AC;
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

__attribute__((alias("__imp__sub_83CF06BC"))) PPC_WEAK_FUNC(sub_83CF06BC);
PPC_FUNC_IMPL(__imp__sub_83CF06BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF06C0"))) PPC_WEAK_FUNC(sub_83CF06C0);
PPC_FUNC_IMPL(__imp__sub_83CF06C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20320
	ctx.r3.s64 = ctx.r11.s64 + 20320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF06CC"))) PPC_WEAK_FUNC(sub_83CF06CC);
PPC_FUNC_IMPL(__imp__sub_83CF06CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF06D0"))) PPC_WEAK_FUNC(sub_83CF06D0);
PPC_FUNC_IMPL(__imp__sub_83CF06D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20328
	ctx.r3.s64 = ctx.r11.s64 + 20328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF06DC"))) PPC_WEAK_FUNC(sub_83CF06DC);
PPC_FUNC_IMPL(__imp__sub_83CF06DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF06E0"))) PPC_WEAK_FUNC(sub_83CF06E0);
PPC_FUNC_IMPL(__imp__sub_83CF06E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20336
	ctx.r3.s64 = ctx.r11.s64 + 20336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF06EC"))) PPC_WEAK_FUNC(sub_83CF06EC);
PPC_FUNC_IMPL(__imp__sub_83CF06EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF06F0"))) PPC_WEAK_FUNC(sub_83CF06F0);
PPC_FUNC_IMPL(__imp__sub_83CF06F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20344
	ctx.r3.s64 = ctx.r11.s64 + 20344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF06FC"))) PPC_WEAK_FUNC(sub_83CF06FC);
PPC_FUNC_IMPL(__imp__sub_83CF06FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0700"))) PPC_WEAK_FUNC(sub_83CF0700);
PPC_FUNC_IMPL(__imp__sub_83CF0700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20352
	ctx.r3.s64 = ctx.r11.s64 + 20352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF070C"))) PPC_WEAK_FUNC(sub_83CF070C);
PPC_FUNC_IMPL(__imp__sub_83CF070C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0710"))) PPC_WEAK_FUNC(sub_83CF0710);
PPC_FUNC_IMPL(__imp__sub_83CF0710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20360
	ctx.r3.s64 = ctx.r11.s64 + 20360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF071C"))) PPC_WEAK_FUNC(sub_83CF071C);
PPC_FUNC_IMPL(__imp__sub_83CF071C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0720"))) PPC_WEAK_FUNC(sub_83CF0720);
PPC_FUNC_IMPL(__imp__sub_83CF0720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20368
	ctx.r3.s64 = ctx.r11.s64 + 20368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF072C"))) PPC_WEAK_FUNC(sub_83CF072C);
PPC_FUNC_IMPL(__imp__sub_83CF072C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0730"))) PPC_WEAK_FUNC(sub_83CF0730);
PPC_FUNC_IMPL(__imp__sub_83CF0730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20376
	ctx.r3.s64 = ctx.r11.s64 + 20376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF073C"))) PPC_WEAK_FUNC(sub_83CF073C);
PPC_FUNC_IMPL(__imp__sub_83CF073C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0740"))) PPC_WEAK_FUNC(sub_83CF0740);
PPC_FUNC_IMPL(__imp__sub_83CF0740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20384
	ctx.r3.s64 = ctx.r11.s64 + 20384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF074C"))) PPC_WEAK_FUNC(sub_83CF074C);
PPC_FUNC_IMPL(__imp__sub_83CF074C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0750"))) PPC_WEAK_FUNC(sub_83CF0750);
PPC_FUNC_IMPL(__imp__sub_83CF0750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20392
	ctx.r3.s64 = ctx.r11.s64 + 20392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF075C"))) PPC_WEAK_FUNC(sub_83CF075C);
PPC_FUNC_IMPL(__imp__sub_83CF075C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0760"))) PPC_WEAK_FUNC(sub_83CF0760);
PPC_FUNC_IMPL(__imp__sub_83CF0760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20400
	ctx.r3.s64 = ctx.r11.s64 + 20400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF076C"))) PPC_WEAK_FUNC(sub_83CF076C);
PPC_FUNC_IMPL(__imp__sub_83CF076C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0770"))) PPC_WEAK_FUNC(sub_83CF0770);
PPC_FUNC_IMPL(__imp__sub_83CF0770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20408
	ctx.r3.s64 = ctx.r11.s64 + 20408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF077C"))) PPC_WEAK_FUNC(sub_83CF077C);
PPC_FUNC_IMPL(__imp__sub_83CF077C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0780"))) PPC_WEAK_FUNC(sub_83CF0780);
PPC_FUNC_IMPL(__imp__sub_83CF0780) {
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
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// addi r3,r11,-460
	ctx.r3.s64 = ctx.r11.s64 + -460;
	// bl 0x83523120
	ctx.lr = 0x83CF0798;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,20416
	ctx.r3.s64 = ctx.r10.s64 + 20416;
	// bl 0x831cdcc8
	ctx.lr = 0x83CF07A4;
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

__attribute__((alias("__imp__sub_83CF07B4"))) PPC_WEAK_FUNC(sub_83CF07B4);
PPC_FUNC_IMPL(__imp__sub_83CF07B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF07B8"))) PPC_WEAK_FUNC(sub_83CF07B8);
PPC_FUNC_IMPL(__imp__sub_83CF07B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20432
	ctx.r3.s64 = ctx.r11.s64 + 20432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF07C4"))) PPC_WEAK_FUNC(sub_83CF07C4);
PPC_FUNC_IMPL(__imp__sub_83CF07C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF07C8"))) PPC_WEAK_FUNC(sub_83CF07C8);
PPC_FUNC_IMPL(__imp__sub_83CF07C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20440
	ctx.r3.s64 = ctx.r11.s64 + 20440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF07D4"))) PPC_WEAK_FUNC(sub_83CF07D4);
PPC_FUNC_IMPL(__imp__sub_83CF07D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF07D8"))) PPC_WEAK_FUNC(sub_83CF07D8);
PPC_FUNC_IMPL(__imp__sub_83CF07D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20448
	ctx.r3.s64 = ctx.r11.s64 + 20448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF07E4"))) PPC_WEAK_FUNC(sub_83CF07E4);
PPC_FUNC_IMPL(__imp__sub_83CF07E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF07E8"))) PPC_WEAK_FUNC(sub_83CF07E8);
PPC_FUNC_IMPL(__imp__sub_83CF07E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20456
	ctx.r3.s64 = ctx.r11.s64 + 20456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF07F4"))) PPC_WEAK_FUNC(sub_83CF07F4);
PPC_FUNC_IMPL(__imp__sub_83CF07F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF07F8"))) PPC_WEAK_FUNC(sub_83CF07F8);
PPC_FUNC_IMPL(__imp__sub_83CF07F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20464
	ctx.r3.s64 = ctx.r11.s64 + 20464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0804"))) PPC_WEAK_FUNC(sub_83CF0804);
PPC_FUNC_IMPL(__imp__sub_83CF0804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0808"))) PPC_WEAK_FUNC(sub_83CF0808);
PPC_FUNC_IMPL(__imp__sub_83CF0808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20472
	ctx.r3.s64 = ctx.r11.s64 + 20472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0814"))) PPC_WEAK_FUNC(sub_83CF0814);
PPC_FUNC_IMPL(__imp__sub_83CF0814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0818"))) PPC_WEAK_FUNC(sub_83CF0818);
PPC_FUNC_IMPL(__imp__sub_83CF0818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20480
	ctx.r3.s64 = ctx.r11.s64 + 20480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0824"))) PPC_WEAK_FUNC(sub_83CF0824);
PPC_FUNC_IMPL(__imp__sub_83CF0824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0828"))) PPC_WEAK_FUNC(sub_83CF0828);
PPC_FUNC_IMPL(__imp__sub_83CF0828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20488
	ctx.r3.s64 = ctx.r11.s64 + 20488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0834"))) PPC_WEAK_FUNC(sub_83CF0834);
PPC_FUNC_IMPL(__imp__sub_83CF0834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0838"))) PPC_WEAK_FUNC(sub_83CF0838);
PPC_FUNC_IMPL(__imp__sub_83CF0838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20496
	ctx.r3.s64 = ctx.r11.s64 + 20496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0844"))) PPC_WEAK_FUNC(sub_83CF0844);
PPC_FUNC_IMPL(__imp__sub_83CF0844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0848"))) PPC_WEAK_FUNC(sub_83CF0848);
PPC_FUNC_IMPL(__imp__sub_83CF0848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20504
	ctx.r3.s64 = ctx.r11.s64 + 20504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0854"))) PPC_WEAK_FUNC(sub_83CF0854);
PPC_FUNC_IMPL(__imp__sub_83CF0854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0858"))) PPC_WEAK_FUNC(sub_83CF0858);
PPC_FUNC_IMPL(__imp__sub_83CF0858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20512
	ctx.r3.s64 = ctx.r11.s64 + 20512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0864"))) PPC_WEAK_FUNC(sub_83CF0864);
PPC_FUNC_IMPL(__imp__sub_83CF0864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0868"))) PPC_WEAK_FUNC(sub_83CF0868);
PPC_FUNC_IMPL(__imp__sub_83CF0868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20520
	ctx.r3.s64 = ctx.r11.s64 + 20520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0874"))) PPC_WEAK_FUNC(sub_83CF0874);
PPC_FUNC_IMPL(__imp__sub_83CF0874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0878"))) PPC_WEAK_FUNC(sub_83CF0878);
PPC_FUNC_IMPL(__imp__sub_83CF0878) {
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
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// addi r3,r11,-452
	ctx.r3.s64 = ctx.r11.s64 + -452;
	// bl 0x83523120
	ctx.lr = 0x83CF0890;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,20528
	ctx.r3.s64 = ctx.r10.s64 + 20528;
	// bl 0x831cdcc8
	ctx.lr = 0x83CF089C;
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

__attribute__((alias("__imp__sub_83CF08AC"))) PPC_WEAK_FUNC(sub_83CF08AC);
PPC_FUNC_IMPL(__imp__sub_83CF08AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF08B0"))) PPC_WEAK_FUNC(sub_83CF08B0);
PPC_FUNC_IMPL(__imp__sub_83CF08B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20544
	ctx.r3.s64 = ctx.r11.s64 + 20544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF08BC"))) PPC_WEAK_FUNC(sub_83CF08BC);
PPC_FUNC_IMPL(__imp__sub_83CF08BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF08C0"))) PPC_WEAK_FUNC(sub_83CF08C0);
PPC_FUNC_IMPL(__imp__sub_83CF08C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20552
	ctx.r3.s64 = ctx.r11.s64 + 20552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF08CC"))) PPC_WEAK_FUNC(sub_83CF08CC);
PPC_FUNC_IMPL(__imp__sub_83CF08CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF08D0"))) PPC_WEAK_FUNC(sub_83CF08D0);
PPC_FUNC_IMPL(__imp__sub_83CF08D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20560
	ctx.r3.s64 = ctx.r11.s64 + 20560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF08DC"))) PPC_WEAK_FUNC(sub_83CF08DC);
PPC_FUNC_IMPL(__imp__sub_83CF08DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF08E0"))) PPC_WEAK_FUNC(sub_83CF08E0);
PPC_FUNC_IMPL(__imp__sub_83CF08E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20568
	ctx.r3.s64 = ctx.r11.s64 + 20568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF08EC"))) PPC_WEAK_FUNC(sub_83CF08EC);
PPC_FUNC_IMPL(__imp__sub_83CF08EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF08F0"))) PPC_WEAK_FUNC(sub_83CF08F0);
PPC_FUNC_IMPL(__imp__sub_83CF08F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20576
	ctx.r3.s64 = ctx.r11.s64 + 20576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF08FC"))) PPC_WEAK_FUNC(sub_83CF08FC);
PPC_FUNC_IMPL(__imp__sub_83CF08FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0900"))) PPC_WEAK_FUNC(sub_83CF0900);
PPC_FUNC_IMPL(__imp__sub_83CF0900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20584
	ctx.r3.s64 = ctx.r11.s64 + 20584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF090C"))) PPC_WEAK_FUNC(sub_83CF090C);
PPC_FUNC_IMPL(__imp__sub_83CF090C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0910"))) PPC_WEAK_FUNC(sub_83CF0910);
PPC_FUNC_IMPL(__imp__sub_83CF0910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20592
	ctx.r3.s64 = ctx.r11.s64 + 20592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF091C"))) PPC_WEAK_FUNC(sub_83CF091C);
PPC_FUNC_IMPL(__imp__sub_83CF091C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0920"))) PPC_WEAK_FUNC(sub_83CF0920);
PPC_FUNC_IMPL(__imp__sub_83CF0920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20600
	ctx.r3.s64 = ctx.r11.s64 + 20600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF092C"))) PPC_WEAK_FUNC(sub_83CF092C);
PPC_FUNC_IMPL(__imp__sub_83CF092C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0930"))) PPC_WEAK_FUNC(sub_83CF0930);
PPC_FUNC_IMPL(__imp__sub_83CF0930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20608
	ctx.r3.s64 = ctx.r11.s64 + 20608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF093C"))) PPC_WEAK_FUNC(sub_83CF093C);
PPC_FUNC_IMPL(__imp__sub_83CF093C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0940"))) PPC_WEAK_FUNC(sub_83CF0940);
PPC_FUNC_IMPL(__imp__sub_83CF0940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20616
	ctx.r3.s64 = ctx.r11.s64 + 20616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF094C"))) PPC_WEAK_FUNC(sub_83CF094C);
PPC_FUNC_IMPL(__imp__sub_83CF094C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0950"))) PPC_WEAK_FUNC(sub_83CF0950);
PPC_FUNC_IMPL(__imp__sub_83CF0950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20624
	ctx.r3.s64 = ctx.r11.s64 + 20624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF095C"))) PPC_WEAK_FUNC(sub_83CF095C);
PPC_FUNC_IMPL(__imp__sub_83CF095C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0960"))) PPC_WEAK_FUNC(sub_83CF0960);
PPC_FUNC_IMPL(__imp__sub_83CF0960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20632
	ctx.r3.s64 = ctx.r11.s64 + 20632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF096C"))) PPC_WEAK_FUNC(sub_83CF096C);
PPC_FUNC_IMPL(__imp__sub_83CF096C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0970"))) PPC_WEAK_FUNC(sub_83CF0970);
PPC_FUNC_IMPL(__imp__sub_83CF0970) {
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
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// addi r3,r11,-443
	ctx.r3.s64 = ctx.r11.s64 + -443;
	// bl 0x83523120
	ctx.lr = 0x83CF0988;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,20640
	ctx.r3.s64 = ctx.r10.s64 + 20640;
	// bl 0x831cdcc8
	ctx.lr = 0x83CF0994;
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

__attribute__((alias("__imp__sub_83CF09A4"))) PPC_WEAK_FUNC(sub_83CF09A4);
PPC_FUNC_IMPL(__imp__sub_83CF09A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF09A8"))) PPC_WEAK_FUNC(sub_83CF09A8);
PPC_FUNC_IMPL(__imp__sub_83CF09A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20656
	ctx.r3.s64 = ctx.r11.s64 + 20656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF09B4"))) PPC_WEAK_FUNC(sub_83CF09B4);
PPC_FUNC_IMPL(__imp__sub_83CF09B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF09B8"))) PPC_WEAK_FUNC(sub_83CF09B8);
PPC_FUNC_IMPL(__imp__sub_83CF09B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20664
	ctx.r3.s64 = ctx.r11.s64 + 20664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF09C4"))) PPC_WEAK_FUNC(sub_83CF09C4);
PPC_FUNC_IMPL(__imp__sub_83CF09C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF09C8"))) PPC_WEAK_FUNC(sub_83CF09C8);
PPC_FUNC_IMPL(__imp__sub_83CF09C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20672
	ctx.r3.s64 = ctx.r11.s64 + 20672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF09D4"))) PPC_WEAK_FUNC(sub_83CF09D4);
PPC_FUNC_IMPL(__imp__sub_83CF09D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF09D8"))) PPC_WEAK_FUNC(sub_83CF09D8);
PPC_FUNC_IMPL(__imp__sub_83CF09D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20680
	ctx.r3.s64 = ctx.r11.s64 + 20680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF09E4"))) PPC_WEAK_FUNC(sub_83CF09E4);
PPC_FUNC_IMPL(__imp__sub_83CF09E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF09E8"))) PPC_WEAK_FUNC(sub_83CF09E8);
PPC_FUNC_IMPL(__imp__sub_83CF09E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20688
	ctx.r3.s64 = ctx.r11.s64 + 20688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF09F4"))) PPC_WEAK_FUNC(sub_83CF09F4);
PPC_FUNC_IMPL(__imp__sub_83CF09F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF09F8"))) PPC_WEAK_FUNC(sub_83CF09F8);
PPC_FUNC_IMPL(__imp__sub_83CF09F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20696
	ctx.r3.s64 = ctx.r11.s64 + 20696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0A04"))) PPC_WEAK_FUNC(sub_83CF0A04);
PPC_FUNC_IMPL(__imp__sub_83CF0A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0A08"))) PPC_WEAK_FUNC(sub_83CF0A08);
PPC_FUNC_IMPL(__imp__sub_83CF0A08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20704
	ctx.r3.s64 = ctx.r11.s64 + 20704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0A14"))) PPC_WEAK_FUNC(sub_83CF0A14);
PPC_FUNC_IMPL(__imp__sub_83CF0A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0A18"))) PPC_WEAK_FUNC(sub_83CF0A18);
PPC_FUNC_IMPL(__imp__sub_83CF0A18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20712
	ctx.r3.s64 = ctx.r11.s64 + 20712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0A24"))) PPC_WEAK_FUNC(sub_83CF0A24);
PPC_FUNC_IMPL(__imp__sub_83CF0A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0A28"))) PPC_WEAK_FUNC(sub_83CF0A28);
PPC_FUNC_IMPL(__imp__sub_83CF0A28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20720
	ctx.r3.s64 = ctx.r11.s64 + 20720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CF0A34"))) PPC_WEAK_FUNC(sub_83CF0A34);
PPC_FUNC_IMPL(__imp__sub_83CF0A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CF0A38"))) PPC_WEAK_FUNC(sub_83CF0A38);
PPC_FUNC_IMPL(__imp__sub_83CF0A38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,20728
	ctx.r3.s64 = ctx.r11.s64 + 20728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

