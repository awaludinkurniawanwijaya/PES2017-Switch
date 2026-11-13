#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83B989D4"))) PPC_WEAK_FUNC(sub_83B989D4);
PPC_FUNC_IMPL(__imp__sub_83B989D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B989D8"))) PPC_WEAK_FUNC(sub_83B989D8);
PPC_FUNC_IMPL(__imp__sub_83B989D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9408
	ctx.r3.s64 = ctx.r11.s64 + 9408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B989E4"))) PPC_WEAK_FUNC(sub_83B989E4);
PPC_FUNC_IMPL(__imp__sub_83B989E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B989E8"))) PPC_WEAK_FUNC(sub_83B989E8);
PPC_FUNC_IMPL(__imp__sub_83B989E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9416
	ctx.r3.s64 = ctx.r11.s64 + 9416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B989F4"))) PPC_WEAK_FUNC(sub_83B989F4);
PPC_FUNC_IMPL(__imp__sub_83B989F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B989F8"))) PPC_WEAK_FUNC(sub_83B989F8);
PPC_FUNC_IMPL(__imp__sub_83B989F8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-4760
	ctx.r7.s64 = ctx.r8.s64 + -4760;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-4760(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4760);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-4760(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4760, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B98A20"))) PPC_WEAK_FUNC(sub_83B98A20);
PPC_FUNC_IMPL(__imp__sub_83B98A20) {
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
	// addi r3,r11,-4764
	ctx.r3.s64 = ctx.r11.s64 + -4764;
	// bl 0x83523120
	ctx.lr = 0x83B98A38;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,9424
	ctx.r3.s64 = ctx.r10.s64 + 9424;
	// bl 0x831cdcc8
	ctx.lr = 0x83B98A44;
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

__attribute__((alias("__imp__sub_83B98A54"))) PPC_WEAK_FUNC(sub_83B98A54);
PPC_FUNC_IMPL(__imp__sub_83B98A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98A58"))) PPC_WEAK_FUNC(sub_83B98A58);
PPC_FUNC_IMPL(__imp__sub_83B98A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9440
	ctx.r3.s64 = ctx.r11.s64 + 9440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98A64"))) PPC_WEAK_FUNC(sub_83B98A64);
PPC_FUNC_IMPL(__imp__sub_83B98A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98A68"))) PPC_WEAK_FUNC(sub_83B98A68);
PPC_FUNC_IMPL(__imp__sub_83B98A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9448
	ctx.r3.s64 = ctx.r11.s64 + 9448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98A74"))) PPC_WEAK_FUNC(sub_83B98A74);
PPC_FUNC_IMPL(__imp__sub_83B98A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98A78"))) PPC_WEAK_FUNC(sub_83B98A78);
PPC_FUNC_IMPL(__imp__sub_83B98A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9456
	ctx.r3.s64 = ctx.r11.s64 + 9456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98A84"))) PPC_WEAK_FUNC(sub_83B98A84);
PPC_FUNC_IMPL(__imp__sub_83B98A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98A88"))) PPC_WEAK_FUNC(sub_83B98A88);
PPC_FUNC_IMPL(__imp__sub_83B98A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9464
	ctx.r3.s64 = ctx.r11.s64 + 9464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98A94"))) PPC_WEAK_FUNC(sub_83B98A94);
PPC_FUNC_IMPL(__imp__sub_83B98A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98A98"))) PPC_WEAK_FUNC(sub_83B98A98);
PPC_FUNC_IMPL(__imp__sub_83B98A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9472
	ctx.r3.s64 = ctx.r11.s64 + 9472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98AA4"))) PPC_WEAK_FUNC(sub_83B98AA4);
PPC_FUNC_IMPL(__imp__sub_83B98AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98AA8"))) PPC_WEAK_FUNC(sub_83B98AA8);
PPC_FUNC_IMPL(__imp__sub_83B98AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9480
	ctx.r3.s64 = ctx.r11.s64 + 9480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98AB4"))) PPC_WEAK_FUNC(sub_83B98AB4);
PPC_FUNC_IMPL(__imp__sub_83B98AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98AB8"))) PPC_WEAK_FUNC(sub_83B98AB8);
PPC_FUNC_IMPL(__imp__sub_83B98AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9488
	ctx.r3.s64 = ctx.r11.s64 + 9488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98AC4"))) PPC_WEAK_FUNC(sub_83B98AC4);
PPC_FUNC_IMPL(__imp__sub_83B98AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98AC8"))) PPC_WEAK_FUNC(sub_83B98AC8);
PPC_FUNC_IMPL(__imp__sub_83B98AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9496
	ctx.r3.s64 = ctx.r11.s64 + 9496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98AD4"))) PPC_WEAK_FUNC(sub_83B98AD4);
PPC_FUNC_IMPL(__imp__sub_83B98AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98AD8"))) PPC_WEAK_FUNC(sub_83B98AD8);
PPC_FUNC_IMPL(__imp__sub_83B98AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9504
	ctx.r3.s64 = ctx.r11.s64 + 9504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98AE4"))) PPC_WEAK_FUNC(sub_83B98AE4);
PPC_FUNC_IMPL(__imp__sub_83B98AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98AE8"))) PPC_WEAK_FUNC(sub_83B98AE8);
PPC_FUNC_IMPL(__imp__sub_83B98AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9512
	ctx.r3.s64 = ctx.r11.s64 + 9512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98AF4"))) PPC_WEAK_FUNC(sub_83B98AF4);
PPC_FUNC_IMPL(__imp__sub_83B98AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98AF8"))) PPC_WEAK_FUNC(sub_83B98AF8);
PPC_FUNC_IMPL(__imp__sub_83B98AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9520
	ctx.r3.s64 = ctx.r11.s64 + 9520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98B04"))) PPC_WEAK_FUNC(sub_83B98B04);
PPC_FUNC_IMPL(__imp__sub_83B98B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98B08"))) PPC_WEAK_FUNC(sub_83B98B08);
PPC_FUNC_IMPL(__imp__sub_83B98B08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9528
	ctx.r3.s64 = ctx.r11.s64 + 9528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98B14"))) PPC_WEAK_FUNC(sub_83B98B14);
PPC_FUNC_IMPL(__imp__sub_83B98B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98B18"))) PPC_WEAK_FUNC(sub_83B98B18);
PPC_FUNC_IMPL(__imp__sub_83B98B18) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-4748
	ctx.r7.s64 = ctx.r8.s64 + -4748;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-4748(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4748);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-4748(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4748, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B98B40"))) PPC_WEAK_FUNC(sub_83B98B40);
PPC_FUNC_IMPL(__imp__sub_83B98B40) {
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
	// addi r3,r11,-4752
	ctx.r3.s64 = ctx.r11.s64 + -4752;
	// bl 0x83523120
	ctx.lr = 0x83B98B58;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,9536
	ctx.r3.s64 = ctx.r10.s64 + 9536;
	// bl 0x831cdcc8
	ctx.lr = 0x83B98B64;
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

__attribute__((alias("__imp__sub_83B98B74"))) PPC_WEAK_FUNC(sub_83B98B74);
PPC_FUNC_IMPL(__imp__sub_83B98B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98B78"))) PPC_WEAK_FUNC(sub_83B98B78);
PPC_FUNC_IMPL(__imp__sub_83B98B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9552
	ctx.r3.s64 = ctx.r11.s64 + 9552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98B84"))) PPC_WEAK_FUNC(sub_83B98B84);
PPC_FUNC_IMPL(__imp__sub_83B98B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98B88"))) PPC_WEAK_FUNC(sub_83B98B88);
PPC_FUNC_IMPL(__imp__sub_83B98B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9560
	ctx.r3.s64 = ctx.r11.s64 + 9560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98B94"))) PPC_WEAK_FUNC(sub_83B98B94);
PPC_FUNC_IMPL(__imp__sub_83B98B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98B98"))) PPC_WEAK_FUNC(sub_83B98B98);
PPC_FUNC_IMPL(__imp__sub_83B98B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9568
	ctx.r3.s64 = ctx.r11.s64 + 9568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98BA4"))) PPC_WEAK_FUNC(sub_83B98BA4);
PPC_FUNC_IMPL(__imp__sub_83B98BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98BA8"))) PPC_WEAK_FUNC(sub_83B98BA8);
PPC_FUNC_IMPL(__imp__sub_83B98BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9576
	ctx.r3.s64 = ctx.r11.s64 + 9576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98BB4"))) PPC_WEAK_FUNC(sub_83B98BB4);
PPC_FUNC_IMPL(__imp__sub_83B98BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98BB8"))) PPC_WEAK_FUNC(sub_83B98BB8);
PPC_FUNC_IMPL(__imp__sub_83B98BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9584
	ctx.r3.s64 = ctx.r11.s64 + 9584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98BC4"))) PPC_WEAK_FUNC(sub_83B98BC4);
PPC_FUNC_IMPL(__imp__sub_83B98BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98BC8"))) PPC_WEAK_FUNC(sub_83B98BC8);
PPC_FUNC_IMPL(__imp__sub_83B98BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9592
	ctx.r3.s64 = ctx.r11.s64 + 9592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98BD4"))) PPC_WEAK_FUNC(sub_83B98BD4);
PPC_FUNC_IMPL(__imp__sub_83B98BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98BD8"))) PPC_WEAK_FUNC(sub_83B98BD8);
PPC_FUNC_IMPL(__imp__sub_83B98BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9600
	ctx.r3.s64 = ctx.r11.s64 + 9600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98BE4"))) PPC_WEAK_FUNC(sub_83B98BE4);
PPC_FUNC_IMPL(__imp__sub_83B98BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98BE8"))) PPC_WEAK_FUNC(sub_83B98BE8);
PPC_FUNC_IMPL(__imp__sub_83B98BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9608
	ctx.r3.s64 = ctx.r11.s64 + 9608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98BF4"))) PPC_WEAK_FUNC(sub_83B98BF4);
PPC_FUNC_IMPL(__imp__sub_83B98BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98BF8"))) PPC_WEAK_FUNC(sub_83B98BF8);
PPC_FUNC_IMPL(__imp__sub_83B98BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9616
	ctx.r3.s64 = ctx.r11.s64 + 9616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98C04"))) PPC_WEAK_FUNC(sub_83B98C04);
PPC_FUNC_IMPL(__imp__sub_83B98C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98C08"))) PPC_WEAK_FUNC(sub_83B98C08);
PPC_FUNC_IMPL(__imp__sub_83B98C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9624
	ctx.r3.s64 = ctx.r11.s64 + 9624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98C14"))) PPC_WEAK_FUNC(sub_83B98C14);
PPC_FUNC_IMPL(__imp__sub_83B98C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98C18"))) PPC_WEAK_FUNC(sub_83B98C18);
PPC_FUNC_IMPL(__imp__sub_83B98C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9632
	ctx.r3.s64 = ctx.r11.s64 + 9632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98C24"))) PPC_WEAK_FUNC(sub_83B98C24);
PPC_FUNC_IMPL(__imp__sub_83B98C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98C28"))) PPC_WEAK_FUNC(sub_83B98C28);
PPC_FUNC_IMPL(__imp__sub_83B98C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9640
	ctx.r3.s64 = ctx.r11.s64 + 9640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98C34"))) PPC_WEAK_FUNC(sub_83B98C34);
PPC_FUNC_IMPL(__imp__sub_83B98C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98C38"))) PPC_WEAK_FUNC(sub_83B98C38);
PPC_FUNC_IMPL(__imp__sub_83B98C38) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-4736
	ctx.r7.s64 = ctx.r8.s64 + -4736;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-4736(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4736);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-4736(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4736, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B98C60"))) PPC_WEAK_FUNC(sub_83B98C60);
PPC_FUNC_IMPL(__imp__sub_83B98C60) {
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
	// addi r3,r11,-4740
	ctx.r3.s64 = ctx.r11.s64 + -4740;
	// bl 0x83523120
	ctx.lr = 0x83B98C78;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,9648
	ctx.r3.s64 = ctx.r10.s64 + 9648;
	// bl 0x831cdcc8
	ctx.lr = 0x83B98C84;
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

__attribute__((alias("__imp__sub_83B98C94"))) PPC_WEAK_FUNC(sub_83B98C94);
PPC_FUNC_IMPL(__imp__sub_83B98C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98C98"))) PPC_WEAK_FUNC(sub_83B98C98);
PPC_FUNC_IMPL(__imp__sub_83B98C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9664
	ctx.r3.s64 = ctx.r11.s64 + 9664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98CA4"))) PPC_WEAK_FUNC(sub_83B98CA4);
PPC_FUNC_IMPL(__imp__sub_83B98CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98CA8"))) PPC_WEAK_FUNC(sub_83B98CA8);
PPC_FUNC_IMPL(__imp__sub_83B98CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9672
	ctx.r3.s64 = ctx.r11.s64 + 9672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98CB4"))) PPC_WEAK_FUNC(sub_83B98CB4);
PPC_FUNC_IMPL(__imp__sub_83B98CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98CB8"))) PPC_WEAK_FUNC(sub_83B98CB8);
PPC_FUNC_IMPL(__imp__sub_83B98CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9680
	ctx.r3.s64 = ctx.r11.s64 + 9680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98CC4"))) PPC_WEAK_FUNC(sub_83B98CC4);
PPC_FUNC_IMPL(__imp__sub_83B98CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98CC8"))) PPC_WEAK_FUNC(sub_83B98CC8);
PPC_FUNC_IMPL(__imp__sub_83B98CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9688
	ctx.r3.s64 = ctx.r11.s64 + 9688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98CD4"))) PPC_WEAK_FUNC(sub_83B98CD4);
PPC_FUNC_IMPL(__imp__sub_83B98CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98CD8"))) PPC_WEAK_FUNC(sub_83B98CD8);
PPC_FUNC_IMPL(__imp__sub_83B98CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9696
	ctx.r3.s64 = ctx.r11.s64 + 9696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98CE4"))) PPC_WEAK_FUNC(sub_83B98CE4);
PPC_FUNC_IMPL(__imp__sub_83B98CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98CE8"))) PPC_WEAK_FUNC(sub_83B98CE8);
PPC_FUNC_IMPL(__imp__sub_83B98CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9704
	ctx.r3.s64 = ctx.r11.s64 + 9704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98CF4"))) PPC_WEAK_FUNC(sub_83B98CF4);
PPC_FUNC_IMPL(__imp__sub_83B98CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98CF8"))) PPC_WEAK_FUNC(sub_83B98CF8);
PPC_FUNC_IMPL(__imp__sub_83B98CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9712
	ctx.r3.s64 = ctx.r11.s64 + 9712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98D04"))) PPC_WEAK_FUNC(sub_83B98D04);
PPC_FUNC_IMPL(__imp__sub_83B98D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98D08"))) PPC_WEAK_FUNC(sub_83B98D08);
PPC_FUNC_IMPL(__imp__sub_83B98D08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9720
	ctx.r3.s64 = ctx.r11.s64 + 9720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98D14"))) PPC_WEAK_FUNC(sub_83B98D14);
PPC_FUNC_IMPL(__imp__sub_83B98D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98D18"))) PPC_WEAK_FUNC(sub_83B98D18);
PPC_FUNC_IMPL(__imp__sub_83B98D18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9728
	ctx.r3.s64 = ctx.r11.s64 + 9728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98D24"))) PPC_WEAK_FUNC(sub_83B98D24);
PPC_FUNC_IMPL(__imp__sub_83B98D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98D28"))) PPC_WEAK_FUNC(sub_83B98D28);
PPC_FUNC_IMPL(__imp__sub_83B98D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9736
	ctx.r3.s64 = ctx.r11.s64 + 9736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98D34"))) PPC_WEAK_FUNC(sub_83B98D34);
PPC_FUNC_IMPL(__imp__sub_83B98D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98D38"))) PPC_WEAK_FUNC(sub_83B98D38);
PPC_FUNC_IMPL(__imp__sub_83B98D38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9744
	ctx.r3.s64 = ctx.r11.s64 + 9744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98D44"))) PPC_WEAK_FUNC(sub_83B98D44);
PPC_FUNC_IMPL(__imp__sub_83B98D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98D48"))) PPC_WEAK_FUNC(sub_83B98D48);
PPC_FUNC_IMPL(__imp__sub_83B98D48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9752
	ctx.r3.s64 = ctx.r11.s64 + 9752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98D54"))) PPC_WEAK_FUNC(sub_83B98D54);
PPC_FUNC_IMPL(__imp__sub_83B98D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98D58"))) PPC_WEAK_FUNC(sub_83B98D58);
PPC_FUNC_IMPL(__imp__sub_83B98D58) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-4724
	ctx.r7.s64 = ctx.r8.s64 + -4724;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-4724(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4724);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-4724(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4724, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B98D80"))) PPC_WEAK_FUNC(sub_83B98D80);
PPC_FUNC_IMPL(__imp__sub_83B98D80) {
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
	// addi r3,r11,-4728
	ctx.r3.s64 = ctx.r11.s64 + -4728;
	// bl 0x83523120
	ctx.lr = 0x83B98D98;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,9760
	ctx.r3.s64 = ctx.r10.s64 + 9760;
	// bl 0x831cdcc8
	ctx.lr = 0x83B98DA4;
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

__attribute__((alias("__imp__sub_83B98DB4"))) PPC_WEAK_FUNC(sub_83B98DB4);
PPC_FUNC_IMPL(__imp__sub_83B98DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98DB8"))) PPC_WEAK_FUNC(sub_83B98DB8);
PPC_FUNC_IMPL(__imp__sub_83B98DB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r11,4624
	ctx.r4.s64 = ctx.r11.s64 + 4624;
	// lis r7,-31763
	ctx.r7.s64 = -2081619968;
	// lfs f3,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r4,-16
	ctx.r5.s64 = ctx.r4.s64 + -16;
	// lfs f2,-3400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3400);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r7,-4716
	ctx.r3.s64 = ctx.r7.s64 + -4716;
	// lfs f1,-24912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8258b928
	sub_8258B928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98DE8"))) PPC_WEAK_FUNC(sub_83B98DE8);
PPC_FUNC_IMPL(__imp__sub_83B98DE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-4704
	ctx.r11.s64 = ctx.r11.s64 + -4704;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r9,255
	ctx.r9.s64 = 255;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lfs f0,9008(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stb r8,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B98E28"))) PPC_WEAK_FUNC(sub_83B98E28);
PPC_FUNC_IMPL(__imp__sub_83B98E28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9776
	ctx.r3.s64 = ctx.r11.s64 + 9776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98E34"))) PPC_WEAK_FUNC(sub_83B98E34);
PPC_FUNC_IMPL(__imp__sub_83B98E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98E38"))) PPC_WEAK_FUNC(sub_83B98E38);
PPC_FUNC_IMPL(__imp__sub_83B98E38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9784
	ctx.r3.s64 = ctx.r11.s64 + 9784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98E44"))) PPC_WEAK_FUNC(sub_83B98E44);
PPC_FUNC_IMPL(__imp__sub_83B98E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98E48"))) PPC_WEAK_FUNC(sub_83B98E48);
PPC_FUNC_IMPL(__imp__sub_83B98E48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9792
	ctx.r3.s64 = ctx.r11.s64 + 9792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98E54"))) PPC_WEAK_FUNC(sub_83B98E54);
PPC_FUNC_IMPL(__imp__sub_83B98E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98E58"))) PPC_WEAK_FUNC(sub_83B98E58);
PPC_FUNC_IMPL(__imp__sub_83B98E58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9800
	ctx.r3.s64 = ctx.r11.s64 + 9800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98E64"))) PPC_WEAK_FUNC(sub_83B98E64);
PPC_FUNC_IMPL(__imp__sub_83B98E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98E68"))) PPC_WEAK_FUNC(sub_83B98E68);
PPC_FUNC_IMPL(__imp__sub_83B98E68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9808
	ctx.r3.s64 = ctx.r11.s64 + 9808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98E74"))) PPC_WEAK_FUNC(sub_83B98E74);
PPC_FUNC_IMPL(__imp__sub_83B98E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98E78"))) PPC_WEAK_FUNC(sub_83B98E78);
PPC_FUNC_IMPL(__imp__sub_83B98E78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9816
	ctx.r3.s64 = ctx.r11.s64 + 9816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98E84"))) PPC_WEAK_FUNC(sub_83B98E84);
PPC_FUNC_IMPL(__imp__sub_83B98E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98E88"))) PPC_WEAK_FUNC(sub_83B98E88);
PPC_FUNC_IMPL(__imp__sub_83B98E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9824
	ctx.r3.s64 = ctx.r11.s64 + 9824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98E94"))) PPC_WEAK_FUNC(sub_83B98E94);
PPC_FUNC_IMPL(__imp__sub_83B98E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98E98"))) PPC_WEAK_FUNC(sub_83B98E98);
PPC_FUNC_IMPL(__imp__sub_83B98E98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9832
	ctx.r3.s64 = ctx.r11.s64 + 9832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98EA4"))) PPC_WEAK_FUNC(sub_83B98EA4);
PPC_FUNC_IMPL(__imp__sub_83B98EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98EA8"))) PPC_WEAK_FUNC(sub_83B98EA8);
PPC_FUNC_IMPL(__imp__sub_83B98EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9840
	ctx.r3.s64 = ctx.r11.s64 + 9840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98EB4"))) PPC_WEAK_FUNC(sub_83B98EB4);
PPC_FUNC_IMPL(__imp__sub_83B98EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98EB8"))) PPC_WEAK_FUNC(sub_83B98EB8);
PPC_FUNC_IMPL(__imp__sub_83B98EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9848
	ctx.r3.s64 = ctx.r11.s64 + 9848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98EC4"))) PPC_WEAK_FUNC(sub_83B98EC4);
PPC_FUNC_IMPL(__imp__sub_83B98EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98EC8"))) PPC_WEAK_FUNC(sub_83B98EC8);
PPC_FUNC_IMPL(__imp__sub_83B98EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9856
	ctx.r3.s64 = ctx.r11.s64 + 9856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98ED4"))) PPC_WEAK_FUNC(sub_83B98ED4);
PPC_FUNC_IMPL(__imp__sub_83B98ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98ED8"))) PPC_WEAK_FUNC(sub_83B98ED8);
PPC_FUNC_IMPL(__imp__sub_83B98ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9864
	ctx.r3.s64 = ctx.r11.s64 + 9864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98EE4"))) PPC_WEAK_FUNC(sub_83B98EE4);
PPC_FUNC_IMPL(__imp__sub_83B98EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98EE8"))) PPC_WEAK_FUNC(sub_83B98EE8);
PPC_FUNC_IMPL(__imp__sub_83B98EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-4668
	ctx.r7.s64 = ctx.r8.s64 + -4668;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-4668(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4668);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-4668(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4668, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B98F10"))) PPC_WEAK_FUNC(sub_83B98F10);
PPC_FUNC_IMPL(__imp__sub_83B98F10) {
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
	// addi r3,r11,-4672
	ctx.r3.s64 = ctx.r11.s64 + -4672;
	// bl 0x83523120
	ctx.lr = 0x83B98F28;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,9872
	ctx.r3.s64 = ctx.r10.s64 + 9872;
	// bl 0x831cdcc8
	ctx.lr = 0x83B98F34;
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

__attribute__((alias("__imp__sub_83B98F44"))) PPC_WEAK_FUNC(sub_83B98F44);
PPC_FUNC_IMPL(__imp__sub_83B98F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98F48"))) PPC_WEAK_FUNC(sub_83B98F48);
PPC_FUNC_IMPL(__imp__sub_83B98F48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9888
	ctx.r3.s64 = ctx.r11.s64 + 9888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98F54"))) PPC_WEAK_FUNC(sub_83B98F54);
PPC_FUNC_IMPL(__imp__sub_83B98F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98F58"))) PPC_WEAK_FUNC(sub_83B98F58);
PPC_FUNC_IMPL(__imp__sub_83B98F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9896
	ctx.r3.s64 = ctx.r11.s64 + 9896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98F64"))) PPC_WEAK_FUNC(sub_83B98F64);
PPC_FUNC_IMPL(__imp__sub_83B98F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98F68"))) PPC_WEAK_FUNC(sub_83B98F68);
PPC_FUNC_IMPL(__imp__sub_83B98F68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9904
	ctx.r3.s64 = ctx.r11.s64 + 9904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98F74"))) PPC_WEAK_FUNC(sub_83B98F74);
PPC_FUNC_IMPL(__imp__sub_83B98F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98F78"))) PPC_WEAK_FUNC(sub_83B98F78);
PPC_FUNC_IMPL(__imp__sub_83B98F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9912
	ctx.r3.s64 = ctx.r11.s64 + 9912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98F84"))) PPC_WEAK_FUNC(sub_83B98F84);
PPC_FUNC_IMPL(__imp__sub_83B98F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98F88"))) PPC_WEAK_FUNC(sub_83B98F88);
PPC_FUNC_IMPL(__imp__sub_83B98F88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9920
	ctx.r3.s64 = ctx.r11.s64 + 9920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98F94"))) PPC_WEAK_FUNC(sub_83B98F94);
PPC_FUNC_IMPL(__imp__sub_83B98F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98F98"))) PPC_WEAK_FUNC(sub_83B98F98);
PPC_FUNC_IMPL(__imp__sub_83B98F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9928
	ctx.r3.s64 = ctx.r11.s64 + 9928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98FA4"))) PPC_WEAK_FUNC(sub_83B98FA4);
PPC_FUNC_IMPL(__imp__sub_83B98FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98FA8"))) PPC_WEAK_FUNC(sub_83B98FA8);
PPC_FUNC_IMPL(__imp__sub_83B98FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9936
	ctx.r3.s64 = ctx.r11.s64 + 9936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98FB4"))) PPC_WEAK_FUNC(sub_83B98FB4);
PPC_FUNC_IMPL(__imp__sub_83B98FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98FB8"))) PPC_WEAK_FUNC(sub_83B98FB8);
PPC_FUNC_IMPL(__imp__sub_83B98FB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9944
	ctx.r3.s64 = ctx.r11.s64 + 9944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98FC4"))) PPC_WEAK_FUNC(sub_83B98FC4);
PPC_FUNC_IMPL(__imp__sub_83B98FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98FC8"))) PPC_WEAK_FUNC(sub_83B98FC8);
PPC_FUNC_IMPL(__imp__sub_83B98FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9952
	ctx.r3.s64 = ctx.r11.s64 + 9952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98FD4"))) PPC_WEAK_FUNC(sub_83B98FD4);
PPC_FUNC_IMPL(__imp__sub_83B98FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98FD8"))) PPC_WEAK_FUNC(sub_83B98FD8);
PPC_FUNC_IMPL(__imp__sub_83B98FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9960
	ctx.r3.s64 = ctx.r11.s64 + 9960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98FE4"))) PPC_WEAK_FUNC(sub_83B98FE4);
PPC_FUNC_IMPL(__imp__sub_83B98FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98FE8"))) PPC_WEAK_FUNC(sub_83B98FE8);
PPC_FUNC_IMPL(__imp__sub_83B98FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9968
	ctx.r3.s64 = ctx.r11.s64 + 9968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B98FF4"))) PPC_WEAK_FUNC(sub_83B98FF4);
PPC_FUNC_IMPL(__imp__sub_83B98FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B98FF8"))) PPC_WEAK_FUNC(sub_83B98FF8);
PPC_FUNC_IMPL(__imp__sub_83B98FF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,9976
	ctx.r3.s64 = ctx.r11.s64 + 9976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B99004"))) PPC_WEAK_FUNC(sub_83B99004);
PPC_FUNC_IMPL(__imp__sub_83B99004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B99008"))) PPC_WEAK_FUNC(sub_83B99008);
PPC_FUNC_IMPL(__imp__sub_83B99008) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-4656
	ctx.r7.s64 = ctx.r8.s64 + -4656;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-4656(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4656);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-4656(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4656, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B99030"))) PPC_WEAK_FUNC(sub_83B99030);
PPC_FUNC_IMPL(__imp__sub_83B99030) {
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
	// addi r3,r11,-4660
	ctx.r3.s64 = ctx.r11.s64 + -4660;
	// bl 0x83523120
	ctx.lr = 0x83B99048;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,9984
	ctx.r3.s64 = ctx.r10.s64 + 9984;
	// bl 0x831cdcc8
	ctx.lr = 0x83B99054;
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

__attribute__((alias("__imp__sub_83B99064"))) PPC_WEAK_FUNC(sub_83B99064);
PPC_FUNC_IMPL(__imp__sub_83B99064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B99068"))) PPC_WEAK_FUNC(sub_83B99068);
PPC_FUNC_IMPL(__imp__sub_83B99068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,10000
	ctx.r3.s64 = ctx.r11.s64 + 10000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B99074"))) PPC_WEAK_FUNC(sub_83B99074);
PPC_FUNC_IMPL(__imp__sub_83B99074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B99078"))) PPC_WEAK_FUNC(sub_83B99078);
PPC_FUNC_IMPL(__imp__sub_83B99078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,10008
	ctx.r3.s64 = ctx.r11.s64 + 10008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B99084"))) PPC_WEAK_FUNC(sub_83B99084);
PPC_FUNC_IMPL(__imp__sub_83B99084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B99088"))) PPC_WEAK_FUNC(sub_83B99088);
PPC_FUNC_IMPL(__imp__sub_83B99088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,10016
	ctx.r3.s64 = ctx.r11.s64 + 10016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B99094"))) PPC_WEAK_FUNC(sub_83B99094);
PPC_FUNC_IMPL(__imp__sub_83B99094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B99098"))) PPC_WEAK_FUNC(sub_83B99098);
PPC_FUNC_IMPL(__imp__sub_83B99098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,10024
	ctx.r3.s64 = ctx.r11.s64 + 10024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B990A4"))) PPC_WEAK_FUNC(sub_83B990A4);
PPC_FUNC_IMPL(__imp__sub_83B990A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B990A8"))) PPC_WEAK_FUNC(sub_83B990A8);
PPC_FUNC_IMPL(__imp__sub_83B990A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,10032
	ctx.r3.s64 = ctx.r11.s64 + 10032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B990B4"))) PPC_WEAK_FUNC(sub_83B990B4);
PPC_FUNC_IMPL(__imp__sub_83B990B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B990B8"))) PPC_WEAK_FUNC(sub_83B990B8);
PPC_FUNC_IMPL(__imp__sub_83B990B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,10040
	ctx.r3.s64 = ctx.r11.s64 + 10040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B990C4"))) PPC_WEAK_FUNC(sub_83B990C4);
PPC_FUNC_IMPL(__imp__sub_83B990C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B990C8"))) PPC_WEAK_FUNC(sub_83B990C8);
PPC_FUNC_IMPL(__imp__sub_83B990C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,10048
	ctx.r3.s64 = ctx.r11.s64 + 10048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B990D4"))) PPC_WEAK_FUNC(sub_83B990D4);
PPC_FUNC_IMPL(__imp__sub_83B990D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B990D8"))) PPC_WEAK_FUNC(sub_83B990D8);
PPC_FUNC_IMPL(__imp__sub_83B990D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,10056
	ctx.r3.s64 = ctx.r11.s64 + 10056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B990E4"))) PPC_WEAK_FUNC(sub_83B990E4);
PPC_FUNC_IMPL(__imp__sub_83B990E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B990E8"))) PPC_WEAK_FUNC(sub_83B990E8);
PPC_FUNC_IMPL(__imp__sub_83B990E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,10064
	ctx.r3.s64 = ctx.r11.s64 + 10064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B990F4"))) PPC_WEAK_FUNC(sub_83B990F4);
PPC_FUNC_IMPL(__imp__sub_83B990F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B990F8"))) PPC_WEAK_FUNC(sub_83B990F8);
PPC_FUNC_IMPL(__imp__sub_83B990F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,10072
	ctx.r3.s64 = ctx.r11.s64 + 10072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B99104"))) PPC_WEAK_FUNC(sub_83B99104);
PPC_FUNC_IMPL(__imp__sub_83B99104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B99108"))) PPC_WEAK_FUNC(sub_83B99108);
PPC_FUNC_IMPL(__imp__sub_83B99108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,10080
	ctx.r3.s64 = ctx.r11.s64 + 10080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B99114"))) PPC_WEAK_FUNC(sub_83B99114);
PPC_FUNC_IMPL(__imp__sub_83B99114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B99118"))) PPC_WEAK_FUNC(sub_83B99118);
PPC_FUNC_IMPL(__imp__sub_83B99118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,10088
	ctx.r3.s64 = ctx.r11.s64 + 10088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B99124"))) PPC_WEAK_FUNC(sub_83B99124);
PPC_FUNC_IMPL(__imp__sub_83B99124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B99128"))) PPC_WEAK_FUNC(sub_83B99128);
PPC_FUNC_IMPL(__imp__sub_83B99128) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-4644
	ctx.r7.s64 = ctx.r8.s64 + -4644;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-4644(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4644);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-4644(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4644, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B99150"))) PPC_WEAK_FUNC(sub_83B99150);
PPC_FUNC_IMPL(__imp__sub_83B99150) {
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
	// addi r3,r11,-4648
	ctx.r3.s64 = ctx.r11.s64 + -4648;
	// bl 0x83523120
	ctx.lr = 0x83B99168;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,10096
	ctx.r3.s64 = ctx.r10.s64 + 10096;
	// bl 0x831cdcc8
	ctx.lr = 0x83B99174;
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

__attribute__((alias("__imp__sub_83B99184"))) PPC_WEAK_FUNC(sub_83B99184);
PPC_FUNC_IMPL(__imp__sub_83B99184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B99188"))) PPC_WEAK_FUNC(sub_83B99188);
PPC_FUNC_IMPL(__imp__sub_83B99188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,10112
	ctx.r3.s64 = ctx.r11.s64 + 10112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B99194"))) PPC_WEAK_FUNC(sub_83B99194);
PPC_FUNC_IMPL(__imp__sub_83B99194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B99198"))) PPC_WEAK_FUNC(sub_83B99198);
PPC_FUNC_IMPL(__imp__sub_83B99198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,10120
	ctx.r3.s64 = ctx.r11.s64 + 10120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B991A4"))) PPC_WEAK_FUNC(sub_83B991A4);
PPC_FUNC_IMPL(__imp__sub_83B991A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B991A8"))) PPC_WEAK_FUNC(sub_83B991A8);
PPC_FUNC_IMPL(__imp__sub_83B991A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,10128
	ctx.r3.s64 = ctx.r11.s64 + 10128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B991B4"))) PPC_WEAK_FUNC(sub_83B991B4);
PPC_FUNC_IMPL(__imp__sub_83B991B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B991B8"))) PPC_WEAK_FUNC(sub_83B991B8);
PPC_FUNC_IMPL(__imp__sub_83B991B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,10136
	ctx.r3.s64 = ctx.r11.s64 + 10136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B991C4"))) PPC_WEAK_FUNC(sub_83B991C4);
PPC_FUNC_IMPL(__imp__sub_83B991C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B991C8"))) PPC_WEAK_FUNC(sub_83B991C8);
PPC_FUNC_IMPL(__imp__sub_83B991C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,10144
	ctx.r3.s64 = ctx.r11.s64 + 10144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B991D4"))) PPC_WEAK_FUNC(sub_83B991D4);
PPC_FUNC_IMPL(__imp__sub_83B991D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B991D8"))) PPC_WEAK_FUNC(sub_83B991D8);
PPC_FUNC_IMPL(__imp__sub_83B991D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,10152
	ctx.r3.s64 = ctx.r11.s64 + 10152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B991E4"))) PPC_WEAK_FUNC(sub_83B991E4);
PPC_FUNC_IMPL(__imp__sub_83B991E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B991E8"))) PPC_WEAK_FUNC(sub_83B991E8);
PPC_FUNC_IMPL(__imp__sub_83B991E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,10160
	ctx.r3.s64 = ctx.r11.s64 + 10160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B991F4"))) PPC_WEAK_FUNC(sub_83B991F4);
PPC_FUNC_IMPL(__imp__sub_83B991F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B991F8"))) PPC_WEAK_FUNC(sub_83B991F8);
PPC_FUNC_IMPL(__imp__sub_83B991F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,10168
	ctx.r3.s64 = ctx.r11.s64 + 10168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B99204"))) PPC_WEAK_FUNC(sub_83B99204);
PPC_FUNC_IMPL(__imp__sub_83B99204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B99208"))) PPC_WEAK_FUNC(sub_83B99208);
PPC_FUNC_IMPL(__imp__sub_83B99208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,10176
	ctx.r3.s64 = ctx.r11.s64 + 10176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B99214"))) PPC_WEAK_FUNC(sub_83B99214);
PPC_FUNC_IMPL(__imp__sub_83B99214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B99218"))) PPC_WEAK_FUNC(sub_83B99218);
PPC_FUNC_IMPL(__imp__sub_83B99218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,10184
	ctx.r3.s64 = ctx.r11.s64 + 10184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B99224"))) PPC_WEAK_FUNC(sub_83B99224);
PPC_FUNC_IMPL(__imp__sub_83B99224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B99228"))) PPC_WEAK_FUNC(sub_83B99228);
PPC_FUNC_IMPL(__imp__sub_83B99228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,10192
	ctx.r3.s64 = ctx.r11.s64 + 10192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B99234"))) PPC_WEAK_FUNC(sub_83B99234);
PPC_FUNC_IMPL(__imp__sub_83B99234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B99238"))) PPC_WEAK_FUNC(sub_83B99238);
PPC_FUNC_IMPL(__imp__sub_83B99238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,10200
	ctx.r3.s64 = ctx.r11.s64 + 10200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B99244"))) PPC_WEAK_FUNC(sub_83B99244);
PPC_FUNC_IMPL(__imp__sub_83B99244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B99248"))) PPC_WEAK_FUNC(sub_83B99248);
PPC_FUNC_IMPL(__imp__sub_83B99248) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-4632
	ctx.r7.s64 = ctx.r8.s64 + -4632;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-4632(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4632);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-4632(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4632, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B99270"))) PPC_WEAK_FUNC(sub_83B99270);
PPC_FUNC_IMPL(__imp__sub_83B99270) {
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
	// addi r3,r11,-4636
	ctx.r3.s64 = ctx.r11.s64 + -4636;
	// bl 0x83523120
	ctx.lr = 0x83B99288;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,10208
	ctx.r3.s64 = ctx.r10.s64 + 10208;
	// bl 0x831cdcc8
	ctx.lr = 0x83B99294;
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

__attribute__((alias("__imp__sub_83B992A4"))) PPC_WEAK_FUNC(sub_83B992A4);
PPC_FUNC_IMPL(__imp__sub_83B992A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B992A8"))) PPC_WEAK_FUNC(sub_83B992A8);
PPC_FUNC_IMPL(__imp__sub_83B992A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,10224
	ctx.r3.s64 = ctx.r11.s64 + 10224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B992B4"))) PPC_WEAK_FUNC(sub_83B992B4);
PPC_FUNC_IMPL(__imp__sub_83B992B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B992B8"))) PPC_WEAK_FUNC(sub_83B992B8);
PPC_FUNC_IMPL(__imp__sub_83B992B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,10232
	ctx.r3.s64 = ctx.r11.s64 + 10232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B992C4"))) PPC_WEAK_FUNC(sub_83B992C4);
PPC_FUNC_IMPL(__imp__sub_83B992C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B992C8"))) PPC_WEAK_FUNC(sub_83B992C8);
PPC_FUNC_IMPL(__imp__sub_83B992C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,10240
	ctx.r3.s64 = ctx.r11.s64 + 10240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B992D4"))) PPC_WEAK_FUNC(sub_83B992D4);
PPC_FUNC_IMPL(__imp__sub_83B992D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B992D8"))) PPC_WEAK_FUNC(sub_83B992D8);
PPC_FUNC_IMPL(__imp__sub_83B992D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,10248
	ctx.r3.s64 = ctx.r11.s64 + 10248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B992E4"))) PPC_WEAK_FUNC(sub_83B992E4);
PPC_FUNC_IMPL(__imp__sub_83B992E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B992E8"))) PPC_WEAK_FUNC(sub_83B992E8);
PPC_FUNC_IMPL(__imp__sub_83B992E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,10256
	ctx.r3.s64 = ctx.r11.s64 + 10256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B992F4"))) PPC_WEAK_FUNC(sub_83B992F4);
PPC_FUNC_IMPL(__imp__sub_83B992F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B992F8"))) PPC_WEAK_FUNC(sub_83B992F8);
PPC_FUNC_IMPL(__imp__sub_83B992F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,10264
	ctx.r3.s64 = ctx.r11.s64 + 10264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B99304"))) PPC_WEAK_FUNC(sub_83B99304);
PPC_FUNC_IMPL(__imp__sub_83B99304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B99308"))) PPC_WEAK_FUNC(sub_83B99308);
PPC_FUNC_IMPL(__imp__sub_83B99308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,10272
	ctx.r3.s64 = ctx.r11.s64 + 10272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B99314"))) PPC_WEAK_FUNC(sub_83B99314);
PPC_FUNC_IMPL(__imp__sub_83B99314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B99318"))) PPC_WEAK_FUNC(sub_83B99318);
PPC_FUNC_IMPL(__imp__sub_83B99318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,10280
	ctx.r3.s64 = ctx.r11.s64 + 10280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B99324"))) PPC_WEAK_FUNC(sub_83B99324);
PPC_FUNC_IMPL(__imp__sub_83B99324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B99328"))) PPC_WEAK_FUNC(sub_83B99328);
PPC_FUNC_IMPL(__imp__sub_83B99328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,10288
	ctx.r3.s64 = ctx.r11.s64 + 10288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B99334"))) PPC_WEAK_FUNC(sub_83B99334);
PPC_FUNC_IMPL(__imp__sub_83B99334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B99338"))) PPC_WEAK_FUNC(sub_83B99338);
PPC_FUNC_IMPL(__imp__sub_83B99338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,10296
	ctx.r3.s64 = ctx.r11.s64 + 10296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B99344"))) PPC_WEAK_FUNC(sub_83B99344);
PPC_FUNC_IMPL(__imp__sub_83B99344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B99348"))) PPC_WEAK_FUNC(sub_83B99348);
PPC_FUNC_IMPL(__imp__sub_83B99348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,10304
	ctx.r3.s64 = ctx.r11.s64 + 10304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B99354"))) PPC_WEAK_FUNC(sub_83B99354);
PPC_FUNC_IMPL(__imp__sub_83B99354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B99358"))) PPC_WEAK_FUNC(sub_83B99358);
PPC_FUNC_IMPL(__imp__sub_83B99358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,10312
	ctx.r3.s64 = ctx.r11.s64 + 10312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B99364"))) PPC_WEAK_FUNC(sub_83B99364);
PPC_FUNC_IMPL(__imp__sub_83B99364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B99368"))) PPC_WEAK_FUNC(sub_83B99368);
PPC_FUNC_IMPL(__imp__sub_83B99368) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-4620
	ctx.r7.s64 = ctx.r8.s64 + -4620;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-4620(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4620);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-4620(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4620, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B99390"))) PPC_WEAK_FUNC(sub_83B99390);
PPC_FUNC_IMPL(__imp__sub_83B99390) {
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
	// addi r3,r11,-4624
	ctx.r3.s64 = ctx.r11.s64 + -4624;
	// bl 0x83523120
	ctx.lr = 0x83B993A8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,10320
	ctx.r3.s64 = ctx.r10.s64 + 10320;
	// bl 0x831cdcc8
	ctx.lr = 0x83B993B4;
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

__attribute__((alias("__imp__sub_83B993C4"))) PPC_WEAK_FUNC(sub_83B993C4);
PPC_FUNC_IMPL(__imp__sub_83B993C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B993C8"))) PPC_WEAK_FUNC(sub_83B993C8);
PPC_FUNC_IMPL(__imp__sub_83B993C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,10336
	ctx.r3.s64 = ctx.r11.s64 + 10336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B993D4"))) PPC_WEAK_FUNC(sub_83B993D4);
PPC_FUNC_IMPL(__imp__sub_83B993D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B993D8"))) PPC_WEAK_FUNC(sub_83B993D8);
PPC_FUNC_IMPL(__imp__sub_83B993D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,10344
	ctx.r3.s64 = ctx.r11.s64 + 10344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B993E4"))) PPC_WEAK_FUNC(sub_83B993E4);
PPC_FUNC_IMPL(__imp__sub_83B993E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B993E8"))) PPC_WEAK_FUNC(sub_83B993E8);
PPC_FUNC_IMPL(__imp__sub_83B993E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,10352
	ctx.r3.s64 = ctx.r11.s64 + 10352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B993F4"))) PPC_WEAK_FUNC(sub_83B993F4);
PPC_FUNC_IMPL(__imp__sub_83B993F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B993F8"))) PPC_WEAK_FUNC(sub_83B993F8);
PPC_FUNC_IMPL(__imp__sub_83B993F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,10360
	ctx.r3.s64 = ctx.r11.s64 + 10360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B99404"))) PPC_WEAK_FUNC(sub_83B99404);
PPC_FUNC_IMPL(__imp__sub_83B99404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B99408"))) PPC_WEAK_FUNC(sub_83B99408);
PPC_FUNC_IMPL(__imp__sub_83B99408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,10368
	ctx.r3.s64 = ctx.r11.s64 + 10368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B99414"))) PPC_WEAK_FUNC(sub_83B99414);
PPC_FUNC_IMPL(__imp__sub_83B99414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B99418"))) PPC_WEAK_FUNC(sub_83B99418);
PPC_FUNC_IMPL(__imp__sub_83B99418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,10376
	ctx.r3.s64 = ctx.r11.s64 + 10376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B99424"))) PPC_WEAK_FUNC(sub_83B99424);
PPC_FUNC_IMPL(__imp__sub_83B99424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B99428"))) PPC_WEAK_FUNC(sub_83B99428);
PPC_FUNC_IMPL(__imp__sub_83B99428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,10384
	ctx.r3.s64 = ctx.r11.s64 + 10384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B99434"))) PPC_WEAK_FUNC(sub_83B99434);
PPC_FUNC_IMPL(__imp__sub_83B99434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B99438"))) PPC_WEAK_FUNC(sub_83B99438);
PPC_FUNC_IMPL(__imp__sub_83B99438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,10392
	ctx.r3.s64 = ctx.r11.s64 + 10392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B99444"))) PPC_WEAK_FUNC(sub_83B99444);
PPC_FUNC_IMPL(__imp__sub_83B99444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B99448"))) PPC_WEAK_FUNC(sub_83B99448);
PPC_FUNC_IMPL(__imp__sub_83B99448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,10400
	ctx.r3.s64 = ctx.r11.s64 + 10400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B99454"))) PPC_WEAK_FUNC(sub_83B99454);
PPC_FUNC_IMPL(__imp__sub_83B99454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B99458"))) PPC_WEAK_FUNC(sub_83B99458);
PPC_FUNC_IMPL(__imp__sub_83B99458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,10408
	ctx.r3.s64 = ctx.r11.s64 + 10408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B99464"))) PPC_WEAK_FUNC(sub_83B99464);
PPC_FUNC_IMPL(__imp__sub_83B99464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B99468"))) PPC_WEAK_FUNC(sub_83B99468);
PPC_FUNC_IMPL(__imp__sub_83B99468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B99474"))) PPC_WEAK_FUNC(sub_83B99474);
PPC_FUNC_IMPL(__imp__sub_83B99474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B99478"))) PPC_WEAK_FUNC(sub_83B99478);
PPC_FUNC_IMPL(__imp__sub_83B99478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,10424
	ctx.r3.s64 = ctx.r11.s64 + 10424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B99484"))) PPC_WEAK_FUNC(sub_83B99484);
PPC_FUNC_IMPL(__imp__sub_83B99484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B99488"))) PPC_WEAK_FUNC(sub_83B99488);
PPC_FUNC_IMPL(__imp__sub_83B99488) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-4608
	ctx.r7.s64 = ctx.r8.s64 + -4608;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-4608(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4608);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-4608(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4608, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B994B0"))) PPC_WEAK_FUNC(sub_83B994B0);
PPC_FUNC_IMPL(__imp__sub_83B994B0) {
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
	// addi r3,r11,-4612
	ctx.r3.s64 = ctx.r11.s64 + -4612;
	// bl 0x83523120
	ctx.lr = 0x83B994C8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,10432
	ctx.r3.s64 = ctx.r10.s64 + 10432;
	// bl 0x831cdcc8
	ctx.lr = 0x83B994D4;
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

__attribute__((alias("__imp__sub_83B994E4"))) PPC_WEAK_FUNC(sub_83B994E4);
PPC_FUNC_IMPL(__imp__sub_83B994E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B994E8"))) PPC_WEAK_FUNC(sub_83B994E8);
PPC_FUNC_IMPL(__imp__sub_83B994E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,10448
	ctx.r3.s64 = ctx.r11.s64 + 10448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B994F4"))) PPC_WEAK_FUNC(sub_83B994F4);
PPC_FUNC_IMPL(__imp__sub_83B994F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B994F8"))) PPC_WEAK_FUNC(sub_83B994F8);
PPC_FUNC_IMPL(__imp__sub_83B994F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,10456
	ctx.r3.s64 = ctx.r11.s64 + 10456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

