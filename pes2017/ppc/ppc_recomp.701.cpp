#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C090A4"))) PPC_WEAK_FUNC(sub_83C090A4);
PPC_FUNC_IMPL(__imp__sub_83C090A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C090A8"))) PPC_WEAK_FUNC(sub_83C090A8);
PPC_FUNC_IMPL(__imp__sub_83C090A8) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-1760
	ctx.r3.s64 = ctx.r11.s64 + -1760;
	// bl 0x83523120
	ctx.lr = 0x83C090C0;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,21248
	ctx.r3.s64 = ctx.r10.s64 + 21248;
	// bl 0x831cdcc8
	ctx.lr = 0x83C090CC;
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

__attribute__((alias("__imp__sub_83C090DC"))) PPC_WEAK_FUNC(sub_83C090DC);
PPC_FUNC_IMPL(__imp__sub_83C090DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C090E0"))) PPC_WEAK_FUNC(sub_83C090E0);
PPC_FUNC_IMPL(__imp__sub_83C090E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21264
	ctx.r3.s64 = ctx.r11.s64 + 21264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C090EC"))) PPC_WEAK_FUNC(sub_83C090EC);
PPC_FUNC_IMPL(__imp__sub_83C090EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C090F0"))) PPC_WEAK_FUNC(sub_83C090F0);
PPC_FUNC_IMPL(__imp__sub_83C090F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21272
	ctx.r3.s64 = ctx.r11.s64 + 21272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C090FC"))) PPC_WEAK_FUNC(sub_83C090FC);
PPC_FUNC_IMPL(__imp__sub_83C090FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09100"))) PPC_WEAK_FUNC(sub_83C09100);
PPC_FUNC_IMPL(__imp__sub_83C09100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21280
	ctx.r3.s64 = ctx.r11.s64 + 21280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0910C"))) PPC_WEAK_FUNC(sub_83C0910C);
PPC_FUNC_IMPL(__imp__sub_83C0910C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09110"))) PPC_WEAK_FUNC(sub_83C09110);
PPC_FUNC_IMPL(__imp__sub_83C09110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21288
	ctx.r3.s64 = ctx.r11.s64 + 21288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0911C"))) PPC_WEAK_FUNC(sub_83C0911C);
PPC_FUNC_IMPL(__imp__sub_83C0911C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09120"))) PPC_WEAK_FUNC(sub_83C09120);
PPC_FUNC_IMPL(__imp__sub_83C09120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21296
	ctx.r3.s64 = ctx.r11.s64 + 21296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0912C"))) PPC_WEAK_FUNC(sub_83C0912C);
PPC_FUNC_IMPL(__imp__sub_83C0912C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09130"))) PPC_WEAK_FUNC(sub_83C09130);
PPC_FUNC_IMPL(__imp__sub_83C09130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21304
	ctx.r3.s64 = ctx.r11.s64 + 21304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0913C"))) PPC_WEAK_FUNC(sub_83C0913C);
PPC_FUNC_IMPL(__imp__sub_83C0913C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09140"))) PPC_WEAK_FUNC(sub_83C09140);
PPC_FUNC_IMPL(__imp__sub_83C09140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21312
	ctx.r3.s64 = ctx.r11.s64 + 21312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0914C"))) PPC_WEAK_FUNC(sub_83C0914C);
PPC_FUNC_IMPL(__imp__sub_83C0914C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09150"))) PPC_WEAK_FUNC(sub_83C09150);
PPC_FUNC_IMPL(__imp__sub_83C09150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21320
	ctx.r3.s64 = ctx.r11.s64 + 21320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0915C"))) PPC_WEAK_FUNC(sub_83C0915C);
PPC_FUNC_IMPL(__imp__sub_83C0915C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09160"))) PPC_WEAK_FUNC(sub_83C09160);
PPC_FUNC_IMPL(__imp__sub_83C09160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21328
	ctx.r3.s64 = ctx.r11.s64 + 21328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0916C"))) PPC_WEAK_FUNC(sub_83C0916C);
PPC_FUNC_IMPL(__imp__sub_83C0916C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09170"))) PPC_WEAK_FUNC(sub_83C09170);
PPC_FUNC_IMPL(__imp__sub_83C09170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21336
	ctx.r3.s64 = ctx.r11.s64 + 21336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0917C"))) PPC_WEAK_FUNC(sub_83C0917C);
PPC_FUNC_IMPL(__imp__sub_83C0917C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09180"))) PPC_WEAK_FUNC(sub_83C09180);
PPC_FUNC_IMPL(__imp__sub_83C09180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21344
	ctx.r3.s64 = ctx.r11.s64 + 21344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0918C"))) PPC_WEAK_FUNC(sub_83C0918C);
PPC_FUNC_IMPL(__imp__sub_83C0918C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09190"))) PPC_WEAK_FUNC(sub_83C09190);
PPC_FUNC_IMPL(__imp__sub_83C09190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21352
	ctx.r3.s64 = ctx.r11.s64 + 21352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0919C"))) PPC_WEAK_FUNC(sub_83C0919C);
PPC_FUNC_IMPL(__imp__sub_83C0919C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C091A0"))) PPC_WEAK_FUNC(sub_83C091A0);
PPC_FUNC_IMPL(__imp__sub_83C091A0) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-1748
	ctx.r3.s64 = ctx.r11.s64 + -1748;
	// bl 0x83523120
	ctx.lr = 0x83C091B8;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,21360
	ctx.r3.s64 = ctx.r10.s64 + 21360;
	// bl 0x831cdcc8
	ctx.lr = 0x83C091C4;
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

__attribute__((alias("__imp__sub_83C091D4"))) PPC_WEAK_FUNC(sub_83C091D4);
PPC_FUNC_IMPL(__imp__sub_83C091D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C091D8"))) PPC_WEAK_FUNC(sub_83C091D8);
PPC_FUNC_IMPL(__imp__sub_83C091D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21376
	ctx.r3.s64 = ctx.r11.s64 + 21376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C091E4"))) PPC_WEAK_FUNC(sub_83C091E4);
PPC_FUNC_IMPL(__imp__sub_83C091E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C091E8"))) PPC_WEAK_FUNC(sub_83C091E8);
PPC_FUNC_IMPL(__imp__sub_83C091E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21384
	ctx.r3.s64 = ctx.r11.s64 + 21384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C091F4"))) PPC_WEAK_FUNC(sub_83C091F4);
PPC_FUNC_IMPL(__imp__sub_83C091F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C091F8"))) PPC_WEAK_FUNC(sub_83C091F8);
PPC_FUNC_IMPL(__imp__sub_83C091F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21392
	ctx.r3.s64 = ctx.r11.s64 + 21392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09204"))) PPC_WEAK_FUNC(sub_83C09204);
PPC_FUNC_IMPL(__imp__sub_83C09204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09208"))) PPC_WEAK_FUNC(sub_83C09208);
PPC_FUNC_IMPL(__imp__sub_83C09208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21400
	ctx.r3.s64 = ctx.r11.s64 + 21400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09214"))) PPC_WEAK_FUNC(sub_83C09214);
PPC_FUNC_IMPL(__imp__sub_83C09214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09218"))) PPC_WEAK_FUNC(sub_83C09218);
PPC_FUNC_IMPL(__imp__sub_83C09218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21408
	ctx.r3.s64 = ctx.r11.s64 + 21408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09224"))) PPC_WEAK_FUNC(sub_83C09224);
PPC_FUNC_IMPL(__imp__sub_83C09224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09228"))) PPC_WEAK_FUNC(sub_83C09228);
PPC_FUNC_IMPL(__imp__sub_83C09228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21416
	ctx.r3.s64 = ctx.r11.s64 + 21416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09234"))) PPC_WEAK_FUNC(sub_83C09234);
PPC_FUNC_IMPL(__imp__sub_83C09234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09238"))) PPC_WEAK_FUNC(sub_83C09238);
PPC_FUNC_IMPL(__imp__sub_83C09238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21424
	ctx.r3.s64 = ctx.r11.s64 + 21424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09244"))) PPC_WEAK_FUNC(sub_83C09244);
PPC_FUNC_IMPL(__imp__sub_83C09244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09248"))) PPC_WEAK_FUNC(sub_83C09248);
PPC_FUNC_IMPL(__imp__sub_83C09248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21432
	ctx.r3.s64 = ctx.r11.s64 + 21432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09254"))) PPC_WEAK_FUNC(sub_83C09254);
PPC_FUNC_IMPL(__imp__sub_83C09254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09258"))) PPC_WEAK_FUNC(sub_83C09258);
PPC_FUNC_IMPL(__imp__sub_83C09258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21440
	ctx.r3.s64 = ctx.r11.s64 + 21440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09264"))) PPC_WEAK_FUNC(sub_83C09264);
PPC_FUNC_IMPL(__imp__sub_83C09264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09268"))) PPC_WEAK_FUNC(sub_83C09268);
PPC_FUNC_IMPL(__imp__sub_83C09268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21448
	ctx.r3.s64 = ctx.r11.s64 + 21448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09274"))) PPC_WEAK_FUNC(sub_83C09274);
PPC_FUNC_IMPL(__imp__sub_83C09274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09278"))) PPC_WEAK_FUNC(sub_83C09278);
PPC_FUNC_IMPL(__imp__sub_83C09278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21456
	ctx.r3.s64 = ctx.r11.s64 + 21456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09284"))) PPC_WEAK_FUNC(sub_83C09284);
PPC_FUNC_IMPL(__imp__sub_83C09284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09288"))) PPC_WEAK_FUNC(sub_83C09288);
PPC_FUNC_IMPL(__imp__sub_83C09288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21464
	ctx.r3.s64 = ctx.r11.s64 + 21464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09294"))) PPC_WEAK_FUNC(sub_83C09294);
PPC_FUNC_IMPL(__imp__sub_83C09294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09298"))) PPC_WEAK_FUNC(sub_83C09298);
PPC_FUNC_IMPL(__imp__sub_83C09298) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-1732
	ctx.r3.s64 = ctx.r11.s64 + -1732;
	// bl 0x83523120
	ctx.lr = 0x83C092B0;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,21472
	ctx.r3.s64 = ctx.r10.s64 + 21472;
	// bl 0x831cdcc8
	ctx.lr = 0x83C092BC;
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

__attribute__((alias("__imp__sub_83C092CC"))) PPC_WEAK_FUNC(sub_83C092CC);
PPC_FUNC_IMPL(__imp__sub_83C092CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C092D0"))) PPC_WEAK_FUNC(sub_83C092D0);
PPC_FUNC_IMPL(__imp__sub_83C092D0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-1716
	ctx.r7.s64 = ctx.r8.s64 + -1716;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-1716(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -1716);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-1716(r8)
	PPC_STORE_U32(ctx.r8.u32 + -1716, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C092F8"))) PPC_WEAK_FUNC(sub_83C092F8);
PPC_FUNC_IMPL(__imp__sub_83C092F8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-24472
	ctx.r6.s64 = ctx.r7.s64 + -24472;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-24544(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -24544);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-1716(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -1716);
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
	// std r9,-24472(r7)
	PPC_STORE_U64(ctx.r7.u32 + -24472, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C09340"))) PPC_WEAK_FUNC(sub_83C09340);
PPC_FUNC_IMPL(__imp__sub_83C09340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21488
	ctx.r3.s64 = ctx.r11.s64 + 21488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0934C"))) PPC_WEAK_FUNC(sub_83C0934C);
PPC_FUNC_IMPL(__imp__sub_83C0934C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09350"))) PPC_WEAK_FUNC(sub_83C09350);
PPC_FUNC_IMPL(__imp__sub_83C09350) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-1704
	ctx.r3.s64 = ctx.r11.s64 + -1704;
	// bl 0x8259af80
	ctx.lr = 0x83C09368;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,21504
	ctx.r3.s64 = ctx.r10.s64 + 21504;
	// bl 0x831cdcc8
	ctx.lr = 0x83C09374;
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

__attribute__((alias("__imp__sub_83C09384"))) PPC_WEAK_FUNC(sub_83C09384);
PPC_FUNC_IMPL(__imp__sub_83C09384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09388"))) PPC_WEAK_FUNC(sub_83C09388);
PPC_FUNC_IMPL(__imp__sub_83C09388) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-1728
	ctx.r11.s64 = ctx.r8.s64 + -1728;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-24496(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24496);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,21496
	ctx.r3.s64 = ctx.r6.s64 + 21496;
	// stw r10,-1728(r8)
	PPC_STORE_U32(ctx.r8.u32 + -1728, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C093B8"))) PPC_WEAK_FUNC(sub_83C093B8);
PPC_FUNC_IMPL(__imp__sub_83C093B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21512
	ctx.r3.s64 = ctx.r11.s64 + 21512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C093C4"))) PPC_WEAK_FUNC(sub_83C093C4);
PPC_FUNC_IMPL(__imp__sub_83C093C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C093C8"))) PPC_WEAK_FUNC(sub_83C093C8);
PPC_FUNC_IMPL(__imp__sub_83C093C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21520
	ctx.r3.s64 = ctx.r11.s64 + 21520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C093D4"))) PPC_WEAK_FUNC(sub_83C093D4);
PPC_FUNC_IMPL(__imp__sub_83C093D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C093D8"))) PPC_WEAK_FUNC(sub_83C093D8);
PPC_FUNC_IMPL(__imp__sub_83C093D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21528
	ctx.r3.s64 = ctx.r11.s64 + 21528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C093E4"))) PPC_WEAK_FUNC(sub_83C093E4);
PPC_FUNC_IMPL(__imp__sub_83C093E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C093E8"))) PPC_WEAK_FUNC(sub_83C093E8);
PPC_FUNC_IMPL(__imp__sub_83C093E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21536
	ctx.r3.s64 = ctx.r11.s64 + 21536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C093F4"))) PPC_WEAK_FUNC(sub_83C093F4);
PPC_FUNC_IMPL(__imp__sub_83C093F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C093F8"))) PPC_WEAK_FUNC(sub_83C093F8);
PPC_FUNC_IMPL(__imp__sub_83C093F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21544
	ctx.r3.s64 = ctx.r11.s64 + 21544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09404"))) PPC_WEAK_FUNC(sub_83C09404);
PPC_FUNC_IMPL(__imp__sub_83C09404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09408"))) PPC_WEAK_FUNC(sub_83C09408);
PPC_FUNC_IMPL(__imp__sub_83C09408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21552
	ctx.r3.s64 = ctx.r11.s64 + 21552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09414"))) PPC_WEAK_FUNC(sub_83C09414);
PPC_FUNC_IMPL(__imp__sub_83C09414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09418"))) PPC_WEAK_FUNC(sub_83C09418);
PPC_FUNC_IMPL(__imp__sub_83C09418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21560
	ctx.r3.s64 = ctx.r11.s64 + 21560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09424"))) PPC_WEAK_FUNC(sub_83C09424);
PPC_FUNC_IMPL(__imp__sub_83C09424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09428"))) PPC_WEAK_FUNC(sub_83C09428);
PPC_FUNC_IMPL(__imp__sub_83C09428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21568
	ctx.r3.s64 = ctx.r11.s64 + 21568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09434"))) PPC_WEAK_FUNC(sub_83C09434);
PPC_FUNC_IMPL(__imp__sub_83C09434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09438"))) PPC_WEAK_FUNC(sub_83C09438);
PPC_FUNC_IMPL(__imp__sub_83C09438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21576
	ctx.r3.s64 = ctx.r11.s64 + 21576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09444"))) PPC_WEAK_FUNC(sub_83C09444);
PPC_FUNC_IMPL(__imp__sub_83C09444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09448"))) PPC_WEAK_FUNC(sub_83C09448);
PPC_FUNC_IMPL(__imp__sub_83C09448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21584
	ctx.r3.s64 = ctx.r11.s64 + 21584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09454"))) PPC_WEAK_FUNC(sub_83C09454);
PPC_FUNC_IMPL(__imp__sub_83C09454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09458"))) PPC_WEAK_FUNC(sub_83C09458);
PPC_FUNC_IMPL(__imp__sub_83C09458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21592
	ctx.r3.s64 = ctx.r11.s64 + 21592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09464"))) PPC_WEAK_FUNC(sub_83C09464);
PPC_FUNC_IMPL(__imp__sub_83C09464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09468"))) PPC_WEAK_FUNC(sub_83C09468);
PPC_FUNC_IMPL(__imp__sub_83C09468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21600
	ctx.r3.s64 = ctx.r11.s64 + 21600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09474"))) PPC_WEAK_FUNC(sub_83C09474);
PPC_FUNC_IMPL(__imp__sub_83C09474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09478"))) PPC_WEAK_FUNC(sub_83C09478);
PPC_FUNC_IMPL(__imp__sub_83C09478) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-1356
	ctx.r3.s64 = ctx.r11.s64 + -1356;
	// bl 0x83523120
	ctx.lr = 0x83C09490;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,21608
	ctx.r3.s64 = ctx.r10.s64 + 21608;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0949C;
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

__attribute__((alias("__imp__sub_83C094AC"))) PPC_WEAK_FUNC(sub_83C094AC);
PPC_FUNC_IMPL(__imp__sub_83C094AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C094B0"))) PPC_WEAK_FUNC(sub_83C094B0);
PPC_FUNC_IMPL(__imp__sub_83C094B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21624
	ctx.r3.s64 = ctx.r11.s64 + 21624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C094BC"))) PPC_WEAK_FUNC(sub_83C094BC);
PPC_FUNC_IMPL(__imp__sub_83C094BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C094C0"))) PPC_WEAK_FUNC(sub_83C094C0);
PPC_FUNC_IMPL(__imp__sub_83C094C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21632
	ctx.r3.s64 = ctx.r11.s64 + 21632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C094CC"))) PPC_WEAK_FUNC(sub_83C094CC);
PPC_FUNC_IMPL(__imp__sub_83C094CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C094D0"))) PPC_WEAK_FUNC(sub_83C094D0);
PPC_FUNC_IMPL(__imp__sub_83C094D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21640
	ctx.r3.s64 = ctx.r11.s64 + 21640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C094DC"))) PPC_WEAK_FUNC(sub_83C094DC);
PPC_FUNC_IMPL(__imp__sub_83C094DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C094E0"))) PPC_WEAK_FUNC(sub_83C094E0);
PPC_FUNC_IMPL(__imp__sub_83C094E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21648
	ctx.r3.s64 = ctx.r11.s64 + 21648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C094EC"))) PPC_WEAK_FUNC(sub_83C094EC);
PPC_FUNC_IMPL(__imp__sub_83C094EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C094F0"))) PPC_WEAK_FUNC(sub_83C094F0);
PPC_FUNC_IMPL(__imp__sub_83C094F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21656
	ctx.r3.s64 = ctx.r11.s64 + 21656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C094FC"))) PPC_WEAK_FUNC(sub_83C094FC);
PPC_FUNC_IMPL(__imp__sub_83C094FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09500"))) PPC_WEAK_FUNC(sub_83C09500);
PPC_FUNC_IMPL(__imp__sub_83C09500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21664
	ctx.r3.s64 = ctx.r11.s64 + 21664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0950C"))) PPC_WEAK_FUNC(sub_83C0950C);
PPC_FUNC_IMPL(__imp__sub_83C0950C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09510"))) PPC_WEAK_FUNC(sub_83C09510);
PPC_FUNC_IMPL(__imp__sub_83C09510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21672
	ctx.r3.s64 = ctx.r11.s64 + 21672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0951C"))) PPC_WEAK_FUNC(sub_83C0951C);
PPC_FUNC_IMPL(__imp__sub_83C0951C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09520"))) PPC_WEAK_FUNC(sub_83C09520);
PPC_FUNC_IMPL(__imp__sub_83C09520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21680
	ctx.r3.s64 = ctx.r11.s64 + 21680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0952C"))) PPC_WEAK_FUNC(sub_83C0952C);
PPC_FUNC_IMPL(__imp__sub_83C0952C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09530"))) PPC_WEAK_FUNC(sub_83C09530);
PPC_FUNC_IMPL(__imp__sub_83C09530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21688
	ctx.r3.s64 = ctx.r11.s64 + 21688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0953C"))) PPC_WEAK_FUNC(sub_83C0953C);
PPC_FUNC_IMPL(__imp__sub_83C0953C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09540"))) PPC_WEAK_FUNC(sub_83C09540);
PPC_FUNC_IMPL(__imp__sub_83C09540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21696
	ctx.r3.s64 = ctx.r11.s64 + 21696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0954C"))) PPC_WEAK_FUNC(sub_83C0954C);
PPC_FUNC_IMPL(__imp__sub_83C0954C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09550"))) PPC_WEAK_FUNC(sub_83C09550);
PPC_FUNC_IMPL(__imp__sub_83C09550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21704
	ctx.r3.s64 = ctx.r11.s64 + 21704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0955C"))) PPC_WEAK_FUNC(sub_83C0955C);
PPC_FUNC_IMPL(__imp__sub_83C0955C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09560"))) PPC_WEAK_FUNC(sub_83C09560);
PPC_FUNC_IMPL(__imp__sub_83C09560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21712
	ctx.r3.s64 = ctx.r11.s64 + 21712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0956C"))) PPC_WEAK_FUNC(sub_83C0956C);
PPC_FUNC_IMPL(__imp__sub_83C0956C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09570"))) PPC_WEAK_FUNC(sub_83C09570);
PPC_FUNC_IMPL(__imp__sub_83C09570) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-1348
	ctx.r3.s64 = ctx.r11.s64 + -1348;
	// bl 0x83523120
	ctx.lr = 0x83C09588;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,21720
	ctx.r3.s64 = ctx.r10.s64 + 21720;
	// bl 0x831cdcc8
	ctx.lr = 0x83C09594;
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

__attribute__((alias("__imp__sub_83C095A4"))) PPC_WEAK_FUNC(sub_83C095A4);
PPC_FUNC_IMPL(__imp__sub_83C095A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C095A8"))) PPC_WEAK_FUNC(sub_83C095A8);
PPC_FUNC_IMPL(__imp__sub_83C095A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21736
	ctx.r3.s64 = ctx.r11.s64 + 21736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C095B4"))) PPC_WEAK_FUNC(sub_83C095B4);
PPC_FUNC_IMPL(__imp__sub_83C095B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C095B8"))) PPC_WEAK_FUNC(sub_83C095B8);
PPC_FUNC_IMPL(__imp__sub_83C095B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21744
	ctx.r3.s64 = ctx.r11.s64 + 21744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C095C4"))) PPC_WEAK_FUNC(sub_83C095C4);
PPC_FUNC_IMPL(__imp__sub_83C095C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C095C8"))) PPC_WEAK_FUNC(sub_83C095C8);
PPC_FUNC_IMPL(__imp__sub_83C095C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21752
	ctx.r3.s64 = ctx.r11.s64 + 21752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C095D4"))) PPC_WEAK_FUNC(sub_83C095D4);
PPC_FUNC_IMPL(__imp__sub_83C095D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C095D8"))) PPC_WEAK_FUNC(sub_83C095D8);
PPC_FUNC_IMPL(__imp__sub_83C095D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21760
	ctx.r3.s64 = ctx.r11.s64 + 21760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C095E4"))) PPC_WEAK_FUNC(sub_83C095E4);
PPC_FUNC_IMPL(__imp__sub_83C095E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C095E8"))) PPC_WEAK_FUNC(sub_83C095E8);
PPC_FUNC_IMPL(__imp__sub_83C095E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21768
	ctx.r3.s64 = ctx.r11.s64 + 21768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C095F4"))) PPC_WEAK_FUNC(sub_83C095F4);
PPC_FUNC_IMPL(__imp__sub_83C095F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C095F8"))) PPC_WEAK_FUNC(sub_83C095F8);
PPC_FUNC_IMPL(__imp__sub_83C095F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21776
	ctx.r3.s64 = ctx.r11.s64 + 21776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09604"))) PPC_WEAK_FUNC(sub_83C09604);
PPC_FUNC_IMPL(__imp__sub_83C09604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09608"))) PPC_WEAK_FUNC(sub_83C09608);
PPC_FUNC_IMPL(__imp__sub_83C09608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21784
	ctx.r3.s64 = ctx.r11.s64 + 21784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09614"))) PPC_WEAK_FUNC(sub_83C09614);
PPC_FUNC_IMPL(__imp__sub_83C09614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09618"))) PPC_WEAK_FUNC(sub_83C09618);
PPC_FUNC_IMPL(__imp__sub_83C09618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21792
	ctx.r3.s64 = ctx.r11.s64 + 21792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09624"))) PPC_WEAK_FUNC(sub_83C09624);
PPC_FUNC_IMPL(__imp__sub_83C09624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09628"))) PPC_WEAK_FUNC(sub_83C09628);
PPC_FUNC_IMPL(__imp__sub_83C09628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21800
	ctx.r3.s64 = ctx.r11.s64 + 21800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09634"))) PPC_WEAK_FUNC(sub_83C09634);
PPC_FUNC_IMPL(__imp__sub_83C09634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09638"))) PPC_WEAK_FUNC(sub_83C09638);
PPC_FUNC_IMPL(__imp__sub_83C09638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21808
	ctx.r3.s64 = ctx.r11.s64 + 21808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09644"))) PPC_WEAK_FUNC(sub_83C09644);
PPC_FUNC_IMPL(__imp__sub_83C09644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09648"))) PPC_WEAK_FUNC(sub_83C09648);
PPC_FUNC_IMPL(__imp__sub_83C09648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21816
	ctx.r3.s64 = ctx.r11.s64 + 21816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09654"))) PPC_WEAK_FUNC(sub_83C09654);
PPC_FUNC_IMPL(__imp__sub_83C09654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09658"))) PPC_WEAK_FUNC(sub_83C09658);
PPC_FUNC_IMPL(__imp__sub_83C09658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21824
	ctx.r3.s64 = ctx.r11.s64 + 21824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09664"))) PPC_WEAK_FUNC(sub_83C09664);
PPC_FUNC_IMPL(__imp__sub_83C09664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09668"))) PPC_WEAK_FUNC(sub_83C09668);
PPC_FUNC_IMPL(__imp__sub_83C09668) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-1340
	ctx.r3.s64 = ctx.r11.s64 + -1340;
	// bl 0x83523120
	ctx.lr = 0x83C09680;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,21832
	ctx.r3.s64 = ctx.r10.s64 + 21832;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0968C;
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

__attribute__((alias("__imp__sub_83C0969C"))) PPC_WEAK_FUNC(sub_83C0969C);
PPC_FUNC_IMPL(__imp__sub_83C0969C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C096A0"))) PPC_WEAK_FUNC(sub_83C096A0);
PPC_FUNC_IMPL(__imp__sub_83C096A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21848
	ctx.r3.s64 = ctx.r11.s64 + 21848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C096AC"))) PPC_WEAK_FUNC(sub_83C096AC);
PPC_FUNC_IMPL(__imp__sub_83C096AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C096B0"))) PPC_WEAK_FUNC(sub_83C096B0);
PPC_FUNC_IMPL(__imp__sub_83C096B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21856
	ctx.r3.s64 = ctx.r11.s64 + 21856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C096BC"))) PPC_WEAK_FUNC(sub_83C096BC);
PPC_FUNC_IMPL(__imp__sub_83C096BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C096C0"))) PPC_WEAK_FUNC(sub_83C096C0);
PPC_FUNC_IMPL(__imp__sub_83C096C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21864
	ctx.r3.s64 = ctx.r11.s64 + 21864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C096CC"))) PPC_WEAK_FUNC(sub_83C096CC);
PPC_FUNC_IMPL(__imp__sub_83C096CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C096D0"))) PPC_WEAK_FUNC(sub_83C096D0);
PPC_FUNC_IMPL(__imp__sub_83C096D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21872
	ctx.r3.s64 = ctx.r11.s64 + 21872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C096DC"))) PPC_WEAK_FUNC(sub_83C096DC);
PPC_FUNC_IMPL(__imp__sub_83C096DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C096E0"))) PPC_WEAK_FUNC(sub_83C096E0);
PPC_FUNC_IMPL(__imp__sub_83C096E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21880
	ctx.r3.s64 = ctx.r11.s64 + 21880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C096EC"))) PPC_WEAK_FUNC(sub_83C096EC);
PPC_FUNC_IMPL(__imp__sub_83C096EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C096F0"))) PPC_WEAK_FUNC(sub_83C096F0);
PPC_FUNC_IMPL(__imp__sub_83C096F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21888
	ctx.r3.s64 = ctx.r11.s64 + 21888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C096FC"))) PPC_WEAK_FUNC(sub_83C096FC);
PPC_FUNC_IMPL(__imp__sub_83C096FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09700"))) PPC_WEAK_FUNC(sub_83C09700);
PPC_FUNC_IMPL(__imp__sub_83C09700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21896
	ctx.r3.s64 = ctx.r11.s64 + 21896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0970C"))) PPC_WEAK_FUNC(sub_83C0970C);
PPC_FUNC_IMPL(__imp__sub_83C0970C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09710"))) PPC_WEAK_FUNC(sub_83C09710);
PPC_FUNC_IMPL(__imp__sub_83C09710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21904
	ctx.r3.s64 = ctx.r11.s64 + 21904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0971C"))) PPC_WEAK_FUNC(sub_83C0971C);
PPC_FUNC_IMPL(__imp__sub_83C0971C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09720"))) PPC_WEAK_FUNC(sub_83C09720);
PPC_FUNC_IMPL(__imp__sub_83C09720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21912
	ctx.r3.s64 = ctx.r11.s64 + 21912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0972C"))) PPC_WEAK_FUNC(sub_83C0972C);
PPC_FUNC_IMPL(__imp__sub_83C0972C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09730"))) PPC_WEAK_FUNC(sub_83C09730);
PPC_FUNC_IMPL(__imp__sub_83C09730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21920
	ctx.r3.s64 = ctx.r11.s64 + 21920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0973C"))) PPC_WEAK_FUNC(sub_83C0973C);
PPC_FUNC_IMPL(__imp__sub_83C0973C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09740"))) PPC_WEAK_FUNC(sub_83C09740);
PPC_FUNC_IMPL(__imp__sub_83C09740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21928
	ctx.r3.s64 = ctx.r11.s64 + 21928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0974C"))) PPC_WEAK_FUNC(sub_83C0974C);
PPC_FUNC_IMPL(__imp__sub_83C0974C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09750"))) PPC_WEAK_FUNC(sub_83C09750);
PPC_FUNC_IMPL(__imp__sub_83C09750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21936
	ctx.r3.s64 = ctx.r11.s64 + 21936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0975C"))) PPC_WEAK_FUNC(sub_83C0975C);
PPC_FUNC_IMPL(__imp__sub_83C0975C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09760"))) PPC_WEAK_FUNC(sub_83C09760);
PPC_FUNC_IMPL(__imp__sub_83C09760) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-1332
	ctx.r3.s64 = ctx.r11.s64 + -1332;
	// bl 0x83523120
	ctx.lr = 0x83C09778;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,21944
	ctx.r3.s64 = ctx.r10.s64 + 21944;
	// bl 0x831cdcc8
	ctx.lr = 0x83C09784;
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

__attribute__((alias("__imp__sub_83C09794"))) PPC_WEAK_FUNC(sub_83C09794);
PPC_FUNC_IMPL(__imp__sub_83C09794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09798"))) PPC_WEAK_FUNC(sub_83C09798);
PPC_FUNC_IMPL(__imp__sub_83C09798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21960
	ctx.r3.s64 = ctx.r11.s64 + 21960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C097A4"))) PPC_WEAK_FUNC(sub_83C097A4);
PPC_FUNC_IMPL(__imp__sub_83C097A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C097A8"))) PPC_WEAK_FUNC(sub_83C097A8);
PPC_FUNC_IMPL(__imp__sub_83C097A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21968
	ctx.r3.s64 = ctx.r11.s64 + 21968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C097B4"))) PPC_WEAK_FUNC(sub_83C097B4);
PPC_FUNC_IMPL(__imp__sub_83C097B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C097B8"))) PPC_WEAK_FUNC(sub_83C097B8);
PPC_FUNC_IMPL(__imp__sub_83C097B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21976
	ctx.r3.s64 = ctx.r11.s64 + 21976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C097C4"))) PPC_WEAK_FUNC(sub_83C097C4);
PPC_FUNC_IMPL(__imp__sub_83C097C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C097C8"))) PPC_WEAK_FUNC(sub_83C097C8);
PPC_FUNC_IMPL(__imp__sub_83C097C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21984
	ctx.r3.s64 = ctx.r11.s64 + 21984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C097D4"))) PPC_WEAK_FUNC(sub_83C097D4);
PPC_FUNC_IMPL(__imp__sub_83C097D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C097D8"))) PPC_WEAK_FUNC(sub_83C097D8);
PPC_FUNC_IMPL(__imp__sub_83C097D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,21992
	ctx.r3.s64 = ctx.r11.s64 + 21992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C097E4"))) PPC_WEAK_FUNC(sub_83C097E4);
PPC_FUNC_IMPL(__imp__sub_83C097E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C097E8"))) PPC_WEAK_FUNC(sub_83C097E8);
PPC_FUNC_IMPL(__imp__sub_83C097E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,22000
	ctx.r3.s64 = ctx.r11.s64 + 22000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C097F4"))) PPC_WEAK_FUNC(sub_83C097F4);
PPC_FUNC_IMPL(__imp__sub_83C097F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C097F8"))) PPC_WEAK_FUNC(sub_83C097F8);
PPC_FUNC_IMPL(__imp__sub_83C097F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,22008
	ctx.r3.s64 = ctx.r11.s64 + 22008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09804"))) PPC_WEAK_FUNC(sub_83C09804);
PPC_FUNC_IMPL(__imp__sub_83C09804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09808"))) PPC_WEAK_FUNC(sub_83C09808);
PPC_FUNC_IMPL(__imp__sub_83C09808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,22016
	ctx.r3.s64 = ctx.r11.s64 + 22016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09814"))) PPC_WEAK_FUNC(sub_83C09814);
PPC_FUNC_IMPL(__imp__sub_83C09814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09818"))) PPC_WEAK_FUNC(sub_83C09818);
PPC_FUNC_IMPL(__imp__sub_83C09818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,22024
	ctx.r3.s64 = ctx.r11.s64 + 22024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09824"))) PPC_WEAK_FUNC(sub_83C09824);
PPC_FUNC_IMPL(__imp__sub_83C09824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09828"))) PPC_WEAK_FUNC(sub_83C09828);
PPC_FUNC_IMPL(__imp__sub_83C09828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,22032
	ctx.r3.s64 = ctx.r11.s64 + 22032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09834"))) PPC_WEAK_FUNC(sub_83C09834);
PPC_FUNC_IMPL(__imp__sub_83C09834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09838"))) PPC_WEAK_FUNC(sub_83C09838);
PPC_FUNC_IMPL(__imp__sub_83C09838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,22040
	ctx.r3.s64 = ctx.r11.s64 + 22040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09844"))) PPC_WEAK_FUNC(sub_83C09844);
PPC_FUNC_IMPL(__imp__sub_83C09844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09848"))) PPC_WEAK_FUNC(sub_83C09848);
PPC_FUNC_IMPL(__imp__sub_83C09848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,22048
	ctx.r3.s64 = ctx.r11.s64 + 22048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09854"))) PPC_WEAK_FUNC(sub_83C09854);
PPC_FUNC_IMPL(__imp__sub_83C09854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09858"))) PPC_WEAK_FUNC(sub_83C09858);
PPC_FUNC_IMPL(__imp__sub_83C09858) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-1320
	ctx.r3.s64 = ctx.r11.s64 + -1320;
	// bl 0x83523120
	ctx.lr = 0x83C09870;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,22056
	ctx.r3.s64 = ctx.r10.s64 + 22056;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0987C;
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

__attribute__((alias("__imp__sub_83C0988C"))) PPC_WEAK_FUNC(sub_83C0988C);
PPC_FUNC_IMPL(__imp__sub_83C0988C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09890"))) PPC_WEAK_FUNC(sub_83C09890);
PPC_FUNC_IMPL(__imp__sub_83C09890) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-1304
	ctx.r7.s64 = ctx.r8.s64 + -1304;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-1304(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -1304);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-1304(r8)
	PPC_STORE_U32(ctx.r8.u32 + -1304, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C098B8"))) PPC_WEAK_FUNC(sub_83C098B8);
PPC_FUNC_IMPL(__imp__sub_83C098B8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-23888
	ctx.r6.s64 = ctx.r7.s64 + -23888;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-23960(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -23960);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-1304(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -1304);
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
	// std r9,-23888(r7)
	PPC_STORE_U64(ctx.r7.u32 + -23888, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C09900"))) PPC_WEAK_FUNC(sub_83C09900);
PPC_FUNC_IMPL(__imp__sub_83C09900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,22072
	ctx.r3.s64 = ctx.r11.s64 + 22072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0990C"))) PPC_WEAK_FUNC(sub_83C0990C);
PPC_FUNC_IMPL(__imp__sub_83C0990C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09910"))) PPC_WEAK_FUNC(sub_83C09910);
PPC_FUNC_IMPL(__imp__sub_83C09910) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-1296
	ctx.r3.s64 = ctx.r11.s64 + -1296;
	// bl 0x8259af80
	ctx.lr = 0x83C09928;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,22088
	ctx.r3.s64 = ctx.r10.s64 + 22088;
	// bl 0x831cdcc8
	ctx.lr = 0x83C09934;
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

__attribute__((alias("__imp__sub_83C09944"))) PPC_WEAK_FUNC(sub_83C09944);
PPC_FUNC_IMPL(__imp__sub_83C09944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09948"))) PPC_WEAK_FUNC(sub_83C09948);
PPC_FUNC_IMPL(__imp__sub_83C09948) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-1316
	ctx.r11.s64 = ctx.r8.s64 + -1316;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-23912(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23912);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,22080
	ctx.r3.s64 = ctx.r6.s64 + 22080;
	// stw r10,-1316(r8)
	PPC_STORE_U32(ctx.r8.u32 + -1316, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09978"))) PPC_WEAK_FUNC(sub_83C09978);
PPC_FUNC_IMPL(__imp__sub_83C09978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,22096
	ctx.r3.s64 = ctx.r11.s64 + 22096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09984"))) PPC_WEAK_FUNC(sub_83C09984);
PPC_FUNC_IMPL(__imp__sub_83C09984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09988"))) PPC_WEAK_FUNC(sub_83C09988);
PPC_FUNC_IMPL(__imp__sub_83C09988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,22104
	ctx.r3.s64 = ctx.r11.s64 + 22104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09994"))) PPC_WEAK_FUNC(sub_83C09994);
PPC_FUNC_IMPL(__imp__sub_83C09994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09998"))) PPC_WEAK_FUNC(sub_83C09998);
PPC_FUNC_IMPL(__imp__sub_83C09998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,22112
	ctx.r3.s64 = ctx.r11.s64 + 22112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C099A4"))) PPC_WEAK_FUNC(sub_83C099A4);
PPC_FUNC_IMPL(__imp__sub_83C099A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C099A8"))) PPC_WEAK_FUNC(sub_83C099A8);
PPC_FUNC_IMPL(__imp__sub_83C099A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,22120
	ctx.r3.s64 = ctx.r11.s64 + 22120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C099B4"))) PPC_WEAK_FUNC(sub_83C099B4);
PPC_FUNC_IMPL(__imp__sub_83C099B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C099B8"))) PPC_WEAK_FUNC(sub_83C099B8);
PPC_FUNC_IMPL(__imp__sub_83C099B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,22128
	ctx.r3.s64 = ctx.r11.s64 + 22128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C099C4"))) PPC_WEAK_FUNC(sub_83C099C4);
PPC_FUNC_IMPL(__imp__sub_83C099C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C099C8"))) PPC_WEAK_FUNC(sub_83C099C8);
PPC_FUNC_IMPL(__imp__sub_83C099C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,22136
	ctx.r3.s64 = ctx.r11.s64 + 22136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C099D4"))) PPC_WEAK_FUNC(sub_83C099D4);
PPC_FUNC_IMPL(__imp__sub_83C099D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C099D8"))) PPC_WEAK_FUNC(sub_83C099D8);
PPC_FUNC_IMPL(__imp__sub_83C099D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,22144
	ctx.r3.s64 = ctx.r11.s64 + 22144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C099E4"))) PPC_WEAK_FUNC(sub_83C099E4);
PPC_FUNC_IMPL(__imp__sub_83C099E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C099E8"))) PPC_WEAK_FUNC(sub_83C099E8);
PPC_FUNC_IMPL(__imp__sub_83C099E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,22152
	ctx.r3.s64 = ctx.r11.s64 + 22152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C099F4"))) PPC_WEAK_FUNC(sub_83C099F4);
PPC_FUNC_IMPL(__imp__sub_83C099F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C099F8"))) PPC_WEAK_FUNC(sub_83C099F8);
PPC_FUNC_IMPL(__imp__sub_83C099F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,22160
	ctx.r3.s64 = ctx.r11.s64 + 22160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09A04"))) PPC_WEAK_FUNC(sub_83C09A04);
PPC_FUNC_IMPL(__imp__sub_83C09A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09A08"))) PPC_WEAK_FUNC(sub_83C09A08);
PPC_FUNC_IMPL(__imp__sub_83C09A08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,22168
	ctx.r3.s64 = ctx.r11.s64 + 22168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09A14"))) PPC_WEAK_FUNC(sub_83C09A14);
PPC_FUNC_IMPL(__imp__sub_83C09A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09A18"))) PPC_WEAK_FUNC(sub_83C09A18);
PPC_FUNC_IMPL(__imp__sub_83C09A18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,22176
	ctx.r3.s64 = ctx.r11.s64 + 22176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09A24"))) PPC_WEAK_FUNC(sub_83C09A24);
PPC_FUNC_IMPL(__imp__sub_83C09A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09A28"))) PPC_WEAK_FUNC(sub_83C09A28);
PPC_FUNC_IMPL(__imp__sub_83C09A28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,22184
	ctx.r3.s64 = ctx.r11.s64 + 22184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09A34"))) PPC_WEAK_FUNC(sub_83C09A34);
PPC_FUNC_IMPL(__imp__sub_83C09A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09A38"))) PPC_WEAK_FUNC(sub_83C09A38);
PPC_FUNC_IMPL(__imp__sub_83C09A38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,22192
	ctx.r3.s64 = ctx.r11.s64 + 22192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09A44"))) PPC_WEAK_FUNC(sub_83C09A44);
PPC_FUNC_IMPL(__imp__sub_83C09A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09A48"))) PPC_WEAK_FUNC(sub_83C09A48);
PPC_FUNC_IMPL(__imp__sub_83C09A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,22200
	ctx.r3.s64 = ctx.r11.s64 + 22200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09A54"))) PPC_WEAK_FUNC(sub_83C09A54);
PPC_FUNC_IMPL(__imp__sub_83C09A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09A58"))) PPC_WEAK_FUNC(sub_83C09A58);
PPC_FUNC_IMPL(__imp__sub_83C09A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,22208
	ctx.r3.s64 = ctx.r11.s64 + 22208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09A64"))) PPC_WEAK_FUNC(sub_83C09A64);
PPC_FUNC_IMPL(__imp__sub_83C09A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09A68"))) PPC_WEAK_FUNC(sub_83C09A68);
PPC_FUNC_IMPL(__imp__sub_83C09A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,22216
	ctx.r3.s64 = ctx.r11.s64 + 22216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09A74"))) PPC_WEAK_FUNC(sub_83C09A74);
PPC_FUNC_IMPL(__imp__sub_83C09A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09A78"))) PPC_WEAK_FUNC(sub_83C09A78);
PPC_FUNC_IMPL(__imp__sub_83C09A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,22224
	ctx.r3.s64 = ctx.r11.s64 + 22224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09A84"))) PPC_WEAK_FUNC(sub_83C09A84);
PPC_FUNC_IMPL(__imp__sub_83C09A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09A88"))) PPC_WEAK_FUNC(sub_83C09A88);
PPC_FUNC_IMPL(__imp__sub_83C09A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,22232
	ctx.r3.s64 = ctx.r11.s64 + 22232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09A94"))) PPC_WEAK_FUNC(sub_83C09A94);
PPC_FUNC_IMPL(__imp__sub_83C09A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09A98"))) PPC_WEAK_FUNC(sub_83C09A98);
PPC_FUNC_IMPL(__imp__sub_83C09A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,22240
	ctx.r3.s64 = ctx.r11.s64 + 22240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09AA4"))) PPC_WEAK_FUNC(sub_83C09AA4);
PPC_FUNC_IMPL(__imp__sub_83C09AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09AA8"))) PPC_WEAK_FUNC(sub_83C09AA8);
PPC_FUNC_IMPL(__imp__sub_83C09AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,22248
	ctx.r3.s64 = ctx.r11.s64 + 22248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09AB4"))) PPC_WEAK_FUNC(sub_83C09AB4);
PPC_FUNC_IMPL(__imp__sub_83C09AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09AB8"))) PPC_WEAK_FUNC(sub_83C09AB8);
PPC_FUNC_IMPL(__imp__sub_83C09AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,22256
	ctx.r3.s64 = ctx.r11.s64 + 22256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09AC4"))) PPC_WEAK_FUNC(sub_83C09AC4);
PPC_FUNC_IMPL(__imp__sub_83C09AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09AC8"))) PPC_WEAK_FUNC(sub_83C09AC8);
PPC_FUNC_IMPL(__imp__sub_83C09AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,22264
	ctx.r3.s64 = ctx.r11.s64 + 22264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09AD4"))) PPC_WEAK_FUNC(sub_83C09AD4);
PPC_FUNC_IMPL(__imp__sub_83C09AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09AD8"))) PPC_WEAK_FUNC(sub_83C09AD8);
PPC_FUNC_IMPL(__imp__sub_83C09AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,22272
	ctx.r3.s64 = ctx.r11.s64 + 22272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09AE4"))) PPC_WEAK_FUNC(sub_83C09AE4);
PPC_FUNC_IMPL(__imp__sub_83C09AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09AE8"))) PPC_WEAK_FUNC(sub_83C09AE8);
PPC_FUNC_IMPL(__imp__sub_83C09AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,22280
	ctx.r3.s64 = ctx.r11.s64 + 22280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09AF4"))) PPC_WEAK_FUNC(sub_83C09AF4);
PPC_FUNC_IMPL(__imp__sub_83C09AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09AF8"))) PPC_WEAK_FUNC(sub_83C09AF8);
PPC_FUNC_IMPL(__imp__sub_83C09AF8) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// addi r3,r11,-948
	ctx.r3.s64 = ctx.r11.s64 + -948;
	// bl 0x83523120
	ctx.lr = 0x83C09B10;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,22288
	ctx.r3.s64 = ctx.r10.s64 + 22288;
	// bl 0x831cdcc8
	ctx.lr = 0x83C09B1C;
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

__attribute__((alias("__imp__sub_83C09B2C"))) PPC_WEAK_FUNC(sub_83C09B2C);
PPC_FUNC_IMPL(__imp__sub_83C09B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09B30"))) PPC_WEAK_FUNC(sub_83C09B30);
PPC_FUNC_IMPL(__imp__sub_83C09B30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,22304
	ctx.r3.s64 = ctx.r11.s64 + 22304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09B3C"))) PPC_WEAK_FUNC(sub_83C09B3C);
PPC_FUNC_IMPL(__imp__sub_83C09B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09B40"))) PPC_WEAK_FUNC(sub_83C09B40);
PPC_FUNC_IMPL(__imp__sub_83C09B40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,22312
	ctx.r3.s64 = ctx.r11.s64 + 22312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09B4C"))) PPC_WEAK_FUNC(sub_83C09B4C);
PPC_FUNC_IMPL(__imp__sub_83C09B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09B50"))) PPC_WEAK_FUNC(sub_83C09B50);
PPC_FUNC_IMPL(__imp__sub_83C09B50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,22320
	ctx.r3.s64 = ctx.r11.s64 + 22320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C09B5C"))) PPC_WEAK_FUNC(sub_83C09B5C);
PPC_FUNC_IMPL(__imp__sub_83C09B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C09B60"))) PPC_WEAK_FUNC(sub_83C09B60);
PPC_FUNC_IMPL(__imp__sub_83C09B60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,22328
	ctx.r3.s64 = ctx.r11.s64 + 22328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

