#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83B8E9F0"))) PPC_WEAK_FUNC(sub_83B8E9F0);
PPC_FUNC_IMPL(__imp__sub_83B8E9F0) {
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
	// addi r3,r11,-7024
	ctx.r3.s64 = ctx.r11.s64 + -7024;
	// bl 0x83523120
	ctx.lr = 0x83B8EA08;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-6448
	ctx.r3.s64 = ctx.r10.s64 + -6448;
	// bl 0x831cdcc8
	ctx.lr = 0x83B8EA14;
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

__attribute__((alias("__imp__sub_83B8EA24"))) PPC_WEAK_FUNC(sub_83B8EA24);
PPC_FUNC_IMPL(__imp__sub_83B8EA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EA28"))) PPC_WEAK_FUNC(sub_83B8EA28);
PPC_FUNC_IMPL(__imp__sub_83B8EA28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6432
	ctx.r3.s64 = ctx.r11.s64 + -6432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EA34"))) PPC_WEAK_FUNC(sub_83B8EA34);
PPC_FUNC_IMPL(__imp__sub_83B8EA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EA38"))) PPC_WEAK_FUNC(sub_83B8EA38);
PPC_FUNC_IMPL(__imp__sub_83B8EA38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6424
	ctx.r3.s64 = ctx.r11.s64 + -6424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EA44"))) PPC_WEAK_FUNC(sub_83B8EA44);
PPC_FUNC_IMPL(__imp__sub_83B8EA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EA48"))) PPC_WEAK_FUNC(sub_83B8EA48);
PPC_FUNC_IMPL(__imp__sub_83B8EA48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6416
	ctx.r3.s64 = ctx.r11.s64 + -6416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EA54"))) PPC_WEAK_FUNC(sub_83B8EA54);
PPC_FUNC_IMPL(__imp__sub_83B8EA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EA58"))) PPC_WEAK_FUNC(sub_83B8EA58);
PPC_FUNC_IMPL(__imp__sub_83B8EA58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6408
	ctx.r3.s64 = ctx.r11.s64 + -6408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EA64"))) PPC_WEAK_FUNC(sub_83B8EA64);
PPC_FUNC_IMPL(__imp__sub_83B8EA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EA68"))) PPC_WEAK_FUNC(sub_83B8EA68);
PPC_FUNC_IMPL(__imp__sub_83B8EA68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6400
	ctx.r3.s64 = ctx.r11.s64 + -6400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EA74"))) PPC_WEAK_FUNC(sub_83B8EA74);
PPC_FUNC_IMPL(__imp__sub_83B8EA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EA78"))) PPC_WEAK_FUNC(sub_83B8EA78);
PPC_FUNC_IMPL(__imp__sub_83B8EA78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6392
	ctx.r3.s64 = ctx.r11.s64 + -6392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EA84"))) PPC_WEAK_FUNC(sub_83B8EA84);
PPC_FUNC_IMPL(__imp__sub_83B8EA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EA88"))) PPC_WEAK_FUNC(sub_83B8EA88);
PPC_FUNC_IMPL(__imp__sub_83B8EA88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6384
	ctx.r3.s64 = ctx.r11.s64 + -6384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EA94"))) PPC_WEAK_FUNC(sub_83B8EA94);
PPC_FUNC_IMPL(__imp__sub_83B8EA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EA98"))) PPC_WEAK_FUNC(sub_83B8EA98);
PPC_FUNC_IMPL(__imp__sub_83B8EA98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6376
	ctx.r3.s64 = ctx.r11.s64 + -6376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EAA4"))) PPC_WEAK_FUNC(sub_83B8EAA4);
PPC_FUNC_IMPL(__imp__sub_83B8EAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EAA8"))) PPC_WEAK_FUNC(sub_83B8EAA8);
PPC_FUNC_IMPL(__imp__sub_83B8EAA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6368
	ctx.r3.s64 = ctx.r11.s64 + -6368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EAB4"))) PPC_WEAK_FUNC(sub_83B8EAB4);
PPC_FUNC_IMPL(__imp__sub_83B8EAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EAB8"))) PPC_WEAK_FUNC(sub_83B8EAB8);
PPC_FUNC_IMPL(__imp__sub_83B8EAB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6360
	ctx.r3.s64 = ctx.r11.s64 + -6360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EAC4"))) PPC_WEAK_FUNC(sub_83B8EAC4);
PPC_FUNC_IMPL(__imp__sub_83B8EAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EAC8"))) PPC_WEAK_FUNC(sub_83B8EAC8);
PPC_FUNC_IMPL(__imp__sub_83B8EAC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6352
	ctx.r3.s64 = ctx.r11.s64 + -6352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EAD4"))) PPC_WEAK_FUNC(sub_83B8EAD4);
PPC_FUNC_IMPL(__imp__sub_83B8EAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EAD8"))) PPC_WEAK_FUNC(sub_83B8EAD8);
PPC_FUNC_IMPL(__imp__sub_83B8EAD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6344
	ctx.r3.s64 = ctx.r11.s64 + -6344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EAE4"))) PPC_WEAK_FUNC(sub_83B8EAE4);
PPC_FUNC_IMPL(__imp__sub_83B8EAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EAE8"))) PPC_WEAK_FUNC(sub_83B8EAE8);
PPC_FUNC_IMPL(__imp__sub_83B8EAE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6336
	ctx.r3.s64 = ctx.r11.s64 + -6336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EAF4"))) PPC_WEAK_FUNC(sub_83B8EAF4);
PPC_FUNC_IMPL(__imp__sub_83B8EAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EAF8"))) PPC_WEAK_FUNC(sub_83B8EAF8);
PPC_FUNC_IMPL(__imp__sub_83B8EAF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6328
	ctx.r3.s64 = ctx.r11.s64 + -6328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EB04"))) PPC_WEAK_FUNC(sub_83B8EB04);
PPC_FUNC_IMPL(__imp__sub_83B8EB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EB08"))) PPC_WEAK_FUNC(sub_83B8EB08);
PPC_FUNC_IMPL(__imp__sub_83B8EB08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6320
	ctx.r3.s64 = ctx.r11.s64 + -6320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EB14"))) PPC_WEAK_FUNC(sub_83B8EB14);
PPC_FUNC_IMPL(__imp__sub_83B8EB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EB18"))) PPC_WEAK_FUNC(sub_83B8EB18);
PPC_FUNC_IMPL(__imp__sub_83B8EB18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6312
	ctx.r3.s64 = ctx.r11.s64 + -6312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EB24"))) PPC_WEAK_FUNC(sub_83B8EB24);
PPC_FUNC_IMPL(__imp__sub_83B8EB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EB28"))) PPC_WEAK_FUNC(sub_83B8EB28);
PPC_FUNC_IMPL(__imp__sub_83B8EB28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6304
	ctx.r3.s64 = ctx.r11.s64 + -6304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EB34"))) PPC_WEAK_FUNC(sub_83B8EB34);
PPC_FUNC_IMPL(__imp__sub_83B8EB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EB38"))) PPC_WEAK_FUNC(sub_83B8EB38);
PPC_FUNC_IMPL(__imp__sub_83B8EB38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6296
	ctx.r3.s64 = ctx.r11.s64 + -6296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EB44"))) PPC_WEAK_FUNC(sub_83B8EB44);
PPC_FUNC_IMPL(__imp__sub_83B8EB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EB48"))) PPC_WEAK_FUNC(sub_83B8EB48);
PPC_FUNC_IMPL(__imp__sub_83B8EB48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6288
	ctx.r3.s64 = ctx.r11.s64 + -6288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EB54"))) PPC_WEAK_FUNC(sub_83B8EB54);
PPC_FUNC_IMPL(__imp__sub_83B8EB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EB58"))) PPC_WEAK_FUNC(sub_83B8EB58);
PPC_FUNC_IMPL(__imp__sub_83B8EB58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6280
	ctx.r3.s64 = ctx.r11.s64 + -6280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EB64"))) PPC_WEAK_FUNC(sub_83B8EB64);
PPC_FUNC_IMPL(__imp__sub_83B8EB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EB68"))) PPC_WEAK_FUNC(sub_83B8EB68);
PPC_FUNC_IMPL(__imp__sub_83B8EB68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6272
	ctx.r3.s64 = ctx.r11.s64 + -6272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EB74"))) PPC_WEAK_FUNC(sub_83B8EB74);
PPC_FUNC_IMPL(__imp__sub_83B8EB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EB78"))) PPC_WEAK_FUNC(sub_83B8EB78);
PPC_FUNC_IMPL(__imp__sub_83B8EB78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6264
	ctx.r3.s64 = ctx.r11.s64 + -6264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EB84"))) PPC_WEAK_FUNC(sub_83B8EB84);
PPC_FUNC_IMPL(__imp__sub_83B8EB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EB88"))) PPC_WEAK_FUNC(sub_83B8EB88);
PPC_FUNC_IMPL(__imp__sub_83B8EB88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6256
	ctx.r3.s64 = ctx.r11.s64 + -6256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EB94"))) PPC_WEAK_FUNC(sub_83B8EB94);
PPC_FUNC_IMPL(__imp__sub_83B8EB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EB98"))) PPC_WEAK_FUNC(sub_83B8EB98);
PPC_FUNC_IMPL(__imp__sub_83B8EB98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6248
	ctx.r3.s64 = ctx.r11.s64 + -6248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EBA4"))) PPC_WEAK_FUNC(sub_83B8EBA4);
PPC_FUNC_IMPL(__imp__sub_83B8EBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EBA8"))) PPC_WEAK_FUNC(sub_83B8EBA8);
PPC_FUNC_IMPL(__imp__sub_83B8EBA8) {
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
	// addi r3,r11,-7003
	ctx.r3.s64 = ctx.r11.s64 + -7003;
	// bl 0x83523120
	ctx.lr = 0x83B8EBC0;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-6240
	ctx.r3.s64 = ctx.r10.s64 + -6240;
	// bl 0x831cdcc8
	ctx.lr = 0x83B8EBCC;
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

__attribute__((alias("__imp__sub_83B8EBDC"))) PPC_WEAK_FUNC(sub_83B8EBDC);
PPC_FUNC_IMPL(__imp__sub_83B8EBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EBE0"))) PPC_WEAK_FUNC(sub_83B8EBE0);
PPC_FUNC_IMPL(__imp__sub_83B8EBE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-7000
	ctx.r7.s64 = ctx.r8.s64 + -7000;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-7000(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7000);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-7000(r8)
	PPC_STORE_U32(ctx.r8.u32 + -7000, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B8EC08"))) PPC_WEAK_FUNC(sub_83B8EC08);
PPC_FUNC_IMPL(__imp__sub_83B8EC08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6224
	ctx.r3.s64 = ctx.r11.s64 + -6224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EC14"))) PPC_WEAK_FUNC(sub_83B8EC14);
PPC_FUNC_IMPL(__imp__sub_83B8EC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EC18"))) PPC_WEAK_FUNC(sub_83B8EC18);
PPC_FUNC_IMPL(__imp__sub_83B8EC18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6216
	ctx.r3.s64 = ctx.r11.s64 + -6216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EC24"))) PPC_WEAK_FUNC(sub_83B8EC24);
PPC_FUNC_IMPL(__imp__sub_83B8EC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EC28"))) PPC_WEAK_FUNC(sub_83B8EC28);
PPC_FUNC_IMPL(__imp__sub_83B8EC28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6208
	ctx.r3.s64 = ctx.r11.s64 + -6208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EC34"))) PPC_WEAK_FUNC(sub_83B8EC34);
PPC_FUNC_IMPL(__imp__sub_83B8EC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EC38"))) PPC_WEAK_FUNC(sub_83B8EC38);
PPC_FUNC_IMPL(__imp__sub_83B8EC38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6200
	ctx.r3.s64 = ctx.r11.s64 + -6200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EC44"))) PPC_WEAK_FUNC(sub_83B8EC44);
PPC_FUNC_IMPL(__imp__sub_83B8EC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EC48"))) PPC_WEAK_FUNC(sub_83B8EC48);
PPC_FUNC_IMPL(__imp__sub_83B8EC48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6192
	ctx.r3.s64 = ctx.r11.s64 + -6192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EC54"))) PPC_WEAK_FUNC(sub_83B8EC54);
PPC_FUNC_IMPL(__imp__sub_83B8EC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EC58"))) PPC_WEAK_FUNC(sub_83B8EC58);
PPC_FUNC_IMPL(__imp__sub_83B8EC58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6184
	ctx.r3.s64 = ctx.r11.s64 + -6184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EC64"))) PPC_WEAK_FUNC(sub_83B8EC64);
PPC_FUNC_IMPL(__imp__sub_83B8EC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EC68"))) PPC_WEAK_FUNC(sub_83B8EC68);
PPC_FUNC_IMPL(__imp__sub_83B8EC68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6176
	ctx.r3.s64 = ctx.r11.s64 + -6176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EC74"))) PPC_WEAK_FUNC(sub_83B8EC74);
PPC_FUNC_IMPL(__imp__sub_83B8EC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EC78"))) PPC_WEAK_FUNC(sub_83B8EC78);
PPC_FUNC_IMPL(__imp__sub_83B8EC78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6168
	ctx.r3.s64 = ctx.r11.s64 + -6168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EC84"))) PPC_WEAK_FUNC(sub_83B8EC84);
PPC_FUNC_IMPL(__imp__sub_83B8EC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EC88"))) PPC_WEAK_FUNC(sub_83B8EC88);
PPC_FUNC_IMPL(__imp__sub_83B8EC88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6160
	ctx.r3.s64 = ctx.r11.s64 + -6160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EC94"))) PPC_WEAK_FUNC(sub_83B8EC94);
PPC_FUNC_IMPL(__imp__sub_83B8EC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EC98"))) PPC_WEAK_FUNC(sub_83B8EC98);
PPC_FUNC_IMPL(__imp__sub_83B8EC98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6152
	ctx.r3.s64 = ctx.r11.s64 + -6152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8ECA4"))) PPC_WEAK_FUNC(sub_83B8ECA4);
PPC_FUNC_IMPL(__imp__sub_83B8ECA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8ECA8"))) PPC_WEAK_FUNC(sub_83B8ECA8);
PPC_FUNC_IMPL(__imp__sub_83B8ECA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6144
	ctx.r3.s64 = ctx.r11.s64 + -6144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8ECB4"))) PPC_WEAK_FUNC(sub_83B8ECB4);
PPC_FUNC_IMPL(__imp__sub_83B8ECB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8ECB8"))) PPC_WEAK_FUNC(sub_83B8ECB8);
PPC_FUNC_IMPL(__imp__sub_83B8ECB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6136
	ctx.r3.s64 = ctx.r11.s64 + -6136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8ECC4"))) PPC_WEAK_FUNC(sub_83B8ECC4);
PPC_FUNC_IMPL(__imp__sub_83B8ECC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8ECC8"))) PPC_WEAK_FUNC(sub_83B8ECC8);
PPC_FUNC_IMPL(__imp__sub_83B8ECC8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-6988
	ctx.r7.s64 = ctx.r8.s64 + -6988;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-6988(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6988);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-6988(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6988, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B8ECF0"))) PPC_WEAK_FUNC(sub_83B8ECF0);
PPC_FUNC_IMPL(__imp__sub_83B8ECF0) {
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
	// addi r3,r11,-6992
	ctx.r3.s64 = ctx.r11.s64 + -6992;
	// bl 0x83523120
	ctx.lr = 0x83B8ED08;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-6128
	ctx.r3.s64 = ctx.r10.s64 + -6128;
	// bl 0x831cdcc8
	ctx.lr = 0x83B8ED14;
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

__attribute__((alias("__imp__sub_83B8ED24"))) PPC_WEAK_FUNC(sub_83B8ED24);
PPC_FUNC_IMPL(__imp__sub_83B8ED24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8ED28"))) PPC_WEAK_FUNC(sub_83B8ED28);
PPC_FUNC_IMPL(__imp__sub_83B8ED28) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,-21020
	ctx.r6.s64 = ctx.r7.s64 + -21020;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-21116(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -21116);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-6988(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -6988);
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
	// std r9,-21020(r7)
	PPC_STORE_U64(ctx.r7.u32 + -21020, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B8ED70"))) PPC_WEAK_FUNC(sub_83B8ED70);
PPC_FUNC_IMPL(__imp__sub_83B8ED70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6112
	ctx.r3.s64 = ctx.r11.s64 + -6112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8ED7C"))) PPC_WEAK_FUNC(sub_83B8ED7C);
PPC_FUNC_IMPL(__imp__sub_83B8ED7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8ED80"))) PPC_WEAK_FUNC(sub_83B8ED80);
PPC_FUNC_IMPL(__imp__sub_83B8ED80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6104
	ctx.r3.s64 = ctx.r11.s64 + -6104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8ED8C"))) PPC_WEAK_FUNC(sub_83B8ED8C);
PPC_FUNC_IMPL(__imp__sub_83B8ED8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8ED90"))) PPC_WEAK_FUNC(sub_83B8ED90);
PPC_FUNC_IMPL(__imp__sub_83B8ED90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6096
	ctx.r3.s64 = ctx.r11.s64 + -6096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8ED9C"))) PPC_WEAK_FUNC(sub_83B8ED9C);
PPC_FUNC_IMPL(__imp__sub_83B8ED9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EDA0"))) PPC_WEAK_FUNC(sub_83B8EDA0);
PPC_FUNC_IMPL(__imp__sub_83B8EDA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6088
	ctx.r3.s64 = ctx.r11.s64 + -6088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EDAC"))) PPC_WEAK_FUNC(sub_83B8EDAC);
PPC_FUNC_IMPL(__imp__sub_83B8EDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EDB0"))) PPC_WEAK_FUNC(sub_83B8EDB0);
PPC_FUNC_IMPL(__imp__sub_83B8EDB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6080
	ctx.r3.s64 = ctx.r11.s64 + -6080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EDBC"))) PPC_WEAK_FUNC(sub_83B8EDBC);
PPC_FUNC_IMPL(__imp__sub_83B8EDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EDC0"))) PPC_WEAK_FUNC(sub_83B8EDC0);
PPC_FUNC_IMPL(__imp__sub_83B8EDC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6072
	ctx.r3.s64 = ctx.r11.s64 + -6072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EDCC"))) PPC_WEAK_FUNC(sub_83B8EDCC);
PPC_FUNC_IMPL(__imp__sub_83B8EDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EDD0"))) PPC_WEAK_FUNC(sub_83B8EDD0);
PPC_FUNC_IMPL(__imp__sub_83B8EDD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6064
	ctx.r3.s64 = ctx.r11.s64 + -6064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EDDC"))) PPC_WEAK_FUNC(sub_83B8EDDC);
PPC_FUNC_IMPL(__imp__sub_83B8EDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EDE0"))) PPC_WEAK_FUNC(sub_83B8EDE0);
PPC_FUNC_IMPL(__imp__sub_83B8EDE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6056
	ctx.r3.s64 = ctx.r11.s64 + -6056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EDEC"))) PPC_WEAK_FUNC(sub_83B8EDEC);
PPC_FUNC_IMPL(__imp__sub_83B8EDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EDF0"))) PPC_WEAK_FUNC(sub_83B8EDF0);
PPC_FUNC_IMPL(__imp__sub_83B8EDF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6048
	ctx.r3.s64 = ctx.r11.s64 + -6048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EDFC"))) PPC_WEAK_FUNC(sub_83B8EDFC);
PPC_FUNC_IMPL(__imp__sub_83B8EDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EE00"))) PPC_WEAK_FUNC(sub_83B8EE00);
PPC_FUNC_IMPL(__imp__sub_83B8EE00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6040
	ctx.r3.s64 = ctx.r11.s64 + -6040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EE0C"))) PPC_WEAK_FUNC(sub_83B8EE0C);
PPC_FUNC_IMPL(__imp__sub_83B8EE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EE10"))) PPC_WEAK_FUNC(sub_83B8EE10);
PPC_FUNC_IMPL(__imp__sub_83B8EE10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6032
	ctx.r3.s64 = ctx.r11.s64 + -6032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EE1C"))) PPC_WEAK_FUNC(sub_83B8EE1C);
PPC_FUNC_IMPL(__imp__sub_83B8EE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EE20"))) PPC_WEAK_FUNC(sub_83B8EE20);
PPC_FUNC_IMPL(__imp__sub_83B8EE20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6024
	ctx.r3.s64 = ctx.r11.s64 + -6024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EE2C"))) PPC_WEAK_FUNC(sub_83B8EE2C);
PPC_FUNC_IMPL(__imp__sub_83B8EE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EE30"))) PPC_WEAK_FUNC(sub_83B8EE30);
PPC_FUNC_IMPL(__imp__sub_83B8EE30) {
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
	// addi r3,r11,-6979
	ctx.r3.s64 = ctx.r11.s64 + -6979;
	// bl 0x83523120
	ctx.lr = 0x83B8EE48;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-6016
	ctx.r3.s64 = ctx.r10.s64 + -6016;
	// bl 0x831cdcc8
	ctx.lr = 0x83B8EE54;
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

__attribute__((alias("__imp__sub_83B8EE64"))) PPC_WEAK_FUNC(sub_83B8EE64);
PPC_FUNC_IMPL(__imp__sub_83B8EE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EE68"))) PPC_WEAK_FUNC(sub_83B8EE68);
PPC_FUNC_IMPL(__imp__sub_83B8EE68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-6000
	ctx.r3.s64 = ctx.r11.s64 + -6000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EE74"))) PPC_WEAK_FUNC(sub_83B8EE74);
PPC_FUNC_IMPL(__imp__sub_83B8EE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EE78"))) PPC_WEAK_FUNC(sub_83B8EE78);
PPC_FUNC_IMPL(__imp__sub_83B8EE78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5992
	ctx.r3.s64 = ctx.r11.s64 + -5992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EE84"))) PPC_WEAK_FUNC(sub_83B8EE84);
PPC_FUNC_IMPL(__imp__sub_83B8EE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EE88"))) PPC_WEAK_FUNC(sub_83B8EE88);
PPC_FUNC_IMPL(__imp__sub_83B8EE88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5984
	ctx.r3.s64 = ctx.r11.s64 + -5984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EE94"))) PPC_WEAK_FUNC(sub_83B8EE94);
PPC_FUNC_IMPL(__imp__sub_83B8EE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EE98"))) PPC_WEAK_FUNC(sub_83B8EE98);
PPC_FUNC_IMPL(__imp__sub_83B8EE98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5976
	ctx.r3.s64 = ctx.r11.s64 + -5976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EEA4"))) PPC_WEAK_FUNC(sub_83B8EEA4);
PPC_FUNC_IMPL(__imp__sub_83B8EEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EEA8"))) PPC_WEAK_FUNC(sub_83B8EEA8);
PPC_FUNC_IMPL(__imp__sub_83B8EEA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5968
	ctx.r3.s64 = ctx.r11.s64 + -5968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EEB4"))) PPC_WEAK_FUNC(sub_83B8EEB4);
PPC_FUNC_IMPL(__imp__sub_83B8EEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EEB8"))) PPC_WEAK_FUNC(sub_83B8EEB8);
PPC_FUNC_IMPL(__imp__sub_83B8EEB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5960
	ctx.r3.s64 = ctx.r11.s64 + -5960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EEC4"))) PPC_WEAK_FUNC(sub_83B8EEC4);
PPC_FUNC_IMPL(__imp__sub_83B8EEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EEC8"))) PPC_WEAK_FUNC(sub_83B8EEC8);
PPC_FUNC_IMPL(__imp__sub_83B8EEC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5952
	ctx.r3.s64 = ctx.r11.s64 + -5952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EED4"))) PPC_WEAK_FUNC(sub_83B8EED4);
PPC_FUNC_IMPL(__imp__sub_83B8EED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EED8"))) PPC_WEAK_FUNC(sub_83B8EED8);
PPC_FUNC_IMPL(__imp__sub_83B8EED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5944
	ctx.r3.s64 = ctx.r11.s64 + -5944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EEE4"))) PPC_WEAK_FUNC(sub_83B8EEE4);
PPC_FUNC_IMPL(__imp__sub_83B8EEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EEE8"))) PPC_WEAK_FUNC(sub_83B8EEE8);
PPC_FUNC_IMPL(__imp__sub_83B8EEE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5936
	ctx.r3.s64 = ctx.r11.s64 + -5936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EEF4"))) PPC_WEAK_FUNC(sub_83B8EEF4);
PPC_FUNC_IMPL(__imp__sub_83B8EEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EEF8"))) PPC_WEAK_FUNC(sub_83B8EEF8);
PPC_FUNC_IMPL(__imp__sub_83B8EEF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5928
	ctx.r3.s64 = ctx.r11.s64 + -5928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EF04"))) PPC_WEAK_FUNC(sub_83B8EF04);
PPC_FUNC_IMPL(__imp__sub_83B8EF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EF08"))) PPC_WEAK_FUNC(sub_83B8EF08);
PPC_FUNC_IMPL(__imp__sub_83B8EF08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5920
	ctx.r3.s64 = ctx.r11.s64 + -5920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EF14"))) PPC_WEAK_FUNC(sub_83B8EF14);
PPC_FUNC_IMPL(__imp__sub_83B8EF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EF18"))) PPC_WEAK_FUNC(sub_83B8EF18);
PPC_FUNC_IMPL(__imp__sub_83B8EF18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5912
	ctx.r3.s64 = ctx.r11.s64 + -5912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EF24"))) PPC_WEAK_FUNC(sub_83B8EF24);
PPC_FUNC_IMPL(__imp__sub_83B8EF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EF28"))) PPC_WEAK_FUNC(sub_83B8EF28);
PPC_FUNC_IMPL(__imp__sub_83B8EF28) {
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
	// addi r3,r11,-6971
	ctx.r3.s64 = ctx.r11.s64 + -6971;
	// bl 0x83523120
	ctx.lr = 0x83B8EF40;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-5904
	ctx.r3.s64 = ctx.r10.s64 + -5904;
	// bl 0x831cdcc8
	ctx.lr = 0x83B8EF4C;
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

__attribute__((alias("__imp__sub_83B8EF5C"))) PPC_WEAK_FUNC(sub_83B8EF5C);
PPC_FUNC_IMPL(__imp__sub_83B8EF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EF60"))) PPC_WEAK_FUNC(sub_83B8EF60);
PPC_FUNC_IMPL(__imp__sub_83B8EF60) {
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
	// addi r3,r11,-6964
	ctx.r3.s64 = ctx.r11.s64 + -6964;
	// bl 0x82a5c280
	ctx.lr = 0x83B8EF78;
	sub_82A5C280(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-5888
	ctx.r3.s64 = ctx.r10.s64 + -5888;
	// bl 0x831cdcc8
	ctx.lr = 0x83B8EF84;
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

__attribute__((alias("__imp__sub_83B8EF94"))) PPC_WEAK_FUNC(sub_83B8EF94);
PPC_FUNC_IMPL(__imp__sub_83B8EF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EF98"))) PPC_WEAK_FUNC(sub_83B8EF98);
PPC_FUNC_IMPL(__imp__sub_83B8EF98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5872
	ctx.r3.s64 = ctx.r11.s64 + -5872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EFA4"))) PPC_WEAK_FUNC(sub_83B8EFA4);
PPC_FUNC_IMPL(__imp__sub_83B8EFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EFA8"))) PPC_WEAK_FUNC(sub_83B8EFA8);
PPC_FUNC_IMPL(__imp__sub_83B8EFA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5864
	ctx.r3.s64 = ctx.r11.s64 + -5864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EFB4"))) PPC_WEAK_FUNC(sub_83B8EFB4);
PPC_FUNC_IMPL(__imp__sub_83B8EFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EFB8"))) PPC_WEAK_FUNC(sub_83B8EFB8);
PPC_FUNC_IMPL(__imp__sub_83B8EFB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5856
	ctx.r3.s64 = ctx.r11.s64 + -5856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EFC4"))) PPC_WEAK_FUNC(sub_83B8EFC4);
PPC_FUNC_IMPL(__imp__sub_83B8EFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EFC8"))) PPC_WEAK_FUNC(sub_83B8EFC8);
PPC_FUNC_IMPL(__imp__sub_83B8EFC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5848
	ctx.r3.s64 = ctx.r11.s64 + -5848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EFD4"))) PPC_WEAK_FUNC(sub_83B8EFD4);
PPC_FUNC_IMPL(__imp__sub_83B8EFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EFD8"))) PPC_WEAK_FUNC(sub_83B8EFD8);
PPC_FUNC_IMPL(__imp__sub_83B8EFD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5840
	ctx.r3.s64 = ctx.r11.s64 + -5840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EFE4"))) PPC_WEAK_FUNC(sub_83B8EFE4);
PPC_FUNC_IMPL(__imp__sub_83B8EFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EFE8"))) PPC_WEAK_FUNC(sub_83B8EFE8);
PPC_FUNC_IMPL(__imp__sub_83B8EFE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5832
	ctx.r3.s64 = ctx.r11.s64 + -5832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8EFF4"))) PPC_WEAK_FUNC(sub_83B8EFF4);
PPC_FUNC_IMPL(__imp__sub_83B8EFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8EFF8"))) PPC_WEAK_FUNC(sub_83B8EFF8);
PPC_FUNC_IMPL(__imp__sub_83B8EFF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5824
	ctx.r3.s64 = ctx.r11.s64 + -5824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F004"))) PPC_WEAK_FUNC(sub_83B8F004);
PPC_FUNC_IMPL(__imp__sub_83B8F004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F008"))) PPC_WEAK_FUNC(sub_83B8F008);
PPC_FUNC_IMPL(__imp__sub_83B8F008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5816
	ctx.r3.s64 = ctx.r11.s64 + -5816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F014"))) PPC_WEAK_FUNC(sub_83B8F014);
PPC_FUNC_IMPL(__imp__sub_83B8F014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F018"))) PPC_WEAK_FUNC(sub_83B8F018);
PPC_FUNC_IMPL(__imp__sub_83B8F018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5808
	ctx.r3.s64 = ctx.r11.s64 + -5808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F024"))) PPC_WEAK_FUNC(sub_83B8F024);
PPC_FUNC_IMPL(__imp__sub_83B8F024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F028"))) PPC_WEAK_FUNC(sub_83B8F028);
PPC_FUNC_IMPL(__imp__sub_83B8F028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5800
	ctx.r3.s64 = ctx.r11.s64 + -5800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F034"))) PPC_WEAK_FUNC(sub_83B8F034);
PPC_FUNC_IMPL(__imp__sub_83B8F034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F038"))) PPC_WEAK_FUNC(sub_83B8F038);
PPC_FUNC_IMPL(__imp__sub_83B8F038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5792
	ctx.r3.s64 = ctx.r11.s64 + -5792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F044"))) PPC_WEAK_FUNC(sub_83B8F044);
PPC_FUNC_IMPL(__imp__sub_83B8F044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F048"))) PPC_WEAK_FUNC(sub_83B8F048);
PPC_FUNC_IMPL(__imp__sub_83B8F048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5784
	ctx.r3.s64 = ctx.r11.s64 + -5784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F054"))) PPC_WEAK_FUNC(sub_83B8F054);
PPC_FUNC_IMPL(__imp__sub_83B8F054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F058"))) PPC_WEAK_FUNC(sub_83B8F058);
PPC_FUNC_IMPL(__imp__sub_83B8F058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5776
	ctx.r3.s64 = ctx.r11.s64 + -5776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F064"))) PPC_WEAK_FUNC(sub_83B8F064);
PPC_FUNC_IMPL(__imp__sub_83B8F064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F068"))) PPC_WEAK_FUNC(sub_83B8F068);
PPC_FUNC_IMPL(__imp__sub_83B8F068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5768
	ctx.r3.s64 = ctx.r11.s64 + -5768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F074"))) PPC_WEAK_FUNC(sub_83B8F074);
PPC_FUNC_IMPL(__imp__sub_83B8F074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F078"))) PPC_WEAK_FUNC(sub_83B8F078);
PPC_FUNC_IMPL(__imp__sub_83B8F078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5760
	ctx.r3.s64 = ctx.r11.s64 + -5760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F084"))) PPC_WEAK_FUNC(sub_83B8F084);
PPC_FUNC_IMPL(__imp__sub_83B8F084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F088"))) PPC_WEAK_FUNC(sub_83B8F088);
PPC_FUNC_IMPL(__imp__sub_83B8F088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5752
	ctx.r3.s64 = ctx.r11.s64 + -5752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F094"))) PPC_WEAK_FUNC(sub_83B8F094);
PPC_FUNC_IMPL(__imp__sub_83B8F094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F098"))) PPC_WEAK_FUNC(sub_83B8F098);
PPC_FUNC_IMPL(__imp__sub_83B8F098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5744
	ctx.r3.s64 = ctx.r11.s64 + -5744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F0A4"))) PPC_WEAK_FUNC(sub_83B8F0A4);
PPC_FUNC_IMPL(__imp__sub_83B8F0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F0A8"))) PPC_WEAK_FUNC(sub_83B8F0A8);
PPC_FUNC_IMPL(__imp__sub_83B8F0A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5736
	ctx.r3.s64 = ctx.r11.s64 + -5736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F0B4"))) PPC_WEAK_FUNC(sub_83B8F0B4);
PPC_FUNC_IMPL(__imp__sub_83B8F0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F0B8"))) PPC_WEAK_FUNC(sub_83B8F0B8);
PPC_FUNC_IMPL(__imp__sub_83B8F0B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5728
	ctx.r3.s64 = ctx.r11.s64 + -5728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F0C4"))) PPC_WEAK_FUNC(sub_83B8F0C4);
PPC_FUNC_IMPL(__imp__sub_83B8F0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F0C8"))) PPC_WEAK_FUNC(sub_83B8F0C8);
PPC_FUNC_IMPL(__imp__sub_83B8F0C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5720
	ctx.r3.s64 = ctx.r11.s64 + -5720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F0D4"))) PPC_WEAK_FUNC(sub_83B8F0D4);
PPC_FUNC_IMPL(__imp__sub_83B8F0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F0D8"))) PPC_WEAK_FUNC(sub_83B8F0D8);
PPC_FUNC_IMPL(__imp__sub_83B8F0D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5712
	ctx.r3.s64 = ctx.r11.s64 + -5712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F0E4"))) PPC_WEAK_FUNC(sub_83B8F0E4);
PPC_FUNC_IMPL(__imp__sub_83B8F0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F0E8"))) PPC_WEAK_FUNC(sub_83B8F0E8);
PPC_FUNC_IMPL(__imp__sub_83B8F0E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5704
	ctx.r3.s64 = ctx.r11.s64 + -5704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F0F4"))) PPC_WEAK_FUNC(sub_83B8F0F4);
PPC_FUNC_IMPL(__imp__sub_83B8F0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F0F8"))) PPC_WEAK_FUNC(sub_83B8F0F8);
PPC_FUNC_IMPL(__imp__sub_83B8F0F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5696
	ctx.r3.s64 = ctx.r11.s64 + -5696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F104"))) PPC_WEAK_FUNC(sub_83B8F104);
PPC_FUNC_IMPL(__imp__sub_83B8F104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F108"))) PPC_WEAK_FUNC(sub_83B8F108);
PPC_FUNC_IMPL(__imp__sub_83B8F108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5688
	ctx.r3.s64 = ctx.r11.s64 + -5688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F114"))) PPC_WEAK_FUNC(sub_83B8F114);
PPC_FUNC_IMPL(__imp__sub_83B8F114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F118"))) PPC_WEAK_FUNC(sub_83B8F118);
PPC_FUNC_IMPL(__imp__sub_83B8F118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5680
	ctx.r3.s64 = ctx.r11.s64 + -5680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F124"))) PPC_WEAK_FUNC(sub_83B8F124);
PPC_FUNC_IMPL(__imp__sub_83B8F124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F128"))) PPC_WEAK_FUNC(sub_83B8F128);
PPC_FUNC_IMPL(__imp__sub_83B8F128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5672
	ctx.r3.s64 = ctx.r11.s64 + -5672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F134"))) PPC_WEAK_FUNC(sub_83B8F134);
PPC_FUNC_IMPL(__imp__sub_83B8F134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F138"))) PPC_WEAK_FUNC(sub_83B8F138);
PPC_FUNC_IMPL(__imp__sub_83B8F138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5664
	ctx.r3.s64 = ctx.r11.s64 + -5664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F144"))) PPC_WEAK_FUNC(sub_83B8F144);
PPC_FUNC_IMPL(__imp__sub_83B8F144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F148"))) PPC_WEAK_FUNC(sub_83B8F148);
PPC_FUNC_IMPL(__imp__sub_83B8F148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5656
	ctx.r3.s64 = ctx.r11.s64 + -5656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F154"))) PPC_WEAK_FUNC(sub_83B8F154);
PPC_FUNC_IMPL(__imp__sub_83B8F154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F158"))) PPC_WEAK_FUNC(sub_83B8F158);
PPC_FUNC_IMPL(__imp__sub_83B8F158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5648
	ctx.r3.s64 = ctx.r11.s64 + -5648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F164"))) PPC_WEAK_FUNC(sub_83B8F164);
PPC_FUNC_IMPL(__imp__sub_83B8F164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F168"))) PPC_WEAK_FUNC(sub_83B8F168);
PPC_FUNC_IMPL(__imp__sub_83B8F168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5640
	ctx.r3.s64 = ctx.r11.s64 + -5640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F174"))) PPC_WEAK_FUNC(sub_83B8F174);
PPC_FUNC_IMPL(__imp__sub_83B8F174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F178"))) PPC_WEAK_FUNC(sub_83B8F178);
PPC_FUNC_IMPL(__imp__sub_83B8F178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5632
	ctx.r3.s64 = ctx.r11.s64 + -5632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F184"))) PPC_WEAK_FUNC(sub_83B8F184);
PPC_FUNC_IMPL(__imp__sub_83B8F184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F188"))) PPC_WEAK_FUNC(sub_83B8F188);
PPC_FUNC_IMPL(__imp__sub_83B8F188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5624
	ctx.r3.s64 = ctx.r11.s64 + -5624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F194"))) PPC_WEAK_FUNC(sub_83B8F194);
PPC_FUNC_IMPL(__imp__sub_83B8F194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F198"))) PPC_WEAK_FUNC(sub_83B8F198);
PPC_FUNC_IMPL(__imp__sub_83B8F198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5616
	ctx.r3.s64 = ctx.r11.s64 + -5616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F1A4"))) PPC_WEAK_FUNC(sub_83B8F1A4);
PPC_FUNC_IMPL(__imp__sub_83B8F1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F1A8"))) PPC_WEAK_FUNC(sub_83B8F1A8);
PPC_FUNC_IMPL(__imp__sub_83B8F1A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5608
	ctx.r3.s64 = ctx.r11.s64 + -5608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F1B4"))) PPC_WEAK_FUNC(sub_83B8F1B4);
PPC_FUNC_IMPL(__imp__sub_83B8F1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F1B8"))) PPC_WEAK_FUNC(sub_83B8F1B8);
PPC_FUNC_IMPL(__imp__sub_83B8F1B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5600
	ctx.r3.s64 = ctx.r11.s64 + -5600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F1C4"))) PPC_WEAK_FUNC(sub_83B8F1C4);
PPC_FUNC_IMPL(__imp__sub_83B8F1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F1C8"))) PPC_WEAK_FUNC(sub_83B8F1C8);
PPC_FUNC_IMPL(__imp__sub_83B8F1C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5592
	ctx.r3.s64 = ctx.r11.s64 + -5592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F1D4"))) PPC_WEAK_FUNC(sub_83B8F1D4);
PPC_FUNC_IMPL(__imp__sub_83B8F1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F1D8"))) PPC_WEAK_FUNC(sub_83B8F1D8);
PPC_FUNC_IMPL(__imp__sub_83B8F1D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5584
	ctx.r3.s64 = ctx.r11.s64 + -5584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F1E4"))) PPC_WEAK_FUNC(sub_83B8F1E4);
PPC_FUNC_IMPL(__imp__sub_83B8F1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F1E8"))) PPC_WEAK_FUNC(sub_83B8F1E8);
PPC_FUNC_IMPL(__imp__sub_83B8F1E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5576
	ctx.r3.s64 = ctx.r11.s64 + -5576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F1F4"))) PPC_WEAK_FUNC(sub_83B8F1F4);
PPC_FUNC_IMPL(__imp__sub_83B8F1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F1F8"))) PPC_WEAK_FUNC(sub_83B8F1F8);
PPC_FUNC_IMPL(__imp__sub_83B8F1F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5568
	ctx.r3.s64 = ctx.r11.s64 + -5568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F204"))) PPC_WEAK_FUNC(sub_83B8F204);
PPC_FUNC_IMPL(__imp__sub_83B8F204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F208"))) PPC_WEAK_FUNC(sub_83B8F208);
PPC_FUNC_IMPL(__imp__sub_83B8F208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5560
	ctx.r3.s64 = ctx.r11.s64 + -5560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F214"))) PPC_WEAK_FUNC(sub_83B8F214);
PPC_FUNC_IMPL(__imp__sub_83B8F214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F218"))) PPC_WEAK_FUNC(sub_83B8F218);
PPC_FUNC_IMPL(__imp__sub_83B8F218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5552
	ctx.r3.s64 = ctx.r11.s64 + -5552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F224"))) PPC_WEAK_FUNC(sub_83B8F224);
PPC_FUNC_IMPL(__imp__sub_83B8F224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F228"))) PPC_WEAK_FUNC(sub_83B8F228);
PPC_FUNC_IMPL(__imp__sub_83B8F228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5544
	ctx.r3.s64 = ctx.r11.s64 + -5544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F234"))) PPC_WEAK_FUNC(sub_83B8F234);
PPC_FUNC_IMPL(__imp__sub_83B8F234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F238"))) PPC_WEAK_FUNC(sub_83B8F238);
PPC_FUNC_IMPL(__imp__sub_83B8F238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5536
	ctx.r3.s64 = ctx.r11.s64 + -5536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F244"))) PPC_WEAK_FUNC(sub_83B8F244);
PPC_FUNC_IMPL(__imp__sub_83B8F244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F248"))) PPC_WEAK_FUNC(sub_83B8F248);
PPC_FUNC_IMPL(__imp__sub_83B8F248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5528
	ctx.r3.s64 = ctx.r11.s64 + -5528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F254"))) PPC_WEAK_FUNC(sub_83B8F254);
PPC_FUNC_IMPL(__imp__sub_83B8F254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F258"))) PPC_WEAK_FUNC(sub_83B8F258);
PPC_FUNC_IMPL(__imp__sub_83B8F258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5520
	ctx.r3.s64 = ctx.r11.s64 + -5520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F264"))) PPC_WEAK_FUNC(sub_83B8F264);
PPC_FUNC_IMPL(__imp__sub_83B8F264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F268"))) PPC_WEAK_FUNC(sub_83B8F268);
PPC_FUNC_IMPL(__imp__sub_83B8F268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5512
	ctx.r3.s64 = ctx.r11.s64 + -5512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F274"))) PPC_WEAK_FUNC(sub_83B8F274);
PPC_FUNC_IMPL(__imp__sub_83B8F274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F278"))) PPC_WEAK_FUNC(sub_83B8F278);
PPC_FUNC_IMPL(__imp__sub_83B8F278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5504
	ctx.r3.s64 = ctx.r11.s64 + -5504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F284"))) PPC_WEAK_FUNC(sub_83B8F284);
PPC_FUNC_IMPL(__imp__sub_83B8F284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F288"))) PPC_WEAK_FUNC(sub_83B8F288);
PPC_FUNC_IMPL(__imp__sub_83B8F288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5496
	ctx.r3.s64 = ctx.r11.s64 + -5496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F294"))) PPC_WEAK_FUNC(sub_83B8F294);
PPC_FUNC_IMPL(__imp__sub_83B8F294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F298"))) PPC_WEAK_FUNC(sub_83B8F298);
PPC_FUNC_IMPL(__imp__sub_83B8F298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5488
	ctx.r3.s64 = ctx.r11.s64 + -5488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F2A4"))) PPC_WEAK_FUNC(sub_83B8F2A4);
PPC_FUNC_IMPL(__imp__sub_83B8F2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F2A8"))) PPC_WEAK_FUNC(sub_83B8F2A8);
PPC_FUNC_IMPL(__imp__sub_83B8F2A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5480
	ctx.r3.s64 = ctx.r11.s64 + -5480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F2B4"))) PPC_WEAK_FUNC(sub_83B8F2B4);
PPC_FUNC_IMPL(__imp__sub_83B8F2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F2B8"))) PPC_WEAK_FUNC(sub_83B8F2B8);
PPC_FUNC_IMPL(__imp__sub_83B8F2B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5472
	ctx.r3.s64 = ctx.r11.s64 + -5472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F2C4"))) PPC_WEAK_FUNC(sub_83B8F2C4);
PPC_FUNC_IMPL(__imp__sub_83B8F2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F2C8"))) PPC_WEAK_FUNC(sub_83B8F2C8);
PPC_FUNC_IMPL(__imp__sub_83B8F2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5464
	ctx.r3.s64 = ctx.r11.s64 + -5464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F2D4"))) PPC_WEAK_FUNC(sub_83B8F2D4);
PPC_FUNC_IMPL(__imp__sub_83B8F2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F2D8"))) PPC_WEAK_FUNC(sub_83B8F2D8);
PPC_FUNC_IMPL(__imp__sub_83B8F2D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5456
	ctx.r3.s64 = ctx.r11.s64 + -5456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F2E4"))) PPC_WEAK_FUNC(sub_83B8F2E4);
PPC_FUNC_IMPL(__imp__sub_83B8F2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F2E8"))) PPC_WEAK_FUNC(sub_83B8F2E8);
PPC_FUNC_IMPL(__imp__sub_83B8F2E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5448
	ctx.r3.s64 = ctx.r11.s64 + -5448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F2F4"))) PPC_WEAK_FUNC(sub_83B8F2F4);
PPC_FUNC_IMPL(__imp__sub_83B8F2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F2F8"))) PPC_WEAK_FUNC(sub_83B8F2F8);
PPC_FUNC_IMPL(__imp__sub_83B8F2F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5440
	ctx.r3.s64 = ctx.r11.s64 + -5440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F304"))) PPC_WEAK_FUNC(sub_83B8F304);
PPC_FUNC_IMPL(__imp__sub_83B8F304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F308"))) PPC_WEAK_FUNC(sub_83B8F308);
PPC_FUNC_IMPL(__imp__sub_83B8F308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5432
	ctx.r3.s64 = ctx.r11.s64 + -5432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F314"))) PPC_WEAK_FUNC(sub_83B8F314);
PPC_FUNC_IMPL(__imp__sub_83B8F314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F318"))) PPC_WEAK_FUNC(sub_83B8F318);
PPC_FUNC_IMPL(__imp__sub_83B8F318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5424
	ctx.r3.s64 = ctx.r11.s64 + -5424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F324"))) PPC_WEAK_FUNC(sub_83B8F324);
PPC_FUNC_IMPL(__imp__sub_83B8F324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F328"))) PPC_WEAK_FUNC(sub_83B8F328);
PPC_FUNC_IMPL(__imp__sub_83B8F328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5416
	ctx.r3.s64 = ctx.r11.s64 + -5416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F334"))) PPC_WEAK_FUNC(sub_83B8F334);
PPC_FUNC_IMPL(__imp__sub_83B8F334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F338"))) PPC_WEAK_FUNC(sub_83B8F338);
PPC_FUNC_IMPL(__imp__sub_83B8F338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5408
	ctx.r3.s64 = ctx.r11.s64 + -5408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F344"))) PPC_WEAK_FUNC(sub_83B8F344);
PPC_FUNC_IMPL(__imp__sub_83B8F344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F348"))) PPC_WEAK_FUNC(sub_83B8F348);
PPC_FUNC_IMPL(__imp__sub_83B8F348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5400
	ctx.r3.s64 = ctx.r11.s64 + -5400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B8F354"))) PPC_WEAK_FUNC(sub_83B8F354);
PPC_FUNC_IMPL(__imp__sub_83B8F354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B8F358"))) PPC_WEAK_FUNC(sub_83B8F358);
PPC_FUNC_IMPL(__imp__sub_83B8F358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-5392
	ctx.r3.s64 = ctx.r11.s64 + -5392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

